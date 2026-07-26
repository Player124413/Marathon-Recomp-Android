#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82448ED8"))) PPC_WEAK_FUNC(sub_82448ED8);
PPC_FUNC_IMPL(__imp__sub_82448ED8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82448EF0"))) PPC_WEAK_FUNC(sub_82448EF0);
PPC_FUNC_IMPL(__imp__sub_82448EF0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1200, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82448EF8"))) PPC_WEAK_FUNC(sub_82448EF8);
PPC_FUNC_IMPL(__imp__sub_82448EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82448F00;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82448F30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82448fd8
	if (ctx.cr6.eq) goto loc_82448FD8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82448F54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x82448fa4
	if (ctx.cr6.lt) goto loc_82448FA4;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// addi r11,r26,8
	ctx.r11.s64 = ctx.r26.s64 + 8;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82448F74:
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f1,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f1,0(r7)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f1,0(r6)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f1,0(r5)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// bne cr6,0x82448f74
	if (!ctx.cr6.eq) goto loc_82448F74;
loc_82448FA4:
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x82449074
	if (!ctx.cr6.lt) goto loc_82449074;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r9,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r9.s64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
loc_82448FB8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f1,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// bne cr6,0x82448fb8
	if (!ctx.cr6.eq) goto loc_82448FB8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_82448FD8:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82448FEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// ble cr6,0x82449074
	if (!ctx.cr6.gt) goto loc_82449074;
	// addi r28,r26,4
	ctx.r28.s64 = ctx.r26.s64 + 4;
	// addi r30,r27,8
	ctx.r30.s64 = ctx.r27.s64 + 8;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_82449008:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82449020;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82449050
	if (ctx.cr6.eq) goto loc_82449050;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82449044;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x82449060
	goto loc_82449060;
loc_82449050:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_82449060:
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82449008
	if (!ctx.cr6.eq) goto loc_82449008;
loc_82449074:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82449080"))) PPC_WEAK_FUNC(sub_82449080);
PPC_FUNC_IMPL(__imp__sub_82449080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82449088;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824490B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82449108
	if (ctx.cr6.eq) goto loc_82449108;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824490DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x824491a4
	if (!ctx.cr6.gt) goto loc_824491A4;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_824490E8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// bne cr6,0x824490e8
	if (!ctx.cr6.eq) goto loc_824490E8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_82449108:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244911C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// ble cr6,0x824491a4
	if (!ctx.cr6.gt) goto loc_824491A4;
	// addi r28,r26,4
	ctx.r28.s64 = ctx.r26.s64 + 4;
	// addi r31,r27,8
	ctx.r31.s64 = ctx.r27.s64 + 8;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_82449138:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82449150;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82449180
	if (ctx.cr6.eq) goto loc_82449180;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82449174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// b 0x82449190
	goto loc_82449190;
loc_82449180:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82449190:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82449138
	if (!ctx.cr6.eq) goto loc_82449138;
loc_824491A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824491B0"))) PPC_WEAK_FUNC(sub_824491B0);
PPC_FUNC_IMPL(__imp__sub_824491B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x824491B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824491E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824492fc
	if (ctx.cr6.eq) goto loc_824492FC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244920C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// blt cr6,0x824492b8
	if (ctx.cr6.lt) goto loc_824492B8;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// addi r10,r26,8
	ctx.r10.s64 = ctx.r26.s64 + 8;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82449248:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82449258
	if (!ctx.cr6.eq) goto loc_82449258;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82449258:
	// lwz r7,-8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82449270
	if (!ctx.cr6.eq) goto loc_82449270;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82449270:
	// lwz r7,-4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82449288
	if (!ctx.cr6.eq) goto loc_82449288;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82449288:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x824492a0
	if (!ctx.cr6.eq) goto loc_824492A0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824492A0:
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// bne cr6,0x82449248
	if (!ctx.cr6.eq) goto loc_82449248;
loc_824492B8:
	// cmpw cr6,r8,r27
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x82449398
	if (!ctx.cr6.lt) goto loc_82449398;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r8,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r8.s64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
loc_824492CC:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r9,1
	ctx.r9.s64 = 1;
	// bne cr6,0x824492dc
	if (!ctx.cr6.eq) goto loc_824492DC;
	// li r9,0
	ctx.r9.s64 = 0;
loc_824492DC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r9,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
	// bne cr6,0x824492cc
	if (!ctx.cr6.eq) goto loc_824492CC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_824492FC:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82449310;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// stb r3,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// ble cr6,0x82449398
	if (!ctx.cr6.gt) goto loc_82449398;
	// addi r31,r28,8
	ctx.r31.s64 = ctx.r28.s64 + 8;
	// addi r29,r26,4
	ctx.r29.s64 = ctx.r26.s64 + 4;
	// addi r28,r27,-1
	ctx.r28.s64 = ctx.r27.s64 + -1;
loc_8244932C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82449344;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82449374
	if (ctx.cr6.eq) goto loc_82449374;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82449368;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stb r3,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// b 0x82449384
	goto loc_82449384;
loc_82449374:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
loc_82449384:
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8244932c
	if (!ctx.cr6.eq) goto loc_8244932C;
loc_82449398:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824493A0"))) PPC_WEAK_FUNC(sub_824493A0);
PPC_FUNC_IMPL(__imp__sub_824493A0) {
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
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r4,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r4.u32);
	// bl 0x82447e68
	ctx.lr = 0x824493C8;
	sub_82447E68(ctx, base);
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// stfs f31,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82449400
	if (!ctx.cr6.eq) goto loc_82449400;
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82449400
	if (ctx.cr6.eq) goto loc_82449400;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82449400;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82449400:
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

__attribute__((alias("__imp__sub_82449418"))) PPC_WEAK_FUNC(sub_82449418);
PPC_FUNC_IMPL(__imp__sub_82449418) {
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
	ctx.lr = 0x8244942C;
	__savefpr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f28,f2
	ctx.f28.f64 = ctx.f2.f64;
	// lfs f0,5144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bge cr6,0x82449454
	if (!ctx.cr6.lt) goto loc_82449454;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// b 0x824494d4
	goto loc_824494D4;
loc_82449454:
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// bl 0x82390710
	ctx.lr = 0x8244945C;
	sub_82390710(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d4220
	ctx.lr = 0x82449464;
	sub_825D4220(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,22660(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22660);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bge cr6,0x82449480
	if (!ctx.cr6.lt) goto loc_82449480;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f30,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f30.f64 = double(temp.f32);
loc_82449480:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d4220
	ctx.lr = 0x82449488;
	sub_825D4220(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x826e1b38
	ctx.lr = 0x82449494;
	sub_826E1B38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-29804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
	// lfs f13,5024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5024);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f12,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// frsp f31,f0
	ctx.f31.f64 = double(float(ctx.f0.f64));
	// bl 0x826e0590
	ctx.lr = 0x824494B8;
	sub_826E0590(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f0,2588(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2588);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmadds f1,f0,f28,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 + ctx.f29.f64));
loc_824494D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x826dfbd4
	ctx.lr = 0x824494E0;
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

__attribute__((alias("__imp__sub_824494F0"))) PPC_WEAK_FUNC(sub_824494F0);
PPC_FUNC_IMPL(__imp__sub_824494F0) {
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
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82390710
	ctx.lr = 0x82449514;
	sub_82390710(ctx, base);
	// bl 0x825d4220
	ctx.lr = 0x82449518;
	sub_825D4220(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-22124(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -22124);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8244952c
	if (ctx.cr6.gt) goto loc_8244952C;
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
loc_8244952C:
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// extsw r10,r31
	ctx.r10.s64 = ctx.r31.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f0.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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

__attribute__((alias("__imp__sub_82449588"))) PPC_WEAK_FUNC(sub_82449588);
PPC_FUNC_IMPL(__imp__sub_82449588) {
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
	ctx.lr = 0x8244959C;
	__savefpr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f2
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f2.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x826e0590
	ctx.lr = 0x824495B8;
	sub_826E0590(ctx, base);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x826e0668
	ctx.lr = 0x824495C4;
	sub_826E0668(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f13,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x826e0590
	ctx.lr = 0x824495F8;
	sub_826E0590(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x826e0668
	ctx.lr = 0x82449604;
	sub_826E0668(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x825d2330
	ctx.lr = 0x82449610;
	sub_825D2330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x825d2330
	ctx.lr = 0x82449624;
	sub_825D2330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x826dfbd4
	ctx.lr = 0x82449634;
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

__attribute__((alias("__imp__sub_82449648"))) PPC_WEAK_FUNC(sub_82449648);
PPC_FUNC_IMPL(__imp__sub_82449648) {
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
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r11,-32520
	ctx.r6.s64 = ctx.r11.s64 + -32520;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,11780
	ctx.r5.s64 = ctx.r11.s64 + 11780;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x826df418
	ctx.lr = 0x8244967C;
	sub_826DF418(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f6358
	ctx.lr = 0x82449688;
	sub_821F6358(ctx, base);
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,292(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x824496a4
	if (ctx.cr6.lt) goto loc_824496A4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824496A4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_824496C0"))) PPC_WEAK_FUNC(sub_824496C0);
PPC_FUNC_IMPL(__imp__sub_824496C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824496d0
	if (!ctx.cr6.eq) goto loc_824496D0;
	// twi 31,r0,22
loc_824496D0:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r11,53(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 53);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824496fc
	if (ctx.cr6.eq) goto loc_824496FC;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lbz r11,53(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_824496F4:
	// twi 31,r0,22
	// blr 
	return;
loc_824496FC:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,53(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82449738
	if (!ctx.cr6.eq) goto loc_82449738;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,53(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 53);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82449780
	if (!ctx.cr6.eq) goto loc_82449780;
loc_8244971C:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,53(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 53);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8244971c
	if (ctx.cr6.eq) goto loc_8244971C;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82449738:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r10,53(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82449770
	if (!ctx.cr6.eq) goto loc_82449770;
loc_82449748:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82449770
	if (!ctx.cr6.eq) goto loc_82449770;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,53(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82449748
	if (ctx.cr6.eq) goto loc_82449748;
loc_82449770:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r10,53(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 53);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824496f4
	if (!ctx.cr6.eq) goto loc_824496F4;
loc_82449780:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82449788"))) PPC_WEAK_FUNC(sub_82449788);
PPC_FUNC_IMPL(__imp__sub_82449788) {
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
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-21328
	ctx.r4.s64 = ctx.r11.s64 + -21328;
	// bl 0x826de850
	ctx.lr = 0x824497AC;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824497c0
	if (!ctx.cr6.eq) goto loc_824497C0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_824497C0:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_824497D8"))) PPC_WEAK_FUNC(sub_824497D8);
PPC_FUNC_IMPL(__imp__sub_824497D8) {
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
	// lbz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82449814
	if (ctx.cr6.eq) goto loc_82449814;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stb r11,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r11.u8);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// b 0x82449854
	goto loc_82449854;
loc_82449814:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82390710
	ctx.lr = 0x8244981C;
	sub_82390710(ctx, base);
	// bl 0x825d4220
	ctx.lr = 0x82449820;
	sub_825D4220(ctx, base);
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,116(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82449838
	if (ctx.cr6.lt) goto loc_82449838;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82449838:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r10.u8);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// lwz r5,64(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r4,68(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x824494f0
	ctx.lr = 0x82449850;
	sub_824494F0(ctx, base);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
loc_82449854:
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

__attribute__((alias("__imp__sub_82449870"))) PPC_WEAK_FUNC(sub_82449870);
PPC_FUNC_IMPL(__imp__sub_82449870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82449878;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82391468
	ctx.lr = 0x824498A0;
	sub_82391468(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x823900d0
	ctx.lr = 0x824498AC;
	sub_823900D0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r31,116
	ctx.r7.s64 = ctx.r31.s64 + 116;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822951b8
	ctx.lr = 0x824498C8;
	sub_822951B8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824498d8
	if (ctx.cr6.eq) goto loc_824498D8;
	// bl 0x821601b8
	ctx.lr = 0x824498D8;
	sub_821601B8(ctx, base);
loc_824498D8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824498e8
	if (ctx.cr6.eq) goto loc_824498E8;
	// bl 0x82581e38
	ctx.lr = 0x824498E8;
	sub_82581E38(ctx, base);
loc_824498E8:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824498f8
	if (ctx.cr6.eq) goto loc_824498F8;
	// bl 0x82581e38
	ctx.lr = 0x824498F8;
	sub_82581E38(ctx, base);
loc_824498F8:
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82449908
	if (ctx.cr6.eq) goto loc_82449908;
	// bl 0x821601b8
	ctx.lr = 0x82449908;
	sub_821601B8(ctx, base);
loc_82449908:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82449918"))) PPC_WEAK_FUNC(sub_82449918);
PPC_FUNC_IMPL(__imp__sub_82449918) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244996c
	if (ctx.cr6.eq) goto loc_8244996C;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// bl 0x82659610
	ctx.lr = 0x82449948;
	sub_82659610(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x82449950;
	sub_821677D0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823ea858
	ctx.lr = 0x82449958;
	sub_823EA858(ctx, base);
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244996c
	if (ctx.cr6.eq) goto loc_8244996C;
	// bl 0x82631328
	ctx.lr = 0x8244996C;
	sub_82631328(ctx, base);
loc_8244996C:
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82449990
	if (ctx.cr6.eq) goto loc_82449990;
	// bl 0x82644f18
	ctx.lr = 0x8244997C;
	sub_82644F18(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82449990
	if (ctx.cr6.eq) goto loc_82449990;
	// bl 0x82581e38
	ctx.lr = 0x82449990;
	sub_82581E38(ctx, base);
loc_82449990:
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

__attribute__((alias("__imp__sub_824499A8"))) PPC_WEAK_FUNC(sub_824499A8);
PPC_FUNC_IMPL(__imp__sub_824499A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x824499B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq cr6,0x824499d8
	if (ctx.cr6.eq) goto loc_824499D8;
	// bl 0x82659610
	ctx.lr = 0x824499D8;
	sub_82659610(ctx, base);
loc_824499D8:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// beq cr6,0x824499f8
	if (ctx.cr6.eq) goto loc_824499F8;
	// bl 0x82160140
	ctx.lr = 0x824499F8;
	sub_82160140(ctx, base);
loc_824499F8:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82449a08
	if (ctx.cr6.eq) goto loc_82449A08;
	// bl 0x82581e38
	ctx.lr = 0x82449A08;
	sub_82581E38(ctx, base);
loc_82449A08:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82449a18
	if (ctx.cr6.eq) goto loc_82449A18;
	// bl 0x821601b8
	ctx.lr = 0x82449A18;
	sub_821601B8(ctx, base);
loc_82449A18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82449A28"))) PPC_WEAK_FUNC(sub_82449A28);
PPC_FUNC_IMPL(__imp__sub_82449A28) {
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
	ctx.lr = 0x82449A58;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82449a84
	if (ctx.cr6.eq) goto loc_82449A84;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,22668
	ctx.r10.s64 = ctx.r11.s64 + 22668;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82449a88
	goto loc_82449A88;
loc_82449A84:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82449A88:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x82449abc
	if (!ctx.cr6.eq) goto loc_82449ABC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82186190
	ctx.lr = 0x82449A9C;
	sub_82186190(ctx, base);
	// lis r10,-32075
	ctx.r10.s64 = -2102067200;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,-21508(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21508);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x82449ABC;
	sub_821E0968(ctx, base);
loc_82449ABC:
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

__attribute__((alias("__imp__sub_82449AD8"))) PPC_WEAK_FUNC(sub_82449AD8);
PPC_FUNC_IMPL(__imp__sub_82449AD8) {
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
	// bne cr6,0x82449b3c
	if (!ctx.cr6.eq) goto loc_82449B3C;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82186158
	ctx.lr = 0x82449AFC;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82449b48
	if (ctx.cr6.eq) goto loc_82449B48;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82449B14:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82449b14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82449B14;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82449B3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82186190
	ctx.lr = 0x82449B44;
	sub_82186190(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82449B48:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82449B60"))) PPC_WEAK_FUNC(sub_82449B60);
PPC_FUNC_IMPL(__imp__sub_82449B60) {
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
	// bne cr6,0x82449bc0
	if (!ctx.cr6.eq) goto loc_82449BC0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82186158
	ctx.lr = 0x82449B84;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82449bcc
	if (ctx.cr6.eq) goto loc_82449BCC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82449BC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82186190
	ctx.lr = 0x82449BC8;
	sub_82186190(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82449BCC:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82449BE0"))) PPC_WEAK_FUNC(sub_82449BE0);
PPC_FUNC_IMPL(__imp__sub_82449BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82449BE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x82449c18
	if (ctx.cr6.eq) goto loc_82449C18;
	// bl 0x82160140
	ctx.lr = 0x82449C18;
	sub_82160140(ctx, base);
loc_82449C18:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// beq cr6,0x82449c2c
	if (ctx.cr6.eq) goto loc_82449C2C;
	// bl 0x82659610
	ctx.lr = 0x82449C2C;
	sub_82659610(ctx, base);
loc_82449C2C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82449C44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82449c5c
	if (ctx.cr6.eq) goto loc_82449C5C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82581e38
	ctx.lr = 0x82449C5C;
	sub_82581E38(ctx, base);
loc_82449C5C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82449c6c
	if (ctx.cr6.eq) goto loc_82449C6C;
	// bl 0x821601b8
	ctx.lr = 0x82449C6C;
	sub_821601B8(ctx, base);
loc_82449C6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82449C78"))) PPC_WEAK_FUNC(sub_82449C78);
PPC_FUNC_IMPL(__imp__sub_82449C78) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x82449C98;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x82449cb0
	if (ctx.cr6.eq) goto loc_82449CB0;
	// bl 0x821601b8
	ctx.lr = 0x82449CB0;
	sub_821601B8(ctx, base);
loc_82449CB0:
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

__attribute__((alias("__imp__sub_82449CC8"))) PPC_WEAK_FUNC(sub_82449CC8);
PPC_FUNC_IMPL(__imp__sub_82449CC8) {
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
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bgt cr6,0x82449d60
	if (ctx.cr6.gt) goto loc_82449D60;
	// lis r12,-32187
	ctx.r12.s64 = -2109407232;
	// addi r12,r12,-25336
	ctx.r12.s64 = ctx.r12.s64 + -25336;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82449D4C;
	case 1:
		goto loc_82449D4C;
	case 2:
		goto loc_82449D60;
	case 3:
		goto loc_82449D60;
	case 4:
		goto loc_82449D60;
	case 5:
		goto loc_82449D60;
	case 6:
		goto loc_82449D60;
	case 7:
		goto loc_82449D60;
	case 8:
		goto loc_82449D60;
	case 9:
		goto loc_82449D60;
	case 10:
		goto loc_82449D60;
	case 11:
		goto loc_82449D60;
	case 12:
		goto loc_82449D60;
	case 13:
		goto loc_82449D60;
	case 14:
		goto loc_82449D60;
	case 15:
		goto loc_82449D4C;
	case 16:
		goto loc_82449D4C;
	default:
		__builtin_unreachable();
	}
	// lwz r18,-25268(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + -25268);
	// lwz r18,-25268(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + -25268);
	// lwz r18,-25248(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + -25248);
	// lwz r18,-25248(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + -25248);
	// lwz r18,-25248(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + -25248);
	// lwz r18,-25248(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + -25248);
	// lwz r18,-25248(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + -25248);
	// lwz r18,-25248(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + -25248);
	// lwz r18,-25248(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + -25248);
	// lwz r18,-25248(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + -25248);
	// lwz r18,-25248(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + -25248);
	// lwz r18,-25248(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + -25248);
	// lwz r18,-25248(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + -25248);
	// lwz r18,-25248(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + -25248);
	// lwz r18,-25248(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + -25248);
	// lwz r18,-25268(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + -25268);
	// lwz r18,-25268(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + -25268);
loc_82449D4C:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x82449D54;
	sub_821677D0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f1,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82449d70
	goto loc_82449D70;
loc_82449D60:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x82449D68;
	sub_821677D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f1.f64 = double(temp.f32);
loc_82449D70:
	// bl 0x8239c420
	ctx.lr = 0x82449D74;
	sub_8239C420(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x82449D7C;
	sub_821677D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,22656(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22656);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,1400
	ctx.r4.s64 = ctx.r11.s64 + 1400;
	// bl 0x8239c218
	ctx.lr = 0x82449D90;
	sub_8239C218(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x82449D9C;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x82449db4
	if (ctx.cr6.eq) goto loc_82449DB4;
	// bl 0x821601b8
	ctx.lr = 0x82449DB4;
	sub_821601B8(ctx, base);
loc_82449DB4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,6448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6448);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// lfs f1,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8243a8c0
	ctx.lr = 0x82449DCC;
	sub_8243A8C0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x82449DD8;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x82449df0
	if (ctx.cr6.eq) goto loc_82449DF0;
	// bl 0x821601b8
	ctx.lr = 0x82449DF0;
	sub_821601B8(ctx, base);
loc_82449DF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82440008
	ctx.lr = 0x82449DF8;
	sub_82440008(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x82449E04;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x82449e1c
	if (ctx.cr6.eq) goto loc_82449E1C;
	// bl 0x821601b8
	ctx.lr = 0x82449E1C;
	sub_821601B8(ctx, base);
loc_82449E1C:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,132(r30)
	PPC_STORE_U8(ctx.r30.u32 + 132, ctx.r11.u8);
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// lfs f1,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x82449418
	ctx.lr = 0x82449E40;
	sub_82449418(ctx, base);
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// stfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82449e78
	if (ctx.cr6.eq) goto loc_82449E78;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82390710
	ctx.lr = 0x82449E58;
	sub_82390710(ctx, base);
	// bl 0x825d4220
	ctx.lr = 0x82449E5C;
	sub_825D4220(ctx, base);
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82449e74
	if (ctx.cr6.lt) goto loc_82449E74;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82449E74:
	// stb r11,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r11.u8);
loc_82449E78:
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

__attribute__((alias("__imp__sub_82449E90"))) PPC_WEAK_FUNC(sub_82449E90);
PPC_FUNC_IMPL(__imp__sub_82449E90) {
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
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x82449EB4;
	sub_821677D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239c420
	ctx.lr = 0x82449EC0;
	sub_8239C420(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x82449EC8;
	sub_821677D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,-9600
	ctx.r4.s64 = ctx.r11.s64 + -9600;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8239a598
	ctx.lr = 0x82449EE4;
	sub_8239A598(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x82449EF0;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x82449f08
	if (ctx.cr6.eq) goto loc_82449F08;
	// bl 0x821601b8
	ctx.lr = 0x82449F08;
	sub_821601B8(ctx, base);
loc_82449F08:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8243a8a8
	ctx.lr = 0x82449F14;
	sub_8243A8A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x82449F20;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x82449f38
	if (ctx.cr6.eq) goto loc_82449F38;
	// bl 0x821601b8
	ctx.lr = 0x82449F38;
	sub_821601B8(ctx, base);
loc_82449F38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8243cab8
	ctx.lr = 0x82449F44;
	sub_8243CAB8(ctx, base);
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

__attribute__((alias("__imp__sub_82449F60"))) PPC_WEAK_FUNC(sub_82449F60);
PPC_FUNC_IMPL(__imp__sub_82449F60) {
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
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x82449F80;
	sub_821677D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239c420
	ctx.lr = 0x82449F8C;
	sub_8239C420(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x82449F94;
	sub_821677D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,4216
	ctx.r4.s64 = ctx.r11.s64 + 4216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239a598
	ctx.lr = 0x82449FAC;
	sub_8239A598(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x82449FB8;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x82449fd0
	if (ctx.cr6.eq) goto loc_82449FD0;
	// bl 0x821601b8
	ctx.lr = 0x82449FD0;
	sub_821601B8(ctx, base);
loc_82449FD0:
	// lwz r10,1196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,6448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6448);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8243a8c0
	ctx.lr = 0x82449FE8;
	sub_8243A8C0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x82449FF4;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244a00c
	if (ctx.cr6.eq) goto loc_8244A00C;
	// bl 0x821601b8
	ctx.lr = 0x8244A00C;
	sub_821601B8(ctx, base);
loc_8244A00C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82440008
	ctx.lr = 0x8244A014;
	sub_82440008(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244A020;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244a038
	if (ctx.cr6.eq) goto loc_8244A038;
	// bl 0x821601b8
	ctx.lr = 0x8244A038;
	sub_821601B8(ctx, base);
loc_8244A038:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8244A058"))) PPC_WEAK_FUNC(sub_8244A058);
PPC_FUNC_IMPL(__imp__sub_8244A058) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244A078;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244a090
	if (ctx.cr6.eq) goto loc_8244A090;
	// bl 0x821601b8
	ctx.lr = 0x8244A090;
	sub_821601B8(ctx, base);
loc_8244A090:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8244A0B0"))) PPC_WEAK_FUNC(sub_8244A0B0);
PPC_FUNC_IMPL(__imp__sub_8244A0B0) {
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
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244A0D4;
	sub_821677D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6448);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239c420
	ctx.lr = 0x8244A0E0;
	sub_8239C420(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244A0E8;
	sub_821677D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,4372
	ctx.r4.s64 = ctx.r11.s64 + 4372;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8239a598
	ctx.lr = 0x8244A104;
	sub_8239A598(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244A110;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244a128
	if (ctx.cr6.eq) goto loc_8244A128;
	// bl 0x821601b8
	ctx.lr = 0x8244A128;
	sub_821601B8(ctx, base);
loc_8244A128:
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f2,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8243a8c0
	ctx.lr = 0x8244A13C;
	sub_8243A8C0(ctx, base);
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

__attribute__((alias("__imp__sub_8244A158"))) PPC_WEAK_FUNC(sub_8244A158);
PPC_FUNC_IMPL(__imp__sub_8244A158) {
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
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244A17C;
	sub_821677D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6448);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239c420
	ctx.lr = 0x8244A188;
	sub_8239C420(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244A190;
	sub_821677D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,4372
	ctx.r4.s64 = ctx.r11.s64 + 4372;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8239a598
	ctx.lr = 0x8244A1AC;
	sub_8239A598(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244A1B8;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244a1d0
	if (ctx.cr6.eq) goto loc_8244A1D0;
	// bl 0x821601b8
	ctx.lr = 0x8244A1D0;
	sub_821601B8(ctx, base);
loc_8244A1D0:
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f2,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8243a8c0
	ctx.lr = 0x8244A1E4;
	sub_8243A8C0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244A1F0;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244a208
	if (ctx.cr6.eq) goto loc_8244A208;
	// bl 0x821601b8
	ctx.lr = 0x8244A208;
	sub_821601B8(ctx, base);
loc_8244A208:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f31,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f31.f64 = double(temp.f32);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244A218;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244a230
	if (ctx.cr6.eq) goto loc_8244A230;
	// bl 0x821601b8
	ctx.lr = 0x8244A230;
	sub_821601B8(ctx, base);
loc_8244A230:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8243cb28
	ctx.lr = 0x8244A238;
	sub_8243CB28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244a280
	if (ctx.cr6.eq) goto loc_8244A280;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82393060
	ctx.lr = 0x8244A250;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244a268
	if (ctx.cr6.eq) goto loc_8244A268;
	// bl 0x821601b8
	ctx.lr = 0x8244A268;
	sub_821601B8(ctx, base);
loc_8244A268:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-29804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-22124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -22124);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f1,f0,f13,f31
	ctx.f1.f64 = double(float(-(ctx.f0.f64 * ctx.f13.f64 - ctx.f31.f64)));
	// b 0x8244a2b4
	goto loc_8244A2B4;
loc_8244A280:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82393060
	ctx.lr = 0x8244A288;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244a2a0
	if (ctx.cr6.eq) goto loc_8244A2A0;
	// bl 0x821601b8
	ctx.lr = 0x8244A2A0;
	sub_821601B8(ctx, base);
loc_8244A2A0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-29804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-22124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -22124);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f0,f13,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f31.f64));
loc_8244A2B4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244A2C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244A2D4;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244a2ec
	if (ctx.cr6.eq) goto loc_8244A2EC;
	// bl 0x821601b8
	ctx.lr = 0x8244A2EC;
	sub_821601B8(ctx, base);
loc_8244A2EC:
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8243cab8
	ctx.lr = 0x8244A2FC;
	sub_8243CAB8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244A308;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244a320
	if (ctx.cr6.eq) goto loc_8244A320;
	// bl 0x821601b8
	ctx.lr = 0x8244A320;
	sub_821601B8(ctx, base);
loc_8244A320:
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8243cac0
	ctx.lr = 0x8244A330;
	sub_8243CAC0(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244A33C;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244a354
	if (ctx.cr6.eq) goto loc_8244A354;
	// bl 0x821601b8
	ctx.lr = 0x8244A354;
	sub_821601B8(ctx, base);
loc_8244A354:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8244A378"))) PPC_WEAK_FUNC(sub_8244A378);
PPC_FUNC_IMPL(__imp__sub_8244A378) {
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
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244A394;
	sub_821677D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823e78f0
	ctx.lr = 0x8244A39C;
	sub_823E78F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82449918
	ctx.lr = 0x8244A3A4;
	sub_82449918(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8244A3B8"))) PPC_WEAK_FUNC(sub_8244A3B8);
PPC_FUNC_IMPL(__imp__sub_8244A3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8244A3C0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244A3D4;
	sub_821677D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6448);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239c420
	ctx.lr = 0x8244A3E0;
	sub_8239C420(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244A3E8;
	sub_821677D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,4372
	ctx.r4.s64 = ctx.r11.s64 + 4372;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8239a598
	ctx.lr = 0x8244A404;
	sub_8239A598(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244A410;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244a428
	if (ctx.cr6.eq) goto loc_8244A428;
	// bl 0x821601b8
	ctx.lr = 0x8244A428;
	sub_821601B8(ctx, base);
loc_8244A428:
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f2,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8243a8c0
	ctx.lr = 0x8244A43C;
	sub_8243A8C0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244A448;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244a460
	if (ctx.cr6.eq) goto loc_8244A460;
	// bl 0x821601b8
	ctx.lr = 0x8244A460;
	sub_821601B8(ctx, base);
loc_8244A460:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82440418
	ctx.lr = 0x8244A468;
	sub_82440418(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244A474;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244a48c
	if (ctx.cr6.eq) goto loc_8244A48C;
	// bl 0x821601b8
	ctx.lr = 0x8244A48C;
	sub_821601B8(ctx, base);
loc_8244A48C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8243dc48
	ctx.lr = 0x8244A498;
	sub_8243DC48(ctx, base);
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f1,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825d2350
	ctx.lr = 0x8244A4AC;
	sub_825D2350(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f1,3548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825d2350
	ctx.lr = 0x8244A4C0;
	sub_825D2350(ctx, base);
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f0,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f0,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x82392bb8
	ctx.lr = 0x8244A4F8;
	sub_82392BB8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82393060
	ctx.lr = 0x8244A508;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244a520
	if (ctx.cr6.eq) goto loc_8244A520;
	// bl 0x821601b8
	ctx.lr = 0x8244A520;
	sub_821601B8(ctx, base);
loc_8244A520:
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243d1d8
	ctx.lr = 0x8244A530;
	sub_8243D1D8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244A53C;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244a554
	if (ctx.cr6.eq) goto loc_8244A554;
	// bl 0x821601b8
	ctx.lr = 0x8244A554;
	sub_821601B8(ctx, base);
loc_8244A554:
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8243cab8
	ctx.lr = 0x8244A564;
	sub_8243CAB8(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244A570;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244a588
	if (ctx.cr6.eq) goto loc_8244A588;
	// bl 0x821601b8
	ctx.lr = 0x8244A588;
	sub_821601B8(ctx, base);
loc_8244A588:
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8243cac0
	ctx.lr = 0x8244A598;
	sub_8243CAC0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244A5A4;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244a5bc
	if (ctx.cr6.eq) goto loc_8244A5BC;
	// bl 0x821601b8
	ctx.lr = 0x8244A5BC;
	sub_821601B8(ctx, base);
loc_8244A5BC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r11.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244A5D0"))) PPC_WEAK_FUNC(sub_8244A5D0);
PPC_FUNC_IMPL(__imp__sub_8244A5D0) {
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
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244A5F4;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244a60c
	if (ctx.cr6.eq) goto loc_8244A60C;
	// bl 0x821601b8
	ctx.lr = 0x8244A60C;
	sub_821601B8(ctx, base);
loc_8244A60C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8243cab8
	ctx.lr = 0x8244A618;
	sub_8243CAB8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244A624;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244a63c
	if (ctx.cr6.eq) goto loc_8244A63C;
	// bl 0x821601b8
	ctx.lr = 0x8244A63C;
	sub_821601B8(ctx, base);
loc_8244A63C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8244A660"))) PPC_WEAK_FUNC(sub_8244A660);
PPC_FUNC_IMPL(__imp__sub_8244A660) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244A680;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244a698
	if (ctx.cr6.eq) goto loc_8244A698;
	// bl 0x821601b8
	ctx.lr = 0x8244A698;
	sub_821601B8(ctx, base);
loc_8244A698:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243d550
	ctx.lr = 0x8244A6A4;
	sub_8243D550(ctx, base);
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

__attribute__((alias("__imp__sub_8244A6B8"))) PPC_WEAK_FUNC(sub_8244A6B8);
PPC_FUNC_IMPL(__imp__sub_8244A6B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8244A6C0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244A6D8;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244a6f0
	if (ctx.cr6.eq) goto loc_8244A6F0;
	// bl 0x821601b8
	ctx.lr = 0x8244A6F0;
	sub_821601B8(ctx, base);
loc_8244A6F0:
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8243cab8
	ctx.lr = 0x8244A700;
	sub_8243CAB8(ctx, base);
	// lbz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244a7d8
	if (ctx.cr6.eq) goto loc_8244A7D8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244A718;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244a730
	if (ctx.cr6.eq) goto loc_8244A730;
	// bl 0x821601b8
	ctx.lr = 0x8244A730;
	sub_821601B8(ctx, base);
loc_8244A730:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8243d650
	ctx.lr = 0x8244A73C;
	sub_8243D650(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244A74C;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244a764
	if (ctx.cr6.eq) goto loc_8244A764;
	// bl 0x821601b8
	ctx.lr = 0x8244A764;
	sub_821601B8(ctx, base);
loc_8244A764:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243d168
	ctx.lr = 0x8244A770;
	sub_8243D168(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244A77C;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244a794
	if (ctx.cr6.eq) goto loc_8244A794;
	// bl 0x821601b8
	ctx.lr = 0x8244A794;
	sub_821601B8(ctx, base);
loc_8244A794:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8243d650
	ctx.lr = 0x8244A7A0;
	sub_8243D650(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244A7B0;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244a7c8
	if (ctx.cr6.eq) goto loc_8244A7C8;
	// bl 0x821601b8
	ctx.lr = 0x8244A7C8;
	sub_821601B8(ctx, base);
loc_8244A7C8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82440350
	ctx.lr = 0x8244A7D4;
	sub_82440350(ctx, base);
	// b 0x8244a850
	goto loc_8244A850;
loc_8244A7D8:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82392bb8
	ctx.lr = 0x8244A7E0;
	sub_82392BB8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82393060
	ctx.lr = 0x8244A7F0;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244a808
	if (ctx.cr6.eq) goto loc_8244A808;
	// bl 0x821601b8
	ctx.lr = 0x8244A808;
	sub_821601B8(ctx, base);
loc_8244A808:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243d0c8
	ctx.lr = 0x8244A814;
	sub_8243D0C8(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82392bb8
	ctx.lr = 0x8244A81C;
	sub_82392BB8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244A82C;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244a844
	if (ctx.cr6.eq) goto loc_8244A844;
	// bl 0x821601b8
	ctx.lr = 0x8244A844;
	sub_821601B8(ctx, base);
loc_8244A844:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82440398
	ctx.lr = 0x8244A850;
	sub_82440398(ctx, base);
loc_8244A850:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244A858;
	sub_821677D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6448);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239c420
	ctx.lr = 0x8244A864;
	sub_8239C420(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244A870;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244a888
	if (ctx.cr6.eq) goto loc_8244A888;
	// bl 0x821601b8
	ctx.lr = 0x8244A888;
	sub_821601B8(ctx, base);
loc_8244A888:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8243caf8
	ctx.lr = 0x8244A890;
	sub_8243CAF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244a8b0
	if (ctx.cr6.eq) goto loc_8244A8B0;
	// bl 0x821677d0
	ctx.lr = 0x8244A8A4;
	sub_821677D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,4168
	ctx.r4.s64 = ctx.r11.s64 + 4168;
	// b 0x8244a8bc
	goto loc_8244A8BC;
loc_8244A8B0:
	// bl 0x821677d0
	ctx.lr = 0x8244A8B4;
	sub_821677D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,4152
	ctx.r4.s64 = ctx.r11.s64 + 4152;
loc_8244A8BC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,1196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,3544
	ctx.r11.s64 = ctx.r11.s64 + 3544;
	// lfs f13,52(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lfs f0,22684(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22684);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x8239a630
	ctx.lr = 0x8244A8E8;
	sub_8239A630(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244A8F4;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244a90c
	if (ctx.cr6.eq) goto loc_8244A90C;
	// bl 0x821601b8
	ctx.lr = 0x8244A90C;
	sub_821601B8(ctx, base);
loc_8244A90C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8243a8a8
	ctx.lr = 0x8244A918;
	sub_8243A8A8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244A928"))) PPC_WEAK_FUNC(sub_8244A928);
PPC_FUNC_IMPL(__imp__sub_8244A928) {
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
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244A948;
	sub_821677D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6448);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239c420
	ctx.lr = 0x8244A954;
	sub_8239C420(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244A95C;
	sub_821677D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,984
	ctx.r4.s64 = ctx.r11.s64 + 984;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8239a598
	ctx.lr = 0x8244A978;
	sub_8239A598(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244A984;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244a99c
	if (ctx.cr6.eq) goto loc_8244A99C;
	// bl 0x821601b8
	ctx.lr = 0x8244A99C;
	sub_821601B8(ctx, base);
loc_8244A99C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8243a8a8
	ctx.lr = 0x8244A9A8;
	sub_8243A8A8(ctx, base);
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

__attribute__((alias("__imp__sub_8244A9C0"))) PPC_WEAK_FUNC(sub_8244A9C0);
PPC_FUNC_IMPL(__imp__sub_8244A9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8244A9C8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244A9E0;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244a9f8
	if (ctx.cr6.eq) goto loc_8244A9F8;
	// bl 0x821601b8
	ctx.lr = 0x8244A9F8;
	sub_821601B8(ctx, base);
loc_8244A9F8:
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8243cab8
	ctx.lr = 0x8244AA08;
	sub_8243CAB8(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82392bb8
	ctx.lr = 0x8244AA10;
	sub_82392BB8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82393060
	ctx.lr = 0x8244AA20;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244aa38
	if (ctx.cr6.eq) goto loc_8244AA38;
	// bl 0x821601b8
	ctx.lr = 0x8244AA38;
	sub_821601B8(ctx, base);
loc_8244AA38:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243d0c8
	ctx.lr = 0x8244AA44;
	sub_8243D0C8(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82392bb8
	ctx.lr = 0x8244AA4C;
	sub_82392BB8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244AA5C;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244aa74
	if (ctx.cr6.eq) goto loc_8244AA74;
	// bl 0x821601b8
	ctx.lr = 0x8244AA74;
	sub_821601B8(ctx, base);
loc_8244AA74:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82440398
	ctx.lr = 0x8244AA80;
	sub_82440398(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244AA88;
	sub_821677D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6448);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239c420
	ctx.lr = 0x8244AA94;
	sub_8239C420(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244AAA0;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244aab8
	if (ctx.cr6.eq) goto loc_8244AAB8;
	// bl 0x821601b8
	ctx.lr = 0x8244AAB8;
	sub_821601B8(ctx, base);
loc_8244AAB8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8243caf8
	ctx.lr = 0x8244AAC0;
	sub_8243CAF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244aae0
	if (ctx.cr6.eq) goto loc_8244AAE0;
	// bl 0x821677d0
	ctx.lr = 0x8244AAD4;
	sub_821677D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,4168
	ctx.r4.s64 = ctx.r11.s64 + 4168;
	// b 0x8244aaec
	goto loc_8244AAEC;
loc_8244AAE0:
	// bl 0x821677d0
	ctx.lr = 0x8244AAE4;
	sub_821677D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,4152
	ctx.r4.s64 = ctx.r11.s64 + 4152;
loc_8244AAEC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,1196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,3544
	ctx.r11.s64 = ctx.r11.s64 + 3544;
	// lfs f13,52(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lfs f0,22684(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22684);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x8239a630
	ctx.lr = 0x8244AB18;
	sub_8239A630(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244AB24;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244ab3c
	if (ctx.cr6.eq) goto loc_8244AB3C;
	// bl 0x821601b8
	ctx.lr = 0x8244AB3C;
	sub_821601B8(ctx, base);
loc_8244AB3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8243a8a8
	ctx.lr = 0x8244AB48;
	sub_8243A8A8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244AB58"))) PPC_WEAK_FUNC(sub_8244AB58);
PPC_FUNC_IMPL(__imp__sub_8244AB58) {
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
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244AB7C;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244ab94
	if (ctx.cr6.eq) goto loc_8244AB94;
	// bl 0x821601b8
	ctx.lr = 0x8244AB94;
	sub_821601B8(ctx, base);
loc_8244AB94:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8243cab8
	ctx.lr = 0x8244ABA0;
	sub_8243CAB8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244ABAC;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244abc4
	if (ctx.cr6.eq) goto loc_8244ABC4;
	// bl 0x821601b8
	ctx.lr = 0x8244ABC4;
	sub_821601B8(ctx, base);
loc_8244ABC4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243d550
	ctx.lr = 0x8244ABD0;
	sub_8243D550(ctx, base);
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

__attribute__((alias("__imp__sub_8244ABE8"))) PPC_WEAK_FUNC(sub_8244ABE8);
PPC_FUNC_IMPL(__imp__sub_8244ABE8) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244AC0C;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244ac24
	if (ctx.cr6.eq) goto loc_8244AC24;
	// bl 0x821601b8
	ctx.lr = 0x8244AC24;
	sub_821601B8(ctx, base);
loc_8244AC24:
	// lbz r11,93(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 93);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244ac98
	if (ctx.cr6.eq) goto loc_8244AC98;
	// lbz r11,58(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 58);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244ac98
	if (!ctx.cr6.eq) goto loc_8244AC98;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgt cr6,0x8244aca0
	if (ctx.cr6.gt) goto loc_8244ACA0;
	// lis r12,-32187
	ctx.r12.s64 = -2109407232;
	// addi r12,r12,-21404
	ctx.r12.s64 = ctx.r12.s64 + -21404;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8244AC98;
	case 1:
		goto loc_8244ACA0;
	case 2:
		goto loc_8244ACA0;
	case 3:
		goto loc_8244ACA0;
	case 4:
		goto loc_8244ACA0;
	case 5:
		goto loc_8244ACA0;
	case 6:
		goto loc_8244AC98;
	case 7:
		goto loc_8244ACA0;
	case 8:
		goto loc_8244ACA0;
	case 9:
		goto loc_8244AC98;
	case 10:
		goto loc_8244ACA0;
	case 11:
		goto loc_8244ACA0;
	case 12:
		goto loc_8244AC98;
	default:
		__builtin_unreachable();
	}
	// lwz r18,-21352(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + -21352);
	// lwz r18,-21344(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + -21344);
	// lwz r18,-21344(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + -21344);
	// lwz r18,-21344(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + -21344);
	// lwz r18,-21344(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + -21344);
	// lwz r18,-21344(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + -21344);
	// lwz r18,-21352(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + -21352);
	// lwz r18,-21344(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + -21344);
	// lwz r18,-21344(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + -21344);
	// lwz r18,-21352(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + -21352);
	// lwz r18,-21344(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + -21344);
	// lwz r18,-21344(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + -21344);
	// lwz r18,-21352(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + -21352);
loc_8244AC98:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8244aca4
	goto loc_8244ACA4;
loc_8244ACA0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8244ACA4:
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

__attribute__((alias("__imp__sub_8244ACC0"))) PPC_WEAK_FUNC(sub_8244ACC0);
PPC_FUNC_IMPL(__imp__sub_8244ACC0) {
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
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244ACE0;
	sub_821677D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6448);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239c420
	ctx.lr = 0x8244ACEC;
	sub_8239C420(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244ACF4;
	sub_821677D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,1088
	ctx.r4.s64 = ctx.r11.s64 + 1088;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8239a598
	ctx.lr = 0x8244AD10;
	sub_8239A598(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244AD1C;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244ad34
	if (ctx.cr6.eq) goto loc_8244AD34;
	// bl 0x821601b8
	ctx.lr = 0x8244AD34;
	sub_821601B8(ctx, base);
loc_8244AD34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8243a8a8
	ctx.lr = 0x8244AD40;
	sub_8243A8A8(ctx, base);
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

__attribute__((alias("__imp__sub_8244AD58"))) PPC_WEAK_FUNC(sub_8244AD58);
PPC_FUNC_IMPL(__imp__sub_8244AD58) {
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
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,12300
	ctx.r11.u64 = ctx.r11.u64 | 12300;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82392bb8
	ctx.lr = 0x8244AD8C;
	sub_82392BB8(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244ADA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244ae30
	if (ctx.cr6.eq) goto loc_8244AE30;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82629338
	ctx.lr = 0x8244ADB8;
	sub_82629338(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x823e78e0
	ctx.lr = 0x8244ADC0;
	sub_823E78E0(ctx, base);
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,9696
	ctx.r6.s64 = ctx.r11.s64 + 9696;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,2352
	ctx.r5.s64 = ctx.r11.s64 + 2352;
	// bl 0x826df418
	ctx.lr = 0x8244ADDC;
	sub_826DF418(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r11,r11,16390
	ctx.r11.u64 = ctx.r11.u64 | 16390;
	// addi r4,r31,168
	ctx.r4.s64 = ctx.r31.s64 + 168;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stb r11,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r11.u8);
	// bl 0x8221f3c8
	ctx.lr = 0x8244AE08;
	sub_8221F3C8(ctx, base);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244AE20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244ae30
	if (ctx.cr6.eq) goto loc_8244AE30;
	// bl 0x821601b8
	ctx.lr = 0x8244AE30;
	sub_821601B8(ctx, base);
loc_8244AE30:
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,15132
	ctx.r6.s64 = ctx.r11.s64 + 15132;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,11780
	ctx.r5.s64 = ctx.r11.s64 + 11780;
	// bl 0x826df418
	ctx.lr = 0x8244AE50;
	sub_826DF418(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244ae64
	if (ctx.cr6.eq) goto loc_8244AE64;
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// lfs f0,144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,224(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
loc_8244AE64:
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

__attribute__((alias("__imp__sub_8244AE80"))) PPC_WEAK_FUNC(sub_8244AE80);
PPC_FUNC_IMPL(__imp__sub_8244AE80) {
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
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,12300
	ctx.r11.u64 = ctx.r11.u64 | 12300;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82392bb8
	ctx.lr = 0x8244AEB4;
	sub_82392BB8(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244AECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244af58
	if (ctx.cr6.eq) goto loc_8244AF58;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82629338
	ctx.lr = 0x8244AEE0;
	sub_82629338(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x823e78e0
	ctx.lr = 0x8244AEE8;
	sub_823E78E0(ctx, base);
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,9696
	ctx.r6.s64 = ctx.r11.s64 + 9696;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,2352
	ctx.r5.s64 = ctx.r11.s64 + 2352;
	// bl 0x826df418
	ctx.lr = 0x8244AF04;
	sub_826DF418(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r11,r11,16390
	ctx.r11.u64 = ctx.r11.u64 | 16390;
	// addi r4,r31,168
	ctx.r4.s64 = ctx.r31.s64 + 168;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stb r11,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r11.u8);
	// bl 0x8221f3c8
	ctx.lr = 0x8244AF30;
	sub_8221F3C8(ctx, base);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244AF48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244af58
	if (ctx.cr6.eq) goto loc_8244AF58;
	// bl 0x821601b8
	ctx.lr = 0x8244AF58;
	sub_821601B8(ctx, base);
loc_8244AF58:
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,15132
	ctx.r6.s64 = ctx.r11.s64 + 15132;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,11780
	ctx.r5.s64 = ctx.r11.s64 + 11780;
	// bl 0x826df418
	ctx.lr = 0x8244AF78;
	sub_826DF418(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244af88
	if (ctx.cr6.eq) goto loc_8244AF88;
	// lfs f0,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,224(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
loc_8244AF88:
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

__attribute__((alias("__imp__sub_8244AFA0"))) PPC_WEAK_FUNC(sub_8244AFA0);
PPC_FUNC_IMPL(__imp__sub_8244AFA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8244AFA8;
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
	// lis r11,1
	ctx.r11.s64 = 65536;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,12300
	ctx.r11.u64 = ctx.r11.u64 | 12300;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82392bb8
	ctx.lr = 0x8244AFD8;
	sub_82392BB8(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244AFF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244b10c
	if (ctx.cr6.eq) goto loc_8244B10C;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82629338
	ctx.lr = 0x8244B004;
	sub_82629338(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x823e78e0
	ctx.lr = 0x8244B00C;
	sub_823E78E0(ctx, base);
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,9696
	ctx.r6.s64 = ctx.r11.s64 + 9696;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,2352
	ctx.r5.s64 = ctx.r11.s64 + 2352;
	// bl 0x826df418
	ctx.lr = 0x8244B028;
	sub_826DF418(ctx, base);
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// addi r29,r31,168
	ctx.r29.s64 = ctx.r31.s64 + 168;
	// addi r6,r11,-32520
	ctx.r6.s64 = ctx.r11.s64 + -32520;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,11780
	ctx.r5.s64 = ctx.r11.s64 + 11780;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x826df418
	ctx.lr = 0x8244B050;
	sub_826DF418(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lfs f31,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x8244b0a4
	if (ctx.cr6.eq) goto loc_8244B0A4;
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// lfs f1,220(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82448590
	ctx.lr = 0x8244B070;
	sub_82448590(ctx, base);
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,228(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x825c16f0
	ctx.lr = 0x8244B09C;
	sub_825C16F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82448598
	ctx.lr = 0x8244B0A4;
	sub_82448598(ctx, base);
loc_8244B0A4:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stfs f31,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x8221f3c8
	ctx.lr = 0x8244B0D4;
	sub_8221F3C8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f30,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r3,r28,32
	ctx.r3.s64 = ctx.r28.s64 + 32;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244B0FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244b10c
	if (ctx.cr6.eq) goto loc_8244B10C;
	// bl 0x821601b8
	ctx.lr = 0x8244B10C;
	sub_821601B8(ctx, base);
loc_8244B10C:
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

__attribute__((alias("__imp__sub_8244B120"))) PPC_WEAK_FUNC(sub_8244B120);
PPC_FUNC_IMPL(__imp__sub_8244B120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8244B128;
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
	// lis r11,1
	ctx.r11.s64 = 65536;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,12300
	ctx.r11.u64 = ctx.r11.u64 | 12300;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82392bb8
	ctx.lr = 0x8244B158;
	sub_82392BB8(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244B170;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244b294
	if (ctx.cr6.eq) goto loc_8244B294;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82629338
	ctx.lr = 0x8244B184;
	sub_82629338(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x823e78e0
	ctx.lr = 0x8244B18C;
	sub_823E78E0(ctx, base);
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,9696
	ctx.r6.s64 = ctx.r11.s64 + 9696;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,2352
	ctx.r5.s64 = ctx.r11.s64 + 2352;
	// bl 0x826df418
	ctx.lr = 0x8244B1A8;
	sub_826DF418(ctx, base);
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// addi r29,r31,168
	ctx.r29.s64 = ctx.r31.s64 + 168;
	// addi r6,r11,-32520
	ctx.r6.s64 = ctx.r11.s64 + -32520;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,11780
	ctx.r5.s64 = ctx.r11.s64 + 11780;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x826df418
	ctx.lr = 0x8244B1D0;
	sub_826DF418(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lfs f31,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x8244b22c
	if (ctx.cr6.eq) goto loc_8244B22C;
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// lfs f1,272(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82448590
	ctx.lr = 0x8244B1F0;
	sub_82448590(ctx, base);
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,280(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,276(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x825c16f0
	ctx.lr = 0x8244B21C;
	sub_825C16F0(ctx, base);
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,296(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821f6298
	ctx.lr = 0x8244B22C;
	sub_821F6298(ctx, base);
loc_8244B22C:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stfs f31,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x8221f3c8
	ctx.lr = 0x8244B25C;
	sub_8221F3C8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f30,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r3,r28,32
	ctx.r3.s64 = ctx.r28.s64 + 32;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244B284;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244b294
	if (ctx.cr6.eq) goto loc_8244B294;
	// bl 0x821601b8
	ctx.lr = 0x8244B294;
	sub_821601B8(ctx, base);
loc_8244B294:
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

__attribute__((alias("__imp__sub_8244B2A8"))) PPC_WEAK_FUNC(sub_8244B2A8);
PPC_FUNC_IMPL(__imp__sub_8244B2A8) {
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
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244B2C8;
	sub_821677D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6448);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239c420
	ctx.lr = 0x8244B2D4;
	sub_8239C420(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244B2DC;
	sub_821677D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,4272
	ctx.r4.s64 = ctx.r11.s64 + 4272;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,22652(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22652);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239c218
	ctx.lr = 0x8244B2F0;
	sub_8239C218(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244B2FC;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244b314
	if (ctx.cr6.eq) goto loc_8244B314;
	// bl 0x821601b8
	ctx.lr = 0x8244B314;
	sub_821601B8(ctx, base);
loc_8244B314:
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8243a8a8
	ctx.lr = 0x8244B324;
	sub_8243A8A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244B330;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244b348
	if (ctx.cr6.eq) goto loc_8244B348;
	// bl 0x821601b8
	ctx.lr = 0x8244B348;
	sub_821601B8(ctx, base);
loc_8244B348:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82440018
	ctx.lr = 0x8244B350;
	sub_82440018(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,1196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,140(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,6100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x82449418
	ctx.lr = 0x8244B374;
	sub_82449418(ctx, base);
	// stfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
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

__attribute__((alias("__imp__sub_8244B390"))) PPC_WEAK_FUNC(sub_8244B390);
PPC_FUNC_IMPL(__imp__sub_8244B390) {
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
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244B3B4;
	sub_821677D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6448);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239c420
	ctx.lr = 0x8244B3C0;
	sub_8239C420(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244B3C8;
	sub_821677D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,4372
	ctx.r4.s64 = ctx.r11.s64 + 4372;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8239a598
	ctx.lr = 0x8244B3E4;
	sub_8239A598(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244B3F0;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244b408
	if (ctx.cr6.eq) goto loc_8244B408;
	// bl 0x821601b8
	ctx.lr = 0x8244B408;
	sub_821601B8(ctx, base);
loc_8244B408:
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f2,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8243a8c0
	ctx.lr = 0x8244B41C;
	sub_8243A8C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,59(r31)
	PPC_STORE_U8(ctx.r31.u32 + 59, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8244B440"))) PPC_WEAK_FUNC(sub_8244B440);
PPC_FUNC_IMPL(__imp__sub_8244B440) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,1196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1196);
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82393060
	ctx.lr = 0x8244B490;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244b4a8
	if (ctx.cr6.eq) goto loc_8244B4A8;
	// bl 0x821601b8
	ctx.lr = 0x8244B4A8;
	sub_821601B8(ctx, base);
loc_8244B4A8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243cbf8
	ctx.lr = 0x8244B4B4;
	sub_8243CBF8(ctx, base);
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

__attribute__((alias("__imp__sub_8244B4C8"))) PPC_WEAK_FUNC(sub_8244B4C8);
PPC_FUNC_IMPL(__imp__sub_8244B4C8) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244B4EC;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244b504
	if (ctx.cr6.eq) goto loc_8244B504;
	// bl 0x821601b8
	ctx.lr = 0x8244B504;
	sub_821601B8(ctx, base);
loc_8244B504:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8243cab8
	ctx.lr = 0x8244B510;
	sub_8243CAB8(ctx, base);
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

__attribute__((alias("__imp__sub_8244B528"))) PPC_WEAK_FUNC(sub_8244B528);
PPC_FUNC_IMPL(__imp__sub_8244B528) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stb r11,58(r31)
	PPC_STORE_U8(ctx.r31.u32 + 58, ctx.r11.u8);
	// stb r11,59(r31)
	PPC_STORE_U8(ctx.r31.u32 + 59, ctx.r11.u8);
	// bl 0x82393060
	ctx.lr = 0x8244B558;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244b570
	if (ctx.cr6.eq) goto loc_8244B570;
	// bl 0x821601b8
	ctx.lr = 0x8244B570;
	sub_821601B8(ctx, base);
loc_8244B570:
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r5,256(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// addi r4,r31,1204
	ctx.r4.s64 = ctx.r31.s64 + 1204;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82394d08
	ctx.lr = 0x8244B584;
	sub_82394D08(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// ori r11,r11,6
	ctx.r11.u64 = ctx.r11.u64 | 6;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x82392bb8
	ctx.lr = 0x8244B598;
	sub_82392BB8(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244B5B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,4137
	ctx.r11.u64 = ctx.r11.u64 | 4137;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// lfs f0,156(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// bl 0x82393060
	ctx.lr = 0x8244B5E4;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244b5fc
	if (ctx.cr6.eq) goto loc_8244B5FC;
	// bl 0x821601b8
	ctx.lr = 0x8244B5FC;
	sub_821601B8(ctx, base);
loc_8244B5FC:
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// lfs f0,120(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f13,164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// lfs f3,168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f1,160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82449588
	ctx.lr = 0x8244B620;
	sub_82449588(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82392bb8
	ctx.lr = 0x8244B638;
	sub_82392BB8(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244B650;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244B658;
	sub_821677D0(ctx, base);
	// bl 0x823e7940
	ctx.lr = 0x8244B65C;
	sub_823E7940(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8244B678"))) PPC_WEAK_FUNC(sub_8244B678);
PPC_FUNC_IMPL(__imp__sub_8244B678) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,6
	ctx.r10.u64 = ctx.r10.u64 | 6;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stb r11,58(r31)
	PPC_STORE_U8(ctx.r31.u32 + 58, ctx.r11.u8);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x82392bb8
	ctx.lr = 0x8244B6B0;
	sub_82392BB8(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244B6C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,4140
	ctx.r11.u64 = ctx.r11.u64 | 4140;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// lfs f0,184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// bl 0x82393060
	ctx.lr = 0x8244B6FC;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244b714
	if (ctx.cr6.eq) goto loc_8244B714;
	// bl 0x821601b8
	ctx.lr = 0x8244B714;
	sub_821601B8(ctx, base);
loc_8244B714:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8243dc48
	ctx.lr = 0x8244B720;
	sub_8243DC48(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x825d2200
	ctx.lr = 0x8244B734;
	sub_825D2200(ctx, base);
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,176(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f0,f1
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// bl 0x825d22a0
	ctx.lr = 0x8244B748;
	sub_825D22A0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825d2330
	ctx.lr = 0x8244B754;
	sub_825D2330(ctx, base);
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lfs f0,180(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82392bb8
	ctx.lr = 0x8244B778;
	sub_82392BB8(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244B790;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244B798;
	sub_821677D0(ctx, base);
	// bl 0x823e7930
	ctx.lr = 0x8244B79C;
	sub_823E7930(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82390028
	ctx.lr = 0x8244B7A4;
	sub_82390028(ctx, base);
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

__attribute__((alias("__imp__sub_8244B7C0"))) PPC_WEAK_FUNC(sub_8244B7C0);
PPC_FUNC_IMPL(__imp__sub_8244B7C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8244B7C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,12300
	ctx.r11.u64 = ctx.r11.u64 | 12300;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82392bb8
	ctx.lr = 0x8244B7EC;
	sub_82392BB8(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82392bb8
	ctx.lr = 0x8244B7F4;
	sub_82392BB8(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244B80C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244b918
	if (ctx.cr6.eq) goto loc_8244B918;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82629338
	ctx.lr = 0x8244B820;
	sub_82629338(ctx, base);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x823e78e0
	ctx.lr = 0x8244B828;
	sub_823E78E0(ctx, base);
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,9696
	ctx.r6.s64 = ctx.r11.s64 + 9696;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,2352
	ctx.r5.s64 = ctx.r11.s64 + 2352;
	// bl 0x826df418
	ctx.lr = 0x8244B844;
	sub_826DF418(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r30,92(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x8244b868
	if (ctx.cr6.eq) goto loc_8244B868;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82160140
	ctx.lr = 0x8244B868;
	sub_82160140(ctx, base);
loc_8244B868:
	// addi r28,r31,160
	ctx.r28.s64 = ctx.r31.s64 + 160;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8221f3c8
	ctx.lr = 0x8244B878;
	sub_8221F3C8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8244b888
	if (ctx.cr6.eq) goto loc_8244B888;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821601b8
	ctx.lr = 0x8244B888;
	sub_821601B8(ctx, base);
loc_8244B888:
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,15132
	ctx.r6.s64 = ctx.r11.s64 + 15132;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,11780
	ctx.r5.s64 = ctx.r11.s64 + 11780;
	// bl 0x826df418
	ctx.lr = 0x8244B8A8;
	sub_826DF418(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244b8c0
	if (ctx.cr6.eq) goto loc_8244B8C0;
	// addi r11,r3,224
	ctx.r11.s64 = ctx.r3.s64 + 224;
	// addi r10,r31,144
	ctx.r10.s64 = ctx.r31.s64 + 144;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8244B8C0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82390048
	ctx.lr = 0x8244B8CC;
	sub_82390048(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82392bb8
	ctx.lr = 0x8244B8D8;
	sub_82392BB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82448b88
	ctx.lr = 0x8244B8FC;
	sub_82448B88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x8221f3c8
	ctx.lr = 0x8244B908;
	sub_8221F3C8(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244b918
	if (ctx.cr6.eq) goto loc_8244B918;
	// bl 0x821601b8
	ctx.lr = 0x8244B918;
	sub_821601B8(ctx, base);
loc_8244B918:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244B920"))) PPC_WEAK_FUNC(sub_8244B920);
PPC_FUNC_IMPL(__imp__sub_8244B920) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// stw r4,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r4.u32);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32187
	ctx.r12.s64 = -2109407232;
	// addi r12,r12,-18096
	ctx.r12.s64 = ctx.r12.s64 + -18096;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_8244B960;
	case 1:
		goto loc_8244B964;
	case 2:
		goto loc_8244B968;
	case 3:
		goto loc_8244B96C;
	default:
		__builtin_unreachable();
	}
	// lwz r18,-18080(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + -18080);
	// lwz r18,-18076(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + -18076);
	// lwz r18,-18072(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + -18072);
	// lwz r18,-18068(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + -18068);
loc_8244B960:
	// b 0x8244ae80
	sub_8244AE80(ctx, base);
	return;
loc_8244B964:
	// b 0x8244ad58
	sub_8244AD58(ctx, base);
	return;
loc_8244B968:
	// b 0x8244afa0
	sub_8244AFA0(ctx, base);
	return;
loc_8244B96C:
	// b 0x8244b120
	sub_8244B120(ctx, base);
	return;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8244B978"))) PPC_WEAK_FUNC(sub_8244B978);
PPC_FUNC_IMPL(__imp__sub_8244B978) {
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
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// beq cr6,0x8244b9b0
	if (ctx.cr6.eq) goto loc_8244B9B0;
	// bl 0x82659610
	ctx.lr = 0x8244B9B0;
	sub_82659610(ctx, base);
loc_8244B9B0:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// beq cr6,0x8244b9d0
	if (ctx.cr6.eq) goto loc_8244B9D0;
	// bl 0x82160140
	ctx.lr = 0x8244B9D0;
	sub_82160140(ctx, base);
loc_8244B9D0:
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

__attribute__((alias("__imp__sub_8244B9F0"))) PPC_WEAK_FUNC(sub_8244B9F0);
PPC_FUNC_IMPL(__imp__sub_8244B9F0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stfs f1,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244BA14;
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

__attribute__((alias("__imp__sub_8244BA28"))) PPC_WEAK_FUNC(sub_8244BA28);
PPC_FUNC_IMPL(__imp__sub_8244BA28) {
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82449ad8
	ctx.lr = 0x8244BA48;
	sub_82449AD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8244BA58"))) PPC_WEAK_FUNC(sub_8244BA58);
PPC_FUNC_IMPL(__imp__sub_8244BA58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8244BA70"))) PPC_WEAK_FUNC(sub_8244BA70);
PPC_FUNC_IMPL(__imp__sub_8244BA70) {
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82449b60
	ctx.lr = 0x8244BA90;
	sub_82449B60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8244BAA0"))) PPC_WEAK_FUNC(sub_8244BAA0);
PPC_FUNC_IMPL(__imp__sub_8244BAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8244BAA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r3,36(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244BAC0;
	sub_821677D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6448);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239c420
	ctx.lr = 0x8244BACC;
	sub_8239C420(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8244bae4
	if (ctx.cr6.lt) goto loc_8244BAE4;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x8244bae8
	goto loc_8244BAE8;
loc_8244BAE4:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8244BAE8:
	// lwz r3,36(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244BAF0;
	sub_821677D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f1,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239a598
	ctx.lr = 0x8244BB04;
	sub_8239A598(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8244bb18
	if (ctx.cr6.lt) goto loc_8244BB18;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82186190
	ctx.lr = 0x8244BB18;
	sub_82186190(ctx, base);
loc_8244BB18:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244BB38"))) PPC_WEAK_FUNC(sub_8244BB38);
PPC_FUNC_IMPL(__imp__sub_8244BB38) {
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
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244BB58;
	sub_821677D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6448);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239c420
	ctx.lr = 0x8244BB64;
	sub_8239C420(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244BB6C;
	sub_821677D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,4272
	ctx.r4.s64 = ctx.r11.s64 + 4272;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,22652(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22652);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239c218
	ctx.lr = 0x8244BB80;
	sub_8239C218(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244BB8C;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244bba4
	if (ctx.cr6.eq) goto loc_8244BBA4;
	// bl 0x821601b8
	ctx.lr = 0x8244BBA4;
	sub_821601B8(ctx, base);
loc_8244BBA4:
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8243a8a8
	ctx.lr = 0x8244BBB4;
	sub_8243A8A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244BBC0;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244bbd8
	if (ctx.cr6.eq) goto loc_8244BBD8;
	// bl 0x821601b8
	ctx.lr = 0x8244BBD8;
	sub_821601B8(ctx, base);
loc_8244BBD8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824408c0
	ctx.lr = 0x8244BBE0;
	sub_824408C0(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8244bbfc
	if (ctx.cr6.eq) goto loc_8244BBFC;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bl 0x8244ad58
	ctx.lr = 0x8244BBFC;
	sub_8244AD58(ctx, base);
loc_8244BBFC:
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

__attribute__((alias("__imp__sub_8244BC18"))) PPC_WEAK_FUNC(sub_8244BC18);
PPC_FUNC_IMPL(__imp__sub_8244BC18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// b 0x8244ae80
	sub_8244AE80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244BC30"))) PPC_WEAK_FUNC(sub_8244BC30);
PPC_FUNC_IMPL(__imp__sub_8244BC30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8244BC38"))) PPC_WEAK_FUNC(sub_8244BC38);
PPC_FUNC_IMPL(__imp__sub_8244BC38) {
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
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244BC58;
	sub_821677D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6448);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239c420
	ctx.lr = 0x8244BC64;
	sub_8239C420(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244BC6C;
	sub_821677D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,4272
	ctx.r4.s64 = ctx.r11.s64 + 4272;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,22652(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22652);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239c218
	ctx.lr = 0x8244BC80;
	sub_8239C218(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244BC8C;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244bca4
	if (ctx.cr6.eq) goto loc_8244BCA4;
	// bl 0x821601b8
	ctx.lr = 0x8244BCA4;
	sub_821601B8(ctx, base);
loc_8244BCA4:
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8243a8a8
	ctx.lr = 0x8244BCB4;
	sub_8243A8A8(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8244bcd0
	if (ctx.cr6.eq) goto loc_8244BCD0;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bl 0x8244ad58
	ctx.lr = 0x8244BCD0;
	sub_8244AD58(ctx, base);
loc_8244BCD0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244BCDC;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244bcf4
	if (ctx.cr6.eq) goto loc_8244BCF4;
	// bl 0x821601b8
	ctx.lr = 0x8244BCF4;
	sub_821601B8(ctx, base);
loc_8244BCF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82440018
	ctx.lr = 0x8244BCFC;
	sub_82440018(ctx, base);
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

__attribute__((alias("__imp__sub_8244BD18"))) PPC_WEAK_FUNC(sub_8244BD18);
PPC_FUNC_IMPL(__imp__sub_8244BD18) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,58(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 58);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// b 0x8244ae80
	sub_8244AE80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244BD3C"))) PPC_WEAK_FUNC(sub_8244BD3C);
PPC_FUNC_IMPL(__imp__sub_8244BD3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8244BD40"))) PPC_WEAK_FUNC(sub_8244BD40);
PPC_FUNC_IMPL(__imp__sub_8244BD40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8244BD48;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,36(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244BD60;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244bd78
	if (ctx.cr6.eq) goto loc_8244BD78;
	// bl 0x821601b8
	ctx.lr = 0x8244BD78;
	sub_821601B8(ctx, base);
loc_8244BD78:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8244bda4
	if (ctx.cr6.lt) goto loc_8244BDA4;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8244bda8
	goto loc_8244BDA8;
loc_8244BDA4:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8244BDA8:
	// lwz r3,36(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244BDB0;
	sub_821677D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823e8e18
	ctx.lr = 0x8244BDC4;
	sub_823E8E18(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244bdd4
	if (ctx.cr6.eq) goto loc_8244BDD4;
	// bl 0x82581e38
	ctx.lr = 0x8244BDD4;
	sub_82581E38(ctx, base);
loc_8244BDD4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8244bde8
	if (ctx.cr6.lt) goto loc_8244BDE8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82186190
	ctx.lr = 0x8244BDE8;
	sub_82186190(ctx, base);
loc_8244BDE8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244BE08"))) PPC_WEAK_FUNC(sub_8244BE08);
PPC_FUNC_IMPL(__imp__sub_8244BE08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8244BE10;
	__savegprlr_27(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-18576
	ctx.r11.s64 = ctx.r11.s64 + -18576;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
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
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82393060
	ctx.lr = 0x8244BE74;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,188(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244be8c
	if (ctx.cr6.eq) goto loc_8244BE8C;
	// bl 0x821601b8
	ctx.lr = 0x8244BE8C;
	sub_821601B8(ctx, base);
loc_8244BE8C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d3430
	ctx.lr = 0x8244BEAC;
	sub_825D3430(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244BEB8;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244bed0
	if (ctx.cr6.eq) goto loc_8244BED0;
	// bl 0x821601b8
	ctx.lr = 0x8244BED0;
	sub_821601B8(ctx, base);
loc_8244BED0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825d3170
	ctx.lr = 0x8244BEDC;
	sub_825D3170(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825d3430
	ctx.lr = 0x8244BEE8;
	sub_825D3430(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825d32d0
	ctx.lr = 0x8244BEF4;
	sub_825D32D0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825d3170
	ctx.lr = 0x8244BF00;
	sub_825D3170(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825d3010
	ctx.lr = 0x8244BF0C;
	sub_825D3010(ctx, base);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82186158
	ctx.lr = 0x8244BF14;
	sub_82186158(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8244bf64
	if (ctx.cr6.eq) goto loc_8244BF64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8218c228
	ctx.lr = 0x8244BF2C;
	sub_8218C228(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x825d1e60
	ctx.lr = 0x8244BF3C;
	sub_825D1E60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x825d1dc8
	ctx.lr = 0x8244BF48;
	sub_825D1DC8(ctx, base);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stvx v0,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x8244bf68
	goto loc_8244BF68;
loc_8244BF64:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8244BF68:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r4,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r27,4
	ctx.r3.s64 = ctx.r27.s64 + 4;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82449a28
	ctx.lr = 0x8244BF84;
	sub_82449A28(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244BF90"))) PPC_WEAK_FUNC(sub_8244BF90);
PPC_FUNC_IMPL(__imp__sub_8244BF90) {
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
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r11,-4576
	ctx.r6.s64 = ctx.r11.s64 + -4576;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f13,8252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8252);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x8244be08
	ctx.lr = 0x8244BFE4;
	sub_8244BE08(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// beq cr6,0x8244c000
	if (ctx.cr6.eq) goto loc_8244C000;
	// bl 0x82160140
	ctx.lr = 0x8244C000;
	sub_82160140(ctx, base);
loc_8244C000:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// beq cr6,0x8244c020
	if (ctx.cr6.eq) goto loc_8244C020;
	// bl 0x82659610
	ctx.lr = 0x8244C020;
	sub_82659610(ctx, base);
loc_8244C020:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82449870
	ctx.lr = 0x8244C030;
	sub_82449870(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244c040
	if (ctx.cr6.eq) goto loc_8244C040;
	// bl 0x821601b8
	ctx.lr = 0x8244C040;
	sub_821601B8(ctx, base);
loc_8244C040:
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

__attribute__((alias("__imp__sub_8244C058"))) PPC_WEAK_FUNC(sub_8244C058);
PPC_FUNC_IMPL(__imp__sub_8244C058) {
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
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8244c084
	if (ctx.cr6.eq) goto loc_8244C084;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bl 0x8244ae80
	ctx.lr = 0x8244C084;
	sub_8244AE80(ctx, base);
loc_8244C084:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244C08C;
	sub_821677D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823e78e8
	ctx.lr = 0x8244C094;
	sub_823E78E8(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8244C0A8"))) PPC_WEAK_FUNC(sub_8244C0A8);
PPC_FUNC_IMPL(__imp__sub_8244C0A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8244C0B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x8244c0e4
	if (ctx.cr6.eq) goto loc_8244C0E4;
	// bl 0x82160140
	ctx.lr = 0x8244C0E4;
	sub_82160140(ctx, base);
loc_8244C0E4:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// beq cr6,0x8244c0f8
	if (ctx.cr6.eq) goto loc_8244C0F8;
	// bl 0x82659610
	ctx.lr = 0x8244C0F8;
	sub_82659610(ctx, base);
loc_8244C0F8:
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824499a8
	ctx.lr = 0x8244C114;
	sub_824499A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8244b978
	ctx.lr = 0x8244C124;
	sub_8244B978(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244c134
	if (ctx.cr6.eq) goto loc_8244C134;
	// bl 0x821601b8
	ctx.lr = 0x8244C134;
	sub_821601B8(ctx, base);
loc_8244C134:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244c144
	if (ctx.cr6.eq) goto loc_8244C144;
	// bl 0x82581e38
	ctx.lr = 0x8244C144;
	sub_82581E38(ctx, base);
loc_8244C144:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244c154
	if (ctx.cr6.eq) goto loc_8244C154;
	// bl 0x82581e38
	ctx.lr = 0x8244C154;
	sub_82581E38(ctx, base);
loc_8244C154:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244c164
	if (ctx.cr6.eq) goto loc_8244C164;
	// bl 0x821601b8
	ctx.lr = 0x8244C164;
	sub_821601B8(ctx, base);
loc_8244C164:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244C170"))) PPC_WEAK_FUNC(sub_8244C170);
PPC_FUNC_IMPL(__imp__sub_8244C170) {
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
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// stfs f1,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f1,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8244C1A4;
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

__attribute__((alias("__imp__sub_8244C1B8"))) PPC_WEAK_FUNC(sub_8244C1B8);
PPC_FUNC_IMPL(__imp__sub_8244C1B8) {
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
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// bl 0x82ad0700
	ctx.lr = 0x8244C1DC;
	sub_82AD0700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244c22c
	if (!ctx.cr6.eq) goto loc_8244C22C;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r10,r10,-17832
	ctx.r10.s64 = ctx.r10.s64 + -17832;
	// addi r11,r11,-7880
	ctx.r11.s64 = ctx.r11.s64 + -7880;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x8244C208;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244c228
	if (ctx.cr6.eq) goto loc_8244C228;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
loc_8244C228:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_8244C22C:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8244C240"))) PPC_WEAK_FUNC(sub_8244C240);
PPC_FUNC_IMPL(__imp__sub_8244C240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f2,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f1,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8244C260"))) PPC_WEAK_FUNC(sub_8244C260);
PPC_FUNC_IMPL(__imp__sub_8244C260) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244C284;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8244C2A0"))) PPC_WEAK_FUNC(sub_8244C2A0);
PPC_FUNC_IMPL(__imp__sub_8244C2A0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x8244c2d8
	if (ctx.cr6.eq) goto loc_8244C2D8;
	// bl 0x82160140
	ctx.lr = 0x8244C2D8;
	sub_82160140(ctx, base);
loc_8244C2D8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// beq cr6,0x8244c2ec
	if (ctx.cr6.eq) goto loc_8244C2EC;
	// bl 0x82659610
	ctx.lr = 0x8244C2EC;
	sub_82659610(ctx, base);
loc_8244C2EC:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82449be0
	ctx.lr = 0x8244C300;
	sub_82449BE0(ctx, base);
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

__attribute__((alias("__imp__sub_8244C318"))) PPC_WEAK_FUNC(sub_8244C318);
PPC_FUNC_IMPL(__imp__sub_8244C318) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825bb3b0
	ctx.lr = 0x8244C344;
	sub_825BB3B0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244c35c
	if (ctx.cr6.eq) goto loc_8244C35C;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8244c360
	if (ctx.cr6.eq) goto loc_8244C360;
loc_8244C35C:
	// twi 31,r0,22
loc_8244C360:
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
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
	// beq cr6,0x8244c3b4
	if (ctx.cr6.eq) goto loc_8244C3B4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244c38c
	if (!ctx.cr6.eq) goto loc_8244C38C;
	// twi 31,r0,22
loc_8244C38C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8244c39c
	if (!ctx.cr6.eq) goto loc_8244C39C;
	// twi 31,r0,22
loc_8244C39C:
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
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
loc_8244C3B4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,5020
	ctx.r3.s64 = ctx.r11.s64 + 5020;
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

__attribute__((alias("__imp__sub_8244C3D0"))) PPC_WEAK_FUNC(sub_8244C3D0);
PPC_FUNC_IMPL(__imp__sub_8244C3D0) {
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
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ad0700
	ctx.lr = 0x8244C3F0;
	sub_82AD0700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244c430
	if (!ctx.cr6.eq) goto loc_8244C430;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// addi r10,r10,-17936
	ctx.r10.s64 = ctx.r10.s64 + -17936;
	// addi r11,r11,5336
	ctx.r11.s64 = ctx.r11.s64 + 5336;
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x8244C41C;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244c42c
	if (ctx.cr6.eq) goto loc_8244C42C;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
loc_8244C42C:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_8244C430:
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

__attribute__((alias("__imp__sub_8244C448"))) PPC_WEAK_FUNC(sub_8244C448);
PPC_FUNC_IMPL(__imp__sub_8244C448) {
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
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// bl 0x82ad0700
	ctx.lr = 0x8244C46C;
	sub_82AD0700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244c4b8
	if (!ctx.cr6.eq) goto loc_8244C4B8;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r10,r10,-16016
	ctx.r10.s64 = ctx.r10.s64 + -16016;
	// addi r11,r11,11016
	ctx.r11.s64 = ctx.r11.s64 + 11016;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x8244C498;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244c4b4
	if (ctx.cr6.eq) goto loc_8244C4B4;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
loc_8244C4B4:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_8244C4B8:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8244C4D0"))) PPC_WEAK_FUNC(sub_8244C4D0);
PPC_FUNC_IMPL(__imp__sub_8244C4D0) {
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
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8244C500;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8244C518"))) PPC_WEAK_FUNC(sub_8244C518);
PPC_FUNC_IMPL(__imp__sub_8244C518) {
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
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// bl 0x82ad0700
	ctx.lr = 0x8244C540;
	sub_82AD0700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244c59c
	if (!ctx.cr6.eq) goto loc_8244C59C;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r10,r10,-15808
	ctx.r10.s64 = ctx.r10.s64 + -15808;
	// addi r11,r11,-17880
	ctx.r11.s64 = ctx.r11.s64 + -17880;
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x8244C56C;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244c598
	if (ctx.cr6.eq) goto loc_8244C598;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8244C584:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8244c584
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8244C584;
loc_8244C598:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_8244C59C:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8244C5B0"))) PPC_WEAK_FUNC(sub_8244C5B0);
PPC_FUNC_IMPL(__imp__sub_8244C5B0) {
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
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// bl 0x82ad0700
	ctx.lr = 0x8244C5D4;
	sub_82AD0700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244c624
	if (!ctx.cr6.eq) goto loc_8244C624;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r10,r10,-15776
	ctx.r10.s64 = ctx.r10.s64 + -15776;
	// addi r11,r11,-7880
	ctx.r11.s64 = ctx.r11.s64 + -7880;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x8244C600;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244c620
	if (ctx.cr6.eq) goto loc_8244C620;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
loc_8244C620:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_8244C624:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8244C638"))) PPC_WEAK_FUNC(sub_8244C638);
PPC_FUNC_IMPL(__imp__sub_8244C638) {
	PPC_FUNC_PROLOGUE();
	// b 0x8244c2a0
	sub_8244C2A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244C640"))) PPC_WEAK_FUNC(sub_8244C640);
PPC_FUNC_IMPL(__imp__sub_8244C640) {
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
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8244C66C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8244C688"))) PPC_WEAK_FUNC(sub_8244C688);
PPC_FUNC_IMPL(__imp__sub_8244C688) {
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
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// bl 0x82ad0700
	ctx.lr = 0x8244C6B0;
	sub_82AD0700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244c70c
	if (!ctx.cr6.eq) goto loc_8244C70C;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r10,r10,-15152
	ctx.r10.s64 = ctx.r10.s64 + -15152;
	// addi r11,r11,-17880
	ctx.r11.s64 = ctx.r11.s64 + -17880;
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x8244C6DC;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244c708
	if (ctx.cr6.eq) goto loc_8244C708;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8244C6F4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8244c6f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8244C6F4;
loc_8244C708:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_8244C70C:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8244C720"))) PPC_WEAK_FUNC(sub_8244C720);
PPC_FUNC_IMPL(__imp__sub_8244C720) {
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
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8244C74C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8244C768"))) PPC_WEAK_FUNC(sub_8244C768);
PPC_FUNC_IMPL(__imp__sub_8244C768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x8244C770;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r26,15
	ctx.r26.s64 = 15;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82161d10
	ctx.lr = 0x8244C7AC;
	sub_82161D10(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244C7C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8244c7d8
	if (ctx.cr6.lt) goto loc_8244C7D8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x8244C7D8;
	sub_82186190(ctx, base);
loc_8244C7D8:
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244C7F0"))) PPC_WEAK_FUNC(sub_8244C7F0);
PPC_FUNC_IMPL(__imp__sub_8244C7F0) {
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
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// bl 0x82ad0700
	ctx.lr = 0x8244C814;
	sub_82AD0700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244c870
	if (!ctx.cr6.eq) goto loc_8244C870;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r10,r10,-14784
	ctx.r10.s64 = ctx.r10.s64 + -14784;
	// addi r11,r11,-17808
	ctx.r11.s64 = ctx.r11.s64 + -17808;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x8244C840;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244c86c
	if (ctx.cr6.eq) goto loc_8244C86C;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_8244C86C:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_8244C870:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8244C888"))) PPC_WEAK_FUNC(sub_8244C888);
PPC_FUNC_IMPL(__imp__sub_8244C888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8244C890;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82161d10
	ctx.lr = 0x8244C8C8;
	sub_82161D10(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244C8DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8244c8f4
	if (ctx.cr6.lt) goto loc_8244C8F4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x8244C8F4;
	sub_82186190(ctx, base);
loc_8244C8F4:
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244C910"))) PPC_WEAK_FUNC(sub_8244C910);
PPC_FUNC_IMPL(__imp__sub_8244C910) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244C930;
	sub_821677D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6448);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239c420
	ctx.lr = 0x8244C93C;
	sub_8239C420(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244C944;
	sub_821677D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,4272
	ctx.r4.s64 = ctx.r11.s64 + 4272;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,22652(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22652);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239c218
	ctx.lr = 0x8244C958;
	sub_8239C218(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r11,-2180
	ctx.r4.s64 = ctx.r11.s64 + -2180;
	// li r11,15
	ctx.r11.s64 = 15;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x8244C980;
	sub_82161E08(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8244bd40
	ctx.lr = 0x8244C98C;
	sub_8244BD40(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244C998;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244c9b0
	if (ctx.cr6.eq) goto loc_8244C9B0;
	// bl 0x821601b8
	ctx.lr = 0x8244C9B0;
	sub_821601B8(ctx, base);
loc_8244C9B0:
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8243a8a8
	ctx.lr = 0x8244C9C0;
	sub_8243A8A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244C9CC;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244c9e4
	if (ctx.cr6.eq) goto loc_8244C9E4;
	// bl 0x821601b8
	ctx.lr = 0x8244C9E4;
	sub_821601B8(ctx, base);
loc_8244C9E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82440008
	ctx.lr = 0x8244C9EC;
	sub_82440008(ctx, base);
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x82449418
	ctx.lr = 0x8244CA08;
	sub_82449418(ctx, base);
	// stfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
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

__attribute__((alias("__imp__sub_8244CA28"))) PPC_WEAK_FUNC(sub_8244CA28);
PPC_FUNC_IMPL(__imp__sub_8244CA28) {
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
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244CA4C;
	sub_821677D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6448);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239c420
	ctx.lr = 0x8244CA58;
	sub_8239C420(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244CA60;
	sub_821677D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,4200
	ctx.r4.s64 = ctx.r11.s64 + 4200;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8239a598
	ctx.lr = 0x8244CA7C;
	sub_8239A598(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,4380
	ctx.r4.s64 = ctx.r11.s64 + 4380;
	// li r11,15
	ctx.r11.s64 = 15;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x8244CAA4;
	sub_82161E08(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8244bd40
	ctx.lr = 0x8244CAB0;
	sub_8244BD40(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244CABC;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244cad4
	if (ctx.cr6.eq) goto loc_8244CAD4;
	// bl 0x821601b8
	ctx.lr = 0x8244CAD4;
	sub_821601B8(ctx, base);
loc_8244CAD4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8243a8a8
	ctx.lr = 0x8244CAE0;
	sub_8243A8A8(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244CAE8;
	sub_821677D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823e78f0
	ctx.lr = 0x8244CAF0;
	sub_823E78F0(ctx, base);
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

__attribute__((alias("__imp__sub_8244CB10"))) PPC_WEAK_FUNC(sub_8244CB10);
PPC_FUNC_IMPL(__imp__sub_8244CB10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8244CB18;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244CB28;
	sub_821677D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6448);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239c420
	ctx.lr = 0x8244CB34;
	sub_8239C420(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244CB3C;
	sub_821677D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,4272
	ctx.r4.s64 = ctx.r11.s64 + 4272;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,22652(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22652);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239c218
	ctx.lr = 0x8244CB50;
	sub_8239C218(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r11,-2180
	ctx.r4.s64 = ctx.r11.s64 + -2180;
	// li r11,15
	ctx.r11.s64 = 15;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stb r30,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r30.u8);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x82161e08
	ctx.lr = 0x8244CB78;
	sub_82161E08(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8244bd40
	ctx.lr = 0x8244CB84;
	sub_8244BD40(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244CB90;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244cba8
	if (ctx.cr6.eq) goto loc_8244CBA8;
	// bl 0x821601b8
	ctx.lr = 0x8244CBA8;
	sub_821601B8(ctx, base);
loc_8244CBA8:
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8243a8a8
	ctx.lr = 0x8244CBB8;
	sub_8243A8A8(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244CBC0;
	sub_821677D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823e78e8
	ctx.lr = 0x8244CBC8;
	sub_823E78E8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244CBD4;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244cbec
	if (ctx.cr6.eq) goto loc_8244CBEC;
	// bl 0x821601b8
	ctx.lr = 0x8244CBEC;
	sub_821601B8(ctx, base);
loc_8244CBEC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82440418
	ctx.lr = 0x8244CBF4;
	sub_82440418(ctx, base);
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stb r30,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r30.u8);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f1,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x82449418
	ctx.lr = 0x8244CC1C;
	sub_82449418(ctx, base);
	// stfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244CC28"))) PPC_WEAK_FUNC(sub_8244CC28);
PPC_FUNC_IMPL(__imp__sub_8244CC28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8244CC30;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244CC44;
	sub_821677D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6448);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239c420
	ctx.lr = 0x8244CC50;
	sub_8239C420(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244CC58;
	sub_821677D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,4372
	ctx.r4.s64 = ctx.r11.s64 + 4372;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8239a598
	ctx.lr = 0x8244CC74;
	sub_8239A598(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-4576
	ctx.r4.s64 = ctx.r11.s64 + -4576;
	// li r11,15
	ctx.r11.s64 = 15;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// stb r11,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x8244CC9C;
	sub_82161E08(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8244bd40
	ctx.lr = 0x8244CCA8;
	sub_8244BD40(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244CCB4;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244cccc
	if (ctx.cr6.eq) goto loc_8244CCCC;
	// bl 0x821601b8
	ctx.lr = 0x8244CCCC;
	sub_821601B8(ctx, base);
loc_8244CCCC:
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f2,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8243a8c0
	ctx.lr = 0x8244CCE0;
	sub_8243A8C0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244CCEC;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244cd04
	if (ctx.cr6.eq) goto loc_8244CD04;
	// bl 0x821601b8
	ctx.lr = 0x8244CD04;
	sub_821601B8(ctx, base);
loc_8244CD04:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8243dc48
	ctx.lr = 0x8244CD10;
	sub_8243DC48(ctx, base);
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f1,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825d2350
	ctx.lr = 0x8244CD24;
	sub_825D2350(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f1,3548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825d2350
	ctx.lr = 0x8244CD38;
	sub_825D2350(ctx, base);
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f0,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f0,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x82392bb8
	ctx.lr = 0x8244CD70;
	sub_82392BB8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82393060
	ctx.lr = 0x8244CD80;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244cd98
	if (ctx.cr6.eq) goto loc_8244CD98;
	// bl 0x821601b8
	ctx.lr = 0x8244CD98;
	sub_821601B8(ctx, base);
loc_8244CD98:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243d1d8
	ctx.lr = 0x8244CDA8;
	sub_8243D1D8(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244CDB4;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244cdcc
	if (ctx.cr6.eq) goto loc_8244CDCC;
	// bl 0x821601b8
	ctx.lr = 0x8244CDCC;
	sub_821601B8(ctx, base);
loc_8244CDCC:
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8243cab8
	ctx.lr = 0x8244CDDC;
	sub_8243CAB8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244CDE8;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244ce00
	if (ctx.cr6.eq) goto loc_8244CE00;
	// bl 0x821601b8
	ctx.lr = 0x8244CE00;
	sub_821601B8(ctx, base);
loc_8244CE00:
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8243cac0
	ctx.lr = 0x8244CE10;
	sub_8243CAC0(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244CE1C;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244ce34
	if (ctx.cr6.eq) goto loc_8244CE34;
	// bl 0x821601b8
	ctx.lr = 0x8244CE34;
	sub_821601B8(ctx, base);
loc_8244CE34:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,132(r30)
	PPC_STORE_U8(ctx.r30.u32 + 132, ctx.r11.u8);
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// lfs f1,288(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8244ce60
	if (ctx.cr6.eq) goto loc_8244CE60;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bl 0x8244b120
	ctx.lr = 0x8244CE60;
	sub_8244B120(ctx, base);
loc_8244CE60:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244CE70"))) PPC_WEAK_FUNC(sub_8244CE70);
PPC_FUNC_IMPL(__imp__sub_8244CE70) {
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244ceac
	if (ctx.cr6.eq) goto loc_8244CEAC;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// bl 0x82659610
	ctx.lr = 0x8244CE9C;
	sub_82659610(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244CEA4;
	sub_821677D0(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// bl 0x823ea858
	ctx.lr = 0x8244CEAC;
	sub_823EA858(ctx, base);
loc_8244CEAC:
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244cebc
	if (ctx.cr6.eq) goto loc_8244CEBC;
	// bl 0x82644f18
	ctx.lr = 0x8244CEBC;
	sub_82644F18(ctx, base);
loc_8244CEBC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r11,-13440
	ctx.r7.s64 = ctx.r11.s64 + -13440;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f1,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f1,128(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r6,r11,11660
	ctx.r6.s64 = ctx.r11.s64 + 11660;
	// stfs f1,132(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f1,136(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stfs f1,112(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r11,-12720
	ctx.r4.s64 = ctx.r11.s64 + -12720;
	// stfs f1,116(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f13,22688(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22688);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x823eaa70
	ctx.lr = 0x8244CF24;
	sub_823EAA70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244CF30;
	sub_821677D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823eba30
	ctx.lr = 0x8244CF40;
	sub_823EBA30(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8244cf54
	if (ctx.cr6.eq) goto loc_8244CF54;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x8244CF54;
	sub_82659610(ctx, base);
loc_8244CF54:
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244cf68
	if (ctx.cr6.eq) goto loc_8244CF68;
	// bl 0x82631328
	ctx.lr = 0x8244CF68;
	sub_82631328(ctx, base);
loc_8244CF68:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244cf78
	if (ctx.cr6.eq) goto loc_8244CF78;
	// bl 0x82631328
	ctx.lr = 0x8244CF78;
	sub_82631328(ctx, base);
loc_8244CF78:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244CF84;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244cf9c
	if (ctx.cr6.eq) goto loc_8244CF9C;
	// bl 0x821601b8
	ctx.lr = 0x8244CF9C;
	sub_821601B8(ctx, base);
loc_8244CF9C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x821677d0
	ctx.lr = 0x8244CFB8;
	sub_821677D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r11,11616
	ctx.r6.s64 = ctx.r11.s64 + 11616;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823e9a30
	ctx.lr = 0x8244CFD4;
	sub_823E9A30(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8244cfe8
	if (ctx.cr6.eq) goto loc_8244CFE8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x8244CFE8;
	sub_82659610(ctx, base);
loc_8244CFE8:
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244cffc
	if (ctx.cr6.eq) goto loc_8244CFFC;
	// bl 0x82581e38
	ctx.lr = 0x8244CFFC;
	sub_82581E38(ctx, base);
loc_8244CFFC:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244d00c
	if (ctx.cr6.eq) goto loc_8244D00C;
	// bl 0x82581e38
	ctx.lr = 0x8244D00C;
	sub_82581E38(ctx, base);
loc_8244D00C:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8244D028"))) PPC_WEAK_FUNC(sub_8244D028);
PPC_FUNC_IMPL(__imp__sub_8244D028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8244D030;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r30,36(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8244d194
	if (ctx.cr6.eq) goto loc_8244D194;
	// lwz r11,1200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244d194
	if (ctx.cr6.eq) goto loc_8244D194;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// ori r10,r10,20542
	ctx.r10.u64 = ctx.r10.u64 | 20542;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq cr6,0x8244d0e0
	if (ctx.cr6.eq) goto loc_8244D0E0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823a75d0
	ctx.lr = 0x8244D078;
	sub_823A75D0(ctx, base);
	// lwz r3,1200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1200);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244D090;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244d0ac
	if (ctx.cr6.eq) goto loc_8244D0AC;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8216f268
	ctx.lr = 0x8244D0A4;
	sub_8216F268(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_8244D0AC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x823a7658
	ctx.lr = 0x8244D0B8;
	sub_823A7658(ctx, base);
	// lwz r3,1200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1200);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244D0D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8216f268
	ctx.lr = 0x8244D0D8;
	sub_8216F268(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8216f268
	ctx.lr = 0x8244D0E0;
	sub_8216F268(ctx, base);
loc_8244D0E0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8244d150
	if (!ctx.cr6.gt) goto loc_8244D150;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r11,r11,20499
	ctx.r11.u64 = ctx.r11.u64 | 20499;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r29,-1
	ctx.r31.s64 = ctx.r29.s64 + -1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82391468
	ctx.lr = 0x8244D10C;
	sub_82391468(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244D120;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244D134;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244d144
	if (ctx.cr6.eq) goto loc_8244D144;
	// bl 0x821601b8
	ctx.lr = 0x8244D144;
	sub_821601B8(ctx, base);
loc_8244D144:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8244d194
	if (!ctx.cr6.eq) goto loc_8244D194;
loc_8244D150:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82391468
	ctx.lr = 0x8244D15C;
	sub_82391468(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244D170;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244D184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244d194
	if (ctx.cr6.eq) goto loc_8244D194;
	// bl 0x821601b8
	ctx.lr = 0x8244D194;
	sub_821601B8(ctx, base);
loc_8244D194:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244D1A0"))) PPC_WEAK_FUNC(sub_8244D1A0);
PPC_FUNC_IMPL(__imp__sub_8244D1A0) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244d200
	if (ctx.cr6.eq) goto loc_8244D200;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,22792
	ctx.r4.s64 = ctx.r11.s64 + 22792;
	// bl 0x8244d028
	ctx.lr = 0x8244D1DC;
	sub_8244D028(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r4,r11,22772
	ctx.r4.s64 = ctx.r11.s64 + 22772;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8244d028
	ctx.lr = 0x8244D1F4;
	sub_8244D028(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,22752
	ctx.r4.s64 = ctx.r11.s64 + 22752;
	// b 0x8244d22c
	goto loc_8244D22C;
loc_8244D200:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,22732
	ctx.r4.s64 = ctx.r11.s64 + 22732;
	// bl 0x8244d028
	ctx.lr = 0x8244D20C;
	sub_8244D028(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r4,r11,22712
	ctx.r4.s64 = ctx.r11.s64 + 22712;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8244d028
	ctx.lr = 0x8244D224;
	sub_8244D028(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,22692
	ctx.r4.s64 = ctx.r11.s64 + 22692;
loc_8244D22C:
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8244d028
	ctx.lr = 0x8244D23C;
	sub_8244D028(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8244D250"))) PPC_WEAK_FUNC(sub_8244D250);
PPC_FUNC_IMPL(__imp__sub_8244D250) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244d278
	if (ctx.cr6.eq) goto loc_8244D278;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,22832
	ctx.r4.s64 = ctx.r11.s64 + 22832;
	// b 0x8244d028
	sub_8244D028(ctx, base);
	return;
loc_8244D278:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,22812
	ctx.r4.s64 = ctx.r11.s64 + 22812;
	// b 0x8244d028
	sub_8244D028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244D288"))) PPC_WEAK_FUNC(sub_8244D288);
PPC_FUNC_IMPL(__imp__sub_8244D288) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,22892
	ctx.r4.s64 = ctx.r11.s64 + 22892;
	// beq cr6,0x8244d2d0
	if (ctx.cr6.eq) goto loc_8244D2D0;
	// bl 0x8244d028
	ctx.lr = 0x8244D2C4;
	sub_8244D028(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,22872
	ctx.r4.s64 = ctx.r11.s64 + 22872;
	// b 0x8244d2dc
	goto loc_8244D2DC;
loc_8244D2D0:
	// bl 0x8244d028
	ctx.lr = 0x8244D2D4;
	sub_8244D028(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,22852
	ctx.r4.s64 = ctx.r11.s64 + 22852;
loc_8244D2DC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8244d028
	ctx.lr = 0x8244D2EC;
	sub_8244D028(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8244D300"))) PPC_WEAK_FUNC(sub_8244D300);
PPC_FUNC_IMPL(__imp__sub_8244D300) {
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
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// bl 0x82ad0700
	ctx.lr = 0x8244D324;
	sub_82AD0700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244d380
	if (!ctx.cr6.eq) goto loc_8244D380;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r10,r10,-14560
	ctx.r10.s64 = ctx.r10.s64 + -14560;
	// addi r11,r11,-17808
	ctx.r11.s64 = ctx.r11.s64 + -17808;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x8244D350;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244d37c
	if (ctx.cr6.eq) goto loc_8244D37C;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_8244D37C:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_8244D380:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8244D398"))) PPC_WEAK_FUNC(sub_8244D398);
PPC_FUNC_IMPL(__imp__sub_8244D398) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8244d3e8
	if (!ctx.cr6.eq) goto loc_8244D3E8;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82186158
	ctx.lr = 0x8244D3C0;
	sub_82186158(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8244d3e0
	if (ctx.cr6.eq) goto loc_8244D3E0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8244b978
	ctx.lr = 0x8244D3E0;
	sub_8244B978(ctx, base);
loc_8244D3E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8244d418
	goto loc_8244D418;
loc_8244D3E8:
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244d3fc
	if (ctx.cr6.eq) goto loc_8244D3FC;
	// bl 0x821601b8
	ctx.lr = 0x8244D3FC;
	sub_821601B8(ctx, base);
loc_8244D3FC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244d40c
	if (ctx.cr6.eq) goto loc_8244D40C;
	// bl 0x82581e38
	ctx.lr = 0x8244D40C;
	sub_82581E38(ctx, base);
loc_8244D40C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82186190
	ctx.lr = 0x8244D414;
	sub_82186190(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8244D418:
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

__attribute__((alias("__imp__sub_8244D430"))) PPC_WEAK_FUNC(sub_8244D430);
PPC_FUNC_IMPL(__imp__sub_8244D430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8244D438;
	__savegprlr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244D44C;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244d464
	if (ctx.cr6.eq) goto loc_8244D464;
	// bl 0x821601b8
	ctx.lr = 0x8244D464;
	sub_821601B8(ctx, base);
loc_8244D464:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8244c318
	ctx.lr = 0x8244D46C;
	sub_8244C318(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,22992
	ctx.r4.s64 = ctx.r11.s64 + 22992;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x8244D498;
	sub_82161E08(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8244c318
	ctx.lr = 0x8244D4A0;
	sub_8244C318(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8231c890
	ctx.lr = 0x8244D4B0;
	sub_8231C890(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82164090
	ctx.lr = 0x8244D4C0;
	sub_82164090(ctx, base);
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r30,r11,-21496
	ctx.r30.s64 = ctx.r11.s64 + -21496;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82161d10
	ctx.lr = 0x8244D4DC;
	sub_82161D10(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8244d4f0
	if (ctx.cr6.lt) goto loc_8244D4F0;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82186190
	ctx.lr = 0x8244D4F0;
	sub_82186190(ctx, base);
loc_8244D4F0:
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
	// blt cr6,0x8244d510
	if (ctx.cr6.lt) goto loc_8244D510;
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x82186190
	ctx.lr = 0x8244D510;
	sub_82186190(ctx, base);
loc_8244D510:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r31,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r31.u8);
	// blt cr6,0x8244d530
	if (ctx.cr6.lt) goto loc_8244D530;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82186190
	ctx.lr = 0x8244D530;
	sub_82186190(ctx, base);
loc_8244D530:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8244d548
	if (ctx.cr6.lt) goto loc_8244D548;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_8244D548:
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244D558"))) PPC_WEAK_FUNC(sub_8244D558);
PPC_FUNC_IMPL(__imp__sub_8244D558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b8
	ctx.lr = 0x8244D560;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r27,-1
	ctx.r27.s64 = -1;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// bl 0x82161d10
	ctx.lr = 0x8244D5A4;
	sub_82161D10(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stb r31,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r31.u8);
	// bl 0x82161d10
	ctx.lr = 0x8244D5C8;
	sub_82161D10(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8244d5e0
	if (ctx.cr6.lt) goto loc_8244D5E0;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x8244D5E0;
	sub_82186190(ctx, base);
loc_8244D5E0:
	// addi r29,r26,4
	ctx.r29.s64 = ctx.r26.s64 + 4;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r24,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r24.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// stb r31,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r31.u8);
	// bl 0x82161d10
	ctx.lr = 0x8244D61C;
	sub_82161D10(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// stw r11,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r11.u32);
	// blt cr6,0x8244d638
	if (ctx.cr6.lt) goto loc_8244D638;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x82186190
	ctx.lr = 0x8244D638;
	sub_82186190(ctx, base);
loc_8244D638:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r31,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r31.u8);
	// blt cr6,0x8244d658
	if (ctx.cr6.lt) goto loc_8244D658;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x8244D658;
	sub_82186190(ctx, base);
loc_8244D658:
	// stw r30,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r30.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r31,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r31.u32);
	// stb r31,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r31.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244D670"))) PPC_WEAK_FUNC(sub_8244D670);
PPC_FUNC_IMPL(__imp__sub_8244D670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x8244D678;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r27,-1
	ctx.r27.s64 = -1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82161d10
	ctx.lr = 0x8244D6B8;
	sub_82161D10(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stb r31,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r31.u8);
	// bl 0x82161d10
	ctx.lr = 0x8244D6DC;
	sub_82161D10(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8244d6f0
	if (ctx.cr6.lt) goto loc_8244D6F0;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x8244D6F0;
	sub_82186190(ctx, base);
loc_8244D6F0:
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r26,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r26.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// stb r31,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r31.u8);
	// bl 0x82161d10
	ctx.lr = 0x8244D72C;
	sub_82161D10(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8244d740
	if (ctx.cr6.lt) goto loc_8244D740;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x82186190
	ctx.lr = 0x8244D740;
	sub_82186190(ctx, base);
loc_8244D740:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r31,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r31.u8);
	// blt cr6,0x8244d760
	if (ctx.cr6.lt) goto loc_8244D760;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x8244D760;
	sub_82186190(ctx, base);
loc_8244D760:
	// stw r30,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r31.u32);
	// stb r31,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r31.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244D778"))) PPC_WEAK_FUNC(sub_8244D778);
PPC_FUNC_IMPL(__imp__sub_8244D778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8244D780;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r30,4
	ctx.r28.s64 = ctx.r30.s64 + 4;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// li r9,15
	ctx.r9.s64 = 15;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r28,4
	ctx.r4.s64 = ctx.r28.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// bl 0x82161d10
	ctx.lr = 0x8244D7CC;
	sub_82161D10(ctx, base);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r11.u32);
	// lbz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 40);
	// stb r11,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244D7E8"))) PPC_WEAK_FUNC(sub_8244D7E8);
PPC_FUNC_IMPL(__imp__sub_8244D7E8) {
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
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r7,15
	ctx.r7.s64 = 15;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stb r9,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r9.u8);
	// bl 0x82161d10
	ctx.lr = 0x8244D83C;
	sub_82161D10(ctx, base);
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

__attribute__((alias("__imp__sub_8244D858"))) PPC_WEAK_FUNC(sub_8244D858);
PPC_FUNC_IMPL(__imp__sub_8244D858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x8244D860;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r30,4
	ctx.r28.s64 = ctx.r30.s64 + 4;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// li r25,15
	ctx.r25.s64 = 15;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r4,r28,4
	ctx.r4.s64 = ctx.r28.s64 + 4;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r25,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r25.u32);
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r27.u32);
	// stb r27,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r27.u8);
	// bl 0x82161d10
	ctx.lr = 0x8244D8B0;
	sub_82161D10(ctx, base);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// stw r11,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r11.u32);
	// stb r26,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r26.u8);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8244d8d4
	if (ctx.cr6.lt) goto loc_8244D8D4;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x8244D8D4;
	sub_82186190(ctx, base);
loc_8244D8D4:
	// stw r25,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r25.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r27,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r27.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244D8F0"))) PPC_WEAK_FUNC(sub_8244D8F0);
PPC_FUNC_IMPL(__imp__sub_8244D8F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8ac
	ctx.lr = 0x8244D8F8;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r6,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r6.u64);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// std r5,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r5.u64);
	// li r26,0
	ctx.r26.s64 = 0;
	// std r4,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r4.u64);
	// lwz r24,208(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r25,204(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r27,212(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r22,220(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r21,216(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
loc_8244D924:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8244d934
	if (ctx.cr6.eq) goto loc_8244D934;
	// cmplw cr6,r24,r21
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x8244d938
	if (ctx.cr6.eq) goto loc_8244D938;
loc_8244D934:
	// twi 31,r0,22
loc_8244D938:
	// subf r11,r27,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r27.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244da78
	if (ctx.cr6.eq) goto loc_8244DA78;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x8244d960
	if (!ctx.cr6.eq) goto loc_8244D960;
	// twi 31,r0,22
loc_8244D960:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8244d970
	if (!ctx.cr6.eq) goto loc_8244D970;
	// twi 31,r0,22
loc_8244D970:
	// li r3,36
	ctx.r3.s64 = 36;
	// lwz r30,4(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r31,r27,8
	ctx.r31.s64 = ctx.r27.s64 + 8;
	// bl 0x82186158
	ctx.lr = 0x8244D980;
	sub_82186158(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8244d990
	if (ctx.cr6.eq) goto loc_8244D990;
	// stw r25,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r25.u32);
loc_8244D990:
	// addi r28,r29,4
	ctx.r28.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8244d9a0
	if (ctx.cr6.eq) goto loc_8244D9A0;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
loc_8244D9A0:
	// addi r30,r29,8
	ctx.r30.s64 = ctx.r29.s64 + 8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8244da48
	if (ctx.cr6.eq) goto loc_8244DA48;
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
	// stw r26,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r26.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244d9f4
	if (!ctx.cr6.eq) goto loc_8244D9F4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244D9F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
loc_8244D9F4:
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
	// stw r26,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r26.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244da40
	if (!ctx.cr6.eq) goto loc_8244DA40;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244DA3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
loc_8244DA40:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_8244DA48:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823eac80
	ctx.lr = 0x8244DA54;
	sub_823EAC80(ctx, base);
	// stw r29,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r29.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8244da70
	if (!ctx.cr6.eq) goto loc_8244DA70;
	// twi 31,r0,22
loc_8244DA70:
	// lwz r27,0(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// b 0x8244d924
	goto loc_8244D924;
loc_8244DA78:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de8fc
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244DA80"))) PPC_WEAK_FUNC(sub_8244DA80);
PPC_FUNC_IMPL(__imp__sub_8244DA80) {
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8244d398
	ctx.lr = 0x8244DAA0;
	sub_8244D398(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8244DAB0"))) PPC_WEAK_FUNC(sub_8244DAB0);
PPC_FUNC_IMPL(__imp__sub_8244DAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x8244DAB8;
	__savegprlr_25(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r26,4
	ctx.r30.s64 = ctx.r26.s64 + 4;
	// li r25,15
	ctx.r25.s64 = 15;
	// li r28,-1
	ctx.r28.s64 = -1;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stb r31,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82161d10
	ctx.lr = 0x8244DB08;
	sub_82161D10(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x8244d858
	ctx.lr = 0x8244DB20;
	sub_8244D858(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r28,r29,4
	ctx.r28.s64 = ctx.r29.s64 + 4;
	// addi r30,r27,4
	ctx.r30.s64 = ctx.r27.s64 + 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// addi r4,r28,4
	ctx.r4.s64 = ctx.r28.s64 + 4;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r25,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r25.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// stb r31,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r31.u8);
	// bl 0x82161d10
	ctx.lr = 0x8244DB5C;
	sub_82161D10(ctx, base);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// lbz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 40);
	// stb r11,40(r27)
	PPC_STORE_U8(ctx.r27.u32 + 40, ctx.r11.u8);
	// blt cr6,0x8244db80
	if (ctx.cr6.lt) goto loc_8244DB80;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x82186190
	ctx.lr = 0x8244DB80;
	sub_82186190(ctx, base);
loc_8244DB80:
	// addi r30,r26,8
	ctx.r30.s64 = ctx.r26.s64 + 8;
	// stw r25,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r25.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stb r31,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r31.u8);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8244dba4
	if (ctx.cr6.lt) goto loc_8244DBA4;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x8244DBA4;
	sub_82186190(ctx, base);
loc_8244DBA4:
	// stw r25,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r25.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// stb r31,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r31.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244DBC0"))) PPC_WEAK_FUNC(sub_8244DBC0);
PPC_FUNC_IMPL(__imp__sub_8244DBC0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// bl 0x82161d10
	ctx.lr = 0x8244DC0C;
	sub_82161D10(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r6,32(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8244c768
	ctx.lr = 0x8244DC20;
	sub_8244C768(ctx, base);
	// lbz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
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

__attribute__((alias("__imp__sub_8244DC40"))) PPC_WEAK_FUNC(sub_8244DC40);
PPC_FUNC_IMPL(__imp__sub_8244DC40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8244DC48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8244dc80
	if (!ctx.cr6.eq) goto loc_8244DC80;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82186158
	ctx.lr = 0x8244DC60;
	sub_82186158(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8244dc74
	if (ctx.cr6.eq) goto loc_8244DC74;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8244d778
	ctx.lr = 0x8244DC74;
	sub_8244D778(ctx, base);
loc_8244DC74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_8244DC80:
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8244dc98
	if (ctx.cr6.lt) goto loc_8244DC98;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x8244DC98;
	sub_82186190(ctx, base);
loc_8244DC98:
	// li r11,15
	ctx.r11.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// bl 0x82186190
	ctx.lr = 0x8244DCB4;
	sub_82186190(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244DCC0"))) PPC_WEAK_FUNC(sub_8244DCC0);
PPC_FUNC_IMPL(__imp__sub_8244DCC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8244DCC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ad0700
	ctx.lr = 0x8244DCDC;
	sub_82AD0700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244dd2c
	if (!ctx.cr6.eq) goto loc_8244DD2C;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r10,r10,-14792
	ctx.r10.s64 = ctx.r10.s64 + -14792;
	// addi r11,r11,-9600
	ctx.r11.s64 = ctx.r11.s64 + -9600;
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x8244DD08;
	sub_82186158(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8244dd28
	if (ctx.cr6.eq) goto loc_8244DD28;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8244b978
	ctx.lr = 0x8244DD28;
	sub_8244B978(ctx, base);
loc_8244DD28:
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
loc_8244DD2C:
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244dd40
	if (ctx.cr6.eq) goto loc_8244DD40;
	// bl 0x821601b8
	ctx.lr = 0x8244DD40;
	sub_821601B8(ctx, base);
loc_8244DD40:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244dd50
	if (ctx.cr6.eq) goto loc_8244DD50;
	// bl 0x82581e38
	ctx.lr = 0x8244DD50;
	sub_82581E38(ctx, base);
loc_8244DD50:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244DD58"))) PPC_WEAK_FUNC(sub_8244DD58);
PPC_FUNC_IMPL(__imp__sub_8244DD58) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// bl 0x82161d10
	ctx.lr = 0x8244DD9C;
	sub_82161D10(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8244c888
	ctx.lr = 0x8244DDAC;
	sub_8244C888(ctx, base);
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

__attribute__((alias("__imp__sub_8244DDC0"))) PPC_WEAK_FUNC(sub_8244DDC0);
PPC_FUNC_IMPL(__imp__sub_8244DDC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8244DDC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8244de00
	if (!ctx.cr6.eq) goto loc_8244DE00;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82186158
	ctx.lr = 0x8244DDE0;
	sub_82186158(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8244ddf4
	if (ctx.cr6.eq) goto loc_8244DDF4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8244d7e8
	ctx.lr = 0x8244DDF4;
	sub_8244D7E8(ctx, base);
loc_8244DDF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_8244DE00:
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8244de18
	if (ctx.cr6.lt) goto loc_8244DE18;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x8244DE18;
	sub_82186190(ctx, base);
loc_8244DE18:
	// li r11,15
	ctx.r11.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// bl 0x82186190
	ctx.lr = 0x8244DE34;
	sub_82186190(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244DE40"))) PPC_WEAK_FUNC(sub_8244DE40);
PPC_FUNC_IMPL(__imp__sub_8244DE40) {
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
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244DE5C;
	sub_821677D0(ctx, base);
	// bl 0x8239a988
	ctx.lr = 0x8244DE60;
	sub_8239A988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244de78
	if (ctx.cr6.eq) goto loc_8244DE78;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243ff60
	ctx.lr = 0x8244DE78;
	sub_8243FF60(ctx, base);
loc_8244DE78:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8244DE90"))) PPC_WEAK_FUNC(sub_8244DE90);
PPC_FUNC_IMPL(__imp__sub_8244DE90) {
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
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244DEAC;
	sub_821677D0(ctx, base);
	// bl 0x8239a988
	ctx.lr = 0x8244DEB0;
	sub_8239A988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244dec8
	if (ctx.cr6.eq) goto loc_8244DEC8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243ff60
	ctx.lr = 0x8244DEC8;
	sub_8243FF60(ctx, base);
loc_8244DEC8:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8244DEE0"))) PPC_WEAK_FUNC(sub_8244DEE0);
PPC_FUNC_IMPL(__imp__sub_8244DEE0) {
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
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244DF04;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244df1c
	if (ctx.cr6.eq) goto loc_8244DF1C;
	// bl 0x821601b8
	ctx.lr = 0x8244DF1C;
	sub_821601B8(ctx, base);
loc_8244DF1C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244DF30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244df88
	if (ctx.cr6.eq) goto loc_8244DF88;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244DF48;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244df60
	if (ctx.cr6.eq) goto loc_8244DF60;
	// bl 0x821601b8
	ctx.lr = 0x8244DF60;
	sub_821601B8(ctx, base);
loc_8244DF60:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a0ec0
	ctx.lr = 0x8244DF68;
	sub_823A0EC0(ctx, base);
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8156);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8244df88
	if (!ctx.cr6.lt) goto loc_8244DF88;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243ff60
	ctx.lr = 0x8244DF88;
	sub_8243FF60(ctx, base);
loc_8244DF88:
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

__attribute__((alias("__imp__sub_8244DFA0"))) PPC_WEAK_FUNC(sub_8244DFA0);
PPC_FUNC_IMPL(__imp__sub_8244DFA0) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244DFC4;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244dfdc
	if (ctx.cr6.eq) goto loc_8244DFDC;
	// bl 0x821601b8
	ctx.lr = 0x8244DFDC;
	sub_821601B8(ctx, base);
loc_8244DFDC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244DFF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244e008
	if (ctx.cr6.eq) goto loc_8244E008;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8243ff60
	ctx.lr = 0x8244E008;
	sub_8243FF60(ctx, base);
loc_8244E008:
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

__attribute__((alias("__imp__sub_8244E020"))) PPC_WEAK_FUNC(sub_8244E020);
PPC_FUNC_IMPL(__imp__sub_8244E020) {
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
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244E03C;
	sub_821677D0(ctx, base);
	// bl 0x8239a988
	ctx.lr = 0x8244E040;
	sub_8239A988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244e058
	if (ctx.cr6.eq) goto loc_8244E058;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243ff60
	ctx.lr = 0x8244E058;
	sub_8243FF60(ctx, base);
loc_8244E058:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8244E070"))) PPC_WEAK_FUNC(sub_8244E070);
PPC_FUNC_IMPL(__imp__sub_8244E070) {
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
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8243ff60
	ctx.lr = 0x8244E08C;
	sub_8243FF60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// lwz r5,108(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r4,112(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// bl 0x824494f0
	ctx.lr = 0x8244E0A8;
	sub_824494F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82390710
	ctx.lr = 0x8244E0B8;
	sub_82390710(ctx, base);
	// bl 0x825d4220
	ctx.lr = 0x8244E0BC;
	sub_825D4220(ctx, base);
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// lfs f0,200(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8244e0d4
	if (ctx.cr6.lt) goto loc_8244E0D4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8244E0D4:
	// stb r11,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r11.u8);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8244E0F0"))) PPC_WEAK_FUNC(sub_8244E0F0);
PPC_FUNC_IMPL(__imp__sub_8244E0F0) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8244e158
	if (ctx.cr6.lt) goto loc_8244E158;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244E128;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244e140
	if (ctx.cr6.eq) goto loc_8244E140;
	// bl 0x821601b8
	ctx.lr = 0x8244E140;
	sub_821601B8(ctx, base);
loc_8244E140:
	// lbz r11,93(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 93);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244e158
	if (ctx.cr6.eq) goto loc_8244E158;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243ff60
	ctx.lr = 0x8244E158;
	sub_8243FF60(ctx, base);
loc_8244E158:
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

__attribute__((alias("__imp__sub_8244E170"))) PPC_WEAK_FUNC(sub_8244E170);
PPC_FUNC_IMPL(__imp__sub_8244E170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8244E178;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826dfb88
	ctx.lr = 0x8244E180;
	__savefpr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lbz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244e1dc
	if (ctx.cr6.eq) goto loc_8244E1DC;
loc_8244E19C:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244e1c4
	if (ctx.cr6.eq) goto loc_8244E1C4;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x8243ff60
	ctx.lr = 0x8244E1B4;
	sub_8243FF60(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826dfbd4
	ctx.lr = 0x8244E1C0;
	__restfpr_28(ctx, base);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_8244E1C4:
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x8243ff60
	ctx.lr = 0x8244E1CC;
	sub_8243FF60(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826dfbd4
	ctx.lr = 0x8244E1D8;
	__restfpr_28(ctx, base);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_8244E1DC:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// beq cr6,0x8244e200
	if (ctx.cr6.eq) goto loc_8244E200;
	// lfs f31,204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,208(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,212(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,216(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	ctx.f28.f64 = double(temp.f32);
	// b 0x8244e210
	goto loc_8244E210;
loc_8244E200:
	// lfs f31,72(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,96(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f28.f64 = double(temp.f32);
loc_8244E210:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82392bb8
	ctx.lr = 0x8244E218;
	sub_82392BB8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82393060
	ctx.lr = 0x8244E228;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244e240
	if (ctx.cr6.eq) goto loc_8244E240;
	// bl 0x821601b8
	ctx.lr = 0x8244E240;
	sub_821601B8(ctx, base);
loc_8244E240:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243d310
	ctx.lr = 0x8244E24C;
	sub_8243D310(ctx, base);
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lfs f0,80(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8244e274
	if (!ctx.cr6.lt) goto loc_8244E274;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82390710
	ctx.lr = 0x8244E268;
	sub_82390710(ctx, base);
	// bl 0x825d4220
	ctx.lr = 0x8244E26C;
	sub_825D4220(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// b 0x8244e284
	goto loc_8244E284;
loc_8244E274:
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82390710
	ctx.lr = 0x8244E27C;
	sub_82390710(ctx, base);
	// bl 0x825d4220
	ctx.lr = 0x8244E280;
	sub_825D4220(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
loc_8244E284:
	// bge cr6,0x8244e28c
	if (!ctx.cr6.lt) goto loc_8244E28C;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8244E28C:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244e19c
	if (!ctx.cr6.eq) goto loc_8244E19C;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244e2ac
	if (ctx.cr6.eq) goto loc_8244E2AC;
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f29.f64;
	// b 0x8244e2b0
	goto loc_8244E2B0;
loc_8244E2AC:
	// fmr f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f28.f64;
loc_8244E2B0:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82390710
	ctx.lr = 0x8244E2B8;
	sub_82390710(ctx, base);
	// bl 0x825d4220
	ctx.lr = 0x8244E2BC;
	sub_825D4220(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,18
	ctx.r4.s64 = 18;
	// blt cr6,0x8244e2d0
	if (ctx.cr6.lt) goto loc_8244E2D0;
	// li r4,16
	ctx.r4.s64 = 16;
loc_8244E2D0:
	// bl 0x8243ff60
	ctx.lr = 0x8244E2D4;
	sub_8243FF60(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826dfbd4
	ctx.lr = 0x8244E2E0;
	__restfpr_28(ctx, base);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244E2E8"))) PPC_WEAK_FUNC(sub_8244E2E8);
PPC_FUNC_IMPL(__imp__sub_8244E2E8) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244E30C;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244e324
	if (ctx.cr6.eq) goto loc_8244E324;
	// bl 0x821601b8
	ctx.lr = 0x8244E324;
	sub_821601B8(ctx, base);
loc_8244E324:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244E338;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244e350
	if (ctx.cr6.eq) goto loc_8244E350;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8243ff60
	ctx.lr = 0x8244E350;
	sub_8243FF60(ctx, base);
loc_8244E350:
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

__attribute__((alias("__imp__sub_8244E368"))) PPC_WEAK_FUNC(sub_8244E368);
PPC_FUNC_IMPL(__imp__sub_8244E368) {
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// beq cr6,0x8244e3b0
	if (ctx.cr6.eq) goto loc_8244E3B0;
	// lfs f1,268(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x82449418
	ctx.lr = 0x8244E3A0;
	sub_82449418(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// bl 0x8244ce70
	ctx.lr = 0x8244E3AC;
	sub_8244CE70(ctx, base);
	// b 0x8244e3c8
	goto loc_8244E3C8;
loc_8244E3B0:
	// lfs f1,264(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x82449418
	ctx.lr = 0x8244E3C4;
	sub_82449418(ctx, base);
	// stfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
loc_8244E3C8:
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243ff60
	ctx.lr = 0x8244E3D4;
	sub_8243FF60(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8244E3E8"))) PPC_WEAK_FUNC(sub_8244E3E8);
PPC_FUNC_IMPL(__imp__sub_8244E3E8) {
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
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244E404;
	sub_821677D0(ctx, base);
	// bl 0x8239a988
	ctx.lr = 0x8244E408;
	sub_8239A988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244e420
	if (ctx.cr6.eq) goto loc_8244E420;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243ff60
	ctx.lr = 0x8244E420;
	sub_8243FF60(ctx, base);
loc_8244E420:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8244E438"))) PPC_WEAK_FUNC(sub_8244E438);
PPC_FUNC_IMPL(__imp__sub_8244E438) {
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
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244E45C;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244e474
	if (ctx.cr6.eq) goto loc_8244E474;
	// bl 0x821601b8
	ctx.lr = 0x8244E474;
	sub_821601B8(ctx, base);
loc_8244E474:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244E488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244e4f8
	if (ctx.cr6.eq) goto loc_8244E4F8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244E4A0;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244e4b8
	if (ctx.cr6.eq) goto loc_8244E4B8;
	// bl 0x821601b8
	ctx.lr = 0x8244E4B8;
	sub_821601B8(ctx, base);
loc_8244E4B8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a0ec0
	ctx.lr = 0x8244E4C0;
	sub_823A0EC0(ctx, base);
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8156);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8244e4f8
	if (!ctx.cr6.lt) goto loc_8244E4F8;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244E4DC;
	sub_821677D0(ctx, base);
	// bl 0x8239a988
	ctx.lr = 0x8244E4E0;
	sub_8239A988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244e4f8
	if (ctx.cr6.eq) goto loc_8244E4F8;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243ff60
	ctx.lr = 0x8244E4F8;
	sub_8243FF60(ctx, base);
loc_8244E4F8:
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

__attribute__((alias("__imp__sub_8244E510"))) PPC_WEAK_FUNC(sub_8244E510);
PPC_FUNC_IMPL(__imp__sub_8244E510) {
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
	// lbz r11,59(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 59);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244e568
	if (!ctx.cr6.eq) goto loc_8244E568;
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// lfs f0,196(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lfs f1,172(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x82449418
	ctx.lr = 0x8244E564;
	sub_82449418(ctx, base);
	// stfs f1,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
loc_8244E568:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// addi r4,r11,22996
	ctx.r4.s64 = ctx.r11.s64 + 22996;
	// li r11,15
	ctx.r11.s64 = 15;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r10,58(r31)
	PPC_STORE_U8(ctx.r31.u32 + 58, ctx.r10.u8);
	// stb r10,59(r31)
	PPC_STORE_U8(ctx.r31.u32 + 59, ctx.r10.u8);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x82161e08
	ctx.lr = 0x8244E598;
	sub_82161E08(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8244bd40
	ctx.lr = 0x8244E5A4;
	sub_8244BD40(ctx, base);
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r4,-21512(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21512);
	// bl 0x82448490
	ctx.lr = 0x8244E5B4;
	sub_82448490(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// beq cr6,0x8244e5cc
	if (ctx.cr6.eq) goto loc_8244E5CC;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243ff60
	ctx.lr = 0x8244E5CC;
	sub_8243FF60(ctx, base);
loc_8244E5CC:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82390028
	ctx.lr = 0x8244E5D4;
	sub_82390028(ctx, base);
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

__attribute__((alias("__imp__sub_8244E5F0"))) PPC_WEAK_FUNC(sub_8244E5F0);
PPC_FUNC_IMPL(__imp__sub_8244E5F0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8244e6b4
	if (!ctx.cr6.lt) goto loc_8244E6B4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244E62C;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244e644
	if (ctx.cr6.eq) goto loc_8244E644;
	// bl 0x821601b8
	ctx.lr = 0x8244E644;
	sub_821601B8(ctx, base);
loc_8244E644:
	// lbz r11,244(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 244);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244e6b4
	if (ctx.cr6.eq) goto loc_8244E6B4;
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// addi r10,r11,304
	ctx.r10.s64 = ctx.r11.s64 + 304;
	// addi r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 + 136;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8244e674
	if (ctx.cr6.lt) goto loc_8244E674;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8244E674:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82449c78
	ctx.lr = 0x8244E67C;
	sub_82449C78(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8243e158
	ctx.lr = 0x8244E68C;
	sub_8243E158(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244e6b4
	if (ctx.cr6.eq) goto loc_8244E6B4;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x8243ff60
	ctx.lr = 0x8244E6B0;
	sub_8243FF60(ctx, base);
	// b 0x8244e7e0
	goto loc_8244E7E0;
loc_8244E6B4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244E6C0;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244e6d8
	if (ctx.cr6.eq) goto loc_8244E6D8;
	// bl 0x821601b8
	ctx.lr = 0x8244E6D8;
	sub_821601B8(ctx, base);
loc_8244E6D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8243cc98
	ctx.lr = 0x8244E6E0;
	sub_8243CC98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244e6fc
	if (ctx.cr6.eq) goto loc_8244E6FC;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243ff60
	ctx.lr = 0x8244E6F8;
	sub_8243FF60(ctx, base);
	// b 0x8244e7e0
	goto loc_8244E7E0;
loc_8244E6FC:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244E708;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244e720
	if (ctx.cr6.eq) goto loc_8244E720;
	// bl 0x821601b8
	ctx.lr = 0x8244E720;
	sub_821601B8(ctx, base);
loc_8244E720:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8243cca0
	ctx.lr = 0x8244E728;
	sub_8243CCA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244e744
	if (ctx.cr6.eq) goto loc_8244E744;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x8243ff60
	ctx.lr = 0x8244E740;
	sub_8243FF60(ctx, base);
	// b 0x8244e7e0
	goto loc_8244E7E0;
loc_8244E744:
	// lfs f13,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x8244e770
	if (!ctx.cr6.lt) goto loc_8244E770;
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x8243ff60
	ctx.lr = 0x8244E76C;
	sub_8243FF60(ctx, base);
	// b 0x8244e7e0
	goto loc_8244E7E0;
loc_8244E770:
	// bl 0x82449c78
	ctx.lr = 0x8244E774;
	sub_82449C78(ctx, base);
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,188(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8243e720
	ctx.lr = 0x8244E784;
	sub_8243E720(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244e7e0
	if (ctx.cr6.eq) goto loc_8244E7E0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f30,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f30.f64 = double(temp.f32);
	// bl 0x82449c78
	ctx.lr = 0x8244E7A0;
	sub_82449C78(ctx, base);
	// bl 0x8243cb28
	ctx.lr = 0x8244E7A4;
	sub_8243CB28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244e7b8
	if (ctx.cr6.eq) goto loc_8244E7B8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,5424(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5424);
	ctx.f30.f64 = double(temp.f32);
loc_8244E7B8:
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,192(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82449c78
	ctx.lr = 0x8244E7D8;
	sub_82449C78(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8243cbf8
	ctx.lr = 0x8244E7E0;
	sub_8243CBF8(ctx, base);
loc_8244E7E0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

__attribute__((alias("__imp__sub_8244E800"))) PPC_WEAK_FUNC(sub_8244E800);
PPC_FUNC_IMPL(__imp__sub_8244E800) {
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
	// lbz r11,58(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 58);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244e858
	if (ctx.cr6.eq) goto loc_8244E858;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,26
	ctx.r4.s64 = 26;
	// stb r30,58(r31)
	PPC_STORE_U8(ctx.r31.u32 + 58, ctx.r30.u8);
	// bl 0x8243ff60
	ctx.lr = 0x8244E834;
	sub_8243FF60(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244E83C;
	sub_821677D0(ctx, base);
	// bl 0x823e7930
	ctx.lr = 0x8244E840;
	sub_823E7930(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8244e858
	if (ctx.cr6.eq) goto loc_8244E858;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// bl 0x8244ae80
	ctx.lr = 0x8244E858;
	sub_8244AE80(ctx, base);
loc_8244E858:
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

__attribute__((alias("__imp__sub_8244E870"))) PPC_WEAK_FUNC(sub_8244E870);
PPC_FUNC_IMPL(__imp__sub_8244E870) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244E894;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244e8ac
	if (ctx.cr6.eq) goto loc_8244E8AC;
	// bl 0x821601b8
	ctx.lr = 0x8244E8AC;
	sub_821601B8(ctx, base);
loc_8244E8AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a0ec0
	ctx.lr = 0x8244E8B4;
	sub_823A0EC0(ctx, base);
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8156);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8244e8fc
	if (!ctx.cr6.lt) goto loc_8244E8FC;
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x82449418
	ctx.lr = 0x8244E8E4;
	sub_82449418(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f1,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243ff60
	ctx.lr = 0x8244E8F4;
	sub_8243FF60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,59(r31)
	PPC_STORE_U8(ctx.r31.u32 + 59, ctx.r11.u8);
loc_8244E8FC:
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

__attribute__((alias("__imp__sub_8244E918"))) PPC_WEAK_FUNC(sub_8244E918);
PPC_FUNC_IMPL(__imp__sub_8244E918) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8244e958
	if (!ctx.cr6.lt) goto loc_8244E958;
	// li r4,29
	ctx.r4.s64 = 29;
	// b 0x8244e994
	goto loc_8244E994;
loc_8244E958:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244E964;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244e97c
	if (ctx.cr6.eq) goto loc_8244E97C;
	// bl 0x821601b8
	ctx.lr = 0x8244E97C;
	sub_821601B8(ctx, base);
loc_8244E97C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8243cb30
	ctx.lr = 0x8244E984;
	sub_8243CB30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244e99c
	if (ctx.cr6.eq) goto loc_8244E99C;
	// li r4,25
	ctx.r4.s64 = 25;
loc_8244E994:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243ff60
	ctx.lr = 0x8244E99C;
	sub_8243FF60(ctx, base);
loc_8244E99C:
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

__attribute__((alias("__imp__sub_8244E9B8"))) PPC_WEAK_FUNC(sub_8244E9B8);
PPC_FUNC_IMPL(__imp__sub_8244E9B8) {
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
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244E9D4;
	sub_821677D0(ctx, base);
	// bl 0x8239a988
	ctx.lr = 0x8244E9D8;
	sub_8239A988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244e9fc
	if (ctx.cr6.eq) goto loc_8244E9FC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824497d8
	ctx.lr = 0x8244E9F0;
	sub_824497D8(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243ff60
	ctx.lr = 0x8244E9FC;
	sub_8243FF60(ctx, base);
loc_8244E9FC:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8244EA10"))) PPC_WEAK_FUNC(sub_8244EA10);
PPC_FUNC_IMPL(__imp__sub_8244EA10) {
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
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244EA2C;
	sub_821677D0(ctx, base);
	// bl 0x8239a988
	ctx.lr = 0x8244EA30;
	sub_8239A988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244ea48
	if (ctx.cr6.eq) goto loc_8244EA48;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243ff60
	ctx.lr = 0x8244EA48;
	sub_8243FF60(ctx, base);
loc_8244EA48:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8244EA60"))) PPC_WEAK_FUNC(sub_8244EA60);
PPC_FUNC_IMPL(__imp__sub_8244EA60) {
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
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244EA84;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244ea9c
	if (ctx.cr6.eq) goto loc_8244EA9C;
	// bl 0x821601b8
	ctx.lr = 0x8244EA9C;
	sub_821601B8(ctx, base);
loc_8244EA9C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244EAB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244eb18
	if (ctx.cr6.eq) goto loc_8244EB18;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244EAC8;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244eae0
	if (ctx.cr6.eq) goto loc_8244EAE0;
	// bl 0x821601b8
	ctx.lr = 0x8244EAE0;
	sub_821601B8(ctx, base);
loc_8244EAE0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a0ec0
	ctx.lr = 0x8244EAE8;
	sub_823A0EC0(ctx, base);
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8156);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8244eb18
	if (!ctx.cr6.lt) goto loc_8244EB18;
	// lbz r11,58(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 58);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,26
	ctx.r4.s64 = 26;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244eb14
	if (ctx.cr6.eq) goto loc_8244EB14;
	// li r4,25
	ctx.r4.s64 = 25;
loc_8244EB14:
	// bl 0x8243ff60
	ctx.lr = 0x8244EB18;
	sub_8243FF60(ctx, base);
loc_8244EB18:
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

__attribute__((alias("__imp__sub_8244EB30"))) PPC_WEAK_FUNC(sub_8244EB30);
PPC_FUNC_IMPL(__imp__sub_8244EB30) {
	PPC_FUNC_PROLOGUE();
	// li r4,29
	ctx.r4.s64 = 29;
	// b 0x8243ff60
	sub_8243FF60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244EB38"))) PPC_WEAK_FUNC(sub_8244EB38);
PPC_FUNC_IMPL(__imp__sub_8244EB38) {
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
	// li r3,36
	ctx.r3.s64 = 36;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82186158
	ctx.lr = 0x8244EB5C;
	sub_82186158(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244eb6c
	if (ctx.cr6.eq) goto loc_8244EB6C;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_8244EB6C:
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8244eb7c
	if (ctx.cr6.eq) goto loc_8244EB7C;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8244EB7C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x8244d8f0
	ctx.lr = 0x8244EBC4;
	sub_8244D8F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8244EBE0"))) PPC_WEAK_FUNC(sub_8244EBE0);
PPC_FUNC_IMPL(__imp__sub_8244EBE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8244EBE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// std r5,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r5.u64);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f2,116(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r6,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r6.u64);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lfs f0,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// bl 0x823e9f80
	ctx.lr = 0x8244EC38;
	sub_823E9F80(ctx, base);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lwz r10,200(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r10.u8);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// bl 0x8244c7f0
	ctx.lr = 0x8244EC80;
	sub_8244C7F0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823eb820
	ctx.lr = 0x8244EC94;
	sub_823EB820(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244ECA0"))) PPC_WEAK_FUNC(sub_8244ECA0);
PPC_FUNC_IMPL(__imp__sub_8244ECA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8244ECA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stfs f1,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f2,108(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lfs f0,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// bl 0x823e9f80
	ctx.lr = 0x8244ECF4;
	sub_823E9F80(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// bl 0x8244c5b0
	ctx.lr = 0x8244ED28;
	sub_8244C5B0(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823eb820
	ctx.lr = 0x8244ED3C;
	sub_823EB820(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244ED48"))) PPC_WEAK_FUNC(sub_8244ED48);
PPC_FUNC_IMPL(__imp__sub_8244ED48) {
	PPC_FUNC_PROLOGUE();
	// b 0x8244dbc0
	sub_8244DBC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244ED50"))) PPC_WEAK_FUNC(sub_8244ED50);
PPC_FUNC_IMPL(__imp__sub_8244ED50) {
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8244dc40
	ctx.lr = 0x8244ED70;
	sub_8244DC40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8244ED80"))) PPC_WEAK_FUNC(sub_8244ED80);
PPC_FUNC_IMPL(__imp__sub_8244ED80) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r31,r4,4
	ctx.r31.s64 = ctx.r4.s64 + 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// bl 0x8244b978
	ctx.lr = 0x8244EDBC;
	sub_8244B978(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8244dcc0
	ctx.lr = 0x8244EDCC;
	sub_8244DCC0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244eddc
	if (ctx.cr6.eq) goto loc_8244EDDC;
	// bl 0x821601b8
	ctx.lr = 0x8244EDDC;
	sub_821601B8(ctx, base);
loc_8244EDDC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244edec
	if (ctx.cr6.eq) goto loc_8244EDEC;
	// bl 0x82581e38
	ctx.lr = 0x8244EDEC;
	sub_82581E38(ctx, base);
loc_8244EDEC:
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

__attribute__((alias("__imp__sub_8244EE08"))) PPC_WEAK_FUNC(sub_8244EE08);
PPC_FUNC_IMPL(__imp__sub_8244EE08) {
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8244ddc0
	ctx.lr = 0x8244EE28;
	sub_8244DDC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8244EE38"))) PPC_WEAK_FUNC(sub_8244EE38);
PPC_FUNC_IMPL(__imp__sub_8244EE38) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244EE5C;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244ee74
	if (ctx.cr6.eq) goto loc_8244EE74;
	// bl 0x821601b8
	ctx.lr = 0x8244EE74;
	sub_821601B8(ctx, base);
loc_8244EE74:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d63b8
	ctx.lr = 0x8244EE7C;
	sub_823D63B8(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stfs f1,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// bl 0x82390070
	ctx.lr = 0x8244EE88;
	sub_82390070(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,424(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8244eec0
	if (!ctx.cr6.lt) goto loc_8244EEC0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,57(r31)
	PPC_STORE_U8(ctx.r31.u32 + 57, ctx.r11.u8);
	// bl 0x821677d0
	ctx.lr = 0x8244EEB0;
	sub_821677D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823e9838
	ctx.lr = 0x8244EEB8;
	sub_823E9838(ctx, base);
	// addi r11,r31,188
	ctx.r11.s64 = ctx.r31.s64 + 188;
	// b 0x8244eeec
	goto loc_8244EEEC;
loc_8244EEC0:
	// bl 0x82390070
	ctx.lr = 0x8244EEC4;
	sub_82390070(ctx, base);
	// lfs f0,488(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bge cr6,0x8244eee4
	if (!ctx.cr6.lt) goto loc_8244EEE4;
	// bl 0x82448e18
	ctx.lr = 0x8244EEDC;
	sub_82448E18(ctx, base);
	// addi r11,r31,860
	ctx.r11.s64 = ctx.r31.s64 + 860;
	// b 0x8244eeec
	goto loc_8244EEEC;
loc_8244EEE4:
	// bl 0x82448e18
	ctx.lr = 0x8244EEE8;
	sub_82448E18(ctx, base);
	// addi r11,r31,524
	ctx.r11.s64 = ctx.r31.s64 + 524;
loc_8244EEEC:
	// stw r11,1196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1196, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x82449418
	ctx.lr = 0x8244EF0C;
	sub_82449418(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f1,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243ff60
	ctx.lr = 0x8244EF1C;
	sub_8243FF60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,59(r31)
	PPC_STORE_U8(ctx.r31.u32 + 59, ctx.r11.u8);
	// bl 0x8244b7c0
	ctx.lr = 0x8244EF2C;
	sub_8244B7C0(ctx, base);
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

__attribute__((alias("__imp__sub_8244EF48"))) PPC_WEAK_FUNC(sub_8244EF48);
PPC_FUNC_IMPL(__imp__sub_8244EF48) {
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
	// lbz r11,185(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 185);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244efcc
	if (ctx.cr6.eq) goto loc_8244EFCC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824497d8
	ctx.lr = 0x8244EF70;
	sub_824497D8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x8244efac
	if (ctx.cr6.eq) goto loc_8244EFAC;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x8244efac
	if (ctx.cr6.eq) goto loc_8244EFAC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8244e170
	ctx.lr = 0x8244EF98;
	sub_8244E170(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8244EFAC:
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243ff60
	ctx.lr = 0x8244EFB8;
	sub_8243FF60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8244EFCC:
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// lfs f1,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x82449418
	ctx.lr = 0x8244EFE4;
	sub_82449418(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f1,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243ff60
	ctx.lr = 0x8244EFF4;
	sub_8243FF60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,59(r31)
	PPC_STORE_U8(ctx.r31.u32 + 59, ctx.r11.u8);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8244F010"))) PPC_WEAK_FUNC(sub_8244F010);
PPC_FUNC_IMPL(__imp__sub_8244F010) {
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
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8244f058
	if (!ctx.cr6.gt) goto loc_8244F058;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5660
	ctx.r4.s64 = ctx.r11.s64 + 5660;
	// bl 0x821620e8
	ctx.lr = 0x8244F044;
	sub_821620E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8244bd40
	ctx.lr = 0x8244F050;
	sub_8244BD40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8244ef48
	ctx.lr = 0x8244F058;
	sub_8244EF48(ctx, base);
loc_8244F058:
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

__attribute__((alias("__imp__sub_8244F070"))) PPC_WEAK_FUNC(sub_8244F070);
PPC_FUNC_IMPL(__imp__sub_8244F070) {
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
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244F094;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244f0ac
	if (ctx.cr6.eq) goto loc_8244F0AC;
	// bl 0x821601b8
	ctx.lr = 0x8244F0AC;
	sub_821601B8(ctx, base);
loc_8244F0AC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244F0C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244f11c
	if (ctx.cr6.eq) goto loc_8244F11C;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244F0D8;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244f0f0
	if (ctx.cr6.eq) goto loc_8244F0F0;
	// bl 0x821601b8
	ctx.lr = 0x8244F0F0;
	sub_821601B8(ctx, base);
loc_8244F0F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a0ec0
	ctx.lr = 0x8244F0F8;
	sub_823A0EC0(ctx, base);
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8156);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8244f11c
	if (!ctx.cr6.lt) goto loc_8244F11C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8244e170
	ctx.lr = 0x8244F11C;
	sub_8244E170(ctx, base);
loc_8244F11C:
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

__attribute__((alias("__imp__sub_8244F138"))) PPC_WEAK_FUNC(sub_8244F138);
PPC_FUNC_IMPL(__imp__sub_8244F138) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244F15C;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244f174
	if (ctx.cr6.eq) goto loc_8244F174;
	// bl 0x821601b8
	ctx.lr = 0x8244F174;
	sub_821601B8(ctx, base);
loc_8244F174:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244F188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244f1cc
	if (ctx.cr6.eq) goto loc_8244F1CC;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82390710
	ctx.lr = 0x8244F19C;
	sub_82390710(ctx, base);
	// bl 0x825d4220
	ctx.lr = 0x8244F1A0;
	sub_825D4220(ctx, base);
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8244f1c0
	if (!ctx.cr6.lt) goto loc_8244F1C0;
	// li r4,23
	ctx.r4.s64 = 23;
	// bl 0x8243ff60
	ctx.lr = 0x8244F1BC;
	sub_8243FF60(ctx, base);
	// b 0x8244f1cc
	goto loc_8244F1CC;
loc_8244F1C0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8244e170
	ctx.lr = 0x8244F1CC;
	sub_8244E170(ctx, base);
loc_8244F1CC:
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

__attribute__((alias("__imp__sub_8244F1E8"))) PPC_WEAK_FUNC(sub_8244F1E8);
PPC_FUNC_IMPL(__imp__sub_8244F1E8) {
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
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244F204;
	sub_821677D0(ctx, base);
	// bl 0x8239a988
	ctx.lr = 0x8244F208;
	sub_8239A988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244f224
	if (ctx.cr6.eq) goto loc_8244F224;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8244e170
	ctx.lr = 0x8244F224;
	sub_8244E170(ctx, base);
loc_8244F224:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8244F238"))) PPC_WEAK_FUNC(sub_8244F238);
PPC_FUNC_IMPL(__imp__sub_8244F238) {
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
	// bl 0x8244abe8
	ctx.lr = 0x8244F258;
	sub_8244ABE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244f2b0
	if (ctx.cr6.eq) goto loc_8244F2B0;
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r4,-21512(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21512);
	// bl 0x82448490
	ctx.lr = 0x8244F274;
	sub_82448490(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82390028
	ctx.lr = 0x8244F27C;
	sub_82390028(ctx, base);
	// lbz r11,57(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 57);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244f298
	if (ctx.cr6.eq) goto loc_8244F298;
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x8243ff60
	ctx.lr = 0x8244F294;
	sub_8243FF60(ctx, base);
	// b 0x8244f2b0
	goto loc_8244F2B0;
loc_8244F298:
	// rlwinm r11,r30,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x20;
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244f2ac
	if (!ctx.cr6.eq) goto loc_8244F2AC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8244F2AC:
	// bl 0x8244e368
	ctx.lr = 0x8244F2B0;
	sub_8244E368(ctx, base);
loc_8244F2B0:
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

__attribute__((alias("__imp__sub_8244F2C8"))) PPC_WEAK_FUNC(sub_8244F2C8);
PPC_FUNC_IMPL(__imp__sub_8244F2C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8244F2D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// stb r28,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r28.u8);
	// bl 0x82161d10
	ctx.lr = 0x8244F31C;
	sub_82161D10(ctx, base);
	// addi r4,r29,28
	ctx.r4.s64 = ctx.r29.s64 + 28;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x8244eb38
	ctx.lr = 0x8244F328;
	sub_8244EB38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r27,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r27.u8);
	// stb r28,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r28.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244F340"))) PPC_WEAK_FUNC(sub_8244F340);
PPC_FUNC_IMPL(__imp__sub_8244F340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8244F348;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ad0700
	ctx.lr = 0x8244F35C;
	sub_82AD0700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244f3a0
	if (!ctx.cr6.eq) goto loc_8244F3A0;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r10,r10,-4792
	ctx.r10.s64 = ctx.r10.s64 + -4792;
	// addi r11,r11,-4784
	ctx.r11.s64 = ctx.r11.s64 + -4784;
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x8244F388;
	sub_82186158(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8244f39c
	if (ctx.cr6.eq) goto loc_8244F39C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8244d778
	ctx.lr = 0x8244F39C;
	sub_8244D778(ctx, base);
loc_8244F39C:
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
loc_8244F3A0:
	// addi r31,r29,8
	ctx.r31.s64 = ctx.r29.s64 + 8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8244f3b8
	if (ctx.cr6.lt) goto loc_8244F3B8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x8244F3B8;
	sub_82186190(ctx, base);
loc_8244F3B8:
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244F3D8"))) PPC_WEAK_FUNC(sub_8244F3D8);
PPC_FUNC_IMPL(__imp__sub_8244F3D8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r4,4
	ctx.r30.s64 = ctx.r4.s64 + 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8244b978
	ctx.lr = 0x8244F418;
	sub_8244B978(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8244ed80
	ctx.lr = 0x8244F424;
	sub_8244ED80(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244f434
	if (ctx.cr6.eq) goto loc_8244F434;
	// bl 0x821601b8
	ctx.lr = 0x8244F434;
	sub_821601B8(ctx, base);
loc_8244F434:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244f444
	if (ctx.cr6.eq) goto loc_8244F444;
	// bl 0x82581e38
	ctx.lr = 0x8244F444;
	sub_82581E38(ctx, base);
loc_8244F444:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8244F460"))) PPC_WEAK_FUNC(sub_8244F460);
PPC_FUNC_IMPL(__imp__sub_8244F460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8244F468;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ad0700
	ctx.lr = 0x8244F47C;
	sub_82AD0700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244f4c0
	if (!ctx.cr6.eq) goto loc_8244F4C0;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r10,r10,-8872
	ctx.r10.s64 = ctx.r10.s64 + -8872;
	// addi r11,r11,-4600
	ctx.r11.s64 = ctx.r11.s64 + -4600;
	// li r3,36
	ctx.r3.s64 = 36;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x8244F4A8;
	sub_82186158(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8244f4bc
	if (ctx.cr6.eq) goto loc_8244F4BC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8244d7e8
	ctx.lr = 0x8244F4BC;
	sub_8244D7E8(ctx, base);
loc_8244F4BC:
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
loc_8244F4C0:
	// addi r31,r29,8
	ctx.r31.s64 = ctx.r29.s64 + 8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8244f4d8
	if (ctx.cr6.lt) goto loc_8244F4D8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x8244F4D8;
	sub_82186190(ctx, base);
loc_8244F4D8:
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244F4F8"))) PPC_WEAK_FUNC(sub_8244F4F8);
PPC_FUNC_IMPL(__imp__sub_8244F4F8) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lfs f0,6100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x82449418
	ctx.lr = 0x8244F524;
	sub_82449418(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stb r30,185(r31)
	PPC_STORE_U8(ctx.r31.u32 + 185, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8244f548
	if (ctx.cr6.gt) goto loc_8244F548;
	// bl 0x8244ef48
	ctx.lr = 0x8244F544;
	sub_8244EF48(ctx, base);
	// b 0x8244f550
	goto loc_8244F550;
loc_8244F548:
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x8243ff60
	ctx.lr = 0x8244F550;
	sub_8243FF60(ctx, base);
loc_8244F550:
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

__attribute__((alias("__imp__sub_8244F568"))) PPC_WEAK_FUNC(sub_8244F568);
PPC_FUNC_IMPL(__imp__sub_8244F568) {
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
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244F584;
	sub_821677D0(ctx, base);
	// bl 0x8239a988
	ctx.lr = 0x8244F588;
	sub_8239A988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244f5b0
	if (ctx.cr6.eq) goto loc_8244F5B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,1196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,59(r31)
	PPC_STORE_U8(ctx.r31.u32 + 59, ctx.r11.u8);
	// lfs f1,252(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 252);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8244f4f8
	ctx.lr = 0x8244F5B0;
	sub_8244F4F8(ctx, base);
loc_8244F5B0:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8244F5C8"))) PPC_WEAK_FUNC(sub_8244F5C8);
PPC_FUNC_IMPL(__imp__sub_8244F5C8) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8244f688
	if (ctx.cr6.lt) goto loc_8244F688;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244F600;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244f618
	if (ctx.cr6.eq) goto loc_8244F618;
	// bl 0x821601b8
	ctx.lr = 0x8244F618;
	sub_821601B8(ctx, base);
loc_8244F618:
	// lbz r11,93(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 93);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244f688
	if (ctx.cr6.eq) goto loc_8244F688;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8244f640
	if (ctx.cr6.eq) goto loc_8244F640;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bl 0x8244ae80
	ctx.lr = 0x8244F640;
	sub_8244AE80(ctx, base);
loc_8244F640:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82449c78
	ctx.lr = 0x8244F648;
	sub_82449C78(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,3548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8243a8c0
	ctx.lr = 0x8244F65C;
	sub_8243A8C0(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244F664;
	sub_821677D0(ctx, base);
	// bl 0x8239a988
	ctx.lr = 0x8244F668;
	sub_8239A988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244f688
	if (ctx.cr6.eq) goto loc_8244F688;
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8244f4f8
	ctx.lr = 0x8244F688;
	sub_8244F4F8(ctx, base);
loc_8244F688:
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

__attribute__((alias("__imp__sub_8244F6A0"))) PPC_WEAK_FUNC(sub_8244F6A0);
PPC_FUNC_IMPL(__imp__sub_8244F6A0) {
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
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244F6BC;
	sub_821677D0(ctx, base);
	// bl 0x8239a988
	ctx.lr = 0x8244F6C0;
	sub_8239A988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244f6e4
	if (ctx.cr6.eq) goto loc_8244F6E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,59(r31)
	PPC_STORE_U8(ctx.r31.u32 + 59, ctx.r11.u8);
	// bl 0x8244f4f8
	ctx.lr = 0x8244F6E4;
	sub_8244F4F8(ctx, base);
loc_8244F6E4:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8244F6F8"))) PPC_WEAK_FUNC(sub_8244F6F8);
PPC_FUNC_IMPL(__imp__sub_8244F6F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8244F700;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8244b528
	ctx.lr = 0x8244F710;
	sub_8244B528(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244F718;
	sub_821677D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6448);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239c420
	ctx.lr = 0x8244F724;
	sub_8239C420(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244F72C;
	sub_821677D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,4356
	ctx.r4.s64 = ctx.r11.s64 + 4356;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8239a598
	ctx.lr = 0x8244F748;
	sub_8239A598(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244F754;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244f76c
	if (ctx.cr6.eq) goto loc_8244F76C;
	// bl 0x821601b8
	ctx.lr = 0x8244F76C;
	sub_821601B8(ctx, base);
loc_8244F76C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82440418
	ctx.lr = 0x8244F774;
	sub_82440418(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82390070
	ctx.lr = 0x8244F77C;
	sub_82390070(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r30,0
	ctx.r30.s64 = 0;
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x8244f868
	if (!ctx.cr6.gt) goto loc_8244F868;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8244f7a8
	if (ctx.cr6.eq) goto loc_8244F7A8;
	// li r11,2
	ctx.r11.s64 = 2;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bl 0x8244afa0
	ctx.lr = 0x8244F7A8;
	sub_8244AFA0(ctx, base);
loc_8244F7A8:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// addi r11,r11,-27064
	ctx.r11.s64 = ctx.r11.s64 + -27064;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8244c3d0
	ctx.lr = 0x8244F7D0;
	sub_8244C3D0(ctx, base);
	// lis r6,-32187
	ctx.r6.s64 = -2109407232;
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r6,r6,-18144
	ctx.r6.s64 = ctx.r6.s64 + -18144;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r7,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r7.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r6,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
	// stw r8,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r8.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stb r30,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r30.u8);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stb r30,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r30.u8);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// ld r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// bl 0x8244c688
	ctx.lr = 0x8244F850;
	sub_8244C688(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x823eb820
	ctx.lr = 0x8244F864;
	sub_823EB820(ctx, base);
	// b 0x8244f87c
	goto loc_8244F87C;
loc_8244F868:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8244f87c
	if (ctx.cr6.eq) goto loc_8244F87C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// bl 0x8244ae80
	ctx.lr = 0x8244F87C;
	sub_8244AE80(ctx, base);
loc_8244F87C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244F888;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244f8a0
	if (ctx.cr6.eq) goto loc_8244F8A0;
	// bl 0x821601b8
	ctx.lr = 0x8244F8A0;
	sub_821601B8(ctx, base);
loc_8244F8A0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8243cab8
	ctx.lr = 0x8244F8AC;
	sub_8243CAB8(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244F8B8;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244f8d0
	if (ctx.cr6.eq) goto loc_8244F8D0;
	// bl 0x821601b8
	ctx.lr = 0x8244F8D0;
	sub_821601B8(ctx, base);
loc_8244F8D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82440460
	ctx.lr = 0x8244F8D8;
	sub_82440460(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244F8E4;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244f8fc
	if (ctx.cr6.eq) goto loc_8244F8FC;
	// bl 0x821601b8
	ctx.lr = 0x8244F8FC;
	sub_821601B8(ctx, base);
loc_8244F8FC:
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8243a8a8
	ctx.lr = 0x8244F90C;
	sub_8243A8A8(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244F918;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244f930
	if (ctx.cr6.eq) goto loc_8244F930;
	// bl 0x821601b8
	ctx.lr = 0x8244F930;
	sub_821601B8(ctx, base);
loc_8244F930:
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f2,248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8243a8c0
	ctx.lr = 0x8244F944;
	sub_8243A8C0(ctx, base);
	// lbz r11,57(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 57);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244fa10
	if (ctx.cr6.eq) goto loc_8244FA10;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82390070
	ctx.lr = 0x8244F958;
	sub_82390070(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r10,1196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// lfs f0,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f13,236(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8244fa10
	if (!ctx.cr6.gt) goto loc_8244FA10;
	// lfs f1,240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 240);
	ctx.f1.f64 = double(temp.f32);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stb r30,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r30.u8);
	// addi r10,r10,-29160
	ctx.r10.s64 = ctx.r10.s64 + -29160;
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// rldicl r7,r8,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r7,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// ld r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8244ebe0
	ctx.lr = 0x8244F9C8;
	sub_8244EBE0(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r10,r31,524
	ctx.r10.s64 = ctx.r31.s64 + 524;
	// li r9,1
	ctx.r9.s64 = 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r10,1196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1196, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r9,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r9.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8244fa04
	if (ctx.cr6.eq) goto loc_8244FA04;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,22932
	ctx.r4.s64 = ctx.r11.s64 + 22932;
	// b 0x8244fa0c
	goto loc_8244FA0C;
loc_8244FA04:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,22912
	ctx.r4.s64 = ctx.r11.s64 + 22912;
loc_8244FA0C:
	// bl 0x8244d028
	ctx.lr = 0x8244FA10;
	sub_8244D028(ctx, base);
loc_8244FA10:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82390070
	ctx.lr = 0x8244FA18;
	sub_82390070(ctx, base);
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// lfs f0,300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8244fa30
	if (!ctx.cr6.lt) goto loc_8244FA30;
	// addi r11,r31,860
	ctx.r11.s64 = ctx.r31.s64 + 860;
	// stw r11,1196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1196, ctx.r11.u32);
loc_8244FA30:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244FA40"))) PPC_WEAK_FUNC(sub_8244FA40);
PPC_FUNC_IMPL(__imp__sub_8244FA40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8244FA48;
	__savegprlr_28(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244FA5C;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244fa74
	if (ctx.cr6.eq) goto loc_8244FA74;
	// bl 0x821601b8
	ctx.lr = 0x8244FA74;
	sub_821601B8(ctx, base);
loc_8244FA74:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x821677d0
	ctx.lr = 0x8244FA90;
	sub_821677D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,-2180
	ctx.r5.s64 = ctx.r11.s64 + -2180;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x823e8e18
	ctx.lr = 0x8244FAA8;
	sub_823E8E18(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244fab8
	if (ctx.cr6.eq) goto loc_8244FAB8;
	// bl 0x82581e38
	ctx.lr = 0x8244FAB8;
	sub_82581E38(ctx, base);
loc_8244FAB8:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r11,r11,6
	ctx.r11.u64 = ctx.r11.u64 | 6;
	// stb r28,58(r31)
	PPC_STORE_U8(ctx.r31.u32 + 58, ctx.r28.u8);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// bl 0x82392bb8
	ctx.lr = 0x8244FAD4;
	sub_82392BB8(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244FAEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,4140
	ctx.r11.u64 = ctx.r11.u64 | 4140;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// lfs f0,316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,256(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// bl 0x82393060
	ctx.lr = 0x8244FB20;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244fb38
	if (ctx.cr6.eq) goto loc_8244FB38;
	// bl 0x821601b8
	ctx.lr = 0x8244FB38;
	sub_821601B8(ctx, base);
loc_8244FB38:
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// lfs f0,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f13,324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	ctx.f13.f64 = double(temp.f32);
	// lfs f3,328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f1,320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82449588
	ctx.lr = 0x8244FB5C;
	sub_82449588(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82393060
	ctx.lr = 0x8244FB6C;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244fb84
	if (ctx.cr6.eq) goto loc_8244FB84;
	// bl 0x821601b8
	ctx.lr = 0x8244FB84;
	sub_821601B8(ctx, base);
loc_8244FB84:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8243dc48
	ctx.lr = 0x8244FB90;
	sub_8243DC48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825d3bb0
	ctx.lr = 0x8244FBA0;
	sub_825D3BB0(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82392bb8
	ctx.lr = 0x8244FBB8;
	sub_82392BB8(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244FBD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244FBD8;
	sub_821677D0(ctx, base);
	// bl 0x823e7930
	ctx.lr = 0x8244FBDC;
	sub_823E7930(ctx, base);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r8,1196(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// addi r10,r10,-17128
	ctx.r10.s64 = ctx.r10.s64 + -17128;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// lfs f1,332(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 332);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,3544(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3544);
	ctx.f2.f64 = double(temp.f32);
	// ld r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8244eca0
	ctx.lr = 0x8244FC18;
	sub_8244ECA0(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82390028
	ctx.lr = 0x8244FC20;
	sub_82390028(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244FC28"))) PPC_WEAK_FUNC(sub_8244FC28);
PPC_FUNC_IMPL(__imp__sub_8244FC28) {
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
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8244FC44;
	sub_821677D0(ctx, base);
	// bl 0x8239a988
	ctx.lr = 0x8244FC48;
	sub_8239A988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244fc70
	if (ctx.cr6.eq) goto loc_8244FC70;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,1196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,59(r31)
	PPC_STORE_U8(ctx.r31.u32 + 59, ctx.r11.u8);
	// lfs f1,256(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 256);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8244f4f8
	ctx.lr = 0x8244FC70;
	sub_8244F4F8(ctx, base);
loc_8244FC70:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8244FC88"))) PPC_WEAK_FUNC(sub_8244FC88);
PPC_FUNC_IMPL(__imp__sub_8244FC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8244FC90;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// li r27,15
	ctx.r27.s64 = 15;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stb r29,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r29.u8);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// bl 0x82161d10
	ctx.lr = 0x8244FCE0;
	sub_82161D10(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lbz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// stb r11,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r11.u8);
	// bl 0x8244f340
	ctx.lr = 0x8244FD00;
	sub_8244F340(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8244fd18
	if (ctx.cr6.lt) goto loc_8244FD18;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x8244FD18;
	sub_82186190(ctx, base);
loc_8244FD18:
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244FD30"))) PPC_WEAK_FUNC(sub_8244FD30);
PPC_FUNC_IMPL(__imp__sub_8244FD30) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r31,r4,4
	ctx.r31.s64 = ctx.r4.s64 + 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8244b978
	ctx.lr = 0x8244FD60;
	sub_8244B978(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8244f3d8
	ctx.lr = 0x8244FD70;
	sub_8244F3D8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244fd80
	if (ctx.cr6.eq) goto loc_8244FD80;
	// bl 0x821601b8
	ctx.lr = 0x8244FD80;
	sub_821601B8(ctx, base);
loc_8244FD80:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244fd90
	if (ctx.cr6.eq) goto loc_8244FD90;
	// bl 0x82581e38
	ctx.lr = 0x8244FD90;
	sub_82581E38(ctx, base);
loc_8244FD90:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_8244FDB0"))) PPC_WEAK_FUNC(sub_8244FDB0);
PPC_FUNC_IMPL(__imp__sub_8244FDB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8244FDB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// li r28,15
	ctx.r28.s64 = 15;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// stb r30,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r30.u8);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r30.u8);
	// bl 0x82161d10
	ctx.lr = 0x8244FE08;
	sub_82161D10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8244f460
	ctx.lr = 0x8244FE18;
	sub_8244F460(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8244fe30
	if (ctx.cr6.lt) goto loc_8244FE30;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x8244FE30;
	sub_82186190(ctx, base);
loc_8244FE30:
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8244FE48"))) PPC_WEAK_FUNC(sub_8244FE48);
PPC_FUNC_IMPL(__imp__sub_8244FE48) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8244FE6C;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8244fe84
	if (ctx.cr6.eq) goto loc_8244FE84;
	// bl 0x821601b8
	ctx.lr = 0x8244FE84;
	sub_821601B8(ctx, base);
loc_8244FE84:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a0ec0
	ctx.lr = 0x8244FE8C;
	sub_823A0EC0(ctx, base);
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8156);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8244feb4
	if (!ctx.cr6.lt) goto loc_8244FEB4;
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8244f4f8
	ctx.lr = 0x8244FEB4;
	sub_8244F4F8(ctx, base);
loc_8244FEB4:
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

__attribute__((alias("__imp__sub_8244FED0"))) PPC_WEAK_FUNC(sub_8244FED0);
PPC_FUNC_IMPL(__imp__sub_8244FED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b8
	ctx.lr = 0x8244FED8;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lis r11,1638
	ctx.r11.s64 = 107347968;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// ori r11,r11,26213
	ctx.r11.u64 = ctx.r11.u64 | 26213;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8244ff60
	if (ctx.cr6.lt) goto loc_8244FF60;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,6468
	ctx.r4.s64 = ctx.r11.s64 + 6468;
	// bl 0x821620e8
	ctx.lr = 0x8244FF18;
	sub_821620E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82163e00
	ctx.lr = 0x8244FF24;
	sub_82163E00(ctx, base);
	// bl 0x82160c28
	ctx.lr = 0x8244FF28;
	sub_82160C28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,3068
	ctx.r11.s64 = ctx.r11.s64 + 3068;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x821639b8
	ctx.lr = 0x8244FF3C;
	sub_821639B8(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8244ff50
	if (ctx.cr6.lt) goto loc_8244FF50;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x8244FF50;
	sub_82186190(ctx, base);
loc_8244FF50:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stb r26,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r26.u8);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_8244FF60:
	// li r3,56
	ctx.r3.s64 = 56;
	// lwz r30,4(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x82186158
	ctx.lr = 0x8244FF6C;
	sub_82186158(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8244ff90
	if (ctx.cr6.eq) goto loc_8244FF90;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8244f2c8
	ctx.lr = 0x8244FF90;
	sub_8244F2C8(ctx, base);
loc_8244FF90:
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
	// bne cr6,0x8244ffbc
	if (!ctx.cr6.eq) goto loc_8244FFBC;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// b 0x8244fff8
	goto loc_8244FFF8;
loc_8244FFBC:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244ffe4
	if (ctx.cr6.eq) goto loc_8244FFE4;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8244fffc
	if (!ctx.cr6.eq) goto loc_8244FFFC;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x8244fffc
	goto loc_8244FFFC;
loc_8244FFE4:
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8244fffc
	if (!ctx.cr6.eq) goto loc_8244FFFC;
loc_8244FFF8:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_8244FFFC:
	// addi r11,r25,4
	ctx.r11.s64 = ctx.r25.s64 + 4;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824501fc
	if (!ctx.cr6.eq) goto loc_824501FC;
loc_82450018:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82450118
	if (!ctx.cr6.eq) goto loc_82450118;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lbz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 52);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82450064
	if (!ctx.cr6.eq) goto loc_82450064;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stb r30,52(r10)
	PPC_STORE_U8(ctx.r10.u32 + 52, ctx.r30.u8);
	// stb r30,52(r9)
	PPC_STORE_U8(ctx.r9.u32 + 52, ctx.r30.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r26,52(r10)
	PPC_STORE_U8(ctx.r10.u32 + 52, ctx.r26.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x824501e8
	goto loc_824501E8;
loc_82450064:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82450080
	if (!ctx.cr6.eq) goto loc_82450080;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823e7ff8
	ctx.lr = 0x82450080;
	sub_823E7FF8(ctx, base);
loc_82450080:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r30,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r30.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r26,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r26.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,53(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 53);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824500c0
	if (!ctx.cr6.eq) goto loc_824500C0;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_824500C0:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x824500e8
	if (!ctx.cr6.eq) goto loc_824500E8;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x824501e8
	goto loc_824501E8;
loc_824500E8:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82450108
	if (!ctx.cr6.eq) goto loc_82450108;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x824501e8
	goto loc_824501E8;
loc_82450108:
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x824501e8
	goto loc_824501E8;
loc_82450118:
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 52);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8245014c
	if (!ctx.cr6.eq) goto loc_8245014C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r30,52(r10)
	PPC_STORE_U8(ctx.r10.u32 + 52, ctx.r30.u8);
	// stb r30,52(r9)
	PPC_STORE_U8(ctx.r9.u32 + 52, ctx.r30.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r26,52(r10)
	PPC_STORE_U8(ctx.r10.u32 + 52, ctx.r26.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x824501e8
	goto loc_824501E8;
loc_8245014C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82450168
	if (!ctx.cr6.eq) goto loc_82450168;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823e8070
	ctx.lr = 0x82450168;
	sub_823E8070(ctx, base);
loc_82450168:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r30,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r30.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r26,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r26.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r8,53(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 53);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x824501a4
	if (!ctx.cr6.eq) goto loc_824501A4;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
loc_824501A4:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x824501c4
	if (!ctx.cr6.eq) goto loc_824501C4;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// b 0x824501e0
	goto loc_824501E0;
loc_824501C4:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x824501dc
	if (!ctx.cr6.eq) goto loc_824501DC;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// b 0x824501e0
	goto loc_824501E0;
loc_824501DC:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
loc_824501E0:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_824501E8:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82450018
	if (ctx.cr6.eq) goto loc_82450018;
loc_824501FC:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r25,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r25.u32);
	// stw r27,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r30,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r30.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82450220"))) PPC_WEAK_FUNC(sub_82450220);
PPC_FUNC_IMPL(__imp__sub_82450220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82450228;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r27,15
	ctx.r27.s64 = 15;
	// addi r28,r29,4
	ctx.r28.s64 = ctx.r29.s64 + 4;
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// addi r4,r28,4
	ctx.r4.s64 = ctx.r28.s64 + 4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stb r31,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r31.u8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82161d10
	ctx.lr = 0x8245027C;
	sub_82161D10(ctx, base);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lbz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 40);
	// stb r11,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r11.u8);
	// bl 0x8244fc88
	ctx.lr = 0x82450298;
	sub_8244FC88(ctx, base);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x824502b0
	if (ctx.cr6.lt) goto loc_824502B0;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x824502B0;
	sub_82186190(ctx, base);
loc_824502B0:
	// stw r27,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r31.u32);
	// stb r31,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r31.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824502C8"))) PPC_WEAK_FUNC(sub_824502C8);
PPC_FUNC_IMPL(__imp__sub_824502C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x824502D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// li r28,15
	ctx.r28.s64 = 15;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stb r31,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r31.u8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82161d10
	ctx.lr = 0x82450324;
	sub_82161D10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8244fdb0
	ctx.lr = 0x82450330;
	sub_8244FDB0(ctx, base);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82450348
	if (ctx.cr6.lt) goto loc_82450348;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82450348;
	sub_82186190(ctx, base);
loc_82450348:
	// stw r28,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r31.u32);
	// stb r31,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r31.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82450360"))) PPC_WEAK_FUNC(sub_82450360);
PPC_FUNC_IMPL(__imp__sub_82450360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x82450368;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824503fc
	if (!ctx.cr6.eq) goto loc_824503FC;
loc_82450398:
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x824503b8
	if (ctx.cr6.lt) goto loc_824503B8;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x824503bc
	goto loc_824503BC;
loc_824503B8:
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
loc_824503BC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216a080
	ctx.lr = 0x824503CC;
	sub_8216A080(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x824503ec
	if (ctx.cr6.eq) goto loc_824503EC;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x824503f0
	goto loc_824503F0;
loc_824503EC:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_824503F0:
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82450398
	if (ctx.cr6.eq) goto loc_82450398;
loc_824503FC:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8245046c
	if (ctx.cr6.eq) goto loc_8245046C;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82450468
	if (ctx.cr6.eq) goto loc_82450468;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8244fed0
	ctx.lr = 0x82450444;
	sub_8244FED0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,8(r28)
	PPC_STORE_U8(ctx.r28.u32 + 8, ctx.r25.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_82450468:
	// bl 0x824496c0
	ctx.lr = 0x8245046C;
	sub_824496C0(ctx, base);
loc_8245046C:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
	// blt cr6,0x8245048c
	if (ctx.cr6.lt) goto loc_8245048C;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82450490
	goto loc_82450490;
loc_8245048C:
	// addi r6,r30,4
	ctx.r6.s64 = ctx.r30.s64 + 4;
loc_82450490:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x8216a080
	ctx.lr = 0x8245049C;
	sub_8216A080(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824504ec
	if (ctx.cr6.eq) goto loc_824504EC;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8244fed0
	ctx.lr = 0x824504C8;
	sub_8244FED0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,8(r28)
	PPC_STORE_U8(ctx.r28.u32 + 8, ctx.r25.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_824504EC:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// std r11,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
	// stb r10,8(r28)
	PPC_STORE_U8(ctx.r28.u32 + 8, ctx.r10.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82450508"))) PPC_WEAK_FUNC(sub_82450508);
PPC_FUNC_IMPL(__imp__sub_82450508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82450510;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// li r27,15
	ctx.r27.s64 = 15;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r29,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r29.u8);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82161d10
	ctx.lr = 0x82450558;
	sub_82161D10(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lbz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// stb r11,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r11.u8);
	// bl 0x82450220
	ctx.lr = 0x82450578;
	sub_82450220(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82450590
	if (ctx.cr6.lt) goto loc_82450590;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82450590;
	sub_82186190(ctx, base);
loc_82450590:
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824505A8"))) PPC_WEAK_FUNC(sub_824505A8);
PPC_FUNC_IMPL(__imp__sub_824505A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x824505B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// li r28,15
	ctx.r28.s64 = 15;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stb r30,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r30.u8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82161d10
	ctx.lr = 0x824505F8;
	sub_82161D10(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824502c8
	ctx.lr = 0x82450608;
	sub_824502C8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82450620
	if (ctx.cr6.lt) goto loc_82450620;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82450620;
	sub_82186190(ctx, base);
loc_82450620:
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82450638"))) PPC_WEAK_FUNC(sub_82450638);
PPC_FUNC_IMPL(__imp__sub_82450638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b4
	ctx.lr = 0x82450640;
	__savegprlr_23(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,15
	ctx.r28.s64 = 15;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82450674:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82450674
	if (!ctx.cr6.eq) goto loc_82450674;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x8245069C;
	sub_82161E08(ctx, base);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82447da0
	ctx.lr = 0x824506B0;
	sub_82447DA0(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x824506c4
	if (ctx.cr6.lt) goto loc_824506C4;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82186190
	ctx.lr = 0x824506C4;
	sub_82186190(ctx, base);
loc_824506C4:
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
	// beq cr6,0x824506e8
	if (ctx.cr6.eq) goto loc_824506E8;
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x824506ec
	if (ctx.cr6.eq) goto loc_824506EC;
loc_824506E8:
	// twi 31,r0,22
loc_824506EC:
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824507d0
	if (ctx.cr6.eq) goto loc_824507D0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823e9dc8
	ctx.lr = 0x8245070C;
	sub_823E9DC8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x821620e8
	ctx.lr = 0x82450718;
	sub_821620E8(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stb r31,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r31.u8);
	// bl 0x82161d10
	ctx.lr = 0x82450738;
	sub_82161D10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x8244eb38
	ctx.lr = 0x82450744;
	sub_8244EB38(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82450360
	ctx.lr = 0x82450754;
	sub_82450360(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x823ea948
	ctx.lr = 0x82450768;
	sub_823EA948(ctx, base);
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82186190
	ctx.lr = 0x82450770;
	sub_82186190(ctx, base);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82450788
	if (ctx.cr6.lt) goto loc_82450788;
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x82186190
	ctx.lr = 0x82450788;
	sub_82186190(ctx, base);
loc_82450788:
	// lwz r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r31,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r31.u8);
	// blt cr6,0x824507a8
	if (ctx.cr6.lt) goto loc_824507A8;
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x82186190
	ctx.lr = 0x824507A8;
	sub_82186190(ctx, base);
loc_824507A8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r28,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r28.u32);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// stb r31,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r31.u8);
	// bl 0x823ea948
	ctx.lr = 0x824507BC;
	sub_823EA948(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82186190
	ctx.lr = 0x824507C4;
	sub_82186190(ctx, base);
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
loc_824507D0:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825b4a48
	ctx.lr = 0x824507DC;
	sub_825B4A48(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825b4a48
	ctx.lr = 0x824507E8;
	sub_825B4A48(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82450810
	if (ctx.cr6.eq) goto loc_82450810;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245080C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
loc_82450810:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// bl 0x825b4a48
	ctx.lr = 0x82450824;
	sub_825B4A48(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// bl 0x825b4a48
	ctx.lr = 0x82450830;
	sub_825B4A48(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stw r11,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// bne cr6,0x82450844
	if (!ctx.cr6.eq) goto loc_82450844;
	// twi 31,r0,22
loc_82450844:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82450854
	if (!ctx.cr6.eq) goto loc_82450854;
	// twi 31,r0,22
loc_82450854:
	// addi r30,r26,40
	ctx.r30.s64 = ctx.r26.s64 + 40;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x823ea368
	ctx.lr = 0x82450870;
	sub_823EA368(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823eac80
	ctx.lr = 0x82450880;
	sub_823EAC80(ctx, base);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// bl 0x823e8230
	ctx.lr = 0x82450894;
	sub_823E8230(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824508b4
	if (ctx.cr6.eq) goto loc_824508B4;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824508B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
loc_824508B4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824508e0
	if (ctx.cr6.eq) goto loc_824508E0;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824508DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r3.u32);
loc_824508E0:
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// stw r31,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r31.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8245090c
	if (ctx.cr6.eq) goto loc_8245090C;
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82450908;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r3.u32);
loc_8245090C:
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// stw r31,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r31.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82450920"))) PPC_WEAK_FUNC(sub_82450920);
PPC_FUNC_IMPL(__imp__sub_82450920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82450928;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x82450948;
	sub_821677D0(ctx, base);
	// bl 0x8239b8d8
	ctx.lr = 0x8245094C;
	sub_8239B8D8(ctx, base);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x82450954;
	sub_821677D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823e9cb8
	ctx.lr = 0x82450960;
	sub_823E9CB8(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r11,r11,-29344
	ctx.r11.s64 = ctx.r11.s64 + -29344;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// bl 0x8244c3d0
	ctx.lr = 0x8245098C;
	sub_8244C3D0(ctx, base);
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,-160
	ctx.r10.s64 = ctx.r10.s64 + -160;
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r31,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r31.u8);
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// ld r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// ld r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// bl 0x8244d300
	ctx.lr = 0x824509EC;
	sub_8244D300(ctx, base);
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,-21512(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21512);
	// bl 0x82450638
	ctx.lr = 0x82450A08;
	sub_82450638(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r11.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82450A20"))) PPC_WEAK_FUNC(sub_82450A20);
PPC_FUNC_IMPL(__imp__sub_82450A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,27
	ctx.r4.s64 = 27;
	// addi r5,r11,4272
	ctx.r5.s64 = ctx.r11.s64 + 4272;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,22652(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22652);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82450920
	sub_82450920(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82450A48"))) PPC_WEAK_FUNC(sub_82450A48);
PPC_FUNC_IMPL(__imp__sub_82450A48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82450A50"))) PPC_WEAK_FUNC(sub_82450A50);
PPC_FUNC_IMPL(__imp__sub_82450A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82450A58;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stfs f1,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f2,108(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r7,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r7.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f0,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// bl 0x823e9f80
	ctx.lr = 0x82450AAC;
	sub_823E9F80(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,232(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8244c1b8
	ctx.lr = 0x82450AD8;
	sub_8244C1B8(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82450638
	ctx.lr = 0x82450AF0;
	sub_82450638(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82450AF8"))) PPC_WEAK_FUNC(sub_82450AF8);
PPC_FUNC_IMPL(__imp__sub_82450AF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82450B00;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f1,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f2,108(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f0,3544(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x823e9f80
	ctx.lr = 0x82450B50;
	sub_823E9F80(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// bl 0x8244b978
	ctx.lr = 0x82450B68;
	sub_8244B978(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8244fd30
	ctx.lr = 0x82450B78;
	sub_8244FD30(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82450638
	ctx.lr = 0x82450B90;
	sub_82450638(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82450ba0
	if (ctx.cr6.eq) goto loc_82450BA0;
	// bl 0x821601b8
	ctx.lr = 0x82450BA0;
	sub_821601B8(ctx, base);
loc_82450BA0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82450bb0
	if (ctx.cr6.eq) goto loc_82450BB0;
	// bl 0x82581e38
	ctx.lr = 0x82450BB0;
	sub_82581E38(ctx, base);
loc_82450BB0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82450BB8"))) PPC_WEAK_FUNC(sub_82450BB8);
PPC_FUNC_IMPL(__imp__sub_82450BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82450BC0;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stfs f1,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// stfs f2,108(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// std r8,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r8.u64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f0,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x823e9f80
	ctx.lr = 0x82450C18;
	sub_823E9F80(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,240(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8244c518
	ctx.lr = 0x82450C48;
	sub_8244C518(ctx, base);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82450638
	ctx.lr = 0x82450C60;
	sub_82450638(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82450C68"))) PPC_WEAK_FUNC(sub_82450C68);
PPC_FUNC_IMPL(__imp__sub_82450C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82450C70;
	__savegprlr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stfs f1,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f2,108(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f0,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// bl 0x823e9f80
	ctx.lr = 0x82450CC0;
	sub_823E9F80(ctx, base);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r26,15
	ctx.r26.s64 = 15;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r31,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r26,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r26.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// bl 0x82161d10
	ctx.lr = 0x82450CF8;
	sub_82161D10(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x824505a8
	ctx.lr = 0x82450D08;
	sub_824505A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82450638
	ctx.lr = 0x82450D20;
	sub_82450638(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82450d38
	if (ctx.cr6.lt) goto loc_82450D38;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82450D38;
	sub_82186190(ctx, base);
loc_82450D38:
	// stw r26,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r26.u32);
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// stb r31,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r31.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82450D50"))) PPC_WEAK_FUNC(sub_82450D50);
PPC_FUNC_IMPL(__imp__sub_82450D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82450D58;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stfs f1,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f2,108(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f0,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// bl 0x823e9f80
	ctx.lr = 0x82450DA8;
	sub_823E9F80(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// bl 0x8244c5b0
	ctx.lr = 0x82450DDC;
	sub_8244C5B0(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82450638
	ctx.lr = 0x82450DF4;
	sub_82450638(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82450E00"))) PPC_WEAK_FUNC(sub_82450E00);
PPC_FUNC_IMPL(__imp__sub_82450E00) {
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
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82450eb0
	if (!ctx.cr6.gt) goto loc_82450EB0;
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r10,184(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 184);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r11,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r11.u8);
	// bne cr6,0x82450e84
	if (!ctx.cr6.eq) goto loc_82450E84;
	// bl 0x82449c78
	ctx.lr = 0x82450E3C;
	sub_82449C78(ctx, base);
	// bl 0x8243cb30
	ctx.lr = 0x82450E40;
	sub_8243CB30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82450e84
	if (ctx.cr6.eq) goto loc_82450E84;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82390710
	ctx.lr = 0x82450E54;
	sub_82390710(ctx, base);
	// bl 0x825d4220
	ctx.lr = 0x82450E58;
	sub_825D4220(ctx, base);
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// lfs f0,104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82450e84
	if (!ctx.cr6.lt) goto loc_82450E84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8244e070
	ctx.lr = 0x82450E70;
	sub_8244E070(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82450E84:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824497d8
	ctx.lr = 0x82450E90;
	sub_824497D8(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243ff60
	ctx.lr = 0x82450E9C;
	sub_8243FF60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82450EB0:
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82450f14
	if (ctx.cr6.eq) goto loc_82450F14;
	// lfs f12,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82450f14
	if (!ctx.cr6.gt) goto loc_82450F14;
	// li r11,0
	ctx.r11.s64 = 0;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stb r11,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r11.u8);
	// bl 0x82390710
	ctx.lr = 0x82450EE0;
	sub_82390710(ctx, base);
	// bl 0x825d4220
	ctx.lr = 0x82450EE4;
	sub_825D4220(ctx, base);
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// addi r5,r11,1400
	ctx.r5.s64 = ctx.r11.s64 + 1400;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,22656(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22656);
	ctx.f1.f64 = double(temp.f32);
	// blt cr6,0x82450f10
	if (ctx.cr6.lt) goto loc_82450F10;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82450F10:
	// bl 0x82450920
	ctx.lr = 0x82450F14;
	sub_82450920(ctx, base);
loc_82450F14:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82450F28"))) PPC_WEAK_FUNC(sub_82450F28);
PPC_FUNC_IMPL(__imp__sub_82450F28) {
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
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82450fe0
	if (!ctx.cr6.gt) goto loc_82450FE0;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// stw r4,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r4.u32);
	// blt cr6,0x82450f6c
	if (ctx.cr6.lt) goto loc_82450F6C;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x82450fc8
	goto loc_82450FC8;
loc_82450F6C:
	// lbz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82450fbc
	if (ctx.cr6.eq) goto loc_82450FBC;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82390710
	ctx.lr = 0x82450F80;
	sub_82390710(ctx, base);
	// bl 0x825d4220
	ctx.lr = 0x82450F84;
	sub_825D4220(ctx, base);
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// lfs f0,200(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82450f9c
	if (ctx.cr6.lt) goto loc_82450F9C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82450F9C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,6
	ctx.r4.s64 = 6;
	// stb r10,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r10.u8);
	// lfs f1,22652(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22652);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,4272
	ctx.r5.s64 = ctx.r11.s64 + 4272;
	// b 0x82450fd8
	goto loc_82450FD8;
loc_82450FBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824497d8
	ctx.lr = 0x82450FC4;
	sub_824497D8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
loc_82450FC8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,4272
	ctx.r5.s64 = ctx.r11.s64 + 4272;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,22652(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22652);
	ctx.f1.f64 = double(temp.f32);
loc_82450FD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450920
	ctx.lr = 0x82450FE0;
	sub_82450920(ctx, base);
loc_82450FE0:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82450FF8"))) PPC_WEAK_FUNC(sub_82450FF8);
PPC_FUNC_IMPL(__imp__sub_82450FF8) {
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
	// li r4,13
	ctx.r4.s64 = 13;
	// addi r5,r11,4272
	ctx.r5.s64 = ctx.r11.s64 + 4272;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f1,22652(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22652);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82450920
	ctx.lr = 0x82451024;
	sub_82450920(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r11.u8);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82451040"))) PPC_WEAK_FUNC(sub_82451040);
PPC_FUNC_IMPL(__imp__sub_82451040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82451048;
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
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r31,r5,4
	ctx.r31.s64 = ctx.r5.s64 + 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x8244b978
	ctx.lr = 0x82451080;
	sub_8244B978(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82450af8
	ctx.lr = 0x824510AC;
	sub_82450AF8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824510bc
	if (ctx.cr6.eq) goto loc_824510BC;
	// bl 0x821601b8
	ctx.lr = 0x824510BC;
	sub_821601B8(ctx, base);
loc_824510BC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824510cc
	if (ctx.cr6.eq) goto loc_824510CC;
	// bl 0x82581e38
	ctx.lr = 0x824510CC;
	sub_82581E38(ctx, base);
loc_824510CC:
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

__attribute__((alias("__imp__sub_824510E0"))) PPC_WEAK_FUNC(sub_824510E0);
PPC_FUNC_IMPL(__imp__sub_824510E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x824510E8;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r26,15
	ctx.r26.s64 = 15;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stb r30,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r30.u8);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82161d10
	ctx.lr = 0x82451148;
	sub_82161D10(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82450c68
	ctx.lr = 0x82451170;
	sub_82450C68(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82451188
	if (ctx.cr6.lt) goto loc_82451188;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82451188;
	sub_82186190(ctx, base);
loc_82451188:
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824511A8"))) PPC_WEAK_FUNC(sub_824511A8);
PPC_FUNC_IMPL(__imp__sub_824511A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x824511B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82451234
	if (ctx.cr6.eq) goto loc_82451234;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x824511e8
	if (!ctx.cr6.gt) goto loc_824511E8;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r27,1
	ctx.r27.s64 = 1;
loc_824511E8:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824513fc
	if (ctx.cr6.eq) goto loc_824513FC;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// blt cr6,0x824513c8
	if (ctx.cr6.lt) goto loc_824513C8;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82451398
	if (ctx.cr6.eq) goto loc_82451398;
	// lbz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82451398
	if (ctx.cr6.eq) goto loc_82451398;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450ff8
	ctx.lr = 0x8245122C;
	sub_82450FF8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_82451234:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x824512b4
	if (ctx.cr6.gt) goto loc_824512B4;
	// lbz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824512b4
	if (ctx.cr6.eq) goto loc_824512B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82449c78
	ctx.lr = 0x8245125C;
	sub_82449C78(ctx, base);
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f1,120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8243e158
	ctx.lr = 0x82451270;
	sub_8243E158(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8245135c
	if (ctx.cr6.eq) goto loc_8245135C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82449c78
	ctx.lr = 0x82451284;
	sub_82449C78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8243dc48
	ctx.lr = 0x82451290;
	sub_8243DC48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825d21e0
	ctx.lr = 0x8245129C;
	sub_825D21E0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8245135c
	if (!ctx.cr6.lt) goto loc_8245135C;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x82451358
	goto loc_82451358;
loc_824512B4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x824512C0;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x824512d8
	if (ctx.cr6.eq) goto loc_824512D8;
	// bl 0x821601b8
	ctx.lr = 0x824512D8;
	sub_821601B8(ctx, base);
loc_824512D8:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f1,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8243e158
	ctx.lr = 0x824512EC;
	sub_8243E158(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8245132c
	if (ctx.cr6.eq) goto loc_8245132C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82449c78
	ctx.lr = 0x82451300;
	sub_82449C78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8243dc48
	ctx.lr = 0x8245130C;
	sub_8243DC48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825d21e0
	ctx.lr = 0x82451318;
	sub_825D21E0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8245135c
	if (!ctx.cr6.lt) goto loc_8245135C;
	// b 0x82451358
	goto loc_82451358;
loc_8245132C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8245135c
	if (!ctx.cr6.gt) goto loc_8245135C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82449c78
	ctx.lr = 0x82451348;
	sub_82449C78(ctx, base);
	// bl 0x8243d4b0
	ctx.lr = 0x8245134C;
	sub_8243D4B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8245135c
	if (ctx.cr6.eq) goto loc_8245135C;
loc_82451358:
	// li r29,1
	ctx.r29.s64 = 1;
loc_8245135C:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824511e8
	if (ctx.cr6.eq) goto loc_824511E8;
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x824511e8
	if (!ctx.cr6.lt) goto loc_824511E8;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// bl 0x82449c78
	ctx.lr = 0x8245138C;
	sub_82449C78(ctx, base);
	// bl 0x82440018
	ctx.lr = 0x82451390;
	sub_82440018(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_82451398:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// li r4,11
	ctx.r4.s64 = 11;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x824513f8
	if (ctx.cr6.eq) goto loc_824513F8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,4272
	ctx.r5.s64 = ctx.r11.s64 + 4272;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,22652(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22652);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82450920
	ctx.lr = 0x824513C0;
	sub_82450920(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_824513C8:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// li r4,12
	ctx.r4.s64 = 12;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x824513f8
	if (ctx.cr6.eq) goto loc_824513F8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,4272
	ctx.r5.s64 = ctx.r11.s64 + 4272;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,22652(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22652);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82450920
	ctx.lr = 0x824513F0;
	sub_82450920(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_824513F8:
	// bl 0x8243ff60
	ctx.lr = 0x824513FC;
	sub_8243FF60(ctx, base);
loc_824513FC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82451408"))) PPC_WEAK_FUNC(sub_82451408);
PPC_FUNC_IMPL(__imp__sub_82451408) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x8245142C;
	sub_821677D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6448);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239c420
	ctx.lr = 0x82451438;
	sub_8239C420(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x82451440;
	sub_821677D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,4188
	ctx.r4.s64 = ctx.r11.s64 + 4188;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8239a598
	ctx.lr = 0x8245145C;
	sub_8239A598(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x82451468;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x82451480
	if (ctx.cr6.eq) goto loc_82451480;
	// bl 0x821601b8
	ctx.lr = 0x82451480;
	sub_821601B8(ctx, base);
loc_82451480:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8243a8a8
	ctx.lr = 0x8245148C;
	sub_8243A8A8(ctx, base);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r6,r11,-4576
	ctx.r6.s64 = ctx.r11.s64 + -4576;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f0,8252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8252);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,23008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23008);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x8244be08
	ctx.lr = 0x824514CC;
	sub_8244BE08(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// beq cr6,0x824514e8
	if (ctx.cr6.eq) goto loc_824514E8;
	// bl 0x82160140
	ctx.lr = 0x824514E8;
	sub_82160140(ctx, base);
loc_824514E8:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r11,r11,30
	ctx.r11.s64 = ctx.r11.s64 + 30;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// beq cr6,0x82451508
	if (ctx.cr6.eq) goto loc_82451508;
	// bl 0x82659610
	ctx.lr = 0x82451508;
	sub_82659610(ctx, base);
loc_82451508:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-26512
	ctx.r4.s64 = ctx.r11.s64 + -26512;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8244c0a8
	ctx.lr = 0x82451524;
	sub_8244C0A8(ctx, base);
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r4,-21512(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21512);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,23004(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23004);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82451040
	ctx.lr = 0x82451548;
	sub_82451040(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82451558
	if (ctx.cr6.eq) goto loc_82451558;
	// bl 0x821601b8
	ctx.lr = 0x82451558;
	sub_821601B8(ctx, base);
loc_82451558:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_82451578"))) PPC_WEAK_FUNC(sub_82451578);
PPC_FUNC_IMPL(__imp__sub_82451578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82451580;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826dfb88
	ctx.lr = 0x82451588;
	__savefpr_28(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x82390710
	ctx.lr = 0x824515A4;
	sub_82390710(ctx, base);
	// bl 0x825d4220
	ctx.lr = 0x824515A8;
	sub_825D4220(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-29804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,5024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5024);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x826e0590
	ctx.lr = 0x824515C8;
	sub_826E0590(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x826e0668
	ctx.lr = 0x824515D4;
	sub_826E0668(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,1196(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1196);
	// frsp f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f1,92(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825d2350
	ctx.lr = 0x82451610;
	sub_825D2350(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8245161C;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x82451634
	if (ctx.cr6.eq) goto loc_82451634;
	// bl 0x821601b8
	ctx.lr = 0x82451634;
	sub_821601B8(ctx, base);
loc_82451634:
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82440d38
	ctx.lr = 0x8245164C;
	sub_82440D38(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x82451658;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x82451670
	if (ctx.cr6.eq) goto loc_82451670;
	// bl 0x821601b8
	ctx.lr = 0x82451670;
	sub_821601B8(ctx, base);
loc_82451670:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f0,27856(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27856);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r10,r10,-7192
	ctx.r10.s64 = ctx.r10.s64 + -7192;
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x8244c448
	ctx.lr = 0x824516C4;
	sub_8244C448(ctx, base);
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r31,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,-11828
	ctx.r4.s64 = ctx.r11.s64 + -11828;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r27.u32);
	// bl 0x82161e08
	ctx.lr = 0x824516E8;
	sub_82161E08(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-17760
	ctx.r4.s64 = ctx.r11.s64 + -17760;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8244d558
	ctx.lr = 0x82451704;
	sub_8244D558(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8244dab0
	ctx.lr = 0x82451714;
	sub_8244DAB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82450508
	ctx.lr = 0x82451724;
	sub_82450508(ctx, base);
	// lis r29,-32075
	ctx.r29.s64 = -2102067200;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r4,-21512(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -21512);
	// bl 0x82450638
	ctx.lr = 0x82451740;
	sub_82450638(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x8245174C;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x82451764
	if (ctx.cr6.eq) goto loc_82451764;
	// bl 0x821601b8
	ctx.lr = 0x82451764;
	sub_821601B8(ctx, base);
loc_82451764:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823d6478
	ctx.lr = 0x8245176C;
	sub_823D6478(ctx, base);
	// fdivs f0,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 / ctx.f1.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r27.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r4,r11,-2180
	ctx.r4.s64 = ctx.r11.s64 + -2180;
	// stb r31,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r31.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fneg f30,f0
	ctx.f30.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x82161e08
	ctx.lr = 0x82451794;
	sub_82161E08(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-17088
	ctx.r4.s64 = ctx.r11.s64 + -17088;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8244d670
	ctx.lr = 0x824517AC;
	sub_8244D670(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r4,-21512(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -21512);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x824510e0
	ctx.lr = 0x824517C8;
	sub_824510E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826dfbd4
	ctx.lr = 0x824517D8;
	__restfpr_28(ctx, base);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824517E0"))) PPC_WEAK_FUNC(sub_824517E0);
PPC_FUNC_IMPL(__imp__sub_824517E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x824517E8;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x82451804;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8245181c
	if (ctx.cr6.eq) goto loc_8245181C;
	// bl 0x821601b8
	ctx.lr = 0x8245181C;
	sub_821601B8(ctx, base);
loc_8245181C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x824405d8
	ctx.lr = 0x82451828;
	sub_824405D8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x82451834;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8245184c
	if (ctx.cr6.eq) goto loc_8245184C;
	// bl 0x821601b8
	ctx.lr = 0x8245184C;
	sub_821601B8(ctx, base);
loc_8245184C:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f0,6368(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6368);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r10,r10,-7192
	ctx.r10.s64 = ctx.r10.s64 + -7192;
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x8244c448
	ctx.lr = 0x824518A0;
	sub_8244C448(ctx, base);
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r31,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r31.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r11,4244
	ctx.r4.s64 = ctx.r11.s64 + 4244;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r27.u32);
	// bl 0x82161e08
	ctx.lr = 0x824518C4;
	sub_82161E08(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-17760
	ctx.r4.s64 = ctx.r11.s64 + -17760;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8244d558
	ctx.lr = 0x824518E0;
	sub_8244D558(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8244dab0
	ctx.lr = 0x824518F0;
	sub_8244DAB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82450508
	ctx.lr = 0x82451900;
	sub_82450508(ctx, base);
	// lis r29,-32075
	ctx.r29.s64 = -2102067200;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r4,-21512(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -21512);
	// bl 0x82450638
	ctx.lr = 0x8245191C;
	sub_82450638(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x82451928;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x82451940
	if (ctx.cr6.eq) goto loc_82451940;
	// bl 0x821601b8
	ctx.lr = 0x82451940;
	sub_821601B8(ctx, base);
loc_82451940:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823d6478
	ctx.lr = 0x82451948;
	sub_823D6478(ctx, base);
	// fdivs f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f1.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r27.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r4,r11,-2180
	ctx.r4.s64 = ctx.r11.s64 + -2180;
	// stb r31,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r31.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fneg f31,f0
	ctx.f31.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x82161e08
	ctx.lr = 0x82451970;
	sub_82161E08(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-17088
	ctx.r4.s64 = ctx.r11.s64 + -17088;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8244d670
	ctx.lr = 0x82451988;
	sub_8244D670(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,-21512(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -21512);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f2,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x824510e0
	ctx.lr = 0x824519A8;
	sub_824510E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824519B8"))) PPC_WEAK_FUNC(sub_824519B8);
PPC_FUNC_IMPL(__imp__sub_824519B8) {
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
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x824519DC;
	sub_821677D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6448);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239c420
	ctx.lr = 0x824519E8;
	sub_8239C420(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x824519F0;
	sub_821677D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,4232
	ctx.r4.s64 = ctx.r11.s64 + 4232;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8239a598
	ctx.lr = 0x82451A0C;
	sub_8239A598(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x82451A18;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x82451a30
	if (ctx.cr6.eq) goto loc_82451A30;
	// bl 0x821601b8
	ctx.lr = 0x82451A30;
	sub_821601B8(ctx, base);
loc_82451A30:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82440018
	ctx.lr = 0x82451A38;
	sub_82440018(ctx, base);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r10,r10,-18824
	ctx.r10.s64 = ctx.r10.s64 + -18824;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lis r10,-32075
	ctx.r10.s64 = -2102067200;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lfs f1,23012(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23012);
	ctx.f1.f64 = double(temp.f32);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,-21512(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21512);
	// bl 0x82450d50
	ctx.lr = 0x82451A7C;
	sub_82450D50(ctx, base);
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,172(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x82449418
	ctx.lr = 0x82451A98;
	sub_82449418(ctx, base);
	// stfs f1,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82451AB8"))) PPC_WEAK_FUNC(sub_82451AB8);
PPC_FUNC_IMPL(__imp__sub_82451AB8) {
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
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x82451ADC;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x82451af4
	if (ctx.cr6.eq) goto loc_82451AF4;
	// bl 0x821601b8
	ctx.lr = 0x82451AF4;
	sub_821601B8(ctx, base);
loc_82451AF4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82440418
	ctx.lr = 0x82451AFC;
	sub_82440418(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8244a3b8
	ctx.lr = 0x82451B04;
	sub_8244A3B8(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82451b20
	if (ctx.cr6.eq) goto loc_82451B20;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bl 0x8244ad58
	ctx.lr = 0x82451B20;
	sub_8244AD58(ctx, base);
loc_82451B20:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82390710
	ctx.lr = 0x82451B28;
	sub_82390710(ctx, base);
	// bl 0x825d4220
	ctx.lr = 0x82451B2C;
	sub_825D4220(ctx, base);
	// lwz r10,1196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// lfs f0,308(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82451b80
	if (!ctx.cr6.lt) goto loc_82451B80;
	// lfs f1,312(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 312);
	ctx.f1.f64 = double(temp.f32);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r10,r10,-1472
	ctx.r10.s64 = ctx.r10.s64 + -1472;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lis r10,-32075
	ctx.r10.s64 = -2102067200;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lfs f2,3544(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3544);
	ctx.f2.f64 = double(temp.f32);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,-21512(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21512);
	// bl 0x82450d50
	ctx.lr = 0x82451B80;
	sub_82450D50(ctx, base);
loc_82451B80:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82451bac
	if (ctx.cr6.eq) goto loc_82451BAC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,22972
	ctx.r4.s64 = ctx.r11.s64 + 22972;
	// b 0x82451bb4
	goto loc_82451BB4;
loc_82451BAC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,22952
	ctx.r4.s64 = ctx.r11.s64 + 22952;
loc_82451BB4:
	// bl 0x8244d028
	ctx.lr = 0x82451BB8;
	sub_8244D028(ctx, base);
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

__attribute__((alias("__imp__sub_82451BD0"))) PPC_WEAK_FUNC(sub_82451BD0);
PPC_FUNC_IMPL(__imp__sub_82451BD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82451408
	sub_82451408(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82451BD8"))) PPC_WEAK_FUNC(sub_82451BD8);
PPC_FUNC_IMPL(__imp__sub_82451BD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82451BE0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x82451BF4;
	sub_821677D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6448);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239c420
	ctx.lr = 0x82451C00;
	sub_8239C420(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x82451C08;
	sub_821677D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,4256
	ctx.r4.s64 = ctx.r11.s64 + 4256;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8239a598
	ctx.lr = 0x82451C24;
	sub_8239A598(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82393060
	ctx.lr = 0x82451C30;
	sub_82393060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x82451c48
	if (ctx.cr6.eq) goto loc_82451C48;
	// bl 0x821601b8
	ctx.lr = 0x82451C48;
	sub_821601B8(ctx, base);
loc_82451C48:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8243d550
	ctx.lr = 0x82451C54;
	sub_8243D550(ctx, base);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lwz r8,1196(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r10,6112
	ctx.r10.s64 = ctx.r10.s64 + 6112;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r29,-32075
	ctx.r29.s64 = -2102067200;
	// lfs f0,124(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lfs f1,26540(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 26540);
	ctx.f1.f64 = double(temp.f32);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lwz r4,-21512(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -21512);
	// lbz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// ld r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x82450a50
	ctx.lr = 0x82451CC4;
	sub_82450A50(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// addi r11,r11,-29344
	ctx.r11.s64 = ctx.r11.s64 + -29344;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// ld r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x8244c3d0
	ctx.lr = 0x82451CEC;
	sub_8244C3D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r30,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r30.u8);
	// addi r4,r11,23016
	ctx.r4.s64 = ctx.r11.s64 + 23016;
	// li r11,15
	ctx.r11.s64 = 15;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// bl 0x82161e08
	ctx.lr = 0x82451D10;
	sub_82161E08(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-17760
	ctx.r4.s64 = ctx.r11.s64 + -17760;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8244d558
	ctx.lr = 0x82451D2C;
	sub_8244D558(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8244dab0
	ctx.lr = 0x82451D3C;
	sub_8244DAB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82450508
	ctx.lr = 0x82451D4C;
	sub_82450508(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lwz r4,-21512(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -21512);
	// bl 0x82450638
	ctx.lr = 0x82451D64;
	sub_82450638(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82451D70"))) PPC_WEAK_FUNC(sub_82451D70);
PPC_FUNC_IMPL(__imp__sub_82451D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82451D78;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x82451D8C;
	sub_821677D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6448);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239c420
	ctx.lr = 0x82451D98;
	sub_8239C420(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821677d0
	ctx.lr = 0x82451DA0;
	sub_821677D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,3676
	ctx.r4.s64 = ctx.r11.s64 + 3676;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8239a598
	ctx.lr = 0x82451DBC;
	sub_8239A598(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-29344
	ctx.r11.s64 = ctx.r11.s64 + -29344;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// bl 0x8244c3d0
	ctx.lr = 0x82451DE8;
	sub_8244C3D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stb r30,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r30.u8);
	// addi r4,r11,808
	ctx.r4.s64 = ctx.r11.s64 + 808;
	// li r11,15
	ctx.r11.s64 = 15;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// bl 0x82161e08
	ctx.lr = 0x82451E0C;
	sub_82161E08(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-17760
	ctx.r4.s64 = ctx.r11.s64 + -17760;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8244d558
	ctx.lr = 0x82451E28;
	sub_8244D558(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8244dab0
	ctx.lr = 0x82451E38;
	sub_8244DAB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82450508
	ctx.lr = 0x82451E48;
	sub_82450508(ctx, base);
	// lis r29,-32075
	ctx.r29.s64 = -2102067200;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lwz r4,-21512(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -21512);
	// bl 0x82450638
	ctx.lr = 0x82451E64;
	sub_82450638(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82392bb8
	ctx.lr = 0x82451E6C;
	sub_82392BB8(ctx, base);
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// lwz r9,1196(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r8,r8,5496
	ctx.r8.s64 = ctx.r8.s64 + 5496;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// lfs f0,84(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// lfs f0,88(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lfs f1,23736(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23736);
	ctx.f1.f64 = double(temp.f32);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// rldicr r8,r9,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,152(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// lwz r4,-21512(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -21512);
	// lbz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// bl 0x82450bb8
	ctx.lr = 0x82451F04;
	sub_82450BB8(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82451F10"))) PPC_WEAK_FUNC(sub_82451F10);
PPC_FUNC_IMPL(__imp__sub_82451F10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b4
	ctx.lr = 0x82451F18;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4704(r1)
	ea = -4704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8243ed10
	ctx.lr = 0x82451F30;
	sub_8243ED10(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r23,r31,36
	ctx.r23.s64 = ctx.r31.s64 + 36;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r3,24
	ctx.r3.s64 = 24;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// stb r27,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r27.u8);
	// stb r30,58(r31)
	PPC_STORE_U8(ctx.r31.u32 + 58, ctx.r30.u8);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stb r30,59(r31)
	PPC_STORE_U8(ctx.r31.u32 + 59, ctx.r30.u8);
	// stw r29,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r29.u32);
	// bl 0x82186158
	ctx.lr = 0x82451F78;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82451f8c
	if (ctx.cr6.eq) goto loc_82451F8C;
	// bl 0x823eebf0
	ctx.lr = 0x82451F84;
	sub_823EEBF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82451f90
	goto loc_82451F90;
loc_82451F8C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82451F90:
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// addi r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 + 60;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r30.u8);
	// lbz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 124);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// bl 0x823eecb0
	ctx.lr = 0x82451FAC;
	sub_823EECB0(ctx, base);
	// addi r24,r31,116
	ctx.r24.s64 = ctx.r31.s64 + 116;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// addi r26,r31,120
	ctx.r26.s64 = ctx.r31.s64 + 120;
	// stw r31,2156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2156, ctx.r31.u32);
	// addi r25,r31,128
	ctx.r25.s64 = ctx.r31.s64 + 128;
	// stw r31,3232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3232, ctx.r31.u32);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,2572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2572, ctx.r31.u32);
	// addi r3,r1,744
	ctx.r3.s64 = ctx.r1.s64 + 744;
	// stw r30,744(r1)
	PPC_STORE_U32(ctx.r1.u32 + 744, ctx.r30.u32);
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
	// addi r11,r11,-24488
	ctx.r11.s64 = ctx.r11.s64 + -24488;
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// stw r30,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r30.u32);
	// stw r30,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r30.u32);
	// stw r30,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r30.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r11,2152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2152, ctx.r11.u32);
	// stb r30,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r30.u8);
	// stw r30,1196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1196, ctx.r30.u32);
	// stw r30,1200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1200, ctx.r30.u32);
	// ld r4,2152(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2152);
	// stw r11,3128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3128, ctx.r11.u32);
	// stw r30,748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 748, ctx.r30.u32);
	// stw r30,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r30.u32);
	// stw r30,1204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1204, ctx.r30.u32);
	// bl 0x8241a978
	ctx.lr = 0x8245202C;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1892(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1892, ctx.r31.u32);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// stw r31,2580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2580, ctx.r31.u32);
	// addi r11,r11,-25400
	ctx.r11.s64 = ctx.r11.s64 + -25400;
	// stw r31,3328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3328, ctx.r31.u32);
	// stw r30,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r30.u32);
	// stw r30,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// stw r30,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// stw r11,1888(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1888, ctx.r11.u32);
	// ld r4,1888(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1888);
	// stw r11,3136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3136, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452060;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1572, ctx.r31.u32);
	// addi r3,r1,1448
	ctx.r3.s64 = ctx.r1.s64 + 1448;
	// stw r31,2588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2588, ctx.r31.u32);
	// addi r11,r11,3584
	ctx.r11.s64 = ctx.r11.s64 + 3584;
	// stw r31,3144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3144, ctx.r31.u32);
	// stw r30,1448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1448, ctx.r30.u32);
	// stw r30,1452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1452, ctx.r30.u32);
	// stw r30,1456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1456, ctx.r30.u32);
	// stw r11,1568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1568, ctx.r11.u32);
	// ld r4,1568(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1568);
	// stw r11,2596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2596, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452094;
	sub_8241A978(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r1,744
	ctx.r8.s64 = ctx.r1.s64 + 744;
	// addi r5,r11,25468
	ctx.r5.s64 = ctx.r11.s64 + 25468;
	// addi r7,r1,232
	ctx.r7.s64 = ctx.r1.s64 + 232;
	// addi r6,r1,1448
	ctx.r6.s64 = ctx.r1.s64 + 1448;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243fc98
	ctx.lr = 0x824520B4;
	sub_8243FC98(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,2140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2140, ctx.r31.u32);
	// addi r11,r11,-19256
	ctx.r11.s64 = ctx.r11.s64 + -19256;
	// stw r11,3240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3240, ctx.r11.u32);
	// stw r11,2136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2136, ctx.r11.u32);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// ld r4,2136(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2136);
	// stw r31,2604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2604, ctx.r31.u32);
	// stw r31,3152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3152, ctx.r31.u32);
	// stw r30,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r30.u32);
	// stw r30,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r30.u32);
	// stw r30,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r30.u32);
	// bl 0x8241a978
	ctx.lr = 0x824520E8;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1588, ctx.r31.u32);
	// addi r3,r1,904
	ctx.r3.s64 = ctx.r1.s64 + 904;
	// stw r31,3296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3296, ctx.r31.u32);
	// addi r11,r11,-24944
	ctx.r11.s64 = ctx.r11.s64 + -24944;
	// stw r31,2620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2620, ctx.r31.u32);
	// stw r30,904(r1)
	PPC_STORE_U32(ctx.r1.u32 + 904, ctx.r30.u32);
	// stw r30,908(r1)
	PPC_STORE_U32(ctx.r1.u32 + 908, ctx.r30.u32);
	// stw r30,912(r1)
	PPC_STORE_U32(ctx.r1.u32 + 912, ctx.r30.u32);
	// stw r11,1584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1584, ctx.r11.u32);
	// ld r4,1584(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1584);
	// stw r11,2612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2612, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x8245211C;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1908(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1908, ctx.r31.u32);
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// stw r31,2628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2628, ctx.r31.u32);
	// addi r11,r11,-8640
	ctx.r11.s64 = ctx.r11.s64 + -8640;
	// stw r31,3248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3248, ctx.r31.u32);
	// stw r30,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r30.u32);
	// stw r30,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r30.u32);
	// stw r30,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r30.u32);
	// stw r11,1904(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1904, ctx.r11.u32);
	// ld r4,1904(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1904);
	// stw r11,3160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3160, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452150;
	sub_8241A978(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r1,264
	ctx.r8.s64 = ctx.r1.s64 + 264;
	// addi r5,r11,-9600
	ctx.r5.s64 = ctx.r11.s64 + -9600;
	// addi r7,r1,904
	ctx.r7.s64 = ctx.r1.s64 + 904;
	// addi r6,r1,296
	ctx.r6.s64 = ctx.r1.s64 + 296;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243fc98
	ctx.lr = 0x82452170;
	sub_8243FC98(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r3,r1,1224
	ctx.r3.s64 = ctx.r1.s64 + 1224;
	// stw r31,1604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1604, ctx.r31.u32);
	// addi r11,r11,-24488
	ctx.r11.s64 = ctx.r11.s64 + -24488;
	// stw r31,3168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3168, ctx.r31.u32);
	// stw r31,2644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2644, ctx.r31.u32);
	// stw r30,1224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1224, ctx.r30.u32);
	// stw r30,1228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1228, ctx.r30.u32);
	// stw r30,1232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1232, ctx.r30.u32);
	// stw r11,1600(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1600, ctx.r11.u32);
	// ld r4,1600(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1600);
	// stw r11,2636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2636, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x824521A4;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,2068(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2068, ctx.r31.u32);
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// stw r31,3008(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3008, ctx.r31.u32);
	// addi r11,r11,-24736
	ctx.r11.s64 = ctx.r11.s64 + -24736;
	// stw r31,3012(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3012, ctx.r31.u32);
	// stw r30,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r30.u32);
	// stw r30,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r30.u32);
	// stw r30,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r30.u32);
	// stw r11,2064(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2064, ctx.r11.u32);
	// ld r4,2064(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2064);
	// stw r11,2652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2652, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x824521D8;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1620, ctx.r31.u32);
	// addi r3,r1,936
	ctx.r3.s64 = ctx.r1.s64 + 936;
	// stw r31,3020(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3020, ctx.r31.u32);
	// addi r11,r11,-8640
	ctx.r11.s64 = ctx.r11.s64 + -8640;
	// stw r31,2668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2668, ctx.r31.u32);
	// stw r30,936(r1)
	PPC_STORE_U32(ctx.r1.u32 + 936, ctx.r30.u32);
	// stw r30,940(r1)
	PPC_STORE_U32(ctx.r1.u32 + 940, ctx.r30.u32);
	// stw r30,944(r1)
	PPC_STORE_U32(ctx.r1.u32 + 944, ctx.r30.u32);
	// stw r11,1616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1616, ctx.r11.u32);
	// ld r4,1616(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1616);
	// stw r11,2660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2660, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x8245220C;
	sub_8241A978(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r1,1224
	ctx.r8.s64 = ctx.r1.s64 + 1224;
	// addi r5,r11,4216
	ctx.r5.s64 = ctx.r11.s64 + 4216;
	// addi r7,r1,328
	ctx.r7.s64 = ctx.r1.s64 + 328;
	// addi r6,r1,936
	ctx.r6.s64 = ctx.r1.s64 + 936;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243fc98
	ctx.lr = 0x8245222C;
	sub_8243FC98(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// stw r31,1924(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1924, ctx.r31.u32);
	// addi r11,r11,-22232
	ctx.r11.s64 = ctx.r11.s64 + -22232;
	// stw r31,2676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2676, ctx.r31.u32);
	// stw r31,3036(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3036, ctx.r31.u32);
	// stw r30,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r30.u32);
	// stw r30,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r30.u32);
	// stw r30,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r30.u32);
	// stw r11,1920(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1920, ctx.r11.u32);
	// ld r4,1920(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1920);
	// stw r11,3028(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3028, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452260;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1636, ctx.r31.u32);
	// addi r3,r1,1384
	ctx.r3.s64 = ctx.r1.s64 + 1384;
	// stw r31,3044(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3044, ctx.r31.u32);
	// addi r11,r11,-8560
	ctx.r11.s64 = ctx.r11.s64 + -8560;
	// stw r31,2692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2692, ctx.r31.u32);
	// stw r30,1384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1384, ctx.r30.u32);
	// stw r30,1388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1388, ctx.r30.u32);
	// stw r30,1392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1392, ctx.r30.u32);
	// stw r11,1632(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1632, ctx.r11.u32);
	// ld r4,1632(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1632);
	// stw r11,2684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2684, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452294;
	sub_8241A978(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r1,360
	ctx.r7.s64 = ctx.r1.s64 + 360;
	// addi r5,r11,25452
	ctx.r5.s64 = ctx.r11.s64 + 25452;
	// addi r6,r1,1384
	ctx.r6.s64 = ctx.r1.s64 + 1384;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243fb00
	ctx.lr = 0x824522B0;
	sub_8243FB00(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r3,r1,392
	ctx.r3.s64 = ctx.r1.s64 + 392;
	// stw r31,2204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2204, ctx.r31.u32);
	// addi r11,r11,-14064
	ctx.r11.s64 = ctx.r11.s64 + -14064;
	// stw r31,2700(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2700, ctx.r31.u32);
	// stw r31,3060(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3060, ctx.r31.u32);
	// stw r30,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r30.u32);
	// stw r30,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r30.u32);
	// stw r30,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r30.u32);
	// stw r11,2200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2200, ctx.r11.u32);
	// ld r4,2200(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2200);
	// stw r11,3052(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3052, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x824522E4;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1652, ctx.r31.u32);
	// addi r3,r1,968
	ctx.r3.s64 = ctx.r1.s64 + 968;
	// stw r31,3068(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3068, ctx.r31.u32);
	// addi r11,r11,3880
	ctx.r11.s64 = ctx.r11.s64 + 3880;
	// stw r31,2716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2716, ctx.r31.u32);
	// stw r30,968(r1)
	PPC_STORE_U32(ctx.r1.u32 + 968, ctx.r30.u32);
	// stw r30,972(r1)
	PPC_STORE_U32(ctx.r1.u32 + 972, ctx.r30.u32);
	// stw r30,976(r1)
	PPC_STORE_U32(ctx.r1.u32 + 976, ctx.r30.u32);
	// stw r11,1648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1648, ctx.r11.u32);
	// ld r4,1648(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1648);
	// stw r11,2708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2708, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452318;
	sub_8241A978(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r1,392
	ctx.r7.s64 = ctx.r1.s64 + 392;
	// addi r6,r1,968
	ctx.r6.s64 = ctx.r1.s64 + 968;
	// addi r5,r11,25440
	ctx.r5.s64 = ctx.r11.s64 + 25440;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243fb00
	ctx.lr = 0x82452334;
	sub_8243FB00(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1940(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1940, ctx.r31.u32);
	// addi r3,r1,424
	ctx.r3.s64 = ctx.r1.s64 + 424;
	// addi r11,r11,-24400
	ctx.r11.s64 = ctx.r11.s64 + -24400;
	// stw r11,1936(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1936, ctx.r11.u32);
	// ld r4,1936(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1936);
	// stw r11,3076(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3076, ctx.r11.u32);
	// stw r31,2724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2724, ctx.r31.u32);
	// stw r31,3084(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3084, ctx.r31.u32);
	// stw r30,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r30.u32);
	// stw r30,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r30.u32);
	// stw r30,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r30.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452368;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1668, ctx.r31.u32);
	// addi r3,r1,1256
	ctx.r3.s64 = ctx.r1.s64 + 1256;
	// stw r31,3092(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3092, ctx.r31.u32);
	// addi r11,r11,-440
	ctx.r11.s64 = ctx.r11.s64 + -440;
	// stw r31,2740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2740, ctx.r31.u32);
	// stw r30,1256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1256, ctx.r30.u32);
	// stw r30,1260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1260, ctx.r30.u32);
	// stw r30,1264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1264, ctx.r30.u32);
	// stw r11,1664(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1664, ctx.r11.u32);
	// ld r4,1664(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1664);
	// stw r11,2732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2732, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x8245239C;
	sub_8241A978(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r1,424
	ctx.r7.s64 = ctx.r1.s64 + 424;
	// addi r5,r11,25424
	ctx.r5.s64 = ctx.r11.s64 + 25424;
	// addi r6,r1,1256
	ctx.r6.s64 = ctx.r1.s64 + 1256;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243fb00
	ctx.lr = 0x824523B8;
	sub_8243FB00(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r3,r1,456
	ctx.r3.s64 = ctx.r1.s64 + 456;
	// stw r31,2084(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2084, ctx.r31.u32);
	// addi r11,r11,-23088
	ctx.r11.s64 = ctx.r11.s64 + -23088;
	// stw r31,2748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2748, ctx.r31.u32);
	// stw r31,3108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3108, ctx.r31.u32);
	// stw r30,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r30.u32);
	// stw r30,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r30.u32);
	// stw r30,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r30.u32);
	// stw r11,2080(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2080, ctx.r11.u32);
	// ld r4,2080(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2080);
	// stw r11,3100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3100, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x824523EC;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1684, ctx.r31.u32);
	// addi r3,r1,1000
	ctx.r3.s64 = ctx.r1.s64 + 1000;
	// stw r31,3116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3116, ctx.r31.u32);
	// addi r11,r11,-24232
	ctx.r11.s64 = ctx.r11.s64 + -24232;
	// stw r31,2764(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2764, ctx.r31.u32);
	// stw r30,1000(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1000, ctx.r30.u32);
	// stw r30,1004(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1004, ctx.r30.u32);
	// stw r30,1008(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1008, ctx.r30.u32);
	// stw r11,1680(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1680, ctx.r11.u32);
	// ld r4,1680(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1680);
	// stw r11,2756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2756, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452420;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1956(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1956, ctx.r31.u32);
	// addi r3,r1,488
	ctx.r3.s64 = ctx.r1.s64 + 488;
	// stw r31,2772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2772, ctx.r31.u32);
	// addi r11,r11,-8480
	ctx.r11.s64 = ctx.r11.s64 + -8480;
	// stw r31,3132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3132, ctx.r31.u32);
	// stw r30,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r30.u32);
	// stw r30,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r30.u32);
	// stw r30,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r30.u32);
	// stw r11,1952(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1952, ctx.r11.u32);
	// ld r4,1952(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1952);
	// stw r11,3124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3124, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452454;
	sub_8241A978(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r1,456
	ctx.r8.s64 = ctx.r1.s64 + 456;
	// addi r5,r11,25404
	ctx.r5.s64 = ctx.r11.s64 + 25404;
	// addi r7,r1,1000
	ctx.r7.s64 = ctx.r1.s64 + 1000;
	// addi r6,r1,488
	ctx.r6.s64 = ctx.r1.s64 + 488;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243fc98
	ctx.lr = 0x82452474;
	sub_8243FC98(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1700(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1700, ctx.r31.u32);
	// addi r3,r1,1512
	ctx.r3.s64 = ctx.r1.s64 + 1512;
	// addi r11,r11,-23688
	ctx.r11.s64 = ctx.r11.s64 + -23688;
	// stw r31,2780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2780, ctx.r31.u32);
	// stw r11,1696(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1696, ctx.r11.u32);
	// ld r4,1696(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1696);
	// stw r11,3140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3140, ctx.r11.u32);
	// stw r31,2788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2788, ctx.r31.u32);
	// stw r30,1512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1512, ctx.r30.u32);
	// stw r30,1516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1516, ctx.r30.u32);
	// stw r30,1520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1520, ctx.r30.u32);
	// bl 0x8241a978
	ctx.lr = 0x824524A8;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,2092(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2092, ctx.r31.u32);
	// addi r3,r1,520
	ctx.r3.s64 = ctx.r1.s64 + 520;
	// stw r31,2796(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2796, ctx.r31.u32);
	// addi r11,r11,-13784
	ctx.r11.s64 = ctx.r11.s64 + -13784;
	// stw r31,3156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3156, ctx.r31.u32);
	// stw r30,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r30.u32);
	// stw r30,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r30.u32);
	// stw r30,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r30.u32);
	// stw r11,2088(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2088, ctx.r11.u32);
	// ld r4,2088(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2088);
	// stw r11,3148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3148, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x824524DC;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1716, ctx.r31.u32);
	// addi r3,r1,1032
	ctx.r3.s64 = ctx.r1.s64 + 1032;
	// stw r31,3164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3164, ctx.r31.u32);
	// addi r11,r11,-4080
	ctx.r11.s64 = ctx.r11.s64 + -4080;
	// stw r31,2812(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2812, ctx.r31.u32);
	// stw r30,1032(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1032, ctx.r30.u32);
	// stw r30,1036(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1036, ctx.r30.u32);
	// stw r30,1040(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1040, ctx.r30.u32);
	// stw r11,1712(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1712, ctx.r11.u32);
	// ld r4,1712(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1712);
	// stw r11,2804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2804, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452510;
	sub_8241A978(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r1,1512
	ctx.r8.s64 = ctx.r1.s64 + 1512;
	// addi r5,r11,4200
	ctx.r5.s64 = ctx.r11.s64 + 4200;
	// addi r7,r1,520
	ctx.r7.s64 = ctx.r1.s64 + 520;
	// addi r6,r1,1032
	ctx.r6.s64 = ctx.r1.s64 + 1032;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243fc98
	ctx.lr = 0x82452530;
	sub_8243FC98(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r3,r1,552
	ctx.r3.s64 = ctx.r1.s64 + 552;
	// stw r31,1972(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1972, ctx.r31.u32);
	// addi r11,r11,-19256
	ctx.r11.s64 = ctx.r11.s64 + -19256;
	// stw r31,2820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2820, ctx.r31.u32);
	// stw r31,3180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3180, ctx.r31.u32);
	// stw r30,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r30.u32);
	// stw r30,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r30.u32);
	// stw r30,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r30.u32);
	// stw r11,1968(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1968, ctx.r11.u32);
	// ld r4,1968(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1968);
	// stw r11,3172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3172, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452564;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1732, ctx.r31.u32);
	// addi r3,r1,1288
	ctx.r3.s64 = ctx.r1.s64 + 1288;
	// stw r31,3188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3188, ctx.r31.u32);
	// addi r11,r11,-22080
	ctx.r11.s64 = ctx.r11.s64 + -22080;
	// stw r31,2836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2836, ctx.r31.u32);
	// stw r30,1288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1288, ctx.r30.u32);
	// stw r30,1292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1292, ctx.r30.u32);
	// stw r30,1296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1296, ctx.r30.u32);
	// stw r11,1728(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1728, ctx.r11.u32);
	// ld r4,1728(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1728);
	// stw r11,2828(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2828, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452598;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,2100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2100, ctx.r31.u32);
	// addi r3,r1,584
	ctx.r3.s64 = ctx.r1.s64 + 584;
	// stw r31,2844(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2844, ctx.r31.u32);
	// addi r11,r11,-8288
	ctx.r11.s64 = ctx.r11.s64 + -8288;
	// stw r31,3204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3204, ctx.r31.u32);
	// stw r30,584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 584, ctx.r30.u32);
	// stw r30,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, ctx.r30.u32);
	// stw r30,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r30.u32);
	// stw r11,2096(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2096, ctx.r11.u32);
	// ld r4,2096(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2096);
	// stw r11,3196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3196, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x824525CC;
	sub_8241A978(ctx, base);
	// addi r8,r1,552
	ctx.r8.s64 = ctx.r1.s64 + 552;
	// addi r7,r1,1288
	ctx.r7.s64 = ctx.r1.s64 + 1288;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,25384
	ctx.r5.s64 = ctx.r11.s64 + 25384;
	// addi r6,r1,584
	ctx.r6.s64 = ctx.r1.s64 + 584;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243fc98
	ctx.lr = 0x824525EC;
	sub_8243FC98(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r3,r1,1064
	ctx.r3.s64 = ctx.r1.s64 + 1064;
	// stw r31,1748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1748, ctx.r31.u32);
	// addi r11,r11,-22232
	ctx.r11.s64 = ctx.r11.s64 + -22232;
	// stw r31,3212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3212, ctx.r31.u32);
	// stw r31,2860(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2860, ctx.r31.u32);
	// stw r30,1064(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1064, ctx.r30.u32);
	// stw r30,1068(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1068, ctx.r30.u32);
	// stw r30,1072(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1072, ctx.r30.u32);
	// stw r11,1744(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1744, ctx.r11.u32);
	// ld r4,1744(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1744);
	// stw r11,2852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2852, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452620;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1988(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1988, ctx.r31.u32);
	// addi r3,r1,616
	ctx.r3.s64 = ctx.r1.s64 + 616;
	// stw r31,2868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2868, ctx.r31.u32);
	// addi r11,r11,-8160
	ctx.r11.s64 = ctx.r11.s64 + -8160;
	// stw r31,3228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3228, ctx.r31.u32);
	// stw r30,616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 616, ctx.r30.u32);
	// stw r30,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, ctx.r30.u32);
	// stw r30,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r30.u32);
	// stw r11,1984(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1984, ctx.r11.u32);
	// ld r4,1984(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1984);
	// stw r11,3220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3220, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452654;
	sub_8241A978(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r1,1064
	ctx.r7.s64 = ctx.r1.s64 + 1064;
	// addi r5,r11,25364
	ctx.r5.s64 = ctx.r11.s64 + 25364;
	// addi r6,r1,616
	ctx.r6.s64 = ctx.r1.s64 + 616;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243fb00
	ctx.lr = 0x82452670;
	sub_8243FB00(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r3,r1,1416
	ctx.r3.s64 = ctx.r1.s64 + 1416;
	// stw r31,1764(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1764, ctx.r31.u32);
	// addi r11,r11,-29304
	ctx.r11.s64 = ctx.r11.s64 + -29304;
	// stw r31,3236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3236, ctx.r31.u32);
	// stw r31,2884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2884, ctx.r31.u32);
	// stw r30,1416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1416, ctx.r30.u32);
	// stw r30,1420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1420, ctx.r30.u32);
	// stw r30,1424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1424, ctx.r30.u32);
	// stw r11,1760(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1760, ctx.r11.u32);
	// ld r4,1760(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1760);
	// stw r11,2876(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2876, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x824526A4;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,2108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2108, ctx.r31.u32);
	// addi r3,r1,648
	ctx.r3.s64 = ctx.r1.s64 + 648;
	// stw r31,2892(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2892, ctx.r31.u32);
	// addi r11,r11,-13552
	ctx.r11.s64 = ctx.r11.s64 + -13552;
	// stw r31,3252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3252, ctx.r31.u32);
	// stw r30,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r30.u32);
	// stw r30,652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 652, ctx.r30.u32);
	// stw r30,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r30.u32);
	// stw r11,2104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2104, ctx.r11.u32);
	// ld r4,2104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2104);
	// stw r11,3244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3244, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x824526D8;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1780, ctx.r31.u32);
	// addi r3,r1,1096
	ctx.r3.s64 = ctx.r1.s64 + 1096;
	// stw r31,3260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3260, ctx.r31.u32);
	// addi r11,r11,4520
	ctx.r11.s64 = ctx.r11.s64 + 4520;
	// stw r31,2908(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2908, ctx.r31.u32);
	// stw r30,1096(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1096, ctx.r30.u32);
	// stw r30,1100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1100, ctx.r30.u32);
	// stw r30,1104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1104, ctx.r30.u32);
	// stw r11,1776(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1776, ctx.r11.u32);
	// ld r4,1776(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1776);
	// stw r11,2900(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2900, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x8245270C;
	sub_8241A978(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r1,1416
	ctx.r8.s64 = ctx.r1.s64 + 1416;
	// addi r5,r11,25348
	ctx.r5.s64 = ctx.r11.s64 + 25348;
	// addi r7,r1,648
	ctx.r7.s64 = ctx.r1.s64 + 648;
	// addi r6,r1,1096
	ctx.r6.s64 = ctx.r1.s64 + 1096;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243fc98
	ctx.lr = 0x8245272C;
	sub_8243FC98(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r3,r1,680
	ctx.r3.s64 = ctx.r1.s64 + 680;
	// stw r31,2004(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2004, ctx.r31.u32);
	// addi r11,r11,-24400
	ctx.r11.s64 = ctx.r11.s64 + -24400;
	// stw r31,2924(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2924, ctx.r31.u32);
	// stw r31,2940(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2940, ctx.r31.u32);
	// stw r30,680(r1)
	PPC_STORE_U32(ctx.r1.u32 + 680, ctx.r30.u32);
	// stw r30,684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 684, ctx.r30.u32);
	// stw r30,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r30.u32);
	// stw r11,2000(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2000, ctx.r11.u32);
	// ld r4,2000(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2000);
	// stw r11,3268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3268, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452760;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1796(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1796, ctx.r31.u32);
	// addi r3,r1,1320
	ctx.r3.s64 = ctx.r1.s64 + 1320;
	// stw r31,2256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2256, ctx.r31.u32);
	// addi r11,r11,-440
	ctx.r11.s64 = ctx.r11.s64 + -440;
	// stw r31,2264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2264, ctx.r31.u32);
	// stw r30,1320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1320, ctx.r30.u32);
	// stw r30,1324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1324, ctx.r30.u32);
	// stw r30,1328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1328, ctx.r30.u32);
	// stw r11,1792(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1792, ctx.r11.u32);
	// ld r4,1792(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1792);
	// stw r11,3292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3292, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452794;
	sub_8241A978(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r1,680
	ctx.r7.s64 = ctx.r1.s64 + 680;
	// addi r5,r11,25328
	ctx.r5.s64 = ctx.r11.s64 + 25328;
	// addi r6,r1,1320
	ctx.r6.s64 = ctx.r1.s64 + 1320;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243fb00
	ctx.lr = 0x824527B0;
	sub_8243FB00(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r3,r1,712
	ctx.r3.s64 = ctx.r1.s64 + 712;
	// stw r31,2188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2188, ctx.r31.u32);
	// addi r11,r11,-23088
	ctx.r11.s64 = ctx.r11.s64 + -23088;
	// stw r31,2280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2280, ctx.r31.u32);
	// stw r31,2288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2288, ctx.r31.u32);
	// stw r30,712(r1)
	PPC_STORE_U32(ctx.r1.u32 + 712, ctx.r30.u32);
	// stw r30,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r30.u32);
	// stw r30,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r30.u32);
	// stw r11,2184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2184, ctx.r11.u32);
	// ld r4,2184(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2184);
	// stw r11,2272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2272, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x824527E4;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1812(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1812, ctx.r31.u32);
	// addi r3,r1,1128
	ctx.r3.s64 = ctx.r1.s64 + 1128;
	// stw r31,2304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2304, ctx.r31.u32);
	// addi r11,r11,-23624
	ctx.r11.s64 = ctx.r11.s64 + -23624;
	// stw r31,2312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2312, ctx.r31.u32);
	// stw r30,1128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1128, ctx.r30.u32);
	// stw r30,1132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1132, ctx.r30.u32);
	// stw r30,1136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1136, ctx.r30.u32);
	// stw r11,1808(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1808, ctx.r11.u32);
	// ld r4,1808(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1808);
	// stw r11,2296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2296, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452818;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,2020(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2020, ctx.r31.u32);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// stw r31,2328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2328, ctx.r31.u32);
	// addi r11,r11,-3984
	ctx.r11.s64 = ctx.r11.s64 + -3984;
	// stw r31,2336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2336, ctx.r31.u32);
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// stw r30,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r30.u32);
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// stw r11,2016(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2016, ctx.r11.u32);
	// ld r4,2016(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2016);
	// stw r11,2320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2320, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x8245284C;
	sub_8241A978(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r1,712
	ctx.r8.s64 = ctx.r1.s64 + 712;
	// addi r5,r11,25304
	ctx.r5.s64 = ctx.r11.s64 + 25304;
	// addi r7,r1,1128
	ctx.r7.s64 = ctx.r1.s64 + 1128;
	// addi r6,r1,200
	ctx.r6.s64 = ctx.r1.s64 + 200;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243fc98
	ctx.lr = 0x8245286C;
	sub_8243FC98(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r3,r1,1480
	ctx.r3.s64 = ctx.r1.s64 + 1480;
	// stw r31,1828(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1828, ctx.r31.u32);
	// addi r11,r11,-22944
	ctx.r11.s64 = ctx.r11.s64 + -22944;
	// stw r31,2344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2344, ctx.r31.u32);
	// stw r31,2360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2360, ctx.r31.u32);
	// stw r30,1480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1480, ctx.r30.u32);
	// stw r30,1484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1484, ctx.r30.u32);
	// stw r30,1488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1488, ctx.r30.u32);
	// stw r11,1824(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1824, ctx.r11.u32);
	// ld r4,1824(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1824);
	// stw r11,2352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2352, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x824528A0;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,2124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2124, ctx.r31.u32);
	// addi r3,r1,776
	ctx.r3.s64 = ctx.r1.s64 + 776;
	// stw r31,2376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2376, ctx.r31.u32);
	// addi r11,r11,7128
	ctx.r11.s64 = ctx.r11.s64 + 7128;
	// stw r31,2384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2384, ctx.r31.u32);
	// stw r30,776(r1)
	PPC_STORE_U32(ctx.r1.u32 + 776, ctx.r30.u32);
	// stw r30,780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 780, ctx.r30.u32);
	// stw r30,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r30.u32);
	// stw r11,2120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2120, ctx.r11.u32);
	// ld r4,2120(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2120);
	// stw r11,2368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2368, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x824528D4;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1844(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1844, ctx.r31.u32);
	// addi r3,r1,1160
	ctx.r3.s64 = ctx.r1.s64 + 1160;
	// stw r31,2400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2400, ctx.r31.u32);
	// addi r11,r11,-7952
	ctx.r11.s64 = ctx.r11.s64 + -7952;
	// stw r31,2408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2408, ctx.r31.u32);
	// stw r30,1160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1160, ctx.r30.u32);
	// stw r30,1164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1164, ctx.r30.u32);
	// stw r30,1168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1168, ctx.r30.u32);
	// stw r11,1840(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1840, ctx.r11.u32);
	// ld r4,1840(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1840);
	// stw r11,2392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2392, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452908;
	sub_8241A978(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r1,1480
	ctx.r8.s64 = ctx.r1.s64 + 1480;
	// addi r5,r11,25284
	ctx.r5.s64 = ctx.r11.s64 + 25284;
	// addi r7,r1,776
	ctx.r7.s64 = ctx.r1.s64 + 776;
	// addi r6,r1,1160
	ctx.r6.s64 = ctx.r1.s64 + 1160;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243fc98
	ctx.lr = 0x82452928;
	sub_8243FC98(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r3,r1,808
	ctx.r3.s64 = ctx.r1.s64 + 808;
	// stw r31,2036(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2036, ctx.r31.u32);
	// addi r11,r11,-19256
	ctx.r11.s64 = ctx.r11.s64 + -19256;
	// stw r31,2424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2424, ctx.r31.u32);
	// stw r31,2432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2432, ctx.r31.u32);
	// stw r30,808(r1)
	PPC_STORE_U32(ctx.r1.u32 + 808, ctx.r30.u32);
	// stw r30,812(r1)
	PPC_STORE_U32(ctx.r1.u32 + 812, ctx.r30.u32);
	// stw r30,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r30.u32);
	// stw r11,2032(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2032, ctx.r11.u32);
	// ld r4,2032(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2032);
	// stw r11,2416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2416, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x8245295C;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1860(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1860, ctx.r31.u32);
	// addi r3,r1,1352
	ctx.r3.s64 = ctx.r1.s64 + 1352;
	// stw r31,2448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2448, ctx.r31.u32);
	// addi r11,r11,-22856
	ctx.r11.s64 = ctx.r11.s64 + -22856;
	// stw r31,2456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2456, ctx.r31.u32);
	// stw r30,1352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1352, ctx.r30.u32);
	// stw r30,1356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1356, ctx.r30.u32);
	// stw r30,1360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1360, ctx.r30.u32);
	// stw r11,1856(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1856, ctx.r11.u32);
	// ld r4,1856(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1856);
	// stw r11,2440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2440, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452990;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,2172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2172, ctx.r31.u32);
	// addi r11,r11,-3784
	ctx.r11.s64 = ctx.r11.s64 + -3784;
	// stw r11,2464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2464, ctx.r11.u32);
	// stw r11,2168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2168, ctx.r11.u32);
	// addi r3,r1,840
	ctx.r3.s64 = ctx.r1.s64 + 840;
	// ld r4,2168(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2168);
	// stw r31,2472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2472, ctx.r31.u32);
	// stw r31,2480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2480, ctx.r31.u32);
	// stw r30,840(r1)
	PPC_STORE_U32(ctx.r1.u32 + 840, ctx.r30.u32);
	// stw r30,844(r1)
	PPC_STORE_U32(ctx.r1.u32 + 844, ctx.r30.u32);
	// stw r30,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, ctx.r30.u32);
	// bl 0x8241a978
	ctx.lr = 0x824529C4;
	sub_8241A978(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r1,808
	ctx.r8.s64 = ctx.r1.s64 + 808;
	// addi r5,r11,25272
	ctx.r5.s64 = ctx.r11.s64 + 25272;
	// addi r7,r1,1352
	ctx.r7.s64 = ctx.r1.s64 + 1352;
	// addi r6,r1,840
	ctx.r6.s64 = ctx.r1.s64 + 840;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243fc98
	ctx.lr = 0x824529E4;
	sub_8243FC98(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r3,r1,1192
	ctx.r3.s64 = ctx.r1.s64 + 1192;
	// stw r31,1876(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1876, ctx.r31.u32);
	// addi r11,r11,-22232
	ctx.r11.s64 = ctx.r11.s64 + -22232;
	// stw r31,2496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2496, ctx.r31.u32);
	// stw r31,2504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2504, ctx.r31.u32);
	// stw r30,1192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1192, ctx.r30.u32);
	// stw r30,1196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1196, ctx.r30.u32);
	// stw r30,1200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1200, ctx.r30.u32);
	// stw r11,1872(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1872, ctx.r11.u32);
	// ld r4,1872(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1872);
	// stw r11,2488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2488, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452A18;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,2052(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2052, ctx.r31.u32);
	// addi r3,r1,872
	ctx.r3.s64 = ctx.r1.s64 + 872;
	// stw r31,2520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2520, ctx.r31.u32);
	// addi r11,r11,-3608
	ctx.r11.s64 = ctx.r11.s64 + -3608;
	// stw r31,2528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2528, ctx.r31.u32);
	// stw r30,872(r1)
	PPC_STORE_U32(ctx.r1.u32 + 872, ctx.r30.u32);
	// stw r30,876(r1)
	PPC_STORE_U32(ctx.r1.u32 + 876, ctx.r30.u32);
	// stw r30,880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 880, ctx.r30.u32);
	// stw r11,2048(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2048, ctx.r11.u32);
	// ld r4,2048(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2048);
	// stw r11,2512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2512, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452A4C;
	sub_8241A978(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r1,1192
	ctx.r7.s64 = ctx.r1.s64 + 1192;
	// addi r5,r11,984
	ctx.r5.s64 = ctx.r11.s64 + 984;
	// addi r6,r1,872
	ctx.r6.s64 = ctx.r1.s64 + 872;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243fb00
	ctx.lr = 0x82452A68;
	sub_8243FB00(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// stw r31,1556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1556, ctx.r31.u32);
	// addi r11,r11,2408
	ctx.r11.s64 = ctx.r11.s64 + 2408;
	// stw r31,2544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2544, ctx.r31.u32);
	// stw r31,2552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2552, ctx.r31.u32);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// stw r30,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r30.u32);
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// stw r11,1552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1552, ctx.r11.u32);
	// ld r4,1552(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1552);
	// stw r11,2536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2536, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452A9C;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1564, ctx.r31.u32);
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// stw r31,2568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2568, ctx.r31.u32);
	// addi r11,r11,5128
	ctx.r11.s64 = ctx.r11.s64 + 5128;
	// stw r31,2576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2576, ctx.r31.u32);
	// stw r30,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r30.u32);
	// stw r30,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r30.u32);
	// stw r30,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r30.u32);
	// stw r11,1560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1560, ctx.r11.u32);
	// ld r4,1560(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1560);
	// stw r11,2560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2560, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452AD0;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1580, ctx.r31.u32);
	// addi r11,r11,-2712
	ctx.r11.s64 = ctx.r11.s64 + -2712;
	// stw r11,1576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1576, ctx.r11.u32);
	// ld r4,1576(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1576);
	// stw r11,2584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2584, ctx.r11.u32);
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// stw r31,2592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2592, ctx.r31.u32);
	// stw r31,2600(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2600, ctx.r31.u32);
	// stw r30,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r30.u32);
	// stw r30,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r30.u32);
	// stw r30,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r30.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452B04;
	sub_8241A978(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r1,216
	ctx.r8.s64 = ctx.r1.s64 + 216;
	// addi r5,r11,4188
	ctx.r5.s64 = ctx.r11.s64 + 4188;
	// addi r7,r1,248
	ctx.r7.s64 = ctx.r1.s64 + 248;
	// addi r6,r1,280
	ctx.r6.s64 = ctx.r1.s64 + 280;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243fc98
	ctx.lr = 0x82452B24;
	sub_8243FC98(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// stw r31,1596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1596, ctx.r31.u32);
	// addi r11,r11,2408
	ctx.r11.s64 = ctx.r11.s64 + 2408;
	// stw r31,2608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2608, ctx.r31.u32);
	// stw r31,2624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2624, ctx.r31.u32);
	// stw r30,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r30.u32);
	// stw r30,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r30.u32);
	// stw r30,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r30.u32);
	// stw r11,1592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1592, ctx.r11.u32);
	// ld r4,1592(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1592);
	// stw r11,2616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2616, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452B58;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1612, ctx.r31.u32);
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// stw r31,2640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2640, ctx.r31.u32);
	// addi r11,r11,7120
	ctx.r11.s64 = ctx.r11.s64 + 7120;
	// stw r31,2648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2648, ctx.r31.u32);
	// stw r30,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r30.u32);
	// stw r30,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r30.u32);
	// stw r30,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r30.u32);
	// stw r11,1608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1608, ctx.r11.u32);
	// ld r4,1608(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1608);
	// stw r11,2632(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2632, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452B8C;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1628, ctx.r31.u32);
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
	// stw r31,2664(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2664, ctx.r31.u32);
	// addi r11,r11,-984
	ctx.r11.s64 = ctx.r11.s64 + -984;
	// stw r31,2672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2672, ctx.r31.u32);
	// stw r30,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r30.u32);
	// stw r30,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r30.u32);
	// stw r30,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r30.u32);
	// stw r11,1624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1624, ctx.r11.u32);
	// ld r4,1624(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1624);
	// stw r11,2656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2656, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452BC0;
	sub_8241A978(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r1,312
	ctx.r8.s64 = ctx.r1.s64 + 312;
	// addi r5,r11,25252
	ctx.r5.s64 = ctx.r11.s64 + 25252;
	// addi r7,r1,344
	ctx.r7.s64 = ctx.r1.s64 + 344;
	// addi r6,r1,376
	ctx.r6.s64 = ctx.r1.s64 + 376;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243fc98
	ctx.lr = 0x82452BE0;
	sub_8243FC98(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// stw r31,1644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1644, ctx.r31.u32);
	// addi r11,r11,7536
	ctx.r11.s64 = ctx.r11.s64 + 7536;
	// stw r31,2688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2688, ctx.r31.u32);
	// stw r31,2696(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2696, ctx.r31.u32);
	// stw r30,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r30.u32);
	// stw r30,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r30.u32);
	// stw r30,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r30.u32);
	// stw r11,1640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1640, ctx.r11.u32);
	// ld r4,1640(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1640);
	// stw r11,2680(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2680, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452C14;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1660, ctx.r31.u32);
	// addi r11,r11,-2616
	ctx.r11.s64 = ctx.r11.s64 + -2616;
	// stw r11,1656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1656, ctx.r11.u32);
	// ld r4,1656(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1656);
	// stw r11,2704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2704, ctx.r11.u32);
	// addi r3,r1,440
	ctx.r3.s64 = ctx.r1.s64 + 440;
	// stw r31,2712(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2712, ctx.r31.u32);
	// stw r31,2720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2720, ctx.r31.u32);
	// stw r30,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r30.u32);
	// stw r30,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r30.u32);
	// stw r30,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r30.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452C48;
	sub_8241A978(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r1,408
	ctx.r7.s64 = ctx.r1.s64 + 408;
	// addi r5,r11,25240
	ctx.r5.s64 = ctx.r11.s64 + 25240;
	// addi r6,r1,440
	ctx.r6.s64 = ctx.r1.s64 + 440;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243fb00
	ctx.lr = 0x82452C64;
	sub_8243FB00(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// stw r31,1676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1676, ctx.r31.u32);
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r31,2736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2736, ctx.r31.u32);
	// stw r31,2744(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2744, ctx.r31.u32);
	// stw r30,472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 472, ctx.r30.u32);
	// stw r30,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r30.u32);
	// stw r30,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r30.u32);
	// stw r11,1672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1672, ctx.r11.u32);
	// ld r4,1672(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1672);
	// stw r11,2728(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2728, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452C98;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1692, ctx.r31.u32);
	// addi r3,r1,504
	ctx.r3.s64 = ctx.r1.s64 + 504;
	// stw r31,2760(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2760, ctx.r31.u32);
	// addi r11,r11,-22080
	ctx.r11.s64 = ctx.r11.s64 + -22080;
	// stw r31,2768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2768, ctx.r31.u32);
	// stw r30,504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 504, ctx.r30.u32);
	// stw r30,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r30.u32);
	// stw r30,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r30.u32);
	// stw r11,1688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1688, ctx.r11.u32);
	// ld r4,1688(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1688);
	// stw r11,2752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2752, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452CCC;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1708, ctx.r31.u32);
	// addi r3,r1,536
	ctx.r3.s64 = ctx.r1.s64 + 536;
	// stw r31,2784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2784, ctx.r31.u32);
	// addi r11,r11,-7448
	ctx.r11.s64 = ctx.r11.s64 + -7448;
	// stw r31,2792(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2792, ctx.r31.u32);
	// stw r30,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, ctx.r30.u32);
	// stw r30,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, ctx.r30.u32);
	// stw r30,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r30.u32);
	// stw r11,1704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1704, ctx.r11.u32);
	// ld r4,1704(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1704);
	// stw r11,2776(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2776, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452D00;
	sub_8241A978(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r1,472
	ctx.r8.s64 = ctx.r1.s64 + 472;
	// addi r5,r11,25224
	ctx.r5.s64 = ctx.r11.s64 + 25224;
	// addi r7,r1,504
	ctx.r7.s64 = ctx.r1.s64 + 504;
	// addi r6,r1,536
	ctx.r6.s64 = ctx.r1.s64 + 536;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243fc98
	ctx.lr = 0x82452D20;
	sub_8243FC98(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,568
	ctx.r3.s64 = ctx.r1.s64 + 568;
	// stw r31,1724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1724, ctx.r31.u32);
	// addi r11,r11,2408
	ctx.r11.s64 = ctx.r11.s64 + 2408;
	// stw r31,2808(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2808, ctx.r31.u32);
	// stw r31,2816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2816, ctx.r31.u32);
	// stw r30,568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 568, ctx.r30.u32);
	// stw r30,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, ctx.r30.u32);
	// stw r30,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r30.u32);
	// stw r11,1720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1720, ctx.r11.u32);
	// ld r4,1720(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1720);
	// stw r11,2800(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2800, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452D54;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1740, ctx.r31.u32);
	// addi r3,r1,600
	ctx.r3.s64 = ctx.r1.s64 + 600;
	// addi r11,r11,-29256
	ctx.r11.s64 = ctx.r11.s64 + -29256;
	// stw r11,1736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1736, ctx.r11.u32);
	// ld r4,1736(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1736);
	// stw r11,2824(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2824, ctx.r11.u32);
	// stw r31,2832(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2832, ctx.r31.u32);
	// stw r31,2840(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2840, ctx.r31.u32);
	// stw r30,600(r1)
	PPC_STORE_U32(ctx.r1.u32 + 600, ctx.r30.u32);
	// stw r30,604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 604, ctx.r30.u32);
	// stw r30,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r30.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452D88;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1756, ctx.r31.u32);
	// addi r3,r1,632
	ctx.r3.s64 = ctx.r1.s64 + 632;
	// stw r31,2856(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2856, ctx.r31.u32);
	// addi r11,r11,-7192
	ctx.r11.s64 = ctx.r11.s64 + -7192;
	// stw r31,2864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2864, ctx.r31.u32);
	// stw r30,632(r1)
	PPC_STORE_U32(ctx.r1.u32 + 632, ctx.r30.u32);
	// stw r30,636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 636, ctx.r30.u32);
	// stw r30,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r30.u32);
	// stw r11,1752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1752, ctx.r11.u32);
	// ld r4,1752(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1752);
	// stw r11,2848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2848, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452DBC;
	sub_8241A978(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r1,568
	ctx.r8.s64 = ctx.r1.s64 + 568;
	// addi r5,r11,25212
	ctx.r5.s64 = ctx.r11.s64 + 25212;
	// addi r7,r1,600
	ctx.r7.s64 = ctx.r1.s64 + 600;
	// addi r6,r1,632
	ctx.r6.s64 = ctx.r1.s64 + 632;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243fc98
	ctx.lr = 0x82452DDC;
	sub_8243FC98(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r3,r1,664
	ctx.r3.s64 = ctx.r1.s64 + 664;
	// stw r31,1772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1772, ctx.r31.u32);
	// addi r11,r11,-23088
	ctx.r11.s64 = ctx.r11.s64 + -23088;
	// stw r31,2872(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2872, ctx.r31.u32);
	// stw r31,2880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2880, ctx.r31.u32);
	// stw r30,664(r1)
	PPC_STORE_U32(ctx.r1.u32 + 664, ctx.r30.u32);
	// stw r30,668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 668, ctx.r30.u32);
	// stw r30,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r30.u32);
	// stw r11,1768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1768, ctx.r11.u32);
	// ld r4,1768(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1768);
	// stw r11,2888(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2888, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452E10;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1788, ctx.r31.u32);
	// addi r3,r1,696
	ctx.r3.s64 = ctx.r1.s64 + 696;
	// stw r31,2904(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2904, ctx.r31.u32);
	// addi r11,r11,-13272
	ctx.r11.s64 = ctx.r11.s64 + -13272;
	// stw r31,3340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3340, ctx.r31.u32);
	// stw r30,696(r1)
	PPC_STORE_U32(ctx.r1.u32 + 696, ctx.r30.u32);
	// stw r30,700(r1)
	PPC_STORE_U32(ctx.r1.u32 + 700, ctx.r30.u32);
	// stw r30,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r30.u32);
	// stw r11,1784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1784, ctx.r11.u32);
	// ld r4,1784(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1784);
	// stw r11,2896(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2896, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452E44;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1804, ctx.r31.u32);
	// addi r3,r1,728
	ctx.r3.s64 = ctx.r1.s64 + 728;
	// stw r31,2260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2260, ctx.r31.u32);
	// addi r11,r11,-7112
	ctx.r11.s64 = ctx.r11.s64 + -7112;
	// stw r31,2956(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2956, ctx.r31.u32);
	// stw r30,728(r1)
	PPC_STORE_U32(ctx.r1.u32 + 728, ctx.r30.u32);
	// stw r30,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r30.u32);
	// stw r30,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r30.u32);
	// stw r11,1800(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1800, ctx.r11.u32);
	// ld r4,1800(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1800);
	// stw r11,3320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3320, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452E78;
	sub_8241A978(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r1,664
	ctx.r8.s64 = ctx.r1.s64 + 664;
	// addi r5,r11,25192
	ctx.r5.s64 = ctx.r11.s64 + 25192;
	// addi r7,r1,696
	ctx.r7.s64 = ctx.r1.s64 + 696;
	// addi r6,r1,728
	ctx.r6.s64 = ctx.r1.s64 + 728;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243fc98
	ctx.lr = 0x82452E98;
	sub_8243FC98(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// stw r31,1820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1820, ctx.r31.u32);
	// addi r3,r1,760
	ctx.r3.s64 = ctx.r1.s64 + 760;
	// addi r11,r11,2408
	ctx.r11.s64 = ctx.r11.s64 + 2408;
	// stw r11,1816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1816, ctx.r11.u32);
	// ld r4,1816(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1816);
	// stw r11,2268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2268, ctx.r11.u32);
	// stw r31,3300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3300, ctx.r31.u32);
	// stw r31,2276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2276, ctx.r31.u32);
	// stw r30,760(r1)
	PPC_STORE_U32(ctx.r1.u32 + 760, ctx.r30.u32);
	// stw r30,764(r1)
	PPC_STORE_U32(ctx.r1.u32 + 764, ctx.r30.u32);
	// stw r30,768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 768, ctx.r30.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452ECC;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1836, ctx.r31.u32);
	// addi r3,r1,792
	ctx.r3.s64 = ctx.r1.s64 + 792;
	// stw r31,2284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2284, ctx.r31.u32);
	// addi r11,r11,-21312
	ctx.r11.s64 = ctx.r11.s64 + -21312;
	// stw r31,3308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3308, ctx.r31.u32);
	// stw r30,792(r1)
	PPC_STORE_U32(ctx.r1.u32 + 792, ctx.r30.u32);
	// stw r30,796(r1)
	PPC_STORE_U32(ctx.r1.u32 + 796, ctx.r30.u32);
	// stw r30,800(r1)
	PPC_STORE_U32(ctx.r1.u32 + 800, ctx.r30.u32);
	// stw r11,1832(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1832, ctx.r11.u32);
	// ld r4,1832(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1832);
	// stw r11,2972(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2972, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452F00;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1852, ctx.r31.u32);
	// addi r3,r1,824
	ctx.r3.s64 = ctx.r1.s64 + 824;
	// stw r31,2988(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2988, ctx.r31.u32);
	// addi r11,r11,-2400
	ctx.r11.s64 = ctx.r11.s64 + -2400;
	// stw r31,2300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2300, ctx.r31.u32);
	// stw r30,824(r1)
	PPC_STORE_U32(ctx.r1.u32 + 824, ctx.r30.u32);
	// stw r30,828(r1)
	PPC_STORE_U32(ctx.r1.u32 + 828, ctx.r30.u32);
	// stw r30,832(r1)
	PPC_STORE_U32(ctx.r1.u32 + 832, ctx.r30.u32);
	// stw r11,1848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1848, ctx.r11.u32);
	// ld r4,1848(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1848);
	// stw r11,2292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2292, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452F34;
	sub_8241A978(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r1,760
	ctx.r8.s64 = ctx.r1.s64 + 760;
	// addi r5,r11,1088
	ctx.r5.s64 = ctx.r11.s64 + 1088;
	// addi r7,r1,792
	ctx.r7.s64 = ctx.r1.s64 + 792;
	// addi r6,r1,824
	ctx.r6.s64 = ctx.r1.s64 + 824;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243fc98
	ctx.lr = 0x82452F54;
	sub_8243FC98(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r3,r1,856
	ctx.r3.s64 = ctx.r1.s64 + 856;
	// stw r31,1868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1868, ctx.r31.u32);
	// addi r11,r11,-29064
	ctx.r11.s64 = ctx.r11.s64 + -29064;
	// stw r31,2308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2308, ctx.r31.u32);
	// stw r31,3004(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3004, ctx.r31.u32);
	// stw r30,856(r1)
	PPC_STORE_U32(ctx.r1.u32 + 856, ctx.r30.u32);
	// stw r30,860(r1)
	PPC_STORE_U32(ctx.r1.u32 + 860, ctx.r30.u32);
	// stw r30,864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 864, ctx.r30.u32);
	// stw r11,1864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1864, ctx.r11.u32);
	// ld r4,1864(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1864);
	// stw r11,3316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3316, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452F88;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1884, ctx.r31.u32);
	// addi r3,r1,888
	ctx.r3.s64 = ctx.r1.s64 + 888;
	// stw r31,3324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3324, ctx.r31.u32);
	// addi r11,r11,-3608
	ctx.r11.s64 = ctx.r11.s64 + -3608;
	// stw r31,2324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2324, ctx.r31.u32);
	// stw r30,888(r1)
	PPC_STORE_U32(ctx.r1.u32 + 888, ctx.r30.u32);
	// stw r30,892(r1)
	PPC_STORE_U32(ctx.r1.u32 + 892, ctx.r30.u32);
	// stw r30,896(r1)
	PPC_STORE_U32(ctx.r1.u32 + 896, ctx.r30.u32);
	// stw r11,1880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1880, ctx.r11.u32);
	// ld r4,1880(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1880);
	// stw r11,2316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2316, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82452FBC;
	sub_8241A978(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r1,856
	ctx.r7.s64 = ctx.r1.s64 + 856;
	// addi r5,r11,-2608
	ctx.r5.s64 = ctx.r11.s64 + -2608;
	// addi r6,r1,888
	ctx.r6.s64 = ctx.r1.s64 + 888;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243fb00
	ctx.lr = 0x82452FD8;
	sub_8243FB00(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1900(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1900, ctx.r31.u32);
	// addi r3,r1,920
	ctx.r3.s64 = ctx.r1.s64 + 920;
	// addi r11,r11,-17384
	ctx.r11.s64 = ctx.r11.s64 + -17384;
	// stw r31,2332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2332, ctx.r31.u32);
	// stw r11,1896(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1896, ctx.r11.u32);
	// ld r4,1896(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1896);
	// stw r11,3332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3332, ctx.r11.u32);
	// stw r31,3016(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3016, ctx.r31.u32);
	// stw r30,920(r1)
	PPC_STORE_U32(ctx.r1.u32 + 920, ctx.r30.u32);
	// stw r30,924(r1)
	PPC_STORE_U32(ctx.r1.u32 + 924, ctx.r30.u32);
	// stw r30,928(r1)
	PPC_STORE_U32(ctx.r1.u32 + 928, ctx.r30.u32);
	// bl 0x8241a978
	ctx.lr = 0x8245300C;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1916, ctx.r31.u32);
	// addi r3,r1,952
	ctx.r3.s64 = ctx.r1.s64 + 952;
	// stw r31,3176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3176, ctx.r31.u32);
	// addi r11,r11,-17608
	ctx.r11.s64 = ctx.r11.s64 + -17608;
	// stw r31,2348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2348, ctx.r31.u32);
	// stw r30,952(r1)
	PPC_STORE_U32(ctx.r1.u32 + 952, ctx.r30.u32);
	// stw r30,956(r1)
	PPC_STORE_U32(ctx.r1.u32 + 956, ctx.r30.u32);
	// stw r30,960(r1)
	PPC_STORE_U32(ctx.r1.u32 + 960, ctx.r30.u32);
	// stw r11,1912(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1912, ctx.r11.u32);
	// ld r4,1912(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1912);
	// stw r11,2340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2340, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82453040;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1932(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1932, ctx.r31.u32);
	// addi r3,r1,984
	ctx.r3.s64 = ctx.r1.s64 + 984;
	// stw r31,2356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2356, ctx.r31.u32);
	// addi r11,r11,-6672
	ctx.r11.s64 = ctx.r11.s64 + -6672;
	// stw r31,3256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3256, ctx.r31.u32);
	// stw r30,984(r1)
	PPC_STORE_U32(ctx.r1.u32 + 984, ctx.r30.u32);
	// stw r30,988(r1)
	PPC_STORE_U32(ctx.r1.u32 + 988, ctx.r30.u32);
	// stw r30,992(r1)
	PPC_STORE_U32(ctx.r1.u32 + 992, ctx.r30.u32);
	// stw r11,1928(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1928, ctx.r11.u32);
	// ld r4,1928(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1928);
	// stw r11,3024(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3024, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82453074;
	sub_8241A978(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r1,920
	ctx.r8.s64 = ctx.r1.s64 + 920;
	// addi r5,r11,21536
	ctx.r5.s64 = ctx.r11.s64 + 21536;
	// addi r7,r1,952
	ctx.r7.s64 = ctx.r1.s64 + 952;
	// addi r6,r1,984
	ctx.r6.s64 = ctx.r1.s64 + 984;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243fc98
	ctx.lr = 0x82453094;
	sub_8243FC98(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,1016
	ctx.r3.s64 = ctx.r1.s64 + 1016;
	// stw r31,1948(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1948, ctx.r31.u32);
	// addi r11,r11,2408
	ctx.r11.s64 = ctx.r11.s64 + 2408;
	// stw r31,2364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2364, ctx.r31.u32);
	// stw r31,3032(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3032, ctx.r31.u32);
	// stw r30,1016(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1016, ctx.r30.u32);
	// stw r30,1020(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1020, ctx.r30.u32);
	// stw r30,1024(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1024, ctx.r30.u32);
	// stw r11,1944(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1944, ctx.r11.u32);
	// ld r4,1944(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1944);
	// stw r11,2372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2372, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x824530C8;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1964(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1964, ctx.r31.u32);
	// addi r3,r1,1048
	ctx.r3.s64 = ctx.r1.s64 + 1048;
	// stw r31,2380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2380, ctx.r31.u32);
	// addi r11,r11,-19800
	ctx.r11.s64 = ctx.r11.s64 + -19800;
	// stw r31,3040(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3040, ctx.r31.u32);
	// stw r30,1048(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1048, ctx.r30.u32);
	// stw r30,1052(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1052, ctx.r30.u32);
	// stw r30,1056(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1056, ctx.r30.u32);
	// stw r11,1960(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1960, ctx.r11.u32);
	// ld r4,1960(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1960);
	// stw r11,3184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3184, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x824530FC;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1980(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1980, ctx.r31.u32);
	// addi r3,r1,1080
	ctx.r3.s64 = ctx.r1.s64 + 1080;
	// stw r31,3304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3304, ctx.r31.u32);
	// addi r11,r11,2592
	ctx.r11.s64 = ctx.r11.s64 + 2592;
	// stw r31,2396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2396, ctx.r31.u32);
	// stw r30,1080(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1080, ctx.r30.u32);
	// stw r30,1084(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1084, ctx.r30.u32);
	// stw r30,1088(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1088, ctx.r30.u32);
	// stw r11,1976(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1976, ctx.r11.u32);
	// ld r4,1976(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1976);
	// stw r11,2388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2388, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82453130;
	sub_8241A978(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r1,1016
	ctx.r8.s64 = ctx.r1.s64 + 1016;
	// addi r5,r11,25172
	ctx.r5.s64 = ctx.r11.s64 + 25172;
	// addi r7,r1,1048
	ctx.r7.s64 = ctx.r1.s64 + 1048;
	// addi r6,r1,1080
	ctx.r6.s64 = ctx.r1.s64 + 1080;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243fc98
	ctx.lr = 0x82453150;
	sub_8243FC98(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r3,r1,1112
	ctx.r3.s64 = ctx.r1.s64 + 1112;
	// stw r31,1996(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1996, ctx.r31.u32);
	// addi r11,r11,-19568
	ctx.r11.s64 = ctx.r11.s64 + -19568;
	// stw r31,2404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2404, ctx.r31.u32);
	// stw r31,3192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3192, ctx.r31.u32);
	// stw r30,1112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1112, ctx.r30.u32);
	// stw r30,1116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1116, ctx.r30.u32);
	// stw r30,1120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1120, ctx.r30.u32);
	// stw r11,1992(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1992, ctx.r11.u32);
	// ld r4,1992(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1992);
	// stw r11,3048(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3048, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82453184;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,2012(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2012, ctx.r31.u32);
	// addi r3,r1,1144
	ctx.r3.s64 = ctx.r1.s64 + 1144;
	// stw r31,3056(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3056, ctx.r31.u32);
	// addi r11,r11,-6032
	ctx.r11.s64 = ctx.r11.s64 + -6032;
	// stw r31,2420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2420, ctx.r31.u32);
	// stw r30,1144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1144, ctx.r30.u32);
	// stw r30,1148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1148, ctx.r30.u32);
	// stw r30,1152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1152, ctx.r30.u32);
	// stw r11,2008(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2008, ctx.r11.u32);
	// ld r4,2008(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2008);
	// stw r11,2412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2412, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x824531B8;
	sub_8241A978(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r1,1112
	ctx.r7.s64 = ctx.r1.s64 + 1112;
	// addi r5,r11,25148
	ctx.r5.s64 = ctx.r11.s64 + 25148;
	// addi r6,r1,1144
	ctx.r6.s64 = ctx.r1.s64 + 1144;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243fb00
	ctx.lr = 0x824531D4;
	sub_8243FB00(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r3,r1,1176
	ctx.r3.s64 = ctx.r1.s64 + 1176;
	// stw r31,2028(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2028, ctx.r31.u32);
	// addi r11,r11,-17384
	ctx.r11.s64 = ctx.r11.s64 + -17384;
	// stw r31,3264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3264, ctx.r31.u32);
	// stw r31,3064(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3064, ctx.r31.u32);
	// stw r30,1176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1176, ctx.r30.u32);
	// stw r30,1180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1180, ctx.r30.u32);
	// stw r30,1184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1184, ctx.r30.u32);
	// stw r11,2024(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2024, ctx.r11.u32);
	// ld r4,2024(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2024);
	// stw r11,2428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2428, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82453208;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,2044(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2044, ctx.r31.u32);
	// addi r3,r1,1208
	ctx.r3.s64 = ctx.r1.s64 + 1208;
	// stw r31,3200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3200, ctx.r31.u32);
	// addi r11,r11,-17352
	ctx.r11.s64 = ctx.r11.s64 + -17352;
	// stw r31,2444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2444, ctx.r31.u32);
	// stw r30,1208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1208, ctx.r30.u32);
	// stw r30,1212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1212, ctx.r30.u32);
	// stw r30,1216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1216, ctx.r30.u32);
	// stw r11,2040(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2040, ctx.r11.u32);
	// ld r4,2040(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2040);
	// stw r11,2436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2436, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x8245323C;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,2060(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2060, ctx.r31.u32);
	// addi r3,r1,1240
	ctx.r3.s64 = ctx.r1.s64 + 1240;
	// stw r31,2452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2452, ctx.r31.u32);
	// addi r11,r11,-5864
	ctx.r11.s64 = ctx.r11.s64 + -5864;
	// stw r31,3336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3336, ctx.r31.u32);
	// stw r30,1240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1240, ctx.r30.u32);
	// stw r30,1244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1244, ctx.r30.u32);
	// stw r30,1248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1248, ctx.r30.u32);
	// stw r11,2056(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2056, ctx.r11.u32);
	// ld r4,2056(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2056);
	// stw r11,3072(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3072, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82453270;
	sub_8241A978(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r1,1176
	ctx.r8.s64 = ctx.r1.s64 + 1176;
	// addi r5,r11,25128
	ctx.r5.s64 = ctx.r11.s64 + 25128;
	// addi r7,r1,1208
	ctx.r7.s64 = ctx.r1.s64 + 1208;
	// addi r6,r1,1240
	ctx.r6.s64 = ctx.r1.s64 + 1240;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243fc98
	ctx.lr = 0x82453290;
	sub_8243FC98(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r3,r1,1272
	ctx.r3.s64 = ctx.r1.s64 + 1272;
	// stw r31,2076(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2076, ctx.r31.u32);
	// addi r11,r11,-19256
	ctx.r11.s64 = ctx.r11.s64 + -19256;
	// stw r31,3080(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3080, ctx.r31.u32);
	// stw r31,2468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2468, ctx.r31.u32);
	// stw r30,1272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1272, ctx.r30.u32);
	// stw r30,1276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1276, ctx.r30.u32);
	// stw r30,1280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1280, ctx.r30.u32);
	// stw r11,2072(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2072, ctx.r11.u32);
	// ld r4,2072(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2072);
	// stw r11,2460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2460, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x824532C4;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,1548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1548, ctx.r31.u32);
	// addi r3,r1,1304
	ctx.r3.s64 = ctx.r1.s64 + 1304;
	// stw r31,2476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2476, ctx.r31.u32);
	// addi r11,r11,-2312
	ctx.r11.s64 = ctx.r11.s64 + -2312;
	// stw r31,3088(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3088, ctx.r31.u32);
	// stw r30,1304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1304, ctx.r30.u32);
	// stw r30,1308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1308, ctx.r30.u32);
	// stw r30,1312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1312, ctx.r30.u32);
	// stw r11,1544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1544, ctx.r11.u32);
	// ld r4,1544(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1544);
	// stw r11,3208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3208, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x824532F8;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,2116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2116, ctx.r31.u32);
	// addi r3,r1,1336
	ctx.r3.s64 = ctx.r1.s64 + 1336;
	// stw r31,3272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3272, ctx.r31.u32);
	// addi r11,r11,-5704
	ctx.r11.s64 = ctx.r11.s64 + -5704;
	// stw r31,2492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2492, ctx.r31.u32);
	// stw r30,1336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1336, ctx.r30.u32);
	// stw r30,1340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1340, ctx.r30.u32);
	// stw r30,1344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1344, ctx.r30.u32);
	// stw r11,2112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2112, ctx.r11.u32);
	// ld r4,2112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2112);
	// stw r11,2484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2484, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x8245332C;
	sub_8241A978(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r1,1272
	ctx.r8.s64 = ctx.r1.s64 + 1272;
	// addi r5,r11,25116
	ctx.r5.s64 = ctx.r11.s64 + 25116;
	// addi r7,r1,1304
	ctx.r7.s64 = ctx.r1.s64 + 1304;
	// addi r6,r1,1336
	ctx.r6.s64 = ctx.r1.s64 + 1336;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243fc98
	ctx.lr = 0x8245334C;
	sub_8243FC98(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,1368
	ctx.r3.s64 = ctx.r1.s64 + 1368;
	// stw r31,2132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2132, ctx.r31.u32);
	// addi r11,r11,2408
	ctx.r11.s64 = ctx.r11.s64 + 2408;
	// stw r31,3096(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3096, ctx.r31.u32);
	// stw r31,2500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2500, ctx.r31.u32);
	// stw r30,1368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1368, ctx.r30.u32);
	// stw r30,1372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1372, ctx.r30.u32);
	// stw r30,1376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1376, ctx.r30.u32);
	// stw r11,2128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2128, ctx.r11.u32);
	// ld r4,2128(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2128);
	// stw r11,3216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3216, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82453380;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,2148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2148, ctx.r31.u32);
	// addi r3,r1,1400
	ctx.r3.s64 = ctx.r1.s64 + 1400;
	// stw r31,3104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3104, ctx.r31.u32);
	// addi r11,r11,6584
	ctx.r11.s64 = ctx.r11.s64 + 6584;
	// stw r31,2516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2516, ctx.r31.u32);
	// stw r30,1400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1400, ctx.r30.u32);
	// stw r30,1404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1404, ctx.r30.u32);
	// stw r30,1408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1408, ctx.r30.u32);
	// stw r11,2144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2144, ctx.r11.u32);
	// ld r4,2144(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2144);
	// stw r11,2508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2508, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x824533B4;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,2164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2164, ctx.r31.u32);
	// addi r11,r11,-5616
	ctx.r11.s64 = ctx.r11.s64 + -5616;
	// stw r11,3312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3312, ctx.r11.u32);
	// addi r3,r1,1432
	ctx.r3.s64 = ctx.r1.s64 + 1432;
	// stw r11,2160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2160, ctx.r11.u32);
	// ld r4,2160(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2160);
	// stw r31,2524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2524, ctx.r31.u32);
	// stw r31,3112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3112, ctx.r31.u32);
	// stw r30,1432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1432, ctx.r30.u32);
	// stw r30,1436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1436, ctx.r30.u32);
	// stw r30,1440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1440, ctx.r30.u32);
	// bl 0x8241a978
	ctx.lr = 0x824533E8;
	sub_8241A978(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r1,1368
	ctx.r8.s64 = ctx.r1.s64 + 1368;
	// addi r5,r11,25104
	ctx.r5.s64 = ctx.r11.s64 + 25104;
	// addi r7,r1,1400
	ctx.r7.s64 = ctx.r1.s64 + 1400;
	// addi r6,r1,1432
	ctx.r6.s64 = ctx.r1.s64 + 1432;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243fc98
	ctx.lr = 0x82453408;
	sub_8243FC98(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r3,r1,1464
	ctx.r3.s64 = ctx.r1.s64 + 1464;
	// stw r31,2180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2180, ctx.r31.u32);
	// addi r11,r11,-16296
	ctx.r11.s64 = ctx.r11.s64 + -16296;
	// stw r31,3224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3224, ctx.r31.u32);
	// stw r31,2540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2540, ctx.r31.u32);
	// stw r30,1464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1464, ctx.r30.u32);
	// stw r30,1468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1468, ctx.r30.u32);
	// stw r30,1472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1472, ctx.r30.u32);
	// stw r11,2176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2176, ctx.r11.u32);
	// ld r4,2176(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2176);
	// stw r11,2532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2532, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x8245343C;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,2196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2196, ctx.r31.u32);
	// addi r3,r1,1496
	ctx.r3.s64 = ctx.r1.s64 + 1496;
	// stw r31,2548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2548, ctx.r31.u32);
	// addi r11,r11,6840
	ctx.r11.s64 = ctx.r11.s64 + 6840;
	// stw r31,3288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3288, ctx.r31.u32);
	// stw r30,1496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1496, ctx.r30.u32);
	// stw r30,1500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1500, ctx.r30.u32);
	// stw r30,1504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1504, ctx.r30.u32);
	// stw r11,2192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2192, ctx.r11.u32);
	// ld r4,2192(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2192);
	// stw r11,3120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3120, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x82453470;
	sub_8241A978(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r31,2212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2212, ctx.r31.u32);
	// addi r3,r1,1528
	ctx.r3.s64 = ctx.r1.s64 + 1528;
	// stw r31,2252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2252, ctx.r31.u32);
	// addi r11,r11,-5536
	ctx.r11.s64 = ctx.r11.s64 + -5536;
	// stw r31,2564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2564, ctx.r31.u32);
	// stw r30,1528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1528, ctx.r30.u32);
	// stw r30,1532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1532, ctx.r30.u32);
	// stw r30,1536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1536, ctx.r30.u32);
	// stw r11,2208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2208, ctx.r11.u32);
	// ld r4,2208(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2208);
	// stw r11,2556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2556, ctx.r11.u32);
	// bl 0x8241a978
	ctx.lr = 0x824534A4;
	sub_8241A978(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r1,1464
	ctx.r8.s64 = ctx.r1.s64 + 1464;
	// addi r7,r1,1496
	ctx.r7.s64 = ctx.r1.s64 + 1496;
	// addi r6,r1,1528
	ctx.r6.s64 = ctx.r1.s64 + 1528;
	// addi r5,r11,25088
	ctx.r5.s64 = ctx.r11.s64 + 25088;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243fc98
	ctx.lr = 0x824534C4;
	sub_8243FC98(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823930a8
	ctx.lr = 0x824534D0;
	sub_823930A8(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82454f40
	if (ctx.cr6.eq) goto loc_82454F40;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82454f40
	if (ctx.cr6.eq) goto loc_82454F40;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r5,r11,25080
	ctx.r5.s64 = ctx.r11.s64 + 25080;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82453508;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r5,r11,25072
	ctx.r5.s64 = ctx.r11.s64 + 25072;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82453528;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r5,r11,25064
	ctx.r5.s64 = ctx.r11.s64 + 25064;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82453548;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// beq cr6,0x82453564
	if (ctx.cr6.eq) goto loc_82453564;
	// bl 0x82160140
	ctx.lr = 0x82453564;
	sub_82160140(ctx, base);
loc_82453564:
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// beq cr6,0x82453580
	if (ctx.cr6.eq) goto loc_82453580;
	// bl 0x82160140
	ctx.lr = 0x82453580;
	sub_82160140(ctx, base);
loc_82453580:
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// beq cr6,0x8245359c
	if (ctx.cr6.eq) goto loc_8245359C;
	// bl 0x82160140
	ctx.lr = 0x8245359C;
	sub_82160140(ctx, base);
loc_8245359C:
	// addi r9,r1,3344
	ctx.r9.s64 = ctx.r1.s64 + 3344;
	// addi r10,r31,188
	ctx.r10.s64 = ctx.r31.s64 + 188;
	// li r11,3
	ctx.r11.s64 = 3;
loc_824535A8:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x824535a8
	if (!ctx.cr6.eq) goto loc_824535A8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,25052
	ctx.r3.s64 = ctx.r11.s64 + 25052;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3344
	ctx.r4.s64 = ctx.r1.s64 + 3344;
	// bl 0x82448ef8
	ctx.lr = 0x824535E0;
	sub_82448EF8(ctx, base);
	// addi r9,r1,4560
	ctx.r9.s64 = ctx.r1.s64 + 4560;
	// addi r10,r31,192
	ctx.r10.s64 = ctx.r31.s64 + 192;
	// li r11,3
	ctx.r11.s64 = 3;
loc_824535EC:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x824535ec
	if (!ctx.cr6.eq) goto loc_824535EC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,25040
	ctx.r3.s64 = ctx.r11.s64 + 25040;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4560
	ctx.r4.s64 = ctx.r1.s64 + 4560;
	// bl 0x824491b0
	ctx.lr = 0x82453624;
	sub_824491B0(ctx, base);
	// addi r9,r1,4592
	ctx.r9.s64 = ctx.r1.s64 + 4592;
	// addi r10,r31,196
	ctx.r10.s64 = ctx.r31.s64 + 196;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82453630:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82453630
	if (!ctx.cr6.eq) goto loc_82453630;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,4556
	ctx.r3.s64 = ctx.r11.s64 + 4556;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4592
	ctx.r4.s64 = ctx.r1.s64 + 4592;
	// bl 0x82448ef8
	ctx.lr = 0x82453668;
	sub_82448EF8(ctx, base);
	// addi r9,r1,4288
	ctx.r9.s64 = ctx.r1.s64 + 4288;
	// addi r10,r31,200
	ctx.r10.s64 = ctx.r31.s64 + 200;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82453674:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82453674
	if (!ctx.cr6.eq) goto loc_82453674;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,25024
	ctx.r3.s64 = ctx.r11.s64 + 25024;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4288
	ctx.r4.s64 = ctx.r1.s64 + 4288;
	// bl 0x82448ef8
	ctx.lr = 0x824536AC;
	sub_82448EF8(ctx, base);
	// addi r9,r1,3392
	ctx.r9.s64 = ctx.r1.s64 + 3392;
	// addi r10,r31,204
	ctx.r10.s64 = ctx.r31.s64 + 204;
	// li r11,3
	ctx.r11.s64 = 3;
loc_824536B8:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x824536b8
	if (!ctx.cr6.eq) goto loc_824536B8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,25012
	ctx.r3.s64 = ctx.r11.s64 + 25012;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3392
	ctx.r4.s64 = ctx.r1.s64 + 3392;
	// bl 0x82448ef8
	ctx.lr = 0x824536F0;
	sub_82448EF8(ctx, base);
	// addi r9,r1,4000
	ctx.r9.s64 = ctx.r1.s64 + 4000;
	// addi r10,r31,208
	ctx.r10.s64 = ctx.r31.s64 + 208;
	// li r11,3
	ctx.r11.s64 = 3;
loc_824536FC:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x824536fc
	if (!ctx.cr6.eq) goto loc_824536FC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,25000
	ctx.r3.s64 = ctx.r11.s64 + 25000;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4000
	ctx.r4.s64 = ctx.r1.s64 + 4000;
	// bl 0x82448ef8
	ctx.lr = 0x82453734;
	sub_82448EF8(ctx, base);
	// addi r9,r1,3424
	ctx.r9.s64 = ctx.r1.s64 + 3424;
	// addi r10,r31,212
	ctx.r10.s64 = ctx.r31.s64 + 212;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82453740:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82453740
	if (!ctx.cr6.eq) goto loc_82453740;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24988
	ctx.r3.s64 = ctx.r11.s64 + 24988;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3424
	ctx.r4.s64 = ctx.r1.s64 + 3424;
	// bl 0x82448ef8
	ctx.lr = 0x82453778;
	sub_82448EF8(ctx, base);
	// addi r9,r1,4448
	ctx.r9.s64 = ctx.r1.s64 + 4448;
	// addi r10,r31,216
	ctx.r10.s64 = ctx.r31.s64 + 216;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82453784:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82453784
	if (!ctx.cr6.eq) goto loc_82453784;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24972
	ctx.r3.s64 = ctx.r11.s64 + 24972;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4448
	ctx.r4.s64 = ctx.r1.s64 + 4448;
	// bl 0x82448ef8
	ctx.lr = 0x824537BC;
	sub_82448EF8(ctx, base);
	// addi r9,r1,3456
	ctx.r9.s64 = ctx.r1.s64 + 3456;
	// addi r10,r31,220
	ctx.r10.s64 = ctx.r31.s64 + 220;
	// li r11,3
	ctx.r11.s64 = 3;
loc_824537C8:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x824537c8
	if (!ctx.cr6.eq) goto loc_824537C8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24956
	ctx.r3.s64 = ctx.r11.s64 + 24956;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3456
	ctx.r4.s64 = ctx.r1.s64 + 3456;
	// bl 0x82448ef8
	ctx.lr = 0x82453800;
	sub_82448EF8(ctx, base);
	// addi r9,r1,4032
	ctx.r9.s64 = ctx.r1.s64 + 4032;
	// addi r10,r31,224
	ctx.r10.s64 = ctx.r31.s64 + 224;
	// li r11,3
	ctx.r11.s64 = 3;
loc_8245380C:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x8245380c
	if (!ctx.cr6.eq) goto loc_8245380C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24940
	ctx.r3.s64 = ctx.r11.s64 + 24940;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4032
	ctx.r4.s64 = ctx.r1.s64 + 4032;
	// bl 0x82448ef8
	ctx.lr = 0x82453844;
	sub_82448EF8(ctx, base);
	// addi r9,r1,3488
	ctx.r9.s64 = ctx.r1.s64 + 3488;
	// addi r10,r31,228
	ctx.r10.s64 = ctx.r31.s64 + 228;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82453850:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82453850
	if (!ctx.cr6.eq) goto loc_82453850;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24920
	ctx.r3.s64 = ctx.r11.s64 + 24920;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3488
	ctx.r4.s64 = ctx.r1.s64 + 3488;
	// bl 0x82448ef8
	ctx.lr = 0x82453888;
	sub_82448EF8(ctx, base);
	// addi r9,r1,4320
	ctx.r9.s64 = ctx.r1.s64 + 4320;
	// addi r10,r31,232
	ctx.r10.s64 = ctx.r31.s64 + 232;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82453894:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82453894
	if (!ctx.cr6.eq) goto loc_82453894;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24904
	ctx.r3.s64 = ctx.r11.s64 + 24904;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4320
	ctx.r4.s64 = ctx.r1.s64 + 4320;
	// bl 0x82448ef8
	ctx.lr = 0x824538CC;
	sub_82448EF8(ctx, base);
	// addi r9,r1,3520
	ctx.r9.s64 = ctx.r1.s64 + 3520;
	// addi r10,r31,236
	ctx.r10.s64 = ctx.r31.s64 + 236;
	// li r11,3
	ctx.r11.s64 = 3;
loc_824538D8:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x824538d8
	if (!ctx.cr6.eq) goto loc_824538D8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24888
	ctx.r3.s64 = ctx.r11.s64 + 24888;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3520
	ctx.r4.s64 = ctx.r1.s64 + 3520;
	// bl 0x82448ef8
	ctx.lr = 0x82453910;
	sub_82448EF8(ctx, base);
	// addi r9,r1,2912
	ctx.r9.s64 = ctx.r1.s64 + 2912;
	// addi r10,r31,240
	ctx.r10.s64 = ctx.r31.s64 + 240;
	// li r11,3
	ctx.r11.s64 = 3;
loc_8245391C:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x8245391c
	if (!ctx.cr6.eq) goto loc_8245391C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24868
	ctx.r3.s64 = ctx.r11.s64 + 24868;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,2912
	ctx.r4.s64 = ctx.r1.s64 + 2912;
	// bl 0x82448ef8
	ctx.lr = 0x82453954;
	sub_82448EF8(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r10,r1,2912
	ctx.r10.s64 = ctx.r1.s64 + 2912;
	// li r11,3
	ctx.r11.s64 = 3;
	// lfs f31,4672(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4672);
	ctx.f31.f64 = double(temp.f32);
loc_82453964:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// bne cr6,0x82453964
	if (!ctx.cr6.eq) goto loc_82453964;
	// addi r9,r1,4064
	ctx.r9.s64 = ctx.r1.s64 + 4064;
	// addi r10,r31,244
	ctx.r10.s64 = ctx.r31.s64 + 244;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82453990:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82453990
	if (!ctx.cr6.eq) goto loc_82453990;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24844
	ctx.r3.s64 = ctx.r11.s64 + 24844;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4064
	ctx.r4.s64 = ctx.r1.s64 + 4064;
	// bl 0x82448ef8
	ctx.lr = 0x824539C8;
	sub_82448EF8(ctx, base);
	// addi r9,r1,2928
	ctx.r9.s64 = ctx.r1.s64 + 2928;
	// addi r10,r31,248
	ctx.r10.s64 = ctx.r31.s64 + 248;
	// li r11,3
	ctx.r11.s64 = 3;
loc_824539D4:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x824539d4
	if (!ctx.cr6.eq) goto loc_824539D4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24816
	ctx.r3.s64 = ctx.r11.s64 + 24816;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,2928
	ctx.r4.s64 = ctx.r1.s64 + 2928;
	// bl 0x82448ef8
	ctx.lr = 0x82453A0C;
	sub_82448EF8(ctx, base);
	// addi r10,r1,2928
	ctx.r10.s64 = ctx.r1.s64 + 2928;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82453A14:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// bne cr6,0x82453a14
	if (!ctx.cr6.eq) goto loc_82453A14;
	// addi r9,r1,3552
	ctx.r9.s64 = ctx.r1.s64 + 3552;
	// addi r10,r31,252
	ctx.r10.s64 = ctx.r31.s64 + 252;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82453A40:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82453a40
	if (!ctx.cr6.eq) goto loc_82453A40;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24796
	ctx.r3.s64 = ctx.r11.s64 + 24796;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3552
	ctx.r4.s64 = ctx.r1.s64 + 3552;
	// bl 0x82449080
	ctx.lr = 0x82453A78;
	sub_82449080(ctx, base);
	// addi r9,r1,4576
	ctx.r9.s64 = ctx.r1.s64 + 4576;
	// addi r10,r31,256
	ctx.r10.s64 = ctx.r31.s64 + 256;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82453A84:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82453a84
	if (!ctx.cr6.eq) goto loc_82453A84;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24776
	ctx.r3.s64 = ctx.r11.s64 + 24776;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4576
	ctx.r4.s64 = ctx.r1.s64 + 4576;
	// bl 0x82449080
	ctx.lr = 0x82453ABC;
	sub_82449080(ctx, base);
	// addi r9,r1,3584
	ctx.r9.s64 = ctx.r1.s64 + 3584;
	// addi r10,r31,260
	ctx.r10.s64 = ctx.r31.s64 + 260;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82453AC8:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82453ac8
	if (!ctx.cr6.eq) goto loc_82453AC8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24752
	ctx.r3.s64 = ctx.r11.s64 + 24752;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3584
	ctx.r4.s64 = ctx.r1.s64 + 3584;
	// bl 0x82448ef8
	ctx.lr = 0x82453B00;
	sub_82448EF8(ctx, base);
	// addi r9,r1,4096
	ctx.r9.s64 = ctx.r1.s64 + 4096;
	// addi r10,r31,264
	ctx.r10.s64 = ctx.r31.s64 + 264;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82453B0C:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82453b0c
	if (!ctx.cr6.eq) goto loc_82453B0C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24732
	ctx.r3.s64 = ctx.r11.s64 + 24732;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4096
	ctx.r4.s64 = ctx.r1.s64 + 4096;
	// bl 0x82448ef8
	ctx.lr = 0x82453B44;
	sub_82448EF8(ctx, base);
	// addi r9,r1,3616
	ctx.r9.s64 = ctx.r1.s64 + 3616;
	// addi r10,r31,268
	ctx.r10.s64 = ctx.r31.s64 + 268;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82453B50:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82453b50
	if (!ctx.cr6.eq) goto loc_82453B50;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24720
	ctx.r3.s64 = ctx.r11.s64 + 24720;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3616
	ctx.r4.s64 = ctx.r1.s64 + 3616;
	// bl 0x82448ef8
	ctx.lr = 0x82453B88;
	sub_82448EF8(ctx, base);
	// addi r9,r1,4352
	ctx.r9.s64 = ctx.r1.s64 + 4352;
	// addi r10,r31,276
	ctx.r10.s64 = ctx.r31.s64 + 276;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82453B94:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82453b94
	if (!ctx.cr6.eq) goto loc_82453B94;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24696
	ctx.r3.s64 = ctx.r11.s64 + 24696;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4352
	ctx.r4.s64 = ctx.r1.s64 + 4352;
	// bl 0x82448ef8
	ctx.lr = 0x82453BCC;
	sub_82448EF8(ctx, base);
	// addi r9,r1,3648
	ctx.r9.s64 = ctx.r1.s64 + 3648;
	// addi r10,r31,272
	ctx.r10.s64 = ctx.r31.s64 + 272;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82453BD8:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82453bd8
	if (!ctx.cr6.eq) goto loc_82453BD8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24676
	ctx.r3.s64 = ctx.r11.s64 + 24676;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3648
	ctx.r4.s64 = ctx.r1.s64 + 3648;
	// bl 0x82448ef8
	ctx.lr = 0x82453C10;
	sub_82448EF8(ctx, base);
	// addi r9,r1,4128
	ctx.r9.s64 = ctx.r1.s64 + 4128;
	// addi r10,r31,280
	ctx.r10.s64 = ctx.r31.s64 + 280;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82453C1C:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82453c1c
	if (!ctx.cr6.eq) goto loc_82453C1C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24644
	ctx.r3.s64 = ctx.r11.s64 + 24644;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4128
	ctx.r4.s64 = ctx.r1.s64 + 4128;
	// bl 0x82448ef8
	ctx.lr = 0x82453C54;
	sub_82448EF8(ctx, base);
	// addi r9,r1,3680
	ctx.r9.s64 = ctx.r1.s64 + 3680;
	// addi r10,r31,284
	ctx.r10.s64 = ctx.r31.s64 + 284;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82453C60:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82453c60
	if (!ctx.cr6.eq) goto loc_82453C60;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24624
	ctx.r3.s64 = ctx.r11.s64 + 24624;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3680
	ctx.r4.s64 = ctx.r1.s64 + 3680;
	// bl 0x82448ef8
	ctx.lr = 0x82453C98;
	sub_82448EF8(ctx, base);
	// addi r9,r1,4480
	ctx.r9.s64 = ctx.r1.s64 + 4480;
	// addi r10,r31,288
	ctx.r10.s64 = ctx.r31.s64 + 288;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82453CA4:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82453ca4
	if (!ctx.cr6.eq) goto loc_82453CA4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24604
	ctx.r3.s64 = ctx.r11.s64 + 24604;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4480
	ctx.r4.s64 = ctx.r1.s64 + 4480;
	// bl 0x82448ef8
	ctx.lr = 0x82453CDC;
	sub_82448EF8(ctx, base);
	// addi r9,r1,3712
	ctx.r9.s64 = ctx.r1.s64 + 3712;
	// addi r10,r31,292
	ctx.r10.s64 = ctx.r31.s64 + 292;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82453CE8:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82453ce8
	if (!ctx.cr6.eq) goto loc_82453CE8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24588
	ctx.r3.s64 = ctx.r11.s64 + 24588;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3712
	ctx.r4.s64 = ctx.r1.s64 + 3712;
	// bl 0x82448ef8
	ctx.lr = 0x82453D20;
	sub_82448EF8(ctx, base);
	// addi r9,r1,4160
	ctx.r9.s64 = ctx.r1.s64 + 4160;
	// addi r10,r31,296
	ctx.r10.s64 = ctx.r31.s64 + 296;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82453D2C:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82453d2c
	if (!ctx.cr6.eq) goto loc_82453D2C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24572
	ctx.r3.s64 = ctx.r11.s64 + 24572;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4160
	ctx.r4.s64 = ctx.r1.s64 + 4160;
	// bl 0x82449080
	ctx.lr = 0x82453D64;
	sub_82449080(ctx, base);
	// addi r9,r1,3744
	ctx.r9.s64 = ctx.r1.s64 + 3744;
	// addi r10,r31,300
	ctx.r10.s64 = ctx.r31.s64 + 300;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82453D70:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82453d70
	if (!ctx.cr6.eq) goto loc_82453D70;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24556
	ctx.r3.s64 = ctx.r11.s64 + 24556;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3744
	ctx.r4.s64 = ctx.r1.s64 + 3744;
	// bl 0x82449080
	ctx.lr = 0x82453DA8;
	sub_82449080(ctx, base);
	// addi r9,r1,4384
	ctx.r9.s64 = ctx.r1.s64 + 4384;
	// addi r10,r31,304
	ctx.r10.s64 = ctx.r31.s64 + 304;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82453DB4:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82453db4
	if (!ctx.cr6.eq) goto loc_82453DB4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24532
	ctx.r3.s64 = ctx.r11.s64 + 24532;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4384
	ctx.r4.s64 = ctx.r1.s64 + 4384;
	// bl 0x82448ef8
	ctx.lr = 0x82453DEC;
	sub_82448EF8(ctx, base);
	// addi r9,r1,3776
	ctx.r9.s64 = ctx.r1.s64 + 3776;
	// addi r10,r31,308
	ctx.r10.s64 = ctx.r31.s64 + 308;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82453DF8:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82453df8
	if (!ctx.cr6.eq) goto loc_82453DF8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24500
	ctx.r3.s64 = ctx.r11.s64 + 24500;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3776
	ctx.r4.s64 = ctx.r1.s64 + 3776;
	// bl 0x82448ef8
	ctx.lr = 0x82453E30;
	sub_82448EF8(ctx, base);
	// addi r9,r1,4192
	ctx.r9.s64 = ctx.r1.s64 + 4192;
	// addi r10,r31,312
	ctx.r10.s64 = ctx.r31.s64 + 312;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82453E3C:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82453e3c
	if (!ctx.cr6.eq) goto loc_82453E3C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24480
	ctx.r3.s64 = ctx.r11.s64 + 24480;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4192
	ctx.r4.s64 = ctx.r1.s64 + 4192;
	// bl 0x82448ef8
	ctx.lr = 0x82453E74;
	sub_82448EF8(ctx, base);
	// addi r9,r1,3808
	ctx.r9.s64 = ctx.r1.s64 + 3808;
	// addi r10,r31,316
	ctx.r10.s64 = ctx.r31.s64 + 316;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82453E80:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82453e80
	if (!ctx.cr6.eq) goto loc_82453E80;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24460
	ctx.r3.s64 = ctx.r11.s64 + 24460;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3808
	ctx.r4.s64 = ctx.r1.s64 + 3808;
	// bl 0x82448ef8
	ctx.lr = 0x82453EB8;
	sub_82448EF8(ctx, base);
	// addi r9,r1,4544
	ctx.r9.s64 = ctx.r1.s64 + 4544;
	// addi r10,r31,320
	ctx.r10.s64 = ctx.r31.s64 + 320;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82453EC4:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82453ec4
	if (!ctx.cr6.eq) goto loc_82453EC4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24448
	ctx.r3.s64 = ctx.r11.s64 + 24448;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4544
	ctx.r4.s64 = ctx.r1.s64 + 4544;
	// bl 0x82448ef8
	ctx.lr = 0x82453EFC;
	sub_82448EF8(ctx, base);
	// addi r9,r1,3840
	ctx.r9.s64 = ctx.r1.s64 + 3840;
	// addi r10,r31,324
	ctx.r10.s64 = ctx.r31.s64 + 324;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82453F08:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82453f08
	if (!ctx.cr6.eq) goto loc_82453F08;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24432
	ctx.r3.s64 = ctx.r11.s64 + 24432;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3840
	ctx.r4.s64 = ctx.r1.s64 + 3840;
	// bl 0x82448ef8
	ctx.lr = 0x82453F40;
	sub_82448EF8(ctx, base);
	// addi r9,r1,4224
	ctx.r9.s64 = ctx.r1.s64 + 4224;
	// addi r10,r31,328
	ctx.r10.s64 = ctx.r31.s64 + 328;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82453F4C:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82453f4c
	if (!ctx.cr6.eq) goto loc_82453F4C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24412
	ctx.r3.s64 = ctx.r11.s64 + 24412;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4224
	ctx.r4.s64 = ctx.r1.s64 + 4224;
	// bl 0x82448ef8
	ctx.lr = 0x82453F84;
	sub_82448EF8(ctx, base);
	// addi r9,r1,3872
	ctx.r9.s64 = ctx.r1.s64 + 3872;
	// addi r10,r31,332
	ctx.r10.s64 = ctx.r31.s64 + 332;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82453F90:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82453f90
	if (!ctx.cr6.eq) goto loc_82453F90;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24392
	ctx.r3.s64 = ctx.r11.s64 + 24392;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3872
	ctx.r4.s64 = ctx.r1.s64 + 3872;
	// bl 0x82448ef8
	ctx.lr = 0x82453FC8;
	sub_82448EF8(ctx, base);
	// addi r9,r1,4416
	ctx.r9.s64 = ctx.r1.s64 + 4416;
	// addi r10,r31,336
	ctx.r10.s64 = ctx.r31.s64 + 336;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82453FD4:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82453fd4
	if (!ctx.cr6.eq) goto loc_82453FD4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24368
	ctx.r3.s64 = ctx.r11.s64 + 24368;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4416
	ctx.r4.s64 = ctx.r1.s64 + 4416;
	// bl 0x82448ef8
	ctx.lr = 0x8245400C;
	sub_82448EF8(ctx, base);
	// addi r9,r1,3904
	ctx.r9.s64 = ctx.r1.s64 + 3904;
	// addi r10,r31,340
	ctx.r10.s64 = ctx.r31.s64 + 340;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82454018:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82454018
	if (!ctx.cr6.eq) goto loc_82454018;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24344
	ctx.r3.s64 = ctx.r11.s64 + 24344;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3904
	ctx.r4.s64 = ctx.r1.s64 + 3904;
	// bl 0x82448ef8
	ctx.lr = 0x82454050;
	sub_82448EF8(ctx, base);
	// addi r9,r1,4256
	ctx.r9.s64 = ctx.r1.s64 + 4256;
	// addi r10,r31,344
	ctx.r10.s64 = ctx.r31.s64 + 344;
	// li r11,3
	ctx.r11.s64 = 3;
loc_8245405C:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x8245405c
	if (!ctx.cr6.eq) goto loc_8245405C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24308
	ctx.r3.s64 = ctx.r11.s64 + 24308;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4256
	ctx.r4.s64 = ctx.r1.s64 + 4256;
	// bl 0x82448ef8
	ctx.lr = 0x82454094;
	sub_82448EF8(ctx, base);
	// addi r9,r1,3936
	ctx.r9.s64 = ctx.r1.s64 + 3936;
	// addi r10,r31,348
	ctx.r10.s64 = ctx.r31.s64 + 348;
	// li r11,3
	ctx.r11.s64 = 3;
loc_824540A0:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x824540a0
	if (!ctx.cr6.eq) goto loc_824540A0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24276
	ctx.r3.s64 = ctx.r11.s64 + 24276;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3936
	ctx.r4.s64 = ctx.r1.s64 + 3936;
	// bl 0x82448ef8
	ctx.lr = 0x824540D8;
	sub_82448EF8(ctx, base);
	// addi r9,r1,2944
	ctx.r9.s64 = ctx.r1.s64 + 2944;
	// addi r10,r31,352
	ctx.r10.s64 = ctx.r31.s64 + 352;
	// li r11,3
	ctx.r11.s64 = 3;
loc_824540E4:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x824540e4
	if (!ctx.cr6.eq) goto loc_824540E4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24244
	ctx.r3.s64 = ctx.r11.s64 + 24244;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,2944
	ctx.r4.s64 = ctx.r1.s64 + 2944;
	// bl 0x82448ef8
	ctx.lr = 0x8245411C;
	sub_82448EF8(ctx, base);
	// addi r10,r1,2944
	ctx.r10.s64 = ctx.r1.s64 + 2944;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82454124:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// bne cr6,0x82454124
	if (!ctx.cr6.eq) goto loc_82454124;
	// addi r9,r1,2960
	ctx.r9.s64 = ctx.r1.s64 + 2960;
	// addi r10,r31,356
	ctx.r10.s64 = ctx.r31.s64 + 356;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82454150:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82454150
	if (!ctx.cr6.eq) goto loc_82454150;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24212
	ctx.r3.s64 = ctx.r11.s64 + 24212;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,2960
	ctx.r4.s64 = ctx.r1.s64 + 2960;
	// bl 0x82448ef8
	ctx.lr = 0x82454188;
	sub_82448EF8(ctx, base);
	// addi r10,r1,2960
	ctx.r10.s64 = ctx.r1.s64 + 2960;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82454190:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// bne cr6,0x82454190
	if (!ctx.cr6.eq) goto loc_82454190;
	// addi r9,r1,4512
	ctx.r9.s64 = ctx.r1.s64 + 4512;
	// addi r10,r31,360
	ctx.r10.s64 = ctx.r31.s64 + 360;
	// li r11,3
	ctx.r11.s64 = 3;
loc_824541BC:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x824541bc
	if (!ctx.cr6.eq) goto loc_824541BC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24196
	ctx.r3.s64 = ctx.r11.s64 + 24196;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4512
	ctx.r4.s64 = ctx.r1.s64 + 4512;
	// bl 0x82448ef8
	ctx.lr = 0x824541F4;
	sub_82448EF8(ctx, base);
	// addi r9,r1,3968
	ctx.r9.s64 = ctx.r1.s64 + 3968;
	// addi r10,r31,364
	ctx.r10.s64 = ctx.r31.s64 + 364;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82454200:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82454200
	if (!ctx.cr6.eq) goto loc_82454200;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24172
	ctx.r3.s64 = ctx.r11.s64 + 24172;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3968
	ctx.r4.s64 = ctx.r1.s64 + 3968;
	// bl 0x82448ef8
	ctx.lr = 0x82454238;
	sub_82448EF8(ctx, base);
	// addi r9,r1,3360
	ctx.r9.s64 = ctx.r1.s64 + 3360;
	// addi r10,r31,368
	ctx.r10.s64 = ctx.r31.s64 + 368;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82454244:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82454244
	if (!ctx.cr6.eq) goto loc_82454244;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24144
	ctx.r3.s64 = ctx.r11.s64 + 24144;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3360
	ctx.r4.s64 = ctx.r1.s64 + 3360;
	// bl 0x82448ef8
	ctx.lr = 0x8245427C;
	sub_82448EF8(ctx, base);
	// addi r9,r1,3376
	ctx.r9.s64 = ctx.r1.s64 + 3376;
	// addi r10,r31,372
	ctx.r10.s64 = ctx.r31.s64 + 372;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82454288:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82454288
	if (!ctx.cr6.eq) goto loc_82454288;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24116
	ctx.r3.s64 = ctx.r11.s64 + 24116;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3376
	ctx.r4.s64 = ctx.r1.s64 + 3376;
	// bl 0x82448ef8
	ctx.lr = 0x824542C0;
	sub_82448EF8(ctx, base);
	// addi r9,r1,3408
	ctx.r9.s64 = ctx.r1.s64 + 3408;
	// addi r10,r31,376
	ctx.r10.s64 = ctx.r31.s64 + 376;
	// li r11,3
	ctx.r11.s64 = 3;
loc_824542CC:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x824542cc
	if (!ctx.cr6.eq) goto loc_824542CC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24092
	ctx.r3.s64 = ctx.r11.s64 + 24092;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3408
	ctx.r4.s64 = ctx.r1.s64 + 3408;
	// bl 0x82448ef8
	ctx.lr = 0x82454304;
	sub_82448EF8(ctx, base);
	// addi r9,r1,3440
	ctx.r9.s64 = ctx.r1.s64 + 3440;
	// addi r10,r31,380
	ctx.r10.s64 = ctx.r31.s64 + 380;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82454310:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82454310
	if (!ctx.cr6.eq) goto loc_82454310;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24076
	ctx.r3.s64 = ctx.r11.s64 + 24076;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3440
	ctx.r4.s64 = ctx.r1.s64 + 3440;
	// bl 0x82448ef8
	ctx.lr = 0x82454348;
	sub_82448EF8(ctx, base);
	// addi r9,r1,3472
	ctx.r9.s64 = ctx.r1.s64 + 3472;
	// addi r10,r31,384
	ctx.r10.s64 = ctx.r31.s64 + 384;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82454354:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82454354
	if (!ctx.cr6.eq) goto loc_82454354;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24056
	ctx.r3.s64 = ctx.r11.s64 + 24056;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3472
	ctx.r4.s64 = ctx.r1.s64 + 3472;
	// bl 0x82448ef8
	ctx.lr = 0x8245438C;
	sub_82448EF8(ctx, base);
	// addi r9,r1,3504
	ctx.r9.s64 = ctx.r1.s64 + 3504;
	// addi r10,r31,388
	ctx.r10.s64 = ctx.r31.s64 + 388;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82454398:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82454398
	if (!ctx.cr6.eq) goto loc_82454398;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,24024
	ctx.r3.s64 = ctx.r11.s64 + 24024;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3504
	ctx.r4.s64 = ctx.r1.s64 + 3504;
	// bl 0x82448ef8
	ctx.lr = 0x824543D0;
	sub_82448EF8(ctx, base);
	// addi r9,r1,3536
	ctx.r9.s64 = ctx.r1.s64 + 3536;
	// addi r10,r31,392
	ctx.r10.s64 = ctx.r31.s64 + 392;
	// li r11,3
	ctx.r11.s64 = 3;
loc_824543DC:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x824543dc
	if (!ctx.cr6.eq) goto loc_824543DC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,23988
	ctx.r3.s64 = ctx.r11.s64 + 23988;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3536
	ctx.r4.s64 = ctx.r1.s64 + 3536;
	// bl 0x82448ef8
	ctx.lr = 0x82454414;
	sub_82448EF8(ctx, base);
	// addi r9,r1,3568
	ctx.r9.s64 = ctx.r1.s64 + 3568;
	// addi r10,r31,396
	ctx.r10.s64 = ctx.r31.s64 + 396;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82454420:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82454420
	if (!ctx.cr6.eq) goto loc_82454420;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,23952
	ctx.r3.s64 = ctx.r11.s64 + 23952;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3568
	ctx.r4.s64 = ctx.r1.s64 + 3568;
	// bl 0x82448ef8
	ctx.lr = 0x82454458;
	sub_82448EF8(ctx, base);
	// addi r9,r1,3600
	ctx.r9.s64 = ctx.r1.s64 + 3600;
	// addi r10,r31,400
	ctx.r10.s64 = ctx.r31.s64 + 400;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82454464:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82454464
	if (!ctx.cr6.eq) goto loc_82454464;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,23920
	ctx.r3.s64 = ctx.r11.s64 + 23920;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3600
	ctx.r4.s64 = ctx.r1.s64 + 3600;
	// bl 0x82448ef8
	ctx.lr = 0x8245449C;
	sub_82448EF8(ctx, base);
	// addi r9,r1,3632
	ctx.r9.s64 = ctx.r1.s64 + 3632;
	// addi r10,r31,404
	ctx.r10.s64 = ctx.r31.s64 + 404;
	// li r11,3
	ctx.r11.s64 = 3;
loc_824544A8:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x824544a8
	if (!ctx.cr6.eq) goto loc_824544A8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,23888
	ctx.r3.s64 = ctx.r11.s64 + 23888;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3632
	ctx.r4.s64 = ctx.r1.s64 + 3632;
	// bl 0x82448ef8
	ctx.lr = 0x824544E0;
	sub_82448EF8(ctx, base);
	// addi r9,r1,3664
	ctx.r9.s64 = ctx.r1.s64 + 3664;
	// addi r10,r31,408
	ctx.r10.s64 = ctx.r31.s64 + 408;
	// li r11,3
	ctx.r11.s64 = 3;
loc_824544EC:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x824544ec
	if (!ctx.cr6.eq) goto loc_824544EC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,23860
	ctx.r3.s64 = ctx.r11.s64 + 23860;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3664
	ctx.r4.s64 = ctx.r1.s64 + 3664;
	// bl 0x82448ef8
	ctx.lr = 0x82454524;
	sub_82448EF8(ctx, base);
	// addi r9,r1,3696
	ctx.r9.s64 = ctx.r1.s64 + 3696;
	// addi r10,r31,412
	ctx.r10.s64 = ctx.r31.s64 + 412;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82454530:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82454530
	if (!ctx.cr6.eq) goto loc_82454530;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,23832
	ctx.r3.s64 = ctx.r11.s64 + 23832;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3696
	ctx.r4.s64 = ctx.r1.s64 + 3696;
	// bl 0x82448ef8
	ctx.lr = 0x82454568;
	sub_82448EF8(ctx, base);
	// addi r9,r1,3728
	ctx.r9.s64 = ctx.r1.s64 + 3728;
	// addi r10,r31,416
	ctx.r10.s64 = ctx.r31.s64 + 416;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82454574:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82454574
	if (!ctx.cr6.eq) goto loc_82454574;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,23804
	ctx.r3.s64 = ctx.r11.s64 + 23804;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3728
	ctx.r4.s64 = ctx.r1.s64 + 3728;
	// bl 0x82448ef8
	ctx.lr = 0x824545AC;
	sub_82448EF8(ctx, base);
	// addi r9,r1,3760
	ctx.r9.s64 = ctx.r1.s64 + 3760;
	// addi r10,r31,420
	ctx.r10.s64 = ctx.r31.s64 + 420;
	// li r11,3
	ctx.r11.s64 = 3;
loc_824545B8:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x824545b8
	if (!ctx.cr6.eq) goto loc_824545B8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,23776
	ctx.r3.s64 = ctx.r11.s64 + 23776;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3760
	ctx.r4.s64 = ctx.r1.s64 + 3760;
	// bl 0x82448ef8
	ctx.lr = 0x824545F0;
	sub_82448EF8(ctx, base);
	// addi r9,r1,3792
	ctx.r9.s64 = ctx.r1.s64 + 3792;
	// addi r10,r31,424
	ctx.r10.s64 = ctx.r31.s64 + 424;
	// li r11,3
	ctx.r11.s64 = 3;
loc_824545FC:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x824545fc
	if (!ctx.cr6.eq) goto loc_824545FC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,23768
	ctx.r3.s64 = ctx.r11.s64 + 23768;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3792
	ctx.r4.s64 = ctx.r1.s64 + 3792;
	// bl 0x82448ef8
	ctx.lr = 0x82454634;
	sub_82448EF8(ctx, base);
	// addi r9,r1,3824
	ctx.r9.s64 = ctx.r1.s64 + 3824;
	// addi r10,r31,428
	ctx.r10.s64 = ctx.r31.s64 + 428;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82454640:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82454640
	if (!ctx.cr6.eq) goto loc_82454640;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,23752
	ctx.r3.s64 = ctx.r11.s64 + 23752;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3824
	ctx.r4.s64 = ctx.r1.s64 + 3824;
	// bl 0x82448ef8
	ctx.lr = 0x82454678;
	sub_82448EF8(ctx, base);
	// addi r9,r1,3856
	ctx.r9.s64 = ctx.r1.s64 + 3856;
	// addi r10,r31,432
	ctx.r10.s64 = ctx.r31.s64 + 432;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82454684:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82454684
	if (!ctx.cr6.eq) goto loc_82454684;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,23728
	ctx.r3.s64 = ctx.r11.s64 + 23728;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3856
	ctx.r4.s64 = ctx.r1.s64 + 3856;
	// bl 0x82448ef8
	ctx.lr = 0x824546BC;
	sub_82448EF8(ctx, base);
	// addi r9,r1,3888
	ctx.r9.s64 = ctx.r1.s64 + 3888;
	// addi r10,r31,436
	ctx.r10.s64 = ctx.r31.s64 + 436;
	// li r11,3
	ctx.r11.s64 = 3;
loc_824546C8:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x824546c8
	if (!ctx.cr6.eq) goto loc_824546C8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,23708
	ctx.r3.s64 = ctx.r11.s64 + 23708;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3888
	ctx.r4.s64 = ctx.r1.s64 + 3888;
	// bl 0x82448ef8
	ctx.lr = 0x82454700;
	sub_82448EF8(ctx, base);
	// addi r9,r1,3920
	ctx.r9.s64 = ctx.r1.s64 + 3920;
	// addi r10,r31,440
	ctx.r10.s64 = ctx.r31.s64 + 440;
	// li r11,3
	ctx.r11.s64 = 3;
loc_8245470C:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x8245470c
	if (!ctx.cr6.eq) goto loc_8245470C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,23688
	ctx.r3.s64 = ctx.r11.s64 + 23688;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3920
	ctx.r4.s64 = ctx.r1.s64 + 3920;
	// bl 0x82448ef8
	ctx.lr = 0x82454744;
	sub_82448EF8(ctx, base);
	// addi r9,r1,3952
	ctx.r9.s64 = ctx.r1.s64 + 3952;
	// addi r10,r31,444
	ctx.r10.s64 = ctx.r31.s64 + 444;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82454750:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82454750
	if (!ctx.cr6.eq) goto loc_82454750;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,23660
	ctx.r3.s64 = ctx.r11.s64 + 23660;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3952
	ctx.r4.s64 = ctx.r1.s64 + 3952;
	// bl 0x82448ef8
	ctx.lr = 0x82454788;
	sub_82448EF8(ctx, base);
	// addi r9,r1,3984
	ctx.r9.s64 = ctx.r1.s64 + 3984;
	// addi r10,r31,448
	ctx.r10.s64 = ctx.r31.s64 + 448;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82454794:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82454794
	if (!ctx.cr6.eq) goto loc_82454794;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,23640
	ctx.r3.s64 = ctx.r11.s64 + 23640;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,3984
	ctx.r4.s64 = ctx.r1.s64 + 3984;
	// bl 0x82448ef8
	ctx.lr = 0x824547CC;
	sub_82448EF8(ctx, base);
	// addi r9,r1,4016
	ctx.r9.s64 = ctx.r1.s64 + 4016;
	// addi r10,r31,452
	ctx.r10.s64 = ctx.r31.s64 + 452;
	// li r11,3
	ctx.r11.s64 = 3;
loc_824547D8:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x824547d8
	if (!ctx.cr6.eq) goto loc_824547D8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,23624
	ctx.r3.s64 = ctx.r11.s64 + 23624;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4016
	ctx.r4.s64 = ctx.r1.s64 + 4016;
	// bl 0x82448ef8
	ctx.lr = 0x82454810;
	sub_82448EF8(ctx, base);
	// addi r9,r1,4048
	ctx.r9.s64 = ctx.r1.s64 + 4048;
	// addi r10,r31,456
	ctx.r10.s64 = ctx.r31.s64 + 456;
	// li r11,3
	ctx.r11.s64 = 3;
loc_8245481C:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x8245481c
	if (!ctx.cr6.eq) goto loc_8245481C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,23600
	ctx.r3.s64 = ctx.r11.s64 + 23600;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4048
	ctx.r4.s64 = ctx.r1.s64 + 4048;
	// bl 0x82448ef8
	ctx.lr = 0x82454854;
	sub_82448EF8(ctx, base);
	// addi r9,r1,4080
	ctx.r9.s64 = ctx.r1.s64 + 4080;
	// addi r10,r31,460
	ctx.r10.s64 = ctx.r31.s64 + 460;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82454860:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82454860
	if (!ctx.cr6.eq) goto loc_82454860;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,23576
	ctx.r3.s64 = ctx.r11.s64 + 23576;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4080
	ctx.r4.s64 = ctx.r1.s64 + 4080;
	// bl 0x82448ef8
	ctx.lr = 0x82454898;
	sub_82448EF8(ctx, base);
	// addi r9,r1,4112
	ctx.r9.s64 = ctx.r1.s64 + 4112;
	// addi r10,r31,464
	ctx.r10.s64 = ctx.r31.s64 + 464;
	// li r11,3
	ctx.r11.s64 = 3;
loc_824548A4:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x824548a4
	if (!ctx.cr6.eq) goto loc_824548A4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,23552
	ctx.r3.s64 = ctx.r11.s64 + 23552;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4112
	ctx.r4.s64 = ctx.r1.s64 + 4112;
	// bl 0x82448ef8
	ctx.lr = 0x824548DC;
	sub_82448EF8(ctx, base);
	// addi r9,r1,4144
	ctx.r9.s64 = ctx.r1.s64 + 4144;
	// addi r10,r31,468
	ctx.r10.s64 = ctx.r31.s64 + 468;
	// li r11,3
	ctx.r11.s64 = 3;
loc_824548E8:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x824548e8
	if (!ctx.cr6.eq) goto loc_824548E8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,23528
	ctx.r3.s64 = ctx.r11.s64 + 23528;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4144
	ctx.r4.s64 = ctx.r1.s64 + 4144;
	// bl 0x82448ef8
	ctx.lr = 0x82454920;
	sub_82448EF8(ctx, base);
	// addi r9,r1,4176
	ctx.r9.s64 = ctx.r1.s64 + 4176;
	// addi r10,r31,472
	ctx.r10.s64 = ctx.r31.s64 + 472;
	// li r11,3
	ctx.r11.s64 = 3;
loc_8245492C:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x8245492c
	if (!ctx.cr6.eq) goto loc_8245492C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4176
	ctx.r4.s64 = ctx.r1.s64 + 4176;
	// bl 0x82448ef8
	ctx.lr = 0x82454964;
	sub_82448EF8(ctx, base);
	// addi r9,r1,4208
	ctx.r9.s64 = ctx.r1.s64 + 4208;
	// addi r10,r31,476
	ctx.r10.s64 = ctx.r31.s64 + 476;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82454970:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82454970
	if (!ctx.cr6.eq) goto loc_82454970;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,23472
	ctx.r3.s64 = ctx.r11.s64 + 23472;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4208
	ctx.r4.s64 = ctx.r1.s64 + 4208;
	// bl 0x82448ef8
	ctx.lr = 0x824549A8;
	sub_82448EF8(ctx, base);
	// addi r9,r1,4240
	ctx.r9.s64 = ctx.r1.s64 + 4240;
	// addi r10,r31,480
	ctx.r10.s64 = ctx.r31.s64 + 480;
	// li r11,3
	ctx.r11.s64 = 3;
loc_824549B4:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x824549b4
	if (!ctx.cr6.eq) goto loc_824549B4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,23444
	ctx.r3.s64 = ctx.r11.s64 + 23444;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4240
	ctx.r4.s64 = ctx.r1.s64 + 4240;
	// bl 0x82448ef8
	ctx.lr = 0x824549EC;
	sub_82448EF8(ctx, base);
	// addi r9,r1,4272
	ctx.r9.s64 = ctx.r1.s64 + 4272;
	// addi r10,r31,484
	ctx.r10.s64 = ctx.r31.s64 + 484;
	// li r11,3
	ctx.r11.s64 = 3;
loc_824549F8:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x824549f8
	if (!ctx.cr6.eq) goto loc_824549F8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,23424
	ctx.r3.s64 = ctx.r11.s64 + 23424;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4272
	ctx.r4.s64 = ctx.r1.s64 + 4272;
	// bl 0x82448ef8
	ctx.lr = 0x82454A30;
	sub_82448EF8(ctx, base);
	// addi r9,r1,4304
	ctx.r9.s64 = ctx.r1.s64 + 4304;
	// addi r10,r31,488
	ctx.r10.s64 = ctx.r31.s64 + 488;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82454A3C:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82454a3c
	if (!ctx.cr6.eq) goto loc_82454A3C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,23412
	ctx.r3.s64 = ctx.r11.s64 + 23412;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4304
	ctx.r4.s64 = ctx.r1.s64 + 4304;
	// bl 0x82448ef8
	ctx.lr = 0x82454A74;
	sub_82448EF8(ctx, base);
	// addi r29,r31,492
	ctx.r29.s64 = ctx.r31.s64 + 492;
	// addi r9,r1,4336
	ctx.r9.s64 = ctx.r1.s64 + 4336;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82454A84:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82454a84
	if (!ctx.cr6.eq) goto loc_82454A84;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r28,r11,23384
	ctx.r28.s64 = ctx.r11.s64 + 23384;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4336
	ctx.r4.s64 = ctx.r1.s64 + 4336;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82448ef8
	ctx.lr = 0x82454AC0;
	sub_82448EF8(ctx, base);
	// addi r9,r1,4368
	ctx.r9.s64 = ctx.r1.s64 + 4368;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82454ACC:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82454acc
	if (!ctx.cr6.eq) goto loc_82454ACC;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4368
	ctx.r4.s64 = ctx.r1.s64 + 4368;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82448ef8
	ctx.lr = 0x82454B00;
	sub_82448EF8(ctx, base);
	// addi r9,r1,4400
	ctx.r9.s64 = ctx.r1.s64 + 4400;
	// addi r10,r31,496
	ctx.r10.s64 = ctx.r31.s64 + 496;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82454B0C:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82454b0c
	if (!ctx.cr6.eq) goto loc_82454B0C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,23352
	ctx.r3.s64 = ctx.r11.s64 + 23352;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4400
	ctx.r4.s64 = ctx.r1.s64 + 4400;
	// bl 0x82448ef8
	ctx.lr = 0x82454B44;
	sub_82448EF8(ctx, base);
	// addi r9,r1,4432
	ctx.r9.s64 = ctx.r1.s64 + 4432;
	// addi r10,r31,500
	ctx.r10.s64 = ctx.r31.s64 + 500;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82454B50:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82454b50
	if (!ctx.cr6.eq) goto loc_82454B50;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,23320
	ctx.r3.s64 = ctx.r11.s64 + 23320;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4432
	ctx.r4.s64 = ctx.r1.s64 + 4432;
	// bl 0x82448ef8
	ctx.lr = 0x82454B88;
	sub_82448EF8(ctx, base);
	// addi r9,r1,4464
	ctx.r9.s64 = ctx.r1.s64 + 4464;
	// addi r10,r31,504
	ctx.r10.s64 = ctx.r31.s64 + 504;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82454B94:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82454b94
	if (!ctx.cr6.eq) goto loc_82454B94;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,23280
	ctx.r3.s64 = ctx.r11.s64 + 23280;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4464
	ctx.r4.s64 = ctx.r1.s64 + 4464;
	// bl 0x82448ef8
	ctx.lr = 0x82454BCC;
	sub_82448EF8(ctx, base);
	// addi r9,r1,4496
	ctx.r9.s64 = ctx.r1.s64 + 4496;
	// addi r10,r31,508
	ctx.r10.s64 = ctx.r31.s64 + 508;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82454BD8:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82454bd8
	if (!ctx.cr6.eq) goto loc_82454BD8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,23244
	ctx.r3.s64 = ctx.r11.s64 + 23244;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4496
	ctx.r4.s64 = ctx.r1.s64 + 4496;
	// bl 0x82448ef8
	ctx.lr = 0x82454C10;
	sub_82448EF8(ctx, base);
	// addi r9,r1,2976
	ctx.r9.s64 = ctx.r1.s64 + 2976;
	// addi r10,r31,512
	ctx.r10.s64 = ctx.r31.s64 + 512;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82454C1C:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82454c1c
	if (!ctx.cr6.eq) goto loc_82454C1C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,23204
	ctx.r3.s64 = ctx.r11.s64 + 23204;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,2976
	ctx.r4.s64 = ctx.r1.s64 + 2976;
	// bl 0x82448ef8
	ctx.lr = 0x82454C54;
	sub_82448EF8(ctx, base);
	// addi r10,r1,2976
	ctx.r10.s64 = ctx.r1.s64 + 2976;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82454C5C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// bne cr6,0x82454c5c
	if (!ctx.cr6.eq) goto loc_82454C5C;
	// addi r9,r1,2992
	ctx.r9.s64 = ctx.r1.s64 + 2992;
	// addi r10,r31,516
	ctx.r10.s64 = ctx.r31.s64 + 516;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82454C88:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82454c88
	if (!ctx.cr6.eq) goto loc_82454C88;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,23164
	ctx.r3.s64 = ctx.r11.s64 + 23164;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,2992
	ctx.r4.s64 = ctx.r1.s64 + 2992;
	// bl 0x82448ef8
	ctx.lr = 0x82454CC0;
	sub_82448EF8(ctx, base);
	// addi r10,r1,2992
	ctx.r10.s64 = ctx.r1.s64 + 2992;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82454CC8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// bne cr6,0x82454cc8
	if (!ctx.cr6.eq) goto loc_82454CC8;
	// addi r9,r1,4528
	ctx.r9.s64 = ctx.r1.s64 + 4528;
	// addi r10,r31,520
	ctx.r10.s64 = ctx.r31.s64 + 520;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82454CF4:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x82454cf4
	if (!ctx.cr6.eq) goto loc_82454CF4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,23120
	ctx.r3.s64 = ctx.r11.s64 + 23120;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,4528
	ctx.r4.s64 = ctx.r1.s64 + 4528;
	// bl 0x82448ef8
	ctx.lr = 0x82454D2C;
	sub_82448EF8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,4564
	ctx.r4.s64 = ctx.r11.s64 + 4564;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82454D48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82454d5c
	if (ctx.cr6.eq) goto loc_82454D5C;
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// b 0x82454d60
	goto loc_82454D60;
loc_82454D5C:
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
loc_82454D60:
	// li r27,2
	ctx.r27.s64 = 2;
	// addi r28,r1,124
	ctx.r28.s64 = ctx.r1.s64 + 124;
loc_82454D68:
	// addi r28,r28,-8
	ctx.r28.s64 = ctx.r28.s64 + -8;
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82454dd8
	if (ctx.cr6.eq) goto loc_82454DD8;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82454d9c
	if (ctx.cr6.eq) goto loc_82454D9C;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// b 0x82454dd8
	goto loc_82454DD8;
loc_82454D9C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82454DB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82454dd8
	if (!ctx.cr6.eq) goto loc_82454DD8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82454DD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82454DD8:
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bge cr6,0x82454d68
	if (!ctx.cr6.lt) goto loc_82454D68;
	// lwz r29,164(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82454e58
	if (ctx.cr6.eq) goto loc_82454E58;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82454e1c
	if (ctx.cr6.eq) goto loc_82454E1C;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// b 0x82454e58
	goto loc_82454E58;
loc_82454E1C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82454E30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82454e58
	if (!ctx.cr6.eq) goto loc_82454E58;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82454E58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82454E58:
	// lwz r29,180(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82454ecc
	if (ctx.cr6.eq) goto loc_82454ECC;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82454e90
	if (ctx.cr6.eq) goto loc_82454E90;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// b 0x82454ecc
	goto loc_82454ECC;
loc_82454E90:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82454EA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82454ecc
	if (!ctx.cr6.eq) goto loc_82454ECC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82454ECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82454ECC:
	// lwz r29,196(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82454f40
	if (ctx.cr6.eq) goto loc_82454F40;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82454f04
	if (ctx.cr6.eq) goto loc_82454F04;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// b 0x82454f40
	goto loc_82454F40;
loc_82454F04:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82454F18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82454f40
	if (!ctx.cr6.eq) goto loc_82454F40;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82454F40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82454F40:
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r30,2244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2244, ctx.r30.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r30,2228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2228, ctx.r30.u8);
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r11,4056
	ctx.r4.s64 = ctx.r11.s64 + 4056;
	// addi r3,r1,2224
	ctx.r3.s64 = ctx.r1.s64 + 2224;
	// stw r28,2248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2248, ctx.r28.u32);
	// bl 0x82161e08
	ctx.lr = 0x82454F64;
	sub_82161E08(ctx, base);
	// addi r3,r1,3280
	ctx.r3.s64 = ctx.r1.s64 + 3280;
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x82391468
	ctx.lr = 0x82454F70;
	sub_82391468(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82454F84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,2224
	ctx.r5.s64 = ctx.r1.s64 + 2224;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82276a08
	ctx.lr = 0x82454F94;
	sub_82276A08(ctx, base);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// beq cr6,0x82454fac
	if (ctx.cr6.eq) goto loc_82454FAC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82659610
	ctx.lr = 0x82454FAC;
	sub_82659610(ctx, base);
loc_82454FAC:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r29,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r29.u32);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82454fc8
	if (ctx.cr6.eq) goto loc_82454FC8;
	// bl 0x82581e38
	ctx.lr = 0x82454FC8;
	sub_82581E38(ctx, base);
loc_82454FC8:
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82454fd8
	if (ctx.cr6.eq) goto loc_82454FD8;
	// bl 0x82581e38
	ctx.lr = 0x82454FD8;
	sub_82581E38(ctx, base);
loc_82454FD8:
	// lwz r29,3284(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3284);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8245504c
	if (ctx.cr6.eq) goto loc_8245504C;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82455010
	if (ctx.cr6.eq) goto loc_82455010;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// b 0x8245504c
	goto loc_8245504C;
loc_82455010:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82455024;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// bne cr6,0x8245504c
	if (!ctx.cr6.eq) goto loc_8245504C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245504C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8245504C:
	// lwz r11,2248(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2248);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82455060
	if (ctx.cr6.lt) goto loc_82455060;
	// lwz r3,2228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2228);
	// bl 0x82186190
	ctx.lr = 0x82455060;
	sub_82186190(ctx, base);
loc_82455060:
	// lwz r29,0(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// stw r28,2248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2248, ctx.r28.u32);
	// addi r5,r11,23100
	ctx.r5.s64 = ctx.r11.s64 + 23100;
	// stw r30,2244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2244, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r30,2228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2228, ctx.r30.u8);
	// bl 0x82295648
	ctx.lr = 0x82455084;
	sub_82295648(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// beq cr6,0x8245509c
	if (ctx.cr6.eq) goto loc_8245509C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x8245509C;
	sub_82659610(ctx, base);
loc_8245509C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824550b8
	if (ctx.cr6.eq) goto loc_824550B8;
	// bl 0x82581e38
	ctx.lr = 0x824550B8;
	sub_82581E38(ctx, base);
loc_824550B8:
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824550c8
	if (ctx.cr6.eq) goto loc_824550C8;
	// bl 0x82581e38
	ctx.lr = 0x824550C8;
	sub_82581E38(ctx, base);
loc_824550C8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,23080
	ctx.r5.s64 = ctx.r11.s64 + 23080;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82295648
	ctx.lr = 0x824550DC;
	sub_82295648(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// beq cr6,0x824550f4
	if (ctx.cr6.eq) goto loc_824550F4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x824550F4;
	sub_82659610(ctx, base);
loc_824550F4:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82455110
	if (ctx.cr6.eq) goto loc_82455110;
	// bl 0x82581e38
	ctx.lr = 0x82455110;
	sub_82581E38(ctx, base);
loc_82455110:
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82455120
	if (ctx.cr6.eq) goto loc_82455120;
	// bl 0x82581e38
	ctx.lr = 0x82455120;
	sub_82581E38(ctx, base);
loc_82455120:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,23056
	ctx.r5.s64 = ctx.r11.s64 + 23056;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82295648
	ctx.lr = 0x82455134;
	sub_82295648(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// beq cr6,0x8245514c
	if (ctx.cr6.eq) goto loc_8245514C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x8245514C;
	sub_82659610(ctx, base);
loc_8245514C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r30,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r30.u32);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82455168
	if (ctx.cr6.eq) goto loc_82455168;
	// bl 0x82581e38
	ctx.lr = 0x82455168;
	sub_82581E38(ctx, base);
loc_82455168:
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82455178
	if (ctx.cr6.eq) goto loc_82455178;
	// bl 0x82581e38
	ctx.lr = 0x82455178;
	sub_82581E38(ctx, base);
loc_82455178:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,23032
	ctx.r5.s64 = ctx.r11.s64 + 23032;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82295648
	ctx.lr = 0x8245518C;
	sub_82295648(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// beq cr6,0x824551a4
	if (ctx.cr6.eq) goto loc_824551A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x824551A4;
	sub_82659610(ctx, base);
loc_824551A4:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824551c0
	if (ctx.cr6.eq) goto loc_824551C0;
	// bl 0x82581e38
	ctx.lr = 0x824551C0;
	sub_82581E38(ctx, base);
loc_824551C0:
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824551d0
	if (ctx.cr6.eq) goto loc_824551D0;
	// bl 0x82581e38
	ctx.lr = 0x824551D0;
	sub_82581E38(ctx, base);
loc_824551D0:
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82455250
	if (ctx.cr6.eq) goto loc_82455250;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82455214
	if (ctx.cr6.eq) goto loc_82455214;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,4704
	ctx.r1.s64 = ctx.r1.s64 + 4704;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
loc_82455214:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82455228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82455250
	if (!ctx.cr6.eq) goto loc_82455250;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82455250;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82455250:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,4704
	ctx.r1.s64 = ctx.r1.s64 + 4704;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82455260"))) PPC_WEAK_FUNC(sub_82455260);
PPC_FUNC_IMPL(__imp__sub_82455260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82455268;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x825d3bc8
	ctx.lr = 0x82455290;
	sub_825D3BC8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825d3bc8
	ctx.lr = 0x824552A0;
	sub_825D3BC8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825d21e0
	ctx.lr = 0x824552AC;
	sub_825D21E0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x825d21e0
	ctx.lr = 0x824552BC;
	sub_825D21E0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fdivs f1,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f31.f64 / ctx.f1.f64));
	// stfs f1,0(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// bl 0x825d2350
	ctx.lr = 0x824552D0;
	sub_825D2350(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825d3bb0
	ctx.lr = 0x824552E0;
	sub_825D3BB0(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stvx v0,r0,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82455314
	if (ctx.cr6.lt) goto loc_82455314;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f13,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82455318
	if (!ctx.cr6.gt) goto loc_82455318;
loc_82455314:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82455318:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82455328"))) PPC_WEAK_FUNC(sub_82455328);
PPC_FUNC_IMPL(__imp__sub_82455328) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82618718
	sub_82618718(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82455330"))) PPC_WEAK_FUNC(sub_82455330);
PPC_FUNC_IMPL(__imp__sub_82455330) {
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
	// lwz r3,52(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82455358
	if (ctx.cr6.eq) goto loc_82455358;
	// bl 0x82659610
	ctx.lr = 0x82455358;
	sub_82659610(ctx, base);
loc_82455358:
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

__attribute__((alias("__imp__sub_82455370"))) PPC_WEAK_FUNC(sub_82455370);
PPC_FUNC_IMPL(__imp__sub_82455370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82455378;
	__savegprlr_28(ctx, base);
	// li r12,-64
	ctx.r12.s64 = -64;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824553A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x826188a8
	ctx.lr = 0x824553AC;
	sub_826188A8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82618808
	ctx.lr = 0x824553C0;
	sub_82618808(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82594160
	ctx.lr = 0x824553CC;
	sub_82594160(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltisw128 v127,0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u32, simde_mm_set1_epi32(int(0x0)));
	// vspltw v13,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// vspltw v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lvx128 v9,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// vupkd3d128 v10,v127,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v127.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v127.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v10 = vTemp;
	// lvx128 v8,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// vmaddfp v5,v8,v13,v9
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vspltw v13,v10,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x0));
	// lvx128 v7,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v6,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r11,r11,-4576
	ctx.r11.s64 = ctx.r11.s64 + -4576;
	// vmaddfp v12,v12,v7,v5
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// lvx128 v11,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vspltw v4,v11,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0x55));
	// vspltw v3,v11,1
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0xAA));
	// vmaddfp v4,v8,v4,v9
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// stvx v11,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v11,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0xFF));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vmaddfp v5,v0,v6,v12
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vor v0,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vspltw v10,v5,3
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), 0x0));
	// vrefp v12,v10
	simde_mm_store_ps(ctx.v12.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v10.f32)));
	// vnmsubfp v0,v10,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v12,v0,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vnmsubfp v13,v10,v0,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v10,v0,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vupkd3d128 v13,v127,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v127.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v127.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v13 = vTemp;
	// vspltw v13,v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x0));
	// vsel v10,v12,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmaddfp v0,v3,v7,v4
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vmulfp128 v12,v5,v10
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vmaddfp v10,v11,v6,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vor v0,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// stvx v12,r0,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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
	// lvx128 v0,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vmulfp128 v13,v10,v11
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vspltw v11,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v13,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// vupkd3d128 v0,v127,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v127.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v127.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vmaddfp v10,v8,v13,v9
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v12,v12,v7,v10
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vspltw v13,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x0));
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// vor v0,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vmaddfp v10,v11,v6,v12
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v12.f32)));
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
	// bl 0x825d3bc8
	ctx.lr = 0x82455508;
	sub_825D3BC8(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d22a0
	ctx.lr = 0x8245551C;
	sub_825D22A0(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v13,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// vspltw v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// vspltw v11,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// vupkd3d128 v0,v127,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v127.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v127.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// lvx128 v10,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v9,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// vmaddfp v10,v9,v13,v10
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vspltw v13,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x0));
	// lvx128 v8,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// vor v0,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// lvx128 v7,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// vmaddfp v12,v12,v8,v10
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vmaddfp v10,v11,v7,v12
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v12.f32)));
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
	// bl 0x825d3bc8
	ctx.lr = 0x824555A0;
	sub_825D3BC8(ctx, base);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d22a0
	ctx.lr = 0x824555B4;
	sub_825D22A0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// li r0,-64
	ctx.r0.s64 = -64;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824555C8"))) PPC_WEAK_FUNC(sub_824555C8);
PPC_FUNC_IMPL(__imp__sub_824555C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x824555D0;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826dfb88
	ctx.lr = 0x824555D8;
	__savefpr_28(ctx, base);
	// li r12,-112
	ctx.r12.s64 = -112;
	// stvx128 v126,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,-96
	ctx.r12.s64 = -96;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r30,20(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82455614
	if (ctx.cr6.eq) goto loc_82455614;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x8245560C;
	sub_82659610(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82581e38
	ctx.lr = 0x82455614;
	sub_82581E38(ctx, base);
loc_82455614:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8245562c
	if (!ctx.cr6.lt) goto loc_8245562C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82455820
	goto loc_82455820;
loc_8245562C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r31,0
	ctx.r31.s64 = 0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f28,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f28.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f30,f28
	ctx.f30.f64 = ctx.f28.f64;
	// lfs f31,2372(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2372);
	ctx.f31.f64 = double(temp.f32);
	// beq 0x8245581c
	if (ctx.cr0.eq) goto loc_8245581C;
	// vspltisw128 v126,0
	simde_mm_store_si128((simde__m128i*)ctx.v126.u32, simde_mm_set1_epi32(int(0x0)));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// vupkd3d128 v0,v126,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v126.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v126.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// lfs f29,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f29.f64 = double(temp.f32);
	// stfs f29,140(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f29,156(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// vspltw128 v127,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v127.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x0));
loc_82455668:
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82600f40
	ctx.lr = 0x82455678;
	sub_82600F40(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r5,r1,284
	ctx.r5.s64 = ctx.r1.s64 + 284;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82600f40
	ctx.lr = 0x8245568C;
	sub_82600F40(ctx, base);
	// lfs f0,292(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f0,296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f0,300(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lfs f0,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f0,252(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f0,256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82594160
	ctx.lr = 0x824556E8;
	sub_82594160(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vupkd3d128 v11,v126,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v126.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v126.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// vspltw v13,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// vspltw v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v8,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// lvx128 v7,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// vmaddfp v10,v7,v13,v8
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vspltw v13,v11,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0x0));
	// lvx128 v6,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lvx128 v5,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// vmaddfp v12,v12,v6,v10
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vor128 v10,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// vmaddfp v9,v0,v5,v12
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vor v0,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vspltw v11,v9,3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0x0));
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
	// vmaddfp v4,v0,v13,v0
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v13,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vspltw v3,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v2,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vor128 v0,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// vmaddfp v13,v7,v13,v8
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vsel v11,v12,v4,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8))));
	// vmulfp128 v12,v9,v11
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v13,v3,v6,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx v12,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v11,v2,v5,v13
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vspltw v12,v11,3
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0x0));
	// vrefp v13,v12
	simde_mm_store_ps(ctx.v13.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v12.f32)));
	// vnmsubfp v0,v12,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v13,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v10,v12,v0,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v10.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v12,v0,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// vmaddfp v0,v0,v10,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v12,v13,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmulfp128 v0,v11,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82455260
	ctx.lr = 0x824557C8;
	sub_82455260(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82455840
	if (!ctx.cr6.eq) goto loc_82455840;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x824557e8
	if (!ctx.cr6.lt) goto loc_824557E8;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x824557ec
	goto loc_824557EC;
loc_824557E8:
	// fsubs f0,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
loc_824557EC:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x8245580c
	if (!ctx.cr6.lt) goto loc_8245580C;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825d3e28
	ctx.lr = 0x82455804;
	sub_825D3E28(ctx, base);
	// lfs f0,240(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// fadds f30,f1,f0
	ctx.f30.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
loc_8245580C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82455668
	if (!ctx.cr6.eq) goto loc_82455668;
loc_8245581C:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
loc_82455820:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// li r0,-112
	ctx.r0.s64 = -112;
	// lvx128 v126,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r0,-96
	ctx.r0.s64 = -96;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826dfbd4
	ctx.lr = 0x8245583C;
	__restfpr_28(ctx, base);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82455840:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825d3e28
	ctx.lr = 0x8245584C;
	sub_825D3E28(ctx, base);
	// lfs f0,240(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// b 0x82455820
	goto loc_82455820;
}

__attribute__((alias("__imp__sub_82455858"))) PPC_WEAK_FUNC(sub_82455858);
PPC_FUNC_IMPL(__imp__sub_82455858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b8
	ctx.lr = 0x82455860;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,25480
	ctx.r11.s64 = ctx.r11.s64 + 25480;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// beq cr6,0x824558a4
	if (ctx.cr6.eq) goto loc_824558A4;
	// bl 0x82659610
	ctx.lr = 0x824558A4;
	sub_82659610(ctx, base);
loc_824558A4:
	// addi r27,r30,20
	ctx.r27.s64 = ctx.r30.s64 + 20;
	// addi r26,r30,36
	ctx.r26.s64 = ctx.r30.s64 + 36;
	// stw r31,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r31.u32);
	// stw r31,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r31.u32);
	// stw r31,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r31.u32);
	// stw r31,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r31.u32);
	// stw r31,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r31.u32);
	// stw r31,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r31.u32);
	// stw r31,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r31.u32);
	// lwz r25,24(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x824558dc
	if (ctx.cr6.eq) goto loc_824558DC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82659610
	ctx.lr = 0x824558DC;
	sub_82659610(ctx, base);
loc_824558DC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x825f1b90
	ctx.lr = 0x824558E8;
	sub_825F1B90(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82600fe0
	ctx.lr = 0x824558F8;
	sub_82600FE0(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8245590c
	if (ctx.cr6.eq) goto loc_8245590C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x8245590C;
	sub_82659610(ctx, base);
loc_8245590C:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82455920
	if (ctx.cr6.eq) goto loc_82455920;
	// bl 0x82581e38
	ctx.lr = 0x82455920;
	sub_82581E38(ctx, base);
loc_82455920:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82455930
	if (ctx.cr6.eq) goto loc_82455930;
	// bl 0x82581e38
	ctx.lr = 0x82455930;
	sub_82581E38(ctx, base);
loc_82455930:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82618c08
	ctx.lr = 0x8245593C;
	sub_82618C08(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82455950
	if (ctx.cr6.eq) goto loc_82455950;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x82455950;
	sub_82659610(ctx, base);
loc_82455950:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82455964
	if (ctx.cr6.eq) goto loc_82455964;
	// bl 0x82581e38
	ctx.lr = 0x82455964;
	sub_82581E38(ctx, base);
loc_82455964:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82455974
	if (ctx.cr6.eq) goto loc_82455974;
	// bl 0x82581e38
	ctx.lr = 0x82455974;
	sub_82581E38(ctx, base);
loc_82455974:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x825f1aa0
	ctx.lr = 0x8245597C;
	sub_825F1AA0(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// lwz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bne cr6,0x824559f0
	if (!ctx.cr6.eq) goto loc_824559F0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824559a4
	if (ctx.cr6.eq) goto loc_824559A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x8245599C;
	sub_82659610(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581e38
	ctx.lr = 0x824559A4;
	sub_82581E38(ctx, base);
loc_824559A4:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825ffee8
	ctx.lr = 0x824559B8;
	sub_825FFEE8(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824559cc
	if (ctx.cr6.eq) goto loc_824559CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x824559CC;
	sub_82659610(ctx, base);
loc_824559CC:
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r31,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824559e0
	if (ctx.cr6.eq) goto loc_824559E0;
	// bl 0x82581e38
	ctx.lr = 0x824559E0;
	sub_82581E38(ctx, base);
loc_824559E0:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82455a74
	if (ctx.cr6.eq) goto loc_82455A74;
	// b 0x82455a70
	goto loc_82455A70;
loc_824559F0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82455a08
	if (ctx.cr6.eq) goto loc_82455A08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x82455A00;
	sub_82659610(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581e38
	ctx.lr = 0x82455A08;
	sub_82581E38(ctx, base);
loc_82455A08:
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82455a1c
	if (ctx.cr6.eq) goto loc_82455A1C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82659610
	ctx.lr = 0x82455A1C;
	sub_82659610(ctx, base);
loc_82455A1C:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lfs f1,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825ff9d0
	ctx.lr = 0x82455A34;
	sub_825FF9D0(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82455a48
	if (ctx.cr6.eq) goto loc_82455A48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x82455A48;
	sub_82659610(ctx, base);
loc_82455A48:
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r31,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82455a5c
	if (ctx.cr6.eq) goto loc_82455A5C;
	// bl 0x82581e38
	ctx.lr = 0x82455A5C;
	sub_82581E38(ctx, base);
loc_82455A5C:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82455a6c
	if (ctx.cr6.eq) goto loc_82455A6C;
	// bl 0x82581e38
	ctx.lr = 0x82455A6C;
	sub_82581E38(ctx, base);
loc_82455A6C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82455A70:
	// bl 0x82581e38
	ctx.lr = 0x82455A74;
	sub_82581E38(ctx, base);
loc_82455A74:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82455a84
	if (ctx.cr6.eq) goto loc_82455A84;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82581e38
	ctx.lr = 0x82455A84;
	sub_82581E38(ctx, base);
loc_82455A84:
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82455a94
	if (ctx.cr6.eq) goto loc_82455A94;
	// bl 0x82581e38
	ctx.lr = 0x82455A94;
	sub_82581E38(ctx, base);
loc_82455A94:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82455AA0"))) PPC_WEAK_FUNC(sub_82455AA0);
PPC_FUNC_IMPL(__imp__sub_82455AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82455AA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,52(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82455ac0
	if (ctx.cr6.eq) goto loc_82455AC0;
	// bl 0x82581e38
	ctx.lr = 0x82455AC0;
	sub_82581E38(ctx, base);
loc_82455AC0:
	// addi r29,r28,36
	ctx.r29.s64 = ctx.r28.s64 + 36;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82455ad4
	if (ctx.cr6.eq) goto loc_82455AD4;
	// bl 0x82186190
	ctx.lr = 0x82455AD4;
	sub_82186190(ctx, base);
loc_82455AD4:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r28,20
	ctx.r30.s64 = ctx.r28.s64 + 20;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82455af8
	if (ctx.cr6.eq) goto loc_82455AF8;
	// bl 0x82186190
	ctx.lr = 0x82455AF8;
	sub_82186190(ctx, base);
loc_82455AF8:
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82455b14
	if (ctx.cr6.eq) goto loc_82455B14;
	// bl 0x82581e38
	ctx.lr = 0x82455B14;
	sub_82581E38(ctx, base);
loc_82455B14:
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82455b24
	if (ctx.cr6.eq) goto loc_82455B24;
	// bl 0x82581e38
	ctx.lr = 0x82455B24;
	sub_82581E38(ctx, base);
loc_82455B24:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82455b34
	if (ctx.cr6.eq) goto loc_82455B34;
	// bl 0x82581e38
	ctx.lr = 0x82455B34;
	sub_82581E38(ctx, base);
loc_82455B34:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,4952
	ctx.r11.s64 = ctx.r11.s64 + 4952;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82455B48"))) PPC_WEAK_FUNC(sub_82455B48);
PPC_FUNC_IMPL(__imp__sub_82455B48) {
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
	// bl 0x82455aa0
	ctx.lr = 0x82455B68;
	sub_82455AA0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82455b80
	if (ctx.cr6.eq) goto loc_82455B80;
	// bl 0x82186190
	ctx.lr = 0x82455B7C;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82455B80:
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

__attribute__((alias("__imp__sub_82455B98"))) PPC_WEAK_FUNC(sub_82455B98);
PPC_FUNC_IMPL(__imp__sub_82455B98) {
	PPC_FUNC_PROLOGUE();
	// stb r4,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82455BA0"))) PPC_WEAK_FUNC(sub_82455BA0);
PPC_FUNC_IMPL(__imp__sub_82455BA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82455BB8"))) PPC_WEAK_FUNC(sub_82455BB8);
PPC_FUNC_IMPL(__imp__sub_82455BB8) {
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
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82455be4
	if (ctx.cr6.eq) goto loc_82455BE4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82659610
	ctx.lr = 0x82455BE4;
	sub_82659610(ctx, base);
loc_82455BE4:
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

__attribute__((alias("__imp__sub_82455C00"))) PPC_WEAK_FUNC(sub_82455C00);
PPC_FUNC_IMPL(__imp__sub_82455C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x82455C08;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,25508
	ctx.r11.s64 = ctx.r11.s64 + 25508;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq cr6,0x82455c40
	if (ctx.cr6.eq) goto loc_82455C40;
	// bl 0x82659610
	ctx.lr = 0x82455C40;
	sub_82659610(ctx, base);
loc_82455C40:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// beq cr6,0x82455c54
	if (ctx.cr6.eq) goto loc_82455C54;
	// bl 0x82659610
	ctx.lr = 0x82455C54;
	sub_82659610(ctx, base);
loc_82455C54:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// beq cr6,0x82455c78
	if (ctx.cr6.eq) goto loc_82455C78;
	// bl 0x82659610
	ctx.lr = 0x82455C78;
	sub_82659610(ctx, base);
loc_82455C78:
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r29,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r29.u8);
	// addi r6,r11,-21260
	ctx.r6.s64 = ctx.r11.s64 + -21260;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-8672
	ctx.r5.s64 = ctx.r11.s64 + -8672;
	// bl 0x826df418
	ctx.lr = 0x82455CA0;
	sub_826DF418(ctx, base);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-4608
	ctx.r11.s64 = ctx.r11.s64 + -4608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r11,r11,-4576
	ctx.r11.s64 = ctx.r11.s64 + -4576;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82455330
	ctx.lr = 0x82455CD4;
	sub_82455330(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,384
	ctx.r6.s64 = 384;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82584630
	ctx.lr = 0x82455CF4;
	sub_82584630(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82584610
	ctx.lr = 0x82455CFC;
	sub_82584610(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82455d20
	if (ctx.cr6.eq) goto loc_82455D20;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82659610
	ctx.lr = 0x82455D10;
	sub_82659610(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82455d20
	if (ctx.cr6.eq) goto loc_82455D20;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82659610
	ctx.lr = 0x82455D20;
	sub_82659610(ctx, base);
loc_82455D20:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82455d38
	if (ctx.cr6.eq) goto loc_82455D38;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82581e38
	ctx.lr = 0x82455D38;
	sub_82581E38(ctx, base);
loc_82455D38:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82455d48
	if (ctx.cr6.eq) goto loc_82455D48;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82581e38
	ctx.lr = 0x82455D48;
	sub_82581E38(ctx, base);
loc_82455D48:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82455db4
	if (ctx.cr6.eq) goto loc_82455DB4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82455db4
	if (ctx.cr6.eq) goto loc_82455DB4;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82186158
	ctx.lr = 0x82455D6C;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82455d80
	if (ctx.cr6.eq) goto loc_82455D80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82595888
	ctx.lr = 0x82455D7C;
	sub_82595888(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82455D80:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82455d90
	if (ctx.cr6.eq) goto loc_82455D90;
	// addi r3,r29,20
	ctx.r3.s64 = ctx.r29.s64 + 20;
	// bl 0x82659610
	ctx.lr = 0x82455D90;
	sub_82659610(ctx, base);
loc_82455D90:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82455da8
	if (ctx.cr6.eq) goto loc_82455DA8;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x82581e38
	ctx.lr = 0x82455DA8;
	sub_82581E38(ctx, base);
loc_82455DA8:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x825944c8
	ctx.lr = 0x82455DB4;
	sub_825944C8(ctx, base);
loc_82455DB4:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82455dc4
	if (ctx.cr6.eq) goto loc_82455DC4;
	// bl 0x82581e38
	ctx.lr = 0x82455DC4;
	sub_82581E38(ctx, base);
loc_82455DC4:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82455dd4
	if (ctx.cr6.eq) goto loc_82455DD4;
	// bl 0x82581e38
	ctx.lr = 0x82455DD4;
	sub_82581E38(ctx, base);
loc_82455DD4:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82455de4
	if (ctx.cr6.eq) goto loc_82455DE4;
	// bl 0x82581e38
	ctx.lr = 0x82455DE4;
	sub_82581E38(ctx, base);
loc_82455DE4:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82455df4
	if (ctx.cr6.eq) goto loc_82455DF4;
	// bl 0x82581e38
	ctx.lr = 0x82455DF4;
	sub_82581E38(ctx, base);
loc_82455DF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82455E00"))) PPC_WEAK_FUNC(sub_82455E00);
PPC_FUNC_IMPL(__imp__sub_82455E00) {
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
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82455e24
	if (ctx.cr6.eq) goto loc_82455E24;
	// bl 0x82581e38
	ctx.lr = 0x82455E24;
	sub_82581E38(ctx, base);
loc_82455E24:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82455e38
	if (ctx.cr6.eq) goto loc_82455E38;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x82581e38
	ctx.lr = 0x82455E38;
	sub_82581E38(ctx, base);
loc_82455E38:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82455e4c
	if (ctx.cr6.eq) goto loc_82455E4C;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82581e38
	ctx.lr = 0x82455E4C;
	sub_82581E38(ctx, base);
loc_82455E4C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82455e5c
	if (ctx.cr6.eq) goto loc_82455E5C;
	// bl 0x82581e38
	ctx.lr = 0x82455E5C;
	sub_82581E38(ctx, base);
loc_82455E5C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82455e6c
	if (ctx.cr6.eq) goto loc_82455E6C;
	// bl 0x82581e38
	ctx.lr = 0x82455E6C;
	sub_82581E38(ctx, base);
loc_82455E6C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,5152
	ctx.r11.s64 = ctx.r11.s64 + 5152;
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

__attribute__((alias("__imp__sub_82455E90"))) PPC_WEAK_FUNC(sub_82455E90);
PPC_FUNC_IMPL(__imp__sub_82455E90) {
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
	// bl 0x82455e00
	ctx.lr = 0x82455EB0;
	sub_82455E00(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82455ec8
	if (ctx.cr6.eq) goto loc_82455EC8;
	// bl 0x82186190
	ctx.lr = 0x82455EC4;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82455EC8:
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

__attribute__((alias("__imp__sub_82455EE0"))) PPC_WEAK_FUNC(sub_82455EE0);
PPC_FUNC_IMPL(__imp__sub_82455EE0) {
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
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r9,r10,4101
	ctx.r9.u64 = ctx.r10.u64 | 4101;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf. r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82455f18
	if (ctx.cr0.eq) goto loc_82455F18;
	// cmplwi cr6,r10,36861
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 36861, ctx.xer);
	// bne cr6,0x82455f24
	if (!ctx.cr6.eq) goto loc_82455F24;
loc_82455F18:
	// lbz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82455fe8
	if (ctx.cr6.eq) goto loc_82455FE8;
loc_82455F24:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ori r10,r10,40962
	ctx.r10.u64 = ctx.r10.u64 | 40962;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82455f68
	if (!ctx.cr6.eq) goto loc_82455F68;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// bl 0x824555c8
	ctx.lr = 0x82455F40;
	sub_824555C8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x826188a8
	ctx.lr = 0x82455F4C;
	sub_826188A8(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82618998
	ctx.lr = 0x82455F54;
	sub_82618998(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x823032b8
	ctx.lr = 0x82455F60;
	sub_823032B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82455fec
	goto loc_82455FEC;
loc_82455F68:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r10,r10,40961
	ctx.r10.u64 = ctx.r10.u64 | 40961;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82455fa8
	if (!ctx.cr6.eq) goto loc_82455FA8;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// bl 0x824555c8
	ctx.lr = 0x82455F80;
	sub_824555C8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x826188a8
	ctx.lr = 0x82455F8C;
	sub_826188A8(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82618998
	ctx.lr = 0x82455F94;
	sub_82618998(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x823032b8
	ctx.lr = 0x82455FA0;
	sub_823032B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82455fec
	goto loc_82455FEC;
loc_82455FA8:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82455fe8
	if (!ctx.cr6.eq) goto loc_82455FE8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82455fd8
	if (ctx.cr6.lt) goto loc_82455FD8;
	// beq cr6,0x82455fd8
	if (ctx.cr6.eq) goto loc_82455FD8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82455fe0
	if (!ctx.cr6.lt) goto loc_82455FE0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82455fec
	goto loc_82455FEC;
loc_82455FD8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82455FE0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82455fec
	goto loc_82455FEC;
loc_82455FE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82455FEC:
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

__attribute__((alias("__imp__sub_82456008"))) PPC_WEAK_FUNC(sub_82456008);
PPC_FUNC_IMPL(__imp__sub_82456008) {
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
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-20976
	ctx.r4.s64 = ctx.r11.s64 + -20976;
	// bl 0x826de850
	ctx.lr = 0x8245602C;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82456040
	if (!ctx.cr6.eq) goto loc_82456040;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82456040:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82456058"))) PPC_WEAK_FUNC(sub_82456058);
PPC_FUNC_IMPL(__imp__sub_82456058) {
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
	ctx.lr = 0x82456088;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824560b4
	if (ctx.cr6.eq) goto loc_824560B4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,25524
	ctx.r10.s64 = ctx.r11.s64 + 25524;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x824560b8
	goto loc_824560B8;
loc_824560B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824560B8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x82456104
	if (!ctx.cr6.eq) goto loc_82456104;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824560e4
	if (ctx.cr6.eq) goto loc_824560E4;
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
	ctx.lr = 0x824560E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824560E4:
	// lis r10,-32075
	ctx.r10.s64 = -2102067200;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,-21148(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21148);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x82456104;
	sub_821E0968(ctx, base);
loc_82456104:
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

__attribute__((alias("__imp__sub_82456120"))) PPC_WEAK_FUNC(sub_82456120);
PPC_FUNC_IMPL(__imp__sub_82456120) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218a188
	ctx.lr = 0x82456148;
	sub_8218A188(ctx, base);
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
	ctx.lr = 0x82456164;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821609d0
	ctx.lr = 0x82456170;
	sub_821609D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82456184
	if (ctx.cr6.eq) goto loc_82456184;
	// bl 0x821601b8
	ctx.lr = 0x82456184;
	sub_821601B8(ctx, base);
loc_82456184:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82456194
	if (ctx.cr6.eq) goto loc_82456194;
	// bl 0x821601b8
	ctx.lr = 0x82456194;
	sub_821601B8(ctx, base);
loc_82456194:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824561a4
	if (!ctx.cr6.eq) goto loc_824561A4;
loc_8245619C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824561e4
	goto loc_824561E4;
loc_824561A4:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// ori r11,r11,6
	ctx.r11.u64 = ctx.r11.u64 | 6;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824561C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8245619c
	if (ctx.cr6.eq) goto loc_8245619C;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r3,1
	ctx.r3.s64 = 1;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_824561E4:
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

__attribute__((alias("__imp__sub_82456200"))) PPC_WEAK_FUNC(sub_82456200);
PPC_FUNC_IMPL(__imp__sub_82456200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82456208;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r30,184
	ctx.r31.s64 = ctx.r30.s64 + 184;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8245622c
	if (ctx.cr6.lt) goto loc_8245622C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x8245622C;
	sub_82186190(ctx, base);
loc_8245622C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// bl 0x8218a718
	ctx.lr = 0x82456248;
	sub_8218A718(ctx, base);
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82456260
	if (ctx.cr6.eq) goto loc_82456260;
	// bl 0x82186190
	ctx.lr = 0x8245625C;
	sub_82186190(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82456260:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82456268"))) PPC_WEAK_FUNC(sub_82456268);
PPC_FUNC_IMPL(__imp__sub_82456268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x82456270;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r3,224
	ctx.r3.s64 = 224;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x82186158
	ctx.lr = 0x8245629C;
	sub_82186158(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824562fc
	if (ctx.cr6.eq) goto loc_824562FC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x824569b0
	ctx.lr = 0x824562E8;
	sub_824569B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,25544
	ctx.r11.s64 = ctx.r11.s64 + 25544;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82456300
	goto loc_82456300;
loc_824562FC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82456300:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r4,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r25,4
	ctx.r3.s64 = ctx.r25.s64 + 4;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82456058
	ctx.lr = 0x8245631C;
	sub_82456058(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82456330"))) PPC_WEAK_FUNC(sub_82456330);
PPC_FUNC_IMPL(__imp__sub_82456330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82456338"))) PPC_WEAK_FUNC(sub_82456338);
PPC_FUNC_IMPL(__imp__sub_82456338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,176(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82456340"))) PPC_WEAK_FUNC(sub_82456340);
PPC_FUNC_IMPL(__imp__sub_82456340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,15420(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15420);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82456350"))) PPC_WEAK_FUNC(sub_82456350);
PPC_FUNC_IMPL(__imp__sub_82456350) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r6,r31,160
	ctx.r6.s64 = ctx.r31.s64 + 160;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f13,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x82590b60
	ctx.lr = 0x824563A4;
	sub_82590B60(ctx, base);
	// lfs f0,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x824563c8
	if (ctx.cr6.lt) goto loc_824563C8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82456480
	goto loc_82456480;
loc_824563C8:
	// fdivs f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-29804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x826e0668
	ctx.lr = 0x824563DC;
	sub_826E0668(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r31,96
	ctx.r10.s64 = ctx.r31.s64 + 96;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// lfs f0,3548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,112
	ctx.r11.s64 = ctx.r31.s64 + 112;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// fnmsubs f31,f13,f0,f0
	ctx.f31.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f0.f64)));
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d2160
	ctx.lr = 0x82456440;
	sub_825D2160(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x825d3bc8
	ctx.lr = 0x82456450;
	sub_825D3BC8(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825d2350
	ctx.lr = 0x82456460;
	sub_825D2350(ctx, base);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825d3bb0
	ctx.lr = 0x82456470;
	sub_825D3BB0(ctx, base);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82456480:
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// stvx v0,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
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

__attribute__((alias("__imp__sub_824564B0"))) PPC_WEAK_FUNC(sub_824564B0);
PPC_FUNC_IMPL(__imp__sub_824564B0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// li r3,1
	ctx.r3.s64 = 1;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824564C8"))) PPC_WEAK_FUNC(sub_824564C8);
PPC_FUNC_IMPL(__imp__sub_824564C8) {
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
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824564F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245650C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82456530
	if (!ctx.cr6.eq) goto loc_82456530;
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_82456530:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825d3bc8
	ctx.lr = 0x82456540;
	sub_825D3BC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x825d2200
	ctx.lr = 0x82456554;
	sub_825D2200(ctx, base);
	// lfs f0,212(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x82456568
	if (ctx.cr6.lt) goto loc_82456568;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82456568:
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

__attribute__((alias("__imp__sub_82456580"))) PPC_WEAK_FUNC(sub_82456580);
PPC_FUNC_IMPL(__imp__sub_82456580) {
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
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-20720
	ctx.r4.s64 = ctx.r11.s64 + -20720;
	// bl 0x826de850
	ctx.lr = 0x824565A4;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824565b8
	if (!ctx.cr6.eq) goto loc_824565B8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_824565B8:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_824565D0"))) PPC_WEAK_FUNC(sub_824565D0);
PPC_FUNC_IMPL(__imp__sub_824565D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// addi r11,r3,96
	ctx.r11.s64 = ctx.r3.s64 + 96;
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
	// lfs f1,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stfs f1,132(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82456610"))) PPC_WEAK_FUNC(sub_82456610);
PPC_FUNC_IMPL(__imp__sub_82456610) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x824564c8
	ctx.lr = 0x82456638;
	sub_824564C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8245668c
	if (ctx.cr6.eq) goto loc_8245668C;
	// addi r11,r31,184
	ctx.r11.s64 = ctx.r31.s64 + 184;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8245665c
	if (ctx.cr6.lt) goto loc_8245665C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82456660
	goto loc_82456660;
loc_8245665C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82456660:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r10,r10,28679
	ctx.r10.u64 = ctx.r10.u64 | 28679;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82456688;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82456770
	goto loc_82456770;
loc_8245668C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824566A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82456770
	if (ctx.cr6.eq) goto loc_82456770;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r30,r31,160
	ctx.r30.s64 = ctx.r31.s64 + 160;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824566D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825d3bc8
	ctx.lr = 0x824566E8;
	sub_825D3BC8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825d2200
	ctx.lr = 0x824566F0;
	sub_825D2200(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x825d22a0
	ctx.lr = 0x824566FC;
	sub_825D22A0(ctx, base);
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// bl 0x825d2330
	ctx.lr = 0x8245670C;
	sub_825D2330(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825d3bb0
	ctx.lr = 0x8245671C;
	sub_825D3BB0(ctx, base);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r11,r31,144
	ctx.r11.s64 = ctx.r31.s64 + 144;
	// lfs f13,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82456748
	if (!ctx.cr6.lt) goto loc_82456748;
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
loc_82456748:
	// lfs f0,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,128
	ctx.r11.s64 = ctx.r31.s64 + 128;
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82456768
	if (ctx.cr6.lt) goto loc_82456768;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82456768:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
loc_82456770:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

__attribute__((alias("__imp__sub_82456790"))) PPC_WEAK_FUNC(sub_82456790);
PPC_FUNC_IMPL(__imp__sub_82456790) {
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
	ctx.lr = 0x824567C0;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824567ec
	if (ctx.cr6.eq) goto loc_824567EC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,25596
	ctx.r10.s64 = ctx.r11.s64 + 25596;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x824567f0
	goto loc_824567F0;
loc_824567EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824567F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8245683c
	if (!ctx.cr6.eq) goto loc_8245683C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8245681c
	if (ctx.cr6.eq) goto loc_8245681C;
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
	ctx.lr = 0x8245681C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8245681C:
	// lis r10,-32075
	ctx.r10.s64 = -2102067200;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,-20900(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20900);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x8245683C;
	sub_821E0968(ctx, base);
loc_8245683C:
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

__attribute__((alias("__imp__sub_82456858"))) PPC_WEAK_FUNC(sub_82456858);
PPC_FUNC_IMPL(__imp__sub_82456858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82456860;
	__savegprlr_29(ctx, base);
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8218a188
	ctx.lr = 0x8245687C;
	sub_8218A188(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82456898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821609d0
	ctx.lr = 0x824568A4;
	sub_821609D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,188(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824568b8
	if (ctx.cr6.eq) goto loc_824568B8;
	// bl 0x821601b8
	ctx.lr = 0x824568B8;
	sub_821601B8(ctx, base);
loc_824568B8:
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824568c8
	if (ctx.cr6.eq) goto loc_824568C8;
	// bl 0x821601b8
	ctx.lr = 0x824568C8;
	sub_821601B8(ctx, base);
loc_824568C8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824568e0
	if (!ctx.cr6.eq) goto loc_824568E0;
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r11,r11,-4576
	ctx.r11.s64 = ctx.r11.s64 + -4576;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82456994
	goto loc_82456994;
loc_824568E0:
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r11,r11,-4608
	ctx.r11.s64 = ctx.r11.s64 + -4608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,7
	ctx.r11.u64 = ctx.r11.u64 | 7;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r31,r11,-4576
	ctx.r31.s64 = ctx.r11.s64 + -4576;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245692C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82456940
	if (!ctx.cr6.eq) goto loc_82456940;
	// lvx128 v0,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82456994
	goto loc_82456994;
loc_82456940:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d2bc0
	ctx.lr = 0x82456964;
	sub_825D2BC0(ctx, base);
	// addi r5,r30,80
	ctx.r5.s64 = ctx.r30.s64 + 80;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82166e50
	ctx.lr = 0x82456974;
	sub_82166E50(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d3bb0
	ctx.lr = 0x8245698C;
	sub_825D3BB0(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82456994:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stvx v0,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824569B0"))) PPC_WEAK_FUNC(sub_824569B0);
PPC_FUNC_IMPL(__imp__sub_824569B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x824569B8;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// bl 0x8218a658
	ctx.lr = 0x824569E0;
	sub_8218A658(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
	// addi r9,r31,48
	ctx.r9.s64 = ctx.r31.s64 + 48;
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r8,r31,80
	ctx.r8.s64 = ctx.r31.s64 + 80;
	// addi r30,r31,184
	ctx.r30.s64 = ctx.r31.s64 + 184;
	// lfs f12,-30760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30760);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r7,15
	ctx.r7.s64 = 15;
	// lfs f13,14088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,25616
	ctx.r11.s64 = ctx.r11.s64 + 25616;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// lvx128 v0,r0,r26
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,-4576
	ctx.r11.s64 = ctx.r11.s64 + -4576;
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f12,64(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stvx v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r11,5020
	ctx.r4.s64 = ctx.r11.s64 + 5020;
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stfs f13,156(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// stfs f13,172(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// stw r25,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r25.u32);
	// lfs f12,18320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18320);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,176(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// stw r7,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r7.u32);
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// stb r10,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r10.u8);
	// bl 0x82161e08
	ctx.lr = 0x82456A94;
	sub_82161E08(ctx, base);
	// stfs f31,212(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82456ad0
	if (ctx.cr6.eq) goto loc_82456AD0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82456AA8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82456aa8
	if (!ctx.cr6.eq) goto loc_82456AA8;
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
	ctx.lr = 0x82456AD0;
	sub_82161E08(ctx, base);
loc_82456AD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82456AE0"))) PPC_WEAK_FUNC(sub_82456AE0);
PPC_FUNC_IMPL(__imp__sub_82456AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x82456AE8;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r3,224
	ctx.r3.s64 = 224;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x82186158
	ctx.lr = 0x82456B18;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82456b48
	if (ctx.cr6.eq) goto loc_82456B48;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824569b0
	ctx.lr = 0x82456B40;
	sub_824569B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82456b4c
	goto loc_82456B4C;
loc_82456B48:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82456B4C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r4,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r25,4
	ctx.r3.s64 = ctx.r25.s64 + 4;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82456790
	ctx.lr = 0x82456B68;
	sub_82456790(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82456B78"))) PPC_WEAK_FUNC(sub_82456B78);
PPC_FUNC_IMPL(__imp__sub_82456B78) {
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
	// addi r11,r11,25664
	ctx.r11.s64 = ctx.r11.s64 + 25664;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82456bac
	if (ctx.cr6.eq) goto loc_82456BAC;
	// bl 0x82186190
	ctx.lr = 0x82456BA8;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82456BAC:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82456BC0"))) PPC_WEAK_FUNC(sub_82456BC0);
PPC_FUNC_IMPL(__imp__sub_82456BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,25684
	ctx.r11.s64 = ctx.r11.s64 + 25684;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82456BE0"))) PPC_WEAK_FUNC(sub_82456BE0);
PPC_FUNC_IMPL(__imp__sub_82456BE0) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82456c0c
	if (ctx.cr6.eq) goto loc_82456C0C;
	// bl 0x82581e38
	ctx.lr = 0x82456C0C;
	sub_82581E38(ctx, base);
loc_82456C0C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r11,r11,25664
	ctx.r11.s64 = ctx.r11.s64 + 25664;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82456c30
	if (ctx.cr6.eq) goto loc_82456C30;
	// bl 0x82186190
	ctx.lr = 0x82456C2C;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82456C30:
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

__attribute__((alias("__imp__sub_82456C48"))) PPC_WEAK_FUNC(sub_82456C48);
PPC_FUNC_IMPL(__imp__sub_82456C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82456C50;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rotlwi r31,r5,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82186158
	ctx.lr = 0x82456C68;
	sub_82186158(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82456c7c
	if (!ctx.cr6.eq) goto loc_82456C7C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82456C7C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826df680
	ctx.lr = 0x82456C8C;
	sub_826DF680(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82186158
	ctx.lr = 0x82456C94;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82456d38
	if (ctx.cr6.eq) goto loc_82456D38;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,25704
	ctx.r11.s64 = ctx.r11.s64 + 25704;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// bl 0x82659610
	ctx.lr = 0x82456CC0;
	sub_82659610(ctx, base);
loc_82456CC0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82456cd0
	if (ctx.cr6.eq) goto loc_82456CD0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x82456CD0;
	sub_82659610(ctx, base);
loc_82456CD0:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82456ce4
	if (ctx.cr6.eq) goto loc_82456CE4;
	// bl 0x82581e38
	ctx.lr = 0x82456CE4;
	sub_82581E38(ctx, base);
loc_82456CE4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82456cf4
	if (ctx.cr6.eq) goto loc_82456CF4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82581e38
	ctx.lr = 0x82456CF4;
	sub_82581E38(ctx, base);
loc_82456CF4:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82456d10
	if (ctx.cr6.eq) goto loc_82456D10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82186190
	ctx.lr = 0x82456D10;
	sub_82186190(ctx, base);
loc_82456D10:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825d4cb0
	ctx.lr = 0x82456D1C;
	sub_825D4CB0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// bl 0x825d4eb8
	ctx.lr = 0x82456D2C;
	sub_825D4EB8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82456D38:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82456cc0
	goto loc_82456CC0;
}

__attribute__((alias("__imp__sub_82456D40"))) PPC_WEAK_FUNC(sub_82456D40);
PPC_FUNC_IMPL(__imp__sub_82456D40) {
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
	// bl 0x82186190
	ctx.lr = 0x82456D64;
	sub_82186190(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r11,r11,4952
	ctx.r11.s64 = ctx.r11.s64 + 4952;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82456d88
	if (ctx.cr6.eq) goto loc_82456D88;
	// bl 0x82186190
	ctx.lr = 0x82456D84;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82456D88:
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

__attribute__((alias("__imp__sub_82456DA0"))) PPC_WEAK_FUNC(sub_82456DA0);
PPC_FUNC_IMPL(__imp__sub_82456DA0) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x823a1aa8
	ctx.lr = 0x82456DC4;
	sub_823A1AA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82456ddc
	if (ctx.cr6.eq) goto loc_82456DDC;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82456de0
	if (ctx.cr6.eq) goto loc_82456DE0;
loc_82456DDC:
	// twi 31,r0,22
loc_82456DE0:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82456e04
	if (ctx.cr6.eq) goto loc_82456E04;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82456e34
	goto loc_82456E34;
loc_82456E04:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82456e10
	if (!ctx.cr6.eq) goto loc_82456E10;
	// twi 31,r0,22
loc_82456E10:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82456e20
	if (!ctx.cr6.eq) goto loc_82456E20;
	// twi 31,r0,22
loc_82456E20:
	// lwz r3,40(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82456e34
	if (ctx.cr6.eq) goto loc_82456E34;
	// bl 0x82659610
	ctx.lr = 0x82456E34;
	sub_82659610(ctx, base);
loc_82456E34:
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

__attribute__((alias("__imp__sub_82456E50"))) PPC_WEAK_FUNC(sub_82456E50);
PPC_FUNC_IMPL(__imp__sub_82456E50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82456E58;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// stw r5,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r5.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// stb r28,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r28.u8);
	// bl 0x82161d10
	ctx.lr = 0x82456EA4;
	sub_82161D10(ctx, base);
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// beq cr6,0x82456eb8
	if (ctx.cr6.eq) goto loc_82456EB8;
	// bl 0x82659610
	ctx.lr = 0x82456EB8;
	sub_82659610(ctx, base);
loc_82456EB8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r27,44(r30)
	PPC_STORE_U8(ctx.r30.u32 + 44, ctx.r27.u8);
	// stb r28,45(r30)
	PPC_STORE_U8(ctx.r30.u32 + 45, ctx.r28.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82456ED0"))) PPC_WEAK_FUNC(sub_82456ED0);
PPC_FUNC_IMPL(__imp__sub_82456ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x82456ED8;
	__savegprlr_25(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82457030
	if (!ctx.cr6.eq) goto loc_82457030;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// bl 0x8245a3a0
	ctx.lr = 0x82456F04;
	sub_8245A3A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82457030
	if (ctx.cr6.eq) goto loc_82457030;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r29,15
	ctx.r29.s64 = 15;
loc_82456F14:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8245a3c8
	ctx.lr = 0x82456F24;
	sub_8245A3C8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8245701c
	if (ctx.cr6.eq) goto loc_8245701C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82457010
	if (ctx.cr6.eq) goto loc_82457010;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// bl 0x82659610
	ctx.lr = 0x82456F48;
	sub_82659610(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x824599b8
	ctx.lr = 0x82456F54;
	sub_824599B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823d7720
	ctx.lr = 0x82456F64;
	sub_823D7720(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r30,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82161d10
	ctx.lr = 0x82456F88;
	sub_82161D10(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// beq cr6,0x82456f9c
	if (ctx.cr6.eq) goto loc_82456F9C;
	// bl 0x82659610
	ctx.lr = 0x82456F9C;
	sub_82659610(ctx, base);
loc_82456F9C:
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a1fc0
	ctx.lr = 0x82456FAC;
	sub_823A1FC0(ctx, base);
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82456fbc
	if (ctx.cr6.eq) goto loc_82456FBC;
	// bl 0x82581e38
	ctx.lr = 0x82456FBC;
	sub_82581E38(ctx, base);
loc_82456FBC:
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82456fd0
	if (ctx.cr6.lt) goto loc_82456FD0;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82186190
	ctx.lr = 0x82456FD0;
	sub_82186190(ctx, base);
loc_82456FD0:
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r29.u32);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r30,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r30.u8);
	// beq cr6,0x82456fec
	if (ctx.cr6.eq) goto loc_82456FEC;
	// bl 0x82581e38
	ctx.lr = 0x82456FEC;
	sub_82581E38(ctx, base);
loc_82456FEC:
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82457000
	if (ctx.cr6.lt) goto loc_82457000;
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x82186190
	ctx.lr = 0x82457000;
	sub_82186190(ctx, base);
loc_82457000:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r29.u32);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stb r30,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r30.u8);
loc_82457010:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8245701c
	if (ctx.cr6.eq) goto loc_8245701C;
	// bl 0x82581e38
	ctx.lr = 0x8245701C;
	sub_82581E38(ctx, base);
loc_8245701C:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// bl 0x8245a3a0
	ctx.lr = 0x82457028;
	sub_8245A3A0(ctx, base);
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82456f14
	if (ctx.cr6.lt) goto loc_82456F14;
loc_82457030:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82457038"))) PPC_WEAK_FUNC(sub_82457038);
PPC_FUNC_IMPL(__imp__sub_82457038) {
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
	// bl 0x82457308
	ctx.lr = 0x82457058;
	sub_82457308(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82457070
	if (ctx.cr6.eq) goto loc_82457070;
	// bl 0x82186190
	ctx.lr = 0x8245706C;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82457070:
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

__attribute__((alias("__imp__sub_82457088"))) PPC_WEAK_FUNC(sub_82457088);
PPC_FUNC_IMPL(__imp__sub_82457088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82457090;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82186158
	ctx.lr = 0x824570A4;
	sub_82186158(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824570dc
	if (ctx.cr6.eq) goto loc_824570DC;
	// bl 0x824572a8
	ctx.lr = 0x824570B4;
	sub_824572A8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// addi r11,r11,25712
	ctx.r11.s64 = ctx.r11.s64 + 25712;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// bl 0x82659610
	ctx.lr = 0x824570D0;
	sub_82659610(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_824570DC:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824570F0"))) PPC_WEAK_FUNC(sub_824570F0);
PPC_FUNC_IMPL(__imp__sub_824570F0) {
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
	// lwz r3,112(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,11
	ctx.r11.u64 = ctx.r11.u64 | 11;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82457120;
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

__attribute__((alias("__imp__sub_82457130"))) PPC_WEAK_FUNC(sub_82457130);
PPC_FUNC_IMPL(__imp__sub_82457130) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,25728(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25728);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f13,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f0,5584(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5584);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82459630
	ctx.lr = 0x824571A8;
	sub_82459630(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8245721c
	if (ctx.cr6.eq) goto loc_8245721C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8245721c
	if (ctx.cr6.eq) goto loc_8245721C;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82186158
	ctx.lr = 0x824571CC;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824571ec
	if (ctx.cr6.eq) goto loc_824571EC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,25720
	ctx.r11.s64 = ctx.r11.s64 + 25720;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x824571f0
	goto loc_824571F0;
loc_824571EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824571F0:
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82457200
	if (ctx.cr6.eq) goto loc_82457200;
	// bl 0x82659610
	ctx.lr = 0x82457200;
	sub_82659610(ctx, base);
loc_82457200:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82458d40
	ctx.lr = 0x8245720C;
	sub_82458D40(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8245721c
	if (ctx.cr6.eq) goto loc_8245721C;
	// bl 0x82581e38
	ctx.lr = 0x8245721C;
	sub_82581E38(ctx, base);
loc_8245721C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82457238"))) PPC_WEAK_FUNC(sub_82457238);
PPC_FUNC_IMPL(__imp__sub_82457238) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r6.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82457260"))) PPC_WEAK_FUNC(sub_82457260);
PPC_FUNC_IMPL(__imp__sub_82457260) {
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
	// addi r11,r11,25736
	ctx.r11.s64 = ctx.r11.s64 + 25736;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82457294
	if (ctx.cr6.eq) goto loc_82457294;
	// bl 0x82186190
	ctx.lr = 0x82457290;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82457294:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_824572A8"))) PPC_WEAK_FUNC(sub_824572A8);
PPC_FUNC_IMPL(__imp__sub_824572A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,25780
	ctx.r10.s64 = ctx.r11.s64 + 25780;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lfs f13,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stw r3,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r3.u32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r3,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r3.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82457308"))) PPC_WEAK_FUNC(sub_82457308);
PPC_FUNC_IMPL(__imp__sub_82457308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,25780
	ctx.r11.s64 = ctx.r11.s64 + 25780;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82457328
	if (ctx.cr6.eq) goto loc_82457328;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82457328:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8245733c
	if (ctx.cr6.eq) goto loc_8245733C;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8245733C:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82457350
	if (ctx.cr6.eq) goto loc_82457350;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82457350:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82457364
	if (ctx.cr6.eq) goto loc_82457364;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82457364:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,4952
	ctx.r11.s64 = ctx.r11.s64 + 4952;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82457378"))) PPC_WEAK_FUNC(sub_82457378);
PPC_FUNC_IMPL(__imp__sub_82457378) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,25788
	ctx.r10.s64 = ctx.r11.s64 + 25788;
	// lfs f13,14088(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r31,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r31.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f13,108(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stb r11,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r11.u8);
	// bl 0x825d4440
	ctx.lr = 0x824573E0;
	sub_825D4440(ctx, base);
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

__attribute__((alias("__imp__sub_824573F8"))) PPC_WEAK_FUNC(sub_824573F8);
PPC_FUNC_IMPL(__imp__sub_824573F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82457438"))) PPC_WEAK_FUNC(sub_82457438);
PPC_FUNC_IMPL(__imp__sub_82457438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82457440;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f13,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x825d3bb0
	ctx.lr = 0x8245747C;
	sub_825D3BB0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825d3bc8
	ctx.lr = 0x8245748C;
	sub_825D3BC8(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stvx v13,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,60(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// bne cr6,0x824574e0
	if (!ctx.cr6.eq) goto loc_824574E0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x825b88f0
	ctx.lr = 0x824574CC;
	sub_825B88F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_824574E0:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x825b8b60
	ctx.lr = 0x824574E8;
	sub_825B8B60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824574F8"))) PPC_WEAK_FUNC(sub_824574F8);
PPC_FUNC_IMPL(__imp__sub_824574F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82457500;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82457550
	if (ctx.cr6.eq) goto loc_82457550;
	// addi r29,r3,-4
	ctx.r29.s64 = ctx.r3.s64 + -4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// add r31,r10,r3
	ctx.r31.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82457548
	if (ctx.cr6.lt) goto loc_82457548;
loc_82457528:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8245753c
	if (ctx.cr6.eq) goto loc_8245753C;
	// bl 0x82581e38
	ctx.lr = 0x8245753C;
	sub_82581E38(ctx, base);
loc_8245753C:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82457528
	if (!ctx.cr6.lt) goto loc_82457528;
loc_82457548:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82186190
	ctx.lr = 0x82457550;
	sub_82186190(ctx, base);
loc_82457550:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82457558"))) PPC_WEAK_FUNC(sub_82457558);
PPC_FUNC_IMPL(__imp__sub_82457558) {
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
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-19960
	ctx.r4.s64 = ctx.r11.s64 + -19960;
	// bl 0x826de850
	ctx.lr = 0x8245757C;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82457590
	if (!ctx.cr6.eq) goto loc_82457590;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82457590:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_824575A8"))) PPC_WEAK_FUNC(sub_824575A8);
PPC_FUNC_IMPL(__imp__sub_824575A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_824575C8"))) PPC_WEAK_FUNC(sub_824575C8);
PPC_FUNC_IMPL(__imp__sub_824575C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824575D0"))) PPC_WEAK_FUNC(sub_824575D0);
PPC_FUNC_IMPL(__imp__sub_824575D0) {
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
	// addi r11,r11,25780
	ctx.r11.s64 = ctx.r11.s64 + 25780;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82457604
	if (ctx.cr6.eq) goto loc_82457604;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82457604:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82457618
	if (ctx.cr6.eq) goto loc_82457618;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82457618:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8245762c
	if (ctx.cr6.eq) goto loc_8245762C;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8245762C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82457640
	if (ctx.cr6.eq) goto loc_82457640;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82457640:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r11,r11,4952
	ctx.r11.s64 = ctx.r11.s64 + 4952;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82457664
	if (ctx.cr6.eq) goto loc_82457664;
	// bl 0x82186190
	ctx.lr = 0x82457660;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82457664:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82457678"))) PPC_WEAK_FUNC(sub_82457678);
PPC_FUNC_IMPL(__imp__sub_82457678) {
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
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824576a4
	if (ctx.cr6.eq) goto loc_824576A4;
	// bl 0x82581e38
	ctx.lr = 0x824576A4;
	sub_82581E38(ctx, base);
loc_824576A4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824576b8
	if (ctx.cr6.eq) goto loc_824576B8;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_824576B8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824576cc
	if (ctx.cr6.eq) goto loc_824576CC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_824576CC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r11,r11,4952
	ctx.r11.s64 = ctx.r11.s64 + 4952;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x824576f0
	if (ctx.cr6.eq) goto loc_824576F0;
	// bl 0x82186190
	ctx.lr = 0x824576EC;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_824576F0:
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

__attribute__((alias("__imp__sub_82457708"))) PPC_WEAK_FUNC(sub_82457708);
PPC_FUNC_IMPL(__imp__sub_82457708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82457710;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82457738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82457758
	if (ctx.cr6.eq) goto loc_82457758;
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825d2aa8
	ctx.lr = 0x82457754;
	sub_825D2AA8(ctx, base);
	// b 0x8245775c
	goto loc_8245775C;
loc_82457758:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
loc_8245775C:
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// lvx128 v13,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// vaddfp v13,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx v13,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82457788"))) PPC_WEAK_FUNC(sub_82457788);
PPC_FUNC_IMPL(__imp__sub_82457788) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824577D0"))) PPC_WEAK_FUNC(sub_824577D0);
PPC_FUNC_IMPL(__imp__sub_824577D0) {
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
	ctx.lr = 0x82457800;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8245782c
	if (ctx.cr6.eq) goto loc_8245782C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,25796
	ctx.r10.s64 = ctx.r11.s64 + 25796;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82457830
	goto loc_82457830;
loc_8245782C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82457830:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8245787c
	if (!ctx.cr6.eq) goto loc_8245787C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8245785c
	if (ctx.cr6.eq) goto loc_8245785C;
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
	ctx.lr = 0x8245785C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8245785C:
	// lis r10,-32075
	ctx.r10.s64 = -2102067200;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,-20280(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20280);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x8245787C;
	sub_821E0968(ctx, base);
loc_8245787C:
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

__attribute__((alias("__imp__sub_82457898"))) PPC_WEAK_FUNC(sub_82457898);
PPC_FUNC_IMPL(__imp__sub_82457898) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x824578A0;
	__savegprlr_29(ctx, base);
loc_824578A0:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8245798c
	if (ctx.cr6.eq) goto loc_8245798C;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r31,r11,30
	ctx.r31.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824578dc
	if (!ctx.cr6.eq) goto loc_824578DC;
	// twi 31,r0,22
loc_824578DC:
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x824578f4
	if (ctx.cr6.lt) goto loc_824578F4;
	// twi 31,r0,22
loc_824578F4:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82457904
	if (ctx.cr6.gt) goto loc_82457904;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_82457904:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r8,r10,30
	ctx.r8.u64 = ctx.r10.u32 & 0x3;
	// bne cr6,0x82457930
	if (!ctx.cr6.eq) goto loc_82457930;
	// twi 31,r0,22
loc_82457930:
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r29,12(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82457948
	if (ctx.cr6.lt) goto loc_82457948;
	// twi 31,r0,22
loc_82457948:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82457958
	if (ctx.cr6.gt) goto loc_82457958;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_82457958:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r7,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// b 0x824578a0
	goto loc_824578A0;
loc_8245798C:
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824579A8"))) PPC_WEAK_FUNC(sub_824579A8);
PPC_FUNC_IMPL(__imp__sub_824579A8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x824579B0;
	__savegprlr_29(ctx, base);
loc_824579B0:
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82457a94
	if (ctx.cr6.eq) goto loc_82457A94;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r8,r10,30
	ctx.r8.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// bne cr6,0x824579f4
	if (!ctx.cr6.eq) goto loc_824579F4;
	// twi 31,r0,22
loc_824579F4:
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82457a0c
	if (ctx.cr6.lt) goto loc_82457A0C;
	// twi 31,r0,22
loc_82457A0C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82457a1c
	if (ctx.cr6.gt) goto loc_82457A1C;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_82457A1C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm r29,r8,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwzx r30,r11,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r31,r11,30
	ctx.r31.u64 = ctx.r11.u32 & 0x3;
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82457a50
	if (!ctx.cr6.eq) goto loc_82457A50;
	// twi 31,r0,22
loc_82457A50:
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82457a68
	if (ctx.cr6.lt) goto loc_82457A68;
	// twi 31,r0,22
loc_82457A68:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82457a78
	if (ctx.cr6.gt) goto loc_82457A78;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_82457A78:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r30,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// b 0x824579b0
	goto loc_824579B0;
loc_82457A94:
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82457AB0"))) PPC_WEAK_FUNC(sub_82457AB0);
PPC_FUNC_IMPL(__imp__sub_82457AB0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r11,r9,20
	ctx.r11.s64 = ctx.r9.s64 + 20;
	// addi r10,r3,36
	ctx.r10.s64 = ctx.r3.s64 + 36;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82457B18"))) PPC_WEAK_FUNC(sub_82457B18);
PPC_FUNC_IMPL(__imp__sub_82457B18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stfs f1,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r11,r9,20
	ctx.r11.s64 = ctx.r9.s64 + 20;
	// addi r10,r3,36
	ctx.r10.s64 = ctx.r3.s64 + 36;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82457B78"))) PPC_WEAK_FUNC(sub_82457B78);
PPC_FUNC_IMPL(__imp__sub_82457B78) {
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
	// beq cr6,0x82457ba4
	if (ctx.cr6.eq) goto loc_82457BA4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x82457BA4;
	sub_82659610(ctx, base);
loc_82457BA4:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82457bb8
	if (ctx.cr6.eq) goto loc_82457BB8;
	// bl 0x82581e38
	ctx.lr = 0x82457BB8;
	sub_82581E38(ctx, base);
loc_82457BB8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82457bd0
	if (ctx.cr6.eq) goto loc_82457BD0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82457BD0:
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

__attribute__((alias("__imp__sub_82457BE8"))) PPC_WEAK_FUNC(sub_82457BE8);
PPC_FUNC_IMPL(__imp__sub_82457BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82457BF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825d2bc0
	ctx.lr = 0x82457C04;
	sub_825D2BC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x825d2cb0
	ctx.lr = 0x82457C14;
	sub_825D2CB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82168c48
	ctx.lr = 0x82457C24;
	sub_82168C48(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
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
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82457c7c
	if (ctx.cr6.eq) goto loc_82457C7C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82457C7C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

