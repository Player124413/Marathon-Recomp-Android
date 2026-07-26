#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8221F8F0"))) PPC_WEAK_FUNC(sub_8221F8F0);
PPC_FUNC_IMPL(__imp__sub_8221F8F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x8221F8F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// std r5,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r5.u64);
	// std r6,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r6.u64);
	// std r7,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r7.u64);
	// std r8,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r8.u64);
	// lwz r31,172(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r26,180(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x8221f958
	if (ctx.cr6.eq) goto loc_8221F958;
	// lwz r30,208(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r29,204(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r28,200(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r27,192(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
loc_8221F934:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x8221F94C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8221f934
	if (!ctx.cr6.eq) goto loc_8221F934;
loc_8221F958:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8221F968:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8221f968
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221F968;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221F988"))) PPC_WEAK_FUNC(sub_8221F988);
PPC_FUNC_IMPL(__imp__sub_8221F988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8221F990;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// std r6,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r6.u64);
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// lwz r29,184(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r28,176(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r31,156(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r30,164(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8221f9dc
	if (ctx.cr6.eq) goto loc_8221F9DC;
loc_8221F9C0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8221F9D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8221f9c0
	if (!ctx.cr6.eq) goto loc_8221F9C0;
loc_8221F9DC:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// stw r29,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r29.u32);
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221F9F8"))) PPC_WEAK_FUNC(sub_8221F9F8);
PPC_FUNC_IMPL(__imp__sub_8221F9F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8221FA00;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// std r27,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r27.u64);
	// lwz r31,156(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r30,164(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8221fa44
	if (ctx.cr6.eq) goto loc_8221FA44;
	// lwz r29,168(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
loc_8221FA2C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8221FA38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8221fa2c
	if (!ctx.cr6.eq) goto loc_8221FA2C;
loc_8221FA44:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// std r27,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r27.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221FA58"))) PPC_WEAK_FUNC(sub_8221FA58);
PPC_FUNC_IMPL(__imp__sub_8221FA58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8221FA60;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
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
	// beq cr6,0x8221fab8
	if (ctx.cr6.eq) goto loc_8221FAB8;
	// lfs f31,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f31.f64 = double(temp.f32);
	// lwz r29,200(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r28,192(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
loc_8221FA98:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8221FAAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8221fa98
	if (!ctx.cr6.eq) goto loc_8221FA98;
loc_8221FAB8:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// stw r9,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// stw r8,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r8.u32);
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221FAF0"))) PPC_WEAK_FUNC(sub_8221FAF0);
PPC_FUNC_IMPL(__imp__sub_8221FAF0) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221ff24
	if (ctx.cr6.eq) goto loc_8221FF24;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221ff24
	if (ctx.cr6.eq) goto loc_8221FF24;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221fb38
	if (!ctx.cr6.eq) goto loc_8221FB38;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221fbc0
	if (ctx.cr6.eq) goto loc_8221FBC0;
loc_8221FB38:
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// addi r9,r9,-3352
	ctx.r9.s64 = ctx.r9.s64 + -3352;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8221fb7c
	if (!ctx.cr6.gt) goto loc_8221FB7C;
	// twi 31,r0,22
loc_8221FB7C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8221fb9c
	if (!ctx.cr6.gt) goto loc_8221FB9C;
	// twi 31,r0,22
loc_8221FB9C:
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// ld r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// bl 0x8221f860
	ctx.lr = 0x8221FBC0;
	sub_8221F860(ctx, base);
loc_8221FBC0:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221fbdc
	if (!ctx.cr6.eq) goto loc_8221FBDC;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221fc64
	if (ctx.cr6.eq) goto loc_8221FC64;
loc_8221FBDC:
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// addi r9,r9,-3272
	ctx.r9.s64 = ctx.r9.s64 + -3272;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8221fc20
	if (!ctx.cr6.gt) goto loc_8221FC20;
	// twi 31,r0,22
loc_8221FC20:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8221fc40
	if (!ctx.cr6.gt) goto loc_8221FC40;
	// twi 31,r0,22
loc_8221FC40:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// ld r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// bl 0x8221f860
	ctx.lr = 0x8221FC64;
	sub_8221F860(ctx, base);
loc_8221FC64:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221fc80
	if (!ctx.cr6.eq) goto loc_8221FC80;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221fd08
	if (ctx.cr6.eq) goto loc_8221FD08;
loc_8221FC80:
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// addi r9,r9,-3464
	ctx.r9.s64 = ctx.r9.s64 + -3464;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8221fcc4
	if (!ctx.cr6.gt) goto loc_8221FCC4;
	// twi 31,r0,22
loc_8221FCC4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8221fce4
	if (!ctx.cr6.gt) goto loc_8221FCE4;
	// twi 31,r0,22
loc_8221FCE4:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// ld r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// bl 0x8221f860
	ctx.lr = 0x8221FD08;
	sub_8221F860(ctx, base);
loc_8221FD08:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221fd24
	if (!ctx.cr6.eq) goto loc_8221FD24;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221fdac
	if (ctx.cr6.eq) goto loc_8221FDAC;
loc_8221FD24:
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// addi r9,r9,-3400
	ctx.r9.s64 = ctx.r9.s64 + -3400;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r8,44(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8221fd68
	if (!ctx.cr6.gt) goto loc_8221FD68;
	// twi 31,r0,22
loc_8221FD68:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8221fd88
	if (!ctx.cr6.gt) goto loc_8221FD88;
	// twi 31,r0,22
loc_8221FD88:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// ld r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// bl 0x8221f860
	ctx.lr = 0x8221FDAC;
	sub_8221F860(ctx, base);
loc_8221FDAC:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221fdc8
	if (!ctx.cr6.eq) goto loc_8221FDC8;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221fe50
	if (ctx.cr6.eq) goto loc_8221FE50;
loc_8221FDC8:
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// addi r9,r9,-3320
	ctx.r9.s64 = ctx.r9.s64 + -3320;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r8,68(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// lwz r10,64(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8221fe0c
	if (!ctx.cr6.gt) goto loc_8221FE0C;
	// twi 31,r0,22
loc_8221FE0C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8221fe2c
	if (!ctx.cr6.gt) goto loc_8221FE2C;
	// twi 31,r0,22
loc_8221FE2C:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// ld r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// bl 0x8221f860
	ctx.lr = 0x8221FE50;
	sub_8221F860(ctx, base);
loc_8221FE50:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221fe6c
	if (!ctx.cr6.eq) goto loc_8221FE6C;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221ff24
	if (ctx.cr6.eq) goto loc_8221FF24;
loc_8221FE6C:
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r7,r7,-3512
	ctx.r7.s64 = ctx.r7.s64 + -3512;
	// addi r9,r31,16
	ctx.r9.s64 = ctx.r31.s64 + 16;
	// lwz r6,84(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 84);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// lwz r6,80(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	// lwz r8,76(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r4,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// ble cr6,0x8221fed8
	if (!ctx.cr6.gt) goto loc_8221FED8;
	// twi 31,r0,22
loc_8221FED8:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8221fef8
	if (!ctx.cr6.gt) goto loc_8221FEF8;
	// twi 31,r0,22
loc_8221FEF8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r8,16(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// ld r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ld r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// bl 0x8221f8f0
	ctx.lr = 0x8221FF24;
	sub_8221F8F0(ctx, base);
loc_8221FF24:
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

__attribute__((alias("__imp__sub_8221FF38"))) PPC_WEAK_FUNC(sub_8221FF38);
PPC_FUNC_IMPL(__imp__sub_8221FF38) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// bl 0x8219fbb8
	ctx.lr = 0x8221FF5C;
	sub_8219FBB8(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82220030
	if (ctx.cr6.eq) goto loc_82220030;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82220030
	if (ctx.cr6.eq) goto loc_82220030;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221FF88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82220030
	if (ctx.cr6.eq) goto loc_82220030;
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bge cr6,0x8221ffb4
	if (!ctx.cr6.lt) goto loc_8221FFB4;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r10,r10,-3304
	ctx.r10.s64 = ctx.r10.s64 + -3304;
	// b 0x8221ffbc
	goto loc_8221FFBC;
loc_8221FFB4:
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r10,r10,-3496
	ctx.r10.s64 = ctx.r10.s64 + -3496;
loc_8221FFBC:
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8221ffe4
	if (!ctx.cr6.gt) goto loc_8221FFE4;
	// twi 31,r0,22
loc_8221FFE4:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82220004
	if (!ctx.cr6.gt) goto loc_82220004;
	// twi 31,r0,22
loc_82220004:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// ld r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// bl 0x8221f988
	ctx.lr = 0x8222002C;
	sub_8221F988(ctx, base);
	// stw r31,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r31.u32);
loc_82220030:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82220040
	if (ctx.cr6.eq) goto loc_82220040;
	// bl 0x821601b8
	ctx.lr = 0x82220040;
	sub_821601B8(ctx, base);
loc_82220040:
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

__attribute__((alias("__imp__sub_82220058"))) PPC_WEAK_FUNC(sub_82220058);
PPC_FUNC_IMPL(__imp__sub_82220058) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// bl 0x8219fbb8
	ctx.lr = 0x8222007C;
	sub_8219FBB8(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822201e8
	if (ctx.cr6.eq) goto loc_822201E8;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822201e8
	if (ctx.cr6.eq) goto loc_822201E8;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822200AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 60);
	// clrlwi r30,r3,24
	ctx.r30.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82220170
	if (ctx.cr6.eq) goto loc_82220170;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stb r3,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r3.u8);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// beq cr6,0x82220108
	if (ctx.cr6.eq) goto loc_82220108;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stb r9,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r9.u8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r10,r10,-3432
	ctx.r10.s64 = ctx.r10.s64 + -3432;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822200f8
	if (!ctx.cr6.gt) goto loc_822200F8;
	// twi 31,r0,22
loc_822200F8:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// b 0x8222013c
	goto loc_8222013C;
loc_82220108:
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stb r9,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r9.u8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r10,r10,-3288
	ctx.r10.s64 = ctx.r10.s64 + -3288;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82220130
	if (!ctx.cr6.gt) goto loc_82220130;
	// twi 31,r0,22
loc_82220130:
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_8222013C:
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82220150
	if (!ctx.cr6.gt) goto loc_82220150;
	// twi 31,r0,22
loc_82220150:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// ld r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// bl 0x8221f9f8
	ctx.lr = 0x82220170;
	sub_8221F9F8(ctx, base);
loc_82220170:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822201e8
	if (ctx.cr6.eq) goto loc_822201E8;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// addi r10,r10,-3368
	ctx.r10.s64 = ctx.r10.s64 + -3368;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stb r9,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r9.u8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822201a8
	if (!ctx.cr6.gt) goto loc_822201A8;
	// twi 31,r0,22
loc_822201A8:
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x822201c8
	if (!ctx.cr6.gt) goto loc_822201C8;
	// twi 31,r0,22
loc_822201C8:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// ld r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// bl 0x8221f9f8
	ctx.lr = 0x822201E8;
	sub_8221F9F8(ctx, base);
loc_822201E8:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822201f8
	if (ctx.cr6.eq) goto loc_822201F8;
	// bl 0x821601b8
	ctx.lr = 0x822201F8;
	sub_821601B8(ctx, base);
loc_822201F8:
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

__attribute__((alias("__imp__sub_82220210"))) PPC_WEAK_FUNC(sub_82220210);
PPC_FUNC_IMPL(__imp__sub_82220210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82220218;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// bl 0x8219fbb8
	ctx.lr = 0x8222022C;
	sub_8219FBB8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822203a4
	if (ctx.cr6.eq) goto loc_822203A4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822203a4
	if (ctx.cr6.eq) goto loc_822203A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82220258;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82220274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82220298
	if (ctx.cr6.eq) goto loc_82220298;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82220298
	if (ctx.cr6.eq) goto loc_82220298;
	// stw r29,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r29.u32);
loc_82220298:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82220324
	if (ctx.cr6.eq) goto loc_82220324;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// addi r10,r10,-3480
	ctx.r10.s64 = ctx.r10.s64 + -3480;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822202e0
	if (!ctx.cr6.gt) goto loc_822202E0;
	// twi 31,r0,22
loc_822202E0:
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82220300
	if (!ctx.cr6.gt) goto loc_82220300;
	// twi 31,r0,22
loc_82220300:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// ld r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// bl 0x8221f860
	ctx.lr = 0x82220324;
	sub_8221F860(ctx, base);
loc_82220324:
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// addi r10,r10,-3416
	ctx.r10.s64 = ctx.r10.s64 + -3416;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8222035c
	if (!ctx.cr6.gt) goto loc_8222035C;
	// twi 31,r0,22
loc_8222035C:
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x8222037c
	if (!ctx.cr6.gt) goto loc_8222037C;
	// twi 31,r0,22
loc_8222037C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// ld r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// bl 0x8221f860
	ctx.lr = 0x822203A0;
	sub_8221F860(ctx, base);
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
loc_822203A4:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822203b4
	if (ctx.cr6.eq) goto loc_822203B4;
	// bl 0x821601b8
	ctx.lr = 0x822203B4;
	sub_821601B8(ctx, base);
loc_822203B4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822203C0"))) PPC_WEAK_FUNC(sub_822203C0);
PPC_FUNC_IMPL(__imp__sub_822203C0) {
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
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,21,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82220400
	if (ctx.cr6.eq) goto loc_82220400;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82220404
	if (ctx.cr6.eq) goto loc_82220404;
loc_82220400:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82220404:
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// lbz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82220490
	if (ctx.cr6.eq) goto loc_82220490;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82220490
	if (!ctx.cr6.eq) goto loc_82220490;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// addi r10,r10,-3336
	ctx.r10.s64 = ctx.r10.s64 + -3336;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// stb r9,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r9.u8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82220450
	if (!ctx.cr6.gt) goto loc_82220450;
	// twi 31,r0,22
loc_82220450:
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82220470
	if (!ctx.cr6.gt) goto loc_82220470;
	// twi 31,r0,22
loc_82220470:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// ld r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// bl 0x8221f9f8
	ctx.lr = 0x82220490;
	sub_8221F9F8(ctx, base);
loc_82220490:
	// stb r30,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_822204B0"))) PPC_WEAK_FUNC(sub_822204B0);
PPC_FUNC_IMPL(__imp__sub_822204B0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x8219fbb8
	ctx.lr = 0x822204DC;
	sub_8219FBB8(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222050c
	if (ctx.cr6.eq) goto loc_8222050C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222050c
	if (ctx.cr6.eq) goto loc_8222050C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82220508;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_8222050C:
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x822205a0
	if (ctx.cr6.eq) goto loc_822205A0;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stfs f31,80(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// addi r10,r10,-3256
	ctx.r10.s64 = ctx.r10.s64 + -3256;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82220558
	if (!ctx.cr6.gt) goto loc_82220558;
	// twi 31,r0,22
loc_82220558:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82220578
	if (!ctx.cr6.gt) goto loc_82220578;
	// twi 31,r0,22
loc_82220578:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// ld r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// bl 0x82233930
	ctx.lr = 0x822205A0;
	sub_82233930(ctx, base);
loc_822205A0:
	// lbz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222063c
	if (ctx.cr6.eq) goto loc_8222063C;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r10,r10,-3256
	ctx.r10.s64 = ctx.r10.s64 + -3256;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// rldicl r7,r9,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// stb r8,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r8.u8);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822205f4
	if (!ctx.cr6.gt) goto loc_822205F4;
	// twi 31,r0,22
loc_822205F4:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82220614
	if (!ctx.cr6.gt) goto loc_82220614;
	// twi 31,r0,22
loc_82220614:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// ld r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// bl 0x82233930
	ctx.lr = 0x8222063C;
	sub_82233930(ctx, base);
loc_8222063C:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222064c
	if (ctx.cr6.eq) goto loc_8222064C;
	// bl 0x821601b8
	ctx.lr = 0x8222064C;
	sub_821601B8(ctx, base);
loc_8222064C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82220668"))) PPC_WEAK_FUNC(sub_82220668);
PPC_FUNC_IMPL(__imp__sub_82220668) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x8219fbb8
	ctx.lr = 0x8222069C;
	sub_8219FBB8(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822206e8
	if (ctx.cr6.eq) goto loc_822206E8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822206e8
	if (ctx.cr6.eq) goto loc_822206E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822206C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822206E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_822206E8:
	// lfs f0,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82220700
	if (!ctx.cr6.eq) goto loc_82220700;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8222078c
	if (ctx.cr6.eq) goto loc_8222078C;
loc_82220700:
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// addi r9,r9,-3448
	ctx.r9.s64 = ctx.r9.s64 + -3448;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// ble cr6,0x82220740
	if (!ctx.cr6.gt) goto loc_82220740;
	// twi 31,r0,22
loc_82220740:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82220760
	if (!ctx.cr6.gt) goto loc_82220760;
	// twi 31,r0,22
loc_82220760:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// ld r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// bl 0x8221fa58
	ctx.lr = 0x82220784;
	sub_8221FA58(ctx, base);
	// stfs f31,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
loc_8222078C:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222079c
	if (ctx.cr6.eq) goto loc_8222079C;
	// bl 0x821601b8
	ctx.lr = 0x8222079C;
	sub_821601B8(ctx, base);
loc_8222079C:
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

__attribute__((alias("__imp__sub_822207B8"))) PPC_WEAK_FUNC(sub_822207B8);
PPC_FUNC_IMPL(__imp__sub_822207B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x822207C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// beq cr6,0x82220a94
	if (ctx.cr6.eq) goto loc_82220A94;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82220a94
	if (ctx.cr6.eq) goto loc_82220A94;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82220800
	if (ctx.cr6.lt) goto loc_82220800;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82220804
	goto loc_82220804;
loc_82220800:
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
loc_82220804:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82220a94
	if (ctx.cr6.eq) goto loc_82220A94;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,32084
	ctx.r10.s64 = ctx.r11.s64 + 32084;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82220818:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8222083c
	if (ctx.cr6.eq) goto loc_8222083C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82220818
	if (ctx.cr6.eq) goto loc_82220818;
loc_8222083C:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82220888
	if (!ctx.cr6.eq) goto loc_82220888;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8220e418
	ctx.lr = 0x82220860;
	sub_8220E418(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r28,44
	ctx.r11.s64 = ctx.r28.s64 + 44;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x821600c0
	ctx.lr = 0x82220878;
	sub_821600C0(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82220888
	if (ctx.cr6.eq) goto loc_82220888;
	// bl 0x821601b8
	ctx.lr = 0x82220888;
	sub_821601B8(ctx, base);
loc_82220888:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-31552
	ctx.r10.s64 = ctx.r11.s64 + -31552;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82220894:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822208b8
	if (ctx.cr6.eq) goto loc_822208B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82220894
	if (ctx.cr6.eq) goto loc_82220894;
loc_822208B8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82220900
	if (!ctx.cr6.eq) goto loc_82220900;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8221f6a8
	ctx.lr = 0x822208D8;
	sub_8221F6A8(ctx, base);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r11,r28,52
	ctx.r11.s64 = ctx.r28.s64 + 52;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x821600c0
	ctx.lr = 0x822208F0;
	sub_821600C0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82220900
	if (ctx.cr6.eq) goto loc_82220900;
	// bl 0x821601b8
	ctx.lr = 0x82220900;
	sub_821601B8(ctx, base);
loc_82220900:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,13988
	ctx.r10.s64 = ctx.r11.s64 + 13988;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8222090C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82220930
	if (ctx.cr6.eq) goto loc_82220930;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8222090c
	if (ctx.cr6.eq) goto loc_8222090C;
loc_82220930:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82220978
	if (!ctx.cr6.eq) goto loc_82220978;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x821e09e0
	ctx.lr = 0x82220950;
	sub_821E09E0(ctx, base);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r11,r28,84
	ctx.r11.s64 = ctx.r28.s64 + 84;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x821600c0
	ctx.lr = 0x82220968;
	sub_821600C0(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82220978
	if (ctx.cr6.eq) goto loc_82220978;
	// bl 0x821601b8
	ctx.lr = 0x82220978;
	sub_821601B8(ctx, base);
loc_82220978:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-17360
	ctx.r10.s64 = ctx.r11.s64 + -17360;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82220984:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822209a8
	if (ctx.cr6.eq) goto loc_822209A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82220984
	if (ctx.cr6.eq) goto loc_82220984;
loc_822209A8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82220a94
	if (!ctx.cr6.eq) goto loc_82220A94;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8221f740
	ctx.lr = 0x822209C8;
	sub_8221F740(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82220a6c
	if (ctx.cr6.eq) goto loc_82220A6C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82220a6c
	if (ctx.cr6.eq) goto loc_82220A6C;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r10,r10,-3384
	ctx.r10.s64 = ctx.r10.s64 + -3384;
	// addi r11,r28,16
	ctx.r11.s64 = ctx.r28.s64 + 16;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// ld r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82220a24
	if (!ctx.cr6.gt) goto loc_82220A24;
	// twi 31,r0,22
loc_82220A24:
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82220a44
	if (!ctx.cr6.gt) goto loc_82220A44;
	// twi 31,r0,22
loc_82220A44:
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// ld r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// bl 0x8221f988
	ctx.lr = 0x82220A6C;
	sub_8221F988(ctx, base);
loc_82220A6C:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r28,64
	ctx.r11.s64 = ctx.r28.s64 + 64;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x821600c0
	ctx.lr = 0x82220A84;
	sub_821600C0(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82220a94
	if (ctx.cr6.eq) goto loc_82220A94;
	// bl 0x821601b8
	ctx.lr = 0x82220A94;
	sub_821601B8(ctx, base);
loc_82220A94:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220AA0"))) PPC_WEAK_FUNC(sub_82220AA0);
PPC_FUNC_IMPL(__imp__sub_82220AA0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r31,r30,-8
	ctx.r31.s64 = ctx.r30.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221faf0
	ctx.lr = 0x82220ACC;
	sub_8221FAF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221ff38
	ctx.lr = 0x82220AD4;
	sub_8221FF38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82220058
	ctx.lr = 0x82220ADC;
	sub_82220058(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82220210
	ctx.lr = 0x82220AE4;
	sub_82220210(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822203c0
	ctx.lr = 0x82220AEC;
	sub_822203C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822204b0
	ctx.lr = 0x82220AF4;
	sub_822204B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82220668
	ctx.lr = 0x82220AFC;
	sub_82220668(ctx, base);
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// addi r10,r10,7848
	ctx.r10.s64 = ctx.r10.s64 + 7848;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82220b38
	if (!ctx.cr6.gt) goto loc_82220B38;
	// twi 31,r0,22
loc_82220B38:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82220b58
	if (!ctx.cr6.gt) goto loc_82220B58;
	// twi 31,r0,22
loc_82220B58:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// ld r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// bl 0x82233930
	ctx.lr = 0x82220B80;
	sub_82233930(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82220be0
	if (ctx.cr6.eq) goto loc_82220BE0;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82220be0
	if (ctx.cr6.eq) goto loc_82220BE0;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
loc_82220BE0:
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

__attribute__((alias("__imp__sub_82220C00"))) PPC_WEAK_FUNC(sub_82220C00);
PPC_FUNC_IMPL(__imp__sub_82220C00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82220C08;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8221ed78
	ctx.lr = 0x82220C14;
	sub_8221ED78(ctx, base);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221ed88
	ctx.lr = 0x82220C20;
	sub_8221ED88(ctx, base);
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8221edd8
	ctx.lr = 0x82220C2C;
	sub_8221EDD8(ctx, base);
	// addi r27,r31,12
	ctx.r27.s64 = ctx.r31.s64 + 12;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8221ee08
	ctx.lr = 0x82220C38;
	sub_8221EE08(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r11,r11,-17264
	ctx.r11.s64 = ctx.r11.s64 + -17264;
	// addi r10,r10,-17320
	ctx.r10.s64 = ctx.r10.s64 + -17320;
	// addi r9,r9,-17332
	ctx.r9.s64 = ctx.r9.s64 + -17332;
	// addi r8,r8,-17348
	ctx.r8.s64 = ctx.r8.s64 + -17348;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r3,92
	ctx.r3.s64 = 92;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// bl 0x82186158
	ctx.lr = 0x82220C80;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82220cec
	if (ctx.cr6.eq) goto loc_82220CEC;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r30.u32);
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// stw r30,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r30.u32);
	// stw r30,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r30.u32);
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// stw r30,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r30.u32);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// stw r30,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r30.u32);
	// stw r30,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r30.u32);
	// stw r30,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r30.u32);
	// stw r30,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r30.u32);
	// stw r30,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r30.u32);
	// stw r30,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r30.u32);
	// stw r30,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r30.u32);
	// stw r30,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r30.u32);
	// stw r30,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r30.u32);
	// b 0x82220cf0
	goto loc_82220CF0;
loc_82220CEC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82220CF0:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r30.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// bl 0x8221f5f8
	ctx.lr = 0x82220D0C;
	sub_8221F5F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,5424(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5424);
	ctx.f0.f64 = double(temp.f32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stb r30,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r30.u8);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stb r30,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r30.u8);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stb r30,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r30.u8);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220D68"))) PPC_WEAK_FUNC(sub_82220D68);
PPC_FUNC_IMPL(__imp__sub_82220D68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x82220ef0
	sub_82220EF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220D70"))) PPC_WEAK_FUNC(sub_82220D70);
PPC_FUNC_IMPL(__imp__sub_82220D70) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82220ef0
	sub_82220EF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220D78"))) PPC_WEAK_FUNC(sub_82220D78);
PPC_FUNC_IMPL(__imp__sub_82220D78) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82220ef0
	sub_82220EF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220D80"))) PPC_WEAK_FUNC(sub_82220D80);
PPC_FUNC_IMPL(__imp__sub_82220D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82220D88;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// addi r27,r31,12
	ctx.r27.s64 = ctx.r31.s64 + 12;
	// addi r11,r11,-17264
	ctx.r11.s64 = ctx.r11.s64 + -17264;
	// addi r10,r10,-17320
	ctx.r10.s64 = ctx.r10.s64 + -17320;
	// addi r9,r9,-17332
	ctx.r9.s64 = ctx.r9.s64 + -17332;
	// addi r8,r8,-17348
	ctx.r8.s64 = ctx.r8.s64 + -17348;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82220df8
	if (ctx.cr6.eq) goto loc_82220DF8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne 0x82220df8
	if (!ctx.cr0.eq) goto loc_82220DF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82220DF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82220DF8:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82220e24
	if (ctx.cr6.eq) goto loc_82220E24;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne 0x82220e24
	if (!ctx.cr0.eq) goto loc_82220E24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82220E24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82220E24:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82220e50
	if (ctx.cr6.eq) goto loc_82220E50;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne 0x82220e50
	if (!ctx.cr0.eq) goto loc_82220E50;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82220E50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82220E50:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82220e7c
	if (ctx.cr6.eq) goto loc_82220E7C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne 0x82220e7c
	if (!ctx.cr0.eq) goto loc_82220E7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82220E7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82220E7C:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82220e8c
	if (ctx.cr6.eq) goto loc_82220E8C;
	// bl 0x821601b8
	ctx.lr = 0x82220E8C;
	sub_821601B8(ctx, base);
loc_82220E8C:
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82220eb4
	if (ctx.cr6.eq) goto loc_82220EB4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82402228
	ctx.lr = 0x82220EAC;
	sub_82402228(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82220EB4;
	sub_82186190(ctx, base);
loc_82220EB4:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// bl 0x8221ee08
	ctx.lr = 0x82220ECC;
	sub_8221EE08(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8221edd8
	ctx.lr = 0x82220ED4;
	sub_8221EDD8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221ed88
	ctx.lr = 0x82220EDC;
	sub_8221ED88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221ed78
	ctx.lr = 0x82220EE4;
	sub_8221ED78(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220EF0"))) PPC_WEAK_FUNC(sub_82220EF0);
PPC_FUNC_IMPL(__imp__sub_82220EF0) {
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
	// bl 0x82220d80
	ctx.lr = 0x82220F10;
	sub_82220D80(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82220f28
	if (ctx.cr6.eq) goto loc_82220F28;
	// bl 0x82186190
	ctx.lr = 0x82220F24;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82220F28:
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

__attribute__((alias("__imp__sub_82220F40"))) PPC_WEAK_FUNC(sub_82220F40);
PPC_FUNC_IMPL(__imp__sub_82220F40) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82220f90
	if (ctx.cr6.eq) goto loc_82220F90;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82220f90
	if (ctx.cr6.eq) goto loc_82220F90;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8221f3c8
	ctx.lr = 0x82220F84;
	sub_8221F3C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x8239e8f0
	ctx.lr = 0x82220F90;
	sub_8239E8F0(ctx, base);
loc_82220F90:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82220fa0
	if (ctx.cr6.eq) goto loc_82220FA0;
	// bl 0x821601b8
	ctx.lr = 0x82220FA0;
	sub_821601B8(ctx, base);
loc_82220FA0:
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

__attribute__((alias("__imp__sub_82220FB8"))) PPC_WEAK_FUNC(sub_82220FB8);
PPC_FUNC_IMPL(__imp__sub_82220FB8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,-32764
	ctx.r4.s64 = ctx.r11.s64 + -32764;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8221f1b8
	ctx.lr = 0x82220FE0;
	sub_8221F1B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-17252
	ctx.r10.s64 = ctx.r11.s64 + -17252;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r10,-32079
	ctx.r10.s64 = -2102329344;
	// lwz r10,2596(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2596);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82221038"))) PPC_WEAK_FUNC(sub_82221038);
PPC_FUNC_IMPL(__imp__sub_82221038) {
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
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222105c
	if (ctx.cr6.eq) goto loc_8222105C;
	// bl 0x82581e38
	ctx.lr = 0x8222105C;
	sub_82581E38(ctx, base);
loc_8222105C:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222106c
	if (ctx.cr6.eq) goto loc_8222106C;
	// bl 0x82581e38
	ctx.lr = 0x8222106C;
	sub_82581E38(ctx, base);
loc_8222106C:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222107c
	if (ctx.cr6.eq) goto loc_8222107C;
	// bl 0x82581e38
	ctx.lr = 0x8222107C;
	sub_82581E38(ctx, base);
loc_8222107C:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222108c
	if (ctx.cr6.eq) goto loc_8222108C;
	// bl 0x821601b8
	ctx.lr = 0x8222108C;
	sub_821601B8(ctx, base);
loc_8222108C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221f0e8
	ctx.lr = 0x82221094;
	sub_8221F0E8(ctx, base);
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

__attribute__((alias("__imp__sub_822210A8"))) PPC_WEAK_FUNC(sub_822210A8);
PPC_FUNC_IMPL(__imp__sub_822210A8) {
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
	// bl 0x82221038
	ctx.lr = 0x822210C8;
	sub_82221038(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822210e0
	if (ctx.cr6.eq) goto loc_822210E0;
	// bl 0x82186190
	ctx.lr = 0x822210DC;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822210E0:
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

__attribute__((alias("__imp__sub_822210F8"))) PPC_WEAK_FUNC(sub_822210F8);
PPC_FUNC_IMPL(__imp__sub_822210F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82221100"))) PPC_WEAK_FUNC(sub_82221100);
PPC_FUNC_IMPL(__imp__sub_82221100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82221108"))) PPC_WEAK_FUNC(sub_82221108);
PPC_FUNC_IMPL(__imp__sub_82221108) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82221110"))) PPC_WEAK_FUNC(sub_82221110);
PPC_FUNC_IMPL(__imp__sub_82221110) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bgt cr6,0x82221148
	if (ctx.cr6.gt) goto loc_82221148;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
loc_82221148:
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82221160"))) PPC_WEAK_FUNC(sub_82221160);
PPC_FUNC_IMPL(__imp__sub_82221160) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82221178
	if (!ctx.cr6.gt) goto loc_82221178;
	// twi 31,r0,22
loc_82221178:
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8222118c
	if (ctx.cr6.lt) goto loc_8222118C;
	// twi 31,r0,22
loc_8222118C:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8222119c
	if (ctx.cr6.gt) goto loc_8222119C;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_8222119C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822211B8"))) PPC_WEAK_FUNC(sub_822211B8);
PPC_FUNC_IMPL(__imp__sub_822211B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x822211C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// ori r31,r11,65535
	ctx.r31.u64 = ctx.r11.u64 | 65535;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x822211e8
	if (!ctx.cr6.lt) goto loc_822211E8;
	// bl 0x821e67a8
	ctx.lr = 0x822211E8;
	sub_821E67A8(ctx, base);
loc_822211E8:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x822211fc
	if (!ctx.cr6.lt) goto loc_822211FC;
	// li r10,8
	ctx.r10.s64 = 8;
loc_822211FC:
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82221214
	if (!ctx.cr6.lt) goto loc_82221214;
	// subf r9,r10,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82221214
	if (ctx.cr6.gt) goto loc_82221214;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
loc_82221214:
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r29,r11,31,1,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x8265e0c8
	ctx.lr = 0x82221228;
	sub_8265E0C8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r31,r29,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// add r5,r31,r11
	ctx.r5.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r3,r31,r27
	ctx.r3.u64 = ctx.r31.u64 + ctx.r27.u64;
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r28,r6,r3
	ctx.r28.u64 = ctx.r6.u64 + ctx.r3.u64;
	// beq cr6,0x82221268
	if (ctx.cr6.eq) goto loc_82221268;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x826dead8
	ctx.lr = 0x82221268;
	sub_826DEAD8(ctx, base);
loc_82221268:
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x822212e4
	if (ctx.cr6.gt) goto loc_822212E4;
	// subf r11,r5,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r5.s64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r31,r6,r28
	ctx.r31.u64 = ctx.r6.u64 + ctx.r28.u64;
	// beq cr6,0x8222129c
	if (ctx.cr6.eq) goto loc_8222129C;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826dead8
	ctx.lr = 0x8222129C;
	sub_826DEAD8(ctx, base);
loc_8222129C:
	// subf r10,r29,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r29.s64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822212c0
	if (ctx.cr6.eq) goto loc_822212C0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822212B4:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822212b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822212B4;
loc_822212C0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8222135c
	if (ctx.cr6.eq) goto loc_8222135C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_822212D4:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822212d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822212D4;
	// b 0x8222135c
	goto loc_8222135C;
loc_822212E4:
	// rlwinm r29,r26,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r5,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r5.s64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222130c
	if (ctx.cr6.eq) goto loc_8222130C;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x826dead8
	ctx.lr = 0x8222130C;
	sub_826DEAD8(ctx, base);
loc_8222130C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r5,r29,r11
	ctx.r5.u64 = ctx.r29.u64 + ctx.r11.u64;
	// subf r10,r5,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r5.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r31,r6,r27
	ctx.r31.u64 = ctx.r6.u64 + ctx.r27.u64;
	// beq cr6,0x8222133c
	if (ctx.cr6.eq) goto loc_8222133C;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826dead8
	ctx.lr = 0x8222133C;
	sub_826DEAD8(ctx, base);
loc_8222133C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8222135c
	if (ctx.cr6.eq) goto loc_8222135C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
loc_82221350:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82221350
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82221350;
loc_8222135C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222136c
	if (ctx.cr6.eq) goto loc_8222136C;
	// bl 0x82186190
	ctx.lr = 0x8222136C;
	sub_82186190(ctx, base);
loc_8222136C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221388"))) PPC_WEAK_FUNC(sub_82221388);
PPC_FUNC_IMPL(__imp__sub_82221388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82221390;
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
	// bne cr6,0x822213d0
	if (!ctx.cr6.eq) goto loc_822213D0;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x822213d0
	if (ctx.cr6.gt) goto loc_822213D0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822211b8
	ctx.lr = 0x822213D0;
	sub_822211B8(ctx, base);
loc_822213D0:
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
	// bgt cr6,0x822213f0
	if (ctx.cr6.gt) goto loc_822213F0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_822213F0:
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82221414
	if (!ctx.cr6.eq) goto loc_82221414;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82186158
	ctx.lr = 0x8222140C;
	sub_82186158(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r3,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
loc_82221414:
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
	// beq cr6,0x8222143c
	if (ctx.cr6.eq) goto loc_8222143C;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8222143C:
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

__attribute__((alias("__imp__sub_82221450"))) PPC_WEAK_FUNC(sub_82221450);
PPC_FUNC_IMPL(__imp__sub_82221450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82221458;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82223500
	ctx.lr = 0x82221470;
	sub_82223500(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// addi r4,r11,-31120
	ctx.r4.s64 = ctx.r11.s64 + -31120;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221f1b8
	ctx.lr = 0x82221484;
	sub_8221F1B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r28,r31,60
	ctx.r28.s64 = ctx.r31.s64 + 60;
	// addi r11,r11,14116
	ctx.r11.s64 = ctx.r11.s64 + 14116;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x8221edd8
	ctx.lr = 0x8222149C;
	sub_8221EDD8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r26,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r26.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,-17184
	ctx.r11.s64 = ctx.r11.s64 + -17184;
	// addi r9,r9,-17192
	ctx.r9.s64 = ctx.r9.s64 + -17192;
	// lfs f31,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stfs f31,76(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// addi r10,r10,-17200
	ctx.r10.s64 = ctx.r10.s64 + -17200;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r8,-17212
	ctx.r8.s64 = ctx.r8.s64 + -17212;
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// addi r9,r31,80
	ctx.r9.s64 = ctx.r31.s64 + 80;
	// addi r30,r31,96
	ctx.r30.s64 = ctx.r31.s64 + 96;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lis r10,-32072
	ctx.r10.s64 = -2101870592;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r10,-4608
	ctx.r10.s64 = ctx.r10.s64 + -4608;
	// stw r8,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// bl 0x822232a0
	ctx.lr = 0x82221524;
	sub_822232A0(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x822233e8
	ctx.lr = 0x82221530;
	sub_822233E8(ctx, base);
	// lis r8,0
	ctx.r8.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// ori r4,r8,32768
	ctx.r4.u64 = ctx.r8.u64 | 32768;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,16
	ctx.r9.s64 = 16;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// addi r3,r31,172
	ctx.r3.s64 = ctx.r31.s64 + 172;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// stw r9,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r9.u32);
	// stw r8,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r8.u32);
	// bl 0x822232a0
	ctx.lr = 0x82221564;
	sub_822232A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,8156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,188(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// bl 0x82221388
	ctx.lr = 0x82221584;
	sub_82221388(ctx, base);
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

__attribute__((alias("__imp__sub_82221598"))) PPC_WEAK_FUNC(sub_82221598);
PPC_FUNC_IMPL(__imp__sub_82221598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x822215A0;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r31,80
	ctx.r29.s64 = ctx.r31.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,76(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// bl 0x825d1e48
	ctx.lr = 0x822215D8;
	sub_825D1E48(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822232d0
	ctx.lr = 0x822215E8;
	sub_822232D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82223418
	ctx.lr = 0x822215F8;
	sub_82223418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,172
	ctx.r3.s64 = ctx.r31.s64 + 172;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82223170
	ctx.lr = 0x82221608;
	sub_82223170(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822219d0
	if (ctx.cr6.eq) goto loc_822219D0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822219d0
	if (ctx.cr6.eq) goto loc_822219D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82399d38
	ctx.lr = 0x82221628;
	sub_82399D38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822219d0
	if (ctx.cr6.eq) goto loc_822219D0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x825d2200
	ctx.lr = 0x82221658;
	sub_825D2200(ctx, base);
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r6,r11,13312
	ctx.r6.s64 = ctx.r11.s64 + 13312;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,13328
	ctx.r4.s64 = ctx.r11.s64 + 13328;
	// bl 0x821e8778
	ctx.lr = 0x82221678;
	sub_821E8778(ctx, base);
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// bgt cr6,0x82221694
	if (ctx.cr6.gt) goto loc_82221694;
	// stfs f30,76(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// b 0x82221698
	goto loc_82221698;
loc_82221694:
	// stfs f31,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
loc_82221698:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x822216b0
	if (!ctx.cr6.gt) goto loc_822216B0;
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// b 0x822216bc
	goto loc_822216BC;
loc_822216B0:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x822216c0
	if (!ctx.cr6.lt) goto loc_822216C0;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
loc_822216BC:
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_822216C0:
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x822216d8
	if (!ctx.cr6.gt) goto loc_822216D8;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// b 0x822216e8
	goto loc_822216E8;
loc_822216D8:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x822216ec
	if (!ctx.cr6.lt) goto loc_822216EC;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
loc_822216E8:
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_822216EC:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8222170c
	if (!ctx.cr6.eq) goto loc_8222170C;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
loc_8222170C:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82221728
	if (!ctx.cr6.eq) goto loc_82221728;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
loc_82221728:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82221744
	if (!ctx.cr6.eq) goto loc_82221744;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_82221744:
	// lbz r11,129(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 129);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222175c
	if (ctx.cr6.eq) goto loc_8222175C;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_8222175C:
	// lbz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82221774
	if (ctx.cr6.eq) goto loc_82221774;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_82221774:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82221794
	if (!ctx.cr6.eq) goto loc_82221794;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 512;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
loc_82221794:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822217b0
	if (!ctx.cr6.eq) goto loc_822217B0;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
loc_822217B0:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822217cc
	if (!ctx.cr6.eq) goto loc_822217CC;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_822217CC:
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822217ec
	if (!ctx.cr6.eq) goto loc_822217EC;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_822217EC:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8222180c
	if (!ctx.cr6.eq) goto loc_8222180C;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// oris r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 65536;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
loc_8222180C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82221828
	if (!ctx.cr6.eq) goto loc_82221828;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// oris r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 131072;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
loc_82221828:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82221844
	if (!ctx.cr6.eq) goto loc_82221844;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_82221844:
	// lbz r11,181(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 181);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222185c
	if (ctx.cr6.eq) goto loc_8222185C;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_8222185C:
	// lbz r11,142(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 142);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82221874
	if (ctx.cr6.eq) goto loc_82221874;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r11,r11,18432
	ctx.r11.u64 = ctx.r11.u64 | 18432;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_82221874:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82221890
	if (ctx.cr6.eq) goto loc_82221890;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_82221890:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822218ac
	if (ctx.cr6.eq) goto loc_822218AC;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r11,r11,20480
	ctx.r11.u64 = ctx.r11.u64 | 20480;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_822218AC:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822218c8
	if (ctx.cr6.eq) goto loc_822218C8;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_822218C8:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822218e4
	if (ctx.cr6.eq) goto loc_822218E4;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_822218E4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82221900
	if (ctx.cr6.eq) goto loc_82221900;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_82221900:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222191c
	if (ctx.cr6.eq) goto loc_8222191C;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_8222191C:
	// fcmpu cr6,f30,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f13.f64);
	// ble cr6,0x822219d0
	if (!ctx.cr6.gt) goto loc_822219D0;
	// addi r30,r31,96
	ctx.r30.s64 = ctx.r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82221160
	ctx.lr = 0x82221930;
	sub_82221160(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x825d4208
	ctx.lr = 0x82221944;
	sub_825D4208(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// fmuls f31,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825d4178
	ctx.lr = 0x82221954;
	sub_825D4178(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-17156(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17156);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x822219bc
	if (!ctx.cr6.gt) goto loc_822219BC;
	// fdivs f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 / ctx.f31.f64));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82221988
	if (ctx.cr6.gt) goto loc_82221988;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5424);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8222198c
	if (!ctx.cr6.lt) goto loc_8222198C;
loc_82221988:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
loc_8222198C:
	// bl 0x826e0370
	ctx.lr = 0x82221990;
	sub_826E0370(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-29804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822219bc
	if (!ctx.cr6.lt) goto loc_822219BC;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_822219BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82221110
	ctx.lr = 0x822219C4;
	sub_82221110(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82221388
	ctx.lr = 0x822219D0;
	sub_82221388(ctx, base);
loc_822219D0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822219E0"))) PPC_WEAK_FUNC(sub_822219E0);
PPC_FUNC_IMPL(__imp__sub_822219E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,72(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822219E8"))) PPC_WEAK_FUNC(sub_822219E8);
PPC_FUNC_IMPL(__imp__sub_822219E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822219F0"))) PPC_WEAK_FUNC(sub_822219F0);
PPC_FUNC_IMPL(__imp__sub_822219F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x822219F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82223500
	ctx.lr = 0x82221A0C;
	sub_82223500(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// addi r4,r11,-31120
	ctx.r4.s64 = ctx.r11.s64 + -31120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221f1b8
	ctx.lr = 0x82221A20;
	sub_8221F1B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r29,r31,60
	ctx.r29.s64 = ctx.r31.s64 + 60;
	// addi r11,r11,14116
	ctx.r11.s64 = ctx.r11.s64 + 14116;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x8221edd8
	ctx.lr = 0x82221A38;
	sub_8221EDD8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,-17120
	ctx.r11.s64 = ctx.r11.s64 + -17120;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r10,r10,-17128
	ctx.r10.s64 = ctx.r10.s64 + -17128;
	// lfs f0,3544(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// lfs f0,8156(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8156);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,-17148
	ctx.r9.s64 = ctx.r9.s64 + -17148;
	// addi r8,r8,-17140
	ctx.r8.s64 = ctx.r8.s64 + -17140;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,-4608
	ctx.r11.s64 = ctx.r11.s64 + -4608;
	// addi r10,r31,80
	ctx.r10.s64 = ctx.r31.s64 + 80;
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// stw r7,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r7.u32);
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221AB0"))) PPC_WEAK_FUNC(sub_82221AB0);
PPC_FUNC_IMPL(__imp__sub_82221AB0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-60
	ctx.r3.s64 = ctx.r3.s64 + -60;
	// b 0x82221b40
	sub_82221B40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221AB8"))) PPC_WEAK_FUNC(sub_82221AB8);
PPC_FUNC_IMPL(__imp__sub_82221AB8) {
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
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bne cr6,0x82221adc
	if (!ctx.cr6.eq) goto loc_82221ADC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82221ADC:
	// bl 0x8221edd8
	ctx.lr = 0x82221AE0;
	sub_8221EDD8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bne cr6,0x82221af0
	if (!ctx.cr6.eq) goto loc_82221AF0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82221AF0:
	// bl 0x8221f0e8
	ctx.lr = 0x82221AF4;
	sub_8221F0E8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82221b08
	if (ctx.cr6.eq) goto loc_82221B08;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82221B08:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82221b1c
	if (ctx.cr6.eq) goto loc_82221B1C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82221B1C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,7884
	ctx.r11.s64 = ctx.r11.s64 + 7884;
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

__attribute__((alias("__imp__sub_82221B40"))) PPC_WEAK_FUNC(sub_82221B40);
PPC_FUNC_IMPL(__imp__sub_82221B40) {
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
	// bl 0x82221ab8
	ctx.lr = 0x82221B60;
	sub_82221AB8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82221b78
	if (ctx.cr6.eq) goto loc_82221B78;
	// bl 0x82186190
	ctx.lr = 0x82221B74;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82221B78:
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

extern bool PlayerDebugMode_RemapDebugExitButton(PPCRegister& r30);

__attribute__((alias("__imp__sub_82221B90"))) PPC_WEAK_FUNC(sub_82221B90);
PPC_FUNC_IMPL(__imp__sub_82221B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82221B98;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r31,80
	ctx.r29.s64 = ctx.r31.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f30,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f30.f64 = double(temp.f32);
	// stfs f30,72(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
	// bl 0x825d1e48
	ctx.lr = 0x82221BCC;
	sub_825D1E48(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82221da4
	if (ctx.cr6.eq) goto loc_82221DA4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82399d38
	ctx.lr = 0x82221BDC;
	sub_82399D38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82221da4
	if (ctx.cr6.eq) goto loc_82221DA4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,5424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5424);
	ctx.f12.f64 = double(temp.f32);
	// beq cr6,0x82221c0c
	if (ctx.cr6.eq) goto loc_82221C0C;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_82221C0C:
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f11,14088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f11.f64 = double(temp.f32);
	// beq cr6,0x82221c24
	if (ctx.cr6.eq) goto loc_82221C24;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
loc_82221C24:
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82221c34
	if (ctx.cr6.eq) goto loc_82221C34;
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_82221C34:
	// rlwinm r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82221c44
	if (ctx.cr6.eq) goto loc_82221C44;
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
loc_82221C44:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,116(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x825d2200
	ctx.lr = 0x82221C58;
	sub_825D2200(ctx, base);
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r6,r11,13424
	ctx.r6.s64 = ctx.r11.s64 + 13424;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,13440
	ctx.r4.s64 = ctx.r11.s64 + 13440;
	// bl 0x821e8778
	ctx.lr = 0x82221C78;
	sub_821E8778(ctx, base);
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82221c94
	if (ctx.cr6.gt) goto loc_82221C94;
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// b 0x82221c98
	goto loc_82221C98;
loc_82221C94:
	// stfs f30,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
loc_82221C98:
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82221cd8
	if (PlayerDebugMode_RemapDebugExitButton(ctx.r30)) {
		goto loc_82221CAC;
	}
	else {
		goto loc_82221CD8;
	}
	if (ctx.cr6.eq) goto loc_82221CD8;
loc_82221CAC:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82221cd8
	if (ctx.cr6.eq) goto loc_82221CD8;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,12293
	ctx.r11.u64 = ctx.r11.u64 | 12293;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82221CD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82221CD8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82221cf4
	if (ctx.cr6.eq) goto loc_82221CF4;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_82221CF4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82221d10
	if (ctx.cr6.eq) goto loc_82221D10;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_82221D10:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82221d44
	if (ctx.cr6.eq) goto loc_82221D44;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// ori r11,r11,12316
	ctx.r11.u64 = ctx.r11.u64 | 12316;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82221D44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82221D44:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82221da4
	if (ctx.cr6.eq) goto loc_82221DA4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r29,99
	ctx.r29.s64 = 99;
	// ori r30,r11,4115
	ctx.r30.u64 = ctx.r11.u64 | 4115;
loc_82221D60:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r28.u8);
	// stb r28,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r28.u8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82221D88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82221d98
	if (ctx.cr6.eq) goto loc_82221D98;
	// bl 0x82581e38
	ctx.lr = 0x82221D98;
	sub_82581E38(ctx, base);
loc_82221D98:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82221d60
	if (!ctx.cr6.eq) goto loc_82221D60;
loc_82221DA4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221DB8"))) PPC_WEAK_FUNC(sub_82221DB8);
PPC_FUNC_IMPL(__imp__sub_82221DB8) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82221ed4
	if (ctx.cr6.eq) goto loc_82221ED4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// ori r11,r11,9
	ctx.r11.u64 = ctx.r11.u64 | 9;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-18576
	ctx.r11.s64 = ctx.r11.s64 + -18576;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v0,r9,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v0,r9,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,48
	ctx.r9.s64 = 48;
	// lvx128 v0,r9,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82221E4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82221ed4
	if (ctx.cr6.eq) goto loc_82221ED4;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r31,r11,13440
	ctx.r31.s64 = ctx.r11.s64 + 13440;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d2aa8
	ctx.lr = 0x82221EB0;
	sub_825D2AA8(ctx, base);
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r6,r11,13424
	ctx.r6.s64 = ctx.r11.s64 + 13424;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x821e8778
	ctx.lr = 0x82221EC8;
	sub_821E8778(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x825d1d08
	ctx.lr = 0x82221ED4;
	sub_825D1D08(ctx, base);
loc_82221ED4:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
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

__attribute__((alias("__imp__sub_82221EF0"))) PPC_WEAK_FUNC(sub_82221EF0);
PPC_FUNC_IMPL(__imp__sub_82221EF0) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,-17248
	ctx.r4.s64 = ctx.r11.s64 + -17248;
	// li r11,15
	ctx.r11.s64 = 15;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x82221F34;
	sub_82161E08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ea350
	ctx.lr = 0x82221F48;
	sub_821EA350(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82221f60
	if (ctx.cr6.lt) goto loc_82221F60;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x82221F60;
	sub_82186190(ctx, base);
loc_82221F60:
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

__attribute__((alias("__imp__sub_82221F78"))) PPC_WEAK_FUNC(sub_82221F78);
PPC_FUNC_IMPL(__imp__sub_82221F78) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82222094
	if (ctx.cr6.eq) goto loc_82222094;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// ori r11,r11,9
	ctx.r11.u64 = ctx.r11.u64 | 9;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-18576
	ctx.r11.s64 = ctx.r11.s64 + -18576;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v0,r9,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v0,r9,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,48
	ctx.r9.s64 = 48;
	// lvx128 v0,r9,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222200C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82222094
	if (ctx.cr6.eq) goto loc_82222094;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r31,r11,13552
	ctx.r31.s64 = ctx.r11.s64 + 13552;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d2aa8
	ctx.lr = 0x82222070;
	sub_825D2AA8(ctx, base);
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r6,r11,13536
	ctx.r6.s64 = ctx.r11.s64 + 13536;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x821e8778
	ctx.lr = 0x82222088;
	sub_821E8778(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x825d1d08
	ctx.lr = 0x82222094;
	sub_825D1D08(ctx, base);
loc_82222094:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
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

__attribute__((alias("__imp__sub_822220B0"))) PPC_WEAK_FUNC(sub_822220B0);
PPC_FUNC_IMPL(__imp__sub_822220B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x822220B8;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r11,-17232
	ctx.r4.s64 = ctx.r11.s64 + -17232;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x822220F8;
	sub_82161E08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x82222110;
	sub_821EA350(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82222128
	if (ctx.cr6.lt) goto loc_82222128;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x82222128;
	sub_82186190(ctx, base);
loc_82222128:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r4,r11,-23604
	ctx.r4.s64 = ctx.r11.s64 + -23604;
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
	ctx.lr = 0x82222154;
	sub_82161E08(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821ea350
	ctx.lr = 0x82222164;
	sub_821EA350(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8222217c
	if (ctx.cr6.lt) goto loc_8222217C;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82186190
	ctx.lr = 0x8222217C;
	sub_82186190(ctx, base);
loc_8222217C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r4,r11,-17248
	ctx.r4.s64 = ctx.r11.s64 + -17248;
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
	ctx.lr = 0x822221A8;
	sub_82161E08(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821ea350
	ctx.lr = 0x822221B8;
	sub_821EA350(ctx, base);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stfs f1,132(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 132, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822221d0
	if (ctx.cr6.lt) goto loc_822221D0;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82186190
	ctx.lr = 0x822221D0;
	sub_82186190(ctx, base);
loc_822221D0:
	// stfs f29,76(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r28.u32 + 76, temp.u32);
	// stfs f30,92(r28)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r28.u32 + 92, temp.u32);
	// stfs f29,128(r28)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r28.u32 + 128, temp.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f29,-64(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822221F0"))) PPC_WEAK_FUNC(sub_822221F0);
PPC_FUNC_IMPL(__imp__sub_822221F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x822221F8;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82223500
	ctx.lr = 0x82222210;
	sub_82223500(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// addi r4,r11,-31120
	ctx.r4.s64 = ctx.r11.s64 + -31120;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221f1b8
	ctx.lr = 0x82222224;
	sub_8221F1B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r28,r31,60
	ctx.r28.s64 = ctx.r31.s64 + 60;
	// addi r11,r11,14116
	ctx.r11.s64 = ctx.r11.s64 + 14116;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x8221edd8
	ctx.lr = 0x8222223C;
	sub_8221EDD8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r26,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r26.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,-17060
	ctx.r11.s64 = ctx.r11.s64 + -17060;
	// addi r9,r9,-17068
	ctx.r9.s64 = ctx.r9.s64 + -17068;
	// lfs f31,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stfs f31,76(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// addi r10,r10,-17076
	ctx.r10.s64 = ctx.r10.s64 + -17076;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r8,-17088
	ctx.r8.s64 = ctx.r8.s64 + -17088;
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// addi r9,r31,80
	ctx.r9.s64 = ctx.r31.s64 + 80;
	// addi r30,r31,96
	ctx.r30.s64 = ctx.r31.s64 + 96;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lis r10,-32072
	ctx.r10.s64 = -2101870592;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r10,-4608
	ctx.r10.s64 = ctx.r10.s64 + -4608;
	// stw r8,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// bl 0x822232a0
	ctx.lr = 0x822222C4;
	sub_822232A0(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x822233e8
	ctx.lr = 0x822222D0;
	sub_822233E8(ctx, base);
	// lis r8,0
	ctx.r8.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// ori r4,r8,32768
	ctx.r4.u64 = ctx.r8.u64 | 32768;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,16
	ctx.r9.s64 = 16;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// addi r3,r31,172
	ctx.r3.s64 = ctx.r31.s64 + 172;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// stw r9,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r9.u32);
	// stw r8,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r8.u32);
	// bl 0x822232a0
	ctx.lr = 0x82222304;
	sub_822232A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,8156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,188(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// bl 0x82221388
	ctx.lr = 0x82222324;
	sub_82221388(ctx, base);
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

__attribute__((alias("__imp__sub_82222338"))) PPC_WEAK_FUNC(sub_82222338);
PPC_FUNC_IMPL(__imp__sub_82222338) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// b 0x822223d8
	sub_822223D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82222340"))) PPC_WEAK_FUNC(sub_82222340);
PPC_FUNC_IMPL(__imp__sub_82222340) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-60
	ctx.r3.s64 = ctx.r3.s64 + -60;
	// b 0x822223d8
	sub_822223D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82222348"))) PPC_WEAK_FUNC(sub_82222348);
PPC_FUNC_IMPL(__imp__sub_82222348) {
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
	// bl 0x828a4fc0
	ctx.lr = 0x82222364;
	sub_828A4FC0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bne cr6,0x82222374
	if (!ctx.cr6.eq) goto loc_82222374;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82222374:
	// bl 0x8221edd8
	ctx.lr = 0x82222378;
	sub_8221EDD8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bne cr6,0x82222388
	if (!ctx.cr6.eq) goto loc_82222388;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82222388:
	// bl 0x8221f0e8
	ctx.lr = 0x8222238C;
	sub_8221F0E8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822223a0
	if (ctx.cr6.eq) goto loc_822223A0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_822223A0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822223b4
	if (ctx.cr6.eq) goto loc_822223B4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822223B4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,7884
	ctx.r11.s64 = ctx.r11.s64 + 7884;
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

__attribute__((alias("__imp__sub_822223D8"))) PPC_WEAK_FUNC(sub_822223D8);
PPC_FUNC_IMPL(__imp__sub_822223D8) {
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
	// bl 0x82222348
	ctx.lr = 0x822223F8;
	sub_82222348(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82222410
	if (ctx.cr6.eq) goto loc_82222410;
	// bl 0x82186190
	ctx.lr = 0x8222240C;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82222410:
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

__attribute__((alias("__imp__sub_82222428"))) PPC_WEAK_FUNC(sub_82222428);
PPC_FUNC_IMPL(__imp__sub_82222428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82222430;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r31,80
	ctx.r29.s64 = ctx.r31.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f30,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f30.f64 = double(temp.f32);
	// stfs f30,76(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// bl 0x825d1e48
	ctx.lr = 0x82222468;
	sub_825D1E48(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822232d0
	ctx.lr = 0x82222478;
	sub_822232D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82223418
	ctx.lr = 0x82222488;
	sub_82223418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,172
	ctx.r3.s64 = ctx.r31.s64 + 172;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82223170
	ctx.lr = 0x82222498;
	sub_82223170(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222280c
	if (ctx.cr6.eq) goto loc_8222280C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8222280c
	if (ctx.cr6.eq) goto loc_8222280C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82399d38
	ctx.lr = 0x822224B8;
	sub_82399D38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8222280c
	if (ctx.cr6.eq) goto loc_8222280C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x825d2200
	ctx.lr = 0x822224E8;
	sub_825D2200(ctx, base);
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r6,r11,13536
	ctx.r6.s64 = ctx.r11.s64 + 13536;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,13552
	ctx.r4.s64 = ctx.r11.s64 + 13552;
	// bl 0x821e8778
	ctx.lr = 0x82222508;
	sub_821E8778(ctx, base);
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82222524
	if (ctx.cr6.gt) goto loc_82222524;
	// stfs f31,76(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// b 0x82222528
	goto loc_82222528;
loc_82222524:
	// stfs f30,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
loc_82222528:
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82222548
	if (!ctx.cr6.eq) goto loc_82222548;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
loc_82222548:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82222564
	if (!ctx.cr6.eq) goto loc_82222564;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
loc_82222564:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82222580
	if (!ctx.cr6.eq) goto loc_82222580;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_82222580:
	// lbz r11,129(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 129);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82222598
	if (ctx.cr6.eq) goto loc_82222598;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_82222598:
	// lbz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822225b0
	if (ctx.cr6.eq) goto loc_822225B0;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_822225B0:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822225d0
	if (!ctx.cr6.eq) goto loc_822225D0;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 512;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
loc_822225D0:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822225ec
	if (!ctx.cr6.eq) goto loc_822225EC;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
loc_822225EC:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82222608
	if (!ctx.cr6.eq) goto loc_82222608;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_82222608:
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82222628
	if (!ctx.cr6.eq) goto loc_82222628;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_82222628:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82222648
	if (!ctx.cr6.eq) goto loc_82222648;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// oris r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 65536;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
loc_82222648:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82222664
	if (!ctx.cr6.eq) goto loc_82222664;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// oris r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 131072;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
loc_82222664:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82222680
	if (!ctx.cr6.eq) goto loc_82222680;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_82222680:
	// lbz r11,181(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 181);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82222698
	if (ctx.cr6.eq) goto loc_82222698;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_82222698:
	// lbz r11,142(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 142);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822226b0
	if (ctx.cr6.eq) goto loc_822226B0;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r11,r11,18432
	ctx.r11.u64 = ctx.r11.u64 | 18432;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_822226B0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822226cc
	if (ctx.cr6.eq) goto loc_822226CC;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_822226CC:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822226e8
	if (ctx.cr6.eq) goto loc_822226E8;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r11,r11,20480
	ctx.r11.u64 = ctx.r11.u64 | 20480;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_822226E8:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82222704
	if (ctx.cr6.eq) goto loc_82222704;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_82222704:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82222720
	if (ctx.cr6.eq) goto loc_82222720;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_82222720:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222273c
	if (ctx.cr6.eq) goto loc_8222273C;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_8222273C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82222758
	if (ctx.cr6.eq) goto loc_82222758;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_82222758:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x8222280c
	if (!ctx.cr6.gt) goto loc_8222280C;
	// addi r30,r31,96
	ctx.r30.s64 = ctx.r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82221160
	ctx.lr = 0x8222276C;
	sub_82221160(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x825d4208
	ctx.lr = 0x82222780;
	sub_825D4208(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// fmuls f31,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825d4178
	ctx.lr = 0x82222790;
	sub_825D4178(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-17156(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17156);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x822227f8
	if (!ctx.cr6.gt) goto loc_822227F8;
	// fdivs f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 / ctx.f31.f64));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x822227c4
	if (ctx.cr6.gt) goto loc_822227C4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5424);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x822227c8
	if (!ctx.cr6.lt) goto loc_822227C8;
loc_822227C4:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
loc_822227C8:
	// bl 0x826e0370
	ctx.lr = 0x822227CC;
	sub_826E0370(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-29804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822227f8
	if (!ctx.cr6.lt) goto loc_822227F8;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_822227F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82221110
	ctx.lr = 0x82222800;
	sub_82221110(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82221388
	ctx.lr = 0x8222280C;
	sub_82221388(ctx, base);
loc_8222280C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82222820"))) PPC_WEAK_FUNC(sub_82222820);
PPC_FUNC_IMPL(__imp__sub_82222820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82222828;
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r31,80
	ctx.r29.s64 = ctx.r31.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f30,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f30.f64 = double(temp.f32);
	// stfs f30,72(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
	// bl 0x825d1e48
	ctx.lr = 0x8222285C;
	sub_825D1E48(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8222296c
	if (ctx.cr6.eq) goto loc_8222296C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82399d38
	ctx.lr = 0x8222286C;
	sub_82399D38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8222296c
	if (ctx.cr6.eq) goto loc_8222296C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f13,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x825d2200
	ctx.lr = 0x822228A0;
	sub_825D2200(ctx, base);
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,13648
	ctx.r6.s64 = ctx.r11.s64 + 13648;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,13664
	ctx.r4.s64 = ctx.r11.s64 + 13664;
	// bl 0x821e8778
	ctx.lr = 0x822228C0;
	sub_821E8778(ctx, base);
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x822228dc
	if (ctx.cr6.gt) goto loc_822228DC;
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// b 0x822228e0
	goto loc_822228E0;
loc_822228DC:
	// stfs f30,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
loc_822228E0:
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822228fc
	if (ctx.cr6.eq) goto loc_822228FC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_822228FC:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82222918
	if (ctx.cr6.eq) goto loc_82222918;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_82222918:
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82222944
	if (!ctx.cr6.gt) goto loc_82222944;
	// lbz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_82222944:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8222296c
	if (!ctx.cr6.lt) goto loc_8222296C;
	// lbz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_8222296C:
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

__attribute__((alias("__imp__sub_82222980"))) PPC_WEAK_FUNC(sub_82222980);
PPC_FUNC_IMPL(__imp__sub_82222980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82222988;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82223500
	ctx.lr = 0x8222299C;
	sub_82223500(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// addi r4,r11,-31136
	ctx.r4.s64 = ctx.r11.s64 + -31136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221f1b8
	ctx.lr = 0x822229B0;
	sub_8221F1B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r29,r31,60
	ctx.r29.s64 = ctx.r31.s64 + 60;
	// addi r11,r11,14116
	ctx.r11.s64 = ctx.r11.s64 + 14116;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x8221edd8
	ctx.lr = 0x822229C8;
	sub_8221EDD8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,-17000
	ctx.r11.s64 = ctx.r11.s64 + -17000;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r10,r10,-17008
	ctx.r10.s64 = ctx.r10.s64 + -17008;
	// lfs f0,3544(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f13,8156(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8156);
	ctx.f13.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r9,-17028
	ctx.r9.s64 = ctx.r9.s64 + -17028;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r8,r8,-17020
	ctx.r8.s64 = ctx.r8.s64 + -17020;
	// addi r11,r11,-4608
	ctx.r11.s64 = ctx.r11.s64 + -4608;
	// addi r10,r31,80
	ctx.r10.s64 = ctx.r31.s64 + 80;
	// stw r7,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r27,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r27.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stb r7,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r7.u8);
	// stfs f13,108(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82222A48"))) PPC_WEAK_FUNC(sub_82222A48);
PPC_FUNC_IMPL(__imp__sub_82222A48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82222A50;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r29,r9,9
	ctx.r29.u64 = ctx.r9.u64 | 9;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r31,r10,-18576
	ctx.r31.s64 = ctx.r10.s64 + -18576;
	// lis r10,-32077
	ctx.r10.s64 = -2102198272;
	// addi r28,r10,13664
	ctx.r28.s64 = ctx.r10.s64 + 13664;
	// beq cr6,0x82222b5c
	if (ctx.cr6.eq) goto loc_82222B5C;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lvx128 v0,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v0,r10,r31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v0,r10,r31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,48
	ctx.r10.s64 = 48;
	// lvx128 v0,r10,r31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82222ADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82222b5c
	if (ctx.cr6.eq) goto loc_82222B5C;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d2aa8
	ctx.lr = 0x82222B38;
	sub_825D2AA8(ctx, base);
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r6,r11,13648
	ctx.r6.s64 = ctx.r11.s64 + 13648;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x821e8778
	ctx.lr = 0x82222B50;
	sub_821E8778(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x825d1d08
	ctx.lr = 0x82222B5C;
	sub_825D1D08(ctx, base);
loc_82222B5C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82222cb8
	if (ctx.cr6.eq) goto loc_82222CB8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82222cb8
	if (!ctx.cr6.gt) goto loc_82222CB8;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r29,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r29.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// ori r11,r11,7
	ctx.r11.u64 = ctx.r11.u64 | 7;
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r11,r11,-4608
	ctx.r11.s64 = ctx.r11.s64 + -4608;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r11,r11,-4576
	ctx.r11.s64 = ctx.r11.s64 + -4576;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// lvx128 v0,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v0,r11,r31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,32
	ctx.r11.s64 = 32;
	// lvx128 v0,r11,r31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,48
	ctx.r11.s64 = 48;
	// lvx128 v0,r11,r31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82222C0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82222cb0
	if (ctx.cr6.eq) goto loc_82222CB0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82222C34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82222cb0
	if (ctx.cr6.eq) goto loc_82222CB0;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x825d4398
	ctx.lr = 0x82222C4C;
	sub_825D4398(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x825d2aa8
	ctx.lr = 0x82222C5C;
	sub_825D2AA8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stfs f31,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// bl 0x825d22a0
	ctx.lr = 0x82222C68;
	sub_825D22A0(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82205160
	ctx.lr = 0x82222C78;
	sub_82205160(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f31,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// bl 0x825d22a0
	ctx.lr = 0x82222C84;
	sub_825D22A0(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825d21e0
	ctx.lr = 0x82222C90;
	sub_825D21E0(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bge cr6,0x82222cb4
	if (!ctx.cr6.lt) goto loc_82222CB4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,44(r30)
	PPC_STORE_U8(ctx.r30.u32 + 44, ctx.r11.u8);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82222CB0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82222CB4:
	// stb r11,44(r30)
	PPC_STORE_U8(ctx.r30.u32 + 44, ctx.r11.u8);
loc_82222CB8:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82222CC8"))) PPC_WEAK_FUNC(sub_82222CC8);
PPC_FUNC_IMPL(__imp__sub_82222CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82222CD0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r11,-17232
	ctx.r4.s64 = ctx.r11.s64 + -17232;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82222D08;
	sub_82161E08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x82222D20;
	sub_821EA350(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82222d34
	if (ctx.cr6.lt) goto loc_82222D34;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x82222D34;
	sub_82186190(ctx, base);
loc_82222D34:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r4,r11,-23604
	ctx.r4.s64 = ctx.r11.s64 + -23604;
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
	ctx.lr = 0x82222D60;
	sub_82161E08(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821ea350
	ctx.lr = 0x82222D70;
	sub_821EA350(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82222d84
	if (ctx.cr6.lt) goto loc_82222D84;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82186190
	ctx.lr = 0x82222D84;
	sub_82186190(ctx, base);
loc_82222D84:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r4,r11,-17248
	ctx.r4.s64 = ctx.r11.s64 + -17248;
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
	ctx.lr = 0x82222DB0;
	sub_82161E08(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821ea350
	ctx.lr = 0x82222DC0;
	sub_821EA350(ctx, base);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stfs f1,52(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 52, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82222dd8
	if (ctx.cr6.lt) goto loc_82222DD8;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82186190
	ctx.lr = 0x82222DD8;
	sub_82186190(ctx, base);
loc_82222DD8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82222DE8"))) PPC_WEAK_FUNC(sub_82222DE8);
PPC_FUNC_IMPL(__imp__sub_82222DE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82222DF0;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r31,80
	ctx.r29.s64 = ctx.r31.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f30,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f30.f64 = double(temp.f32);
	// stfs f30,76(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// bl 0x825d1e48
	ctx.lr = 0x82222E2C;
	sub_825D1E48(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82222f94
	if (ctx.cr6.eq) goto loc_82222F94;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82399d38
	ctx.lr = 0x82222E3C;
	sub_82399D38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82222f94
	if (ctx.cr6.eq) goto loc_82222F94;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f13,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x825d2200
	ctx.lr = 0x82222E70;
	sub_825D2200(ctx, base);
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,13760
	ctx.r6.s64 = ctx.r11.s64 + 13760;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,13776
	ctx.r4.s64 = ctx.r11.s64 + 13776;
	// bl 0x821e8778
	ctx.lr = 0x82222E90;
	sub_821E8778(ctx, base);
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82222eac
	if (ctx.cr6.gt) goto loc_82222EAC;
	// stfs f31,76(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// b 0x82222eb0
	goto loc_82222EB0;
loc_82222EAC:
	// stfs f30,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
loc_82222EB0:
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82222ed0
	if (!ctx.cr6.eq) goto loc_82222ED0;
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
loc_82222ED0:
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// and r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82222ef0
	if (!ctx.cr6.eq) goto loc_82222EF0;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
loc_82222EF0:
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// and r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82222f10
	if (!ctx.cr6.eq) goto loc_82222F10;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
loc_82222F10:
	// lbz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 116);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82222f48
	if (!ctx.cr6.eq) goto loc_82222F48;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82222f94
	if (!ctx.cr6.eq) goto loc_82222F94;
	// stfs f30,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stb r9,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r9.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-64(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82222F48:
	// lfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// lfs f13,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82222f90
	if (ctx.cr6.gt) goto loc_82222F90;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82222f94
	if (!ctx.cr6.eq) goto loc_82222F94;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-64(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82222F90:
	// stb r28,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r28.u8);
loc_82222F94:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82222FA8"))) PPC_WEAK_FUNC(sub_82222FA8);
PPC_FUNC_IMPL(__imp__sub_82222FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82222FB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82223500
	ctx.lr = 0x82222FC4;
	sub_82223500(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// addi r4,r11,-29076
	ctx.r4.s64 = ctx.r11.s64 + -29076;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221f1b8
	ctx.lr = 0x82222FD8;
	sub_8221F1B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r29,r31,60
	ctx.r29.s64 = ctx.r31.s64 + 60;
	// addi r11,r11,14116
	ctx.r11.s64 = ctx.r11.s64 + 14116;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x8221edd8
	ctx.lr = 0x82222FF0;
	sub_8221EDD8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-16940
	ctx.r11.s64 = ctx.r11.s64 + -16940;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f0,3544(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r6,r1,164
	ctx.r6.s64 = ctx.r1.s64 + 164;
	// addi r10,r10,-16948
	ctx.r10.s64 = ctx.r10.s64 + -16948;
	// addi r9,r9,-16968
	ctx.r9.s64 = ctx.r9.s64 + -16968;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r8,r8,-16960
	ctx.r8.s64 = ctx.r8.s64 + -16960;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r6,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// ori r6,r11,32768
	ctx.r6.u64 = ctx.r11.u64 | 32768;
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// addi r10,r31,80
	ctx.r10.s64 = ctx.r31.s64 + 80;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r8,8
	ctx.r8.s64 = 8;
	// lfs f13,8156(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8156);
	ctx.f13.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// addi r11,r11,-4608
	ctx.r11.s64 = ctx.r11.s64 + -4608;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stw r8,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r8.u32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stw r6,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r6.u32);
	// stfs f13,120(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stb r7,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r7.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223098"))) PPC_WEAK_FUNC(sub_82223098);
PPC_FUNC_IMPL(__imp__sub_82223098) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// b 0x82221b40
	sub_82221B40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822230A0"))) PPC_WEAK_FUNC(sub_822230A0);
PPC_FUNC_IMPL(__imp__sub_822230A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x822230A8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r11,-17248
	ctx.r4.s64 = ctx.r11.s64 + -17248;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x822230E0;
	sub_82161E08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ea350
	ctx.lr = 0x822230F8;
	sub_821EA350(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f1,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82223110
	if (ctx.cr6.lt) goto loc_82223110;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x82223110;
	sub_82186190(ctx, base);
loc_82223110:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r4,r11,-17232
	ctx.r4.s64 = ctx.r11.s64 + -17232;
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stb r31,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x8222313C;
	sub_82161E08(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821ea350
	ctx.lr = 0x8222314C;
	sub_821EA350(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stfs f1,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82223164
	if (ctx.cr6.lt) goto loc_82223164;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82186190
	ctx.lr = 0x82223164;
	sub_82186190(ctx, base);
loc_82223164:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223170"))) PPC_WEAK_FUNC(sub_82223170);
PPC_FUNC_IMPL(__imp__sub_82223170) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// stb r30,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r30.u8);
	// beq cr6,0x82223284
	if (ctx.cr6.eq) goto loc_82223284;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82399d38
	ctx.lr = 0x822231AC;
	sub_82399D38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222327c
	if (ctx.cr6.eq) goto loc_8222327C;
	// lbz r11,11(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822231d8
	if (ctx.cr6.eq) goto loc_822231D8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82223284
	if (!ctx.cr6.eq) goto loc_82223284;
	// b 0x82223280
	goto loc_82223280;
loc_822231D8:
	// lbz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bne cr6,0x82223210
	if (!ctx.cr6.eq) goto loc_82223210;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82223284
	if (!ctx.cr6.eq) goto loc_82223284;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stb r10,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r10.u8);
	// b 0x82223284
	goto loc_82223284;
loc_82223210:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8222324c
	if (ctx.cr6.gt) goto loc_8222324C;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82223270
	if (!ctx.cr6.eq) goto loc_82223270;
	// li r11,1
	ctx.r11.s64 = 1;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stb r30,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r30.u8);
	// stb r11,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r11.u8);
	// stb r11,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r11.u8);
	// b 0x82223284
	goto loc_82223284;
loc_8222324C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r30,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r30.u8);
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stb r11,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r11.u8);
loc_82223270:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// b 0x82223284
	goto loc_82223284;
loc_8222327C:
	// stb r30,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r30.u8);
loc_82223280:
	// stb r30,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r30.u8);
loc_82223284:
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

__attribute__((alias("__imp__sub_822232A0"))) PPC_WEAK_FUNC(sub_822232A0);
PPC_FUNC_IMPL(__imp__sub_822232A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// stb r11,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r11.u8);
	// stb r11,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r11.u8);
	// stb r11,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822232D0"))) PPC_WEAK_FUNC(sub_822232D0);
PPC_FUNC_IMPL(__imp__sub_822232D0) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// stb r30,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r30.u8);
	// stb r30,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r30.u8);
	// beq cr6,0x822233c8
	if (ctx.cr6.eq) goto loc_822233C8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82399d38
	ctx.lr = 0x82223310;
	sub_82399D38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822233c4
	if (ctx.cr6.eq) goto loc_822233C4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r9,10(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r10,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r10.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// bne cr6,0x82223380
	if (!ctx.cr6.eq) goto loc_82223380;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822233c8
	if (!ctx.cr6.eq) goto loc_822233C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stb r10,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r10.u8);
	// b 0x822233c8
	goto loc_822233C8;
loc_82223380:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822233b4
	if (ctx.cr6.gt) goto loc_822233B4;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822233b8
	if (!ctx.cr6.eq) goto loc_822233B8;
	// li r11,1
	ctx.r11.s64 = 1;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stb r11,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r11.u8);
	// b 0x822233c8
	goto loc_822233C8;
loc_822233B4:
	// stb r30,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r30.u8);
loc_822233B8:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// b 0x822233c8
	goto loc_822233C8;
loc_822233C4:
	// stb r30,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r30.u8);
loc_822233C8:
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

__attribute__((alias("__imp__sub_822233E8"))) PPC_WEAK_FUNC(sub_822233E8);
PPC_FUNC_IMPL(__imp__sub_822233E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r11.u8);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223418"))) PPC_WEAK_FUNC(sub_82223418);
PPC_FUNC_IMPL(__imp__sub_82223418) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// stb r11,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r11.u8);
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// beq cr6,0x822234dc
	if (ctx.cr6.eq) goto loc_822234DC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82399d38
	ctx.lr = 0x82223458;
	sub_82399D38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822234dc
	if (ctx.cr6.eq) goto loc_822234DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r10,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r10.u8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r10,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r10.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bge cr6,0x822234c0
	if (!ctx.cr6.lt) goto loc_822234C0;
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// b 0x822234c4
	goto loc_822234C4;
loc_822234C0:
	// stb r10,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r10.u8);
loc_822234C4:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822234dc
	if (!ctx.cr6.eq) goto loc_822234DC;
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// b 0x822234e4
	goto loc_822234E4;
loc_822234DC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
loc_822234E4:
	// stfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
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

__attribute__((alias("__imp__sub_82223500"))) PPC_WEAK_FUNC(sub_82223500);
PPC_FUNC_IMPL(__imp__sub_82223500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r3.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-16908
	ctx.r10.s64 = ctx.r11.s64 + -16908;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stb r9,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r9.u8);
	// stb r11,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r11.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223530"))) PPC_WEAK_FUNC(sub_82223530);
PPC_FUNC_IMPL(__imp__sub_82223530) {
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
	// lwz r3,1200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1200);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82223554
	if (ctx.cr6.eq) goto loc_82223554;
	// bl 0x821601b8
	ctx.lr = 0x82223554;
	sub_821601B8(ctx, base);
loc_82223554:
	// lwz r3,1192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1192);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82223564
	if (ctx.cr6.eq) goto loc_82223564;
	// bl 0x82581e38
	ctx.lr = 0x82223564;
	sub_82581E38(ctx, base);
loc_82223564:
	// lwz r3,1032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82223574
	if (ctx.cr6.eq) goto loc_82223574;
	// bl 0x821601b8
	ctx.lr = 0x82223574;
	sub_821601B8(ctx, base);
loc_82223574:
	// lwz r3,1024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82223584
	if (ctx.cr6.eq) goto loc_82223584;
	// bl 0x821601b8
	ctx.lr = 0x82223584;
	sub_821601B8(ctx, base);
loc_82223584:
	// lwz r3,1016(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1016);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82223594
	if (ctx.cr6.eq) goto loc_82223594;
	// bl 0x821601b8
	ctx.lr = 0x82223594;
	sub_821601B8(ctx, base);
loc_82223594:
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822235a4
	if (ctx.cr6.eq) goto loc_822235A4;
	// bl 0x82631328
	ctx.lr = 0x822235A4;
	sub_82631328(ctx, base);
loc_822235A4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bne cr6,0x822235b4
	if (!ctx.cr6.eq) goto loc_822235B4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822235B4:
	// bl 0x82225b68
	ctx.lr = 0x822235B8;
	sub_82225B68(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bne cr6,0x822235c8
	if (!ctx.cr6.eq) goto loc_822235C8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822235C8:
	// bl 0x8221f3a8
	ctx.lr = 0x822235CC;
	sub_8221F3A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221f0e8
	ctx.lr = 0x822235D4;
	sub_8221F0E8(ctx, base);
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

__attribute__((alias("__imp__sub_822235E8"))) PPC_WEAK_FUNC(sub_822235E8);
PPC_FUNC_IMPL(__imp__sub_822235E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x822235F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82228a18
	ctx.lr = 0x82223600;
	sub_82228A18(ctx, base);
	// addi r31,r30,1356
	ctx.r31.s64 = ctx.r30.s64 + 1356;
	// li r29,2
	ctx.r29.s64 = 2;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8222360C:
	// stw r28,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r28.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82223620
	if (ctx.cr6.eq) goto loc_82223620;
	// bl 0x821601b8
	ctx.lr = 0x82223620;
	sub_821601B8(ctx, base);
loc_82223620:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8222360c
	if (!ctx.cr6.eq) goto loc_8222360C;
	// addi r11,r27,-69
	ctx.r11.s64 = ctx.r27.s64 + -69;
	// cmplwi cr6,r11,109
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 109, ctx.xer);
	// bgt cr6,0x822238b4
	if (ctx.cr6.gt) goto loc_822238B4;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// addi r12,r12,13912
	ctx.r12.s64 = ctx.r12.s64 + 13912;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82223810;
	case 1:
		goto loc_822238B4;
	case 2:
		goto loc_822238B4;
	case 3:
		goto loc_822238B4;
	case 4:
		goto loc_822238B4;
	case 5:
		goto loc_822238B4;
	case 6:
		goto loc_822238B4;
	case 7:
		goto loc_822238B4;
	case 8:
		goto loc_822238B4;
	case 9:
		goto loc_822238B4;
	case 10:
		goto loc_822238B4;
	case 11:
		goto loc_822238B4;
	case 12:
		goto loc_822238B4;
	case 13:
		goto loc_822238B4;
	case 14:
		goto loc_822238B4;
	case 15:
		goto loc_822238B4;
	case 16:
		goto loc_822238B4;
	case 17:
		goto loc_822238B4;
	case 18:
		goto loc_822238B4;
	case 19:
		goto loc_822238B4;
	case 20:
		goto loc_822238B4;
	case 21:
		goto loc_822238B4;
	case 22:
		goto loc_822238B4;
	case 23:
		goto loc_822238B4;
	case 24:
		goto loc_822238B4;
	case 25:
		goto loc_822238B4;
	case 26:
		goto loc_822238B4;
	case 27:
		goto loc_822238B4;
	case 28:
		goto loc_822238B4;
	case 29:
		goto loc_822238B4;
	case 30:
		goto loc_822238B4;
	case 31:
		goto loc_822238B4;
	case 32:
		goto loc_822238B4;
	case 33:
		goto loc_822238B4;
	case 34:
		goto loc_822238B4;
	case 35:
		goto loc_822238B4;
	case 36:
		goto loc_822238B4;
	case 37:
		goto loc_822238B4;
	case 38:
		goto loc_822238B4;
	case 39:
		goto loc_822238B4;
	case 40:
		goto loc_822238B4;
	case 41:
		goto loc_822238B4;
	case 42:
		goto loc_822238B4;
	case 43:
		goto loc_822238B4;
	case 44:
		goto loc_822238B4;
	case 45:
		goto loc_822238B4;
	case 46:
		goto loc_822238B4;
	case 47:
		goto loc_822238B4;
	case 48:
		goto loc_822238B4;
	case 49:
		goto loc_822238B4;
	case 50:
		goto loc_822238B4;
	case 51:
		goto loc_822238B4;
	case 52:
		goto loc_822238B4;
	case 53:
		goto loc_822238B4;
	case 54:
		goto loc_822238B4;
	case 55:
		goto loc_822238B4;
	case 56:
		goto loc_822238B4;
	case 57:
		goto loc_822238B4;
	case 58:
		goto loc_822238B4;
	case 59:
		goto loc_822238B4;
	case 60:
		goto loc_822238B4;
	case 61:
		goto loc_822238B4;
	case 62:
		goto loc_822238B4;
	case 63:
		goto loc_822238B4;
	case 64:
		goto loc_822238B4;
	case 65:
		goto loc_822238B4;
	case 66:
		goto loc_822238B4;
	case 67:
		goto loc_822238B4;
	case 68:
		goto loc_822238B4;
	case 69:
		goto loc_822238B4;
	case 70:
		goto loc_822238B4;
	case 71:
		goto loc_822238B4;
	case 72:
		goto loc_822238B4;
	case 73:
		goto loc_822238B4;
	case 74:
		goto loc_822238B4;
	case 75:
		goto loc_822238B4;
	case 76:
		goto loc_822238B4;
	case 77:
		goto loc_822238B4;
	case 78:
		goto loc_822238B4;
	case 79:
		goto loc_822238B4;
	case 80:
		goto loc_822238B4;
	case 81:
		goto loc_822238B4;
	case 82:
		goto loc_822238B4;
	case 83:
		goto loc_822238B4;
	case 84:
		goto loc_822238B4;
	case 85:
		goto loc_822238B4;
	case 86:
		goto loc_822238B4;
	case 87:
		goto loc_822238B4;
	case 88:
		goto loc_822238B4;
	case 89:
		goto loc_822238B4;
	case 90:
		goto loc_822238B4;
	case 91:
		goto loc_822238B4;
	case 92:
		goto loc_822238B4;
	case 93:
		goto loc_822238B4;
	case 94:
		goto loc_822238B4;
	case 95:
		goto loc_822238B4;
	case 96:
		goto loc_822238B4;
	case 97:
		goto loc_822238B4;
	case 98:
		goto loc_822238B4;
	case 99:
		goto loc_822238B4;
	case 100:
		goto loc_822238B4;
	case 101:
		goto loc_822238B4;
	case 102:
		goto loc_822238B4;
	case 103:
		goto loc_822238B4;
	case 104:
		goto loc_822238B4;
	case 105:
		goto loc_822238B4;
	case 106:
		goto loc_8222384C;
	case 107:
		goto loc_82223888;
	case 108:
		goto loc_822238B4;
	case 109:
		goto loc_82223890;
	default:
		__builtin_unreachable();
	}
	// lwz r17,14352(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14352);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14412(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14412);
	// lwz r17,14472(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14472);
	// lwz r17,14516(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14516);
	// lwz r17,14480(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14480);
loc_82223810:
	// addi r11,r30,1184
	ctx.r11.s64 = ctx.r30.s64 + 1184;
	// addi r31,r30,1160
	ctx.r31.s64 = ctx.r30.s64 + 1160;
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225340
	ctx.lr = 0x8222383C;
	sub_82225340(ctx, base);
	// addi r11,r30,1212
	ctx.r11.s64 = ctx.r30.s64 + 1212;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8222389c
	goto loc_8222389C;
loc_8222384C:
	// addi r11,r30,1240
	ctx.r11.s64 = ctx.r30.s64 + 1240;
	// addi r31,r30,1160
	ctx.r31.s64 = ctx.r30.s64 + 1160;
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225340
	ctx.lr = 0x82223878;
	sub_82225340(ctx, base);
	// addi r11,r30,1268
	ctx.r11.s64 = ctx.r30.s64 + 1268;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8222389c
	goto loc_8222389C;
loc_82223888:
	// addi r11,r30,1296
	ctx.r11.s64 = ctx.r30.s64 + 1296;
	// b 0x82223894
	goto loc_82223894;
loc_82223890:
	// addi r11,r30,1324
	ctx.r11.s64 = ctx.r30.s64 + 1324;
loc_82223894:
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// addi r8,r30,1160
	ctx.r8.s64 = ctx.r30.s64 + 1160;
loc_8222389C:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82225340
	ctx.lr = 0x822238B4;
	sub_82225340(ctx, base);
loc_822238B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822238C0"))) PPC_WEAK_FUNC(sub_822238C0);
PPC_FUNC_IMPL(__imp__sub_822238C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x822238C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82228f28
	ctx.lr = 0x822238D4;
	sub_82228F28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r27,r28,44
	ctx.r27.s64 = ctx.r28.s64 + 44;
	// addi r11,r11,-16788
	ctx.r11.s64 = ctx.r11.s64 + -16788;
	// addi r10,r10,-16868
	ctx.r10.s64 = ctx.r10.s64 + -16868;
	// addi r9,r9,-16876
	ctx.r9.s64 = ctx.r9.s64 + -16876;
	// addi r29,r28,1216
	ctx.r29.s64 = ctx.r28.s64 + 1216;
	// li r31,5
	ctx.r31.s64 = 5;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r10,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r10.u32);
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
loc_82223908:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82224b88
	ctx.lr = 0x82223910;
	sub_82224B88(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82223908
	if (!ctx.cr6.lt) goto loc_82223908;
	// addi r11,r28,1384
	ctx.r11.s64 = ctx.r28.s64 + 1384;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8222392C:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x8222392c
	if (!ctx.cr6.lt) goto loc_8222392C;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// addi r25,r11,13792
	ctx.r25.s64 = ctx.r11.s64 + 13792;
	// li r26,15
	ctx.r26.s64 = 15;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_82223958:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82223970:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82223970
	if (!ctx.cr6.eq) goto loc_82223970;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82223994;
	sub_82161E08(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82225a18
	ctx.lr = 0x822239A4;
	sub_82225A18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822239B4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822239b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822239B4;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822239dc
	if (ctx.cr6.lt) goto loc_822239DC;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x822239DC;
	sub_82186190(ctx, base);
loc_822239DC:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// addi r11,r25,24
	ctx.r11.s64 = ctx.r25.s64 + 24;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82223958
	if (!ctx.cr6.eq) goto loc_82223958;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223A08"))) PPC_WEAK_FUNC(sub_82223A08);
PPC_FUNC_IMPL(__imp__sub_82223A08) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82223ab8
	sub_82223AB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223A10"))) PPC_WEAK_FUNC(sub_82223A10);
PPC_FUNC_IMPL(__imp__sub_82223A10) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-44
	ctx.r3.s64 = ctx.r3.s64 + -44;
	// b 0x82223ab8
	sub_82223AB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223A18"))) PPC_WEAK_FUNC(sub_82223A18);
PPC_FUNC_IMPL(__imp__sub_82223A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82223A20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r11,r28,1400
	ctx.r11.s64 = ctx.r28.s64 + 1400;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
loc_82223A34:
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82223a9c
	if (ctx.cr6.eq) goto loc_82223A9C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq 0x82223a64
	if (ctx.cr0.eq) goto loc_82223A64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82223a9c
	goto loc_82223A9C;
loc_82223A64:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223A78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne 0x82223a9c
	if (!ctx.cr0.eq) goto loc_82223A9C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223A9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82223A9C:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82223a34
	if (!ctx.cr6.lt) goto loc_82223A34;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82223530
	ctx.lr = 0x82223AB0;
	sub_82223530(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223AB8"))) PPC_WEAK_FUNC(sub_82223AB8);
PPC_FUNC_IMPL(__imp__sub_82223AB8) {
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
	// bl 0x82223a18
	ctx.lr = 0x82223AD8;
	sub_82223A18(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82223af0
	if (ctx.cr6.eq) goto loc_82223AF0;
	// bl 0x82186190
	ctx.lr = 0x82223AEC;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82223AF0:
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

__attribute__((alias("__imp__sub_82223B08"))) PPC_WEAK_FUNC(sub_82223B08);
PPC_FUNC_IMPL(__imp__sub_82223B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82223B10;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82228a18
	ctx.lr = 0x82223B20;
	sub_82228A18(ctx, base);
	// addi r30,r31,1268
	ctx.r30.s64 = ctx.r31.s64 + 1268;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82223b3c
	if (ctx.cr6.eq) goto loc_82223B3C;
	// bl 0x821601b8
	ctx.lr = 0x82223B3C;
	sub_821601B8(ctx, base);
loc_82223B3C:
	// cmpwi cr6,r29,69
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 69, ctx.xer);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// beq cr6,0x82223bf0
	if (ctx.cr6.eq) goto loc_82223BF0;
	// cmpwi cr6,r29,179
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 179, ctx.xer);
	// beq cr6,0x82223ba4
	if (ctx.cr6.eq) goto loc_82223BA4;
	// cmpwi cr6,r29,180
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 180, ctx.xer);
	// bne cr6,0x82223c14
	if (!ctx.cr6.eq) goto loc_82223C14;
	// addi r11,r31,1212
	ctx.r11.s64 = ctx.r31.s64 + 1212;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82223B80;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221f3c8
	ctx.lr = 0x82223B8C;
	sub_8221F3C8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82223c14
	if (ctx.cr6.eq) goto loc_82223C14;
	// bl 0x821601b8
	ctx.lr = 0x82223B9C;
	sub_821601B8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82223BA4:
	// addi r11,r31,1184
	ctx.r11.s64 = ctx.r31.s64 + 1184;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82223BCC;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221f3c8
	ctx.lr = 0x82223BD8;
	sub_8221F3C8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82223c14
	if (ctx.cr6.eq) goto loc_82223C14;
	// bl 0x821601b8
	ctx.lr = 0x82223BE8;
	sub_821601B8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82223BF0:
	// addi r11,r31,1240
	ctx.r11.s64 = ctx.r31.s64 + 1240;
	// addi r8,r31,1160
	ctx.r8.s64 = ctx.r31.s64 + 1160;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225340
	ctx.lr = 0x82223C14;
	sub_82225340(ctx, base);
loc_82223C14:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223C20"))) PPC_WEAK_FUNC(sub_82223C20);
PPC_FUNC_IMPL(__imp__sub_82223C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x82223C28;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82228f28
	ctx.lr = 0x82223C34;
	sub_82228F28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r27,r31,44
	ctx.r27.s64 = ctx.r31.s64 + 44;
	// addi r11,r11,-16596
	ctx.r11.s64 = ctx.r11.s64 + -16596;
	// addi r10,r10,-16676
	ctx.r10.s64 = ctx.r10.s64 + -16676;
	// addi r9,r9,-16688
	ctx.r9.s64 = ctx.r9.s64 + -16688;
	// addi r30,r31,1216
	ctx.r30.s64 = ctx.r31.s64 + 1216;
	// li r29,2
	ctx.r29.s64 = 2;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
loc_82223C68:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82224b88
	ctx.lr = 0x82223C70;
	sub_82224B88(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r28,r28,28
	ctx.r28.s64 = ctx.r28.s64 + 28;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82223c68
	if (!ctx.cr6.lt) goto loc_82223C68;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// li r26,15
	ctx.r26.s64 = 15;
	// addi r25,r11,13956
	ctx.r25.s64 = ctx.r11.s64 + 13956;
	// stw r29,1300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1300, ctx.r29.u32);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// stw r29,1304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1304, ctx.r29.u32);
loc_82223C9C:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stb r29,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r29.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82223CB4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82223cb4
	if (!ctx.cr6.eq) goto loc_82223CB4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82223CD8;
	sub_82161E08(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82225a18
	ctx.lr = 0x82223CE8;
	sub_82225A18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82223CF8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82223cf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82223CF8;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82223d20
	if (ctx.cr6.lt) goto loc_82223D20;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x82223D20;
	sub_82186190(ctx, base);
loc_82223D20:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// addi r11,r25,12
	ctx.r11.s64 = ctx.r25.s64 + 12;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stb r29,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r29.u8);
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82223c9c
	if (!ctx.cr6.eq) goto loc_82223C9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223D50"))) PPC_WEAK_FUNC(sub_82223D50);
PPC_FUNC_IMPL(__imp__sub_82223D50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-44
	ctx.r3.s64 = ctx.r3.s64 + -44;
	// b 0x82223d60
	sub_82223D60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223D58"))) PPC_WEAK_FUNC(sub_82223D58);
PPC_FUNC_IMPL(__imp__sub_82223D58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82223d60
	sub_82223D60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223D60"))) PPC_WEAK_FUNC(sub_82223D60);
PPC_FUNC_IMPL(__imp__sub_82223D60) {
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
	// lwz r3,1304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1304);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82223d8c
	if (ctx.cr6.eq) goto loc_82223D8C;
	// bl 0x821601b8
	ctx.lr = 0x82223D8C;
	sub_821601B8(ctx, base);
loc_82223D8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82223530
	ctx.lr = 0x82223D94;
	sub_82223530(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82223dac
	if (ctx.cr6.eq) goto loc_82223DAC;
	// bl 0x82186190
	ctx.lr = 0x82223DA8;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82223DAC:
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

__attribute__((alias("__imp__sub_82223DC8"))) PPC_WEAK_FUNC(sub_82223DC8);
PPC_FUNC_IMPL(__imp__sub_82223DC8) {
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
	// bl 0x821e0968
	ctx.lr = 0x82223DE8;
	sub_821E0968(ctx, base);
	// rlwinm r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82223e18
	if (ctx.cr6.eq) goto loc_82223E18;
	// addi r11,r31,1352
	ctx.r11.s64 = ctx.r31.s64 + 1352;
	// addi r8,r31,1160
	ctx.r8.s64 = ctx.r31.s64 + 1160;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225340
	ctx.lr = 0x82223E18;
	sub_82225340(ctx, base);
loc_82223E18:
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

__attribute__((alias("__imp__sub_82223E30"))) PPC_WEAK_FUNC(sub_82223E30);
PPC_FUNC_IMPL(__imp__sub_82223E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82223E38;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82228a18
	ctx.lr = 0x82223E48;
	sub_82228A18(ctx, base);
	// addi r31,r30,1384
	ctx.r31.s64 = ctx.r30.s64 + 1384;
	// li r29,2
	ctx.r29.s64 = 2;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82223E54:
	// stw r28,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r28.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82223e68
	if (ctx.cr6.eq) goto loc_82223E68;
	// bl 0x821601b8
	ctx.lr = 0x82223E68;
	sub_821601B8(ctx, base);
loc_82223E68:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82223e54
	if (!ctx.cr6.eq) goto loc_82223E54;
	// addi r11,r27,-185
	ctx.r11.s64 = ctx.r27.s64 + -185;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82223f6c
	if (ctx.cr6.gt) goto loc_82223F6C;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// addi r12,r12,16032
	ctx.r12.s64 = ctx.r12.s64 + 16032;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82223F38;
	case 1:
		goto loc_82223F40;
	case 2:
		goto loc_82223F48;
	case 3:
		goto loc_82223EC0;
	case 4:
		goto loc_82223F30;
	case 5:
		goto loc_82223F6C;
	case 6:
		goto loc_82223F6C;
	case 7:
		goto loc_82223EC0;
	default:
		__builtin_unreachable();
	}
	// lwz r17,16184(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 16184);
	// lwz r17,16192(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 16192);
	// lwz r17,16200(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 16200);
	// lwz r17,16064(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 16064);
	// lwz r17,16176(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 16176);
	// lwz r17,16236(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 16236);
	// lwz r17,16236(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 16236);
	// lwz r17,16064(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 16064);
loc_82223EC0:
	// addi r11,r30,1212
	ctx.r11.s64 = ctx.r30.s64 + 1212;
	// addi r9,r30,1160
	ctx.r9.s64 = ctx.r30.s64 + 1160;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82223EE8;
	sub_82225BD8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r30,1380
	ctx.r31.s64 = ctx.r30.s64 + 1380;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82223f08
	if (ctx.cr6.eq) goto loc_82223F08;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82160140
	ctx.lr = 0x82223F08;
	sub_82160140(ctx, base);
loc_82223F08:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82223f18
	if (ctx.cr6.eq) goto loc_82223F18;
	// bl 0x821601b8
	ctx.lr = 0x82223F18;
	sub_821601B8(ctx, base);
loc_82223F18:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82223f6c
	if (ctx.cr6.eq) goto loc_82223F6C;
	// bl 0x821601b8
	ctx.lr = 0x82223F2C;
	sub_821601B8(ctx, base);
	// b 0x82223f6c
	goto loc_82223F6C;
loc_82223F30:
	// addi r11,r30,1184
	ctx.r11.s64 = ctx.r30.s64 + 1184;
	// b 0x82223f4c
	goto loc_82223F4C;
loc_82223F38:
	// addi r11,r30,1240
	ctx.r11.s64 = ctx.r30.s64 + 1240;
	// b 0x82223f4c
	goto loc_82223F4C;
loc_82223F40:
	// addi r11,r30,1268
	ctx.r11.s64 = ctx.r30.s64 + 1268;
	// b 0x82223f4c
	goto loc_82223F4C;
loc_82223F48:
	// addi r11,r30,1296
	ctx.r11.s64 = ctx.r30.s64 + 1296;
loc_82223F4C:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r8,r30,1160
	ctx.r8.s64 = ctx.r30.s64 + 1160;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82225340
	ctx.lr = 0x82223F6C;
	sub_82225340(ctx, base);
loc_82223F6C:
	// cmpwi cr6,r27,190
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 190, ctx.xer);
	// blt cr6,0x8222400c
	if (ctx.cr6.lt) goto loc_8222400C;
	// cmpwi cr6,r27,191
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 191, ctx.xer);
	// bgt cr6,0x8222400c
	if (ctx.cr6.gt) goto loc_8222400C;
	// addi r29,r30,1396
	ctx.r29.s64 = ctx.r30.s64 + 1396;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82223f9c
	if (ctx.cr6.eq) goto loc_82223F9C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82224028
	if (!ctx.cr6.eq) goto loc_82224028;
loc_82223F9C:
	// addi r11,r30,1324
	ctx.r11.s64 = ctx.r30.s64 + 1324;
	// addi r9,r30,1160
	ctx.r9.s64 = ctx.r30.s64 + 1160;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82223FC4;
	sub_82225BD8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82223fe0
	if (ctx.cr6.eq) goto loc_82223FE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82160140
	ctx.lr = 0x82223FE0;
	sub_82160140(ctx, base);
loc_82223FE0:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82223ff0
	if (ctx.cr6.eq) goto loc_82223FF0;
	// bl 0x821601b8
	ctx.lr = 0x82223FF0;
	sub_821601B8(ctx, base);
loc_82223FF0:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82224028
	if (ctx.cr6.eq) goto loc_82224028;
	// bl 0x821601b8
	ctx.lr = 0x82224004;
	sub_821601B8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_8222400C:
	// addi r31,r30,1396
	ctx.r31.s64 = ctx.r30.s64 + 1396;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82224024
	if (ctx.cr6.eq) goto loc_82224024;
	// bl 0x821601b8
	ctx.lr = 0x82224024;
	sub_821601B8(ctx, base);
loc_82224024:
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
loc_82224028:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82224030"))) PPC_WEAK_FUNC(sub_82224030);
PPC_FUNC_IMPL(__imp__sub_82224030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x82224038;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82228f28
	ctx.lr = 0x82224044;
	sub_82228F28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r27,r30,44
	ctx.r27.s64 = ctx.r30.s64 + 44;
	// addi r11,r11,-16460
	ctx.r11.s64 = ctx.r11.s64 + -16460;
	// addi r10,r10,-16540
	ctx.r10.s64 = ctx.r10.s64 + -16540;
	// addi r9,r9,-16548
	ctx.r9.s64 = ctx.r9.s64 + -16548;
	// addi r28,r30,1216
	ctx.r28.s64 = ctx.r30.s64 + 1216;
	// li r31,6
	ctx.r31.s64 = 6;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r10,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r10.u32);
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
loc_82224078:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82224b88
	ctx.lr = 0x82224080;
	sub_82224B88(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82224078
	if (!ctx.cr6.lt) goto loc_82224078;
	// addi r11,r30,1412
	ctx.r11.s64 = ctx.r30.s64 + 1412;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8222409C:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x8222409c
	if (!ctx.cr6.lt) goto loc_8222409C;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// stw r31,1428(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1428, ctx.r31.u32);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r31,1432(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1432, ctx.r31.u32);
	// addi r25,r11,14012
	ctx.r25.s64 = ctx.r11.s64 + 14012;
	// li r26,15
	ctx.r26.s64 = 15;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_822240D0:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822240E8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822240e8
	if (!ctx.cr6.eq) goto loc_822240E8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x8222410C;
	sub_82161E08(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82225a18
	ctx.lr = 0x8222411C;
	sub_82225A18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8222412C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8222412c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222412C;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82224154
	if (ctx.cr6.lt) goto loc_82224154;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x82224154;
	sub_82186190(ctx, base);
loc_82224154:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// addi r11,r25,28
	ctx.r11.s64 = ctx.r25.s64 + 28;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822240d0
	if (!ctx.cr6.eq) goto loc_822240D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82224180"))) PPC_WEAK_FUNC(sub_82224180);
PPC_FUNC_IMPL(__imp__sub_82224180) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82224240
	sub_82224240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82224188"))) PPC_WEAK_FUNC(sub_82224188);
PPC_FUNC_IMPL(__imp__sub_82224188) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-44
	ctx.r3.s64 = ctx.r3.s64 + -44;
	// b 0x82224240
	sub_82224240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82224190"))) PPC_WEAK_FUNC(sub_82224190);
PPC_FUNC_IMPL(__imp__sub_82224190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82224198;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,1432(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1432);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822241b0
	if (ctx.cr6.eq) goto loc_822241B0;
	// bl 0x821601b8
	ctx.lr = 0x822241B0;
	sub_821601B8(ctx, base);
loc_822241B0:
	// addi r11,r28,1428
	ctx.r11.s64 = ctx.r28.s64 + 1428;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
loc_822241BC:
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82224224
	if (ctx.cr6.eq) goto loc_82224224;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq 0x822241ec
	if (ctx.cr0.eq) goto loc_822241EC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82224224
	goto loc_82224224;
loc_822241EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82224200;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne 0x82224224
	if (!ctx.cr0.eq) goto loc_82224224;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82224224;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82224224:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x822241bc
	if (!ctx.cr6.lt) goto loc_822241BC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82223530
	ctx.lr = 0x82224238;
	sub_82223530(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82224240"))) PPC_WEAK_FUNC(sub_82224240);
PPC_FUNC_IMPL(__imp__sub_82224240) {
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
	// bl 0x82224190
	ctx.lr = 0x82224260;
	sub_82224190(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82224278
	if (ctx.cr6.eq) goto loc_82224278;
	// bl 0x82186190
	ctx.lr = 0x82224274;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82224278:
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

__attribute__((alias("__imp__sub_82224290"))) PPC_WEAK_FUNC(sub_82224290);
PPC_FUNC_IMPL(__imp__sub_82224290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82224298;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82228a18
	ctx.lr = 0x822242A8;
	sub_82228A18(ctx, base);
	// addi r30,r31,1328
	ctx.r30.s64 = ctx.r31.s64 + 1328;
	// li r29,3
	ctx.r29.s64 = 3;
	// li r28,0
	ctx.r28.s64 = 0;
loc_822242B4:
	// stw r28,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r28.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822242c8
	if (ctx.cr6.eq) goto loc_822242C8;
	// bl 0x821601b8
	ctx.lr = 0x822242C8;
	sub_821601B8(ctx, base);
loc_822242C8:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x822242b4
	if (!ctx.cr6.eq) goto loc_822242B4;
	// lwz r11,1364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1364);
	// cmpwi cr6,r11,223
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 223, ctx.xer);
	// bne cr6,0x8222430c
	if (!ctx.cr6.eq) goto loc_8222430C;
	// addi r11,r31,1296
	ctx.r11.s64 = ctx.r31.s64 + 1296;
	// addi r8,r31,1160
	ctx.r8.s64 = ctx.r31.s64 + 1160;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225340
	ctx.lr = 0x8222430C;
	sub_82225340(ctx, base);
loc_8222430C:
	// addi r11,r27,-6
	ctx.r11.s64 = ctx.r27.s64 + -6;
	// cmplwi cr6,r11,218
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 218, ctx.xer);
	// bgt cr6,0x82224744
	if (ctx.cr6.gt) goto loc_82224744;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// addi r12,r12,17200
	ctx.r12.s64 = ctx.r12.s64 + 17200;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8222469C;
	case 1:
		goto loc_82224744;
	case 2:
		goto loc_82224744;
	case 3:
		goto loc_82224744;
	case 4:
		goto loc_82224744;
	case 5:
		goto loc_82224744;
	case 6:
		goto loc_82224744;
	case 7:
		goto loc_822246D8;
	case 8:
		goto loc_82224744;
	case 9:
		goto loc_82224744;
	case 10:
		goto loc_82224744;
	case 11:
		goto loc_82224744;
	case 12:
		goto loc_82224744;
	case 13:
		goto loc_82224744;
	case 14:
		goto loc_82224744;
	case 15:
		goto loc_82224744;
	case 16:
		goto loc_82224744;
	case 17:
		goto loc_82224744;
	case 18:
		goto loc_82224744;
	case 19:
		goto loc_82224744;
	case 20:
		goto loc_82224744;
	case 21:
		goto loc_82224744;
	case 22:
		goto loc_82224744;
	case 23:
		goto loc_82224744;
	case 24:
		goto loc_82224744;
	case 25:
		goto loc_82224744;
	case 26:
		goto loc_82224744;
	case 27:
		goto loc_82224744;
	case 28:
		goto loc_82224744;
	case 29:
		goto loc_82224744;
	case 30:
		goto loc_82224744;
	case 31:
		goto loc_82224744;
	case 32:
		goto loc_82224744;
	case 33:
		goto loc_82224744;
	case 34:
		goto loc_82224744;
	case 35:
		goto loc_82224744;
	case 36:
		goto loc_82224744;
	case 37:
		goto loc_82224744;
	case 38:
		goto loc_82224744;
	case 39:
		goto loc_82224744;
	case 40:
		goto loc_82224744;
	case 41:
		goto loc_82224744;
	case 42:
		goto loc_82224744;
	case 43:
		goto loc_82224744;
	case 44:
		goto loc_82224744;
	case 45:
		goto loc_82224744;
	case 46:
		goto loc_82224744;
	case 47:
		goto loc_82224744;
	case 48:
		goto loc_82224744;
	case 49:
		goto loc_82224744;
	case 50:
		goto loc_82224744;
	case 51:
		goto loc_82224744;
	case 52:
		goto loc_82224744;
	case 53:
		goto loc_82224744;
	case 54:
		goto loc_82224744;
	case 55:
		goto loc_82224744;
	case 56:
		goto loc_82224744;
	case 57:
		goto loc_82224744;
	case 58:
		goto loc_82224744;
	case 59:
		goto loc_82224744;
	case 60:
		goto loc_82224744;
	case 61:
		goto loc_82224744;
	case 62:
		goto loc_82224744;
	case 63:
		goto loc_82224744;
	case 64:
		goto loc_82224744;
	case 65:
		goto loc_82224744;
	case 66:
		goto loc_82224744;
	case 67:
		goto loc_82224744;
	case 68:
		goto loc_82224744;
	case 69:
		goto loc_82224744;
	case 70:
		goto loc_82224744;
	case 71:
		goto loc_82224744;
	case 72:
		goto loc_82224744;
	case 73:
		goto loc_82224744;
	case 74:
		goto loc_82224744;
	case 75:
		goto loc_82224744;
	case 76:
		goto loc_82224744;
	case 77:
		goto loc_82224744;
	case 78:
		goto loc_82224744;
	case 79:
		goto loc_82224744;
	case 80:
		goto loc_82224744;
	case 81:
		goto loc_82224744;
	case 82:
		goto loc_82224744;
	case 83:
		goto loc_82224744;
	case 84:
		goto loc_82224744;
	case 85:
		goto loc_82224744;
	case 86:
		goto loc_82224744;
	case 87:
		goto loc_82224744;
	case 88:
		goto loc_82224744;
	case 89:
		goto loc_82224744;
	case 90:
		goto loc_82224744;
	case 91:
		goto loc_82224744;
	case 92:
		goto loc_82224744;
	case 93:
		goto loc_82224744;
	case 94:
		goto loc_82224744;
	case 95:
		goto loc_82224744;
	case 96:
		goto loc_82224744;
	case 97:
		goto loc_82224744;
	case 98:
		goto loc_82224744;
	case 99:
		goto loc_82224744;
	case 100:
		goto loc_82224744;
	case 101:
		goto loc_82224744;
	case 102:
		goto loc_82224744;
	case 103:
		goto loc_82224744;
	case 104:
		goto loc_82224744;
	case 105:
		goto loc_82224744;
	case 106:
		goto loc_82224744;
	case 107:
		goto loc_82224744;
	case 108:
		goto loc_82224744;
	case 109:
		goto loc_82224744;
	case 110:
		goto loc_82224744;
	case 111:
		goto loc_82224744;
	case 112:
		goto loc_82224744;
	case 113:
		goto loc_82224744;
	case 114:
		goto loc_82224744;
	case 115:
		goto loc_82224744;
	case 116:
		goto loc_82224744;
	case 117:
		goto loc_82224744;
	case 118:
		goto loc_82224744;
	case 119:
		goto loc_82224744;
	case 120:
		goto loc_82224744;
	case 121:
		goto loc_82224744;
	case 122:
		goto loc_82224744;
	case 123:
		goto loc_82224744;
	case 124:
		goto loc_82224744;
	case 125:
		goto loc_82224744;
	case 126:
		goto loc_82224744;
	case 127:
		goto loc_82224744;
	case 128:
		goto loc_82224744;
	case 129:
		goto loc_82224744;
	case 130:
		goto loc_82224744;
	case 131:
		goto loc_82224744;
	case 132:
		goto loc_82224744;
	case 133:
		goto loc_82224744;
	case 134:
		goto loc_82224744;
	case 135:
		goto loc_82224744;
	case 136:
		goto loc_82224744;
	case 137:
		goto loc_82224744;
	case 138:
		goto loc_82224744;
	case 139:
		goto loc_82224744;
	case 140:
		goto loc_82224744;
	case 141:
		goto loc_82224744;
	case 142:
		goto loc_82224744;
	case 143:
		goto loc_82224744;
	case 144:
		goto loc_82224744;
	case 145:
		goto loc_82224744;
	case 146:
		goto loc_82224744;
	case 147:
		goto loc_82224744;
	case 148:
		goto loc_82224744;
	case 149:
		goto loc_82224744;
	case 150:
		goto loc_82224744;
	case 151:
		goto loc_82224744;
	case 152:
		goto loc_82224744;
	case 153:
		goto loc_82224744;
	case 154:
		goto loc_82224744;
	case 155:
		goto loc_82224744;
	case 156:
		goto loc_82224744;
	case 157:
		goto loc_82224744;
	case 158:
		goto loc_82224744;
	case 159:
		goto loc_82224744;
	case 160:
		goto loc_82224744;
	case 161:
		goto loc_82224744;
	case 162:
		goto loc_82224744;
	case 163:
		goto loc_82224744;
	case 164:
		goto loc_82224744;
	case 165:
		goto loc_82224744;
	case 166:
		goto loc_82224744;
	case 167:
		goto loc_82224744;
	case 168:
		goto loc_82224744;
	case 169:
		goto loc_82224744;
	case 170:
		goto loc_82224744;
	case 171:
		goto loc_82224744;
	case 172:
		goto loc_82224744;
	case 173:
		goto loc_82224744;
	case 174:
		goto loc_82224744;
	case 175:
		goto loc_82224744;
	case 176:
		goto loc_82224744;
	case 177:
		goto loc_82224744;
	case 178:
		goto loc_82224744;
	case 179:
		goto loc_82224744;
	case 180:
		goto loc_82224744;
	case 181:
		goto loc_82224744;
	case 182:
		goto loc_82224744;
	case 183:
		goto loc_82224744;
	case 184:
		goto loc_82224744;
	case 185:
		goto loc_82224744;
	case 186:
		goto loc_82224744;
	case 187:
		goto loc_82224744;
	case 188:
		goto loc_82224744;
	case 189:
		goto loc_82224744;
	case 190:
		goto loc_82224744;
	case 191:
		goto loc_82224744;
	case 192:
		goto loc_82224744;
	case 193:
		goto loc_82224744;
	case 194:
		goto loc_82224744;
	case 195:
		goto loc_82224744;
	case 196:
		goto loc_822246D8;
	case 197:
		goto loc_82224744;
	case 198:
		goto loc_82224744;
	case 199:
		goto loc_82224744;
	case 200:
		goto loc_82224744;
	case 201:
		goto loc_82224744;
	case 202:
		goto loc_82224744;
	case 203:
		goto loc_82224744;
	case 204:
		goto loc_82224744;
	case 205:
		goto loc_82224744;
	case 206:
		goto loc_82224744;
	case 207:
		goto loc_82224744;
	case 208:
		goto loc_82224744;
	case 209:
		goto loc_82224744;
	case 210:
		goto loc_82224744;
	case 211:
		goto loc_82224744;
	case 212:
		goto loc_82224744;
	case 213:
		goto loc_82224744;
	case 214:
		goto loc_82224744;
	case 215:
		goto loc_82224744;
	case 216:
		goto loc_82224744;
	case 217:
		goto loc_822246D8;
	case 218:
		goto loc_822246D8;
	default:
		__builtin_unreachable();
	}
	// lwz r17,18076(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18076);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18136(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18136);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18136(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18136);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18244(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18244);
	// lwz r17,18136(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18136);
	// lwz r17,18136(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18136);
loc_8222469C:
	// addi r11,r31,1184
	ctx.r11.s64 = ctx.r31.s64 + 1184;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x822246C4;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1324
	ctx.r3.s64 = ctx.r31.s64 + 1324;
	// bl 0x8221f3c8
	ctx.lr = 0x822246D0;
	sub_8221F3C8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82224738
	goto loc_82224738;
loc_822246D8:
	// addi r11,r31,1212
	ctx.r11.s64 = ctx.r31.s64 + 1212;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82224700;
	sub_82225BD8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r31,1324
	ctx.r30.s64 = ctx.r31.s64 + 1324;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82224720
	if (ctx.cr6.eq) goto loc_82224720;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82160140
	ctx.lr = 0x82224720;
	sub_82160140(ctx, base);
loc_82224720:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82224730
	if (ctx.cr6.eq) goto loc_82224730;
	// bl 0x821601b8
	ctx.lr = 0x82224730;
	sub_821601B8(ctx, base);
loc_82224730:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
loc_82224738:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82224744
	if (ctx.cr6.eq) goto loc_82224744;
	// bl 0x821601b8
	ctx.lr = 0x82224744;
	sub_821601B8(ctx, base);
loc_82224744:
	// addi r11,r27,-7
	ctx.r11.s64 = ctx.r27.s64 + -7;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x82224834
	if (ctx.cr6.gt) goto loc_82224834;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// addi r12,r12,18280
	ctx.r12.s64 = ctx.r12.s64 + 18280;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_822247A0;
	case 1:
		goto loc_822247A0;
	case 2:
		goto loc_822247A0;
	case 3:
		goto loc_82224834;
	case 4:
		goto loc_82224834;
	case 5:
		goto loc_82224834;
	case 6:
		goto loc_82224834;
	case 7:
		goto loc_82224834;
	case 8:
		goto loc_822247A0;
	case 9:
		goto loc_822247A0;
	case 10:
		goto loc_822247A0;
	case 11:
		goto loc_822247A0;
	case 12:
		goto loc_822247A0;
	case 13:
		goto loc_822247A0;
	default:
		__builtin_unreachable();
	}
	// lwz r17,18336(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18336);
	// lwz r17,18336(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18336);
	// lwz r17,18336(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18336);
	// lwz r17,18484(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18484);
	// lwz r17,18484(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18484);
	// lwz r17,18484(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18484);
	// lwz r17,18484(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18484);
	// lwz r17,18484(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18484);
	// lwz r17,18336(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18336);
	// lwz r17,18336(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18336);
	// lwz r17,18336(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18336);
	// lwz r17,18336(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18336);
	// lwz r17,18336(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18336);
	// lwz r17,18336(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18336);
loc_822247A0:
	// addi r29,r31,1348
	ctx.r29.s64 = ctx.r31.s64 + 1348;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822247c0
	if (ctx.cr6.eq) goto loc_822247C0;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82224850
	if (!ctx.cr6.eq) goto loc_82224850;
loc_822247C0:
	// addi r11,r31,1240
	ctx.r11.s64 = ctx.r31.s64 + 1240;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x822247E8;
	sub_82225BD8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82224804
	if (ctx.cr6.eq) goto loc_82224804;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82160140
	ctx.lr = 0x82224804;
	sub_82160140(ctx, base);
loc_82224804:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82224814
	if (ctx.cr6.eq) goto loc_82224814;
	// bl 0x821601b8
	ctx.lr = 0x82224814;
	sub_821601B8(ctx, base);
loc_82224814:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82224850
	if (ctx.cr6.eq) goto loc_82224850;
	// bl 0x821601b8
	ctx.lr = 0x82224828;
	sub_821601B8(ctx, base);
	// stw r27,1364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1364, ctx.r27.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_82224834:
	// addi r30,r31,1348
	ctx.r30.s64 = ctx.r31.s64 + 1348;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222484c
	if (ctx.cr6.eq) goto loc_8222484C;
	// bl 0x821601b8
	ctx.lr = 0x8222484C;
	sub_821601B8(ctx, base);
loc_8222484C:
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
loc_82224850:
	// stw r27,1364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1364, ctx.r27.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82224860"))) PPC_WEAK_FUNC(sub_82224860);
PPC_FUNC_IMPL(__imp__sub_82224860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82224868;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r30,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x100000;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822248c8
	if (ctx.cr6.eq) goto loc_822248C8;
	// addi r11,r31,1268
	ctx.r11.s64 = ctx.r31.s64 + 1268;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x822248AC;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1356
	ctx.r3.s64 = ctx.r31.s64 + 1356;
	// bl 0x8221f3c8
	ctx.lr = 0x822248B8;
	sub_8221F3C8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822248c8
	if (ctx.cr6.eq) goto loc_822248C8;
	// bl 0x821601b8
	ctx.lr = 0x822248C8;
	sub_821601B8(ctx, base);
loc_822248C8:
	// rlwinm r11,r29,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822248ec
	if (ctx.cr6.eq) goto loc_822248EC;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,1356
	ctx.r3.s64 = ctx.r31.s64 + 1356;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8221f3c8
	ctx.lr = 0x822248EC;
	sub_8221F3C8(ctx, base);
loc_822248EC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df0
	ctx.lr = 0x822248FC;
	sub_82228DF0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82224908"))) PPC_WEAK_FUNC(sub_82224908);
PPC_FUNC_IMPL(__imp__sub_82224908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x82224910;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82228f28
	ctx.lr = 0x8222491C;
	sub_82228F28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r27,r31,44
	ctx.r27.s64 = ctx.r31.s64 + 44;
	// addi r11,r11,-16284
	ctx.r11.s64 = ctx.r11.s64 + -16284;
	// addi r10,r10,-16364
	ctx.r10.s64 = ctx.r10.s64 + -16364;
	// addi r9,r9,-16372
	ctx.r9.s64 = ctx.r9.s64 + -16372;
	// addi r28,r31,1216
	ctx.r28.s64 = ctx.r31.s64 + 1216;
	// li r30,4
	ctx.r30.s64 = 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
loc_82224950:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82224b88
	ctx.lr = 0x82224958;
	sub_82224B88(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82224950
	if (!ctx.cr6.lt) goto loc_82224950;
	// addi r11,r31,1356
	ctx.r11.s64 = ctx.r31.s64 + 1356;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82224974:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x82224974
	if (!ctx.cr6.lt) goto loc_82224974;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,1380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1380, ctx.r30.u32);
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// stw r30,1384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1384, ctx.r30.u32);
	// stw r30,1388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1388, ctx.r30.u32);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// addi r25,r11,14088
	ctx.r25.s64 = ctx.r11.s64 + 14088;
	// stw r30,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r30.u32);
	// li r26,15
	ctx.r26.s64 = 15;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// stw r10,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r10.u32);
loc_822249B8:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822249D0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822249d0
	if (!ctx.cr6.eq) goto loc_822249D0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x822249F4;
	sub_82161E08(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82225a18
	ctx.lr = 0x82224A04;
	sub_82225A18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82224A14:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82224a14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82224A14;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82224a3c
	if (ctx.cr6.lt) goto loc_82224A3C;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x82224A3C;
	sub_82186190(ctx, base);
loc_82224A3C:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// addi r11,r25,20
	ctx.r11.s64 = ctx.r25.s64 + 20;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822249b8
	if (!ctx.cr6.eq) goto loc_822249B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82224A68"))) PPC_WEAK_FUNC(sub_82224A68);
PPC_FUNC_IMPL(__imp__sub_82224A68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82224b38
	sub_82224B38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82224A70"))) PPC_WEAK_FUNC(sub_82224A70);
PPC_FUNC_IMPL(__imp__sub_82224A70) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-44
	ctx.r3.s64 = ctx.r3.s64 + -44;
	// b 0x82224b38
	sub_82224B38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82224A78"))) PPC_WEAK_FUNC(sub_82224A78);
PPC_FUNC_IMPL(__imp__sub_82224A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82224A80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,1392(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1392);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82224a98
	if (ctx.cr6.eq) goto loc_82224A98;
	// bl 0x821601b8
	ctx.lr = 0x82224A98;
	sub_821601B8(ctx, base);
loc_82224A98:
	// lwz r3,1384(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1384);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82224aa8
	if (ctx.cr6.eq) goto loc_82224AA8;
	// bl 0x821601b8
	ctx.lr = 0x82224AA8;
	sub_821601B8(ctx, base);
loc_82224AA8:
	// addi r11,r28,1380
	ctx.r11.s64 = ctx.r28.s64 + 1380;
	// li r29,2
	ctx.r29.s64 = 2;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
loc_82224AB4:
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82224b1c
	if (ctx.cr6.eq) goto loc_82224B1C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq 0x82224ae4
	if (ctx.cr0.eq) goto loc_82224AE4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82224b1c
	goto loc_82224B1C;
loc_82224AE4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82224AF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne 0x82224b1c
	if (!ctx.cr0.eq) goto loc_82224B1C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82224B1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82224B1C:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82224ab4
	if (!ctx.cr6.lt) goto loc_82224AB4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82223530
	ctx.lr = 0x82224B30;
	sub_82223530(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82224B38"))) PPC_WEAK_FUNC(sub_82224B38);
PPC_FUNC_IMPL(__imp__sub_82224B38) {
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
	// bl 0x82224a78
	ctx.lr = 0x82224B58;
	sub_82224A78(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82224b70
	if (ctx.cr6.eq) goto loc_82224B70;
	// bl 0x82186190
	ctx.lr = 0x82224B6C;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82224B70:
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

__attribute__((alias("__imp__sub_82224B88"))) PPC_WEAK_FUNC(sub_82224B88);
PPC_FUNC_IMPL(__imp__sub_82224B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224BC0"))) PPC_WEAK_FUNC(sub_82224BC0);
PPC_FUNC_IMPL(__imp__sub_82224BC0) {
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
	// bl 0x82594110
	ctx.lr = 0x82224BE0;
	sub_82594110(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-16208
	ctx.r11.s64 = ctx.r11.s64 + -16208;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r8,r31,80
	ctx.r8.s64 = ctx.r31.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lfs f0,14088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// addi r10,r31,64
	ctx.r10.s64 = ctx.r31.s64 + 64;
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// stb r11,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r11.u8);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// lfs f13,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-4576
	ctx.r11.s64 = ctx.r11.s64 + -4576;
	// lfs f12,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,48(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f13,56(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f12,52(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_82224C78"))) PPC_WEAK_FUNC(sub_82224C78);
PPC_FUNC_IMPL(__imp__sub_82224C78) {
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
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82224ca4
	if (ctx.cr6.eq) goto loc_82224CA4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x82224CA4;
	sub_82659610(ctx, base);
loc_82224CA4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82224cb8
	if (ctx.cr6.eq) goto loc_82224CB8;
	// bl 0x82631328
	ctx.lr = 0x82224CB8;
	sub_82631328(ctx, base);
loc_82224CB8:
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

__attribute__((alias("__imp__sub_82224CD8"))) PPC_WEAK_FUNC(sub_82224CD8);
PPC_FUNC_IMPL(__imp__sub_82224CD8) {
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
	// addi r4,r11,14504
	ctx.r4.s64 = ctx.r11.s64 + 14504;
	// bl 0x826de850
	ctx.lr = 0x82224CFC;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82224d10
	if (!ctx.cr6.eq) goto loc_82224D10;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82224D10:
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

__attribute__((alias("__imp__sub_82224D28"))) PPC_WEAK_FUNC(sub_82224D28);
PPC_FUNC_IMPL(__imp__sub_82224D28) {
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
	// addi r4,r11,14744
	ctx.r4.s64 = ctx.r11.s64 + 14744;
	// bl 0x826de850
	ctx.lr = 0x82224D4C;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82224d60
	if (!ctx.cr6.eq) goto loc_82224D60;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82224D60:
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

__attribute__((alias("__imp__sub_82224D78"))) PPC_WEAK_FUNC(sub_82224D78);
PPC_FUNC_IMPL(__imp__sub_82224D78) {
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
	// addi r11,r11,-16216
	ctx.r11.s64 = ctx.r11.s64 + -16216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82224db4
	if (ctx.cr6.eq) goto loc_82224DB4;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x82581e38
	ctx.lr = 0x82224DB4;
	sub_82581E38(ctx, base);
loc_82224DB4:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82224dcc
	if (ctx.cr6.eq) goto loc_82224DCC;
	// bl 0x82186190
	ctx.lr = 0x82224DC8;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82224DCC:
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

__attribute__((alias("__imp__sub_82224DE8"))) PPC_WEAK_FUNC(sub_82224DE8);
PPC_FUNC_IMPL(__imp__sub_82224DE8) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-16208
	ctx.r11.s64 = ctx.r11.s64 + -16208;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82224e38
	if (ctx.cr6.eq) goto loc_82224E38;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82224e38
	if (ctx.cr6.eq) goto loc_82224E38;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82224E38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82224E38:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82224e48
	if (ctx.cr6.eq) goto loc_82224E48;
	// bl 0x82631328
	ctx.lr = 0x82224E48;
	sub_82631328(ctx, base);
loc_82224E48:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,31852
	ctx.r11.s64 = ctx.r11.s64 + 31852;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82224e68
	if (ctx.cr6.eq) goto loc_82224E68;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82224E68:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82224e7c
	if (ctx.cr6.eq) goto loc_82224E7C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82224E7C:
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

__attribute__((alias("__imp__sub_82224E90"))) PPC_WEAK_FUNC(sub_82224E90);
PPC_FUNC_IMPL(__imp__sub_82224E90) {
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
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8222512c
	if (ctx.cr6.eq) goto loc_8222512C;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222512c
	if (ctx.cr6.eq) goto loc_8222512C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222512c
	if (ctx.cr6.eq) goto loc_8222512C;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8222512c
	if (ctx.cr6.eq) goto loc_8222512C;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82594160
	ctx.lr = 0x82224EE0;
	sub_82594160(ctx, base);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r5,r11,-4576
	ctx.r5.s64 = ctx.r11.s64 + -4576;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82166e50
	ctx.lr = 0x82224EF4;
	sub_82166E50(ctx, base);
	// addi r31,r30,64
	ctx.r31.s64 = ctx.r30.s64 + 64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x825d3bc8
	ctx.lr = 0x82224F08;
	sub_825D3BC8(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825d2260
	ctx.lr = 0x82224F14;
	sub_825D2260(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r30,80
	ctx.r11.s64 = ctx.r30.s64 + 80;
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82224fd8
	if (ctx.cr6.eq) goto loc_82224FD8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82224f98
	if (!ctx.cr6.eq) goto loc_82224F98;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x825d1e60
	ctx.lr = 0x82224F50;
	sub_825D1E60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x825d2bc0
	ctx.lr = 0x82224F5C;
	sub_825D2BC0(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r3,48
	ctx.r9.s64 = ctx.r3.s64 + 48;
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
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82224F98:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-18576
	ctx.r11.s64 = ctx.r11.s64 + -18576;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v0,r10,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v0,r10,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,48
	ctx.r10.s64 = 48;
	// lvx128 v0,r10,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82225078
	goto loc_82225078;
loc_82224FD8:
	// lbz r11,25(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 25);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222501c
	if (ctx.cr6.eq) goto loc_8222501C;
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lfs f0,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lfs f0,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// b 0x82225020
	goto loc_82225020;
loc_8222501C:
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
loc_82225020:
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r6,r11,14192
	ctx.r6.s64 = ctx.r11.s64 + 14192;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// addi r4,r11,14208
	ctx.r4.s64 = ctx.r11.s64 + 14208;
	// bl 0x825c5560
	ctx.lr = 0x82225038;
	sub_825C5560(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x825d2bc0
	ctx.lr = 0x82225044;
	sub_825D2BC0(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r3,48
	ctx.r9.s64 = ctx.r3.s64 + 48;
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
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82225078:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r5,r30,48
	ctx.r5.s64 = ctx.r30.s64 + 48;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d2aa8
	ctx.lr = 0x82225090;
	sub_825D2AA8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x825d3bb0
	ctx.lr = 0x822250A0;
	sub_825D3BB0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x825d2cb0
	ctx.lr = 0x822250AC;
	sub_825D2CB0(ctx, base);
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// lwz r31,20(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r3,48
	ctx.r9.s64 = ctx.r3.s64 + 48;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq cr6,0x8222512c
	if (ctx.cr6.eq) goto loc_8222512C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222512c
	if (ctx.cr6.eq) goto loc_8222512C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82168c48
	ctx.lr = 0x82225114;
	sub_82168C48(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222512C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222512C:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
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

__attribute__((alias("__imp__sub_82225148"))) PPC_WEAK_FUNC(sub_82225148);
PPC_FUNC_IMPL(__imp__sub_82225148) {
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
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82225194
	if (ctx.cr6.eq) goto loc_82225194;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82225194
	if (ctx.cr6.eq) goto loc_82225194;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82225194;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82225194:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822251a8
	if (ctx.cr6.eq) goto loc_822251A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x822251A8;
	sub_82659610(ctx, base);
loc_822251A8:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822251bc
	if (ctx.cr6.eq) goto loc_822251BC;
	// bl 0x82631328
	ctx.lr = 0x822251BC;
	sub_82631328(ctx, base);
loc_822251BC:
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

__attribute__((alias("__imp__sub_822251D8"))) PPC_WEAK_FUNC(sub_822251D8);
PPC_FUNC_IMPL(__imp__sub_822251D8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82225280
	if (ctx.cr6.eq) goto loc_82225280;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82225280
	if (ctx.cr6.eq) goto loc_82225280;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82225280
	if (ctx.cr6.eq) goto loc_82225280;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82225280
	if (ctx.cr6.eq) goto loc_82225280;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82594160
	ctx.lr = 0x82225234;
	sub_82594160(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222524C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r5,r11,-4576
	ctx.r5.s64 = ctx.r11.s64 + -4576;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82166e50
	ctx.lr = 0x82225260;
	sub_82166E50(ctx, base);
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r31,80
	ctx.r10.s64 = ctx.r31.s64 + 80;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,272
	ctx.r11.s64 = ctx.r11.s64 + 272;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82225280:
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822252e4
	if (ctx.cr6.eq) goto loc_822252E4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822252e4
	if (ctx.cr6.eq) goto loc_822252E4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822252e4
	if (ctx.cr6.eq) goto loc_822252E4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// beq cr6,0x822252bc
	if (ctx.cr6.eq) goto loc_822252BC;
	// bl 0x82659610
	ctx.lr = 0x822252BC;
	sub_82659610(ctx, base);
loc_822252BC:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822252D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822252e4
	if (ctx.cr6.eq) goto loc_822252E4;
	// bl 0x82581e38
	ctx.lr = 0x822252E4;
	sub_82581E38(ctx, base);
loc_822252E4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82225324
	if (ctx.cr6.eq) goto loc_82225324;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82225324
	if (ctx.cr6.eq) goto loc_82225324;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82225318
	if (ctx.cr6.eq) goto loc_82225318;
	// bl 0x82594020
	ctx.lr = 0x82225310;
	sub_82594020(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8222531c
	if (!ctx.cr6.eq) goto loc_8222531C;
loc_82225318:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8222531C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82594138
	ctx.lr = 0x82225324;
	sub_82594138(ctx, base);
loc_82225324:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

__attribute__((alias("__imp__sub_82225340"))) PPC_WEAK_FUNC(sub_82225340);
PPC_FUNC_IMPL(__imp__sub_82225340) {
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
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// std r4,624(r1)
	PPC_STORE_U64(ctx.r1.u32 + 624, ctx.r4.u64);
	// std r5,632(r1)
	PPC_STORE_U64(ctx.r1.u32 + 632, ctx.r5.u64);
	// std r6,640(r1)
	PPC_STORE_U64(ctx.r1.u32 + 640, ctx.r6.u64);
	// std r7,648(r1)
	PPC_STORE_U64(ctx.r1.u32 + 648, ctx.r7.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222537C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82225668
	if (ctx.cr6.eq) goto loc_82225668;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,624(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 624);
	// bl 0x825fe028
	ctx.lr = 0x82225394;
	sub_825FE028(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82225668
	if (ctx.cr6.eq) goto loc_82225668;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222565c
	if (ctx.cr6.eq) goto loc_8222565C;
	// lbz r11,628(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 628);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822253fc
	if (ctx.cr6.eq) goto loc_822253FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x822253d8
	if (ctx.cr6.eq) goto loc_822253D8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82659610
	ctx.lr = 0x822253D4;
	sub_82659610(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_822253D8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822253EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822253fc
	if (ctx.cr6.eq) goto loc_822253FC;
	// bl 0x82581e38
	ctx.lr = 0x822253FC;
	sub_82581E38(ctx, base);
loc_822253FC:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,640(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,632(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 632);
	// addi r11,r4,240
	ctx.r11.s64 = ctx.r4.s64 + 240;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lfs f0,644(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lfs f0,648(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 648);
	ctx.f0.f64 = double(temp.f32);
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lfs f31,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,204(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// beq cr6,0x82225514
	if (ctx.cr6.eq) goto loc_82225514;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82225488
	if (ctx.cr6.eq) goto loc_82225488;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-18576
	ctx.r11.s64 = ctx.r11.s64 + -18576;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v0,r10,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v0,r10,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,48
	ctx.r10.s64 = 48;
	// lvx128 v0,r10,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x822255bc
	goto loc_822255BC;
loc_82225488:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222549C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r31,r11,14208
	ctx.r31.s64 = ctx.r11.s64 + 14208;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x825d2aa8
	ctx.lr = 0x822254B4;
	sub_825D2AA8(ctx, base);
	// lbz r11,629(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 629);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822254f0
	if (ctx.cr6.eq) goto loc_822254F0;
	// lfs f0,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lfs f0,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lfs f0,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// b 0x822254f4
	goto loc_822254F4;
loc_822254F0:
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
loc_822254F4:
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,14192
	ctx.r6.s64 = ctx.r11.s64 + 14192;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x825c5560
	ctx.lr = 0x82225508;
	sub_825C5560(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// b 0x82225584
	goto loc_82225584;
loc_82225514:
	// addi r11,r4,272
	ctx.r11.s64 = ctx.r4.s64 + 272;
	// lbz r10,629(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 629);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq cr6,0x82225560
	if (ctx.cr6.eq) goto loc_82225560;
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// lfs f0,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// lfs f0,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f31,220(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// b 0x82225564
	goto loc_82225564;
loc_82225560:
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
loc_82225564:
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r6,r11,14192
	ctx.r6.s64 = ctx.r11.s64 + 14192;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// addi r4,r11,14208
	ctx.r4.s64 = ctx.r11.s64 + 14208;
	// bl 0x825c5560
	ctx.lr = 0x8222557C;
	sub_825C5560(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
loc_82225584:
	// bl 0x825d2bc0
	ctx.lr = 0x82225588;
	sub_825D2BC0(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r3,48
	ctx.r9.s64 = ctx.r3.s64 + 48;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_822255BC:
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d2aa8
	ctx.lr = 0x822255D4;
	sub_825D2AA8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x825d3bb0
	ctx.lr = 0x822255E4;
	sub_825D3BB0(ctx, base);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x825d2cb0
	ctx.lr = 0x822255F0;
	sub_825D2CB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stvx v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// lvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82168c48
	ctx.lr = 0x82225640;
	sub_82168C48(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82225658;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8222565C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82225668
	if (ctx.cr6.eq) goto loc_82225668;
	// bl 0x82631328
	ctx.lr = 0x82225668;
	sub_82631328(ctx, base);
loc_82225668:
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
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

__attribute__((alias("__imp__sub_82225680"))) PPC_WEAK_FUNC(sub_82225680);
PPC_FUNC_IMPL(__imp__sub_82225680) {
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
	ctx.lr = 0x822256B0;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822256dc
	if (ctx.cr6.eq) goto loc_822256DC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-16196
	ctx.r10.s64 = ctx.r11.s64 + -16196;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x822256e0
	goto loc_822256E0;
loc_822256DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822256E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8222572c
	if (!ctx.cr6.eq) goto loc_8222572C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8222570c
	if (ctx.cr6.eq) goto loc_8222570C;
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
	ctx.lr = 0x8222570C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222570C:
	// lis r10,-32077
	ctx.r10.s64 = -2102198272;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,14160(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14160);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x8222572C;
	sub_821E0968(ctx, base);
loc_8222572C:
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

__attribute__((alias("__imp__sub_82225748"))) PPC_WEAK_FUNC(sub_82225748);
PPC_FUNC_IMPL(__imp__sub_82225748) {
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
	ctx.lr = 0x82225778;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822257a4
	if (ctx.cr6.eq) goto loc_822257A4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-16176
	ctx.r10.s64 = ctx.r11.s64 + -16176;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x822257a8
	goto loc_822257A8;
loc_822257A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822257A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x822257f4
	if (!ctx.cr6.eq) goto loc_822257F4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822257d4
	if (ctx.cr6.eq) goto loc_822257D4;
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
	ctx.lr = 0x822257D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822257D4:
	// lis r10,-32077
	ctx.r10.s64 = -2102198272;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,14160(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14160);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x822257F4;
	sub_821E0968(ctx, base);
loc_822257F4:
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

__attribute__((alias("__imp__sub_82225810"))) PPC_WEAK_FUNC(sub_82225810);
PPC_FUNC_IMPL(__imp__sub_82225810) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822259b4
	if (ctx.cr6.eq) goto loc_822259B4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822259b4
	if (ctx.cr6.eq) goto loc_822259B4;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822259b4
	if (ctx.cr6.eq) goto loc_822259B4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82225864;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822259a4
	if (ctx.cr6.eq) goto loc_822259A4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822259a4
	if (ctx.cr6.eq) goto loc_822259A4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-16140
	ctx.r4.s64 = ctx.r11.s64 + -16140;
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82225898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r10,-16148
	ctx.r4.s64 = ctx.r10.s64 + -16148;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822258C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r10,-16160
	ctx.r4.s64 = ctx.r10.s64 + -16160;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822258E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r10,32708
	ctx.r5.s64 = ctx.r10.s64 + 32708;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82225914;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82225994
	if (ctx.cr6.eq) goto loc_82225994;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82225994
	if (ctx.cr6.eq) goto loc_82225994;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,32624
	ctx.r4.s64 = ctx.r11.s64 + 32624;
	// lwz r11,60(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82225948;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// addi r4,r11,32628
	ctx.r4.s64 = ctx.r11.s64 + 32628;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222596C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// addi r4,r11,32632
	ctx.r4.s64 = ctx.r11.s64 + 32632;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82225990;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
loc_82225994:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822259a4
	if (ctx.cr6.eq) goto loc_822259A4;
	// bl 0x821601b8
	ctx.lr = 0x822259A4;
	sub_821601B8(ctx, base);
loc_822259A4:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822259b4
	if (ctx.cr6.eq) goto loc_822259B4;
	// bl 0x821601b8
	ctx.lr = 0x822259B4;
	sub_821601B8(ctx, base);
loc_822259B4:
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

__attribute__((alias("__imp__sub_822259C8"))) PPC_WEAK_FUNC(sub_822259C8);
PPC_FUNC_IMPL(__imp__sub_822259C8) {
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
	// bl 0x82224de8
	ctx.lr = 0x822259E8;
	sub_82224DE8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82225a00
	if (ctx.cr6.eq) goto loc_82225A00;
	// bl 0x82186190
	ctx.lr = 0x822259FC;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82225A00:
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

__attribute__((alias("__imp__sub_82225A18"))) PPC_WEAK_FUNC(sub_82225A18);
PPC_FUNC_IMPL(__imp__sub_82225A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82225A20;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82225A44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r10,3
	ctx.r10.s64 = 3;
	// beq cr6,0x82225b3c
	if (ctx.cr6.eq) goto loc_82225B3C;
	// stb r11,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r11.u8);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r28,r29,4
	ctx.r28.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82225a90
	if (ctx.cr6.lt) goto loc_82225A90;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x82225a94
	goto loc_82225A94;
loc_82225A90:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82225A94:
	// addi r11,r27,8
	ctx.r11.s64 = ctx.r27.s64 + 8;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82225aac
	if (ctx.cr6.lt) goto loc_82225AAC;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82225ab0
	goto loc_82225AB0;
loc_82225AAC:
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_82225AB0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825fe210
	ctx.lr = 0x82225AB8;
	sub_825FE210(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// bl 0x825fe1a0
	ctx.lr = 0x82225AC8;
	sub_825FE1A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82225ad8
	if (ctx.cr6.eq) goto loc_82225AD8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82225adc
	goto loc_82225ADC;
loc_82225AD8:
	// li r11,3
	ctx.r11.s64 = 3;
loc_82225ADC:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// blt cr6,0x82225afc
	if (ctx.cr6.lt) goto loc_82225AFC;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x82225b00
	goto loc_82225B00;
loc_82225AFC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82225B00:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,36(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// bl 0x82225810
	ctx.lr = 0x82225B0C;
	sub_82225810(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82225B1C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82225b1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82225B1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_82225B3C:
	// stfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82225B68"))) PPC_WEAK_FUNC(sub_82225B68);
PPC_FUNC_IMPL(__imp__sub_82225B68) {
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
	// addi r11,r11,-16128
	ctx.r11.s64 = ctx.r11.s64 + -16128;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82225b98
	if (ctx.cr6.eq) goto loc_82225B98;
	// bl 0x821601b8
	ctx.lr = 0x82225B98;
	sub_821601B8(ctx, base);
loc_82225B98:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82225bb0
	if (ctx.cr6.lt) goto loc_82225BB0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82225BB0;
	sub_82186190(ctx, base);
loc_82225BB0:
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

__attribute__((alias("__imp__sub_82225BD8"))) PPC_WEAK_FUNC(sub_82225BD8);
PPC_FUNC_IMPL(__imp__sub_82225BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82225BE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r5,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r5.u64);
	// li r3,96
	ctx.r3.s64 = 96;
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// std r7,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r7.u64);
	// std r8,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r8.u64);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// bl 0x82186158
	ctx.lr = 0x82225C08;
	sub_82186158(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82225c24
	if (ctx.cr6.eq) goto loc_82225C24;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x82224bc0
	ctx.lr = 0x82225C1C;
	sub_82224BC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82225c28
	goto loc_82225C28;
loc_82225C24:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82225C28:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82225748
	ctx.lr = 0x82225C40;
	sub_82225748(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82225cd0
	if (ctx.cr6.eq) goto loc_82225CD0;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82225cd0
	if (ctx.cr6.eq) goto loc_82225CD0;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82225C70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82225cd0
	if (ctx.cr6.eq) goto loc_82225CD0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825fe028
	ctx.lr = 0x82225C88;
	sub_825FE028(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82225148
	ctx.lr = 0x82225C94;
	sub_82225148(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82225ca4
	if (ctx.cr6.eq) goto loc_82225CA4;
	// bl 0x82631328
	ctx.lr = 0x82225CA4;
	sub_82631328(ctx, base);
loc_82225CA4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x822251d8
	ctx.lr = 0x82225CB0;
	sub_822251D8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// beq cr6,0x82225ce8
	if (ctx.cr6.eq) goto loc_82225CE8;
	// bl 0x82160140
	ctx.lr = 0x82225CCC;
	sub_82160140(ctx, base);
	// b 0x82225cd8
	goto loc_82225CD8;
loc_82225CD0:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
loc_82225CD8:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82225ce8
	if (ctx.cr6.eq) goto loc_82225CE8;
	// bl 0x821601b8
	ctx.lr = 0x82225CE8;
	sub_821601B8(ctx, base);
loc_82225CE8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82225CF8"))) PPC_WEAK_FUNC(sub_82225CF8);
PPC_FUNC_IMPL(__imp__sub_82225CF8) {
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
	// bl 0x82225b68
	ctx.lr = 0x82225D18;
	sub_82225B68(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82225d30
	if (ctx.cr6.eq) goto loc_82225D30;
	// bl 0x82186190
	ctx.lr = 0x82225D2C;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82225D30:
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

__attribute__((alias("__imp__sub_82225D48"))) PPC_WEAK_FUNC(sub_82225D48);
PPC_FUNC_IMPL(__imp__sub_82225D48) {
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
	// addi r11,r11,-16128
	ctx.r11.s64 = ctx.r11.s64 + -16128;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// bl 0x82161d10
	ctx.lr = 0x82225DA0;
	sub_82161D10(ctx, base);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// beq cr6,0x82225dc0
	if (ctx.cr6.eq) goto loc_82225DC0;
	// bl 0x82160140
	ctx.lr = 0x82225DC0;
	sub_82160140(ctx, base);
loc_82225DC0:
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

__attribute__((alias("__imp__sub_82225DE0"))) PPC_WEAK_FUNC(sub_82225DE0);
PPC_FUNC_IMPL(__imp__sub_82225DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82225DE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-16216
	ctx.r11.s64 = ctx.r11.s64 + -16216;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r10,13692
	ctx.r4.s64 = ctx.r10.s64 + 13692;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// bl 0x82161e08
	ctx.lr = 0x82225E28;
	sub_82161E08(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82164140
	ctx.lr = 0x82225E38;
	sub_82164140(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,-16124
	ctx.r5.s64 = ctx.r11.s64 + -16124;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82164090
	ctx.lr = 0x82225E4C;
	sub_82164090(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82163620
	ctx.lr = 0x82225E58;
	sub_82163620(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82225e6c
	if (ctx.cr6.lt) goto loc_82225E6C;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82186190
	ctx.lr = 0x82225E6C;
	sub_82186190(ctx, base);
loc_82225E6C:
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r30,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r30.u8);
	// blt cr6,0x82225e8c
	if (ctx.cr6.lt) goto loc_82225E8C;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82186190
	ctx.lr = 0x82225E8C;
	sub_82186190(ctx, base);
loc_82225E8C:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r28,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r28.u32);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r30,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r30.u8);
	// blt cr6,0x82225eac
	if (ctx.cr6.lt) goto loc_82225EAC;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x82225EAC;
	sub_82186190(ctx, base);
loc_82225EAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82225EB8"))) PPC_WEAK_FUNC(sub_82225EB8);
PPC_FUNC_IMPL(__imp__sub_82225EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82225EC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-16128
	ctx.r11.s64 = ctx.r11.s64 + -16128;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// stb r29,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r29.u8);
	// bl 0x82161d10
	ctx.lr = 0x82225F04;
	sub_82161D10(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82186158
	ctx.lr = 0x82225F0C;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82225f24
	if (ctx.cr6.eq) goto loc_82225F24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82225de0
	ctx.lr = 0x82225F1C;
	sub_82225DE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82225f28
	goto loc_82225F28;
loc_82225F24:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82225F28:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// bl 0x82225680
	ctx.lr = 0x82225F44;
	sub_82225680(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82225F50"))) PPC_WEAK_FUNC(sub_82225F50);
PPC_FUNC_IMPL(__imp__sub_82225F50) {
	PPC_FUNC_PROLOGUE();
	// b 0x821e0968
	sub_821E0968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82225F58"))) PPC_WEAK_FUNC(sub_82225F58);
PPC_FUNC_IMPL(__imp__sub_82225F58) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82228a18
	ctx.lr = 0x82225F78;
	sub_82228A18(ctx, base);
	// cmpwi cr6,r30,70
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 70, ctx.xer);
	// beq cr6,0x82225fc4
	if (ctx.cr6.eq) goto loc_82225FC4;
	// cmpwi cr6,r30,79
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 79, ctx.xer);
	// bne cr6,0x82226008
	if (!ctx.cr6.eq) goto loc_82226008;
	// addi r11,r31,1212
	ctx.r11.s64 = ctx.r31.s64 + 1212;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82225FB0;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1164
	ctx.r3.s64 = ctx.r31.s64 + 1164;
	// bl 0x8221f3c8
	ctx.lr = 0x82225FBC;
	sub_8221F3C8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82225ffc
	goto loc_82225FFC;
loc_82225FC4:
	// addi r11,r31,1184
	ctx.r11.s64 = ctx.r31.s64 + 1184;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82225FEC;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1164
	ctx.r3.s64 = ctx.r31.s64 + 1164;
	// bl 0x8221f3c8
	ctx.lr = 0x82225FF8;
	sub_8221F3C8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82225FFC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82226008
	if (ctx.cr6.eq) goto loc_82226008;
	// bl 0x821601b8
	ctx.lr = 0x82226008;
	sub_821601B8(ctx, base);
loc_82226008:
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

__attribute__((alias("__imp__sub_82226020"))) PPC_WEAK_FUNC(sub_82226020);
PPC_FUNC_IMPL(__imp__sub_82226020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x82226028;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82228f28
	ctx.lr = 0x82226034;
	sub_82228F28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r27,r28,44
	ctx.r27.s64 = ctx.r28.s64 + 44;
	// addi r11,r11,-16012
	ctx.r11.s64 = ctx.r11.s64 + -16012;
	// addi r10,r10,-16092
	ctx.r10.s64 = ctx.r10.s64 + -16092;
	// addi r9,r9,-16104
	ctx.r9.s64 = ctx.r9.s64 + -16104;
	// addi r31,r28,1216
	ctx.r31.s64 = ctx.r28.s64 + 1216;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r10,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r10.u32);
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
loc_82226068:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82224b88
	ctx.lr = 0x82226070;
	sub_82224B88(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82226068
	if (!ctx.cr6.lt) goto loc_82226068;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// li r26,15
	ctx.r26.s64 = 15;
	// addi r25,r11,14824
	ctx.r25.s64 = ctx.r11.s64 + 14824;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82226094:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stb r29,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r29.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822260AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822260ac
	if (!ctx.cr6.eq) goto loc_822260AC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x822260D0;
	sub_82161E08(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82225a18
	ctx.lr = 0x822260E0;
	sub_82225A18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822260F0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822260f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822260F0;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82226118
	if (ctx.cr6.lt) goto loc_82226118;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x82226118;
	sub_82186190(ctx, base);
loc_82226118:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// addi r11,r25,8
	ctx.r11.s64 = ctx.r25.s64 + 8;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stb r29,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r29.u8);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82226094
	if (!ctx.cr6.eq) goto loc_82226094;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82226148"))) PPC_WEAK_FUNC(sub_82226148);
PPC_FUNC_IMPL(__imp__sub_82226148) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82226158
	sub_82226158(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82226150"))) PPC_WEAK_FUNC(sub_82226150);
PPC_FUNC_IMPL(__imp__sub_82226150) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-44
	ctx.r3.s64 = ctx.r3.s64 + -44;
	// b 0x82226158
	sub_82226158(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82226158"))) PPC_WEAK_FUNC(sub_82226158);
PPC_FUNC_IMPL(__imp__sub_82226158) {
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
	// bl 0x82223530
	ctx.lr = 0x82226178;
	sub_82223530(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82226190
	if (ctx.cr6.eq) goto loc_82226190;
	// bl 0x82186190
	ctx.lr = 0x8222618C;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82226190:
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

__attribute__((alias("__imp__sub_822261A8"))) PPC_WEAK_FUNC(sub_822261A8);
PPC_FUNC_IMPL(__imp__sub_822261A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x822261B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82228a18
	ctx.lr = 0x822261C0;
	sub_82228A18(ctx, base);
	// addi r30,r31,1328
	ctx.r30.s64 = ctx.r31.s64 + 1328;
	// li r29,3
	ctx.r29.s64 = 3;
	// li r28,0
	ctx.r28.s64 = 0;
loc_822261CC:
	// stw r28,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r28.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822261e0
	if (ctx.cr6.eq) goto loc_822261E0;
	// bl 0x821601b8
	ctx.lr = 0x822261E0;
	sub_821601B8(ctx, base);
loc_822261E0:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x822261cc
	if (!ctx.cr6.eq) goto loc_822261CC;
	// cmpwi cr6,r27,69
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 69, ctx.xer);
	// beq cr6,0x82226368
	if (ctx.cr6.eq) goto loc_82226368;
	// cmpwi cr6,r27,179
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 179, ctx.xer);
	// beq cr6,0x82226360
	if (ctx.cr6.eq) goto loc_82226360;
	// cmpwi cr6,r27,180
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 180, ctx.xer);
	// bne cr6,0x8222638c
	if (!ctx.cr6.eq) goto loc_8222638C;
	// addi r11,r31,1212
	ctx.r11.s64 = ctx.r31.s64 + 1212;
	// addi r28,r31,1160
	ctx.r28.s64 = ctx.r31.s64 + 1160;
	// addi r27,r31,12
	ctx.r27.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x8222623C;
	sub_82225BD8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r31,1324
	ctx.r30.s64 = ctx.r31.s64 + 1324;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8222625c
	if (ctx.cr6.eq) goto loc_8222625C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82160140
	ctx.lr = 0x8222625C;
	sub_82160140(ctx, base);
loc_8222625C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222626c
	if (ctx.cr6.eq) goto loc_8222626C;
	// bl 0x821601b8
	ctx.lr = 0x8222626C;
	sub_821601B8(ctx, base);
loc_8222626C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82226280
	if (ctx.cr6.eq) goto loc_82226280;
	// bl 0x821601b8
	ctx.lr = 0x82226280;
	sub_821601B8(ctx, base);
loc_82226280:
	// addi r11,r31,1240
	ctx.r11.s64 = ctx.r31.s64 + 1240;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x822262A8;
	sub_82225BD8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r31,1332
	ctx.r30.s64 = ctx.r31.s64 + 1332;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822262c8
	if (ctx.cr6.eq) goto loc_822262C8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82160140
	ctx.lr = 0x822262C8;
	sub_82160140(ctx, base);
loc_822262C8:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822262d8
	if (ctx.cr6.eq) goto loc_822262D8;
	// bl 0x821601b8
	ctx.lr = 0x822262D8;
	sub_821601B8(ctx, base);
loc_822262D8:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822262ec
	if (ctx.cr6.eq) goto loc_822262EC;
	// bl 0x821601b8
	ctx.lr = 0x822262EC;
	sub_821601B8(ctx, base);
loc_822262EC:
	// addi r11,r31,1268
	ctx.r11.s64 = ctx.r31.s64 + 1268;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82226314;
	sub_82225BD8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r31,1340
	ctx.r31.s64 = ctx.r31.s64 + 1340;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82226334
	if (ctx.cr6.eq) goto loc_82226334;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82160140
	ctx.lr = 0x82226334;
	sub_82160140(ctx, base);
loc_82226334:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82226344
	if (ctx.cr6.eq) goto loc_82226344;
	// bl 0x821601b8
	ctx.lr = 0x82226344;
	sub_821601B8(ctx, base);
loc_82226344:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222638c
	if (ctx.cr6.eq) goto loc_8222638C;
	// bl 0x821601b8
	ctx.lr = 0x82226358;
	sub_821601B8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_82226360:
	// addi r11,r31,1184
	ctx.r11.s64 = ctx.r31.s64 + 1184;
	// b 0x8222636c
	goto loc_8222636C;
loc_82226368:
	// addi r11,r31,1296
	ctx.r11.s64 = ctx.r31.s64 + 1296;
loc_8222636C:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r8,r31,1160
	ctx.r8.s64 = ctx.r31.s64 + 1160;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82225340
	ctx.lr = 0x8222638C;
	sub_82225340(ctx, base);
loc_8222638C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82226398"))) PPC_WEAK_FUNC(sub_82226398);
PPC_FUNC_IMPL(__imp__sub_82226398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x822263A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82228f28
	ctx.lr = 0x822263AC;
	sub_82228F28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r27,r28,44
	ctx.r27.s64 = ctx.r28.s64 + 44;
	// addi r11,r11,-15916
	ctx.r11.s64 = ctx.r11.s64 + -15916;
	// addi r10,r10,-15996
	ctx.r10.s64 = ctx.r10.s64 + -15996;
	// addi r9,r9,-16004
	ctx.r9.s64 = ctx.r9.s64 + -16004;
	// addi r29,r28,1216
	ctx.r29.s64 = ctx.r28.s64 + 1216;
	// li r31,4
	ctx.r31.s64 = 4;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r10,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r10.u32);
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
loc_822263E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82224b88
	ctx.lr = 0x822263E8;
	sub_82224B88(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x822263e0
	if (!ctx.cr6.lt) goto loc_822263E0;
	// addi r11,r28,1356
	ctx.r11.s64 = ctx.r28.s64 + 1356;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82226404:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x82226404
	if (!ctx.cr6.lt) goto loc_82226404;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// addi r25,r11,14880
	ctx.r25.s64 = ctx.r11.s64 + 14880;
	// li r26,15
	ctx.r26.s64 = 15;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_82226430:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82226448:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82226448
	if (!ctx.cr6.eq) goto loc_82226448;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x8222646C;
	sub_82161E08(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82225a18
	ctx.lr = 0x8222647C;
	sub_82225A18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8222648C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8222648c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222648C;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822264b4
	if (ctx.cr6.lt) goto loc_822264B4;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x822264B4;
	sub_82186190(ctx, base);
loc_822264B4:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// addi r11,r25,20
	ctx.r11.s64 = ctx.r25.s64 + 20;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82226430
	if (!ctx.cr6.eq) goto loc_82226430;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822264E0"))) PPC_WEAK_FUNC(sub_822264E0);
PPC_FUNC_IMPL(__imp__sub_822264E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82226590
	sub_82226590(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822264E8"))) PPC_WEAK_FUNC(sub_822264E8);
PPC_FUNC_IMPL(__imp__sub_822264E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-44
	ctx.r3.s64 = ctx.r3.s64 + -44;
	// b 0x82226590
	sub_82226590(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822264F0"))) PPC_WEAK_FUNC(sub_822264F0);
PPC_FUNC_IMPL(__imp__sub_822264F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x822264F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,2
	ctx.r29.s64 = 2;
	// addi r11,r28,1380
	ctx.r11.s64 = ctx.r28.s64 + 1380;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
loc_8222650C:
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82226574
	if (ctx.cr6.eq) goto loc_82226574;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq 0x8222653c
	if (ctx.cr0.eq) goto loc_8222653C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82226574
	goto loc_82226574;
loc_8222653C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82226550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne 0x82226574
	if (!ctx.cr0.eq) goto loc_82226574;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82226574;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82226574:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x8222650c
	if (!ctx.cr6.lt) goto loc_8222650C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82223530
	ctx.lr = 0x82226588;
	sub_82223530(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82226590"))) PPC_WEAK_FUNC(sub_82226590);
PPC_FUNC_IMPL(__imp__sub_82226590) {
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
	// bl 0x822264f0
	ctx.lr = 0x822265B0;
	sub_822264F0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822265c8
	if (ctx.cr6.eq) goto loc_822265C8;
	// bl 0x82186190
	ctx.lr = 0x822265C4;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822265C8:
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

__attribute__((alias("__imp__sub_822265E0"))) PPC_WEAK_FUNC(sub_822265E0);
PPC_FUNC_IMPL(__imp__sub_822265E0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r3,1524
	ctx.r11.s64 = ctx.r3.s64 + 1524;
	// addi r8,r3,1160
	ctx.r8.s64 = ctx.r3.s64 + 1160;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// b 0x82225340
	sub_82225340(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82226610"))) PPC_WEAK_FUNC(sub_82226610);
PPC_FUNC_IMPL(__imp__sub_82226610) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82226618"))) PPC_WEAK_FUNC(sub_82226618);
PPC_FUNC_IMPL(__imp__sub_82226618) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,14096(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14096);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x8222668c
	if (!ctx.cr6.eq) goto loc_8222668C;
	// lwz r11,1792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222668c
	if (!ctx.cr6.eq) goto loc_8222668C;
	// addi r11,r31,1188
	ctx.r11.s64 = ctx.r31.s64 + 1188;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82226670;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1776
	ctx.r3.s64 = ctx.r31.s64 + 1776;
	// bl 0x8221f3c8
	ctx.lr = 0x8222667C;
	sub_8221F3C8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222668c
	if (ctx.cr6.eq) goto loc_8222668C;
	// bl 0x821601b8
	ctx.lr = 0x8222668C;
	sub_821601B8(ctx, base);
loc_8222668C:
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

__attribute__((alias("__imp__sub_822266A0"))) PPC_WEAK_FUNC(sub_822266A0);
PPC_FUNC_IMPL(__imp__sub_822266A0) {
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
	// bl 0x822291e8
	ctx.lr = 0x822266C0;
	sub_822291E8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r30,1812
	ctx.r11.s64 = ctx.r30.s64 + 1812;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x821600c0
	ctx.lr = 0x822266D8;
	sub_821600C0(ctx, base);
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

__attribute__((alias("__imp__sub_822266F0"))) PPC_WEAK_FUNC(sub_822266F0);
PPC_FUNC_IMPL(__imp__sub_822266F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x822266F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82228a18
	ctx.lr = 0x82226708;
	sub_82228A18(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r26,153
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 153, ctx.xer);
	// beq cr6,0x82226748
	if (ctx.cr6.eq) goto loc_82226748;
	// cmpwi cr6,r26,158
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 158, ctx.xer);
	// beq cr6,0x82226748
	if (ctx.cr6.eq) goto loc_82226748;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r31,1796
	ctx.r3.s64 = ctx.r31.s64 + 1796;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x8221f3c8
	ctx.lr = 0x82226730;
	sub_8221F3C8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,1804
	ctx.r3.s64 = ctx.r31.s64 + 1804;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x8221f3c8
	ctx.lr = 0x82226744;
	sub_8221F3C8(ctx, base);
	// b 0x82226814
	goto loc_82226814;
loc_82226748:
	// lwz r11,1792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1792);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x822267b0
	if (ctx.cr6.lt) goto loc_822267B0;
	// addi r30,r31,1796
	ctx.r30.s64 = ctx.r31.s64 + 1796;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82226774
	if (ctx.cr6.eq) goto loc_82226774;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82226814
	if (!ctx.cr6.eq) goto loc_82226814;
loc_82226774:
	// addi r11,r31,1328
	ctx.r11.s64 = ctx.r31.s64 + 1328;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x8222679C;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221f3c8
	ctx.lr = 0x822267A8;
	sub_8221F3C8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x82226808
	goto loc_82226808;
loc_822267B0:
	// addi r30,r31,1804
	ctx.r30.s64 = ctx.r31.s64 + 1804;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822267d0
	if (ctx.cr6.eq) goto loc_822267D0;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82226814
	if (!ctx.cr6.eq) goto loc_82226814;
loc_822267D0:
	// addi r11,r31,1300
	ctx.r11.s64 = ctx.r31.s64 + 1300;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x822267F8;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221f3c8
	ctx.lr = 0x82226804;
	sub_8221F3C8(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_82226808:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82226814
	if (ctx.cr6.eq) goto loc_82226814;
	// bl 0x821601b8
	ctx.lr = 0x82226814;
	sub_821601B8(ctx, base);
loc_82226814:
	// addi r27,r31,1820
	ctx.r27.s64 = ctx.r31.s64 + 1820;
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222682c
	if (ctx.cr6.eq) goto loc_8222682C;
	// bl 0x821601b8
	ctx.lr = 0x8222682C;
	sub_821601B8(ctx, base);
loc_8222682C:
	// addi r28,r31,1828
	ctx.r28.s64 = ctx.r31.s64 + 1828;
	// stw r29,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r29.u32);
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82226848
	if (ctx.cr6.eq) goto loc_82226848;
	// bl 0x821601b8
	ctx.lr = 0x82226848;
	sub_821601B8(ctx, base);
loc_82226848:
	// addi r11,r26,-5
	ctx.r11.s64 = ctx.r26.s64 + -5;
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// cmplwi cr6,r11,163
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 163, ctx.xer);
	// bgt cr6,0x82226df0
	if (ctx.cr6.gt) goto loc_82226DF0;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// addi r12,r12,26736
	ctx.r12.s64 = ctx.r12.s64 + 26736;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82226B00;
	case 1:
		goto loc_82226B4C;
	case 2:
		goto loc_82226DF0;
	case 3:
		goto loc_82226DF0;
	case 4:
		goto loc_82226DF0;
	case 5:
		goto loc_82226DF0;
	case 6:
		goto loc_82226DF0;
	case 7:
		goto loc_82226DF0;
	case 8:
		goto loc_82226DF0;
	case 9:
		goto loc_82226DF0;
	case 10:
		goto loc_82226DF0;
	case 11:
		goto loc_82226DF0;
	case 12:
		goto loc_82226DF0;
	case 13:
		goto loc_82226DF0;
	case 14:
		goto loc_82226DF0;
	case 15:
		goto loc_82226DF0;
	case 16:
		goto loc_82226DF0;
	case 17:
		goto loc_82226DF0;
	case 18:
		goto loc_82226DF0;
	case 19:
		goto loc_82226DF0;
	case 20:
		goto loc_82226DF0;
	case 21:
		goto loc_82226DF0;
	case 22:
		goto loc_82226DF0;
	case 23:
		goto loc_82226DF0;
	case 24:
		goto loc_82226DF0;
	case 25:
		goto loc_82226DF0;
	case 26:
		goto loc_82226DF0;
	case 27:
		goto loc_82226DF0;
	case 28:
		goto loc_82226DF0;
	case 29:
		goto loc_82226DF0;
	case 30:
		goto loc_82226DF0;
	case 31:
		goto loc_82226DF0;
	case 32:
		goto loc_82226DF0;
	case 33:
		goto loc_82226DF0;
	case 34:
		goto loc_82226DF0;
	case 35:
		goto loc_82226DF0;
	case 36:
		goto loc_82226DF0;
	case 37:
		goto loc_82226DF0;
	case 38:
		goto loc_82226DF0;
	case 39:
		goto loc_82226DF0;
	case 40:
		goto loc_82226DF0;
	case 41:
		goto loc_82226DF0;
	case 42:
		goto loc_82226DF0;
	case 43:
		goto loc_82226DF0;
	case 44:
		goto loc_82226DF0;
	case 45:
		goto loc_82226DF0;
	case 46:
		goto loc_82226DF0;
	case 47:
		goto loc_82226DF0;
	case 48:
		goto loc_82226DF0;
	case 49:
		goto loc_82226DF0;
	case 50:
		goto loc_82226DF0;
	case 51:
		goto loc_82226DF0;
	case 52:
		goto loc_82226DF0;
	case 53:
		goto loc_82226DF0;
	case 54:
		goto loc_82226DF0;
	case 55:
		goto loc_82226DF0;
	case 56:
		goto loc_82226DF0;
	case 57:
		goto loc_82226DF0;
	case 58:
		goto loc_82226DF0;
	case 59:
		goto loc_82226DF0;
	case 60:
		goto loc_82226DF0;
	case 61:
		goto loc_82226DF0;
	case 62:
		goto loc_82226DF0;
	case 63:
		goto loc_82226DF0;
	case 64:
		goto loc_82226DF0;
	case 65:
		goto loc_82226D2C;
	case 66:
		goto loc_82226DF0;
	case 67:
		goto loc_82226DF0;
	case 68:
		goto loc_82226DF0;
	case 69:
		goto loc_82226DF0;
	case 70:
		goto loc_82226DF0;
	case 71:
		goto loc_82226DF0;
	case 72:
		goto loc_82226DF0;
	case 73:
		goto loc_82226DF0;
	case 74:
		goto loc_82226DF0;
	case 75:
		goto loc_82226DF0;
	case 76:
		goto loc_82226DF0;
	case 77:
		goto loc_82226DF0;
	case 78:
		goto loc_82226DF0;
	case 79:
		goto loc_82226DF0;
	case 80:
		goto loc_82226DF0;
	case 81:
		goto loc_82226DF0;
	case 82:
		goto loc_82226DF0;
	case 83:
		goto loc_82226DF0;
	case 84:
		goto loc_82226DF0;
	case 85:
		goto loc_82226DF0;
	case 86:
		goto loc_82226DF0;
	case 87:
		goto loc_82226DF0;
	case 88:
		goto loc_82226DF0;
	case 89:
		goto loc_82226DF0;
	case 90:
		goto loc_82226DF0;
	case 91:
		goto loc_82226DF0;
	case 92:
		goto loc_82226DF0;
	case 93:
		goto loc_82226DF0;
	case 94:
		goto loc_82226DF0;
	case 95:
		goto loc_82226DCC;
	case 96:
		goto loc_82226DF0;
	case 97:
		goto loc_82226DF0;
	case 98:
		goto loc_82226DF0;
	case 99:
		goto loc_82226DF0;
	case 100:
		goto loc_82226DF0;
	case 101:
		goto loc_82226DF0;
	case 102:
		goto loc_82226DF0;
	case 103:
		goto loc_82226DF0;
	case 104:
		goto loc_82226DF0;
	case 105:
		goto loc_82226DF0;
	case 106:
		goto loc_82226DF0;
	case 107:
		goto loc_82226DF0;
	case 108:
		goto loc_82226DF0;
	case 109:
		goto loc_82226DF0;
	case 110:
		goto loc_82226DF0;
	case 111:
		goto loc_82226DF0;
	case 112:
		goto loc_82226DF0;
	case 113:
		goto loc_82226DF0;
	case 114:
		goto loc_82226DF0;
	case 115:
		goto loc_82226DF0;
	case 116:
		goto loc_82226DF0;
	case 117:
		goto loc_82226DF0;
	case 118:
		goto loc_82226DF0;
	case 119:
		goto loc_82226DF0;
	case 120:
		goto loc_82226DF0;
	case 121:
		goto loc_82226DF0;
	case 122:
		goto loc_82226DF0;
	case 123:
		goto loc_82226DF0;
	case 124:
		goto loc_82226DF0;
	case 125:
		goto loc_82226DF0;
	case 126:
		goto loc_82226DF0;
	case 127:
		goto loc_82226DF0;
	case 128:
		goto loc_82226DF0;
	case 129:
		goto loc_82226DF0;
	case 130:
		goto loc_82226DF0;
	case 131:
		goto loc_82226DF0;
	case 132:
		goto loc_82226DF0;
	case 133:
		goto loc_82226DF0;
	case 134:
		goto loc_82226DF0;
	case 135:
		goto loc_82226DF0;
	case 136:
		goto loc_82226DF0;
	case 137:
		goto loc_82226DF0;
	case 138:
		goto loc_82226DF0;
	case 139:
		goto loc_82226DF0;
	case 140:
		goto loc_82226DF0;
	case 141:
		goto loc_82226DF0;
	case 142:
		goto loc_82226DF0;
	case 143:
		goto loc_82226DF0;
	case 144:
		goto loc_82226DF0;
	case 145:
		goto loc_82226DF0;
	case 146:
		goto loc_82226DF0;
	case 147:
		goto loc_82226DF0;
	case 148:
		goto loc_82226DF0;
	case 149:
		goto loc_82226DF0;
	case 150:
		goto loc_82226DF0;
	case 151:
		goto loc_82226DF0;
	case 152:
		goto loc_82226DF0;
	case 153:
		goto loc_82226DF0;
	case 154:
		goto loc_82226DF0;
	case 155:
		goto loc_82226B98;
	case 156:
		goto loc_82226B98;
	case 157:
		goto loc_82226BE4;
	case 158:
		goto loc_82226C30;
	case 159:
		goto loc_82226C7C;
	case 160:
		goto loc_82226CC8;
	case 161:
		goto loc_82226D14;
	case 162:
		goto loc_82226D1C;
	case 163:
		goto loc_82226D24;
	default:
		__builtin_unreachable();
	}
	// lwz r17,27392(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 27392);
	// lwz r17,27468(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 27468);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,27948(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 27948);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28108(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28108);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,28144(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28144);
	// lwz r17,27544(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 27544);
	// lwz r17,27544(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 27544);
	// lwz r17,27620(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 27620);
	// lwz r17,27696(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 27696);
	// lwz r17,27772(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 27772);
	// lwz r17,27848(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 27848);
	// lwz r17,27924(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 27924);
	// lwz r17,27932(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 27932);
	// lwz r17,27940(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 27940);
loc_82226B00:
	// addi r11,r31,1552
	ctx.r11.s64 = ctx.r31.s64 + 1552;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82226B28;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1164
	ctx.r3.s64 = ctx.r31.s64 + 1164;
	// bl 0x8221f3c8
	ctx.lr = 0x82226B34;
	sub_8221F3C8(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82226df0
	if (ctx.cr6.eq) goto loc_82226DF0;
	// bl 0x821601b8
	ctx.lr = 0x82226B44;
	sub_821601B8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_82226B4C:
	// addi r11,r31,1552
	ctx.r11.s64 = ctx.r31.s64 + 1552;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82226B74;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1164
	ctx.r3.s64 = ctx.r31.s64 + 1164;
	// bl 0x8221f3c8
	ctx.lr = 0x82226B80;
	sub_8221F3C8(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82226df0
	if (ctx.cr6.eq) goto loc_82226DF0;
	// bl 0x821601b8
	ctx.lr = 0x82226B90;
	sub_821601B8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_82226B98:
	// addi r11,r31,1356
	ctx.r11.s64 = ctx.r31.s64 + 1356;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82226BC0;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1164
	ctx.r3.s64 = ctx.r31.s64 + 1164;
	// bl 0x8221f3c8
	ctx.lr = 0x82226BCC;
	sub_8221F3C8(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82226df0
	if (ctx.cr6.eq) goto loc_82226DF0;
	// bl 0x821601b8
	ctx.lr = 0x82226BDC;
	sub_821601B8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_82226BE4:
	// addi r11,r31,1384
	ctx.r11.s64 = ctx.r31.s64 + 1384;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82226C0C;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1164
	ctx.r3.s64 = ctx.r31.s64 + 1164;
	// bl 0x8221f3c8
	ctx.lr = 0x82226C18;
	sub_8221F3C8(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82226df0
	if (ctx.cr6.eq) goto loc_82226DF0;
	// bl 0x821601b8
	ctx.lr = 0x82226C28;
	sub_821601B8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_82226C30:
	// addi r11,r31,1412
	ctx.r11.s64 = ctx.r31.s64 + 1412;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82226C58;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1164
	ctx.r3.s64 = ctx.r31.s64 + 1164;
	// bl 0x8221f3c8
	ctx.lr = 0x82226C64;
	sub_8221F3C8(ctx, base);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82226df0
	if (ctx.cr6.eq) goto loc_82226DF0;
	// bl 0x821601b8
	ctx.lr = 0x82226C74;
	sub_821601B8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_82226C7C:
	// addi r11,r31,1440
	ctx.r11.s64 = ctx.r31.s64 + 1440;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82226CA4;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1164
	ctx.r3.s64 = ctx.r31.s64 + 1164;
	// bl 0x8221f3c8
	ctx.lr = 0x82226CB0;
	sub_8221F3C8(ctx, base);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82226df0
	if (ctx.cr6.eq) goto loc_82226DF0;
	// bl 0x821601b8
	ctx.lr = 0x82226CC0;
	sub_821601B8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_82226CC8:
	// addi r11,r31,1468
	ctx.r11.s64 = ctx.r31.s64 + 1468;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82226CF0;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1164
	ctx.r3.s64 = ctx.r31.s64 + 1164;
	// bl 0x8221f3c8
	ctx.lr = 0x82226CFC;
	sub_8221F3C8(ctx, base);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82226df0
	if (ctx.cr6.eq) goto loc_82226DF0;
	// bl 0x821601b8
	ctx.lr = 0x82226D0C;
	sub_821601B8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_82226D14:
	// addi r11,r31,1580
	ctx.r11.s64 = ctx.r31.s64 + 1580;
	// b 0x82226dd0
	goto loc_82226DD0;
loc_82226D1C:
	// addi r11,r31,1608
	ctx.r11.s64 = ctx.r31.s64 + 1608;
	// b 0x82226dd0
	goto loc_82226DD0;
loc_82226D24:
	// addi r11,r31,1636
	ctx.r11.s64 = ctx.r31.s64 + 1636;
	// b 0x82226dd0
	goto loc_82226DD0;
loc_82226D2C:
	// addi r11,r31,1664
	ctx.r11.s64 = ctx.r31.s64 + 1664;
	// addi r30,r31,1160
	ctx.r30.s64 = ctx.r31.s64 + 1160;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82226D5C;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8221f3c8
	ctx.lr = 0x82226D68;
	sub_8221F3C8(ctx, base);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82226d78
	if (ctx.cr6.eq) goto loc_82226D78;
	// bl 0x821601b8
	ctx.lr = 0x82226D78;
	sub_821601B8(ctx, base);
loc_82226D78:
	// addi r11,r31,1692
	ctx.r11.s64 = ctx.r31.s64 + 1692;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82226DA0;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8221f3c8
	ctx.lr = 0x82226DAC;
	sub_8221F3C8(ctx, base);
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82226dbc
	if (ctx.cr6.eq) goto loc_82226DBC;
	// bl 0x821601b8
	ctx.lr = 0x82226DBC;
	sub_821601B8(ctx, base);
loc_82226DBC:
	// addi r11,r31,1720
	ctx.r11.s64 = ctx.r31.s64 + 1720;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82226dd8
	goto loc_82226DD8;
loc_82226DCC:
	// addi r11,r31,1748
	ctx.r11.s64 = ctx.r31.s64 + 1748;
loc_82226DD0:
	// addi r8,r31,1160
	ctx.r8.s64 = ctx.r31.s64 + 1160;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
loc_82226DD8:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82225340
	ctx.lr = 0x82226DF0;
	sub_82225340(ctx, base);
loc_82226DF0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82226DF8"))) PPC_WEAK_FUNC(sub_82226DF8);
PPC_FUNC_IMPL(__imp__sub_82226DF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82226E00;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r31,1844
	ctx.r4.s64 = ctx.r31.s64 + 1844;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8219fbb8
	ctx.lr = 0x82226E18;
	sub_8219FBB8(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82226e58
	if (ctx.cr6.eq) goto loc_82226E58;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82226e58
	if (ctx.cr6.eq) goto loc_82226E58;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subfic r9,r30,0
	ctx.xer.ca = ctx.r30.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r30.s64;
	// lfs f1,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// subfe r11,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// addi r4,r11,5
	ctx.r4.s64 = ctx.r11.s64 + 5;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82226E58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82226E58:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// bgt cr6,0x82226f9c
	if (ctx.cr6.gt) goto loc_82226F9C;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// addi r12,r12,28284
	ctx.r12.s64 = ctx.r12.s64 + 28284;
	// rlwinm r0,r30,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r30.u64) {
	case 0:
		goto loc_82226E8C;
	case 1:
		goto loc_82226EA4;
	case 2:
		goto loc_82226EE8;
	case 3:
		goto loc_82226F2C;
	default:
		__builtin_unreachable();
	}
	// lwz r17,28300(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28300);
	// lwz r17,28324(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28324);
	// lwz r17,28392(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28392);
	// lwz r17,28460(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 28460);
loc_82226E8C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r31,1808
	ctx.r3.s64 = ctx.r31.s64 + 1808;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x8221f3c8
	ctx.lr = 0x82226EA0;
	sub_8221F3C8(ctx, base);
	// b 0x82226f9c
	goto loc_82226F9C;
loc_82226EA4:
	// addi r11,r31,1248
	ctx.r11.s64 = ctx.r31.s64 + 1248;
	// addi r30,r31,1192
	ctx.r30.s64 = ctx.r31.s64 + 1192;
	// addi r29,r31,44
	ctx.r29.s64 = ctx.r31.s64 + 44;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82226ED4;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1808
	ctx.r3.s64 = ctx.r31.s64 + 1808;
	// bl 0x8221f3c8
	ctx.lr = 0x82226EE0;
	sub_8221F3C8(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x82226f6c
	goto loc_82226F6C;
loc_82226EE8:
	// addi r11,r31,1276
	ctx.r11.s64 = ctx.r31.s64 + 1276;
	// addi r30,r31,1192
	ctx.r30.s64 = ctx.r31.s64 + 1192;
	// addi r29,r31,44
	ctx.r29.s64 = ctx.r31.s64 + 44;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82226F18;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1808
	ctx.r3.s64 = ctx.r31.s64 + 1808;
	// bl 0x8221f3c8
	ctx.lr = 0x82226F24;
	sub_8221F3C8(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x82226f6c
	goto loc_82226F6C;
loc_82226F2C:
	// addi r11,r31,1304
	ctx.r11.s64 = ctx.r31.s64 + 1304;
	// addi r30,r31,1192
	ctx.r30.s64 = ctx.r31.s64 + 1192;
	// addi r29,r31,44
	ctx.r29.s64 = ctx.r31.s64 + 44;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82226F5C;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1808
	ctx.r3.s64 = ctx.r31.s64 + 1808;
	// bl 0x8221f3c8
	ctx.lr = 0x82226F68;
	sub_8221F3C8(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_82226F6C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82226f78
	if (ctx.cr6.eq) goto loc_82226F78;
	// bl 0x821601b8
	ctx.lr = 0x82226F78;
	sub_821601B8(ctx, base);
loc_82226F78:
	// addi r11,r31,1528
	ctx.r11.s64 = ctx.r31.s64 + 1528;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82225340
	ctx.lr = 0x82226F9C;
	sub_82225340(ctx, base);
loc_82226F9C:
	// addi r30,r31,1828
	ctx.r30.s64 = ctx.r31.s64 + 1828;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82227020
	if (ctx.cr6.eq) goto loc_82227020;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82227020
	if (ctx.cr6.eq) goto loc_82227020;
	// lwz r11,1824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1824);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82227020
	if (!ctx.cr6.lt) goto loc_82227020;
	// addi r11,r31,1332
	ctx.r11.s64 = ctx.r31.s64 + 1332;
	// addi r9,r31,1192
	ctx.r9.s64 = ctx.r31.s64 + 1192;
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82226FF0;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1836
	ctx.r3.s64 = ctx.r31.s64 + 1836;
	// bl 0x8221f3c8
	ctx.lr = 0x82226FFC;
	sub_8221F3C8(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222700c
	if (ctx.cr6.eq) goto loc_8222700C;
	// bl 0x821601b8
	ctx.lr = 0x8222700C;
	sub_821601B8(ctx, base);
loc_8222700C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x8221f3c8
	ctx.lr = 0x82227020;
	sub_8221F3C8(ctx, base);
loc_82227020:
	// addi r3,r31,1836
	ctx.r3.s64 = ctx.r31.s64 + 1836;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822270a0
	if (ctx.cr6.eq) goto loc_822270A0;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822270a0
	if (ctx.cr6.eq) goto loc_822270A0;
	// lwz r11,1824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1824);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x822270a0
	if (ctx.cr6.lt) goto loc_822270A0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x8221f3c8
	ctx.lr = 0x8222705C;
	sub_8221F3C8(ctx, base);
	// addi r11,r31,1360
	ctx.r11.s64 = ctx.r31.s64 + 1360;
	// addi r9,r31,1192
	ctx.r9.s64 = ctx.r31.s64 + 1192;
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82227084;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221f3c8
	ctx.lr = 0x82227090;
	sub_8221F3C8(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822270a0
	if (ctx.cr6.eq) goto loc_822270A0;
	// bl 0x821601b8
	ctx.lr = 0x822270A0;
	sub_821601B8(ctx, base);
loc_822270A0:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822270b0
	if (ctx.cr6.eq) goto loc_822270B0;
	// bl 0x821601b8
	ctx.lr = 0x822270B0;
	sub_821601B8(ctx, base);
loc_822270B0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822270B8"))) PPC_WEAK_FUNC(sub_822270B8);
PPC_FUNC_IMPL(__imp__sub_822270B8) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82227174
	if (ctx.cr6.eq) goto loc_82227174;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82227174
	if (ctx.cr6.eq) goto loc_82227174;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82227100
	if (ctx.cr6.lt) goto loc_82227100;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82227104
	goto loc_82227104;
loc_82227100:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82227104:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82227174
	if (ctx.cr6.eq) goto loc_82227174;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,13988
	ctx.r10.s64 = ctx.r10.s64 + 13988;
loc_82227114:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82227138
	if (ctx.cr6.eq) goto loc_82227138;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82227114
	if (ctx.cr6.eq) goto loc_82227114;
loc_82227138:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82227174
	if (!ctx.cr6.eq) goto loc_82227174;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x821f4fa8
	ctx.lr = 0x82227158;
	sub_821F4FA8(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x8221f3c8
	ctx.lr = 0x82227164;
	sub_8221F3C8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82227174
	if (ctx.cr6.eq) goto loc_82227174;
	// bl 0x821601b8
	ctx.lr = 0x82227174;
	sub_821601B8(ctx, base);
loc_82227174:
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

__attribute__((alias("__imp__sub_82227188"))) PPC_WEAK_FUNC(sub_82227188);
PPC_FUNC_IMPL(__imp__sub_82227188) {
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
	// bl 0x82228728
	ctx.lr = 0x822271A0;
	sub_82228728(ctx, base);
	// lwz r3,1784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1784);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822271e8
	if (ctx.cr6.eq) goto loc_822271E8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822271e8
	if (ctx.cr6.eq) goto loc_822271E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822271CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1792);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822271e8
	if (ctx.cr6.eq) goto loc_822271E8;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// stw r4,1792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1792, ctx.r4.u32);
	// bl 0x82226df8
	ctx.lr = 0x822271E8;
	sub_82226DF8(ctx, base);
loc_822271E8:
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

__attribute__((alias("__imp__sub_82227200"))) PPC_WEAK_FUNC(sub_82227200);
PPC_FUNC_IMPL(__imp__sub_82227200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x82227208;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82228f28
	ctx.lr = 0x82227214;
	sub_82228F28(ctx, base);
	// addi r30,r31,1216
	ctx.r30.s64 = ctx.r31.s64 + 1216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221ed78
	ctx.lr = 0x82227220;
	sub_8221ED78(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r8,-15788
	ctx.r8.s64 = ctx.r8.s64 + -15788;
	// addi r27,r31,44
	ctx.r27.s64 = ctx.r31.s64 + 44;
	// addi r11,r11,-15796
	ctx.r11.s64 = ctx.r11.s64 + -15796;
	// addi r10,r10,-15876
	ctx.r10.s64 = ctx.r10.s64 + -15876;
	// addi r9,r9,-15884
	ctx.r9.s64 = ctx.r9.s64 + -15884;
	// addi r28,r31,1220
	ctx.r28.s64 = ctx.r31.s64 + 1220;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// li r29,20
	ctx.r29.s64 = 20;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
loc_82227260:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82224b88
	ctx.lr = 0x82227268;
	sub_82224B88(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82227260
	if (!ctx.cr6.lt) goto loc_82227260;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r31,1852
	ctx.r11.s64 = ctx.r31.s64 + 1852;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,1808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1808, ctx.r30.u32);
	// stw r30,1812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1812, ctx.r30.u32);
	// stw r30,1816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1816, ctx.r30.u32);
	// stw r30,1820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1820, ctx.r30.u32);
	// stw r9,1824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1824, ctx.r9.u32);
	// stw r30,1828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1828, ctx.r30.u32);
	// stw r30,1832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1832, ctx.r30.u32);
	// stw r30,1836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1836, ctx.r30.u32);
	// stw r30,1840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1840, ctx.r30.u32);
	// stw r30,1844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1844, ctx.r30.u32);
	// stw r30,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r30.u32);
loc_822272B4:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x822272b4
	if (!ctx.cr6.lt) goto loc_822272B4;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// li r26,15
	ctx.r26.s64 = 15;
	// addi r25,r11,14944
	ctx.r25.s64 = ctx.r11.s64 + 14944;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_822272DC:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822272F4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822272f4
	if (!ctx.cr6.eq) goto loc_822272F4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82227318;
	sub_82161E08(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82225a18
	ctx.lr = 0x82227328;
	sub_82225A18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82227338:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82227338
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82227338;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82227360
	if (ctx.cr6.lt) goto loc_82227360;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x82227360;
	sub_82186190(ctx, base);
loc_82227360:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// addi r11,r25,84
	ctx.r11.s64 = ctx.r25.s64 + 84;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// addi r28,r28,28
	ctx.r28.s64 = ctx.r28.s64 + 28;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822272dc
	if (!ctx.cr6.eq) goto loc_822272DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82227390"))) PPC_WEAK_FUNC(sub_82227390);
PPC_FUNC_IMPL(__imp__sub_82227390) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-44
	ctx.r3.s64 = ctx.r3.s64 + -44;
	// b 0x822274c8
	sub_822274C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82227398"))) PPC_WEAK_FUNC(sub_82227398);
PPC_FUNC_IMPL(__imp__sub_82227398) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x822274c8
	sub_822274C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822273A0"))) PPC_WEAK_FUNC(sub_822273A0);
PPC_FUNC_IMPL(__imp__sub_822273A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-1216
	ctx.r3.s64 = ctx.r3.s64 + -1216;
	// b 0x822274c8
	sub_822274C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822273A8"))) PPC_WEAK_FUNC(sub_822273A8);
PPC_FUNC_IMPL(__imp__sub_822273A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x822273B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r11,r29,1868
	ctx.r11.s64 = ctx.r29.s64 + 1868;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
loc_822273C4:
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8222742c
	if (ctx.cr6.eq) goto loc_8222742C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq 0x822273f4
	if (ctx.cr0.eq) goto loc_822273F4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8222742c
	goto loc_8222742C;
loc_822273F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82227408;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne 0x8222742c
	if (!ctx.cr0.eq) goto loc_8222742C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222742C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222742C:
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge cr6,0x822273c4
	if (!ctx.cr6.lt) goto loc_822273C4;
	// lwz r3,1848(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1848);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82227464
	if (ctx.cr6.eq) goto loc_82227464;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne 0x82227464
	if (!ctx.cr0.eq) goto loc_82227464;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82227464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82227464:
	// lwz r3,1840(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1840);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82227474
	if (ctx.cr6.eq) goto loc_82227474;
	// bl 0x821601b8
	ctx.lr = 0x82227474;
	sub_821601B8(ctx, base);
loc_82227474:
	// lwz r3,1832(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1832);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82227484
	if (ctx.cr6.eq) goto loc_82227484;
	// bl 0x821601b8
	ctx.lr = 0x82227484;
	sub_821601B8(ctx, base);
loc_82227484:
	// lwz r3,1820(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1820);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82227494
	if (ctx.cr6.eq) goto loc_82227494;
	// bl 0x821601b8
	ctx.lr = 0x82227494;
	sub_821601B8(ctx, base);
loc_82227494:
	// lwz r3,1812(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1812);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822274a4
	if (ctx.cr6.eq) goto loc_822274A4;
	// bl 0x821601b8
	ctx.lr = 0x822274A4;
	sub_821601B8(ctx, base);
loc_822274A4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r3,r29,1216
	ctx.r3.s64 = ctx.r29.s64 + 1216;
	// bne cr6,0x822274b4
	if (!ctx.cr6.eq) goto loc_822274B4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822274B4:
	// bl 0x8221ed78
	ctx.lr = 0x822274B8;
	sub_8221ED78(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82223530
	ctx.lr = 0x822274C0;
	sub_82223530(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822274C8"))) PPC_WEAK_FUNC(sub_822274C8);
PPC_FUNC_IMPL(__imp__sub_822274C8) {
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
	// bl 0x822273a8
	ctx.lr = 0x822274E8;
	sub_822273A8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82227500
	if (ctx.cr6.eq) goto loc_82227500;
	// bl 0x82186190
	ctx.lr = 0x822274FC;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82227500:
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

__attribute__((alias("__imp__sub_82227518"))) PPC_WEAK_FUNC(sub_82227518);
PPC_FUNC_IMPL(__imp__sub_82227518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82227538
	if (ctx.cr6.eq) goto loc_82227538;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,-15532(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15532);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stb r10,164(r3)
	PPC_STORE_U8(ctx.r3.u32 + 164, ctx.r10.u8);
loc_82227538:
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,164(r3)
	PPC_STORE_U8(ctx.r3.u32 + 164, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227550"))) PPC_WEAK_FUNC(sub_82227550);
PPC_FUNC_IMPL(__imp__sub_82227550) {
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
	// lfs f13,192(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
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
	// blt cr6,0x82227584
	if (ctx.cr6.lt) goto loc_82227584;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_82227584:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f13,192(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8222759c
	if (ctx.cr6.gt) goto loc_8222759C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8222759C:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r9,r9,36869
	ctx.r9.u64 = ctx.r9.u64 | 36869;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lbz r9,196(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 196);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822275D8;
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

__attribute__((alias("__imp__sub_822275E8"))) PPC_WEAK_FUNC(sub_822275E8);
PPC_FUNC_IMPL(__imp__sub_822275E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x822275F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,92(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8222766c
	if (ctx.cr6.eq) goto loc_8222766C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222766c
	if (ctx.cr6.eq) goto loc_8222766C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82227628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r5,r11,-4576
	ctx.r5.s64 = ctx.r11.s64 + -4576;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82166e50
	ctx.lr = 0x8222763C;
	sub_82166E50(ctx, base);
	// addi r31,r30,96
	ctx.r31.s64 = ctx.r30.s64 + 96;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x825d3bc8
	ctx.lr = 0x82227650;
	sub_825D3BC8(ctx, base);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r11,r30,112
	ctx.r11.s64 = ctx.r30.s64 + 112;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8222766C:
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// addi r31,r30,112
	ctx.r31.s64 = ctx.r30.s64 + 112;
	// addi r29,r11,15152
	ctx.r29.s64 = ctx.r11.s64 + 15152;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r28,r11,15168
	ctx.r28.s64 = ctx.r11.s64 + 15168;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x825c5560
	ctx.lr = 0x82227694;
	sub_825C5560(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x825d2bc0
	ctx.lr = 0x822276A0;
	sub_825D2BC0(ctx, base);
	// addi r27,r30,96
	ctx.r27.s64 = ctx.r30.s64 + 96;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x825d2cb0
	ctx.lr = 0x822276B4;
	sub_825D2CB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82168c48
	ctx.lr = 0x822276C4;
	sub_82168C48(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r30,320
	ctx.r11.s64 = ctx.r30.s64 + 320;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lvx128 v12,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stvx v12,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f0,14088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stvx v13,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v11,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x825c5560
	ctx.lr = 0x82227748;
	sub_825C5560(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x825d2bc0
	ctx.lr = 0x82227754;
	sub_825D2BC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x825d2cb0
	ctx.lr = 0x82227764;
	sub_825D2CB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82168c48
	ctx.lr = 0x82227774;
	sub_82168C48(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r30,384
	ctx.r11.s64 = ctx.r30.s64 + 384;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lvx128 v12,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
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
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822277C0"))) PPC_WEAK_FUNC(sub_822277C0);
PPC_FUNC_IMPL(__imp__sub_822277C0) {
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
	// addi r31,r3,-32
	ctx.r31.s64 = ctx.r3.s64 + -32;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822275e8
	ctx.lr = 0x822277E4;
	sub_822275E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82227550
	ctx.lr = 0x822277F0;
	sub_82227550(ctx, base);
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

__attribute__((alias("__imp__sub_82227808"))) PPC_WEAK_FUNC(sub_82227808);
PPC_FUNC_IMPL(__imp__sub_82227808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82227810;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r31,168
	ctx.r11.s64 = ctx.r31.s64 + 168;
	// addi r9,r31,60
	ctx.r9.s64 = ctx.r31.s64 + 60;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82227840;
	sub_82225BD8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r31,252
	ctx.r30.s64 = ctx.r31.s64 + 252;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82227860
	if (ctx.cr6.eq) goto loc_82227860;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82160140
	ctx.lr = 0x82227860;
	sub_82160140(ctx, base);
loc_82227860:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82227870
	if (ctx.cr6.eq) goto loc_82227870;
	// bl 0x821601b8
	ctx.lr = 0x82227870;
	sub_821601B8(ctx, base);
loc_82227870:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82227884
	if (ctx.cr6.eq) goto loc_82227884;
	// bl 0x821601b8
	ctx.lr = 0x82227884;
	sub_821601B8(ctx, base);
loc_82227884:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82227898"))) PPC_WEAK_FUNC(sub_82227898);
PPC_FUNC_IMPL(__imp__sub_82227898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x822278A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r30,252
	ctx.r31.s64 = ctx.r30.s64 + 252;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822278c4
	if (ctx.cr6.eq) goto loc_822278C4;
	// bl 0x821601b8
	ctx.lr = 0x822278C4;
	sub_821601B8(ctx, base);
loc_822278C4:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stb r29,164(r30)
	PPC_STORE_U8(ctx.r30.u32 + 164, ctx.r29.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822278D8"))) PPC_WEAK_FUNC(sub_822278D8);
PPC_FUNC_IMPL(__imp__sub_822278D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x822278E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// or r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 | ctx.r11.u64;
	// andc r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r30.u64;
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// bne cr6,0x8222791c
	if (!ctx.cr6.eq) goto loc_8222791C;
	// lwz r10,420(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// rlwinm r11,r11,12,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFF;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x822279c8
	if (ctx.cr6.eq) goto loc_822279C8;
loc_8222791C:
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82227984
	if (ctx.cr6.eq) goto loc_82227984;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82227948
	if (ctx.cr6.eq) goto loc_82227948;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r31,260
	ctx.r3.s64 = ctx.r31.s64 + 260;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x8221f3c8
	ctx.lr = 0x82227944;
	sub_8221F3C8(ctx, base);
	// b 0x822279c8
	goto loc_822279C8;
loc_82227948:
	// addi r11,r31,224
	ctx.r11.s64 = ctx.r31.s64 + 224;
	// addi r9,r31,60
	ctx.r9.s64 = ctx.r31.s64 + 60;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82227970;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,260
	ctx.r3.s64 = ctx.r31.s64 + 260;
	// bl 0x8221f3c8
	ctx.lr = 0x8222797C;
	sub_8221F3C8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x822279bc
	goto loc_822279BC;
loc_82227984:
	// addi r11,r31,196
	ctx.r11.s64 = ctx.r31.s64 + 196;
	// addi r9,r31,60
	ctx.r9.s64 = ctx.r31.s64 + 60;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x822279AC;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,260
	ctx.r3.s64 = ctx.r31.s64 + 260;
	// bl 0x8221f3c8
	ctx.lr = 0x822279B8;
	sub_8221F3C8(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_822279BC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822279c8
	if (ctx.cr6.eq) goto loc_822279C8;
	// bl 0x821601b8
	ctx.lr = 0x822279C8;
	sub_821601B8(ctx, base);
loc_822279C8:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822279e8
	if (ctx.cr6.eq) goto loc_822279E8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r31,260
	ctx.r3.s64 = ctx.r31.s64 + 260;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x8221f3c8
	ctx.lr = 0x822279E8;
	sub_8221F3C8(ctx, base);
loc_822279E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822279F0"))) PPC_WEAK_FUNC(sub_822279F0);
PPC_FUNC_IMPL(__imp__sub_822279F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x822279F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,-15432
	ctx.r4.s64 = ctx.r11.s64 + -15432;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x8221f1b8
	ctx.lr = 0x82227A1C;
	sub_8221F1B8(ctx, base);
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221f7d8
	ctx.lr = 0x82227A28;
	sub_8221F7D8(ctx, base);
	// addi r28,r31,44
	ctx.r28.s64 = ctx.r31.s64 + 44;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82225eb8
	ctx.lr = 0x82227A3C;
	sub_82225EB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,-15436
	ctx.r11.s64 = ctx.r11.s64 + -15436;
	// addi r10,r10,-15516
	ctx.r10.s64 = ctx.r10.s64 + -15516;
	// addi r9,r9,-15524
	ctx.r9.s64 = ctx.r9.s64 + -15524;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// beq cr6,0x82227a78
	if (ctx.cr6.eq) goto loc_82227A78;
	// bl 0x82659610
	ctx.lr = 0x82227A78;
	sub_82659610(ctx, base);
loc_82227A78:
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82227A90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// vspltisw v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r10,r11,-4576
	ctx.r10.s64 = ctx.r11.s64 + -4576;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// li r8,16
	ctx.r8.s64 = 16;
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
	// li r30,0
	ctx.r30.s64 = 0;
	// lvx128 v8,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,2
	ctx.r28.s64 = 2;
	// lvx128 v10,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// vspltw v12,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// vspltw v11,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v7,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v13,v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x0));
	// lvx128 v9,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// vmaddfp v12,v9,v12,v10
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v10.f32)));
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
	// lwz r31,292(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r31,112
	ctx.r9.s64 = ctx.r31.s64 + 112;
	// addi r11,r31,128
	ctx.r11.s64 = ctx.r31.s64 + 128;
	// addi r29,r31,200
	ctx.r29.s64 = ctx.r31.s64 + 200;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,-18576
	ctx.r10.s64 = ctx.r10.s64 + -18576;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r8,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// lvx128 v0,r9,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,48
	ctx.r9.s64 = 48;
	// stvx v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r9,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r30,196(r31)
	PPC_STORE_U8(ctx.r31.u32 + 196, ctx.r30.u8);
	// stfs f0,192(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
loc_82227B84:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82224b88
	ctx.lr = 0x82227B8C;
	sub_82224B88(ctx, base);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r27,r27,28
	ctx.r27.s64 = ctx.r27.s64 + 28;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge cr6,0x82227b84
	if (!ctx.cr6.lt) goto loc_82227B84;
	// stw r30,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r30.u32);
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// addi r27,r31,44
	ctx.r27.s64 = ctx.r31.s64 + 44;
	// stw r30,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r30.u32);
	// addi r25,r11,15076
	ctx.r25.s64 = ctx.r11.s64 + 15076;
	// stw r30,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
	// li r26,15
	ctx.r26.s64 = 15;
	// stw r30,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r30.u32);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// stw r30,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// stw r30,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r30.u32);
loc_82227BD0:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82227BE8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82227be8
	if (!ctx.cr6.eq) goto loc_82227BE8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82227C0C;
	sub_82161E08(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82225a18
	ctx.lr = 0x82227C1C;
	sub_82225A18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82227C2C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82227c2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82227C2C;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82227c54
	if (ctx.cr6.lt) goto loc_82227C54;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x82227C54;
	sub_82186190(ctx, base);
loc_82227C54:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// addi r11,r25,12
	ctx.r11.s64 = ctx.r25.s64 + 12;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82227bd0
	if (!ctx.cr6.eq) goto loc_82227BD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822275e8
	ctx.lr = 0x82227C7C;
	sub_822275E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82227C88"))) PPC_WEAK_FUNC(sub_82227C88);
PPC_FUNC_IMPL(__imp__sub_82227C88) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82227d50
	sub_82227D50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82227C90"))) PPC_WEAK_FUNC(sub_82227C90);
PPC_FUNC_IMPL(__imp__sub_82227C90) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-44
	ctx.r3.s64 = ctx.r3.s64 + -44;
	// b 0x82227d50
	sub_82227D50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82227C98"))) PPC_WEAK_FUNC(sub_82227C98);
PPC_FUNC_IMPL(__imp__sub_82227C98) {
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
	// lwz r3,304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82227cd8
	if (ctx.cr6.eq) goto loc_82227CD8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne 0x82227cd8
	if (!ctx.cr0.eq) goto loc_82227CD8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82227CD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82227CD8:
	// lwz r3,296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82227ce8
	if (ctx.cr6.eq) goto loc_82227CE8;
	// bl 0x821601b8
	ctx.lr = 0x82227CE8;
	sub_821601B8(ctx, base);
loc_82227CE8:
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82227cf8
	if (ctx.cr6.eq) goto loc_82227CF8;
	// bl 0x821601b8
	ctx.lr = 0x82227CF8;
	sub_821601B8(ctx, base);
loc_82227CF8:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82227d08
	if (ctx.cr6.eq) goto loc_82227D08;
	// bl 0x82581e38
	ctx.lr = 0x82227D08;
	sub_82581E38(ctx, base);
loc_82227D08:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bne cr6,0x82227d18
	if (!ctx.cr6.eq) goto loc_82227D18;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82227D18:
	// bl 0x82225b68
	ctx.lr = 0x82227D1C;
	sub_82225B68(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bne cr6,0x82227d2c
	if (!ctx.cr6.eq) goto loc_82227D2C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82227D2C:
	// bl 0x8221f3a8
	ctx.lr = 0x82227D30;
	sub_8221F3A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221f0e8
	ctx.lr = 0x82227D38;
	sub_8221F0E8(ctx, base);
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

__attribute__((alias("__imp__sub_82227D50"))) PPC_WEAK_FUNC(sub_82227D50);
PPC_FUNC_IMPL(__imp__sub_82227D50) {
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
	// bl 0x82227c98
	ctx.lr = 0x82227D70;
	sub_82227C98(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82227d88
	if (ctx.cr6.eq) goto loc_82227D88;
	// bl 0x82186190
	ctx.lr = 0x82227D84;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82227D88:
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

__attribute__((alias("__imp__sub_82227DA0"))) PPC_WEAK_FUNC(sub_82227DA0);
PPC_FUNC_IMPL(__imp__sub_82227DA0) {
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
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r11,r30,268
	ctx.r11.s64 = ctx.r30.s64 + 268;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x821600c0
	ctx.lr = 0x82227DD4;
	sub_821600C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82227e50
	if (ctx.cr6.eq) goto loc_82227E50;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82227e50
	if (ctx.cr6.eq) goto loc_82227E50;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,2408
	ctx.r9.s64 = ctx.r9.s64 + 2408;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r9,r30,-32
	ctx.r9.s64 = ctx.r30.s64 + -32;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82250758
	ctx.lr = 0x82227E34;
	sub_82250758(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82227E50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82227E50:
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

__attribute__((alias("__imp__sub_82227E68"))) PPC_WEAK_FUNC(sub_82227E68);
PPC_FUNC_IMPL(__imp__sub_82227E68) {
	PPC_FUNC_PROLOGUE();
	// b 0x82228840
	sub_82228840(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82227E70"))) PPC_WEAK_FUNC(sub_82227E70);
PPC_FUNC_IMPL(__imp__sub_82227E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82227E78;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,1628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	// cmpwi cr6,r11,174
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 174, ctx.xer);
	// bne cr6,0x82227eb8
	if (!ctx.cr6.eq) goto loc_82227EB8;
	// addi r11,r31,1576
	ctx.r11.s64 = ctx.r31.s64 + 1576;
	// addi r8,r31,1160
	ctx.r8.s64 = ctx.r31.s64 + 1160;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225340
	ctx.lr = 0x82227EB8;
	sub_82225340(ctx, base);
loc_82227EB8:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228a18
	ctx.lr = 0x82227EC8;
	sub_82228A18(ctx, base);
	// addi r30,r31,1604
	ctx.r30.s64 = ctx.r31.s64 + 1604;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82227ee4
	if (ctx.cr6.eq) goto loc_82227EE4;
	// bl 0x821601b8
	ctx.lr = 0x82227EE4;
	sub_821601B8(ctx, base);
loc_82227EE4:
	// addi r27,r31,1612
	ctx.r27.s64 = ctx.r31.s64 + 1612;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82227f00
	if (ctx.cr6.eq) goto loc_82227F00;
	// bl 0x821601b8
	ctx.lr = 0x82227F00;
	sub_821601B8(ctx, base);
loc_82227F00:
	// addi r11,r26,-69
	ctx.r11.s64 = ctx.r26.s64 + -69;
	// stw r29,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r29.u32);
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bgt cr6,0x82228218
	if (ctx.cr6.gt) goto loc_82228218;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// addi r12,r12,32552
	ctx.r12.s64 = ctx.r12.s64 + 32552;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82228098;
	case 1:
		goto loc_82227FA8;
	case 2:
		goto loc_82228218;
	case 3:
		goto loc_82228218;
	case 4:
		goto loc_82228218;
	case 5:
		goto loc_82228218;
	case 6:
		goto loc_82228218;
	case 7:
		goto loc_82228218;
	case 8:
		goto loc_82228218;
	case 9:
		goto loc_82228218;
	case 10:
		goto loc_822280B8;
	case 11:
		goto loc_82228218;
	case 12:
		goto loc_82228134;
	case 13:
		goto loc_82228184;
	case 14:
		goto loc_82228048;
	case 15:
		goto loc_82228218;
	case 16:
		goto loc_82228218;
	case 17:
		goto loc_82228218;
	case 18:
		goto loc_82228218;
	case 19:
		goto loc_82228218;
	case 20:
		goto loc_82228218;
	case 21:
		goto loc_82228218;
	case 22:
		goto loc_82228218;
	case 23:
		goto loc_82228218;
	case 24:
		goto loc_82228218;
	case 25:
		goto loc_82228218;
	case 26:
		goto loc_82228218;
	case 27:
		goto loc_82228218;
	case 28:
		goto loc_82228218;
	case 29:
		goto loc_82228218;
	case 30:
		goto loc_82228218;
	case 31:
		goto loc_822280A8;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-32616(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -32616);
	// lwz r17,32680(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 32680);
	// lwz r17,-32232(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -32232);
	// lwz r17,-32232(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -32232);
	// lwz r17,-32232(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -32232);
	// lwz r17,-32232(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -32232);
	// lwz r17,-32232(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -32232);
	// lwz r17,-32232(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -32232);
	// lwz r17,-32232(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -32232);
	// lwz r17,-32232(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -32232);
	// lwz r17,-32584(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -32584);
	// lwz r17,-32232(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -32232);
	// lwz r17,-32460(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -32460);
	// lwz r17,-32380(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -32380);
	// lwz r17,-32696(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -32696);
	// lwz r17,-32232(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -32232);
	// lwz r17,-32232(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -32232);
	// lwz r17,-32232(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -32232);
	// lwz r17,-32232(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -32232);
	// lwz r17,-32232(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -32232);
	// lwz r17,-32232(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -32232);
	// lwz r17,-32232(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -32232);
	// lwz r17,-32232(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -32232);
	// lwz r17,-32232(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -32232);
	// lwz r17,-32232(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -32232);
	// lwz r17,-32232(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -32232);
	// lwz r17,-32232(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -32232);
	// lwz r17,-32232(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -32232);
	// lwz r17,-32232(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -32232);
	// lwz r17,-32232(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -32232);
	// lwz r17,-32232(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -32232);
	// lwz r17,-32600(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -32600);
loc_82227FA8:
	// addi r11,r31,1184
	ctx.r11.s64 = ctx.r31.s64 + 1184;
	// addi r29,r31,1160
	ctx.r29.s64 = ctx.r31.s64 + 1160;
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82227FD8;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221f3c8
	ctx.lr = 0x82227FE4;
	sub_8221F3C8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82227ff4
	if (ctx.cr6.eq) goto loc_82227FF4;
	// bl 0x821601b8
	ctx.lr = 0x82227FF4;
	sub_821601B8(ctx, base);
loc_82227FF4:
	// addi r11,r31,1212
	ctx.r11.s64 = ctx.r31.s64 + 1212;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x8222801C;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8221f3c8
	ctx.lr = 0x82228028;
	sub_8221F3C8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82228038
	if (ctx.cr6.eq) goto loc_82228038;
	// bl 0x821601b8
	ctx.lr = 0x82228038;
	sub_821601B8(ctx, base);
loc_82228038:
	// addi r11,r31,1240
	ctx.r11.s64 = ctx.r31.s64 + 1240;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82228200
	goto loc_82228200;
loc_82228048:
	// addi r11,r31,1268
	ctx.r11.s64 = ctx.r31.s64 + 1268;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82228070;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1164
	ctx.r3.s64 = ctx.r31.s64 + 1164;
	// bl 0x8221f3c8
	ctx.lr = 0x8222807C;
	sub_8221F3C8(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82228218
	if (ctx.cr6.eq) goto loc_82228218;
	// bl 0x821601b8
	ctx.lr = 0x8222808C;
	sub_821601B8(ctx, base);
	// stw r26,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r26.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_82228098:
	// addi r11,r31,1324
	ctx.r11.s64 = ctx.r31.s64 + 1324;
	// addi r8,r31,1160
	ctx.r8.s64 = ctx.r31.s64 + 1160;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// b 0x82228200
	goto loc_82228200;
loc_822280A8:
	// addi r11,r31,1352
	ctx.r11.s64 = ctx.r31.s64 + 1352;
	// addi r8,r31,1160
	ctx.r8.s64 = ctx.r31.s64 + 1160;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// b 0x82228200
	goto loc_82228200;
loc_822280B8:
	// addi r11,r31,1380
	ctx.r11.s64 = ctx.r31.s64 + 1380;
	// addi r30,r31,1160
	ctx.r30.s64 = ctx.r31.s64 + 1160;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225340
	ctx.lr = 0x822280E4;
	sub_82225340(ctx, base);
	// addi r11,r31,1408
	ctx.r11.s64 = ctx.r31.s64 + 1408;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x8222810C;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1164
	ctx.r3.s64 = ctx.r31.s64 + 1164;
	// bl 0x8221f3c8
	ctx.lr = 0x82228118;
	sub_8221F3C8(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82228218
	if (ctx.cr6.eq) goto loc_82228218;
	// bl 0x821601b8
	ctx.lr = 0x82228128;
	sub_821601B8(ctx, base);
	// stw r26,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r26.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_82228134:
	// addi r11,r31,1436
	ctx.r11.s64 = ctx.r31.s64 + 1436;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x8222815C;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1164
	ctx.r3.s64 = ctx.r31.s64 + 1164;
	// bl 0x8221f3c8
	ctx.lr = 0x82228168;
	sub_8221F3C8(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82228218
	if (ctx.cr6.eq) goto loc_82228218;
	// bl 0x821601b8
	ctx.lr = 0x82228178;
	sub_821601B8(ctx, base);
	// stw r26,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r26.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_82228184:
	// addi r11,r31,1464
	ctx.r11.s64 = ctx.r31.s64 + 1464;
	// addi r30,r31,1160
	ctx.r30.s64 = ctx.r31.s64 + 1160;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x822281B4;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1164
	ctx.r3.s64 = ctx.r31.s64 + 1164;
	// bl 0x8221f3c8
	ctx.lr = 0x822281C0;
	sub_8221F3C8(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822281d0
	if (ctx.cr6.eq) goto loc_822281D0;
	// bl 0x821601b8
	ctx.lr = 0x822281D0;
	sub_821601B8(ctx, base);
loc_822281D0:
	// addi r11,r31,1492
	ctx.r11.s64 = ctx.r31.s64 + 1492;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225340
	ctx.lr = 0x822281F4;
	sub_82225340(ctx, base);
	// addi r11,r31,1520
	ctx.r11.s64 = ctx.r31.s64 + 1520;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82228200:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82225340
	ctx.lr = 0x82228218;
	sub_82225340(ctx, base);
loc_82228218:
	// stw r26,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r26.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82228228"))) PPC_WEAK_FUNC(sub_82228228);
PPC_FUNC_IMPL(__imp__sub_82228228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82228230;
	__savegprlr_29(ctx, base);
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
	// bl 0x821e0968
	ctx.lr = 0x82228244;
	sub_821E0968(ctx, base);
	// rlwinm r11,r30,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82228294
	if (ctx.cr6.eq) goto loc_82228294;
	// addi r11,r31,1548
	ctx.r11.s64 = ctx.r31.s64 + 1548;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82228278;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1620
	ctx.r3.s64 = ctx.r31.s64 + 1620;
	// bl 0x8221f3c8
	ctx.lr = 0x82228284;
	sub_8221F3C8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82228294
	if (ctx.cr6.eq) goto loc_82228294;
	// bl 0x821601b8
	ctx.lr = 0x82228294;
	sub_821601B8(ctx, base);
loc_82228294:
	// rlwinm r11,r29,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822282b8
	if (ctx.cr6.eq) goto loc_822282B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,1620
	ctx.r3.s64 = ctx.r31.s64 + 1620;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8221f3c8
	ctx.lr = 0x822282B8;
	sub_8221F3C8(ctx, base);
loc_822282B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822282C0"))) PPC_WEAK_FUNC(sub_822282C0);
PPC_FUNC_IMPL(__imp__sub_822282C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x822282C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82228f28
	ctx.lr = 0x822282D4;
	sub_82228F28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r27,r31,44
	ctx.r27.s64 = ctx.r31.s64 + 44;
	// addi r11,r11,-15292
	ctx.r11.s64 = ctx.r11.s64 + -15292;
	// addi r10,r10,-15372
	ctx.r10.s64 = ctx.r10.s64 + -15372;
	// addi r9,r9,-15380
	ctx.r9.s64 = ctx.r9.s64 + -15380;
	// addi r28,r31,1216
	ctx.r28.s64 = ctx.r31.s64 + 1216;
	// li r30,14
	ctx.r30.s64 = 14;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
loc_82228308:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82224b88
	ctx.lr = 0x82228310;
	sub_82224B88(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82228308
	if (!ctx.cr6.lt) goto loc_82228308;
	// addi r11,r31,1636
	ctx.r11.s64 = ctx.r31.s64 + 1636;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8222832C:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x8222832c
	if (!ctx.cr6.lt) goto loc_8222832C;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r30.u32);
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// stw r30,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r30.u32);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// addi r25,r11,15184
	ctx.r25.s64 = ctx.r11.s64 + 15184;
	// li r26,15
	ctx.r26.s64 = 15;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// stw r10,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r10.u32);
loc_82228368:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82228380:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82228380
	if (!ctx.cr6.eq) goto loc_82228380;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x822283A4;
	sub_82161E08(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82225a18
	ctx.lr = 0x822283B4;
	sub_82225A18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822283C4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822283c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822283C4;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822283ec
	if (ctx.cr6.lt) goto loc_822283EC;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x822283EC;
	sub_82186190(ctx, base);
loc_822283EC:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// addi r11,r25,60
	ctx.r11.s64 = ctx.r25.s64 + 60;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82228368
	if (!ctx.cr6.eq) goto loc_82228368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82228418"))) PPC_WEAK_FUNC(sub_82228418);
PPC_FUNC_IMPL(__imp__sub_82228418) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-44
	ctx.r3.s64 = ctx.r3.s64 + -44;
	// b 0x822284d8
	sub_822284D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82228420"))) PPC_WEAK_FUNC(sub_82228420);
PPC_FUNC_IMPL(__imp__sub_82228420) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x822284d8
	sub_822284D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82228428"))) PPC_WEAK_FUNC(sub_82228428);
PPC_FUNC_IMPL(__imp__sub_82228428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82228430;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,1656(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1656);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82228448
	if (ctx.cr6.eq) goto loc_82228448;
	// bl 0x821601b8
	ctx.lr = 0x82228448;
	sub_821601B8(ctx, base);
loc_82228448:
	// addi r11,r28,1652
	ctx.r11.s64 = ctx.r28.s64 + 1652;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
loc_82228454:
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822284bc
	if (ctx.cr6.eq) goto loc_822284BC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq 0x82228484
	if (ctx.cr0.eq) goto loc_82228484;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x822284bc
	goto loc_822284BC;
loc_82228484:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82228498;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne 0x822284bc
	if (!ctx.cr0.eq) goto loc_822284BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822284BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822284BC:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82228454
	if (!ctx.cr6.lt) goto loc_82228454;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82223530
	ctx.lr = 0x822284D0;
	sub_82223530(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822284D8"))) PPC_WEAK_FUNC(sub_822284D8);
PPC_FUNC_IMPL(__imp__sub_822284D8) {
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
	// bl 0x82228428
	ctx.lr = 0x822284F8;
	sub_82228428(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82228510
	if (ctx.cr6.eq) goto loc_82228510;
	// bl 0x82186190
	ctx.lr = 0x8222850C;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82228510:
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

__attribute__((alias("__imp__sub_82228528"))) PPC_WEAK_FUNC(sub_82228528);
PPC_FUNC_IMPL(__imp__sub_82228528) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1144);
	// or r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 | ctx.r11.u64;
	// andc r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r5.u64;
	// stw r11,1144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1144, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82228540"))) PPC_WEAK_FUNC(sub_82228540);
PPC_FUNC_IMPL(__imp__sub_82228540) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,1180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1180, ctx.r4.u32);
	// stb r11,1184(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1184, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82228550"))) PPC_WEAK_FUNC(sub_82228550);
PPC_FUNC_IMPL(__imp__sub_82228550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82228558;
	__savegprlr_26(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,1192(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1192);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822285d4
	if (ctx.cr6.eq) goto loc_822285D4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822285d4
	if (ctx.cr6.eq) goto loc_822285D4;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82228590;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r5,r11,-4576
	ctx.r5.s64 = ctx.r11.s64 + -4576;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82166e50
	ctx.lr = 0x822285A4;
	sub_82166E50(ctx, base);
	// addi r31,r30,96
	ctx.r31.s64 = ctx.r30.s64 + 96;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x825d3bc8
	ctx.lr = 0x822285B8;
	sub_825D3BC8(ctx, base);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r11,r30,112
	ctx.r11.s64 = ctx.r30.s64 + 112;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_822285D4:
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// addi r31,r30,112
	ctx.r31.s64 = ctx.r30.s64 + 112;
	// addi r29,r11,15424
	ctx.r29.s64 = ctx.r11.s64 + 15424;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r28,r11,15440
	ctx.r28.s64 = ctx.r11.s64 + 15440;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x825c5560
	ctx.lr = 0x822285FC;
	sub_825C5560(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x825d2bc0
	ctx.lr = 0x82228608;
	sub_825D2BC0(ctx, base);
	// addi r27,r30,96
	ctx.r27.s64 = ctx.r30.s64 + 96;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x825d2cb0
	ctx.lr = 0x8222861C;
	sub_825D2CB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82168c48
	ctx.lr = 0x8222862C;
	sub_82168C48(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r30,1040
	ctx.r11.s64 = ctx.r30.s64 + 1040;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lvx128 v12,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stvx v12,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f0,14088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stvx v13,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v11,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x825c5560
	ctx.lr = 0x822286B0;
	sub_825C5560(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x825d2bc0
	ctx.lr = 0x822286BC;
	sub_825D2BC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x825d2cb0
	ctx.lr = 0x822286CC;
	sub_825D2CB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82168c48
	ctx.lr = 0x822286DC;
	sub_82168C48(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r30,1104
	ctx.r11.s64 = ctx.r30.s64 + 1104;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lvx128 v12,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
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
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82228728"))) PPC_WEAK_FUNC(sub_82228728);
PPC_FUNC_IMPL(__imp__sub_82228728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82228730;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// bl 0x82228550
	ctx.lr = 0x82228740;
	sub_82228550(ctx, base);
	// lbz r11,1152(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82228834
	if (ctx.cr6.eq) goto loc_82228834;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,1148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r11,1152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1152, ctx.r11.u8);
	// bne cr6,0x82228834
	if (!ctx.cr6.eq) goto loc_82228834;
	// lwz r11,1140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1140);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822287d0
	if (ctx.cr6.eq) goto loc_822287D0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x822287c0
	if (ctx.cr6.eq) goto loc_822287C0;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8222878c
	if (ctx.cr6.eq) goto loc_8222878C;
	// addi r11,r31,224
	ctx.r11.s64 = ctx.r31.s64 + 224;
	// addi r8,r31,1160
	ctx.r8.s64 = ctx.r31.s64 + 1160;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// b 0x8222881c
	goto loc_8222881C;
loc_8222878C:
	// addi r11,r31,252
	ctx.r11.s64 = ctx.r31.s64 + 252;
	// addi r30,r31,1160
	ctx.r30.s64 = ctx.r31.s64 + 1160;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225340
	ctx.lr = 0x822287B8;
	sub_82225340(ctx, base);
	// addi r11,r31,280
	ctx.r11.s64 = ctx.r31.s64 + 280;
	// b 0x82228814
	goto loc_82228814;
loc_822287C0:
	// addi r11,r31,308
	ctx.r11.s64 = ctx.r31.s64 + 308;
	// addi r8,r31,1160
	ctx.r8.s64 = ctx.r31.s64 + 1160;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// b 0x8222881c
	goto loc_8222881C;
loc_822287D0:
	// lwz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1144);
	// addi r30,r31,1160
	ctx.r30.s64 = ctx.r31.s64 + 1160;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// rlwinm r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r31,784
	ctx.r11.s64 = ctx.r31.s64 + 784;
	// bne cr6,0x822287f8
	if (!ctx.cr6.eq) goto loc_822287F8;
	// addi r11,r31,756
	ctx.r11.s64 = ctx.r31.s64 + 756;
loc_822287F8:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82225340
	ctx.lr = 0x82228810;
	sub_82225340(ctx, base);
	// addi r11,r31,812
	ctx.r11.s64 = ctx.r31.s64 + 812;
loc_82228814:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
loc_8222881C:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82225340
	ctx.lr = 0x82228834;
	sub_82225340(ctx, base);
loc_82228834:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82228840"))) PPC_WEAK_FUNC(sub_82228840);
PPC_FUNC_IMPL(__imp__sub_82228840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82228848;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,1136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// or r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 | ctx.r11.u64;
	// andc r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r29.u64;
	// rlwinm r10,r11,12,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFF;
	// stw r11,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r11.u32);
	// stw r10,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r10.u32);
	// beq cr6,0x822288f0
	if (ctx.cr6.eq) goto loc_822288F0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmpwi cr6,r11,83
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 83, ctx.xer);
	// beq cr6,0x822288cc
	if (ctx.cr6.eq) goto loc_822288CC;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x822288c4
	if (ctx.cr6.eq) goto loc_822288C4;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x822288bc
	if (ctx.cr6.eq) goto loc_822288BC;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// addi r8,r31,1160
	ctx.r8.s64 = ctx.r31.s64 + 1160;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// beq cr6,0x822288b4
	if (ctx.cr6.eq) goto loc_822288B4;
	// addi r11,r31,476
	ctx.r11.s64 = ctx.r31.s64 + 476;
	// b 0x822288d8
	goto loc_822288D8;
loc_822288B4:
	// addi r11,r31,532
	ctx.r11.s64 = ctx.r31.s64 + 532;
	// b 0x822288d8
	goto loc_822288D8;
loc_822288BC:
	// addi r11,r31,560
	ctx.r11.s64 = ctx.r31.s64 + 560;
	// b 0x822288d0
	goto loc_822288D0;
loc_822288C4:
	// addi r11,r31,504
	ctx.r11.s64 = ctx.r31.s64 + 504;
	// b 0x822288d0
	goto loc_822288D0;
loc_822288CC:
	// addi r11,r31,728
	ctx.r11.s64 = ctx.r31.s64 + 728;
loc_822288D0:
	// addi r8,r31,1160
	ctx.r8.s64 = ctx.r31.s64 + 1160;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
loc_822288D8:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82225340
	ctx.lr = 0x822288F0;
	sub_82225340(ctx, base);
loc_822288F0:
	// rlwinm r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82228980
	if (ctx.cr6.eq) goto loc_82228980;
	// lwz r11,1140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1140);
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// beq cr6,0x82228944
	if (ctx.cr6.eq) goto loc_82228944;
	// addi r11,r31,168
	ctx.r11.s64 = ctx.r31.s64 + 168;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82228930;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,980
	ctx.r3.s64 = ctx.r31.s64 + 980;
	// bl 0x8221f3c8
	ctx.lr = 0x8222893C;
	sub_8221F3C8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x82228974
	goto loc_82228974;
loc_82228944:
	// addi r11,r31,196
	ctx.r11.s64 = ctx.r31.s64 + 196;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82228964;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,980
	ctx.r3.s64 = ctx.r31.s64 + 980;
	// bl 0x8221f3c8
	ctx.lr = 0x82228970;
	sub_8221F3C8(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_82228974:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82228980
	if (ctx.cr6.eq) goto loc_82228980;
	// bl 0x821601b8
	ctx.lr = 0x82228980;
	sub_821601B8(ctx, base);
loc_82228980:
	// rlwinm r11,r29,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822289a4
	if (ctx.cr6.eq) goto loc_822289A4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,980
	ctx.r3.s64 = ctx.r31.s64 + 980;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8221f3c8
	ctx.lr = 0x822289A4;
	sub_8221F3C8(ctx, base);
loc_822289A4:
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82228a10
	if (ctx.cr6.eq) goto loc_82228A10;
	// lwz r11,1140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1140);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822289ec
	if (ctx.cr6.eq) goto loc_822289EC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x822289e4
	if (ctx.cr6.eq) goto loc_822289E4;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// addi r8,r31,1160
	ctx.r8.s64 = ctx.r31.s64 + 1160;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// beq cr6,0x822289dc
	if (ctx.cr6.eq) goto loc_822289DC;
	// addi r11,r31,588
	ctx.r11.s64 = ctx.r31.s64 + 588;
	// b 0x822289f8
	goto loc_822289F8;
loc_822289DC:
	// addi r11,r31,616
	ctx.r11.s64 = ctx.r31.s64 + 616;
	// b 0x822289f8
	goto loc_822289F8;
loc_822289E4:
	// addi r11,r31,644
	ctx.r11.s64 = ctx.r31.s64 + 644;
	// b 0x822289f0
	goto loc_822289F0;
loc_822289EC:
	// addi r11,r31,672
	ctx.r11.s64 = ctx.r31.s64 + 672;
loc_822289F0:
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r8,r31,1160
	ctx.r8.s64 = ctx.r31.s64 + 1160;
loc_822289F8:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82225340
	ctx.lr = 0x82228A10;
	sub_82225340(ctx, base);
loc_82228A10:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82228A18"))) PPC_WEAK_FUNC(sub_82228A18);
PPC_FUNC_IMPL(__imp__sub_82228A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82228A20;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r31,1164
	ctx.r30.s64 = ctx.r31.s64 + 1164;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82228a48
	if (ctx.cr6.eq) goto loc_82228A48;
	// bl 0x821601b8
	ctx.lr = 0x82228A48;
	sub_821601B8(ctx, base);
loc_82228A48:
	// addi r11,r29,-10
	ctx.r11.s64 = ctx.r29.s64 + -10;
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// cmplwi cr6,r11,101
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 101, ctx.xer);
	// bgt cr6,0x82228de4
	if (ctx.cr6.gt) goto loc_82228DE4;
	// lis r12,-32221
	ctx.r12.s64 = -2111635456;
	// addi r12,r12,-30096
	ctx.r12.s64 = ctx.r12.s64 + -30096;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82228C08;
	case 1:
		goto loc_82228DE4;
	case 2:
		goto loc_82228DE4;
	case 3:
		goto loc_82228DE4;
	case 4:
		goto loc_82228DE4;
	case 5:
		goto loc_82228DE4;
	case 6:
		goto loc_82228DE4;
	case 7:
		goto loc_82228DE4;
	case 8:
		goto loc_82228DE4;
	case 9:
		goto loc_82228DE4;
	case 10:
		goto loc_82228DE4;
	case 11:
		goto loc_82228DE4;
	case 12:
		goto loc_82228DE4;
	case 13:
		goto loc_82228DE4;
	case 14:
		goto loc_82228DE4;
	case 15:
		goto loc_82228DE4;
	case 16:
		goto loc_82228DE4;
	case 17:
		goto loc_82228DE4;
	case 18:
		goto loc_82228DE4;
	case 19:
		goto loc_82228DE4;
	case 20:
		goto loc_82228DE4;
	case 21:
		goto loc_82228DA0;
	case 22:
		goto loc_82228DE4;
	case 23:
		goto loc_82228DE4;
	case 24:
		goto loc_82228DE4;
	case 25:
		goto loc_82228DE4;
	case 26:
		goto loc_82228DE4;
	case 27:
		goto loc_82228DE4;
	case 28:
		goto loc_82228DE4;
	case 29:
		goto loc_82228DE4;
	case 30:
		goto loc_82228DE4;
	case 31:
		goto loc_82228DE4;
	case 32:
		goto loc_82228DE4;
	case 33:
		goto loc_82228DE4;
	case 34:
		goto loc_82228DE4;
	case 35:
		goto loc_82228DE4;
	case 36:
		goto loc_82228DE4;
	case 37:
		goto loc_82228DE4;
	case 38:
		goto loc_82228DE4;
	case 39:
		goto loc_82228DE4;
	case 40:
		goto loc_82228DE4;
	case 41:
		goto loc_82228DE4;
	case 42:
		goto loc_82228DE4;
	case 43:
		goto loc_82228DE4;
	case 44:
		goto loc_82228DE4;
	case 45:
		goto loc_82228DE4;
	case 46:
		goto loc_82228DE4;
	case 47:
		goto loc_82228DE4;
	case 48:
		goto loc_82228DE4;
	case 49:
		goto loc_82228DE4;
	case 50:
		goto loc_82228DE4;
	case 51:
		goto loc_82228DE4;
	case 52:
		goto loc_82228DE4;
	case 53:
		goto loc_82228DE4;
	case 54:
		goto loc_82228DE4;
	case 55:
		goto loc_82228DE4;
	case 56:
		goto loc_82228DE4;
	case 57:
		goto loc_82228DE4;
	case 58:
		goto loc_82228DE4;
	case 59:
		goto loc_82228DE4;
	case 60:
		goto loc_82228DE4;
	case 61:
		goto loc_82228DE4;
	case 62:
		goto loc_82228DE4;
	case 63:
		goto loc_82228DE4;
	case 64:
		goto loc_82228DE4;
	case 65:
		goto loc_82228DE4;
	case 66:
		goto loc_82228DE4;
	case 67:
		goto loc_82228DE4;
	case 68:
		goto loc_82228DE4;
	case 69:
		goto loc_82228DE4;
	case 70:
		goto loc_82228DE4;
	case 71:
		goto loc_82228DE4;
	case 72:
		goto loc_82228DE4;
	case 73:
		goto loc_82228DE4;
	case 74:
		goto loc_82228DE4;
	case 75:
		goto loc_82228DE4;
	case 76:
		goto loc_82228DE4;
	case 77:
		goto loc_82228DE4;
	case 78:
		goto loc_82228DE4;
	case 79:
		goto loc_82228DE4;
	case 80:
		goto loc_82228DE4;
	case 81:
		goto loc_82228DE4;
	case 82:
		goto loc_82228DE4;
	case 83:
		goto loc_82228DE4;
	case 84:
		goto loc_82228DE4;
	case 85:
		goto loc_82228DE4;
	case 86:
		goto loc_82228DE4;
	case 87:
		goto loc_82228DE4;
	case 88:
		goto loc_82228CFC;
	case 89:
		goto loc_82228DE4;
	case 90:
		goto loc_82228DE4;
	case 91:
		goto loc_82228DE4;
	case 92:
		goto loc_82228DE4;
	case 93:
		goto loc_82228DE4;
	case 94:
		goto loc_82228DE4;
	case 95:
		goto loc_82228DE4;
	case 96:
		goto loc_82228DE4;
	case 97:
		goto loc_82228DE4;
	case 98:
		goto loc_82228D64;
	case 99:
		goto loc_82228DE4;
	case 100:
		goto loc_82228DE4;
	case 101:
		goto loc_82228D28;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-29688(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29688);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29280(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29280);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29444(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29444);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29340(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29340);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29212);
	// lwz r17,-29400(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -29400);
loc_82228C08:
	// lwz r11,1140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1140);
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82228cc8
	if (ctx.cr6.eq) goto loc_82228CC8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82228c94
	if (ctx.cr6.eq) goto loc_82228C94;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82228c60
	if (ctx.cr6.eq) goto loc_82228C60;
	// addi r11,r31,364
	ctx.r11.s64 = ctx.r31.s64 + 364;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82228C4C;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221f3c8
	ctx.lr = 0x82228C58;
	sub_8221F3C8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82228dd8
	goto loc_82228DD8;
loc_82228C60:
	// addi r11,r31,392
	ctx.r11.s64 = ctx.r31.s64 + 392;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82228C80;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221f3c8
	ctx.lr = 0x82228C8C;
	sub_8221F3C8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x82228dd8
	goto loc_82228DD8;
loc_82228C94:
	// addi r11,r31,420
	ctx.r11.s64 = ctx.r31.s64 + 420;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82228CB4;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221f3c8
	ctx.lr = 0x82228CC0;
	sub_8221F3C8(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x82228dd8
	goto loc_82228DD8;
loc_82228CC8:
	// addi r11,r31,448
	ctx.r11.s64 = ctx.r31.s64 + 448;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82228CE8;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221f3c8
	ctx.lr = 0x82228CF4;
	sub_8221F3C8(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x82228dd8
	goto loc_82228DD8;
loc_82228CFC:
	// addi r11,r31,700
	ctx.r11.s64 = ctx.r31.s64 + 700;
	// addi r8,r31,1160
	ctx.r8.s64 = ctx.r31.s64 + 1160;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225340
	ctx.lr = 0x82228D20;
	sub_82225340(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82228D28:
	// addi r11,r31,924
	ctx.r11.s64 = ctx.r31.s64 + 924;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82228D50;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221f3c8
	ctx.lr = 0x82228D5C;
	sub_8221F3C8(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x82228dd8
	goto loc_82228DD8;
loc_82228D64:
	// addi r11,r31,952
	ctx.r11.s64 = ctx.r31.s64 + 952;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82228D8C;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221f3c8
	ctx.lr = 0x82228D98;
	sub_8221F3C8(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// b 0x82228dd8
	goto loc_82228DD8;
loc_82228DA0:
	// addi r11,r31,448
	ctx.r11.s64 = ctx.r31.s64 + 448;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82228DC8;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221f3c8
	ctx.lr = 0x82228DD4;
	sub_8221F3C8(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_82228DD8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82228de4
	if (ctx.cr6.eq) goto loc_82228DE4;
	// bl 0x821601b8
	ctx.lr = 0x82228DE4;
	sub_821601B8(ctx, base);
loc_82228DE4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82228DF0"))) PPC_WEAK_FUNC(sub_82228DF0);
PPC_FUNC_IMPL(__imp__sub_82228DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82228DF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82228e58
	if (ctx.cr6.eq) goto loc_82228E58;
	// addi r11,r31,840
	ctx.r11.s64 = ctx.r31.s64 + 840;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82228E3C;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,988
	ctx.r3.s64 = ctx.r31.s64 + 988;
	// bl 0x8221f3c8
	ctx.lr = 0x82228E48;
	sub_8221F3C8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82228e58
	if (ctx.cr6.eq) goto loc_82228E58;
	// bl 0x821601b8
	ctx.lr = 0x82228E58;
	sub_821601B8(ctx, base);
loc_82228E58:
	// rlwinm r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82228e7c
	if (ctx.cr6.eq) goto loc_82228E7C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r31,988
	ctx.r3.s64 = ctx.r31.s64 + 988;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x8221f3c8
	ctx.lr = 0x82228E7C;
	sub_8221F3C8(ctx, base);
loc_82228E7C:
	// rlwinm r11,r28,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82228ecc
	if (ctx.cr6.eq) goto loc_82228ECC;
	// addi r11,r31,896
	ctx.r11.s64 = ctx.r31.s64 + 896;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82228EB0;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,996
	ctx.r3.s64 = ctx.r31.s64 + 996;
	// bl 0x8221f3c8
	ctx.lr = 0x82228EBC;
	sub_8221F3C8(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82228ecc
	if (ctx.cr6.eq) goto loc_82228ECC;
	// bl 0x821601b8
	ctx.lr = 0x82228ECC;
	sub_821601B8(ctx, base);
loc_82228ECC:
	// rlwinm r11,r29,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82228eec
	if (ctx.cr6.eq) goto loc_82228EEC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r31,996
	ctx.r3.s64 = ctx.r31.s64 + 996;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x8221f3c8
	ctx.lr = 0x82228EEC;
	sub_8221F3C8(ctx, base);
loc_82228EEC:
	// rlwinm r11,r28,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82228f1c
	if (ctx.cr6.eq) goto loc_82228F1C;
	// addi r11,r31,868
	ctx.r11.s64 = ctx.r31.s64 + 868;
	// addi r8,r31,1160
	ctx.r8.s64 = ctx.r31.s64 + 1160;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225340
	ctx.lr = 0x82228F1C;
	sub_82225340(ctx, base);
loc_82228F1C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82228F28"))) PPC_WEAK_FUNC(sub_82228F28);
PPC_FUNC_IMPL(__imp__sub_82228F28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x82228F30;
	__savegprlr_25(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// addi r4,r11,-15432
	ctx.r4.s64 = ctx.r11.s64 + -15432;
	// stw r28,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r28.u32);
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// stw r27,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r27.u32);
	// bl 0x8221f1b8
	ctx.lr = 0x82228F5C;
	sub_8221F1B8(ctx, base);
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221f7d8
	ctx.lr = 0x82228F68;
	sub_8221F7D8(ctx, base);
	// addi r29,r31,44
	ctx.r29.s64 = ctx.r31.s64 + 44;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82225eb8
	ctx.lr = 0x82228F7C;
	sub_82225EB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,-15068
	ctx.r11.s64 = ctx.r11.s64 + -15068;
	// addi r10,r10,-15148
	ctx.r10.s64 = ctx.r10.s64 + -15148;
	// addi r9,r9,-15160
	ctx.r9.s64 = ctx.r9.s64 + -15160;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82228FB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// vspltisw v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r9,r31,96
	ctx.r9.s64 = ctx.r31.s64 + 96;
	// addi r10,r11,-4576
	ctx.r10.s64 = ctx.r11.s64 + -4576;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// li r30,0
	ctx.r30.s64 = 0;
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
	// li r28,28
	ctx.r28.s64 = 28;
	// li r8,16
	ctx.r8.s64 = 16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// vspltw v12,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// vspltw v11,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v13,v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x0));
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// vmaddfp v12,v11,v8,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// vmaddfp v10,v0,v7,v12
	ctx.fpscr.enableFlushModeUnconditional();
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
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r31,292(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r31,112
	ctx.r10.s64 = ctx.r31.s64 + 112;
	// addi r11,r31,128
	ctx.r11.s64 = ctx.r31.s64 + 128;
	// addi r29,r31,200
	ctx.r29.s64 = ctx.r31.s64 + 200;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r10,r10,-18576
	ctx.r10.s64 = ctx.r10.s64 + -18576;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r8,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// lvx128 v0,r9,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,48
	ctx.r9.s64 = 48;
	// stvx v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r9,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,192(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
loc_822290AC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82224b88
	ctx.lr = 0x822290B4;
	sub_82224B88(ctx, base);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r27,r27,28
	ctx.r27.s64 = ctx.r27.s64 + 28;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge cr6,0x822290ac
	if (!ctx.cr6.lt) goto loc_822290AC;
	// stw r30,1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1012, ctx.r30.u32);
	// lwz r11,300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// stw r30,1016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1016, ctx.r30.u32);
	// stw r30,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r30.u32);
	// stw r30,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r30.u32);
	// stw r30,1028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1028, ctx.r30.u32);
	// stw r30,1032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1032, ctx.r30.u32);
	// stw r11,1188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1188, ctx.r11.u32);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// stw r30,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r30.u32);
	// stw r30,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r30.u32);
	// stw r30,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r30.u32);
	// stw r30,1180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1180, ctx.r30.u32);
	// stb r30,1184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1184, ctx.r30.u8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,1192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1192, ctx.r3.u32);
	// beq cr6,0x82229110
	if (ctx.cr6.eq) goto loc_82229110;
	// bl 0x82659610
	ctx.lr = 0x82229110;
	sub_82659610(ctx, base);
loc_82229110:
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// stw r30,1196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1196, ctx.r30.u32);
	// addi r27,r31,44
	ctx.r27.s64 = ctx.r31.s64 + 44;
	// stw r30,1200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1200, ctx.r30.u32);
	// addi r25,r11,15288
	ctx.r25.s64 = ctx.r11.s64 + 15288;
	// li r26,15
	ctx.r26.s64 = 15;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_8222912C:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82229144:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82229144
	if (!ctx.cr6.eq) goto loc_82229144;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82229168;
	sub_82161E08(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82225a18
	ctx.lr = 0x82229178;
	sub_82225A18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82229188:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82229188
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82229188;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822291b0
	if (ctx.cr6.lt) goto loc_822291B0;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x822291B0;
	sub_82186190(ctx, base);
loc_822291B0:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// addi r11,r25,116
	ctx.r11.s64 = ctx.r25.s64 + 116;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8222912c
	if (!ctx.cr6.eq) goto loc_8222912C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228550
	ctx.lr = 0x822291D8;
	sub_82228550(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822291E8"))) PPC_WEAK_FUNC(sub_822291E8);
PPC_FUNC_IMPL(__imp__sub_822291E8) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82229278
	if (ctx.cr6.eq) goto loc_82229278;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82229278
	if (ctx.cr6.eq) goto loc_82229278;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-31424
	ctx.r9.s64 = ctx.r9.s64 + -31424;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r9,r3,-32
	ctx.r9.s64 = ctx.r3.s64 + -32;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82250758
	ctx.lr = 0x8222925C;
	sub_82250758(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82229278;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82229278:
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

__attribute__((alias("__imp__sub_82229290"))) PPC_WEAK_FUNC(sub_82229290);
PPC_FUNC_IMPL(__imp__sub_82229290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82229298;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82228a18
	ctx.lr = 0x822292A8;
	sub_82228A18(ctx, base);
	// addi r30,r31,1380
	ctx.r30.s64 = ctx.r31.s64 + 1380;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822292c4
	if (ctx.cr6.eq) goto loc_822292C4;
	// bl 0x821601b8
	ctx.lr = 0x822292C4;
	sub_821601B8(ctx, base);
loc_822292C4:
	// addi r11,r29,-208
	ctx.r11.s64 = ctx.r29.s64 + -208;
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x82229444
	if (ctx.cr6.gt) goto loc_82229444;
	// lis r12,-32221
	ctx.r12.s64 = -2111635456;
	// addi r12,r12,-27924
	ctx.r12.s64 = ctx.r12.s64 + -27924;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82229390;
	case 1:
		goto loc_822293CC;
	case 2:
		goto loc_82229318;
	case 3:
		goto loc_82229354;
	case 4:
		goto loc_82229444;
	case 5:
		goto loc_82229444;
	case 6:
		goto loc_82229444;
	case 7:
		goto loc_82229444;
	case 8:
		goto loc_82229444;
	case 9:
		goto loc_82229444;
	case 10:
		goto loc_82229408;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-27760(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -27760);
	// lwz r17,-27700(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -27700);
	// lwz r17,-27880(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -27880);
	// lwz r17,-27820(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -27820);
	// lwz r17,-27580(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -27580);
	// lwz r17,-27580(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -27580);
	// lwz r17,-27580(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -27580);
	// lwz r17,-27580(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -27580);
	// lwz r17,-27580(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -27580);
	// lwz r17,-27580(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -27580);
	// lwz r17,-27640(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -27640);
loc_82229318:
	// addi r11,r31,1296
	ctx.r11.s64 = ctx.r31.s64 + 1296;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82229340;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221f3c8
	ctx.lr = 0x8222934C;
	sub_8221F3C8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x822294a0
	goto loc_822294A0;
loc_82229354:
	// addi r11,r31,1324
	ctx.r11.s64 = ctx.r31.s64 + 1324;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x8222937C;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221f3c8
	ctx.lr = 0x82229388;
	sub_8221F3C8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x822294a0
	goto loc_822294A0;
loc_82229390:
	// addi r11,r31,1240
	ctx.r11.s64 = ctx.r31.s64 + 1240;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x822293B8;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221f3c8
	ctx.lr = 0x822293C4;
	sub_8221F3C8(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x822294a0
	goto loc_822294A0;
loc_822293CC:
	// addi r11,r31,1268
	ctx.r11.s64 = ctx.r31.s64 + 1268;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x822293F4;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221f3c8
	ctx.lr = 0x82229400;
	sub_8221F3C8(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x822294a0
	goto loc_822294A0;
loc_82229408:
	// addi r11,r31,1352
	ctx.r11.s64 = ctx.r31.s64 + 1352;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82229430;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221f3c8
	ctx.lr = 0x8222943C;
	sub_8221F3C8(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x822294a0
	goto loc_822294A0;
loc_82229444:
	// addi r11,r31,1212
	ctx.r11.s64 = ctx.r31.s64 + 1212;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x8222946C;
	sub_82225BD8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82229488
	if (ctx.cr6.eq) goto loc_82229488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82160140
	ctx.lr = 0x82229488;
	sub_82160140(ctx, base);
loc_82229488:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82229498
	if (ctx.cr6.eq) goto loc_82229498;
	// bl 0x821601b8
	ctx.lr = 0x82229498;
	sub_821601B8(ctx, base);
loc_82229498:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
loc_822294A0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822294ac
	if (ctx.cr6.eq) goto loc_822294AC;
	// bl 0x821601b8
	ctx.lr = 0x822294AC;
	sub_821601B8(ctx, base);
loc_822294AC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822294B8"))) PPC_WEAK_FUNC(sub_822294B8);
PPC_FUNC_IMPL(__imp__sub_822294B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x822294C0;
	__savegprlr_29(ctx, base);
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
	// bl 0x82228df0
	ctx.lr = 0x822294D4;
	sub_82228DF0(ctx, base);
	// rlwinm r11,r30,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82229524
	if (ctx.cr6.eq) goto loc_82229524;
	// addi r11,r31,1184
	ctx.r11.s64 = ctx.r31.s64 + 1184;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82229508;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1388
	ctx.r3.s64 = ctx.r31.s64 + 1388;
	// bl 0x8221f3c8
	ctx.lr = 0x82229514;
	sub_8221F3C8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82229524
	if (ctx.cr6.eq) goto loc_82229524;
	// bl 0x821601b8
	ctx.lr = 0x82229524;
	sub_821601B8(ctx, base);
loc_82229524:
	// rlwinm r11,r29,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82229548
	if (ctx.cr6.eq) goto loc_82229548;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,1388
	ctx.r3.s64 = ctx.r31.s64 + 1388;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8221f3c8
	ctx.lr = 0x82229548;
	sub_8221F3C8(ctx, base);
loc_82229548:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82229550"))) PPC_WEAK_FUNC(sub_82229550);
PPC_FUNC_IMPL(__imp__sub_82229550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x82229558;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82228f28
	ctx.lr = 0x82229564;
	sub_82228F28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r27,r31,44
	ctx.r27.s64 = ctx.r31.s64 + 44;
	// addi r11,r11,-14652
	ctx.r11.s64 = ctx.r11.s64 + -14652;
	// addi r10,r10,-14732
	ctx.r10.s64 = ctx.r10.s64 + -14732;
	// addi r9,r9,-14740
	ctx.r9.s64 = ctx.r9.s64 + -14740;
	// addi r29,r31,1216
	ctx.r29.s64 = ctx.r31.s64 + 1216;
	// li r30,6
	ctx.r30.s64 = 6;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
loc_82229598:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82224b88
	ctx.lr = 0x822295A0;
	sub_82224B88(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r28,r28,28
	ctx.r28.s64 = ctx.r28.s64 + 28;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82229598
	if (!ctx.cr6.lt) goto loc_82229598;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// li r26,15
	ctx.r26.s64 = 15;
	// addi r25,r11,15456
	ctx.r25.s64 = ctx.r11.s64 + 15456;
	// stw r30,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r30.u32);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// stw r30,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r30.u32);
	// stw r30,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r30.u32);
	// stw r30,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r30.u32);
loc_822295D4:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822295EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822295ec
	if (!ctx.cr6.eq) goto loc_822295EC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82229610;
	sub_82161E08(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82225a18
	ctx.lr = 0x82229620;
	sub_82225A18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82229630:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82229630
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82229630;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82229658
	if (ctx.cr6.lt) goto loc_82229658;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x82229658;
	sub_82186190(ctx, base);
loc_82229658:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// addi r11,r25,28
	ctx.r11.s64 = ctx.r25.s64 + 28;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822295d4
	if (!ctx.cr6.eq) goto loc_822295D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82229688"))) PPC_WEAK_FUNC(sub_82229688);
PPC_FUNC_IMPL(__imp__sub_82229688) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82229698
	sub_82229698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82229690"))) PPC_WEAK_FUNC(sub_82229690);
PPC_FUNC_IMPL(__imp__sub_82229690) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-44
	ctx.r3.s64 = ctx.r3.s64 + -44;
	// b 0x82229698
	sub_82229698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82229698"))) PPC_WEAK_FUNC(sub_82229698);
PPC_FUNC_IMPL(__imp__sub_82229698) {
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
	// lwz r3,1424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822296c4
	if (ctx.cr6.eq) goto loc_822296C4;
	// bl 0x821601b8
	ctx.lr = 0x822296C4;
	sub_821601B8(ctx, base);
loc_822296C4:
	// lwz r3,1416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822296d4
	if (ctx.cr6.eq) goto loc_822296D4;
	// bl 0x821601b8
	ctx.lr = 0x822296D4;
	sub_821601B8(ctx, base);
loc_822296D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82223530
	ctx.lr = 0x822296DC;
	sub_82223530(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822296f4
	if (ctx.cr6.eq) goto loc_822296F4;
	// bl 0x82186190
	ctx.lr = 0x822296F0;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822296F4:
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

__attribute__((alias("__imp__sub_82229710"))) PPC_WEAK_FUNC(sub_82229710);
PPC_FUNC_IMPL(__imp__sub_82229710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x82229718;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82228a18
	ctx.lr = 0x82229728;
	sub_82228A18(ctx, base);
	// addi r30,r31,1380
	ctx.r30.s64 = ctx.r31.s64 + 1380;
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82229744
	if (ctx.cr6.eq) goto loc_82229744;
	// bl 0x821601b8
	ctx.lr = 0x82229744;
	sub_821601B8(ctx, base);
loc_82229744:
	// addi r11,r26,-208
	ctx.r11.s64 = ctx.r26.s64 + -208;
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8222988c
	if (ctx.cr6.gt) goto loc_8222988C;
	// lis r12,-32221
	ctx.r12.s64 = -2111635456;
	// addi r12,r12,-26772
	ctx.r12.s64 = ctx.r12.s64 + -26772;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82229804;
	case 1:
		goto loc_82229848;
	case 2:
		goto loc_8222977C;
	case 3:
		goto loc_822297C0;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-26620(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26620);
	// lwz r17,-26552(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26552);
	// lwz r17,-26756(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26756);
	// lwz r17,-26688(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26688);
loc_8222977C:
	// addi r11,r31,1296
	ctx.r11.s64 = ctx.r31.s64 + 1296;
	// addi r29,r31,1160
	ctx.r29.s64 = ctx.r31.s64 + 1160;
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x822297AC;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221f3c8
	ctx.lr = 0x822297B8;
	sub_8221F3C8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x822298f0
	goto loc_822298F0;
loc_822297C0:
	// addi r11,r31,1324
	ctx.r11.s64 = ctx.r31.s64 + 1324;
	// addi r29,r31,1160
	ctx.r29.s64 = ctx.r31.s64 + 1160;
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x822297F0;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221f3c8
	ctx.lr = 0x822297FC;
	sub_8221F3C8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x822298f0
	goto loc_822298F0;
loc_82229804:
	// addi r11,r31,1240
	ctx.r11.s64 = ctx.r31.s64 + 1240;
	// addi r29,r31,1160
	ctx.r29.s64 = ctx.r31.s64 + 1160;
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82229834;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221f3c8
	ctx.lr = 0x82229840;
	sub_8221F3C8(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x822298f0
	goto loc_822298F0;
loc_82229848:
	// addi r11,r31,1268
	ctx.r11.s64 = ctx.r31.s64 + 1268;
	// addi r29,r31,1160
	ctx.r29.s64 = ctx.r31.s64 + 1160;
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82229878;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221f3c8
	ctx.lr = 0x82229884;
	sub_8221F3C8(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x822298f0
	goto loc_822298F0;
loc_8222988C:
	// addi r11,r31,1212
	ctx.r11.s64 = ctx.r31.s64 + 1212;
	// addi r29,r31,1160
	ctx.r29.s64 = ctx.r31.s64 + 1160;
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x822298BC;
	sub_82225BD8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r27,4(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822298d8
	if (ctx.cr6.eq) goto loc_822298D8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82160140
	ctx.lr = 0x822298D8;
	sub_82160140(ctx, base);
loc_822298D8:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822298e8
	if (ctx.cr6.eq) goto loc_822298E8;
	// bl 0x821601b8
	ctx.lr = 0x822298E8;
	sub_821601B8(ctx, base);
loc_822298E8:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
loc_822298F0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822298fc
	if (ctx.cr6.eq) goto loc_822298FC;
	// bl 0x821601b8
	ctx.lr = 0x822298FC;
	sub_821601B8(ctx, base);
loc_822298FC:
	// cmpwi cr6,r26,219
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 219, ctx.xer);
	// blt cr6,0x82229978
	if (ctx.cr6.lt) goto loc_82229978;
	// cmpwi cr6,r26,220
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 220, ctx.xer);
	// bgt cr6,0x82229978
	if (ctx.cr6.gt) goto loc_82229978;
	// addi r30,r31,1388
	ctx.r30.s64 = ctx.r31.s64 + 1388;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222992c
	if (ctx.cr6.eq) goto loc_8222992C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82229994
	if (!ctx.cr6.eq) goto loc_82229994;
loc_8222992C:
	// addi r11,r31,1352
	ctx.r11.s64 = ctx.r31.s64 + 1352;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82229954;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221f3c8
	ctx.lr = 0x82229960;
	sub_8221F3C8(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82229994
	if (ctx.cr6.eq) goto loc_82229994;
	// bl 0x821601b8
	ctx.lr = 0x82229970;
	sub_821601B8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_82229978:
	// addi r31,r31,1388
	ctx.r31.s64 = ctx.r31.s64 + 1388;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82229990
	if (ctx.cr6.eq) goto loc_82229990;
	// bl 0x821601b8
	ctx.lr = 0x82229990;
	sub_821601B8(ctx, base);
loc_82229990:
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
loc_82229994:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822299A0"))) PPC_WEAK_FUNC(sub_822299A0);
PPC_FUNC_IMPL(__imp__sub_822299A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x822299A8;
	__savegprlr_29(ctx, base);
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
	// bl 0x82228df0
	ctx.lr = 0x822299BC;
	sub_82228DF0(ctx, base);
	// rlwinm r11,r30,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82229a0c
	if (ctx.cr6.eq) goto loc_82229A0C;
	// addi r11,r31,1184
	ctx.r11.s64 = ctx.r31.s64 + 1184;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x822299F0;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1396
	ctx.r3.s64 = ctx.r31.s64 + 1396;
	// bl 0x8221f3c8
	ctx.lr = 0x822299FC;
	sub_8221F3C8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82229a0c
	if (ctx.cr6.eq) goto loc_82229A0C;
	// bl 0x821601b8
	ctx.lr = 0x82229A0C;
	sub_821601B8(ctx, base);
loc_82229A0C:
	// rlwinm r11,r29,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82229a30
	if (ctx.cr6.eq) goto loc_82229A30;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,1396
	ctx.r3.s64 = ctx.r31.s64 + 1396;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8221f3c8
	ctx.lr = 0x82229A30;
	sub_8221F3C8(ctx, base);
loc_82229A30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82229A38"))) PPC_WEAK_FUNC(sub_82229A38);
PPC_FUNC_IMPL(__imp__sub_82229A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x82229A40;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82228f28
	ctx.lr = 0x82229A4C;
	sub_82228F28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r27,r31,44
	ctx.r27.s64 = ctx.r31.s64 + 44;
	// addi r11,r11,-14460
	ctx.r11.s64 = ctx.r11.s64 + -14460;
	// addi r10,r10,-14540
	ctx.r10.s64 = ctx.r10.s64 + -14540;
	// addi r9,r9,-14552
	ctx.r9.s64 = ctx.r9.s64 + -14552;
	// addi r29,r31,1216
	ctx.r29.s64 = ctx.r31.s64 + 1216;
	// li r30,6
	ctx.r30.s64 = 6;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
loc_82229A80:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82224b88
	ctx.lr = 0x82229A88;
	sub_82224B88(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r28,r28,28
	ctx.r28.s64 = ctx.r28.s64 + 28;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82229a80
	if (!ctx.cr6.lt) goto loc_82229A80;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// li r26,15
	ctx.r26.s64 = 15;
	// addi r25,r11,15536
	ctx.r25.s64 = ctx.r11.s64 + 15536;
	// stw r30,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r30.u32);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// stw r30,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r30.u32);
	// stw r30,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r30.u32);
	// stw r30,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r30.u32);
	// stw r30,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r30.u32);
	// stw r30,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r30.u32);
loc_82229AC4:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82229ADC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82229adc
	if (!ctx.cr6.eq) goto loc_82229ADC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82229B00;
	sub_82161E08(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82225a18
	ctx.lr = 0x82229B10;
	sub_82225A18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82229B20:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82229b20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82229B20;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82229b48
	if (ctx.cr6.lt) goto loc_82229B48;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x82229B48;
	sub_82186190(ctx, base);
loc_82229B48:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// addi r11,r25,28
	ctx.r11.s64 = ctx.r25.s64 + 28;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82229ac4
	if (!ctx.cr6.eq) goto loc_82229AC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82229B78"))) PPC_WEAK_FUNC(sub_82229B78);
PPC_FUNC_IMPL(__imp__sub_82229B78) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-44
	ctx.r3.s64 = ctx.r3.s64 + -44;
	// b 0x82229b88
	sub_82229B88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82229B80"))) PPC_WEAK_FUNC(sub_82229B80);
PPC_FUNC_IMPL(__imp__sub_82229B80) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82229b88
	sub_82229B88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82229B88"))) PPC_WEAK_FUNC(sub_82229B88);
PPC_FUNC_IMPL(__imp__sub_82229B88) {
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
	// lwz r3,1432(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82229bb4
	if (ctx.cr6.eq) goto loc_82229BB4;
	// bl 0x821601b8
	ctx.lr = 0x82229BB4;
	sub_821601B8(ctx, base);
loc_82229BB4:
	// lwz r3,1424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82229bc4
	if (ctx.cr6.eq) goto loc_82229BC4;
	// bl 0x821601b8
	ctx.lr = 0x82229BC4;
	sub_821601B8(ctx, base);
loc_82229BC4:
	// lwz r3,1416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82229bd4
	if (ctx.cr6.eq) goto loc_82229BD4;
	// bl 0x821601b8
	ctx.lr = 0x82229BD4;
	sub_821601B8(ctx, base);
loc_82229BD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82223530
	ctx.lr = 0x82229BDC;
	sub_82223530(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82229bf4
	if (ctx.cr6.eq) goto loc_82229BF4;
	// bl 0x82186190
	ctx.lr = 0x82229BF0;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82229BF4:
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

__attribute__((alias("__imp__sub_82229C10"))) PPC_WEAK_FUNC(sub_82229C10);
PPC_FUNC_IMPL(__imp__sub_82229C10) {
	PPC_FUNC_PROLOGUE();
	// b 0x82228728
	sub_82228728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82229C18"))) PPC_WEAK_FUNC(sub_82229C18);
PPC_FUNC_IMPL(__imp__sub_82229C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82229C20;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82228a18
	ctx.lr = 0x82229C30;
	sub_82228A18(ctx, base);
	// addi r30,r31,1408
	ctx.r30.s64 = ctx.r31.s64 + 1408;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82229c4c
	if (ctx.cr6.eq) goto loc_82229C4C;
	// bl 0x821601b8
	ctx.lr = 0x82229C4C;
	sub_821601B8(ctx, base);
loc_82229C4C:
	// addi r11,r29,-208
	ctx.r11.s64 = ctx.r29.s64 + -208;
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x82229df4
	if (ctx.cr6.gt) goto loc_82229DF4;
	// lis r12,-32221
	ctx.r12.s64 = -2111635456;
	// addi r12,r12,-25484
	ctx.r12.s64 = ctx.r12.s64 + -25484;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82229D7C;
	case 1:
		goto loc_82229DB8;
	case 2:
		goto loc_82229D04;
	case 3:
		goto loc_82229D40;
	case 4:
		goto loc_82229C8C;
	case 5:
		goto loc_82229CC8;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-25220(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -25220);
	// lwz r17,-25160(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -25160);
	// lwz r17,-25340(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -25340);
	// lwz r17,-25280(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -25280);
	// lwz r17,-25460(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -25460);
	// lwz r17,-25400(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -25400);
loc_82229C8C:
	// addi r11,r31,1184
	ctx.r11.s64 = ctx.r31.s64 + 1184;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82229CB4;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221f3c8
	ctx.lr = 0x82229CC0;
	sub_8221F3C8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82229e50
	goto loc_82229E50;
loc_82229CC8:
	// addi r11,r31,1212
	ctx.r11.s64 = ctx.r31.s64 + 1212;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82229CF0;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221f3c8
	ctx.lr = 0x82229CFC;
	sub_8221F3C8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x82229e50
	goto loc_82229E50;
loc_82229D04:
	// addi r11,r31,1352
	ctx.r11.s64 = ctx.r31.s64 + 1352;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82229D2C;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221f3c8
	ctx.lr = 0x82229D38;
	sub_8221F3C8(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x82229e50
	goto loc_82229E50;
loc_82229D40:
	// addi r11,r31,1380
	ctx.r11.s64 = ctx.r31.s64 + 1380;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82229D68;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221f3c8
	ctx.lr = 0x82229D74;
	sub_8221F3C8(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x82229e50
	goto loc_82229E50;
loc_82229D7C:
	// addi r11,r31,1296
	ctx.r11.s64 = ctx.r31.s64 + 1296;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82229DA4;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221f3c8
	ctx.lr = 0x82229DB0;
	sub_8221F3C8(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x82229e50
	goto loc_82229E50;
loc_82229DB8:
	// addi r11,r31,1324
	ctx.r11.s64 = ctx.r31.s64 + 1324;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82229DE0;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221f3c8
	ctx.lr = 0x82229DEC;
	sub_8221F3C8(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// b 0x82229e50
	goto loc_82229E50;
loc_82229DF4:
	// addi r11,r31,1268
	ctx.r11.s64 = ctx.r31.s64 + 1268;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82229E1C;
	sub_82225BD8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82229e38
	if (ctx.cr6.eq) goto loc_82229E38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82160140
	ctx.lr = 0x82229E38;
	sub_82160140(ctx, base);
loc_82229E38:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82229e48
	if (ctx.cr6.eq) goto loc_82229E48;
	// bl 0x821601b8
	ctx.lr = 0x82229E48;
	sub_821601B8(ctx, base);
loc_82229E48:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
loc_82229E50:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82229e5c
	if (ctx.cr6.eq) goto loc_82229E5C;
	// bl 0x821601b8
	ctx.lr = 0x82229E5C;
	sub_821601B8(ctx, base);
loc_82229E5C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82229E68"))) PPC_WEAK_FUNC(sub_82229E68);
PPC_FUNC_IMPL(__imp__sub_82229E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82229E70;
	__savegprlr_29(ctx, base);
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
	// bl 0x82228df0
	ctx.lr = 0x82229E84;
	sub_82228DF0(ctx, base);
	// rlwinm r11,r30,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82229ed4
	if (ctx.cr6.eq) goto loc_82229ED4;
	// addi r11,r31,1240
	ctx.r11.s64 = ctx.r31.s64 + 1240;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x82229EB8;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1416
	ctx.r3.s64 = ctx.r31.s64 + 1416;
	// bl 0x8221f3c8
	ctx.lr = 0x82229EC4;
	sub_8221F3C8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82229ed4
	if (ctx.cr6.eq) goto loc_82229ED4;
	// bl 0x821601b8
	ctx.lr = 0x82229ED4;
	sub_821601B8(ctx, base);
loc_82229ED4:
	// rlwinm r11,r29,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82229ef8
	if (ctx.cr6.eq) goto loc_82229EF8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,1416
	ctx.r3.s64 = ctx.r31.s64 + 1416;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8221f3c8
	ctx.lr = 0x82229EF8;
	sub_8221F3C8(ctx, base);
loc_82229EF8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82229F00"))) PPC_WEAK_FUNC(sub_82229F00);
PPC_FUNC_IMPL(__imp__sub_82229F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x82229F08;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82228f28
	ctx.lr = 0x82229F14;
	sub_82228F28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r27,r31,44
	ctx.r27.s64 = ctx.r31.s64 + 44;
	// addi r11,r11,-14348
	ctx.r11.s64 = ctx.r11.s64 + -14348;
	// addi r10,r10,-14428
	ctx.r10.s64 = ctx.r10.s64 + -14428;
	// addi r9,r9,-14440
	ctx.r9.s64 = ctx.r9.s64 + -14440;
	// addi r29,r31,1216
	ctx.r29.s64 = ctx.r31.s64 + 1216;
	// li r30,7
	ctx.r30.s64 = 7;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
loc_82229F48:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82224b88
	ctx.lr = 0x82229F50;
	sub_82224B88(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r28,r28,28
	ctx.r28.s64 = ctx.r28.s64 + 28;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82229f48
	if (!ctx.cr6.lt) goto loc_82229F48;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// li r26,15
	ctx.r26.s64 = 15;
	// addi r25,r11,15616
	ctx.r25.s64 = ctx.r11.s64 + 15616;
	// stw r30,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r30.u32);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// stw r30,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r30.u32);
	// stw r30,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r30.u32);
	// stw r30,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r30.u32);
loc_82229F84:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82229F9C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82229f9c
	if (!ctx.cr6.eq) goto loc_82229F9C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82229FC0;
	sub_82161E08(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82225a18
	ctx.lr = 0x82229FD0;
	sub_82225A18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82229FE0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82229fe0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82229FE0;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8222a008
	if (ctx.cr6.lt) goto loc_8222A008;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x8222A008;
	sub_82186190(ctx, base);
loc_8222A008:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// addi r11,r25,32
	ctx.r11.s64 = ctx.r25.s64 + 32;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82229f84
	if (!ctx.cr6.eq) goto loc_82229F84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222A038"))) PPC_WEAK_FUNC(sub_8222A038);
PPC_FUNC_IMPL(__imp__sub_8222A038) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x8222a048
	sub_8222A048(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222A040"))) PPC_WEAK_FUNC(sub_8222A040);
PPC_FUNC_IMPL(__imp__sub_8222A040) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-44
	ctx.r3.s64 = ctx.r3.s64 + -44;
	// b 0x8222a048
	sub_8222A048(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222A048"))) PPC_WEAK_FUNC(sub_8222A048);
PPC_FUNC_IMPL(__imp__sub_8222A048) {
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
	// lwz r3,1452(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222a074
	if (ctx.cr6.eq) goto loc_8222A074;
	// bl 0x821601b8
	ctx.lr = 0x8222A074;
	sub_821601B8(ctx, base);
loc_8222A074:
	// lwz r3,1444(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222a084
	if (ctx.cr6.eq) goto loc_8222A084;
	// bl 0x821601b8
	ctx.lr = 0x8222A084;
	sub_821601B8(ctx, base);
loc_8222A084:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82223530
	ctx.lr = 0x8222A08C;
	sub_82223530(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222a0a4
	if (ctx.cr6.eq) goto loc_8222A0A4;
	// bl 0x82186190
	ctx.lr = 0x8222A0A0;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8222A0A4:
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

__attribute__((alias("__imp__sub_8222A0C0"))) PPC_WEAK_FUNC(sub_8222A0C0);
PPC_FUNC_IMPL(__imp__sub_8222A0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8222A0C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82228a18
	ctx.lr = 0x8222A0D8;
	sub_82228A18(ctx, base);
	// addi r30,r31,1328
	ctx.r30.s64 = ctx.r31.s64 + 1328;
	// li r29,2
	ctx.r29.s64 = 2;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8222A0E4:
	// stw r28,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r28.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222a0f8
	if (ctx.cr6.eq) goto loc_8222A0F8;
	// bl 0x821601b8
	ctx.lr = 0x8222A0F8;
	sub_821601B8(ctx, base);
loc_8222A0F8:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8222a0e4
	if (!ctx.cr6.eq) goto loc_8222A0E4;
	// addi r11,r27,-14
	ctx.r11.s64 = ctx.r27.s64 + -14;
	// cmplwi cr6,r11,160
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 160, ctx.xer);
	// bgt cr6,0x8222a508
	if (ctx.cr6.gt) goto loc_8222A508;
	// lis r12,-32221
	ctx.r12.s64 = -2111635456;
	// addi r12,r12,-24272
	ctx.r12.s64 = ctx.r12.s64 + -24272;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8222A3B4;
	case 1:
		goto loc_8222A508;
	case 2:
		goto loc_8222A508;
	case 3:
		goto loc_8222A508;
	case 4:
		goto loc_8222A508;
	case 5:
		goto loc_8222A508;
	case 6:
		goto loc_8222A508;
	case 7:
		goto loc_8222A508;
	case 8:
		goto loc_8222A508;
	case 9:
		goto loc_8222A508;
	case 10:
		goto loc_8222A508;
	case 11:
		goto loc_8222A508;
	case 12:
		goto loc_8222A508;
	case 13:
		goto loc_8222A508;
	case 14:
		goto loc_8222A508;
	case 15:
		goto loc_8222A508;
	case 16:
		goto loc_8222A508;
	case 17:
		goto loc_8222A508;
	case 18:
		goto loc_8222A508;
	case 19:
		goto loc_8222A508;
	case 20:
		goto loc_8222A508;
	case 21:
		goto loc_8222A508;
	case 22:
		goto loc_8222A508;
	case 23:
		goto loc_8222A508;
	case 24:
		goto loc_8222A508;
	case 25:
		goto loc_8222A508;
	case 26:
		goto loc_8222A508;
	case 27:
		goto loc_8222A508;
	case 28:
		goto loc_8222A508;
	case 29:
		goto loc_8222A508;
	case 30:
		goto loc_8222A508;
	case 31:
		goto loc_8222A508;
	case 32:
		goto loc_8222A508;
	case 33:
		goto loc_8222A508;
	case 34:
		goto loc_8222A508;
	case 35:
		goto loc_8222A508;
	case 36:
		goto loc_8222A508;
	case 37:
		goto loc_8222A508;
	case 38:
		goto loc_8222A508;
	case 39:
		goto loc_8222A508;
	case 40:
		goto loc_8222A508;
	case 41:
		goto loc_8222A508;
	case 42:
		goto loc_8222A508;
	case 43:
		goto loc_8222A508;
	case 44:
		goto loc_8222A508;
	case 45:
		goto loc_8222A508;
	case 46:
		goto loc_8222A508;
	case 47:
		goto loc_8222A508;
	case 48:
		goto loc_8222A508;
	case 49:
		goto loc_8222A508;
	case 50:
		goto loc_8222A508;
	case 51:
		goto loc_8222A508;
	case 52:
		goto loc_8222A508;
	case 53:
		goto loc_8222A508;
	case 54:
		goto loc_8222A508;
	case 55:
		goto loc_8222A508;
	case 56:
		goto loc_8222A508;
	case 57:
		goto loc_8222A508;
	case 58:
		goto loc_8222A508;
	case 59:
		goto loc_8222A508;
	case 60:
		goto loc_8222A508;
	case 61:
		goto loc_8222A508;
	case 62:
		goto loc_8222A508;
	case 63:
		goto loc_8222A508;
	case 64:
		goto loc_8222A508;
	case 65:
		goto loc_8222A508;
	case 66:
		goto loc_8222A508;
	case 67:
		goto loc_8222A508;
	case 68:
		goto loc_8222A508;
	case 69:
		goto loc_8222A508;
	case 70:
		goto loc_8222A508;
	case 71:
		goto loc_8222A508;
	case 72:
		goto loc_8222A508;
	case 73:
		goto loc_8222A508;
	case 74:
		goto loc_8222A508;
	case 75:
		goto loc_8222A508;
	case 76:
		goto loc_8222A508;
	case 77:
		goto loc_8222A508;
	case 78:
		goto loc_8222A508;
	case 79:
		goto loc_8222A508;
	case 80:
		goto loc_8222A508;
	case 81:
		goto loc_8222A508;
	case 82:
		goto loc_8222A508;
	case 83:
		goto loc_8222A508;
	case 84:
		goto loc_8222A508;
	case 85:
		goto loc_8222A508;
	case 86:
		goto loc_8222A508;
	case 87:
		goto loc_8222A508;
	case 88:
		goto loc_8222A508;
	case 89:
		goto loc_8222A508;
	case 90:
		goto loc_8222A508;
	case 91:
		goto loc_8222A508;
	case 92:
		goto loc_8222A508;
	case 93:
		goto loc_8222A508;
	case 94:
		goto loc_8222A508;
	case 95:
		goto loc_8222A508;
	case 96:
		goto loc_8222A508;
	case 97:
		goto loc_8222A508;
	case 98:
		goto loc_8222A508;
	case 99:
		goto loc_8222A508;
	case 100:
		goto loc_8222A508;
	case 101:
		goto loc_8222A508;
	case 102:
		goto loc_8222A508;
	case 103:
		goto loc_8222A508;
	case 104:
		goto loc_8222A508;
	case 105:
		goto loc_8222A508;
	case 106:
		goto loc_8222A508;
	case 107:
		goto loc_8222A508;
	case 108:
		goto loc_8222A508;
	case 109:
		goto loc_8222A508;
	case 110:
		goto loc_8222A508;
	case 111:
		goto loc_8222A508;
	case 112:
		goto loc_8222A508;
	case 113:
		goto loc_8222A508;
	case 114:
		goto loc_8222A508;
	case 115:
		goto loc_8222A508;
	case 116:
		goto loc_8222A508;
	case 117:
		goto loc_8222A508;
	case 118:
		goto loc_8222A508;
	case 119:
		goto loc_8222A508;
	case 120:
		goto loc_8222A508;
	case 121:
		goto loc_8222A508;
	case 122:
		goto loc_8222A508;
	case 123:
		goto loc_8222A508;
	case 124:
		goto loc_8222A508;
	case 125:
		goto loc_8222A508;
	case 126:
		goto loc_8222A508;
	case 127:
		goto loc_8222A508;
	case 128:
		goto loc_8222A508;
	case 129:
		goto loc_8222A508;
	case 130:
		goto loc_8222A508;
	case 131:
		goto loc_8222A508;
	case 132:
		goto loc_8222A508;
	case 133:
		goto loc_8222A508;
	case 134:
		goto loc_8222A508;
	case 135:
		goto loc_8222A508;
	case 136:
		goto loc_8222A508;
	case 137:
		goto loc_8222A508;
	case 138:
		goto loc_8222A508;
	case 139:
		goto loc_8222A508;
	case 140:
		goto loc_8222A508;
	case 141:
		goto loc_8222A508;
	case 142:
		goto loc_8222A508;
	case 143:
		goto loc_8222A508;
	case 144:
		goto loc_8222A508;
	case 145:
		goto loc_8222A508;
	case 146:
		goto loc_8222A508;
	case 147:
		goto loc_8222A508;
	case 148:
		goto loc_8222A508;
	case 149:
		goto loc_8222A508;
	case 150:
		goto loc_8222A508;
	case 151:
		goto loc_8222A508;
	case 152:
		goto loc_8222A508;
	case 153:
		goto loc_8222A508;
	case 154:
		goto loc_8222A508;
	case 155:
		goto loc_8222A44C;
	case 156:
		goto loc_8222A508;
	case 157:
		goto loc_8222A508;
	case 158:
		goto loc_8222A508;
	case 159:
		goto loc_8222A498;
	case 160:
		goto loc_8222A4E4;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-23628(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23628);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23476(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23476);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23288(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23288);
	// lwz r17,-23400(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23400);
	// lwz r17,-23324(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -23324);
loc_8222A3B4:
	// addi r11,r31,1212
	ctx.r11.s64 = ctx.r31.s64 + 1212;
	// addi r30,r31,1160
	ctx.r30.s64 = ctx.r31.s64 + 1160;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x8222A3E4;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1324
	ctx.r3.s64 = ctx.r31.s64 + 1324;
	// bl 0x8221f3c8
	ctx.lr = 0x8222A3F0;
	sub_8221F3C8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222a400
	if (ctx.cr6.eq) goto loc_8222A400;
	// bl 0x821601b8
	ctx.lr = 0x8222A400;
	sub_821601B8(ctx, base);
loc_8222A400:
	// addi r11,r31,1184
	ctx.r11.s64 = ctx.r31.s64 + 1184;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x8222A428;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1332
	ctx.r3.s64 = ctx.r31.s64 + 1332;
	// bl 0x8221f3c8
	ctx.lr = 0x8222A434;
	sub_8221F3C8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222a508
	if (ctx.cr6.eq) goto loc_8222A508;
	// bl 0x821601b8
	ctx.lr = 0x8222A444;
	sub_821601B8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_8222A44C:
	// addi r11,r31,1240
	ctx.r11.s64 = ctx.r31.s64 + 1240;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x8222A474;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1324
	ctx.r3.s64 = ctx.r31.s64 + 1324;
	// bl 0x8221f3c8
	ctx.lr = 0x8222A480;
	sub_8221F3C8(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222a508
	if (ctx.cr6.eq) goto loc_8222A508;
	// bl 0x821601b8
	ctx.lr = 0x8222A490;
	sub_821601B8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_8222A498:
	// addi r11,r31,1268
	ctx.r11.s64 = ctx.r31.s64 + 1268;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x8222A4C0;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1324
	ctx.r3.s64 = ctx.r31.s64 + 1324;
	// bl 0x8221f3c8
	ctx.lr = 0x8222A4CC;
	sub_8221F3C8(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222a508
	if (ctx.cr6.eq) goto loc_8222A508;
	// bl 0x821601b8
	ctx.lr = 0x8222A4DC;
	sub_821601B8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_8222A4E4:
	// addi r11,r31,1296
	ctx.r11.s64 = ctx.r31.s64 + 1296;
	// addi r8,r31,1160
	ctx.r8.s64 = ctx.r31.s64 + 1160;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225340
	ctx.lr = 0x8222A508;
	sub_82225340(ctx, base);
loc_8222A508:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222A510"))) PPC_WEAK_FUNC(sub_8222A510);
PPC_FUNC_IMPL(__imp__sub_8222A510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x8222A518;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82228f28
	ctx.lr = 0x8222A524;
	sub_82228F28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r27,r28,44
	ctx.r27.s64 = ctx.r28.s64 + 44;
	// addi r11,r11,-14220
	ctx.r11.s64 = ctx.r11.s64 + -14220;
	// addi r10,r10,-14300
	ctx.r10.s64 = ctx.r10.s64 + -14300;
	// addi r9,r9,-14312
	ctx.r9.s64 = ctx.r9.s64 + -14312;
	// addi r29,r28,1216
	ctx.r29.s64 = ctx.r28.s64 + 1216;
	// li r31,4
	ctx.r31.s64 = 4;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r10,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r10.u32);
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
loc_8222A558:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82224b88
	ctx.lr = 0x8222A560;
	sub_82224B88(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x8222a558
	if (!ctx.cr6.lt) goto loc_8222A558;
	// addi r11,r28,1356
	ctx.r11.s64 = ctx.r28.s64 + 1356;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8222A57C:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x8222a57c
	if (!ctx.cr6.lt) goto loc_8222A57C;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// addi r25,r11,15700
	ctx.r25.s64 = ctx.r11.s64 + 15700;
	// li r26,15
	ctx.r26.s64 = 15;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_8222A5A8:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8222A5C0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8222a5c0
	if (!ctx.cr6.eq) goto loc_8222A5C0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x8222A5E4;
	sub_82161E08(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82225a18
	ctx.lr = 0x8222A5F4;
	sub_82225A18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8222A604:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8222a604
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222A604;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8222a62c
	if (ctx.cr6.lt) goto loc_8222A62C;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x8222A62C;
	sub_82186190(ctx, base);
loc_8222A62C:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// addi r11,r25,20
	ctx.r11.s64 = ctx.r25.s64 + 20;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8222a5a8
	if (!ctx.cr6.eq) goto loc_8222A5A8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222A658"))) PPC_WEAK_FUNC(sub_8222A658);
PPC_FUNC_IMPL(__imp__sub_8222A658) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-44
	ctx.r3.s64 = ctx.r3.s64 + -44;
	// b 0x8222a708
	sub_8222A708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222A660"))) PPC_WEAK_FUNC(sub_8222A660);
PPC_FUNC_IMPL(__imp__sub_8222A660) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x8222a708
	sub_8222A708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222A668"))) PPC_WEAK_FUNC(sub_8222A668);
PPC_FUNC_IMPL(__imp__sub_8222A668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8222A670;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r11,r28,1372
	ctx.r11.s64 = ctx.r28.s64 + 1372;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
loc_8222A684:
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8222a6ec
	if (ctx.cr6.eq) goto loc_8222A6EC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq 0x8222a6b4
	if (ctx.cr0.eq) goto loc_8222A6B4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8222a6ec
	goto loc_8222A6EC;
loc_8222A6B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222A6C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne 0x8222a6ec
	if (!ctx.cr0.eq) goto loc_8222A6EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222A6EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222A6EC:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x8222a684
	if (!ctx.cr6.lt) goto loc_8222A684;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82223530
	ctx.lr = 0x8222A700;
	sub_82223530(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222A708"))) PPC_WEAK_FUNC(sub_8222A708);
PPC_FUNC_IMPL(__imp__sub_8222A708) {
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
	// bl 0x8222a668
	ctx.lr = 0x8222A728;
	sub_8222A668(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222a740
	if (ctx.cr6.eq) goto loc_8222A740;
	// bl 0x82186190
	ctx.lr = 0x8222A73C;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8222A740:
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

__attribute__((alias("__imp__sub_8222A758"))) PPC_WEAK_FUNC(sub_8222A758);
PPC_FUNC_IMPL(__imp__sub_8222A758) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r3,1500
	ctx.r11.s64 = ctx.r3.s64 + 1500;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x821600c0
	sub_821600C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222A770"))) PPC_WEAK_FUNC(sub_8222A770);
PPC_FUNC_IMPL(__imp__sub_8222A770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8222A778;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82228a18
	ctx.lr = 0x8222A788;
	sub_82228A18(ctx, base);
	// lwz r11,1520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1520);
	// addi r11,r11,-54
	ctx.r11.s64 = ctx.r11.s64 + -54;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8222a7f0
	if (ctx.cr6.gt) goto loc_8222A7F0;
	// lis r12,-32221
	ctx.r12.s64 = -2111635456;
	// addi r12,r12,-22608
	ctx.r12.s64 = ctx.r12.s64 + -22608;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8222A7C4;
	case 1:
		goto loc_8222A7C4;
	case 2:
		goto loc_8222A7C4;
	case 3:
		goto loc_8222A7CC;
	case 4:
		goto loc_8222A7CC;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-22588(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22588);
	// lwz r17,-22588(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22588);
	// lwz r17,-22588(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22588);
	// lwz r17,-22580(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22580);
	// lwz r17,-22580(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22580);
loc_8222A7C4:
	// addi r11,r31,1440
	ctx.r11.s64 = ctx.r31.s64 + 1440;
	// b 0x8222a7d0
	goto loc_8222A7D0;
loc_8222A7CC:
	// addi r11,r31,1412
	ctx.r11.s64 = ctx.r31.s64 + 1412;
loc_8222A7D0:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r8,r31,1160
	ctx.r8.s64 = ctx.r31.s64 + 1160;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82225340
	ctx.lr = 0x8222A7F0;
	sub_82225340(ctx, base);
loc_8222A7F0:
	// addi r11,r28,-35
	ctx.r11.s64 = ctx.r28.s64 + -35;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bgt cr6,0x8222a89c
	if (ctx.cr6.gt) goto loc_8222A89C;
	// lis r12,-32221
	ctx.r12.s64 = -2111635456;
	// addi r12,r12,-22508
	ctx.r12.s64 = ctx.r12.s64 + -22508;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8222A860;
	case 1:
		goto loc_8222A860;
	case 2:
		goto loc_8222A89C;
	case 3:
		goto loc_8222A89C;
	case 4:
		goto loc_8222A89C;
	case 5:
		goto loc_8222A89C;
	case 6:
		goto loc_8222A89C;
	case 7:
		goto loc_8222A89C;
	case 8:
		goto loc_8222A89C;
	case 9:
		goto loc_8222A89C;
	case 10:
		goto loc_8222A868;
	case 11:
		goto loc_8222A870;
	case 12:
		goto loc_8222A89C;
	case 13:
		goto loc_8222A878;
	case 14:
		goto loc_8222A89C;
	case 15:
		goto loc_8222A868;
	case 16:
		goto loc_8222A89C;
	case 17:
		goto loc_8222A870;
	case 18:
		goto loc_8222A878;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-22432(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22432);
	// lwz r17,-22432(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22432);
	// lwz r17,-22372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22372);
	// lwz r17,-22372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22372);
	// lwz r17,-22372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22372);
	// lwz r17,-22372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22372);
	// lwz r17,-22372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22372);
	// lwz r17,-22372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22372);
	// lwz r17,-22372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22372);
	// lwz r17,-22372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22372);
	// lwz r17,-22424(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22424);
	// lwz r17,-22416(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22416);
	// lwz r17,-22372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22372);
	// lwz r17,-22408(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22408);
	// lwz r17,-22372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22372);
	// lwz r17,-22424(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22424);
	// lwz r17,-22372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22372);
	// lwz r17,-22416(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22416);
	// lwz r17,-22408(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22408);
loc_8222A860:
	// addi r11,r31,1188
	ctx.r11.s64 = ctx.r31.s64 + 1188;
	// b 0x8222a87c
	goto loc_8222A87C;
loc_8222A868:
	// addi r11,r31,1244
	ctx.r11.s64 = ctx.r31.s64 + 1244;
	// b 0x8222a87c
	goto loc_8222A87C;
loc_8222A870:
	// addi r11,r31,1272
	ctx.r11.s64 = ctx.r31.s64 + 1272;
	// b 0x8222a87c
	goto loc_8222A87C;
loc_8222A878:
	// addi r11,r31,1300
	ctx.r11.s64 = ctx.r31.s64 + 1300;
loc_8222A87C:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r8,r31,1160
	ctx.r8.s64 = ctx.r31.s64 + 1160;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82225340
	ctx.lr = 0x8222A89C;
	sub_82225340(ctx, base);
loc_8222A89C:
	// addi r11,r28,-42
	ctx.r11.s64 = ctx.r28.s64 + -42;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// bgt cr6,0x8222a978
	if (ctx.cr6.gt) goto loc_8222A978;
	// lis r12,-32221
	ctx.r12.s64 = -2111635456;
	// addi r12,r12,-22332
	ctx.r12.s64 = ctx.r12.s64 + -22332;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8222A930;
	case 1:
		goto loc_8222A930;
	case 2:
		goto loc_8222A978;
	case 3:
		goto loc_8222A978;
	case 4:
		goto loc_8222A978;
	case 5:
		goto loc_8222A978;
	case 6:
		goto loc_8222A978;
	case 7:
		goto loc_8222A978;
	case 8:
		goto loc_8222A978;
	case 9:
		goto loc_8222A978;
	case 10:
		goto loc_8222A978;
	case 11:
		goto loc_8222A978;
	case 12:
		goto loc_8222A978;
	case 13:
		goto loc_8222A978;
	case 14:
		goto loc_8222A978;
	case 15:
		goto loc_8222A978;
	case 16:
		goto loc_8222A978;
	case 17:
		goto loc_8222A978;
	case 18:
		goto loc_8222A978;
	case 19:
		goto loc_8222A978;
	case 20:
		goto loc_8222A930;
	case 21:
		goto loc_8222A930;
	case 22:
		goto loc_8222A930;
	case 23:
		goto loc_8222A930;
	case 24:
		goto loc_8222A930;
	case 25:
		goto loc_8222A930;
	case 26:
		goto loc_8222A930;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-22224(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22224);
	// lwz r17,-22224(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22224);
	// lwz r17,-22152(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22152);
	// lwz r17,-22152(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22152);
	// lwz r17,-22152(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22152);
	// lwz r17,-22152(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22152);
	// lwz r17,-22152(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22152);
	// lwz r17,-22152(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22152);
	// lwz r17,-22152(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22152);
	// lwz r17,-22152(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22152);
	// lwz r17,-22152(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22152);
	// lwz r17,-22152(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22152);
	// lwz r17,-22152(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22152);
	// lwz r17,-22152(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22152);
	// lwz r17,-22152(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22152);
	// lwz r17,-22152(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22152);
	// lwz r17,-22152(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22152);
	// lwz r17,-22152(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22152);
	// lwz r17,-22152(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22152);
	// lwz r17,-22152(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22152);
	// lwz r17,-22224(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22224);
	// lwz r17,-22224(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22224);
	// lwz r17,-22224(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22224);
	// lwz r17,-22224(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22224);
	// lwz r17,-22224(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22224);
	// lwz r17,-22224(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22224);
	// lwz r17,-22224(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + -22224);
loc_8222A930:
	// addi r11,r31,1328
	ctx.r11.s64 = ctx.r31.s64 + 1328;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x8222A958;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1476
	ctx.r3.s64 = ctx.r31.s64 + 1476;
	// bl 0x8221f3c8
	ctx.lr = 0x8222A964;
	sub_8221F3C8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222a994
	if (ctx.cr6.eq) goto loc_8222A994;
	// bl 0x821601b8
	ctx.lr = 0x8222A974;
	sub_821601B8(ctx, base);
	// b 0x8222a994
	goto loc_8222A994;
loc_8222A978:
	// addi r30,r31,1476
	ctx.r30.s64 = ctx.r31.s64 + 1476;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222a990
	if (ctx.cr6.eq) goto loc_8222A990;
	// bl 0x821601b8
	ctx.lr = 0x8222A990;
	sub_821601B8(ctx, base);
loc_8222A990:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
loc_8222A994:
	// cmpwi cr6,r28,39
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 39, ctx.xer);
	// blt cr6,0x8222a9ec
	if (ctx.cr6.lt) goto loc_8222A9EC;
	// cmpwi cr6,r28,40
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 40, ctx.xer);
	// bgt cr6,0x8222a9ec
	if (ctx.cr6.gt) goto loc_8222A9EC;
	// addi r11,r31,1356
	ctx.r11.s64 = ctx.r31.s64 + 1356;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x8222A9CC;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1484
	ctx.r3.s64 = ctx.r31.s64 + 1484;
	// bl 0x8221f3c8
	ctx.lr = 0x8222A9D8;
	sub_8221F3C8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222aa08
	if (ctx.cr6.eq) goto loc_8222AA08;
	// bl 0x821601b8
	ctx.lr = 0x8222A9E8;
	sub_821601B8(ctx, base);
	// b 0x8222aa08
	goto loc_8222AA08;
loc_8222A9EC:
	// addi r30,r31,1484
	ctx.r30.s64 = ctx.r31.s64 + 1484;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222aa04
	if (ctx.cr6.eq) goto loc_8222AA04;
	// bl 0x821601b8
	ctx.lr = 0x8222AA04;
	sub_821601B8(ctx, base);
loc_8222AA04:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
loc_8222AA08:
	// cmpwi cr6,r28,32
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 32, ctx.xer);
	// blt cr6,0x8222aa68
	if (ctx.cr6.lt) goto loc_8222AA68;
	// cmpwi cr6,r28,34
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 34, ctx.xer);
	// bgt cr6,0x8222aa68
	if (ctx.cr6.gt) goto loc_8222AA68;
	// addi r11,r31,1384
	ctx.r11.s64 = ctx.r31.s64 + 1384;
	// addi r9,r31,1160
	ctx.r9.s64 = ctx.r31.s64 + 1160;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x8222AA40;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1492
	ctx.r3.s64 = ctx.r31.s64 + 1492;
	// bl 0x8221f3c8
	ctx.lr = 0x8222AA4C;
	sub_8221F3C8(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222aa84
	if (ctx.cr6.eq) goto loc_8222AA84;
	// bl 0x821601b8
	ctx.lr = 0x8222AA5C;
	sub_821601B8(ctx, base);
	// stw r28,1520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1520, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_8222AA68:
	// addi r30,r31,1492
	ctx.r30.s64 = ctx.r31.s64 + 1492;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222aa80
	if (ctx.cr6.eq) goto loc_8222AA80;
	// bl 0x821601b8
	ctx.lr = 0x8222AA80;
	sub_821601B8(ctx, base);
loc_8222AA80:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
loc_8222AA84:
	// stw r28,1520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1520, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222AA90"))) PPC_WEAK_FUNC(sub_8222AA90);
PPC_FUNC_IMPL(__imp__sub_8222AA90) {
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
	// addi r4,r31,1532
	ctx.r4.s64 = ctx.r31.s64 + 1532;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8219fbb8
	ctx.lr = 0x8222AAB8;
	sub_8219FBB8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222aafc
	if (ctx.cr6.eq) goto loc_8222AAFC;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222aafc
	if (ctx.cr6.eq) goto loc_8222AAFC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// lfs f1,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222AAFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222AAFC:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222ab0c
	if (ctx.cr6.eq) goto loc_8222AB0C;
	// bl 0x821601b8
	ctx.lr = 0x8222AB0C;
	sub_821601B8(ctx, base);
loc_8222AB0C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222ab60
	if (ctx.cr6.eq) goto loc_8222AB60;
	// addi r11,r31,1248
	ctx.r11.s64 = ctx.r31.s64 + 1248;
	// addi r9,r31,1192
	ctx.r9.s64 = ctx.r31.s64 + 1192;
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82225bd8
	ctx.lr = 0x8222AB40;
	sub_82225BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1500
	ctx.r3.s64 = ctx.r31.s64 + 1500;
	// bl 0x8221f3c8
	ctx.lr = 0x8222AB4C;
	sub_8221F3C8(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222ab78
	if (ctx.cr6.eq) goto loc_8222AB78;
	// bl 0x821601b8
	ctx.lr = 0x8222AB5C;
	sub_821601B8(ctx, base);
	// b 0x8222ab78
	goto loc_8222AB78;
loc_8222AB60:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r31,1500
	ctx.r3.s64 = ctx.r31.s64 + 1500;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x8221f3c8
	ctx.lr = 0x8222AB78;
	sub_8221F3C8(ctx, base);
loc_8222AB78:
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

__attribute__((alias("__imp__sub_8222AB90"))) PPC_WEAK_FUNC(sub_8222AB90);
PPC_FUNC_IMPL(__imp__sub_8222AB90) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222ac4c
	if (ctx.cr6.eq) goto loc_8222AC4C;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222ac4c
	if (ctx.cr6.eq) goto loc_8222AC4C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8222abd8
	if (ctx.cr6.lt) goto loc_8222ABD8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8222abdc
	goto loc_8222ABDC;
loc_8222ABD8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8222ABDC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222ac4c
	if (ctx.cr6.eq) goto loc_8222AC4C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,13988
	ctx.r10.s64 = ctx.r10.s64 + 13988;
loc_8222ABEC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8222ac10
	if (ctx.cr6.eq) goto loc_8222AC10;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8222abec
	if (ctx.cr6.eq) goto loc_8222ABEC;
loc_8222AC10:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8222ac4c
	if (!ctx.cr6.eq) goto loc_8222AC4C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8221d210
	ctx.lr = 0x8222AC30;
	sub_8221D210(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r31,324
	ctx.r3.s64 = ctx.r31.s64 + 324;
	// bl 0x8221f3c8
	ctx.lr = 0x8222AC3C;
	sub_8221F3C8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222ac4c
	if (ctx.cr6.eq) goto loc_8222AC4C;
	// bl 0x821601b8
	ctx.lr = 0x8222AC4C;
	sub_821601B8(ctx, base);
loc_8222AC4C:
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

__attribute__((alias("__imp__sub_8222AC60"))) PPC_WEAK_FUNC(sub_8222AC60);
PPC_FUNC_IMPL(__imp__sub_8222AC60) {
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
	// bl 0x82228728
	ctx.lr = 0x8222AC78;
	sub_82228728(ctx, base);
	// lwz r3,1508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1508);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222acc4
	if (ctx.cr6.eq) goto loc_8222ACC4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222acc4
	if (ctx.cr6.eq) goto loc_8222ACC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222ACA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lbz r10,1516(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1516);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222acc4
	if (ctx.cr6.eq) goto loc_8222ACC4;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// stb r4,1516(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1516, ctx.r4.u8);
	// bl 0x8222aa90
	ctx.lr = 0x8222ACC4;
	sub_8222AA90(ctx, base);
loc_8222ACC4:
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

__attribute__((alias("__imp__sub_8222ACD8"))) PPC_WEAK_FUNC(sub_8222ACD8);
PPC_FUNC_IMPL(__imp__sub_8222ACD8) {
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
	// rlwinm r11,r4,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x100000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222ad0c
	if (ctx.cr6.eq) goto loc_8222AD0C;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// bl 0x8222aa90
	ctx.lr = 0x8222AD0C;
	sub_8222AA90(ctx, base);
loc_8222AD0C:
	// rlwinm r11,r30,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222ad24
	if (ctx.cr6.eq) goto loc_8222AD24;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// bl 0x8222aa90
	ctx.lr = 0x8222AD24;
	sub_8222AA90(ctx, base);
loc_8222AD24:
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

__attribute__((alias("__imp__sub_8222AD40"))) PPC_WEAK_FUNC(sub_8222AD40);
PPC_FUNC_IMPL(__imp__sub_8222AD40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x8222AD48;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82228f28
	ctx.lr = 0x8222AD54;
	sub_82228F28(ctx, base);
	// addi r30,r31,1216
	ctx.r30.s64 = ctx.r31.s64 + 1216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221ed78
	ctx.lr = 0x8222AD60;
	sub_8221ED78(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r8,-14052
	ctx.r8.s64 = ctx.r8.s64 + -14052;
	// addi r27,r31,44
	ctx.r27.s64 = ctx.r31.s64 + 44;
	// addi r11,r11,-14060
	ctx.r11.s64 = ctx.r11.s64 + -14060;
	// addi r10,r10,-14140
	ctx.r10.s64 = ctx.r10.s64 + -14140;
	// addi r9,r9,-14148
	ctx.r9.s64 = ctx.r9.s64 + -14148;
	// addi r29,r31,1220
	ctx.r29.s64 = ctx.r31.s64 + 1220;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// li r28,9
	ctx.r28.s64 = 9;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
loc_8222ADA0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82224b88
	ctx.lr = 0x8222ADA8;
	sub_82224B88(ctx, base);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge cr6,0x8222ada0
	if (!ctx.cr6.lt) goto loc_8222ADA0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// li r26,15
	ctx.r26.s64 = 15;
	// addi r25,r11,15764
	ctx.r25.s64 = ctx.r11.s64 + 15764;
	// stw r30,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r30.u32);
	// stw r30,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r30.u32);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// stw r30,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r30.u32);
	// stw r30,1512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1512, ctx.r30.u32);
	// stw r30,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r30.u32);
	// stw r30,1520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1520, ctx.r30.u32);
	// stw r30,1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1524, ctx.r30.u32);
	// stw r30,1528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1528, ctx.r30.u32);
	// stw r30,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r30.u32);
	// stw r30,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r30.u32);
	// stw r30,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r30.u32);
	// stw r30,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r30.u32);
	// stb r30,1548(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1548, ctx.r30.u8);
	// stw r10,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r10.u32);
loc_8222AE08:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8222AE20:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8222ae20
	if (!ctx.cr6.eq) goto loc_8222AE20;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x8222AE44;
	sub_82161E08(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82225a18
	ctx.lr = 0x8222AE54;
	sub_82225A18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8222AE64:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8222ae64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222AE64;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8222ae8c
	if (ctx.cr6.lt) goto loc_8222AE8C;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x8222AE8C;
	sub_82186190(ctx, base);
loc_8222AE8C:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// addi r11,r25,40
	ctx.r11.s64 = ctx.r25.s64 + 40;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8222ae08
	if (!ctx.cr6.eq) goto loc_8222AE08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222AEB8"))) PPC_WEAK_FUNC(sub_8222AEB8);
PPC_FUNC_IMPL(__imp__sub_8222AEB8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-1216
	ctx.r3.s64 = ctx.r3.s64 + -1216;
	// b 0x8222af90
	sub_8222AF90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222AEC0"))) PPC_WEAK_FUNC(sub_8222AEC0);
PPC_FUNC_IMPL(__imp__sub_8222AEC0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-44
	ctx.r3.s64 = ctx.r3.s64 + -44;
	// b 0x8222af90
	sub_8222AF90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222AEC8"))) PPC_WEAK_FUNC(sub_8222AEC8);
PPC_FUNC_IMPL(__imp__sub_8222AEC8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x8222af90
	sub_8222AF90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222AED0"))) PPC_WEAK_FUNC(sub_8222AED0);
PPC_FUNC_IMPL(__imp__sub_8222AED0) {
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
	// lwz r3,1544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222aef4
	if (ctx.cr6.eq) goto loc_8222AEF4;
	// bl 0x821601b8
	ctx.lr = 0x8222AEF4;
	sub_821601B8(ctx, base);
loc_8222AEF4:
	// lwz r3,1536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222af20
	if (ctx.cr6.eq) goto loc_8222AF20;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne 0x8222af20
	if (!ctx.cr0.eq) goto loc_8222AF20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222AF20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222AF20:
	// lwz r3,1528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1528);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222af30
	if (ctx.cr6.eq) goto loc_8222AF30;
	// bl 0x821601b8
	ctx.lr = 0x8222AF30;
	sub_821601B8(ctx, base);
loc_8222AF30:
	// lwz r3,1520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1520);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222af40
	if (ctx.cr6.eq) goto loc_8222AF40;
	// bl 0x821601b8
	ctx.lr = 0x8222AF40;
	sub_821601B8(ctx, base);
loc_8222AF40:
	// lwz r3,1512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1512);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222af50
	if (ctx.cr6.eq) goto loc_8222AF50;
	// bl 0x821601b8
	ctx.lr = 0x8222AF50;
	sub_821601B8(ctx, base);
loc_8222AF50:
	// lwz r3,1504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222af60
	if (ctx.cr6.eq) goto loc_8222AF60;
	// bl 0x821601b8
	ctx.lr = 0x8222AF60;
	sub_821601B8(ctx, base);
loc_8222AF60:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,1216
	ctx.r3.s64 = ctx.r31.s64 + 1216;
	// bne cr6,0x8222af70
	if (!ctx.cr6.eq) goto loc_8222AF70;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222AF70:
	// bl 0x8221ed78
	ctx.lr = 0x8222AF74;
	sub_8221ED78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82223530
	ctx.lr = 0x8222AF7C;
	sub_82223530(ctx, base);
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

__attribute__((alias("__imp__sub_8222AF90"))) PPC_WEAK_FUNC(sub_8222AF90);
PPC_FUNC_IMPL(__imp__sub_8222AF90) {
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
	// bl 0x8222aed0
	ctx.lr = 0x8222AFB0;
	sub_8222AED0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222afc8
	if (ctx.cr6.eq) goto loc_8222AFC8;
	// bl 0x82186190
	ctx.lr = 0x8222AFC4;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8222AFC8:
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

__attribute__((alias("__imp__sub_8222AFE0"))) PPC_WEAK_FUNC(sub_8222AFE0);
PPC_FUNC_IMPL(__imp__sub_8222AFE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x8222b03c
	if (!ctx.cr6.eq) goto loc_8222B03C;
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8222b01c
	if (ctx.cr6.gt) goto loc_8222B01C;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x8222b010
	if (ctx.cr6.gt) goto loc_8222B010;
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8222b034
	if (!ctx.cr6.gt) goto loc_8222B034;
loc_8222B010:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_8222B01C:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x8222b030
	if (!ctx.cr6.gt) goto loc_8222B030;
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// li r11,0
	ctx.r11.s64 = 0;
	// bgt cr6,0x8222b034
	if (ctx.cr6.gt) goto loc_8222B034;
loc_8222B030:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8222B034:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_8222B03C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B048"))) PPC_WEAK_FUNC(sub_8222B048);
PPC_FUNC_IMPL(__imp__sub_8222B048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8222B060"))) PPC_WEAK_FUNC(sub_8222B060);
PPC_FUNC_IMPL(__imp__sub_8222B060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x8222b0bc
	if (!ctx.cr6.eq) goto loc_8222B0BC;
	// lfs f0,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8222b09c
	if (ctx.cr6.gt) goto loc_8222B09C;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x8222b090
	if (ctx.cr6.gt) goto loc_8222B090;
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8222b0b4
	if (!ctx.cr6.gt) goto loc_8222B0B4;
loc_8222B090:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_8222B09C:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x8222b0b0
	if (!ctx.cr6.gt) goto loc_8222B0B0;
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// li r11,0
	ctx.r11.s64 = 0;
	// bgt cr6,0x8222b0b4
	if (ctx.cr6.gt) goto loc_8222B0B4;
loc_8222B0B0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8222B0B4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_8222B0BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B0C8"))) PPC_WEAK_FUNC(sub_8222B0C8);
PPC_FUNC_IMPL(__imp__sub_8222B0C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8222B0E0"))) PPC_WEAK_FUNC(sub_8222B0E0);
PPC_FUNC_IMPL(__imp__sub_8222B0E0) {
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
	// addi r11,r11,-13908
	ctx.r11.s64 = ctx.r11.s64 + -13908;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8222b114
	if (ctx.cr6.eq) goto loc_8222B114;
	// bl 0x82186190
	ctx.lr = 0x8222B110;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8222B114:
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

__attribute__((alias("__imp__sub_8222B128"))) PPC_WEAK_FUNC(sub_8222B128);
PPC_FUNC_IMPL(__imp__sub_8222B128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222b154
	if (ctx.cr6.eq) goto loc_8222B154;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222b154
	if (ctx.cr6.eq) goto loc_8222B154;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8222B154:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B160"))) PPC_WEAK_FUNC(sub_8222B160);
PPC_FUNC_IMPL(__imp__sub_8222B160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8222B168;
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222b1b0
	if (ctx.cr6.eq) goto loc_8222B1B0;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222b1b0
	if (ctx.cr6.eq) goto loc_8222B1B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B1A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8222b1b4
	goto loc_8222B1B4;
loc_8222B1B0:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8222B1B4:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222b1ec
	if (ctx.cr6.eq) goto loc_8222B1EC;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222b1ec
	if (ctx.cr6.eq) goto loc_8222B1EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B1E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8222b1f0
	goto loc_8222B1F0;
loc_8222B1EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222B1F0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// or r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 | ctx.r10.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222B208"))) PPC_WEAK_FUNC(sub_8222B208);
PPC_FUNC_IMPL(__imp__sub_8222B208) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222b238
	if (ctx.cr6.eq) goto loc_8222B238;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222b238
	if (ctx.cr6.eq) goto loc_8222B238;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8222B238:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
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
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8222B264"))) PPC_WEAK_FUNC(sub_8222B264);
PPC_FUNC_IMPL(__imp__sub_8222B264) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B268"))) PPC_WEAK_FUNC(sub_8222B268);
PPC_FUNC_IMPL(__imp__sub_8222B268) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222b298
	if (ctx.cr6.eq) goto loc_8222B298;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222b298
	if (ctx.cr6.eq) goto loc_8222B298;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8222B298:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
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
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8222B2C4"))) PPC_WEAK_FUNC(sub_8222B2C4);
PPC_FUNC_IMPL(__imp__sub_8222B2C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B2C8"))) PPC_WEAK_FUNC(sub_8222B2C8);
PPC_FUNC_IMPL(__imp__sub_8222B2C8) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222b2f8
	if (ctx.cr6.eq) goto loc_8222B2F8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222b2f8
	if (ctx.cr6.eq) goto loc_8222B2F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8222B2F8:
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
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
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8222B324"))) PPC_WEAK_FUNC(sub_8222B324);
PPC_FUNC_IMPL(__imp__sub_8222B324) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B328"))) PPC_WEAK_FUNC(sub_8222B328);
PPC_FUNC_IMPL(__imp__sub_8222B328) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222b354
	if (ctx.cr6.eq) goto loc_8222B354;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222b354
	if (ctx.cr6.eq) goto loc_8222B354;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8222B354:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222B360"))) PPC_WEAK_FUNC(sub_8222B360);
PPC_FUNC_IMPL(__imp__sub_8222B360) {
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
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8222b3a4
	if (ctx.cr6.eq) goto loc_8222B3A4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222b3a4
	if (ctx.cr6.eq) goto loc_8222B3A4;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B3A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8222b3ac
	goto loc_8222B3AC;
loc_8222B3A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8222B3AC:
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

__attribute__((alias("__imp__sub_8222B3C8"))) PPC_WEAK_FUNC(sub_8222B3C8);
PPC_FUNC_IMPL(__imp__sub_8222B3C8) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8222b3f4
	if (ctx.cr6.eq) goto loc_8222B3F4;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82659610
	ctx.lr = 0x8222B3F4;
	sub_82659610(ctx, base);
loc_8222B3F4:
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

__attribute__((alias("__imp__sub_8222B410"))) PPC_WEAK_FUNC(sub_8222B410);
PPC_FUNC_IMPL(__imp__sub_8222B410) {
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
	// addi r11,r11,-13860
	ctx.r11.s64 = ctx.r11.s64 + -13860;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq cr6,0x8222b464
	if (ctx.cr6.eq) goto loc_8222B464;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82659610
	ctx.lr = 0x8222B450;
	sub_82659610(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222b464
	if (ctx.cr6.eq) goto loc_8222B464;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82581e38
	ctx.lr = 0x8222B464;
	sub_82581E38(ctx, base);
loc_8222B464:
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

__attribute__((alias("__imp__sub_8222B480"))) PPC_WEAK_FUNC(sub_8222B480);
PPC_FUNC_IMPL(__imp__sub_8222B480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8222B488;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-13812
	ctx.r11.s64 = ctx.r11.s64 + -13812;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq cr6,0x8222b4bc
	if (ctx.cr6.eq) goto loc_8222B4BC;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82659610
	ctx.lr = 0x8222B4BC;
	sub_82659610(ctx, base);
loc_8222B4BC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// lfs f1,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,8(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f1,12(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f1,20(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f1,24(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222b578
	if (ctx.cr6.eq) goto loc_8222B578;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222b564
	if (ctx.cr6.eq) goto loc_8222B564;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B504;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B518;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B548;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B560;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_8222B564:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222b578
	if (ctx.cr6.eq) goto loc_8222B578;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82581e38
	ctx.lr = 0x8222B578;
	sub_82581E38(ctx, base);
loc_8222B578:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222B588"))) PPC_WEAK_FUNC(sub_8222B588);
PPC_FUNC_IMPL(__imp__sub_8222B588) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222b5b8
	if (ctx.cr6.eq) goto loc_8222B5B8;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82581e38
	ctx.lr = 0x8222B5B8;
	sub_82581E38(ctx, base);
loc_8222B5B8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r11,r11,-13908
	ctx.r11.s64 = ctx.r11.s64 + -13908;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8222b5dc
	if (ctx.cr6.eq) goto loc_8222B5DC;
	// bl 0x82186190
	ctx.lr = 0x8222B5D8;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8222B5DC:
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

__attribute__((alias("__imp__sub_8222B5F8"))) PPC_WEAK_FUNC(sub_8222B5F8);
PPC_FUNC_IMPL(__imp__sub_8222B5F8) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222b678
	if (ctx.cr6.eq) goto loc_8222B678;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222b678
	if (ctx.cr6.eq) goto loc_8222B678;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B640;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B660;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
loc_8222B678:
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

__attribute__((alias("__imp__sub_8222B690"))) PPC_WEAK_FUNC(sub_8222B690);
PPC_FUNC_IMPL(__imp__sub_8222B690) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222b710
	if (ctx.cr6.eq) goto loc_8222B710;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222b710
	if (ctx.cr6.eq) goto loc_8222B710;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B6D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B6F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B70C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
loc_8222B710:
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

__attribute__((alias("__imp__sub_8222B728"))) PPC_WEAK_FUNC(sub_8222B728);
PPC_FUNC_IMPL(__imp__sub_8222B728) {
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
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8222b898
	if (ctx.cr6.eq) goto loc_8222B898;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222b898
	if (ctx.cr6.eq) goto loc_8222B898;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8222b898
	if (ctx.cr6.eq) goto loc_8222B898;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222b884
	if (ctx.cr6.eq) goto loc_8222B884;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8222b884
	if (ctx.cr6.eq) goto loc_8222B884;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222b884
	if (ctx.cr6.eq) goto loc_8222B884;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x8222b884
	if (ctx.cr6.eq) goto loc_8222B884;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bne cr6,0x8222b7f4
	if (!ctx.cr6.eq) goto loc_8222B7F4;
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r3,-4
	ctx.r4.s64 = ctx.r3.s64 + -4;
	// bne cr6,0x8222b7e0
	if (!ctx.cr6.eq) goto loc_8222B7E0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8222B7E0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B7F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8222b884
	goto loc_8222B884;
loc_8222B7F4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82596690
	ctx.lr = 0x8222B7FC;
	sub_82596690(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222b884
	if (ctx.cr6.eq) goto loc_8222B884;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222b874
	if (ctx.cr6.eq) goto loc_8222B874;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r3,-4
	ctx.r4.s64 = ctx.r3.s64 + -4;
	// bne cr6,0x8222b82c
	if (!ctx.cr6.eq) goto loc_8222B82C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8222B82C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B840;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r3,-4
	ctx.r4.s64 = ctx.r3.s64 + -4;
	// bne cr6,0x8222b858
	if (!ctx.cr6.eq) goto loc_8222B858;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8222B858:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B870;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8222B874:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222b884
	if (ctx.cr6.eq) goto loc_8222B884;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82581e38
	ctx.lr = 0x8222B884;
	sub_82581E38(ctx, base);
loc_8222B884:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222b898
	if (ctx.cr6.eq) goto loc_8222B898;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82581e38
	ctx.lr = 0x8222B898;
	sub_82581E38(ctx, base);
loc_8222B898:
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

__attribute__((alias("__imp__sub_8222B8B0"))) PPC_WEAK_FUNC(sub_8222B8B0);
PPC_FUNC_IMPL(__imp__sub_8222B8B0) {
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
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8222b964
	if (ctx.cr6.eq) goto loc_8222B964;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222b964
	if (ctx.cr6.eq) goto loc_8222B964;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B8F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8222b964
	if (ctx.cr6.eq) goto loc_8222B964;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222b954
	if (ctx.cr6.eq) goto loc_8222B954;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222b954
	if (ctx.cr6.eq) goto loc_8222B954;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222b954
	if (ctx.cr6.eq) goto loc_8222B954;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r3,-4
	ctx.r4.s64 = ctx.r3.s64 + -4;
	// bne cr6,0x8222b940
	if (!ctx.cr6.eq) goto loc_8222B940;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8222B940:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8222B954:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8222b964
	if (ctx.cr6.eq) goto loc_8222B964;
	// addi r3,r5,8
	ctx.r3.s64 = ctx.r5.s64 + 8;
	// bl 0x82581e38
	ctx.lr = 0x8222B964;
	sub_82581E38(ctx, base);
loc_8222B964:
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

__attribute__((alias("__imp__sub_8222B978"))) PPC_WEAK_FUNC(sub_8222B978);
PPC_FUNC_IMPL(__imp__sub_8222B978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8222B980;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222bac8
	if (ctx.cr6.eq) goto loc_8222BAC8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222bac8
	if (ctx.cr6.eq) goto loc_8222BAC8;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,15968
	ctx.r6.s64 = ctx.r11.s64 + 15968;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,15852
	ctx.r31.s64 = ctx.r11.s64 + 15852;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x826df418
	ctx.lr = 0x8222B9CC;
	sub_826DF418(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222ba24
	if (ctx.cr6.eq) goto loc_8222BA24;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8222ba24
	if (!ctx.cr6.eq) goto loc_8222BA24;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222ba24
	if (ctx.cr6.eq) goto loc_8222BA24;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222ba24
	if (ctx.cr6.eq) goto loc_8222BA24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222BA10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222BA24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222BA24:
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,16024
	ctx.r6.s64 = ctx.r11.s64 + 16024;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826df418
	ctx.lr = 0x8222BA40;
	sub_826DF418(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222ba98
	if (ctx.cr6.eq) goto loc_8222BA98;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8222ba98
	if (!ctx.cr6.eq) goto loc_8222BA98;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222ba98
	if (ctx.cr6.eq) goto loc_8222BA98;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222ba98
	if (ctx.cr6.eq) goto loc_8222BA98;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222BA84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222BA98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222BA98:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222BAAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stfs f1,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222BAC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
loc_8222BAC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222BAD0"))) PPC_WEAK_FUNC(sub_8222BAD0);
PPC_FUNC_IMPL(__imp__sub_8222BAD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8222BAD8;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-13764
	ctx.r11.s64 = ctx.r11.s64 + -13764;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq cr6,0x8222bb18
	if (ctx.cr6.eq) goto loc_8222BB18;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82659610
	ctx.lr = 0x8222BB18;
	sub_82659610(ctx, base);
loc_8222BB18:
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8222bb34
	if (ctx.cr6.eq) goto loc_8222BB34;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82659610
	ctx.lr = 0x8222BB34;
	sub_82659610(ctx, base);
loc_8222BB34:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,20(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f31,24(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f31,28(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f31,32(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222bbe0
	if (ctx.cr6.eq) goto loc_8222BBE0;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222bbe0
	if (ctx.cr6.eq) goto loc_8222BBE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222BB80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222BB94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222BBAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222BBC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222BBDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
loc_8222BBE0:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222bc10
	if (ctx.cr6.eq) goto loc_8222BC10;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222bc10
	if (ctx.cr6.eq) goto loc_8222BC10;
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
	ctx.lr = 0x8222BC10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222BC10:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222bc24
	if (ctx.cr6.eq) goto loc_8222BC24;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82581e38
	ctx.lr = 0x8222BC24;
	sub_82581E38(ctx, base);
loc_8222BC24:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222bc38
	if (ctx.cr6.eq) goto loc_8222BC38;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82581e38
	ctx.lr = 0x8222BC38;
	sub_82581E38(ctx, base);
loc_8222BC38:
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

__attribute__((alias("__imp__sub_8222BC48"))) PPC_WEAK_FUNC(sub_8222BC48);
PPC_FUNC_IMPL(__imp__sub_8222BC48) {
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222bc78
	if (ctx.cr6.eq) goto loc_8222BC78;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82581e38
	ctx.lr = 0x8222BC78;
	sub_82581E38(ctx, base);
loc_8222BC78:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222bc8c
	if (ctx.cr6.eq) goto loc_8222BC8C;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82581e38
	ctx.lr = 0x8222BC8C;
	sub_82581E38(ctx, base);
loc_8222BC8C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r11,r11,-13908
	ctx.r11.s64 = ctx.r11.s64 + -13908;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8222bcb0
	if (ctx.cr6.eq) goto loc_8222BCB0;
	// bl 0x82186190
	ctx.lr = 0x8222BCAC;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8222BCB0:
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

__attribute__((alias("__imp__sub_8222BCC8"))) PPC_WEAK_FUNC(sub_8222BCC8);
PPC_FUNC_IMPL(__imp__sub_8222BCC8) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222bd48
	if (ctx.cr6.eq) goto loc_8222BD48;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222bd48
	if (ctx.cr6.eq) goto loc_8222BD48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222BD10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222BD30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222BD44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
loc_8222BD48:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222bd78
	if (ctx.cr6.eq) goto loc_8222BD78;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222bd78
	if (ctx.cr6.eq) goto loc_8222BD78;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222BD78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222BD78:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222bdd4
	if (ctx.cr6.eq) goto loc_8222BDD4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222bdd4
	if (ctx.cr6.eq) goto loc_8222BDD4;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8222bdd4
	if (ctx.cr6.eq) goto loc_8222BDD4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222bdd4
	if (ctx.cr6.eq) goto loc_8222BDD4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r3,-4
	ctx.r4.s64 = ctx.r3.s64 + -4;
	// bne cr6,0x8222bdc4
	if (!ctx.cr6.eq) goto loc_8222BDC4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8222BDC4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222BDD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222BDD4:
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

__attribute__((alias("__imp__sub_8222BDF0"))) PPC_WEAK_FUNC(sub_8222BDF0);
PPC_FUNC_IMPL(__imp__sub_8222BDF0) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222be70
	if (ctx.cr6.eq) goto loc_8222BE70;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222be70
	if (ctx.cr6.eq) goto loc_8222BE70;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222BE38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222BE58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222BE6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
loc_8222BE70:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222bea0
	if (ctx.cr6.eq) goto loc_8222BEA0;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222bea0
	if (ctx.cr6.eq) goto loc_8222BEA0;
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
	ctx.lr = 0x8222BEA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222BEA0:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222befc
	if (ctx.cr6.eq) goto loc_8222BEFC;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222befc
	if (ctx.cr6.eq) goto loc_8222BEFC;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8222befc
	if (ctx.cr6.eq) goto loc_8222BEFC;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222befc
	if (ctx.cr6.eq) goto loc_8222BEFC;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r3,-4
	ctx.r4.s64 = ctx.r3.s64 + -4;
	// bne cr6,0x8222beec
	if (!ctx.cr6.eq) goto loc_8222BEEC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8222BEEC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222BEFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222BEFC:
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

__attribute__((alias("__imp__sub_8222BF18"))) PPC_WEAK_FUNC(sub_8222BF18);
PPC_FUNC_IMPL(__imp__sub_8222BF18) {
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
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8222c088
	if (ctx.cr6.eq) goto loc_8222C088;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c088
	if (ctx.cr6.eq) goto loc_8222C088;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222BF64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8222c074
	if (ctx.cr6.eq) goto loc_8222C074;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c074
	if (ctx.cr6.eq) goto loc_8222C074;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8222c088
	if (ctx.cr6.eq) goto loc_8222C088;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c074
	if (ctx.cr6.eq) goto loc_8222C074;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x8222c074
	if (ctx.cr6.eq) goto loc_8222C074;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bne cr6,0x8222bfe4
	if (!ctx.cr6.eq) goto loc_8222BFE4;
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r3,-4
	ctx.r4.s64 = ctx.r3.s64 + -4;
	// bne cr6,0x8222bfd0
	if (!ctx.cr6.eq) goto loc_8222BFD0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8222BFD0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222BFE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8222c074
	goto loc_8222C074;
loc_8222BFE4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82596690
	ctx.lr = 0x8222BFEC;
	sub_82596690(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c074
	if (ctx.cr6.eq) goto loc_8222C074;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222c064
	if (ctx.cr6.eq) goto loc_8222C064;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r3,-4
	ctx.r4.s64 = ctx.r3.s64 + -4;
	// bne cr6,0x8222c01c
	if (!ctx.cr6.eq) goto loc_8222C01C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8222C01C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222C030;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r3,-4
	ctx.r4.s64 = ctx.r3.s64 + -4;
	// bne cr6,0x8222c048
	if (!ctx.cr6.eq) goto loc_8222C048;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8222C048:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222C060;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8222C064:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c074
	if (ctx.cr6.eq) goto loc_8222C074;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82581e38
	ctx.lr = 0x8222C074;
	sub_82581E38(ctx, base);
loc_8222C074:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c088
	if (ctx.cr6.eq) goto loc_8222C088;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82581e38
	ctx.lr = 0x8222C088;
	sub_82581E38(ctx, base);
loc_8222C088:
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

__attribute__((alias("__imp__sub_8222C0A0"))) PPC_WEAK_FUNC(sub_8222C0A0);
PPC_FUNC_IMPL(__imp__sub_8222C0A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
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
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8222C0CC"))) PPC_WEAK_FUNC(sub_8222C0CC);
PPC_FUNC_IMPL(__imp__sub_8222C0CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222C0D0"))) PPC_WEAK_FUNC(sub_8222C0D0);
PPC_FUNC_IMPL(__imp__sub_8222C0D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8222C0D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r6,r11,15968
	ctx.r6.s64 = ctx.r11.s64 + 15968;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,15852
	ctx.r29.s64 = ctx.r11.s64 + 15852;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826df418
	ctx.lr = 0x8222C108;
	sub_826DF418(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222c17c
	if (ctx.cr6.eq) goto loc_8222C17C;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8222c17c
	if (!ctx.cr6.eq) goto loc_8222C17C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c17c
	if (ctx.cr6.eq) goto loc_8222C17C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c17c
	if (ctx.cr6.eq) goto loc_8222C17C;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222c17c
	if (ctx.cr6.eq) goto loc_8222C17C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c17c
	if (ctx.cr6.eq) goto loc_8222C17C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222C168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222C17C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222C17C:
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,16024
	ctx.r6.s64 = ctx.r11.s64 + 16024;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826df418
	ctx.lr = 0x8222C198;
	sub_826DF418(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8222c27c
	if (ctx.cr6.eq) goto loc_8222C27C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8222c210
	if (!ctx.cr6.eq) goto loc_8222C210;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c210
	if (ctx.cr6.eq) goto loc_8222C210;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c210
	if (ctx.cr6.eq) goto loc_8222C210;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222c210
	if (ctx.cr6.eq) goto loc_8222C210;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c210
	if (ctx.cr6.eq) goto loc_8222C210;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222C1FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222C210;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222C210:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8222c27c
	if (!ctx.cr6.eq) goto loc_8222C27C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c27c
	if (ctx.cr6.eq) goto loc_8222C27C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c27c
	if (ctx.cr6.eq) goto loc_8222C27C;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222c27c
	if (ctx.cr6.eq) goto loc_8222C27C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c27c
	if (ctx.cr6.eq) goto loc_8222C27C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222C268;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222C27C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222C27C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222c2c4
	if (ctx.cr6.eq) goto loc_8222C2C4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c2c4
	if (ctx.cr6.eq) goto loc_8222C2C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222C2A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222C2C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
loc_8222C2C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222C2D0"))) PPC_WEAK_FUNC(sub_8222C2D0);
PPC_FUNC_IMPL(__imp__sub_8222C2D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
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
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8222C2FC"))) PPC_WEAK_FUNC(sub_8222C2FC);
PPC_FUNC_IMPL(__imp__sub_8222C2FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222C300"))) PPC_WEAK_FUNC(sub_8222C300);
PPC_FUNC_IMPL(__imp__sub_8222C300) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
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

__attribute__((alias("__imp__sub_8222C32C"))) PPC_WEAK_FUNC(sub_8222C32C);
PPC_FUNC_IMPL(__imp__sub_8222C32C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222C330"))) PPC_WEAK_FUNC(sub_8222C330);
PPC_FUNC_IMPL(__imp__sub_8222C330) {
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
	// addi r6,r11,16088
	ctx.r6.s64 = ctx.r11.s64 + 16088;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,15852
	ctx.r5.s64 = ctx.r11.s64 + 15852;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x826df418
	ctx.lr = 0x8222C36C;
	sub_826DF418(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq cr6,0x8222c384
	if (ctx.cr6.eq) goto loc_8222C384;
	// bl 0x82160140
	ctx.lr = 0x8222C384;
	sub_82160140(ctx, base);
loc_8222C384:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222c3a8
	if (!ctx.cr6.eq) goto loc_8222C3A8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222c3a0
	if (ctx.cr6.eq) goto loc_8222C3A0;
	// bl 0x821601b8
	ctx.lr = 0x8222C3A0;
	sub_821601B8(ctx, base);
loc_8222C3A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8222C3A8:
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

__attribute__((alias("__imp__sub_8222C3C8"))) PPC_WEAK_FUNC(sub_8222C3C8);
PPC_FUNC_IMPL(__imp__sub_8222C3C8) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f12,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f31,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8222c408
	if (!ctx.cr6.lt) goto loc_8222C408;
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
loc_8222C408:
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8222c434
	if (!ctx.cr6.eq) goto loc_8222C434;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222c434
	if (ctx.cr6.eq) goto loc_8222C434;
	// bl 0x821601b8
	ctx.lr = 0x8222C434;
	sub_821601B8(ctx, base);
loc_8222C434:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222c464
	if (ctx.cr6.eq) goto loc_8222C464;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c464
	if (ctx.cr6.eq) goto loc_8222C464;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222C464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222C464:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222c494
	if (ctx.cr6.eq) goto loc_8222C494;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c494
	if (ctx.cr6.eq) goto loc_8222C494;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222C494;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222C494:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8222c584
	if (ctx.cr6.eq) goto loc_8222C584;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c584
	if (ctx.cr6.eq) goto loc_8222C584;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c584
	if (ctx.cr6.eq) goto loc_8222C584;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c584
	if (ctx.cr6.eq) goto loc_8222C584;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222C4E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222C4F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222c55c
	if (ctx.cr6.eq) goto loc_8222C55C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c55c
	if (ctx.cr6.eq) goto loc_8222C55C;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8222c574
	if (ctx.cr6.eq) goto loc_8222C574;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c560
	if (ctx.cr6.eq) goto loc_8222C560;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r3,-4
	ctx.r4.s64 = ctx.r3.s64 + -4;
	// bne cr6,0x8222c548
	if (!ctx.cr6.eq) goto loc_8222C548;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8222C548:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222C558;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8222C55C:
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8222C560:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8222c574
	if (ctx.cr6.eq) goto loc_8222C574;
	// addi r3,r5,8
	ctx.r3.s64 = ctx.r5.s64 + 8;
	// bl 0x82581e38
	ctx.lr = 0x8222C570;
	sub_82581E38(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8222C574:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222c584
	if (ctx.cr6.eq) goto loc_8222C584;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// bl 0x82581e38
	ctx.lr = 0x8222C584;
	sub_82581E38(ctx, base);
loc_8222C584:
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

__attribute__((alias("__imp__sub_8222C5A0"))) PPC_WEAK_FUNC(sub_8222C5A0);
PPC_FUNC_IMPL(__imp__sub_8222C5A0) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f12,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f31,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8222c5e0
	if (!ctx.cr6.lt) goto loc_8222C5E0;
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
loc_8222C5E0:
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8222c60c
	if (!ctx.cr6.eq) goto loc_8222C60C;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222c60c
	if (ctx.cr6.eq) goto loc_8222C60C;
	// bl 0x821601b8
	ctx.lr = 0x8222C60C;
	sub_821601B8(ctx, base);
loc_8222C60C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222c63c
	if (ctx.cr6.eq) goto loc_8222C63C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c63c
	if (ctx.cr6.eq) goto loc_8222C63C;
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
	ctx.lr = 0x8222C63C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222C63C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222c66c
	if (ctx.cr6.eq) goto loc_8222C66C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c66c
	if (ctx.cr6.eq) goto loc_8222C66C;
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
	ctx.lr = 0x8222C66C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222C66C:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8222c75c
	if (ctx.cr6.eq) goto loc_8222C75C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c75c
	if (ctx.cr6.eq) goto loc_8222C75C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c75c
	if (ctx.cr6.eq) goto loc_8222C75C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c75c
	if (ctx.cr6.eq) goto loc_8222C75C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222C6B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222C6D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222c734
	if (ctx.cr6.eq) goto loc_8222C734;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c734
	if (ctx.cr6.eq) goto loc_8222C734;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8222c74c
	if (ctx.cr6.eq) goto loc_8222C74C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c738
	if (ctx.cr6.eq) goto loc_8222C738;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r3,-4
	ctx.r4.s64 = ctx.r3.s64 + -4;
	// bne cr6,0x8222c720
	if (!ctx.cr6.eq) goto loc_8222C720;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8222C720:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222C730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8222C734:
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8222C738:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8222c74c
	if (ctx.cr6.eq) goto loc_8222C74C;
	// addi r3,r5,8
	ctx.r3.s64 = ctx.r5.s64 + 8;
	// bl 0x82581e38
	ctx.lr = 0x8222C748;
	sub_82581E38(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8222C74C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222c75c
	if (ctx.cr6.eq) goto loc_8222C75C;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// bl 0x82581e38
	ctx.lr = 0x8222C75C;
	sub_82581E38(ctx, base);
loc_8222C75C:
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

__attribute__((alias("__imp__sub_8222C778"))) PPC_WEAK_FUNC(sub_8222C778);
PPC_FUNC_IMPL(__imp__sub_8222C778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x8222C780;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-13716
	ctx.r11.s64 = ctx.r11.s64 + -13716;
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// addi r27,r31,12
	ctx.r27.s64 = ctx.r31.s64 + 12;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r3.u32);
	// beq cr6,0x8222c7d4
	if (ctx.cr6.eq) goto loc_8222C7D4;
	// bl 0x82160140
	ctx.lr = 0x8222C7D4;
	sub_82160140(ctx, base);
loc_8222C7D4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lfs f0,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f13,14088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// bl 0x8222c330
	ctx.lr = 0x8222C80C;
	sub_8222C330(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c868
	if (ctx.cr6.eq) goto loc_8222C868;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222c868
	if (ctx.cr6.eq) goto loc_8222C868;
	// lwz r29,16(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// beq cr6,0x8222c848
	if (ctx.cr6.eq) goto loc_8222C848;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82160140
	ctx.lr = 0x8222C848;
	sub_82160140(ctx, base);
loc_8222C848:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8221f3c8
	ctx.lr = 0x8222C854;
	sub_8221F3C8(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8222c874
	if (ctx.cr6.eq) goto loc_8222C874;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821601b8
	ctx.lr = 0x8222C864;
	sub_821601B8(ctx, base);
	// b 0x8222c874
	goto loc_8222C874;
loc_8222C868:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8221f3c8
	ctx.lr = 0x8222C874;
	sub_8221F3C8(ctx, base);
loc_8222C874:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8222c8fc
	if (ctx.cr6.eq) goto loc_8222C8FC;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c8fc
	if (ctx.cr6.eq) goto loc_8222C8FC;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222C8A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222c8fc
	if (ctx.cr6.eq) goto loc_8222C8FC;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c8ec
	if (ctx.cr6.eq) goto loc_8222C8EC;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222C8D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222c8e8
	if (ctx.cr6.eq) goto loc_8222C8E8;
	// bl 0x82581e38
	ctx.lr = 0x8222C8E8;
	sub_82581E38(ctx, base);
loc_8222C8E8:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8222C8EC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222c8fc
	if (ctx.cr6.eq) goto loc_8222C8FC;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x82581e38
	ctx.lr = 0x8222C8FC;
	sub_82581E38(ctx, base);
loc_8222C8FC:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8222c944
	if (ctx.cr6.eq) goto loc_8222C944;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c944
	if (ctx.cr6.eq) goto loc_8222C944;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222c944
	if (ctx.cr6.eq) goto loc_8222C944;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c944
	if (ctx.cr6.eq) goto loc_8222C944;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222C944;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222C944:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222c954
	if (ctx.cr6.eq) goto loc_8222C954;
	// bl 0x821601b8
	ctx.lr = 0x8222C954;
	sub_821601B8(ctx, base);
loc_8222C954:
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222c964
	if (ctx.cr6.eq) goto loc_8222C964;
	// bl 0x821601b8
	ctx.lr = 0x8222C964;
	sub_821601B8(ctx, base);
loc_8222C964:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222c974
	if (ctx.cr6.eq) goto loc_8222C974;
	// bl 0x821601b8
	ctx.lr = 0x8222C974;
	sub_821601B8(ctx, base);
loc_8222C974:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222C988"))) PPC_WEAK_FUNC(sub_8222C988);
PPC_FUNC_IMPL(__imp__sub_8222C988) {
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
	// beq cr6,0x8222c9b4
	if (ctx.cr6.eq) goto loc_8222C9B4;
	// bl 0x821601b8
	ctx.lr = 0x8222C9B4;
	sub_821601B8(ctx, base);
loc_8222C9B4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222c9c4
	if (ctx.cr6.eq) goto loc_8222C9C4;
	// bl 0x821601b8
	ctx.lr = 0x8222C9C4;
	sub_821601B8(ctx, base);
loc_8222C9C4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r11,r11,-13908
	ctx.r11.s64 = ctx.r11.s64 + -13908;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8222c9e8
	if (ctx.cr6.eq) goto loc_8222C9E8;
	// bl 0x82186190
	ctx.lr = 0x8222C9E4;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8222C9E8:
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

__attribute__((alias("__imp__sub_8222CA00"))) PPC_WEAK_FUNC(sub_8222CA00);
PPC_FUNC_IMPL(__imp__sub_8222CA00) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r6,r11,6424
	ctx.r6.s64 = ctx.r11.s64 + 6424;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8216a080
	ctx.lr = 0x8222CA2C;
	sub_8216A080(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222ca54
	if (ctx.cr6.eq) goto loc_8222CA54;
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
loc_8222CA54:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r6,r11,-17360
	ctx.r6.s64 = ctx.r11.s64 + -17360;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216a080
	ctx.lr = 0x8222CA70;
	sub_8216A080(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222ca98
	if (ctx.cr6.eq) goto loc_8222CA98;
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
loc_8222CA98:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-13664
	ctx.r4.s64 = ctx.r11.s64 + -13664;
	// bl 0x8216d3c0
	ctx.lr = 0x8222CAA8;
	sub_8216D3C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
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

__attribute__((alias("__imp__sub_8222CAD0"))) PPC_WEAK_FUNC(sub_8222CAD0);
PPC_FUNC_IMPL(__imp__sub_8222CAD0) {
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
	// bl 0x82163620
	ctx.lr = 0x8222CAE8;
	sub_82163620(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8222CB18"))) PPC_WEAK_FUNC(sub_8222CB18);
PPC_FUNC_IMPL(__imp__sub_8222CB18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8a8
	ctx.lr = 0x8222CB20;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// lwz r4,0(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8222cd7c
	if (ctx.cr6.eq) goto loc_8222CD7C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222cd7c
	if (ctx.cr6.eq) goto loc_8222CD7C;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r5,r11,-13620
	ctx.r5.s64 = ctx.r11.s64 + -13620;
	// lwz r11,96(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222CB68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222cd6c
	if (ctx.cr6.eq) goto loc_8222CD6C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222cd6c
	if (ctx.cr6.eq) goto loc_8222CD6C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222CB94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222cd6c
	if (ctx.cr6.eq) goto loc_8222CD6C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r23,15
	ctx.r23.s64 = 15;
	// addi r25,r11,-13668
	ctx.r25.s64 = ctx.r11.s64 + -13668;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r27,r11,-13628
	ctx.r27.s64 = ctx.r11.s64 + -13628;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r26,r11,-13636
	ctx.r26.s64 = ctx.r11.s64 + -13636;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r22,r11,32692
	ctx.r22.s64 = ctx.r11.s64 + 32692;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r24,r11,-13648
	ctx.r24.s64 = ctx.r11.s64 + -13648;
loc_8222CBD0:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222CBE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222cd4c
	if (ctx.cr6.eq) goto loc_8222CD4C;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222CC08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82617ea8
	ctx.lr = 0x8222CC18;
	sub_82617EA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222cd4c
	if (ctx.cr6.eq) goto loc_8222CD4C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222cd3c
	if (ctx.cr6.eq) goto loc_8222CD3C;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222CC4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821620e8
	ctx.lr = 0x8222CC58;
	sub_821620E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8222ca00
	ctx.lr = 0x8222CC60;
	sub_8222CA00(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8222cc78
	if (ctx.cr6.lt) goto loc_8222CC78;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82186190
	ctx.lr = 0x8222CC78;
	sub_82186190(ctx, base);
loc_8222CC78:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stb r29,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r29.u8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222CC9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222CCBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82186158
	ctx.lr = 0x8222CCC8;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222ccec
	if (ctx.cr6.eq) goto loc_8222CCEC;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r25.u32);
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// b 0x8222ccf0
	goto loc_8222CCF0;
loc_8222CCEC:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8222CCF0:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8222cd04
	if (ctx.cr6.eq) goto loc_8222CD04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x8222CD04;
	sub_82659610(ctx, base);
loc_8222CD04:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222CD20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r20,4
	ctx.r3.s64 = ctx.r20.s64 + 4;
	// bl 0x82631fe8
	ctx.lr = 0x8222CD2C;
	sub_82631FE8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8222cd3c
	if (ctx.cr6.eq) goto loc_8222CD3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581e38
	ctx.lr = 0x8222CD3C;
	sub_82581E38(ctx, base);
loc_8222CD3C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222cd4c
	if (ctx.cr6.eq) goto loc_8222CD4C;
	// bl 0x82581e38
	ctx.lr = 0x8222CD4C;
	sub_82581E38(ctx, base);
loc_8222CD4C:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222CD60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222cbd0
	if (!ctx.cr6.eq) goto loc_8222CBD0;
loc_8222CD6C:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222cd7c
	if (ctx.cr6.eq) goto loc_8222CD7C;
	// bl 0x821601b8
	ctx.lr = 0x8222CD7C;
	sub_821601B8(ctx, base);
loc_8222CD7C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x826de8f8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222CD88"))) PPC_WEAK_FUNC(sub_8222CD88);
PPC_FUNC_IMPL(__imp__sub_8222CD88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// or r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 | ctx.r11.u64;
	// stw r11,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222CD98"))) PPC_WEAK_FUNC(sub_8222CD98);
PPC_FUNC_IMPL(__imp__sub_8222CD98) {
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
	// bl 0x8221f1b8
	ctx.lr = 0x8222CDB0;
	sub_8221F1B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-13604
	ctx.r11.s64 = ctx.r11.s64 + -13604;
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

__attribute__((alias("__imp__sub_8222CDD8"))) PPC_WEAK_FUNC(sub_8222CDD8);
PPC_FUNC_IMPL(__imp__sub_8222CDD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-13604
	ctx.r11.s64 = ctx.r11.s64 + -13604;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8221f0e8
	sub_8221F0E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222CDE8"))) PPC_WEAK_FUNC(sub_8222CDE8);
PPC_FUNC_IMPL(__imp__sub_8222CDE8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x8222ce18
	if (ctx.cr6.eq) goto loc_8222CE18;
	// bl 0x82659610
	ctx.lr = 0x8222CE18;
	sub_82659610(ctx, base);
loc_8222CE18:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq cr6,0x8222ce2c
	if (ctx.cr6.eq) goto loc_8222CE2C;
	// bl 0x82659610
	ctx.lr = 0x8222CE2C;
	sub_82659610(ctx, base);
loc_8222CE2C:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// beq cr6,0x8222ce40
	if (ctx.cr6.eq) goto loc_8222CE40;
	// bl 0x82659610
	ctx.lr = 0x8222CE40;
	sub_82659610(ctx, base);
loc_8222CE40:
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

__attribute__((alias("__imp__sub_8222CE60"))) PPC_WEAK_FUNC(sub_8222CE60);
PPC_FUNC_IMPL(__imp__sub_8222CE60) {
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
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222cea8
	if (ctx.cr6.eq) goto loc_8222CEA8;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222cea8
	if (ctx.cr6.eq) goto loc_8222CEA8;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x8222ceb0
	if (ctx.cr6.eq) goto loc_8222CEB0;
	// bl 0x82659610
	ctx.lr = 0x8222CEA4;
	sub_82659610(ctx, base);
	// b 0x8222ceb0
	goto loc_8222CEB0;
loc_8222CEA8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8222CEB0:
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

__attribute__((alias("__imp__sub_8222CEC8"))) PPC_WEAK_FUNC(sub_8222CEC8);
PPC_FUNC_IMPL(__imp__sub_8222CEC8) {
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
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222cf10
	if (ctx.cr6.eq) goto loc_8222CF10;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222cf10
	if (ctx.cr6.eq) goto loc_8222CF10;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x8222cf18
	if (ctx.cr6.eq) goto loc_8222CF18;
	// bl 0x82659610
	ctx.lr = 0x8222CF0C;
	sub_82659610(ctx, base);
	// b 0x8222cf18
	goto loc_8222CF18;
loc_8222CF10:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8222CF18:
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

__attribute__((alias("__imp__sub_8222CF30"))) PPC_WEAK_FUNC(sub_8222CF30);
PPC_FUNC_IMPL(__imp__sub_8222CF30) {
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
	// addi r11,r11,-13604
	ctx.r11.s64 = ctx.r11.s64 + -13604;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8221f0e8
	ctx.lr = 0x8222CF5C;
	sub_8221F0E8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222cf74
	if (ctx.cr6.eq) goto loc_8222CF74;
	// bl 0x82186190
	ctx.lr = 0x8222CF70;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8222CF74:
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

__attribute__((alias("__imp__sub_8222CF90"))) PPC_WEAK_FUNC(sub_8222CF90);
PPC_FUNC_IMPL(__imp__sub_8222CF90) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222cfc4
	if (ctx.cr6.eq) goto loc_8222CFC4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r9,10922
	ctx.r9.s64 = 715784192;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// ori r9,r9,43691
	ctx.r9.u64 = ctx.r9.u64 | 43691;
	// mulhw r11,r11,r9
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8222cfc8
	if (ctx.cr6.lt) goto loc_8222CFC8;
loc_8222CFC4:
	// twi 31,r0,22
loc_8222CFC8:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

