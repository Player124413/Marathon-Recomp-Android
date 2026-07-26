#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82660DA0"))) PPC_WEAK_FUNC(sub_82660DA0);
PPC_FUNC_IMPL(__imp__sub_82660DA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82660dd8
	if (ctx.cr6.eq) goto loc_82660DD8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82660dd8
	if (ctx.cr6.eq) goto loc_82660DD8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x82660ddc
	goto loc_82660DDC;
loc_82660DD8:
	// addi r11,r3,44
	ctx.r11.s64 = ctx.r3.s64 + 44;
loc_82660DDC:
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82660E00"))) PPC_WEAK_FUNC(sub_82660E00);
PPC_FUNC_IMPL(__imp__sub_82660E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// bl 0x82671418
	ctx.lr = 0x82660E48;
	sub_82671418(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82660ea4
	if (ctx.cr6.eq) goto loc_82660EA4;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82660ea4
	if (!ctx.cr0.eq) goto loc_82660EA4;
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
	ctx.lr = 0x82660EA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82660EA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82660EC0"))) PPC_WEAK_FUNC(sub_82660EC0);
PPC_FUNC_IMPL(__imp__sub_82660EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82660EC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82660ef8
	if (!ctx.cr6.eq) goto loc_82660EF8;
loc_82660EE4:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_82660EF8:
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8265cea8
	ctx.lr = 0x82660F04;
	sub_8265CEA8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82660ee4
	if (ctx.cr6.eq) goto loc_82660EE4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8265a848
	ctx.lr = 0x82660F1C;
	sub_8265A848(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82660f68
	if (ctx.cr6.eq) goto loc_82660F68;
	// addi r11,r30,80
	ctx.r11.s64 = ctx.r30.s64 + 80;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82661b60
	ctx.lr = 0x82660F68;
	sub_82661B60(ctx, base);
loc_82660F68:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// beq cr6,0x82660f7c
	if (ctx.cr6.eq) goto loc_82660F7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x82660F7C;
	sub_82659610(ctx, base);
loc_82660F7C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82660F88"))) PPC_WEAK_FUNC(sub_82660F88);
PPC_FUNC_IMPL(__imp__sub_82660F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8265a830
	ctx.lr = 0x82660FB0;
	sub_8265A830(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82660ff4
	if (ctx.cr6.eq) goto loc_82660FF4;
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// addi r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 + 28;
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// bl 0x82659610
	ctx.lr = 0x82660FF0;
	sub_82659610(ctx, base);
	// b 0x82660ffc
	goto loc_82660FFC;
loc_82660FF4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82660FFC:
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

__attribute__((alias("__imp__sub_82661018"))) PPC_WEAK_FUNC(sub_82661018);
PPC_FUNC_IMPL(__imp__sub_82661018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8265acc0
	ctx.lr = 0x82661040;
	sub_8265ACC0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82661084
	if (ctx.cr6.eq) goto loc_82661084;
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// bl 0x82659610
	ctx.lr = 0x82661080;
	sub_82659610(ctx, base);
	// b 0x8266108c
	goto loc_8266108C;
loc_82661084:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8266108C:
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

__attribute__((alias("__imp__sub_826610A8"))) PPC_WEAK_FUNC(sub_826610A8);
PPC_FUNC_IMPL(__imp__sub_826610A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x826610B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,6616
	ctx.r11.s64 = ctx.r11.s64 + 6616;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r30,r28,80
	ctx.r30.s64 = ctx.r28.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,84(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x82581618
	ctx.lr = 0x826610E8;
	sub_82581618(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82661110
	if (ctx.cr6.eq) goto loc_82661110;
loc_826610F8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne cr6,0x826610f8
	if (!ctx.cr6.eq) goto loc_826610F8;
loc_82661110:
	// addi r11,r28,92
	ctx.r11.s64 = ctx.r28.s64 + 92;
	// stw r30,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r30.u32);
	// stw r30,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r30.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82661140
	if (ctx.cr6.eq) goto loc_82661140;
loc_82661128:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// bne cr6,0x82661128
	if (!ctx.cr6.eq) goto loc_82661128;
loc_82661140:
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r10,r10,2904
	ctx.r10.s64 = ctx.r10.s64 + 2904;
	// addi r30,r28,68
	ctx.r30.s64 = ctx.r28.s64 + 68;
	// lwz r4,72(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// bl 0x82581618
	ctx.lr = 0x82661178;
	sub_82581618(ctx, base);
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// lwz r4,60(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,2904
	ctx.r11.s64 = ctx.r11.s64 + 2904;
	// addi r29,r28,56
	ctx.r29.s64 = ctx.r28.s64 + 56;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x82581618
	ctx.lr = 0x826611A8;
	sub_82581618(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x826611cc
	if (ctx.cr6.eq) goto loc_826611CC;
loc_826611B4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne cr6,0x826611b4
	if (!ctx.cr6.eq) goto loc_826611B4;
loc_826611CC:
	// stw r29,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r29.u32);
	// stw r29,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x826611f8
	if (ctx.cr6.eq) goto loc_826611F8;
loc_826611E0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne cr6,0x826611e0
	if (!ctx.cr6.eq) goto loc_826611E0;
loc_826611F8:
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// stw r30,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r30.u32);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r30,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r30.u32);
	// addi r11,r11,3000
	ctx.r11.s64 = ctx.r11.s64 + 3000;
	// lwz r4,36(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// addi r29,r28,32
	ctx.r29.s64 = ctx.r28.s64 + 32;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x82581618
	ctx.lr = 0x82661230;
	sub_82581618(ctx, base);
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,3000
	ctx.r11.s64 = ctx.r11.s64 + 3000;
	// addi r30,r28,20
	ctx.r30.s64 = ctx.r28.s64 + 20;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x82581618
	ctx.lr = 0x82661260;
	sub_82581618(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82661284
	if (ctx.cr6.eq) goto loc_82661284;
loc_8266126C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne cr6,0x8266126c
	if (!ctx.cr6.eq) goto loc_8266126C;
loc_82661284:
	// stw r30,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r30.u32);
	// stw r30,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r30.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x826612b0
	if (ctx.cr6.eq) goto loc_826612B0;
loc_82661298:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne cr6,0x82661298
	if (!ctx.cr6.eq) goto loc_82661298;
loc_826612B0:
	// addi r9,r28,44
	ctx.r9.s64 = ctx.r28.s64 + 44;
	// stw r29,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r29.u32);
	// stw r29,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r29.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x826612e0
	if (ctx.cr6.eq) goto loc_826612E0;
loc_826612C8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne cr6,0x826612c8
	if (!ctx.cr6.eq) goto loc_826612C8;
loc_826612E0:
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826612F0"))) PPC_WEAK_FUNC(sub_826612F0);
PPC_FUNC_IMPL(__imp__sub_826612F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x826612F8;
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
	// lwz r29,180(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r28,176(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// lwz r31,156(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r30,164(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82661344
	if (ctx.cr6.eq) goto loc_82661344;
loc_82661328:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82661338;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82661328
	if (!ctx.cr6.eq) goto loc_82661328;
loc_82661344:
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// stw r29,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r29.u32);
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82661360"))) PPC_WEAK_FUNC(sub_82661360);
PPC_FUNC_IMPL(__imp__sub_82661360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82661368;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826610a8
	ctx.lr = 0x82661380;
	sub_826610A8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82661394
	if (ctx.cr6.eq) goto loc_82661394;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821e0968
	ctx.lr = 0x82661394;
	sub_821E0968(ctx, base);
loc_82661394:
	// addi r29,r31,104
	ctx.r29.s64 = ctx.r31.s64 + 104;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826613a8
	if (ctx.cr6.eq) goto loc_826613A8;
	// bl 0x82186190
	ctx.lr = 0x826613A8;
	sub_82186190(ctx, base);
loc_826613A8:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// bl 0x8259d1a8
	ctx.lr = 0x826613C0;
	sub_8259D1A8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8259d1a8
	ctx.lr = 0x826613C8;
	sub_8259D1A8(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x8259d1a8
	ctx.lr = 0x826613D0;
	sub_8259D1A8(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x8259d1a8
	ctx.lr = 0x826613D8;
	sub_8259D1A8(ctx, base);
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// addi r10,r11,-12
	ctx.r10.s64 = ctx.r11.s64 + -12;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82661404
	if (ctx.cr6.eq) goto loc_82661404;
loc_826613EC:
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
	// bne cr6,0x826613ec
	if (!ctx.cr6.eq) goto loc_826613EC;
loc_82661404:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82661418
	if (ctx.cr6.eq) goto loc_82661418;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_82661418:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266142c
	if (ctx.cr6.eq) goto loc_8266142C;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8266142C:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8259d1a8
	ctx.lr = 0x82661434;
	sub_8259D1A8(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x8259d1a8
	ctx.lr = 0x8266143C;
	sub_8259D1A8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82661450
	if (ctx.cr6.eq) goto loc_82661450;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82661450:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82661464
	if (ctx.cr6.eq) goto loc_82661464;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82661464:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82661470"))) PPC_WEAK_FUNC(sub_82661470);
PPC_FUNC_IMPL(__imp__sub_82661470) {
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
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r10,8464
	ctx.r10.s64 = ctx.r10.s64 + 8464;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lfs f0,14088(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// fdivs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// ld r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// bl 0x8258c790
	ctx.lr = 0x826614EC;
	sub_8258C790(ctx, base);
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

__attribute__((alias("__imp__sub_82661500"))) PPC_WEAK_FUNC(sub_82661500);
PPC_FUNC_IMPL(__imp__sub_82661500) {
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
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r9,r9,7848
	ctx.r9.s64 = ctx.r9.s64 + 7848;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,68
	ctx.r5.s64 = ctx.r11.s64 + 68;
	// lfs f0,14088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,72(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// fdivs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// ld r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82594ba8
	ctx.lr = 0x82661568;
	sub_82594BA8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82661578"))) PPC_WEAK_FUNC(sub_82661578);
PPC_FUNC_IMPL(__imp__sub_82661578) {
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
	// lwz r4,44(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r5,r3,40
	ctx.r5.s64 = ctx.r3.s64 + 40;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r10,-3304
	ctx.r11.s64 = ctx.r10.s64 + -3304;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82585a60
	ctx.lr = 0x826615C8;
	sub_82585A60(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826615D8"))) PPC_WEAK_FUNC(sub_826615D8);
PPC_FUNC_IMPL(__imp__sub_826615D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x826615E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r29,r30,40
	ctx.r29.s64 = ctx.r30.s64 + 40;
	// lwz r31,44(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82661618
	if (ctx.cr6.eq) goto loc_82661618;
	// addi r28,r30,64
	ctx.r28.s64 = ctx.r30.s64 + 64;
loc_82661600:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x826702a0
	ctx.lr = 0x8266160C;
	sub_826702A0(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82661600
	if (!ctx.cr6.eq) goto loc_82661600;
loc_82661618:
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r11,r27,104
	ctx.r11.s64 = ctx.r27.s64 + 104;
	// addi r10,r10,5496
	ctx.r10.s64 = ctx.r10.s64 + 5496;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicl r9,r10,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82661654
	if (!ctx.cr6.gt) goto loc_82661654;
	// twi 31,r0,22
loc_82661654:
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
	// ble cr6,0x82661674
	if (!ctx.cr6.gt) goto loc_82661674;
	// twi 31,r0,22
loc_82661674:
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
	// bl 0x826612f0
	ctx.lr = 0x8266169C;
	sub_826612F0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826616B0"))) PPC_WEAK_FUNC(sub_826616B0);
PPC_FUNC_IMPL(__imp__sub_826616B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82661360
	ctx.lr = 0x826616D0;
	sub_82661360(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826616e8
	if (ctx.cr6.eq) goto loc_826616E8;
	// bl 0x82186190
	ctx.lr = 0x826616E4;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826616E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82661700"))) PPC_WEAK_FUNC(sub_82661700);
PPC_FUNC_IMPL(__imp__sub_82661700) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,3096
	ctx.r11.s64 = ctx.r11.s64 + 3096;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rldicl r9,r11,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82585a60
	ctx.lr = 0x82661758;
	sub_82585A60(ctx, base);
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,3288
	ctx.r11.s64 = ctx.r11.s64 + 3288;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r30,r31,68
	ctx.r30.s64 = ctx.r31.s64 + 68;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
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
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82585a60
	ctx.lr = 0x8266179C;
	sub_82585A60(ctx, base);
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,3584
	ctx.r11.s64 = ctx.r11.s64 + 3584;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r5,r31,44
	ctx.r5.s64 = ctx.r31.s64 + 44;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
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
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82585a60
	ctx.lr = 0x826617DC;
	sub_82585A60(ctx, base);
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82661830
	if (ctx.cr6.eq) goto loc_82661830;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82661830
	if (!ctx.cr6.eq) goto loc_82661830;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_82661830:
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82661880
	if (ctx.cr6.eq) goto loc_82661880;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82661880
	if (!ctx.cr6.eq) goto loc_82661880;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_82661880:
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,5592
	ctx.r11.s64 = ctx.r11.s64 + 5592;
	// addi r30,r31,92
	ctx.r30.s64 = ctx.r31.s64 + 92;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
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
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82585a60
	ctx.lr = 0x826618C4;
	sub_82585A60(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x826618ec
	if (ctx.cr6.eq) goto loc_826618EC;
	// li r9,0
	ctx.r9.s64 = 0;
loc_826618D4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne cr6,0x826618d4
	if (!ctx.cr6.eq) goto loc_826618D4;
loc_826618EC:
	// stw r30,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r30.u32);
	// stw r30,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82661910"))) PPC_WEAK_FUNC(sub_82661910);
PPC_FUNC_IMPL(__imp__sub_82661910) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 + 20;
	// addi r30,r11,236
	ctx.r30.s64 = ctx.r11.s64 + 236;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// addi r8,r3,44
	ctx.r8.s64 = ctx.r3.s64 + 44;
	// addi r7,r3,56
	ctx.r7.s64 = ctx.r3.s64 + 56;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addi r6,r3,68
	ctx.r6.s64 = ctx.r3.s64 + 68;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r5,r3,80
	ctx.r5.s64 = ctx.r3.s64 + 80;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r31,r3,92
	ctx.r31.s64 = ctx.r3.s64 + 92;
	// stw r3,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r3.u32);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// stw r7,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r7.u32);
	// stw r7,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r7.u32);
	// stw r6,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r6.u32);
	// stw r6,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r6.u32);
	// stw r5,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r5.u32);
	// stw r5,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r5.u32);
	// stw r31,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// stw r31,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r31.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826619A8"))) PPC_WEAK_FUNC(sub_826619A8);
PPC_FUNC_IMPL(__imp__sub_826619A8) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r3,r3,104
	ctx.r3.s64 = ctx.r3.s64 + 104;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x823879c8
	ctx.lr = 0x826619C4;
	sub_823879C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826619D8"))) PPC_WEAK_FUNC(sub_826619D8);
PPC_FUNC_IMPL(__imp__sub_826619D8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bnelr 
	if (!ctx.cr0.eq) return;
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

__attribute__((alias("__imp__sub_82661A04"))) PPC_WEAK_FUNC(sub_82661A04);
PPC_FUNC_IMPL(__imp__sub_82661A04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82661A08"))) PPC_WEAK_FUNC(sub_82661A08);
PPC_FUNC_IMPL(__imp__sub_82661A08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82661a50
	if (!ctx.cr6.eq) goto loc_82661A50;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82661a50
	if (ctx.cr6.eq) goto loc_82661A50;
	// addi r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 + 92;
	// addi r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 + 28;
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
loc_82661A50:
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// addi r6,r11,32
	ctx.r6.s64 = ctx.r11.s64 + 32;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r4,48
	ctx.r8.s64 = ctx.r4.s64 + 48;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82661A90"))) PPC_WEAK_FUNC(sub_82661A90);
PPC_FUNC_IMPL(__imp__sub_82661A90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82661AA0"))) PPC_WEAK_FUNC(sub_82661AA0);
PPC_FUNC_IMPL(__imp__sub_82661AA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r10,r3,40
	ctx.r10.s64 = ctx.r3.s64 + 40;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82661b08
	if (ctx.cr6.eq) goto loc_82661B08;
loc_82661AD0:
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,52(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// rlwinm r8,r8,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82661af4
	if (!ctx.cr6.eq) goto loc_82661AF4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82661AF4:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82661ad0
	if (!ctx.cr6.eq) goto loc_82661AD0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82661B08:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82661B18"))) PPC_WEAK_FUNC(sub_82661B18);
PPC_FUNC_IMPL(__imp__sub_82661B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r3,40
	ctx.r10.s64 = ctx.r3.s64 + 40;
	// addi r9,r11,244
	ctx.r9.s64 = ctx.r11.s64 + 244;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r3,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r3.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r3,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r3.u32);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82661B60"))) PPC_WEAK_FUNC(sub_82661B60);
PPC_FUNC_IMPL(__imp__sub_82661B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b8
	ctx.lr = 0x82661B68;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82661c54
	if (!ctx.cr6.gt) goto loc_82661C54;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82661B94:
	// lwz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82660f88
	ctx.lr = 0x82661BAC;
	sub_82660F88(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82661c2c
	if (ctx.cr6.eq) goto loc_82661C2C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82661c24
	if (ctx.cr6.eq) goto loc_82661C24;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82670b08
	ctx.lr = 0x82661BD4;
	sub_82670B08(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r30,40
	ctx.r11.s64 = ctx.r30.s64 + 40;
	// stw r30,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r30.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
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
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82661c24
	if (ctx.cr6.eq) goto loc_82661C24;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
loc_82661C24:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82581e38
	ctx.lr = 0x82661C2C;
	sub_82581E38(ctx, base);
loc_82661C2C:
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,108
	ctx.r28.s64 = ctx.r28.s64 + 108;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82661b94
	if (ctx.cr6.lt) goto loc_82661B94;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82661c54
	if (ctx.cr6.eq) goto loc_82661C54;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_82661C54:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82661C60"))) PPC_WEAK_FUNC(sub_82661C60);
PPC_FUNC_IMPL(__imp__sub_82661C60) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r10,6616
	ctx.r10.s64 = ctx.r10.s64 + 6616;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,244
	ctx.r11.s64 = ctx.r11.s64 + 244;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stb r10,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r10.u8);
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// bl 0x82581618
	ctx.lr = 0x82661CB4;
	sub_82581618(ctx, base);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82661cc4
	if (ctx.cr6.eq) goto loc_82661CC4;
	// bl 0x82581e38
	ctx.lr = 0x82661CC4;
	sub_82581E38(ctx, base);
loc_82661CC4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259d1a8
	ctx.lr = 0x82661CCC;
	sub_8259D1A8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82661ce0
	if (ctx.cr6.eq) goto loc_82661CE0;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82661CE0:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82661cf4
	if (ctx.cr6.eq) goto loc_82661CF4;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82661CF4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82661d08
	if (ctx.cr6.eq) goto loc_82661D08;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82661D08:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82661d1c
	if (ctx.cr6.eq) goto loc_82661D1C;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82661D1C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-5100
	ctx.r11.s64 = ctx.r11.s64 + -5100;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82661D40"))) PPC_WEAK_FUNC(sub_82661D40);
PPC_FUNC_IMPL(__imp__sub_82661D40) {
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
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-328
	ctx.r11.s64 = ctx.r11.s64 + -328;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r5,r31,40
	ctx.r5.s64 = ctx.r31.s64 + 40;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x82581618
	ctx.lr = 0x82661D80;
	sub_82581618(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82661DA0"))) PPC_WEAK_FUNC(sub_82661DA0);
PPC_FUNC_IMPL(__imp__sub_82661DA0) {
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
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-272
	ctx.r11.s64 = ctx.r11.s64 + -272;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r5,r31,40
	ctx.r5.s64 = ctx.r31.s64 + 40;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x82581618
	ctx.lr = 0x82661DE0;
	sub_82581618(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82661E00"))) PPC_WEAK_FUNC(sub_82661E00);
PPC_FUNC_IMPL(__imp__sub_82661E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82661E08;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// std r26,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r26.u64);
	// beq cr6,0x82661e50
	if (ctx.cr6.eq) goto loc_82661E50;
	// lbz r29,189(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 189);
	// lwz r28,184(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
loc_82661E30:
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82661E44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82661e30
	if (!ctx.cr6.eq) goto loc_82661E30;
loc_82661E50:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// std r26,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r26.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82661E60"))) PPC_WEAK_FUNC(sub_82661E60);
PPC_FUNC_IMPL(__imp__sub_82661E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82661c60
	ctx.lr = 0x82661E80;
	sub_82661C60(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82661e98
	if (ctx.cr6.eq) goto loc_82661E98;
	// bl 0x82186190
	ctx.lr = 0x82661E94;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82661E98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82661EB0"))) PPC_WEAK_FUNC(sub_82661EB0);
PPC_FUNC_IMPL(__imp__sub_82661EB0) {
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
	// lwz r4,44(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r5,r3,40
	ctx.r5.s64 = ctx.r3.s64 + 40;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// addi r11,r10,4416
	ctx.r11.s64 = ctx.r10.s64 + 4416;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r11,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r11.u16);
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// bl 0x82661e00
	ctx.lr = 0x82661EF0;
	sub_82661E00(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82661F00"))) PPC_WEAK_FUNC(sub_82661F00);
PPC_FUNC_IMPL(__imp__sub_82661F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,276
	ctx.r10.s64 = ctx.r11.s64 + 276;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82661F20"))) PPC_WEAK_FUNC(sub_82661F20);
PPC_FUNC_IMPL(__imp__sub_82661F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82661F28;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrldi r4,r30,32
	ctx.r4.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825d4c48
	ctx.lr = 0x82661F44;
	sub_825D4C48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82661fa0
	if (ctx.cr6.eq) goto loc_82661FA0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82186158
	ctx.lr = 0x82661F58;
	sub_82186158(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82186190
	ctx.lr = 0x82661F68;
	sub_82186190(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x826df680
	ctx.lr = 0x82661F78;
	sub_826DF680(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825d4cb0
	ctx.lr = 0x82661F84;
	sub_825D4CB0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x825d4eb8
	ctx.lr = 0x82661F94;
	sub_825D4EB8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82661FA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82661FB0"))) PPC_WEAK_FUNC(sub_82661FB0);
PPC_FUNC_IMPL(__imp__sub_82661FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x82661FD4;
	sub_82186190(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r11,r11,-5100
	ctx.r11.s64 = ctx.r11.s64 + -5100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82661ff8
	if (ctx.cr6.eq) goto loc_82661FF8;
	// bl 0x82186190
	ctx.lr = 0x82661FF4;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82661FF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82662010"))) PPC_WEAK_FUNC(sub_82662010);
PPC_FUNC_IMPL(__imp__sub_82662010) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82662028"))) PPC_WEAK_FUNC(sub_82662028);
PPC_FUNC_IMPL(__imp__sub_82662028) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,-3
	ctx.r11.s64 = ctx.r4.s64 + -3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82662040"))) PPC_WEAK_FUNC(sub_82662040);
PPC_FUNC_IMPL(__imp__sub_82662040) {
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
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x82662068
	if (!ctx.cr6.eq) goto loc_82662068;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x826620a4
	goto loc_826620A4;
loc_82662068:
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662088
	if (ctx.cr6.eq) goto loc_82662088;
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8266208c
	if (ctx.cr6.lt) goto loc_8266208C;
loc_82662088:
	// twi 31,r0,22
loc_8266208C:
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x826620a4
	if (ctx.cr6.eq) goto loc_826620A4;
	// bl 0x82659610
	ctx.lr = 0x826620A4;
	sub_82659610(ctx, base);
loc_826620A4:
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

__attribute__((alias("__imp__sub_826620C0"))) PPC_WEAK_FUNC(sub_826620C0);
PPC_FUNC_IMPL(__imp__sub_826620C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,284
	ctx.r10.s64 = ctx.r11.s64 + 284;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826620E0"))) PPC_WEAK_FUNC(sub_826620E0);
PPC_FUNC_IMPL(__imp__sub_826620E0) {
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
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r10,r10,284
	ctx.r10.s64 = ctx.r10.s64 + 284;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82662140
	if (ctx.cr6.eq) goto loc_82662140;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82662130
	if (ctx.cr6.eq) goto loc_82662130;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82662134
	if (ctx.cr6.lt) goto loc_82662134;
loc_82662130:
	// twi 31,r0,22
loc_82662134:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_82662140:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82662150
	if (ctx.cr6.eq) goto loc_82662150;
	// bl 0x82581e38
	ctx.lr = 0x82662150;
	sub_82581E38(ctx, base);
loc_82662150:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,4952
	ctx.r11.s64 = ctx.r11.s64 + 4952;
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

__attribute__((alias("__imp__sub_82662170"))) PPC_WEAK_FUNC(sub_82662170);
PPC_FUNC_IMPL(__imp__sub_82662170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82662178;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x826621c8
	if (ctx.cr6.eq) goto loc_826621C8;
loc_82662190:
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826621ac
	if (ctx.cr6.eq) goto loc_826621AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x826621AC;
	sub_82659610(ctx, base);
loc_826621AC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826621c0
	if (ctx.cr6.eq) goto loc_826621C0;
	// bl 0x82581e38
	ctx.lr = 0x826621C0;
	sub_82581E38(ctx, base);
loc_826621C0:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82662190
	if (!ctx.cr6.eq) goto loc_82662190;
loc_826621C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826621D8"))) PPC_WEAK_FUNC(sub_826621D8);
PPC_FUNC_IMPL(__imp__sub_826621D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x826621E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r7,81(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82662170
	ctx.lr = 0x82662214;
	sub_82662170(ctx, base);
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r11,r29
	ctx.r3.s64 = ctx.r29.s64 - ctx.r11.s64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82662230"))) PPC_WEAK_FUNC(sub_82662230);
PPC_FUNC_IMPL(__imp__sub_82662230) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,8208
	ctx.r11.s64 = ctx.r11.s64 + 8208;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// stb r10,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r10.u8);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82662278
	if (!ctx.cr6.gt) goto loc_82662278;
	// twi 31,r0,22
loc_82662278:
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82662298
	if (!ctx.cr6.gt) goto loc_82662298;
	// twi 31,r0,22
loc_82662298:
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// bl 0x8265b220
	ctx.lr = 0x826622B8;
	sub_8265B220(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826622c8
	if (ctx.cr6.eq) goto loc_826622C8;
	// bl 0x82186190
	ctx.lr = 0x826622C8;
	sub_82186190(ctx, base);
loc_826622C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826622e8
	if (ctx.cr6.eq) goto loc_826622E8;
	// bl 0x821601b8
	ctx.lr = 0x826622E8;
	sub_821601B8(ctx, base);
loc_826622E8:
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

__attribute__((alias("__imp__sub_82662300"))) PPC_WEAK_FUNC(sub_82662300);
PPC_FUNC_IMPL(__imp__sub_82662300) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a1aa8
	ctx.lr = 0x82662324;
	sub_823A1AA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266233c
	if (ctx.cr6.eq) goto loc_8266233C;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82662340
	if (ctx.cr6.eq) goto loc_82662340;
loc_8266233C:
	// twi 31,r0,22
loc_82662340:
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
	// beq cr6,0x82662370
	if (ctx.cr6.eq) goto loc_82662370;
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_82662370:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266237c
	if (!ctx.cr6.eq) goto loc_8266237C;
	// twi 31,r0,22
loc_8266237C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8266238c
	if (!ctx.cr6.eq) goto loc_8266238C;
	// twi 31,r0,22
loc_8266238C:
	// lwz r3,40(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
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

__attribute__((alias("__imp__sub_826623A8"))) PPC_WEAK_FUNC(sub_826623A8);
PPC_FUNC_IMPL(__imp__sub_826623A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x826623B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826623D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826624c8
	if (ctx.cr6.eq) goto loc_826624C8;
	// lis r28,-32045
	ctx.r28.s64 = -2100101120;
	// lwz r3,28564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28564);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826623F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// beq cr6,0x826624c8
	if (ctx.cr6.eq) goto loc_826624C8;
	// bl 0x82659610
	ctx.lr = 0x82662408;
	sub_82659610(ctx, base);
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826624c0
	if (ctx.cr6.eq) goto loc_826624C0;
	// addi r11,r29,68
	ctx.r11.s64 = ctx.r29.s64 + 68;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82662430
	if (ctx.cr6.lt) goto loc_82662430;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82662434
	goto loc_82662434;
loc_82662430:
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_82662434:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821620e8
	ctx.lr = 0x8266243C;
	sub_821620E8(ctx, base);
	// lwz r4,28564(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28564);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r29,40
	ctx.r5.s64 = ctx.r29.s64 + 40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82662460;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825fc7b8
	ctx.lr = 0x82662468;
	sub_825FC7B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82662484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x823032b8
	ctx.lr = 0x82662490;
	sub_823032B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// bl 0x82659610
	ctx.lr = 0x8266249C;
	sub_82659610(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826624ac
	if (ctx.cr6.eq) goto loc_826624AC;
	// bl 0x82581e38
	ctx.lr = 0x826624AC;
	sub_82581E38(ctx, base);
loc_826624AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581e38
	ctx.lr = 0x826624B4;
	sub_82581E38(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_826624C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581e38
	ctx.lr = 0x826624C8;
	sub_82581E38(ctx, base);
loc_826624C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// beq cr6,0x826624f0
	if (ctx.cr6.eq) goto loc_826624F0;
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
	ctx.lr = 0x826624F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826624F0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82662500"))) PPC_WEAK_FUNC(sub_82662500);
PPC_FUNC_IMPL(__imp__sub_82662500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82662508;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82662300
	ctx.lr = 0x82662520;
	sub_82662300(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82662040
	ctx.lr = 0x82662534;
	sub_82662040(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266268c
	if (ctx.cr6.eq) goto loc_8266268C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266268c
	if (ctx.cr6.eq) goto loc_8266268C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662570
	if (ctx.cr6.eq) goto loc_82662570;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82662574
	if (ctx.cr6.lt) goto loc_82662574;
loc_82662570:
	// twi 31,r0,22
loc_82662574:
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826625c8
	if (ctx.cr6.eq) goto loc_826625C8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826625a4
	if (ctx.cr6.eq) goto loc_826625A4;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x826625a8
	if (ctx.cr6.lt) goto loc_826625A8;
loc_826625A4:
	// twi 31,r0,22
loc_826625A8:
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82662694
	if (ctx.cr6.eq) goto loc_82662694;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82659610
	ctx.lr = 0x826625C0;
	sub_82659610(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82662694
	goto loc_82662694;
loc_826625C8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826623a8
	ctx.lr = 0x826625D4;
	sub_826623A8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82662688
	if (ctx.cr6.eq) goto loc_82662688;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266267c
	if (ctx.cr6.eq) goto loc_8266267C;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x82662610
	if (ctx.cr6.eq) goto loc_82662610;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82659610
	ctx.lr = 0x8266260C;
	sub_82659610(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82662610:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82662624;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82662638
	if (ctx.cr6.eq) goto loc_82662638;
	// bl 0x82581e38
	ctx.lr = 0x82662638;
	sub_82581E38(ctx, base);
loc_82662638:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662678
	if (ctx.cr6.eq) goto loc_82662678;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// bl 0x82659610
	ctx.lr = 0x82662660;
	sub_82659610(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82662670
	if (ctx.cr6.eq) goto loc_82662670;
	// bl 0x82581e38
	ctx.lr = 0x82662670;
	sub_82581E38(ctx, base);
loc_82662670:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82662694
	goto loc_82662694;
loc_82662678:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8266267C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82662688
	if (ctx.cr6.eq) goto loc_82662688;
	// bl 0x82581e38
	ctx.lr = 0x82662688;
	sub_82581E38(ctx, base);
loc_82662688:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8266268C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82662694:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826626a0
	if (ctx.cr6.eq) goto loc_826626A0;
	// bl 0x82581e38
	ctx.lr = 0x826626A0;
	sub_82581E38(ctx, base);
loc_826626A0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826626B0"))) PPC_WEAK_FUNC(sub_826626B0);
PPC_FUNC_IMPL(__imp__sub_826626B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x826626B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r25,0(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826626e0
	if (!ctx.cr6.eq) goto loc_826626E0;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x826626ec
	goto loc_826626EC;
loc_826626E0:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 2;
loc_826626EC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82662988
	if (ctx.cr6.eq) goto loc_82662988;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82662704
	if (!ctx.cr6.eq) goto loc_82662704;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82662710
	goto loc_82662710;
loc_82662704:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_82662710:
	// lis r9,16383
	ctx.r9.s64 = 1073676288;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82662730
	if (!ctx.cr6.lt) goto loc_82662730;
	// bl 0x8231c3a8
	ctx.lr = 0x82662728;
	sub_8231C3A8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_82662730:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82662740
	if (!ctx.cr6.eq) goto loc_82662740;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8266274c
	goto loc_8266274C;
loc_82662740:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_8266274C:
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8266288c
	if (!ctx.cr6.lt) goto loc_8266288C;
	// rlwinm r11,r8,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// li r26,0
	ctx.r26.s64 = 0;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82662770
	if (ctx.cr6.lt) goto loc_82662770;
	// add r26,r11,r8
	ctx.r26.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_82662770:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82662780
	if (!ctx.cr6.eq) goto loc_82662780;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8266278c
	goto loc_8266278C;
loc_82662780:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_8266278C:
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x826627b8
	if (!ctx.cr6.lt) goto loc_826627B8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826627a8
	if (!ctx.cr6.eq) goto loc_826627A8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x826627b4
	goto loc_826627B4;
loc_826627A8:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_826627B4:
	// add r26,r11,r27
	ctx.r26.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_826627B8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8265e0c8
	ctx.lr = 0x826627C4;
	sub_8265E0C8(ctx, base);
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r31,172(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// subf r11,r5,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r5.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r29,r6,r30
	ctx.r29.u64 = ctx.r6.u64 + ctx.r30.u64;
	// beq cr6,0x826627f0
	if (ctx.cr6.eq) goto loc_826627F0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x826dead8
	ctx.lr = 0x826627F0;
	sub_826DEAD8(ctx, base);
loc_826627F0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8266280c
	if (ctx.cr6.eq) goto loc_8266280C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
loc_82662800:
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82662800
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82662800;
loc_8266280C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662838
	if (ctx.cr6.eq) goto loc_82662838;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x826dead8
	ctx.lr = 0x82662838;
	sub_826DEAD8(ctx, base);
loc_82662838:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8266284c
	if (!ctx.cr6.eq) goto loc_8266284C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82662858
	goto loc_82662858;
loc_8266284C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_82662858:
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82662868
	if (ctx.cr6.eq) goto loc_82662868;
	// bl 0x82186190
	ctx.lr = 0x82662868;
	sub_82186190(ctx, base);
loc_82662868:
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r10.u32);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_8266288C:
	// lwz r30,8(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r31,172(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82662924
	if (!ctx.cr6.lt) goto loc_82662924;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826628c4
	if (ctx.cr6.eq) goto loc_826628C4;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x826dead8
	ctx.lr = 0x826628C4;
	sub_826DEAD8(ctx, base);
loc_826628C4:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// subf r10,r10,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r10.s64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826628ec
	if (ctx.cr6.eq) goto loc_826628EC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826628E0:
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x826628e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826628E0;
loc_826628EC:
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
	// beq cr6,0x82662988
	if (ctx.cr6.eq) goto loc_82662988;
loc_8266290C:
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8266290c
	if (!ctx.cr6.eq) goto loc_8266290C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_82662924:
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r29,r27,r30
	ctx.r29.s64 = ctx.r30.s64 - ctx.r27.s64;
	// subf r11,r29,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r29.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r26,r6,r3
	ctx.r26.u64 = ctx.r6.u64 + ctx.r3.u64;
	// beq cr6,0x82662954
	if (ctx.cr6.eq) goto loc_82662954;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x826dead8
	ctx.lr = 0x82662954;
	sub_826DEAD8(ctx, base);
loc_82662954:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r26,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r26.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258ba20
	ctx.lr = 0x82662968;
	sub_8258BA20(ctx, base);
	// add r10,r27,r31
	ctx.r10.u64 = ctx.r27.u64 + ctx.r31.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82662988
	if (ctx.cr6.eq) goto loc_82662988;
loc_82662978:
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82662978
	if (!ctx.cr6.eq) goto loc_82662978;
loc_82662988:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82662990"))) PPC_WEAK_FUNC(sub_82662990);
PPC_FUNC_IMPL(__imp__sub_82662990) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x826629c8
	if (!ctx.cr6.gt) goto loc_826629C8;
	// twi 31,r0,22
loc_826629C8:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x826629e0
	if (!ctx.cr6.gt) goto loc_826629E0;
	// twi 31,r0,22
loc_826629E0:
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x8258bdf0
	ctx.lr = 0x82662A00;
	sub_8258BDF0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82662a14
	if (!ctx.cr6.gt) goto loc_82662A14;
	// twi 31,r0,22
loc_82662A14:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826626b0
	ctx.lr = 0x82662A30;
	sub_826626B0(ctx, base);
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

__attribute__((alias("__imp__sub_82662A48"))) PPC_WEAK_FUNC(sub_82662A48);
PPC_FUNC_IMPL(__imp__sub_82662A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82662A50;
	__savegprlr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r29,-1
	ctx.r29.s64 = -1;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r26,8(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// bl 0x82161d10
	ctx.lr = 0x82662A90;
	sub_82161D10(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
	// bl 0x82161d10
	ctx.lr = 0x82662AB0;
	sub_82161D10(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r26,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r26.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82662ac8
	if (ctx.cr6.lt) goto loc_82662AC8;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82186190
	ctx.lr = 0x82662AC8;
	sub_82186190(ctx, base);
loc_82662AC8:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// stb r31,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r31.u8);
	// bl 0x82161d10
	ctx.lr = 0x82662AF4;
	sub_82161D10(ctx, base);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// bl 0x825bcbf8
	ctx.lr = 0x82662B0C;
	sub_825BCBF8(ctx, base);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82662b20
	if (ctx.cr6.lt) goto loc_82662B20;
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x82186190
	ctx.lr = 0x82662B20;
	sub_82186190(ctx, base);
loc_82662B20:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r31,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r31.u8);
	// blt cr6,0x82662b40
	if (ctx.cr6.lt) goto loc_82662B40;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82186190
	ctx.lr = 0x82662B40;
	sub_82186190(ctx, base);
loc_82662B40:
	// lbz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
	// beq cr6,0x82662b6c
	if (ctx.cr6.eq) goto loc_82662B6C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r28,12
	ctx.r3.s64 = ctx.r28.s64 + 12;
	// stw r26,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
	// bl 0x822d9150
	ctx.lr = 0x82662B6C;
	sub_822D9150(ctx, base);
loc_82662B6C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82662B78"))) PPC_WEAK_FUNC(sub_82662B78);
PPC_FUNC_IMPL(__imp__sub_82662B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82662B80;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82662ba8
	if (ctx.cr6.eq) goto loc_82662BA8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82160140
	ctx.lr = 0x82662BA8;
	sub_82160140(ctx, base);
loc_82662BA8:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82662bb8
	if (ctx.cr6.eq) goto loc_82662BB8;
	// bl 0x821601b8
	ctx.lr = 0x82662BB8;
	sub_821601B8(ctx, base);
loc_82662BB8:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82662be0
	if (ctx.cr6.eq) goto loc_82662BE0;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r4,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 2;
loc_82662BE0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82662990
	ctx.lr = 0x82662BEC;
	sub_82662990(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82662BF8"))) PPC_WEAK_FUNC(sub_82662BF8);
PPC_FUNC_IMPL(__imp__sub_82662BF8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82734d38
	ctx.lr = 0x82662C1C;
	sub_82734D38(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82662c38
	if (ctx.cr6.lt) goto loc_82662C38;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826722b8
	ctx.lr = 0x82662C30;
	sub_826722B8(ctx, base);
	// stfs f1,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// b 0x82662c44
	goto loc_82662C44;
loc_82662C38:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
loc_82662C44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82662C60"))) PPC_WEAK_FUNC(sub_82662C60);
PPC_FUNC_IMPL(__imp__sub_82662C60) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82734d38
	ctx.lr = 0x82662C8C;
	sub_82734D38(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// blt cr6,0x82662cb0
	if (ctx.cr6.lt) goto loc_82662CB0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826722b8
	ctx.lr = 0x82662CA8;
	sub_826722B8(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// b 0x82662cb4
	goto loc_82662CB4;
loc_82662CB0:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
loc_82662CB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82734d38
	ctx.lr = 0x82662CBC;
	sub_82734D38(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// blt cr6,0x82662cd4
	if (ctx.cr6.lt) goto loc_82662CD4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826722b8
	ctx.lr = 0x82662CD0;
	sub_826722B8(ctx, base);
	// b 0x82662cd8
	goto loc_82662CD8;
loc_82662CD4:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82662CD8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// lfs f0,320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82662D18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82662D38"))) PPC_WEAK_FUNC(sub_82662D38);
PPC_FUNC_IMPL(__imp__sub_82662D38) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82734d38
	ctx.lr = 0x82662D5C;
	sub_82734D38(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82662d74
	if (ctx.cr6.lt) goto loc_82662D74;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826722b8
	ctx.lr = 0x82662D70;
	sub_826722B8(ctx, base);
	// b 0x82662d7c
	goto loc_82662D7C;
loc_82662D74:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6100);
	ctx.f1.f64 = double(temp.f32);
loc_82662D7C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// lfs f0,328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,-11544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,-11548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11548);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82662DD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82662DF0"))) PPC_WEAK_FUNC(sub_82662DF0);
PPC_FUNC_IMPL(__imp__sub_82662DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82662DF8;
	__savegprlr_26(ctx, base);
	// li r12,-80
	ctx.r12.s64 = -80;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,-14700(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14700);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// addi r31,r9,-14716
	ctx.r31.s64 = ctx.r9.s64 + -14716;
	// bne cr6,0x82662e7c
	if (!ctx.cr6.eq) goto loc_82662E7C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-14700(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14700, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-29804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,20440(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20440);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,14840(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14840);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f13,6448(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6448);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f13,27856(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27856);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_82662E7C:
	// addi r11,r29,144
	ctx.r11.s64 = ctx.r29.s64 + 144;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// lvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blt cr6,0x82663018
	if (ctx.cr6.lt) goto loc_82663018;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f13,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,316(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82663018
	if (!ctx.cr6.gt) goto loc_82663018;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r29,16
	ctx.r30.s64 = ctx.r29.s64 + 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r30,96
	ctx.r4.s64 = ctx.r30.s64 + 96;
	// lfs f1,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825d3b90
	ctx.lr = 0x82662EC4;
	sub_825D3B90(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f0,280(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f13,276(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 276);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r30,80
	ctx.r10.s64 = ctx.r30.s64 + 80;
	// lfs f12,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// stvx v13,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r11,80
	ctx.r7.s64 = ctx.r11.s64 + 80;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r11,96
	ctx.r6.s64 = ctx.r11.s64 + 96;
	// addi r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 + 112;
	// stvx128 v127,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r11,160
	ctx.r9.s64 = ctx.r11.s64 + 160;
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r11,176
	ctx.r5.s64 = ctx.r11.s64 + 176;
	// fadds f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r11,192
	ctx.r4.s64 = ctx.r11.s64 + 192;
	// addi r3,r11,240
	ctx.r3.s64 = ctx.r11.s64 + 240;
	// addi r30,r11,256
	ctx.r30.s64 = ctx.r11.s64 + 256;
	// addi r29,r11,272
	ctx.r29.s64 = ctx.r11.s64 + 272;
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// lfs f9,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f8.f64 = double(temp.f32);
	// fadds f10,f6,f9
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// lfs f7,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f9,f9,f12,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmadds f12,f8,f12,f7
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f7.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r26,r1,80
	ctx.r26.s64 = ctx.r1.s64 + 80;
	// fadds f11,f7,f8
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// lvx128 v0,r0,r26
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v127,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v127,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v127,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82663018:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// li r0,-80
	ctx.r0.s64 = -80;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82663028"))) PPC_WEAK_FUNC(sub_82663028);
PPC_FUNC_IMPL(__imp__sub_82663028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b8
	ctx.lr = 0x82663030;
	__savegprlr_24(ctx, base);
	// li r12,-96
	ctx.r12.s64 = -96;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,-14680(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14680);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// addi r31,r9,-14696
	ctx.r31.s64 = ctx.r9.s64 + -14696;
	// bne cr6,0x826630b4
	if (!ctx.cr6.eq) goto loc_826630B4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-14680(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14680, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-29804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,20440(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20440);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,14840(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14840);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f13,6448(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6448);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f13,27856(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27856);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_826630B4:
	// addi r11,r29,144
	ctx.r11.s64 = ctx.r29.s64 + 144;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// lvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blt cr6,0x82663278
	if (ctx.cr6.lt) goto loc_82663278;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f13,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,316(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82663278
	if (!ctx.cr6.gt) goto loc_82663278;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r29,16
	ctx.r30.s64 = ctx.r29.s64 + 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r30,96
	ctx.r4.s64 = ctx.r30.s64 + 96;
	// lfs f1,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825d3b90
	ctx.lr = 0x826630FC;
	sub_825D3B90(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,276(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 276);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f13,280(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r30,80
	ctx.r10.s64 = ctx.r30.s64 + 80;
	// addi r7,r11,48
	ctx.r7.s64 = ctx.r11.s64 + 48;
	// addi r6,r11,80
	ctx.r6.s64 = ctx.r11.s64 + 80;
	// addi r5,r11,128
	ctx.r5.s64 = ctx.r11.s64 + 128;
	// addi r4,r11,160
	ctx.r4.s64 = ctx.r11.s64 + 160;
	// lvx128 v12,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r11,176
	ctx.r3.s64 = ctx.r11.s64 + 176;
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r11,192
	ctx.r30.s64 = ctx.r11.s64 + 192;
	// stvx128 v127,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r11,112
	ctx.r9.s64 = ctx.r11.s64 + 112;
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r29,r11,208
	ctx.r29.s64 = ctx.r11.s64 + 208;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r26,r11,240
	ctx.r26.s64 = ctx.r11.s64 + 240;
	// addi r25,r11,256
	ctx.r25.s64 = ctx.r11.s64 + 256;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stvx v12,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r11,96
	ctx.r10.s64 = ctx.r11.s64 + 96;
	// lfs f10,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// lfs f9,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f9.f64 = double(temp.f32);
	// fadds f11,f7,f10
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// lfs f8,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f10,f10,f0,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fmadds f0,f9,f0,f8
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r24,r1,80
	ctx.r24.s64 = ctx.r1.s64 + 80;
	// fadds f12,f8,f9
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// lvx128 v13,r0,r24
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvx128 v13,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v127,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v127,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stvx v13,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r11,288
	ctx.r9.s64 = ctx.r11.s64 + 288;
	// stvx v0,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r11,272
	ctx.r10.s64 = ctx.r11.s64 + 272;
	// stvx v13,r0,r26
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r26.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// stvx128 v127,r0,r25
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r25.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82663278:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// li r0,-96
	ctx.r0.s64 = -96;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82663288"))) PPC_WEAK_FUNC(sub_82663288);
PPC_FUNC_IMPL(__imp__sub_82663288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r11,332
	ctx.r5.s64 = ctx.r11.s64 + 332;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826632C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826632d4
	if (ctx.cr6.eq) goto loc_826632D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x826632D4;
	sub_82659610(ctx, base);
loc_826632D4:
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826632e8
	if (ctx.cr6.eq) goto loc_826632E8;
	// bl 0x82581e38
	ctx.lr = 0x826632E8;
	sub_82581E38(ctx, base);
loc_826632E8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826632f8
	if (ctx.cr6.eq) goto loc_826632F8;
	// bl 0x82581e38
	ctx.lr = 0x826632F8;
	sub_82581E38(ctx, base);
loc_826632F8:
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

__attribute__((alias("__imp__sub_82663318"))) PPC_WEAK_FUNC(sub_82663318);
PPC_FUNC_IMPL(__imp__sub_82663318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8a0
	ctx.lr = 0x82663320;
	__savegprlr_18(ctx, base);
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x826dfb80
	ctx.lr = 0x82663328;
	__savefpr_26(ctx, base);
	// li r12,-208
	ctx.r12.s64 = -208;
	// stvx128 v126,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,-192
	ctx.r12.s64 = -192;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// lis r31,-32255
	ctx.r31.s64 = -2113863680;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lwz r11,-14612(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14612);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lfs f8,27856(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 27856);
	ctx.f8.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f10,6448(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6448);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// lfs f9,14840(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 14840);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,20440(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20440);
	ctx.f11.f64 = double(temp.f32);
	// addi r25,r9,-14628
	ctx.r25.s64 = ctx.r9.s64 + -14628;
	// lfs f0,-29804(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x826633b0
	if (!ctx.cr6.eq) goto loc_826633B0;
	// fmuls f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f13,0(r25)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// fmuls f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f13,4(r25)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r25.u32 + 4, temp.u32);
	// fmuls f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f13,8(r25)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r25.u32 + 8, temp.u32);
	// fmuls f13,f0,f8
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stfs f13,12(r25)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r25.u32 + 12, temp.u32);
	// stw r11,-14612(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14612, ctx.r11.u32);
loc_826633B0:
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// lfs f13,3548(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3548);
	ctx.f13.f64 = double(temp.f32);
	// addi r20,r9,-14644
	ctx.r20.s64 = ctx.r9.s64 + -14644;
	// lfs f12,9324(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9324);
	ctx.f12.f64 = double(temp.f32);
	// bne cr6,0x826633fc
	if (!ctx.cr6.eq) goto loc_826633FC;
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f11,0(r20)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r20.u32 + 0, temp.u32);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// fmuls f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f11,4(r20)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r20.u32 + 4, temp.u32);
	// fmuls f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f11,8(r20)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r20.u32 + 8, temp.u32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f11,12(r20)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r20.u32 + 12, temp.u32);
	// stw r11,-14612(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14612, ctx.r11.u32);
loc_826633FC:
	// rlwinm r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// addi r21,r9,-14660
	ctx.r21.s64 = ctx.r9.s64 + -14660;
	// bne cr6,0x82663438
	if (!ctx.cr6.eq) goto loc_82663438;
	// fmuls f11,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f11,0(r21)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r21.u32 + 0, temp.u32);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// fmuls f11,f0,f9
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f11,4(r21)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r21.u32 + 4, temp.u32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f11,8(r21)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r21.u32 + 8, temp.u32);
	// fmuls f11,f0,f8
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stfs f11,12(r21)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r21.u32 + 12, temp.u32);
	// stw r11,-14612(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14612, ctx.r11.u32);
loc_82663438:
	// rlwinm r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// addi r22,r9,-14676
	ctx.r22.s64 = ctx.r9.s64 + -14676;
	// bne cr6,0x8266346c
	if (!ctx.cr6.eq) goto loc_8266346C;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// fmuls f12,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f12,0(r22)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r22.u32 + 0, temp.u32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f12,4(r22)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r22.u32 + 4, temp.u32);
	// stfs f0,8(r22)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r22.u32 + 8, temp.u32);
	// stfs f0,12(r22)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r22.u32 + 12, temp.u32);
	// stw r11,-14612(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14612, ctx.r11.u32);
loc_8266346C:
	// addi r11,r4,144
	ctx.r11.s64 = ctx.r4.s64 + 144;
	// lwz r10,0(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// lvx128 v126,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stvx128 v126,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blt cr6,0x8266367c
	if (ctx.cr6.lt) goto loc_8266367C;
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,180(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x8266367c
	if (ctx.cr6.lt) goto loc_8266367C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f11,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,316(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x8266367c
	if (!ctx.cr6.gt) goto loc_8266367C;
	// addi r10,r4,192
	ctx.r10.s64 = ctx.r4.s64 + 192;
	// fmuls f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// lfs f29,272(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 272);
	ctx.f29.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f28,260(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 260);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,280(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 280);
	ctx.f27.f64 = double(temp.f32);
	// lfs f30,276(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 276);
	ctx.f30.f64 = double(temp.f32);
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r11,96
	ctx.r10.s64 = ctx.r11.s64 + 96;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d2330
	ctx.lr = 0x82663500;
	sub_825D2330(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// lfs f0,14176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14176);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f31,f0
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// bl 0x826e14c0
	ctx.lr = 0x82663514;
	sub_826E14C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// stfs f27,124(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r30,0(r19)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lfs f29,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f29.f64 = double(temp.f32);
	// li r23,5
	ctx.r23.s64 = 5;
	// lfs f27,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f27.f64 = double(temp.f32);
	// lis r24,-32071
	ctx.r24.s64 = -2101805056;
	// lfs f26,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f26.f64 = double(temp.f32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r28,r11,360
	ctx.r28.s64 = ctx.r11.s64 + 360;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r27,r11,344
	ctx.r27.s64 = ctx.r11.s64 + 344;
	// fmuls f0,f13,f28
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r26,r11,344
	ctx.r26.s64 = ctx.r11.s64 + 344;
	// lfs f28,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f28.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82663578:
	// extsw r11,r23
	ctx.r11.s64 = ctx.r23.s32;
	// cmpwi cr6,r23,5
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 5, ctx.xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-16840(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + -16840);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bne cr6,0x826635ac
	if (!ctx.cr6.eq) goto loc_826635AC;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,12
	ctx.r29.s64 = ctx.r11.s64 + 12;
	// b 0x826635cc
	goto loc_826635CC;
loc_826635AC:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// beq cr6,0x826635bc
	if (ctx.cr6.eq) goto loc_826635BC;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_826635BC:
	// addi r29,r11,12
	ctx.r29.s64 = ctx.r11.s64 + 12;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x826635cc
	goto loc_826635CC;
loc_826635C8:
	// lfs f0,-16840(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + -16840);
	ctx.f0.f64 = double(temp.f32);
loc_826635CC:
	// lfsx f13,r31,r26
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmadds f1,f13,f0,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f31.f64));
	// bl 0x825d3b90
	ctx.lr = 0x826635E0;
	sub_825D3B90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// addi r9,r30,32
	ctx.r9.s64 = ctx.r30.s64 + 32;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v126,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfsx f0,r31,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f28,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 + ctx.f26.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfsx f13,r31,r27
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f0,r31,r25
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f13,f29,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f29.f64 + ctx.f27.f64));
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f1,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825d3b90
	ctx.lr = 0x82663638;
	sub_825D3B90(ctx, base);
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r30,64
	ctx.r10.s64 = ctx.r30.s64 + 64;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,80
	ctx.r30.s64 = ctx.r30.s64 + 80;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// stvx128 v127,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blt cr6,0x826635c8
	if (ctx.cr6.lt) goto loc_826635C8;
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bge cr6,0x82663578
	if (!ctx.cr6.lt) goto loc_82663578;
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// stw r11,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
	// stw r30,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r30.u32);
loc_8266367C:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// li r0,-208
	ctx.r0.s64 = -208;
	// lvx128 v126,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r0,-192
	ctx.r0.s64 = -192;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x826dfbcc
	ctx.lr = 0x82663698;
	__restfpr_26(ctx, base);
	// b 0x826de8f0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826636A0"))) PPC_WEAK_FUNC(sub_826636A0);
PPC_FUNC_IMPL(__imp__sub_826636A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b8
	ctx.lr = 0x826636A8;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// li r12,-96
	ctx.r12.s64 = -96;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,-14592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14592);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// addi r31,r9,-14608
	ctx.r31.s64 = ctx.r9.s64 + -14608;
	// bne cr6,0x82663730
	if (!ctx.cr6.eq) goto loc_82663730;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-14592(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14592, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-29804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,20440(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20440);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,14840(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14840);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f13,6448(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6448);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f13,27856(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27856);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_82663730:
	// addi r11,r30,144
	ctx.r11.s64 = ctx.r30.s64 + 144;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// lvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blt cr6,0x82663970
	if (ctx.cr6.lt) goto loc_82663970;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f13,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,316(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82663970
	if (!ctx.cr6.gt) goto loc_82663970;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r29,r30,16
	ctx.r29.s64 = ctx.r30.s64 + 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r29,96
	ctx.r4.s64 = ctx.r29.s64 + 96;
	// lfs f31,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825d3b90
	ctx.lr = 0x8266377C;
	sub_825D3B90(ctx, base);
	// addi r4,r30,224
	ctx.r4.s64 = ctx.r30.s64 + 224;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825d3b90
	ctx.lr = 0x8266378C;
	sub_825D3B90(ctx, base);
	// addi r4,r30,240
	ctx.r4.s64 = ctx.r30.s64 + 240;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825d3b90
	ctx.lr = 0x8266379C;
	sub_825D3B90(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lfs f0,280(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,276(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r29,80
	ctx.r10.s64 = ctx.r29.s64 + 80;
	// lfs f12,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// stvx v13,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r11,48
	ctx.r7.s64 = ctx.r11.s64 + 48;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r11,64
	ctx.r6.s64 = ctx.r11.s64 + 64;
	// addi r10,r11,80
	ctx.r10.s64 = ctx.r11.s64 + 80;
	// stvx128 v127,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r11,96
	ctx.r9.s64 = ctx.r11.s64 + 96;
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r11,112
	ctx.r5.s64 = ctx.r11.s64 + 112;
	// fadds f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// addi r30,r11,160
	ctx.r30.s64 = ctx.r11.s64 + 160;
	// addi r29,r11,176
	ctx.r29.s64 = ctx.r11.s64 + 176;
	// addi r26,r11,192
	ctx.r26.s64 = ctx.r11.s64 + 192;
	// addi r25,r11,208
	ctx.r25.s64 = ctx.r11.s64 + 208;
	// lfs f9,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f8.f64 = double(temp.f32);
	// fadds f10,f6,f9
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// lfs f7,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f9,f9,f12,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmadds f12,f8,f12,f7
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f7.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r24,r1,80
	ctx.r24.s64 = ctx.r1.s64 + 80;
	// fadds f11,f7,f8
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// lvx128 v0,r0,r24
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v127,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// stvx v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r7,r11,272
	ctx.r7.s64 = ctx.r11.s64 + 272;
	// addi r6,r11,288
	ctx.r6.s64 = ctx.r11.s64 + 288;
	// addi r5,r11,304
	ctx.r5.s64 = ctx.r11.s64 + 304;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v127,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r11,224
	ctx.r10.s64 = ctx.r11.s64 + 224;
	// stvx v0,r0,r26
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r26.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r11,240
	ctx.r9.s64 = ctx.r11.s64 + 240;
	// stvx v0,r0,r25
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r25.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v127,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82663970:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// li r0,-96
	ctx.r0.s64 = -96;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82663988"))) PPC_WEAK_FUNC(sub_82663988);
PPC_FUNC_IMPL(__imp__sub_82663988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r11,-7284
	ctx.r5.s64 = ctx.r11.s64 + -7284;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826639C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826639d4
	if (ctx.cr6.eq) goto loc_826639D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x826639D4;
	sub_82659610(ctx, base);
loc_826639D4:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826639e8
	if (ctx.cr6.eq) goto loc_826639E8;
	// bl 0x82581e38
	ctx.lr = 0x826639E8;
	sub_82581E38(ctx, base);
loc_826639E8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826639f8
	if (ctx.cr6.eq) goto loc_826639F8;
	// bl 0x82581e38
	ctx.lr = 0x826639F8;
	sub_82581E38(ctx, base);
loc_826639F8:
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

__attribute__((alias("__imp__sub_82663A18"))) PPC_WEAK_FUNC(sub_82663A18);
PPC_FUNC_IMPL(__imp__sub_82663A18) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,24968(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24968);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82663a48
	if (ctx.cr6.lt) goto loc_82663A48;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82663a98
	goto loc_82663A98;
loc_82663A48:
	// lwz r11,24964(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24964);
	// lis r10,-30584
	ctx.r10.s64 = -2004353024;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// ori r10,r10,34953
	ctx.r10.u64 = ctx.r10.u64 | 34953;
	// addi r11,r11,239
	ctx.r11.s64 = ctx.r11.s64 + 239;
	// mulhw r10,r11,r10
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32)) >> 32;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 6;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mulli r10,r10,120
	ctx.r10.s64 = ctx.r10.s64 * 120;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mulli r11,r11,208
	ctx.r11.s64 = ctx.r11.s64 * 208;
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8265eb48
	ctx.lr = 0x82663A8C;
	sub_8265EB48(ctx, base);
	// lfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 192, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82663A98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82663AB0"))) PPC_WEAK_FUNC(sub_82663AB0);
PPC_FUNC_IMPL(__imp__sub_82663AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82663AB8;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r30,r27,16
	ctx.r30.s64 = ctx.r27.s64 + 16;
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f29,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f29.f64 = double(temp.f32);
	// lis r11,-30584
	ctx.r11.s64 = -2004353024;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// stfs f0,272(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
	// ori r29,r11,34953
	ctx.r29.u64 = ctx.r11.u64 | 34953;
loc_82663AF8:
	// lwz r11,24968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24968);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82663b0c
	if (ctx.cr6.lt) goto loc_82663B0C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82663b54
	goto loc_82663B54;
loc_82663B0C:
	// lwz r11,24964(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24964);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// addi r11,r11,239
	ctx.r11.s64 = ctx.r11.s64 + 239;
	// mulhw r10,r11,r29
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32)) >> 32;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 6;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r10,r10,120
	ctx.r10.s64 = ctx.r10.s64 * 120;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mulli r11,r11,208
	ctx.r11.s64 = ctx.r11.s64 * 208;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8265eb48
	ctx.lr = 0x82663B48;
	sub_8265EB48(ctx, base);
	// lfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,272(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82663B54:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82663bf8
	if (ctx.cr6.eq) goto loc_82663BF8;
	// fadds f31,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// ble cr6,0x82663b74
	if (!ctx.cr6.gt) goto loc_82663B74;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x82663af8
	goto loc_82663AF8;
loc_82663B74:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82663bd4
	if (!ctx.cr6.gt) goto loc_82663BD4;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// stfs f29,480(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 480, temp.u32);
	// addi r4,r28,-1
	ctx.r4.s64 = ctx.r28.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82663a18
	ctx.lr = 0x82663B90;
	sub_82663A18(ctx, base);
	// fsubs f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lfs f13,272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82663BBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_82663BD4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8265eb48
	ctx.lr = 0x82663BE0;
	sub_8265EB48(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_82663BF8:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// ble cr6,0x82663c0c
	if (!ctx.cr6.gt) goto loc_82663C0C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8265eb48
	ctx.lr = 0x82663C0C;
	sub_8265EB48(ctx, base);
loc_82663C0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82663C28"))) PPC_WEAK_FUNC(sub_82663C28);
PPC_FUNC_IMPL(__imp__sub_82663C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82663C30;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-1360(r1)
	ea = -1360 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r28,0(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r29,4(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82734d38
	ctx.lr = 0x82663C50;
	sub_82734D38(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// lfs f30,3548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f30.f64 = double(temp.f32);
	// blt cr6,0x82663c74
	if (ctx.cr6.lt) goto loc_82663C74;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826722b8
	ctx.lr = 0x82663C6C;
	sub_826722B8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// b 0x82663c78
	goto loc_82663C78;
loc_82663C74:
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
loc_82663C78:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82663f60
	if (ctx.cr6.eq) goto loc_82663F60;
	// lwz r30,44(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// addi r7,r1,464
	ctx.r7.s64 = ctx.r1.s64 + 464;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r31,r30,32
	ctx.r31.s64 = ctx.r30.s64 + 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// addi r9,r31,48
	ctx.r9.s64 = ctx.r31.s64 + 48;
	// lvx128 v0,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r31,16
	ctx.r8.s64 = ctx.r31.s64 + 16;
	// vor v11,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// stvx v0,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r31,32
	ctx.r7.s64 = ctx.r31.s64 + 32;
	// lvx128 v12,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// stvx v11,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lvx128 v11,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v11,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lvx128 v11,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v11,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,480
	ctx.r11.s64 = ctx.r1.s64 + 480;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,496
	ctx.r11.s64 = ctx.r1.s64 + 496;
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,512
	ctx.r11.s64 = ctx.r1.s64 + 512;
	// stvx v12,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// stvx v11,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d4398
	ctx.lr = 0x82663D0C;
	sub_825D4398(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lvx128 v13,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r30,96
	ctx.r10.s64 = ctx.r30.s64 + 96;
	// addi r6,r1,400
	ctx.r6.s64 = ctx.r1.s64 + 400;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,272
	ctx.r30.s64 = ctx.r1.s64 + 272;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// lvx128 v12,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r31,16
	ctx.r7.s64 = ctx.r31.s64 + 16;
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// addi r6,r31,32
	ctx.r6.s64 = ctx.r31.s64 + 32;
	// stvx v13,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// lvx128 v11,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 + 48;
	// lvx128 v13,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r10,32
	ctx.r8.s64 = ctx.r10.s64 + 32;
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// lvx128 v10,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,432
	ctx.r10.s64 = ctx.r1.s64 + 432;
	// lvx128 v0,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,448
	ctx.r10.s64 = ctx.r1.s64 + 448;
	// lvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v11,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// lvx128 v11,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v10,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// stvx v9,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stvx v12,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// stvx v11,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// stvx v10,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82272648
	ctx.lr = 0x82663DD8;
	sub_82272648(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fmuls f30,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8265eb48
	ctx.lr = 0x82663E28;
	sub_8265EB48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// bl 0x8265eb48
	ctx.lr = 0x82663E34;
	sub_8265EB48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// bl 0x8265eb48
	ctx.lr = 0x82663E40;
	sub_8265EB48(ctx, base);
	// lfs f0,24992(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24992);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82663e80
	if (ctx.cr6.lt) goto loc_82663E80;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,720
	ctx.r4.s64 = ctx.r1.s64 + 720;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82663ab0
	ctx.lr = 0x82663E60;
	sub_82663AB0(ctx, base);
	// addi r4,r1,912
	ctx.r4.s64 = ctx.r1.s64 + 912;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82663ab0
	ctx.lr = 0x82663E70;
	sub_82663AB0(ctx, base);
	// addi r4,r1,1104
	ctx.r4.s64 = ctx.r1.s64 + 1104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82663ab0
	ctx.lr = 0x82663E80;
	sub_82663AB0(ctx, base);
loc_82663E80:
	// addi r11,r1,848
	ctx.r11.s64 = ctx.r1.s64 + 848;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r5,r1,528
	ctx.r5.s64 = ctx.r1.s64 + 528;
	// li r4,210
	ctx.r4.s64 = 210;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,528
	ctx.r11.s64 = ctx.r1.s64 + 528;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,864
	ctx.r11.s64 = ctx.r1.s64 + 864;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,544
	ctx.r11.s64 = ctx.r1.s64 + 544;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,880
	ctx.r11.s64 = ctx.r1.s64 + 880;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,560
	ctx.r11.s64 = ctx.r1.s64 + 560;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,896
	ctx.r11.s64 = ctx.r1.s64 + 896;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,576
	ctx.r11.s64 = ctx.r1.s64 + 576;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,1040
	ctx.r11.s64 = ctx.r1.s64 + 1040;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,592
	ctx.r11.s64 = ctx.r1.s64 + 592;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,1056
	ctx.r11.s64 = ctx.r1.s64 + 1056;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,608
	ctx.r11.s64 = ctx.r1.s64 + 608;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,1072
	ctx.r11.s64 = ctx.r1.s64 + 1072;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,624
	ctx.r11.s64 = ctx.r1.s64 + 624;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,1088
	ctx.r11.s64 = ctx.r1.s64 + 1088;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,640
	ctx.r11.s64 = ctx.r1.s64 + 640;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,1232
	ctx.r11.s64 = ctx.r1.s64 + 1232;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,656
	ctx.r11.s64 = ctx.r1.s64 + 656;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,1248
	ctx.r11.s64 = ctx.r1.s64 + 1248;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,672
	ctx.r11.s64 = ctx.r1.s64 + 672;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,1264
	ctx.r11.s64 = ctx.r1.s64 + 1264;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,688
	ctx.r11.s64 = ctx.r1.s64 + 688;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,1280
	ctx.r11.s64 = ctx.r1.s64 + 1280;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,704
	ctx.r11.s64 = ctx.r1.s64 + 704;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82663F60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82663F60:
	// addi r1,r1,1360
	ctx.r1.s64 = ctx.r1.s64 + 1360;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82663F70"))) PPC_WEAK_FUNC(sub_82663F70);
PPC_FUNC_IMPL(__imp__sub_82663F70) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821601b8
	sub_821601B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82663F80"))) PPC_WEAK_FUNC(sub_82663F80);
PPC_FUNC_IMPL(__imp__sub_82663F80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82663F88"))) PPC_WEAK_FUNC(sub_82663F88);
PPC_FUNC_IMPL(__imp__sub_82663F88) {
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
	// addi r11,r11,388
	ctx.r11.s64 = ctx.r11.s64 + 388;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82663fbc
	if (ctx.cr6.eq) goto loc_82663FBC;
	// bl 0x82186190
	ctx.lr = 0x82663FB8;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82663FBC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82663FD0"))) PPC_WEAK_FUNC(sub_82663FD0);
PPC_FUNC_IMPL(__imp__sub_82663FD0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82662b78
	sub_82662B78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82663FD8"))) PPC_WEAK_FUNC(sub_82663FD8);
PPC_FUNC_IMPL(__imp__sub_82663FD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82663FE8"))) PPC_WEAK_FUNC(sub_82663FE8);
PPC_FUNC_IMPL(__imp__sub_82663FE8) {
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
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x82186158
	ctx.lr = 0x82663FFC;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82664018
	if (ctx.cr6.eq) goto loc_82664018;
	// bl 0x82672550
	ctx.lr = 0x82664008;
	sub_82672550(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82664018:
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

__attribute__((alias("__imp__sub_82664030"))) PPC_WEAK_FUNC(sub_82664030);
PPC_FUNC_IMPL(__imp__sub_82664030) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82186158
	ctx.lr = 0x82664048;
	sub_82186158(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8266407c
	if (ctx.cr6.eq) goto loc_8266407C;
	// bl 0x8265d770
	ctx.lr = 0x82664058;
	sub_8265D770(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,424
	ctx.r11.s64 = ctx.r11.s64 + 424;
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
loc_8266407C:
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

__attribute__((alias("__imp__sub_82664098"))) PPC_WEAK_FUNC(sub_82664098);
PPC_FUNC_IMPL(__imp__sub_82664098) {
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
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82662500
	ctx.lr = 0x826640B4;
	sub_82662500(ctx, base);
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

__attribute__((alias("__imp__sub_826640D0"))) PPC_WEAK_FUNC(sub_826640D0);
PPC_FUNC_IMPL(__imp__sub_826640D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r11,2,20,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFC;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lfsx f1,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826640F0"))) PPC_WEAK_FUNC(sub_826640F0);
PPC_FUNC_IMPL(__imp__sub_826640F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x826640F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,5120
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5120, ctx.xer);
	// bge cr6,0x8266419c
	if (!ctx.cr6.lt) goto loc_8266419C;
	// li r3,480
	ctx.r3.s64 = 480;
	// bl 0x82186158
	ctx.lr = 0x82664118;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266419c
	if (ctx.cr6.eq) goto loc_8266419C;
	// bl 0x82672620
	ctx.lr = 0x82664124;
	sub_82672620(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8266419c
	if (ctx.cr6.eq) goto loc_8266419C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82664140;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82664184
	if (ctx.cr6.eq) goto loc_82664184;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8265ec78
	ctx.lr = 0x8266415C;
	sub_8265EC78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82664184
	if (ctx.cr6.eq) goto loc_82664184;
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82664184:
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
	ctx.lr = 0x8266419C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266419C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826641A8"))) PPC_WEAK_FUNC(sub_826641A8);
PPC_FUNC_IMPL(__imp__sub_826641A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x826641B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,76
	ctx.r3.s64 = 76;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82186158
	ctx.lr = 0x826641C4;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266420c
	if (ctx.cr6.eq) goto loc_8266420C;
	// bl 0x826722c8
	ctx.lr = 0x826641D0;
	sub_826722C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8266420c
	if (ctx.cr6.eq) goto loc_8266420C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// bl 0x82672380
	ctx.lr = 0x826641E8;
	sub_82672380(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82664210
	if (!ctx.cr6.eq) goto loc_82664210;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266420C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266420C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82664210:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82664218"))) PPC_WEAK_FUNC(sub_82664218);
PPC_FUNC_IMPL(__imp__sub_82664218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82664220;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,288
	ctx.r3.s64 = 288;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82186158
	ctx.lr = 0x82664234;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266428c
	if (ctx.cr6.eq) goto loc_8266428C;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8265d9c0
	ctx.lr = 0x82664244;
	sub_8265D9C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8266428c
	if (ctx.cr6.eq) goto loc_8266428C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8265da38
	ctx.lr = 0x8266425C;
	sub_8265DA38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82664278
	if (ctx.cr6.eq) goto loc_82664278;
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82664278:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266428C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266428C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82664298"))) PPC_WEAK_FUNC(sub_82664298);
PPC_FUNC_IMPL(__imp__sub_82664298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82186190
	ctx.lr = 0x826642C8;
	sub_82186190(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82662230
	ctx.lr = 0x826642D0;
	sub_82662230(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826642e0
	if (ctx.cr6.eq) goto loc_826642E0;
	// bl 0x821601b8
	ctx.lr = 0x826642E0;
	sub_821601B8(ctx, base);
loc_826642E0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r11,r11,388
	ctx.r11.s64 = ctx.r11.s64 + 388;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82664304
	if (ctx.cr6.eq) goto loc_82664304;
	// bl 0x82186190
	ctx.lr = 0x82664300;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82664304:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82664320"))) PPC_WEAK_FUNC(sub_82664320);
PPC_FUNC_IMPL(__imp__sub_82664320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r31,r30,20
	ctx.r31.s64 = ctx.r30.s64 + 20;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82664360
	if (ctx.cr6.eq) goto loc_82664360;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82279350
	ctx.lr = 0x82664358;
	sub_82279350(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82664360;
	sub_82186190(ctx, base);
loc_82664360:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x8266fd90
	ctx.lr = 0x82664378;
	sub_8266FD90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82664390"))) PPC_WEAK_FUNC(sub_82664390);
PPC_FUNC_IMPL(__imp__sub_82664390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82664320
	ctx.lr = 0x826643B0;
	sub_82664320(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826643c8
	if (ctx.cr6.eq) goto loc_826643C8;
	// bl 0x82186190
	ctx.lr = 0x826643C4;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826643C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826643E0"))) PPC_WEAK_FUNC(sub_826643E0);
PPC_FUNC_IMPL(__imp__sub_826643E0) {
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
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82186158
	ctx.lr = 0x826643F8;
	sub_82186158(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8266443c
	if (ctx.cr6.eq) goto loc_8266443C;
	// bl 0x8266fd18
	ctx.lr = 0x82664408;
	sub_8266FD18(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,468
	ctx.r10.s64 = ctx.r11.s64 + 468;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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
loc_8266443C:
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

__attribute__((alias("__imp__sub_82664458"))) PPC_WEAK_FUNC(sub_82664458);
PPC_FUNC_IMPL(__imp__sub_82664458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82664460;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,432
	ctx.r9.s64 = ctx.r11.s64 + 432;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x826644B0;
	sub_82186158(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82186190
	ctx.lr = 0x826644C0;
	sub_82186190(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82664670
	if (ctx.cr6.eq) goto loc_82664670;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82664670
	if (ctx.cr6.eq) goto loc_82664670;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,12
	ctx.r10.s64 = 12;
	// lfs f0,476(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 476);
	ctx.f0.f64 = double(temp.f32);
loc_826644EC:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// clrldi r5,r11,32
	ctx.r5.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// addi r9,r10,-12
	ctx.r9.s64 = ctx.r10.s64 + -12;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// clrldi r6,r4,32
	ctx.r6.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// addi r5,r11,3
	ctx.r5.s64 = ctx.r11.s64 + 3;
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// clrldi r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// std r6,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r6.u64);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// addi r4,r11,5
	ctx.r4.s64 = ctx.r11.s64 + 5;
	// clrldi r6,r6,32
	ctx.r6.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// clrldi r7,r4,32
	ctx.r7.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// std r5,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r5.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r6,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r6.u64);
	// std r7,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r7.u64);
	// addi r7,r11,-2
	ctx.r7.s64 = ctx.r11.s64 + -2;
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfd f10,104(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lfd f9,112(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// lfd f8,120(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfd f7,128(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// lfd f6,136(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsx f13,r9,r8
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// frsp f11,f7
	ctx.f11.f64 = double(float(ctx.f7.f64));
	// frsp f7,f6
	ctx.f7.f64 = double(float(ctx.f6.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// fmuls f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// fmuls f9,f8,f0
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f8,f7,f0
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f12,-4(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stfsx f10,r10,r9
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stfs f9,8(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stfs f8,16(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// cmplwi cr6,r7,1024
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1024, ctx.xer);
	// blt cr6,0x826644ec
	if (ctx.cr6.lt) goto loc_826644EC;
	// li r30,2048
	ctx.r30.s64 = 2048;
loc_8266463C:
	// bl 0x826e0d50
	ctx.lr = 0x82664640;
	sub_826E0D50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x826e0d50
	ctx.lr = 0x82664648;
	sub_826E0D50(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r9,r29,2,20,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFC;
	// rlwinm r10,r3,2,20,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFC;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r9,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// stfsx f0,r10,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// bne cr6,0x8266463c
	if (!ctx.cr6.eq) goto loc_8266463C;
loc_82664670:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82664680"))) PPC_WEAK_FUNC(sub_82664680);
PPC_FUNC_IMPL(__imp__sub_82664680) {
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
	// addi r11,r11,484
	ctx.r11.s64 = ctx.r11.s64 + 484;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x826646b4
	if (ctx.cr6.eq) goto loc_826646B4;
	// bl 0x82186190
	ctx.lr = 0x826646B0;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826646B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826646C8"))) PPC_WEAK_FUNC(sub_826646C8);
PPC_FUNC_IMPL(__imp__sub_826646C8) {
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
	// addi r11,r11,492
	ctx.r11.s64 = ctx.r11.s64 + 492;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82672868
	ctx.lr = 0x826646F4;
	sub_82672868(ctx, base);
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

__attribute__((alias("__imp__sub_82664710"))) PPC_WEAK_FUNC(sub_82664710);
PPC_FUNC_IMPL(__imp__sub_82664710) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82664754
	if (ctx.cr6.eq) goto loc_82664754;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_82664730:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266474C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82664730
	if (!ctx.cr6.eq) goto loc_82664730;
loc_82664754:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82664768"))) PPC_WEAK_FUNC(sub_82664768);
PPC_FUNC_IMPL(__imp__sub_82664768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82664770;
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
	// bl 0x82672790
	ctx.lr = 0x82664784;
	sub_82672790(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r11,r11,500
	ctx.r11.s64 = ctx.r11.s64 + 500;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// beq cr6,0x826647a4
	if (ctx.cr6.eq) goto loc_826647A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x826647A4;
	sub_82659610(ctx, base);
loc_826647A4:
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826727b0
	ctx.lr = 0x826647B0;
	sub_826727B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x825fbf98
	ctx.lr = 0x826647C0;
	sub_825FBF98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826647D8"))) PPC_WEAK_FUNC(sub_826647D8);
PPC_FUNC_IMPL(__imp__sub_826647D8) {
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
	// addi r11,r11,500
	ctx.r11.s64 = ctx.r11.s64 + 500;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266484c
	if (ctx.cr6.eq) goto loc_8266484C;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8266484c
	if (ctx.cr6.eq) goto loc_8266484C;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82664834
	if (ctx.cr6.eq) goto loc_82664834;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x826727f8
	ctx.lr = 0x82664828;
	sub_826727F8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_82664834:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82668a20
	ctx.lr = 0x8266484C;
	sub_82668A20(ctx, base);
loc_8266484C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266485c
	if (ctx.cr6.eq) goto loc_8266485C;
	// bl 0x82631328
	ctx.lr = 0x8266485C;
	sub_82631328(ctx, base);
loc_8266485C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,484
	ctx.r11.s64 = ctx.r11.s64 + 484;
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

__attribute__((alias("__imp__sub_82664880"))) PPC_WEAK_FUNC(sub_82664880);
PPC_FUNC_IMPL(__imp__sub_82664880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,492
	ctx.r11.s64 = ctx.r11.s64 + 492;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82664710
	sub_82664710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82664890"))) PPC_WEAK_FUNC(sub_82664890);
PPC_FUNC_IMPL(__imp__sub_82664890) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,-17756(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17756);
	// lbz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826648c4
	if (ctx.cr6.eq) goto loc_826648C4;
	// bl 0x82664710
	ctx.lr = 0x826648C0;
	sub_82664710(ctx, base);
	// b 0x82664918
	goto loc_82664918;
loc_826648C4:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82664918
	if (ctx.cr6.eq) goto loc_82664918;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_826648D4:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82668b98
	ctx.lr = 0x826648E0;
	sub_82668B98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826648f4
	if (ctx.cr6.eq) goto loc_826648F4;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x82664910
	goto loc_82664910;
loc_826648F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82664910;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82664910:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x826648d4
	if (!ctx.cr6.eq) goto loc_826648D4;
loc_82664918:
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

__attribute__((alias("__imp__sub_82664930"))) PPC_WEAK_FUNC(sub_82664930);
PPC_FUNC_IMPL(__imp__sub_82664930) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_82664940:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r9,r9,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82664940
	if (!ctx.cr6.eq) goto loc_82664940;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82664960"))) PPC_WEAK_FUNC(sub_82664960);
PPC_FUNC_IMPL(__imp__sub_82664960) {
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
	// lwz r11,-17756(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17756);
	// lbz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826649a8
	if (!ctx.cr6.eq) goto loc_826649A8;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826649a8
	if (ctx.cr6.eq) goto loc_826649A8;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_82664994:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82668c50
	ctx.lr = 0x8266499C;
	sub_82668C50(ctx, base);
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82664994
	if (!ctx.cr6.eq) goto loc_82664994;
loc_826649A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826649C0"))) PPC_WEAK_FUNC(sub_826649C0);
PPC_FUNC_IMPL(__imp__sub_826649C0) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826649f4
	if (ctx.cr6.eq) goto loc_826649F4;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_826649E0:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82668ca8
	ctx.lr = 0x826649E8;
	sub_82668CA8(ctx, base);
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x826649e0
	if (!ctx.cr6.eq) goto loc_826649E0;
loc_826649F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82664A08"))) PPC_WEAK_FUNC(sub_82664A08);
PPC_FUNC_IMPL(__imp__sub_82664A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82664a54
	if (ctx.cr6.eq) goto loc_82664A54;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_82664A30:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82664A48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82664a30
	if (!ctx.cr6.eq) goto loc_82664A30;
loc_82664A54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82664A70"))) PPC_WEAK_FUNC(sub_82664A70);
PPC_FUNC_IMPL(__imp__sub_82664A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82664A78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82664ac4
	if (ctx.cr6.eq) goto loc_82664AC4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82664ac4
	if (ctx.cr6.eq) goto loc_82664AC4;
	// lwz r31,8(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
loc_82664A9C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82664AB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82664ad8
	if (ctx.cr6.eq) goto loc_82664AD8;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82664a9c
	if (!ctx.cr6.eq) goto loc_82664A9C;
loc_82664AC4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82664ACC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82664AD8:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82664AEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82664ac4
	if (!ctx.cr6.eq) goto loc_82664AC4;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82664acc
	if (ctx.cr6.eq) goto loc_82664ACC;
	// bl 0x82659610
	ctx.lr = 0x82664B0C;
	sub_82659610(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82664B18"))) PPC_WEAK_FUNC(sub_82664B18);
PPC_FUNC_IMPL(__imp__sub_82664B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826647d8
	ctx.lr = 0x82664B38;
	sub_826647D8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82664b50
	if (ctx.cr6.eq) goto loc_82664B50;
	// bl 0x82186190
	ctx.lr = 0x82664B4C;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82664B50:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82664B68"))) PPC_WEAK_FUNC(sub_82664B68);
PPC_FUNC_IMPL(__imp__sub_82664B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,492
	ctx.r11.s64 = ctx.r11.s64 + 492;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82664710
	ctx.lr = 0x82664B94;
	sub_82664710(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82664bac
	if (ctx.cr6.eq) goto loc_82664BAC;
	// bl 0x82186190
	ctx.lr = 0x82664BA8;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82664BAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82664BC8"))) PPC_WEAK_FUNC(sub_82664BC8);
PPC_FUNC_IMPL(__imp__sub_82664BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82664BD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,-17756(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17756);
	// lbz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82664cf0
	if (!ctx.cr6.eq) goto loc_82664CF0;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82186158
	ctx.lr = 0x82664C00;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82664cf0
	if (ctx.cr6.eq) goto loc_82664CF0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82669100
	ctx.lr = 0x82664C14;
	sub_82669100(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82664cf0
	if (ctx.cr6.eq) goto loc_82664CF0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82186158
	ctx.lr = 0x82664C28;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82664cf0
	if (ctx.cr6.eq) goto loc_82664CF0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82664768
	ctx.lr = 0x82664C3C;
	sub_82664768(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82664cf0
	if (ctx.cr6.eq) goto loc_82664CF0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821620e8
	ctx.lr = 0x82664C54;
	sub_821620E8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82642fc8
	ctx.lr = 0x82664C60;
	sub_82642FC8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x823032b8
	ctx.lr = 0x82664C70;
	sub_823032B8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82664c80
	if (ctx.cr6.eq) goto loc_82664C80;
	// bl 0x82581e38
	ctx.lr = 0x82664C80;
	sub_82581E38(ctx, base);
loc_82664C80:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825fc7b8
	ctx.lr = 0x82664C88;
	sub_825FC7B8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82664cd8
	if (ctx.cr6.eq) goto loc_82664CD8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82664cd8
	if (ctx.cr6.eq) goto loc_82664CD8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8289f838
	ctx.lr = 0x82664CB0;
	sub_8289F838(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82668fb0
	ctx.lr = 0x82664CB8;
	sub_82668FB0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82664cf8
	if (ctx.cr6.eq) goto loc_82664CF8;
	// bl 0x82659610
	ctx.lr = 0x82664CCC;
	sub_82659610(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_82664CD8:
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
	ctx.lr = 0x82664CF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82664CF0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82664CF8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82664D08"))) PPC_WEAK_FUNC(sub_82664D08);
PPC_FUNC_IMPL(__imp__sub_82664D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82664D10;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,-17756(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17756);
	// lbz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82664e30
	if (!ctx.cr6.eq) goto loc_82664E30;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82186158
	ctx.lr = 0x82664D40;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82664e30
	if (ctx.cr6.eq) goto loc_82664E30;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82669100
	ctx.lr = 0x82664D54;
	sub_82669100(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82664e30
	if (ctx.cr6.eq) goto loc_82664E30;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82186158
	ctx.lr = 0x82664D68;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82664e30
	if (ctx.cr6.eq) goto loc_82664E30;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82664768
	ctx.lr = 0x82664D7C;
	sub_82664768(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82664e30
	if (ctx.cr6.eq) goto loc_82664E30;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821620e8
	ctx.lr = 0x82664D94;
	sub_821620E8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82642fc8
	ctx.lr = 0x82664DA0;
	sub_82642FC8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x823032b8
	ctx.lr = 0x82664DB0;
	sub_823032B8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82664dc0
	if (ctx.cr6.eq) goto loc_82664DC0;
	// bl 0x82581e38
	ctx.lr = 0x82664DC0;
	sub_82581E38(ctx, base);
loc_82664DC0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825fc7b8
	ctx.lr = 0x82664DC8;
	sub_825FC7B8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82664e18
	if (ctx.cr6.eq) goto loc_82664E18;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82664e18
	if (ctx.cr6.eq) goto loc_82664E18;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8289f838
	ctx.lr = 0x82664DF0;
	sub_8289F838(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82668fb0
	ctx.lr = 0x82664DF8;
	sub_82668FB0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82664e38
	if (ctx.cr6.eq) goto loc_82664E38;
	// bl 0x82659610
	ctx.lr = 0x82664E0C;
	sub_82659610(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_82664E18:
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
	ctx.lr = 0x82664E30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82664E30:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82664E38:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82664E48"))) PPC_WEAK_FUNC(sub_82664E48);
PPC_FUNC_IMPL(__imp__sub_82664E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82664E50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x825ba970
	ctx.lr = 0x82664E68;
	sub_825BA970(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r11,r11,572
	ctx.r11.s64 = ctx.r11.s64 + 572;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82664e84
	if (ctx.cr6.eq) goto loc_82664E84;
	// stw r31,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r31.u32);
loc_82664E84:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ba8f8
	ctx.lr = 0x82664E90;
	sub_825BA8F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82664EA0"))) PPC_WEAK_FUNC(sub_82664EA0);
PPC_FUNC_IMPL(__imp__sub_82664EA0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82664ec8
	sub_82664EC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82664EA8"))) PPC_WEAK_FUNC(sub_82664EA8);
PPC_FUNC_IMPL(__imp__sub_82664EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,504
	ctx.r3.s64 = ctx.r11.s64 + 504;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82664EB8"))) PPC_WEAK_FUNC(sub_82664EB8);
PPC_FUNC_IMPL(__imp__sub_82664EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,548
	ctx.r3.s64 = ctx.r11.s64 + 548;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82664EC8"))) PPC_WEAK_FUNC(sub_82664EC8);
PPC_FUNC_IMPL(__imp__sub_82664EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r10,r10,536
	ctx.r10.s64 = ctx.r10.s64 + 536;
	// addi r9,r9,524
	ctx.r9.s64 = ctx.r9.s64 + 524;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// beq cr6,0x82664f10
	if (ctx.cr6.eq) goto loc_82664F10;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
loc_82664F10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581670
	ctx.lr = 0x82664F18;
	sub_82581670(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82664f30
	if (ctx.cr6.eq) goto loc_82664F30;
	// bl 0x82186190
	ctx.lr = 0x82664F2C;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82664F30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82664F48"))) PPC_WEAK_FUNC(sub_82664F48);
PPC_FUNC_IMPL(__imp__sub_82664F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,572
	ctx.r11.s64 = ctx.r11.s64 + 572;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82664f8c
	if (ctx.cr6.eq) goto loc_82664F8C;
	// bl 0x82648cc8
	ctx.lr = 0x82664F80;
	sub_82648CC8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
loc_82664F8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ba7b0
	ctx.lr = 0x82664F94;
	sub_825BA7B0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82664fac
	if (ctx.cr6.eq) goto loc_82664FAC;
	// bl 0x82186190
	ctx.lr = 0x82664FA8;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82664FAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82664FC8"))) PPC_WEAK_FUNC(sub_82664FC8);
PPC_FUNC_IMPL(__imp__sub_82664FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82581500
	ctx.lr = 0x82664FEC;
	sub_82581500(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// addi r11,r11,536
	ctx.r11.s64 = ctx.r11.s64 + 536;
	// addi r10,r10,524
	ctx.r10.s64 = ctx.r10.s64 + 524;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// beq cr6,0x82665014
	if (ctx.cr6.eq) goto loc_82665014;
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
loc_82665014:
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// lwz r11,-15120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266502c
	if (!ctx.cr6.eq) goto loc_8266502C;
	// bl 0x82642018
	ctx.lr = 0x82665028;
	sub_82642018(ctx, base);
	// stw r3,-15120(r30)
	PPC_STORE_U32(ctx.r30.u32 + -15120, ctx.r3.u32);
loc_8266502C:
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

__attribute__((alias("__imp__sub_82665048"))) PPC_WEAK_FUNC(sub_82665048);
PPC_FUNC_IMPL(__imp__sub_82665048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82665050;
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82581078
	ctx.lr = 0x8266506C;
	sub_82581078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8266514c
	if (ctx.cr6.eq) goto loc_8266514C;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266514c
	if (ctx.cr6.eq) goto loc_8266514C;
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// lwz r3,-15120(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -15120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8266509c
	if (!ctx.cr6.eq) goto loc_8266509C;
	// bl 0x82642018
	ctx.lr = 0x82665098;
	sub_82642018(ctx, base);
	// stw r3,-15120(r29)
	PPC_STORE_U32(ctx.r29.u32 + -15120, ctx.r3.u32);
loc_8266509C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82659a88
	ctx.lr = 0x826650A4;
	sub_82659A88(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826650B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r31,76(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lfs f0,-3408(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3408);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f29,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_826650E0:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x826650f0
	if (!ctx.cr6.gt) goto loc_826650F0;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// b 0x826650f4
	goto loc_826650F4;
loc_826650F0:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_826650F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82648ca0
	ctx.lr = 0x826650FC;
	sub_82648CA0(ctx, base);
	// fsubs f31,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// ble cr6,0x82665114
	if (!ctx.cr6.gt) goto loc_82665114;
	// bl 0x82648cb8
	ctx.lr = 0x82665110;
	sub_82648CB8(ctx, base);
	// b 0x826650e0
	goto loc_826650E0;
loc_82665114:
	// bl 0x82648ca8
	ctx.lr = 0x82665118;
	sub_82648CA8(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82665138
	if (!ctx.cr6.eq) goto loc_82665138;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82648cb8
	ctx.lr = 0x82665138;
	sub_82648CB8(ctx, base);
loc_82665138:
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-17756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17756);
	// bl 0x82668350
	ctx.lr = 0x82665144;
	sub_82668350(ctx, base);
	// lwz r3,-17756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17756);
	// bl 0x82668110
	ctx.lr = 0x8266514C;
	sub_82668110(ctx, base);
loc_8266514C:
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

__attribute__((alias("__imp__sub_82665160"))) PPC_WEAK_FUNC(sub_82665160);
PPC_FUNC_IMPL(__imp__sub_82665160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82665168;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r6,r11,2800
	ctx.r6.s64 = ctx.r11.s64 + 2800;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,2836
	ctx.r5.s64 = ctx.r11.s64 + 2836;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826df418
	ctx.lr = 0x82665190;
	sub_826DF418(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826651fc
	if (ctx.cr6.eq) goto loc_826651FC;
	// lwz r29,52(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826651fc
	if (ctx.cr6.eq) goto loc_826651FC;
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// lwz r11,-15120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826651c0
	if (!ctx.cr6.eq) goto loc_826651C0;
	// bl 0x82642018
	ctx.lr = 0x826651BC;
	sub_82642018(ctx, base);
	// stw r3,-15120(r30)
	PPC_STORE_U32(ctx.r30.u32 + -15120, ctx.r3.u32);
loc_826651C0:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-17756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17756);
	// bl 0x82667b58
	ctx.lr = 0x826651CC;
	sub_82667B58(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826651E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826651f4
	if (ctx.cr6.eq) goto loc_826651F4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82648cb0
	ctx.lr = 0x826651F4;
	sub_82648CB0(ctx, base);
loc_826651F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82648cb8
	ctx.lr = 0x826651FC;
	sub_82648CB8(ctx, base);
loc_826651FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82665208"))) PPC_WEAK_FUNC(sub_82665208);
PPC_FUNC_IMPL(__imp__sub_82665208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82665210;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x825e6f70
	ctx.lr = 0x82665228;
	sub_825E6F70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82665270
	if (ctx.cr6.eq) goto loc_82665270;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x828f6a90
	ctx.lr = 0x82665244;
	sub_828F6A90(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,19795
	ctx.r9.s64 = 1297285120;
	// addi r11,r11,588
	ctx.r11.s64 = ctx.r11.s64 + 588;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r9,16972
	ctx.r9.u64 = ctx.r9.u64 | 16972;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stb r10,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r10.u8);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82665270:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82665280"))) PPC_WEAK_FUNC(sub_82665280);
PPC_FUNC_IMPL(__imp__sub_82665280) {
	PPC_FUNC_PROLOGUE();
	// li r3,870
	ctx.r3.s64 = 870;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82665288"))) PPC_WEAK_FUNC(sub_82665288);
PPC_FUNC_IMPL(__imp__sub_82665288) {
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
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82665300
	if (!ctx.cr6.eq) goto loc_82665300;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r9,21314
	ctx.r9.s64 = 1396834304;
	// ori r9,r9,21330
	ctx.r9.u64 = ctx.r9.u64 | 21330;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x826652e4
	if (ctx.cr6.eq) goto loc_826652E4;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
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
loc_826652E4:
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
	// bl 0x82672928
	ctx.lr = 0x826652F8;
	sub_82672928(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r11.u8);
loc_82665300:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82665318"))) PPC_WEAK_FUNC(sub_82665318);
PPC_FUNC_IMPL(__imp__sub_82665318) {
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
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82665370
	if (!ctx.cr6.eq) goto loc_82665370;
	// lbz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82665370
	if (ctx.cr6.eq) goto loc_82665370;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r10,21314
	ctx.r10.s64 = 1396834304;
	// ori r10,r10,21330
	ctx.r10.u64 = ctx.r10.u64 | 21330;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82665368
	if (!ctx.cr6.eq) goto loc_82665368;
	// bl 0x82672950
	ctx.lr = 0x82665368;
	sub_82672950(ctx, base);
loc_82665368:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r11.u8);
loc_82665370:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82665388"))) PPC_WEAK_FUNC(sub_82665388);
PPC_FUNC_IMPL(__imp__sub_82665388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,588
	ctx.r11.s64 = ctx.r11.s64 + 588;
	// lbz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x826653dc
	if (ctx.cr6.eq) goto loc_826653DC;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r10,21314
	ctx.r10.s64 = 1396834304;
	// ori r10,r10,21330
	ctx.r10.u64 = ctx.r10.u64 | 21330;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826653dc
	if (!ctx.cr6.eq) goto loc_826653DC;
	// bl 0x82672950
	ctx.lr = 0x826653DC;
	sub_82672950(ctx, base);
loc_826653DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f6b38
	ctx.lr = 0x826653E4;
	sub_828F6B38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826653fc
	if (ctx.cr6.eq) goto loc_826653FC;
	// bl 0x825e6f78
	ctx.lr = 0x826653F8;
	sub_825E6F78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826653FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82665418"))) PPC_WEAK_FUNC(sub_82665418);
PPC_FUNC_IMPL(__imp__sub_82665418) {
	PPC_FUNC_PROLOGUE();
	// li r3,852
	ctx.r3.s64 = 852;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82665420"))) PPC_WEAK_FUNC(sub_82665420);
PPC_FUNC_IMPL(__imp__sub_82665420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8266544c
	if (ctx.cr6.lt) goto loc_8266544C;
	// stfs f13,72(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_8266544C:
	// lfs f13,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82665460
	if (ctx.cr6.lt) goto loc_82665460;
	// stfs f13,76(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82665460:
	// lfs f13,104(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82665474
	if (ctx.cr6.lt) goto loc_82665474;
	// stfs f13,80(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82665474:
	// lfs f13,108(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82665488
	if (ctx.cr6.lt) goto loc_82665488;
	// stfs f13,84(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82665488:
	// lfs f13,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8266549c
	if (ctx.cr6.lt) goto loc_8266549C;
	// stfs f13,88(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_8266549C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r4,r3,72
	ctx.r4.s64 = ctx.r3.s64 + 72;
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// b 0x82672b30
	sub_82672B30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826654B4"))) PPC_WEAK_FUNC(sub_826654B4);
PPC_FUNC_IMPL(__imp__sub_826654B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826654B8"))) PPC_WEAK_FUNC(sub_826654B8);
PPC_FUNC_IMPL(__imp__sub_826654B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 5, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826654D0"))) PPC_WEAK_FUNC(sub_826654D0);
PPC_FUNC_IMPL(__imp__sub_826654D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5424(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5424);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826654F0"))) PPC_WEAK_FUNC(sub_826654F0);
PPC_FUNC_IMPL(__imp__sub_826654F0) {
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
	ctx.lr = 0x82665508;
	sub_828F6A90(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,648
	ctx.r10.s64 = ctx.r11.s64 + 648;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r10,19782
	ctx.r10.s64 = 1296433152;
	// lfs f0,5424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5424);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,17478
	ctx.r10.u64 = ctx.r10.u64 | 17478;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stfs f13,88(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stb r11,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r11.u8);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82665588"))) PPC_WEAK_FUNC(sub_82665588);
PPC_FUNC_IMPL(__imp__sub_82665588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82665590;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,116
	ctx.r3.s64 = 116;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x825e6f70
	ctx.lr = 0x826655A8;
	sub_825E6F70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826655c8
	if (ctx.cr6.eq) goto loc_826655C8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826654f0
	ctx.lr = 0x826655C0;
	sub_826654F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_826655C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826655D8"))) PPC_WEAK_FUNC(sub_826655D8);
PPC_FUNC_IMPL(__imp__sub_826655D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,648
	ctx.r11.s64 = ctx.r11.s64 + 648;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82665610
	if (ctx.cr6.eq) goto loc_82665610;
	// bl 0x82581e38
	ctx.lr = 0x82665610;
	sub_82581E38(ctx, base);
loc_82665610:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f6b38
	ctx.lr = 0x82665618;
	sub_828F6B38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82665630
	if (ctx.cr6.eq) goto loc_82665630;
	// bl 0x825e6f78
	ctx.lr = 0x8266562C;
	sub_825E6F78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82665630:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82665648"))) PPC_WEAK_FUNC(sub_82665648);
PPC_FUNC_IMPL(__imp__sub_82665648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82665650;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826657f0
	if (!ctx.cr6.eq) goto loc_826657F0;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,-17756(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17756);
	// lwz r29,160(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826657e8
	if (ctx.cr6.eq) goto loc_826657E8;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r9,21314
	ctx.r9.s64 = 1396834304;
	// ori r9,r9,21330
	ctx.r9.u64 = ctx.r9.u64 | 21330;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x826657e8
	if (!ctx.cr6.eq) goto loc_826657E8;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82186158
	ctx.lr = 0x826656A0;
	sub_82186158(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826656b8
	if (ctx.cr6.eq) goto loc_826656B8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82672be8
	ctx.lr = 0x826656B4;
	sub_82672BE8(ctx, base);
	// b 0x826656bc
	goto loc_826656BC;
loc_826656B8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_826656BC:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x826656ec
	if (ctx.cr6.lt) goto loc_826656EC;
	// beq cr6,0x826656dc
	if (ctx.cr6.eq) goto loc_826656DC;
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
	// b 0x826656fc
	goto loc_826656FC;
loc_826656DC:
	// subfic r10,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r3.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// b 0x826656f8
	goto loc_826656F8;
loc_826656EC:
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
loc_826656F8:
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
loc_826656FC:
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8266571c
	if (!ctx.cr6.eq) goto loc_8266571C;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_8266571C:
	// addi r4,r31,72
	ctx.r4.s64 = ctx.r31.s64 + 72;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stb r10,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r10.u8);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// bl 0x82672b30
	ctx.lr = 0x8266575C;
	sub_82672B30(ctx, base);
	// lwz r30,68(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq cr6,0x82665774
	if (ctx.cr6.eq) goto loc_82665774;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x82665774;
	sub_82659610(ctx, base);
loc_82665774:
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823032b8
	ctx.lr = 0x82665784;
	sub_823032B8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82665794
	if (ctx.cr6.eq) goto loc_82665794;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82581e38
	ctx.lr = 0x82665794;
	sub_82581E38(ctx, base);
loc_82665794:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82672a98
	ctx.lr = 0x826657A0;
	sub_82672A98(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r11,r11,36873
	ctx.r11.u64 = ctx.r11.u64 | 36873;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826657CC;
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
	ctx.lr = 0x826657E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_826657E8:
	// ori r11,r10,2
	ctx.r11.u64 = ctx.r10.u64 | 2;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
loc_826657F0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826657F8"))) PPC_WEAK_FUNC(sub_826657F8);
PPC_FUNC_IMPL(__imp__sub_826657F8) {
	PPC_FUNC_PROLOGUE();
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
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826658b0
	if (!ctx.cr6.eq) goto loc_826658B0;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826658b0
	if (ctx.cr6.eq) goto loc_826658B0;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826658b0
	if (ctx.cr6.eq) goto loc_826658B0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// beq cr6,0x82665854
	if (ctx.cr6.eq) goto loc_82665854;
	// bl 0x82581e38
	ctx.lr = 0x82665854;
	sub_82581E38(ctx, base);
loc_82665854:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,-17756(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17756);
	// lwz r3,160(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82665878
	if (!ctx.cr6.eq) goto loc_82665878;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// b 0x826658b0
	goto loc_826658B0;
loc_82665878:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stb r30,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r30.u8);
	// ori r11,r11,36873
	ctx.r11.u64 = ctx.r11.u64 | 36873;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266589C;
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
	ctx.lr = 0x826658B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826658B0:
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

__attribute__((alias("__imp__sub_826658C8"))) PPC_WEAK_FUNC(sub_826658C8);
PPC_FUNC_IMPL(__imp__sub_826658C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,851
	ctx.r3.s64 = 851;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826658D0"))) PPC_WEAK_FUNC(sub_826658D0);
PPC_FUNC_IMPL(__imp__sub_826658D0) {
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
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82665960
	if (!ctx.cr6.eq) goto loc_82665960;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,2188(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2188);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82665914
	if (ctx.cr6.lt) goto loc_82665914;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82629778
	ctx.lr = 0x82665914;
	sub_82629778(ctx, base);
loc_82665914:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x82665930
	if (ctx.cr6.lt) goto loc_82665930;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82673148
	ctx.lr = 0x82665930;
	sub_82673148(ctx, base);
loc_82665930:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,-12556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12556);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8266594c
	if (ctx.cr6.lt) goto loc_8266594C;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x825866a0
	ctx.lr = 0x8266594C;
	sub_825866A0(ctx, base);
loc_8266594C:
	// lfs f1,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x82665960
	if (ctx.cr6.lt) goto loc_82665960;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82673150
	ctx.lr = 0x82665960;
	sub_82673150(ctx, base);
loc_82665960:
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

__attribute__((alias("__imp__sub_82665978"))) PPC_WEAK_FUNC(sub_82665978);
PPC_FUNC_IMPL(__imp__sub_82665978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r11,r4,17
	ctx.r11.s64 = ctx.r4.s64 + 17;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82665990"))) PPC_WEAK_FUNC(sub_82665990);
PPC_FUNC_IMPL(__imp__sub_82665990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f13,708(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 708);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f0,5424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5424);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lfs f12,704(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,76(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826659C0"))) PPC_WEAK_FUNC(sub_826659C0);
PPC_FUNC_IMPL(__imp__sub_826659C0) {
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
	ctx.lr = 0x826659D8;
	sub_828F6A90(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,716
	ctx.r11.s64 = ctx.r11.s64 + 716;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,708(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 708);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// lfs f0,5424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5424);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// lfs f12,704(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 704);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,19782
	ctx.r10.s64 = 1296433152;
	// ori r10,r10,17219
	ctx.r10.u64 = ctx.r10.u64 | 17219;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f12,76(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82665A40"))) PPC_WEAK_FUNC(sub_82665A40);
PPC_FUNC_IMPL(__imp__sub_82665A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82665A48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,84
	ctx.r3.s64 = 84;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x825e6f70
	ctx.lr = 0x82665A60;
	sub_825E6F70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82665a80
	if (ctx.cr6.eq) goto loc_82665A80;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826659c0
	ctx.lr = 0x82665A78;
	sub_826659C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82665A80:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82665A90"))) PPC_WEAK_FUNC(sub_82665A90);
PPC_FUNC_IMPL(__imp__sub_82665A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,716
	ctx.r11.s64 = ctx.r11.s64 + 716;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82665ac8
	if (ctx.cr6.eq) goto loc_82665AC8;
	// bl 0x82581e38
	ctx.lr = 0x82665AC8;
	sub_82581E38(ctx, base);
loc_82665AC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f6b38
	ctx.lr = 0x82665AD0;
	sub_828F6B38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82665ae8
	if (ctx.cr6.eq) goto loc_82665AE8;
	// bl 0x825e6f78
	ctx.lr = 0x82665AE4;
	sub_825E6F78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82665AE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82665B00"))) PPC_WEAK_FUNC(sub_82665B00);
PPC_FUNC_IMPL(__imp__sub_82665B00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82665B08;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82665c28
	if (!ctx.cr6.eq) goto loc_82665C28;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,-17756(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17756);
	// lwz r30,160(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82665c20
	if (ctx.cr6.eq) goto loc_82665C20;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r11,21314
	ctx.r11.s64 = 1396834304;
	// ori r11,r11,21330
	ctx.r11.u64 = ctx.r11.u64 | 21330;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82665c20
	if (!ctx.cr6.eq) goto loc_82665C20;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82186158
	ctx.lr = 0x82665B58;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82665b6c
	if (ctx.cr6.eq) goto loc_82665B6C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x826730d8
	ctx.lr = 0x82665B68;
	sub_826730D8(ctx, base);
	// b 0x82665b70
	goto loc_82665B70;
loc_82665B6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82665B70:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// bne cr6,0x82665b90
	if (!ctx.cr6.eq) goto loc_82665B90;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82665B90:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82629778
	ctx.lr = 0x82665B9C;
	sub_82629778(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82673148
	ctx.lr = 0x82665BAC;
	sub_82673148(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825866a0
	ctx.lr = 0x82665BBC;
	sub_825866A0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82673150
	ctx.lr = 0x82665BCC;
	sub_82673150(ctx, base);
	// lwz r30,64(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x82665bec
	if (ctx.cr6.eq) goto loc_82665BEC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x82665BEC;
	sub_82659610(ctx, base);
loc_82665BEC:
	// addi r31,r31,60
	ctx.r31.s64 = ctx.r31.s64 + 60;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823032b8
	ctx.lr = 0x82665BFC;
	sub_823032B8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82665c0c
	if (ctx.cr6.eq) goto loc_82665C0C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82581e38
	ctx.lr = 0x82665C0C;
	sub_82581E38(ctx, base);
loc_82665C0C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82672a98
	ctx.lr = 0x82665C18;
	sub_82672A98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82665C20:
	// ori r11,r10,2
	ctx.r11.u64 = ctx.r10.u64 | 2;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
loc_82665C28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82665C30"))) PPC_WEAK_FUNC(sub_82665C30);
PPC_FUNC_IMPL(__imp__sub_82665C30) {
	PPC_FUNC_PROLOGUE();
	// li r3,850
	ctx.r3.s64 = 850;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82665C38"))) PPC_WEAK_FUNC(sub_82665C38);
PPC_FUNC_IMPL(__imp__sub_82665C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82665C40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x825e6f70
	ctx.lr = 0x82665C58;
	sub_825E6F70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82665ca0
	if (ctx.cr6.eq) goto loc_82665CA0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x828f6a90
	ctx.lr = 0x82665C74;
	sub_828F6A90(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,19782
	ctx.r9.s64 = 1296433152;
	// addi r11,r11,776
	ctx.r11.s64 = ctx.r11.s64 + 776;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r9,17218
	ctx.r9.u64 = ctx.r9.u64 | 17218;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82665CA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82665CB0"))) PPC_WEAK_FUNC(sub_82665CB0);
PPC_FUNC_IMPL(__imp__sub_82665CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,776
	ctx.r11.s64 = ctx.r11.s64 + 776;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82665ce8
	if (ctx.cr6.eq) goto loc_82665CE8;
	// bl 0x82581e38
	ctx.lr = 0x82665CE8;
	sub_82581E38(ctx, base);
loc_82665CE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f6b38
	ctx.lr = 0x82665CF0;
	sub_828F6B38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82665d08
	if (ctx.cr6.eq) goto loc_82665D08;
	// bl 0x825e6f78
	ctx.lr = 0x82665D04;
	sub_825E6F78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82665D08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82665D20"))) PPC_WEAK_FUNC(sub_82665D20);
PPC_FUNC_IMPL(__imp__sub_82665D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82665D28;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lhz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82665de4
	if (!ctx.cr6.eq) goto loc_82665DE4;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,-17756(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17756);
	// lwz r31,160(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82665ddc
	if (ctx.cr6.eq) goto loc_82665DDC;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lis r9,21314
	ctx.r9.s64 = 1396834304;
	// ori r9,r9,21330
	ctx.r9.u64 = ctx.r9.u64 | 21330;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82665ddc
	if (!ctx.cr6.eq) goto loc_82665DDC;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82186158
	ctx.lr = 0x82665D78;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82665d90
	if (ctx.cr6.eq) goto loc_82665D90;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826735f8
	ctx.lr = 0x82665D88;
	sub_826735F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82665d94
	goto loc_82665D94;
loc_82665D90:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82665D94:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82665da8
	if (ctx.cr6.eq) goto loc_82665DA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x82665DA8;
	sub_82659610(ctx, base);
loc_82665DA8:
	// addi r30,r30,60
	ctx.r30.s64 = ctx.r30.s64 + 60;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823032b8
	ctx.lr = 0x82665DB8;
	sub_823032B8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82665dc8
	if (ctx.cr6.eq) goto loc_82665DC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581e38
	ctx.lr = 0x82665DC8;
	sub_82581E38(ctx, base);
loc_82665DC8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82672a98
	ctx.lr = 0x82665DD4;
	sub_82672A98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82665DDC:
	// ori r11,r10,2
	ctx.r11.u64 = ctx.r10.u64 | 2;
	// sth r11,12(r30)
	PPC_STORE_U16(ctx.r30.u32 + 12, ctx.r11.u16);
loc_82665DE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82665DF0"))) PPC_WEAK_FUNC(sub_82665DF0);
PPC_FUNC_IMPL(__imp__sub_82665DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82665DF8;
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
	ctx.lr = 0x82665E10;
	sub_825E6F70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82665e50
	if (ctx.cr6.eq) goto loc_82665E50;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x828f6a90
	ctx.lr = 0x82665E2C;
	sub_828F6A90(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,19789
	ctx.r10.s64 = 1296891904;
	// addi r11,r11,836
	ctx.r11.s64 = ctx.r11.s64 + 836;
	// ori r10,r10,21327
	ctx.r10.u64 = ctx.r10.u64 | 21327;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82665E50:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82665E60"))) PPC_WEAK_FUNC(sub_82665E60);
PPC_FUNC_IMPL(__imp__sub_82665E60) {
	PPC_FUNC_PROLOGUE();
	// li r3,232
	ctx.r3.s64 = 232;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82665E68"))) PPC_WEAK_FUNC(sub_82665E68);
PPC_FUNC_IMPL(__imp__sub_82665E68) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lis r8,21314
	ctx.r8.s64 = 1396834304;
	// ori r8,r8,20290
	ctx.r8.u64 = ctx.r8.u64 | 20290;
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82665ea4
	if (ctx.cr6.eq) goto loc_82665EA4;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// sth r10,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
	// blr 
	return;
loc_82665EA4:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x826699b0
	sub_826699B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82665EB0"))) PPC_WEAK_FUNC(sub_82665EB0);
PPC_FUNC_IMPL(__imp__sub_82665EB0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r10,21314
	ctx.r10.s64 = 1396834304;
	// ori r10,r10,20290
	ctx.r10.u64 = ctx.r10.u64 | 20290;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x826699b0
	sub_826699B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82665EE4"))) PPC_WEAK_FUNC(sub_82665EE4);
PPC_FUNC_IMPL(__imp__sub_82665EE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82665EE8"))) PPC_WEAK_FUNC(sub_82665EE8);
PPC_FUNC_IMPL(__imp__sub_82665EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,836
	ctx.r11.s64 = ctx.r11.s64 + 836;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828f6b38
	ctx.lr = 0x82665F14;
	sub_828F6B38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82665f2c
	if (ctx.cr6.eq) goto loc_82665F2C;
	// bl 0x825e6f78
	ctx.lr = 0x82665F28;
	sub_825E6F78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82665F2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82665F48"))) PPC_WEAK_FUNC(sub_82665F48);
PPC_FUNC_IMPL(__imp__sub_82665F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82665F50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x825e6f70
	ctx.lr = 0x82665F68;
	sub_825E6F70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82665fa8
	if (ctx.cr6.eq) goto loc_82665FA8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x828f6a90
	ctx.lr = 0x82665F84;
	sub_828F6A90(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,19789
	ctx.r10.s64 = 1296891904;
	// addi r11,r11,896
	ctx.r11.s64 = ctx.r11.s64 + 896;
	// ori r10,r10,17482
	ctx.r10.u64 = ctx.r10.u64 | 17482;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82665FA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82665FB8"))) PPC_WEAK_FUNC(sub_82665FB8);
PPC_FUNC_IMPL(__imp__sub_82665FB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,231
	ctx.r3.s64 = 231;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82665FC0"))) PPC_WEAK_FUNC(sub_82665FC0);
PPC_FUNC_IMPL(__imp__sub_82665FC0) {
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
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x828f7268
	ctx.lr = 0x82665FE0;
	sub_828F7268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r4.u32);
	// beq cr6,0x82666030
	if (ctx.cr6.eq) goto loc_82666030;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82666030
	if (ctx.cr6.eq) goto loc_82666030;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266601C;
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
loc_82666030:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
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

__attribute__((alias("__imp__sub_82666050"))) PPC_WEAK_FUNC(sub_82666050);
PPC_FUNC_IMPL(__imp__sub_82666050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,896
	ctx.r11.s64 = ctx.r11.s64 + 896;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828f6b38
	ctx.lr = 0x8266607C;
	sub_828F6B38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82666094
	if (ctx.cr6.eq) goto loc_82666094;
	// bl 0x825e6f78
	ctx.lr = 0x82666090;
	sub_825E6F78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82666094:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826660B0"))) PPC_WEAK_FUNC(sub_826660B0);
PPC_FUNC_IMPL(__imp__sub_826660B0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x82665fc0
	sub_82665FC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826660C4"))) PPC_WEAK_FUNC(sub_826660C4);
PPC_FUNC_IMPL(__imp__sub_826660C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826660C8"))) PPC_WEAK_FUNC(sub_826660C8);
PPC_FUNC_IMPL(__imp__sub_826660C8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r4,60(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
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

__attribute__((alias("__imp__sub_82666100"))) PPC_WEAK_FUNC(sub_82666100);
PPC_FUNC_IMPL(__imp__sub_82666100) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82666108"))) PPC_WEAK_FUNC(sub_82666108);
PPC_FUNC_IMPL(__imp__sub_82666108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82666110;
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
	ctx.lr = 0x82666128;
	sub_825E6F70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82666168
	if (ctx.cr6.eq) goto loc_82666168;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x828f6a90
	ctx.lr = 0x82666144;
	sub_828F6A90(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,19802
	ctx.r10.s64 = 1297743872;
	// addi r11,r11,956
	ctx.r11.s64 = ctx.r11.s64 + 956;
	// ori r10,r10,17228
	ctx.r10.u64 = ctx.r10.u64 | 17228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82666168:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82666178"))) PPC_WEAK_FUNC(sub_82666178);
PPC_FUNC_IMPL(__imp__sub_82666178) {
	PPC_FUNC_PROLOGUE();
	// li r3,840
	ctx.r3.s64 = 840;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82666180"))) PPC_WEAK_FUNC(sub_82666180);
PPC_FUNC_IMPL(__imp__sub_82666180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r9,21314
	ctx.r9.s64 = 1396834304;
	// ori r9,r9,17229
	ctx.r9.u64 = ctx.r9.u64 | 17229;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x826661b8
	if (ctx.cr6.eq) goto loc_826661B8;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// sth r11,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r11.u16);
	// blr 
	return;
loc_826661B8:
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x826661d4
	if (!ctx.cr6.gt) goto loc_826661D4;
	// stfs f0,160(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 160, temp.u32);
loc_826661D4:
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stfs f0,164(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 164, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826661F0"))) PPC_WEAK_FUNC(sub_826661F0);
PPC_FUNC_IMPL(__imp__sub_826661F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,830
	ctx.r3.s64 = 830;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826661F8"))) PPC_WEAK_FUNC(sub_826661F8);
PPC_FUNC_IMPL(__imp__sub_826661F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,1016
	ctx.r11.s64 = ctx.r11.s64 + 1016;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82666230
	if (ctx.cr6.eq) goto loc_82666230;
	// bl 0x821601b8
	ctx.lr = 0x82666230;
	sub_821601B8(ctx, base);
loc_82666230:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f6b38
	ctx.lr = 0x82666238;
	sub_828F6B38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82666250
	if (ctx.cr6.eq) goto loc_82666250;
	// bl 0x825e6f78
	ctx.lr = 0x8266624C;
	sub_825E6F78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82666250:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82666268"))) PPC_WEAK_FUNC(sub_82666268);
PPC_FUNC_IMPL(__imp__sub_82666268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82666270;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x825e6f70
	ctx.lr = 0x82666288;
	sub_825E6F70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826662d4
	if (ctx.cr6.eq) goto loc_826662D4;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x828f6a90
	ctx.lr = 0x826662A4;
	sub_828F6A90(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,19796
	ctx.r9.s64 = 1297350656;
	// addi r11,r11,1016
	ctx.r11.s64 = ctx.r11.s64 + 1016;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r9,22611
	ctx.r9.u64 = ctx.r9.u64 | 22611;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_826662D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826662E0"))) PPC_WEAK_FUNC(sub_826662E0);
PPC_FUNC_IMPL(__imp__sub_826662E0) {
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
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82666474
	if (!ctx.cr6.eq) goto loc_82666474;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82666460
	if (ctx.cr6.eq) goto loc_82666460;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82666460
	if (ctx.cr6.eq) goto loc_82666460;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,-17756(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17756);
	// lwz r3,160(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82666344;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82666474
	if (ctx.cr6.eq) goto loc_82666474;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x825ef2e0
	ctx.lr = 0x82666368;
	sub_825EF2E0(ctx, base);
	// addi r30,r31,60
	ctx.r30.s64 = ctx.r31.s64 + 60;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221f3c8
	ctx.lr = 0x82666378;
	sub_8221F3C8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82666388
	if (ctx.cr6.eq) goto loc_82666388;
	// bl 0x821601b8
	ctx.lr = 0x82666388;
	sub_821601B8(ctx, base);
loc_82666388:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826663a4
	if (ctx.cr6.eq) goto loc_826663A4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826663cc
	if (!ctx.cr6.eq) goto loc_826663CC;
loc_826663A4:
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r3,r10,1112
	ctx.r3.s64 = ctx.r10.s64 + 1112;
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// sth r10,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r10.u16);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821e0968
	ctx.lr = 0x826663C8;
	sub_821E0968(ctx, base);
	// b 0x82666474
	goto loc_82666474;
loc_826663CC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f2,1108(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1108);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f1,14388(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14388);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8262b050
	ctx.lr = 0x826663E0;
	sub_8262B050(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,212(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x826663fc
	if (ctx.cr6.eq) goto loc_826663FC;
	// stw r10,212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 212, ctx.r10.u32);
	// stb r10,221(r11)
	PPC_STORE_U8(ctx.r11.u32 + 221, ctx.r10.u8);
loc_826663FC:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r10,44(r9)
	PPC_STORE_U32(ctx.r9.u32 + 44, ctx.r10.u32);
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82666424;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stfs f31,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stb r11,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r11.u8);
	// b 0x82666474
	goto loc_82666474;
loc_82666460:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,1072
	ctx.r3.s64 = ctx.r11.s64 + 1072;
	// ori r11,r10,2
	ctx.r11.u64 = ctx.r10.u64 | 2;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// bl 0x821e0968
	ctx.lr = 0x82666474;
	sub_821E0968(ctx, base);
loc_82666474:
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

__attribute__((alias("__imp__sub_82666490"))) PPC_WEAK_FUNC(sub_82666490);
PPC_FUNC_IMPL(__imp__sub_82666490) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// rlwinm r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8266655c
	if (!ctx.cr6.eq) goto loc_8266655C;
	// addi r31,r11,60
	ctx.r31.s64 = ctx.r11.s64 + 60;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266655c
	if (ctx.cr6.eq) goto loc_8266655C;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8266655c
	if (ctx.cr6.eq) goto loc_8266655C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x8266655c
	if (!ctx.cr6.gt) goto loc_8266655C;
	// lfs f0,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,72(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8266655c
	if (ctx.cr6.gt) goto loc_8266655C;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,72(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// lwz r10,268(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82666534
	if (!ctx.cr6.gt) goto loc_82666534;
	// bl 0x8262c578
	ctx.lr = 0x82666518;
	sub_8262C578(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82666530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8266655c
	goto loc_8266655C;
loc_82666534:
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266655c
	if (ctx.cr6.eq) goto loc_8266655C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266655c
	if (ctx.cr6.eq) goto loc_8266655C;
	// bl 0x821601b8
	ctx.lr = 0x8266655C;
	sub_821601B8(ctx, base);
loc_8266655C:
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

__attribute__((alias("__imp__sub_82666578"))) PPC_WEAK_FUNC(sub_82666578);
PPC_FUNC_IMPL(__imp__sub_82666578) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r11,r3,60
	ctx.r11.s64 = ctx.r3.s64 + 60;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
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
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821601b8
	sub_821601B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826665C4"))) PPC_WEAK_FUNC(sub_826665C4);
PPC_FUNC_IMPL(__imp__sub_826665C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826665C8"))) PPC_WEAK_FUNC(sub_826665C8);
PPC_FUNC_IMPL(__imp__sub_826665C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,820
	ctx.r3.s64 = 820;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826665D0"))) PPC_WEAK_FUNC(sub_826665D0);
PPC_FUNC_IMPL(__imp__sub_826665D0) {
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
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266662c
	if (!ctx.cr6.eq) goto loc_8266662C;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8266662c
	if (ctx.cr6.eq) goto loc_8266662C;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8266662c
	if (ctx.cr6.eq) goto loc_8266662C;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82666624;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_8266662C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82666640"))) PPC_WEAK_FUNC(sub_82666640);
PPC_FUNC_IMPL(__imp__sub_82666640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266667c
	if (ctx.cr6.eq) goto loc_8266667C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82666680
	goto loc_82666680;
loc_8266667C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82666680:
	// lfs f0,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// b 0x8243cab8
	sub_8243CAB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82666690"))) PPC_WEAK_FUNC(sub_82666690);
PPC_FUNC_IMPL(__imp__sub_82666690) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82666698"))) PPC_WEAK_FUNC(sub_82666698);
PPC_FUNC_IMPL(__imp__sub_82666698) {
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
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82666738
	if (!ctx.cr6.eq) goto loc_82666738;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82666738
	if (ctx.cr6.eq) goto loc_82666738;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82666738
	if (ctx.cr6.eq) goto loc_82666738;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826666f0
	if (ctx.cr6.eq) goto loc_826666F0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x826666f4
	goto loc_826666F4;
loc_826666F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826666F4:
	// bl 0x823d63a8
	ctx.lr = 0x826666F8;
	sub_823D63A8(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266670c
	if (ctx.cr6.eq) goto loc_8266670C;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82666710
	goto loc_82666710;
loc_8266670C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82666710:
	// bl 0x825c9530
	ctx.lr = 0x82666714;
	sub_825C9530(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82666728
	if (ctx.cr6.eq) goto loc_82666728;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8266672c
	goto loc_8266672C;
loc_82666728:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266672C:
	// lfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x8243cab8
	ctx.lr = 0x82666738;
	sub_8243CAB8(ctx, base);
loc_82666738:
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

__attribute__((alias("__imp__sub_82666750"))) PPC_WEAK_FUNC(sub_82666750);
PPC_FUNC_IMPL(__imp__sub_82666750) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828f7308
	ctx.lr = 0x8266676C;
	sub_828F7308(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r4.u32);
	// beq cr6,0x826667c8
	if (ctx.cr6.eq) goto loc_826667C8;
	// lis r10,22606
	ctx.r10.s64 = 1481506816;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r10,r10,17232
	ctx.r10.u64 = ctx.r10.u64 | 17232;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826667c8
	if (!ctx.cr6.eq) goto loc_826667C8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826738e8
	ctx.lr = 0x82666798;
	sub_826738E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x823032b8
	ctx.lr = 0x826667A4;
	sub_823032B8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826667d4
	if (ctx.cr6.eq) goto loc_826667D4;
	// bl 0x82581e38
	ctx.lr = 0x826667B4;
	sub_82581E38(ctx, base);
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
loc_826667C8:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
loc_826667D4:
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

__attribute__((alias("__imp__sub_826667E8"))) PPC_WEAK_FUNC(sub_826667E8);
PPC_FUNC_IMPL(__imp__sub_826667E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,1156
	ctx.r11.s64 = ctx.r11.s64 + 1156;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82666828
	if (ctx.cr6.eq) goto loc_82666828;
	// bl 0x825c7328
	ctx.lr = 0x82666820;
	sub_825C7328(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_82666828:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82666838
	if (ctx.cr6.eq) goto loc_82666838;
	// bl 0x82581e38
	ctx.lr = 0x82666838;
	sub_82581E38(ctx, base);
loc_82666838:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f6b38
	ctx.lr = 0x82666840;
	sub_828F6B38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82666858
	if (ctx.cr6.eq) goto loc_82666858;
	// bl 0x825e6f78
	ctx.lr = 0x82666854;
	sub_825E6F78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82666858:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82666870"))) PPC_WEAK_FUNC(sub_82666870);
PPC_FUNC_IMPL(__imp__sub_82666870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82666878;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x825e6f70
	ctx.lr = 0x82666890;
	sub_825E6F70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826668e4
	if (ctx.cr6.eq) goto loc_826668E4;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x828f6a90
	ctx.lr = 0x826668AC;
	sub_828F6A90(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,19779
	ctx.r9.s64 = 1296236544;
	// addi r10,r11,1156
	ctx.r10.s64 = ctx.r11.s64 + 1156;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r9,21331
	ctx.r9.u64 = ctx.r9.u64 | 21331;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_826668E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826668F0"))) PPC_WEAK_FUNC(sub_826668F0);
PPC_FUNC_IMPL(__imp__sub_826668F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x826668F8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82666750
	ctx.lr = 0x8266690C;
	sub_82666750(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826665d0
	ctx.lr = 0x82666914;
	sub_826665D0(ctx, base);
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82666b38
	if (!ctx.cr6.eq) goto loc_82666B38;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82666948
	if (!ctx.cr6.eq) goto loc_82666948;
	// ori r11,r10,2
	ctx.r11.u64 = ctx.r10.u64 | 2;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82666948:
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lwz r4,36(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// beq cr6,0x82666998
	if (ctx.cr6.eq) goto loc_82666998;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825ceb58
	ctx.lr = 0x82666970;
	sub_825CEB58(ctx, base);
	// addi r30,r31,72
	ctx.r30.s64 = ctx.r31.s64 + 72;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8249fe20
	ctx.lr = 0x82666980;
	sub_8249FE20(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826669c8
	if (ctx.cr6.eq) goto loc_826669C8;
	// bl 0x825c7328
	ctx.lr = 0x82666990;
	sub_825C7328(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// b 0x826669c8
	goto loc_826669C8;
loc_82666998:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825cebf8
	ctx.lr = 0x826669A4;
	sub_825CEBF8(ctx, base);
	// addi r30,r31,72
	ctx.r30.s64 = ctx.r31.s64 + 72;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8249fe20
	ctx.lr = 0x826669B4;
	sub_8249FE20(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826669c8
	if (ctx.cr6.eq) goto loc_826669C8;
	// bl 0x825c7328
	ctx.lr = 0x826669C4;
	sub_825C7328(ctx, base);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
loc_826669C8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82666b38
	if (ctx.cr6.eq) goto loc_82666B38;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82666b38
	if (ctx.cr6.eq) goto loc_82666B38;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r10,r10,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82666a04
	if (ctx.cr6.eq) goto loc_82666A04;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82666a08
	goto loc_82666A08;
loc_82666A04:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82666A08:
	// bl 0x823d63b8
	ctx.lr = 0x82666A0C;
	sub_823D63B8(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stfs f1,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82666a30
	if (!ctx.cr6.gt) goto loc_82666A30;
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
loc_82666A30:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82666a44
	if (ctx.cr6.eq) goto loc_82666A44;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82666a48
	goto loc_82666A48;
loc_82666A44:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82666A48:
	// lfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x8243cab8
	ctx.lr = 0x82666A54;
	sub_8243CAB8(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// ble cr6,0x82666ab8
	if (!ctx.cr6.gt) goto loc_82666AB8;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f31,f0
	ctx.f31.f64 = double(float(ctx.f0.f64));
	// beq cr6,0x82666a8c
	if (ctx.cr6.eq) goto loc_82666A8C;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82666a90
	goto loc_82666A90;
loc_82666A8C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82666A90:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825c9520
	ctx.lr = 0x82666A98;
	sub_825C9520(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82666aac
	if (ctx.cr6.eq) goto loc_82666AAC;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82666ab0
	goto loc_82666AB0;
loc_82666AAC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82666AB0:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825c9510
	ctx.lr = 0x82666AB8;
	sub_825C9510(ctx, base);
loc_82666AB8:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82666b08
	if (ctx.cr6.lt) goto loc_82666B08;
	// bne cr6,0x82666b38
	if (!ctx.cr6.eq) goto loc_82666B38;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82666af0
	if (ctx.cr6.eq) goto loc_82666AF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82209018
	ctx.lr = 0x82666AE4;
	sub_82209018(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82666AF0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82209018
	ctx.lr = 0x82666AFC;
	sub_82209018(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82666B08:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82666b2c
	if (ctx.cr6.eq) goto loc_82666B2C;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82209018
	ctx.lr = 0x82666B20;
	sub_82209018(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82666B2C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82209018
	ctx.lr = 0x82666B38;
	sub_82209018(ctx, base);
loc_82666B38:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82666B48"))) PPC_WEAK_FUNC(sub_82666B48);
PPC_FUNC_IMPL(__imp__sub_82666B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82666B50;
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
	ctx.lr = 0x82666B68;
	sub_825E6F70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82666ba8
	if (ctx.cr6.eq) goto loc_82666BA8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x828f6a90
	ctx.lr = 0x82666B84;
	sub_828F6A90(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,19792
	ctx.r10.s64 = 1297088512;
	// addi r11,r11,1216
	ctx.r11.s64 = ctx.r11.s64 + 1216;
	// ori r10,r10,21587
	ctx.r10.u64 = ctx.r10.u64 | 21587;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82666BA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82666BB8"))) PPC_WEAK_FUNC(sub_82666BB8);
PPC_FUNC_IMPL(__imp__sub_82666BB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,811
	ctx.r3.s64 = 811;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82666BC0"))) PPC_WEAK_FUNC(sub_82666BC0);
PPC_FUNC_IMPL(__imp__sub_82666BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,1216
	ctx.r11.s64 = ctx.r11.s64 + 1216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828f6b38
	ctx.lr = 0x82666BEC;
	sub_828F6B38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82666c04
	if (ctx.cr6.eq) goto loc_82666C04;
	// bl 0x825e6f78
	ctx.lr = 0x82666C00;
	sub_825E6F78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82666C04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82666C20"))) PPC_WEAK_FUNC(sub_82666C20);
PPC_FUNC_IMPL(__imp__sub_82666C20) {
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
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82666d18
	if (!ctx.cr6.eq) goto loc_82666D18;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x82666c64
	if (!ctx.cr6.lt) goto loc_82666C64;
loc_82666C58:
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// b 0x82666d18
	goto loc_82666D18;
loc_82666C64:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r9,21314
	ctx.r9.s64 = 1396834304;
	// ori r9,r9,20547
	ctx.r9.u64 = ctx.r9.u64 | 20547;
	// lwz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82666c58
	if (!ctx.cr6.eq) goto loc_82666C58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f73f8
	ctx.lr = 0x82666C88;
	sub_828F73F8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82666CA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82666cb8
	if (!ctx.cr6.eq) goto loc_82666CB8;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// b 0x82666d18
	goto loc_82666D18;
loc_82666CB8:
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82666cec
	if (ctx.cr6.eq) goto loc_82666CEC;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82666cec
	if (ctx.cr6.eq) goto loc_82666CEC;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r4,r11,30
	ctx.r4.u64 = ctx.r11.u32 & 0x3;
	// bl 0x821ef318
	ctx.lr = 0x82666CEC;
	sub_821EF318(ctx, base);
loc_82666CEC:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82666d18
	if (!ctx.cr6.gt) goto loc_82666D18;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x82673cc8
	ctx.lr = 0x82666D18;
	sub_82673CC8(ctx, base);
loc_82666D18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82666D30"))) PPC_WEAK_FUNC(sub_82666D30);
PPC_FUNC_IMPL(__imp__sub_82666D30) {
	PPC_FUNC_PROLOGUE();
	// li r3,810
	ctx.r3.s64 = 810;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82666D38"))) PPC_WEAK_FUNC(sub_82666D38);
PPC_FUNC_IMPL(__imp__sub_82666D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82666D40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x825e6f70
	ctx.lr = 0x82666D58;
	sub_825E6F70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82666da0
	if (ctx.cr6.eq) goto loc_82666DA0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x828f6a90
	ctx.lr = 0x82666D74;
	sub_828F6A90(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,19792
	ctx.r9.s64 = 1297088512;
	// addi r11,r11,1276
	ctx.r11.s64 = ctx.r11.s64 + 1276;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r9,21584
	ctx.r9.u64 = ctx.r9.u64 | 21584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82666DA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82666DB0"))) PPC_WEAK_FUNC(sub_82666DB0);
PPC_FUNC_IMPL(__imp__sub_82666DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,1276
	ctx.r11.s64 = ctx.r11.s64 + 1276;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82666de8
	if (ctx.cr6.eq) goto loc_82666DE8;
	// bl 0x82631328
	ctx.lr = 0x82666DE8;
	sub_82631328(ctx, base);
loc_82666DE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f6b38
	ctx.lr = 0x82666DF0;
	sub_828F6B38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82666e08
	if (ctx.cr6.eq) goto loc_82666E08;
	// bl 0x825e6f78
	ctx.lr = 0x82666E04;
	sub_825E6F78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82666E08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82666E20"))) PPC_WEAK_FUNC(sub_82666E20);
PPC_FUNC_IMPL(__imp__sub_82666E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82666E28;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lhz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82666f64
	if (!ctx.cr6.eq) goto loc_82666F64;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82666f5c
	if (ctx.cr6.eq) goto loc_82666F5C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82666f5c
	if (ctx.cr6.eq) goto loc_82666F5C;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,-17756(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17756);
	// lwz r3,160(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82666E7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82666f64
	if (ctx.cr6.eq) goto loc_82666F64;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x825fc9f8
	ctx.lr = 0x82666E94;
	sub_825FC9F8(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x825fddf8
	ctx.lr = 0x82666EA8;
	sub_825FDDF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825fe5b0
	ctx.lr = 0x82666EBC;
	sub_825FE5B0(ctx, base);
	// addi r31,r30,60
	ctx.r31.s64 = ctx.r30.s64 + 60;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82224c78
	ctx.lr = 0x82666ECC;
	sub_82224C78(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82666edc
	if (ctx.cr6.eq) goto loc_82666EDC;
	// bl 0x82631328
	ctx.lr = 0x82666EDC;
	sub_82631328(ctx, base);
loc_82666EDC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82666f64
	if (ctx.cr6.eq) goto loc_82666F64;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82666f64
	if (ctx.cr6.eq) goto loc_82666F64;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r4,r11,30
	ctx.r4.u64 = ctx.r11.u32 & 0x3;
	// bl 0x821ef318
	ctx.lr = 0x82666F10;
	sub_821EF318(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82666f64
	if (!ctx.cr6.gt) goto loc_82666F64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,2952(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2952);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82666F54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82666F5C:
	// ori r11,r10,2
	ctx.r11.u64 = ctx.r10.u64 | 2;
	// sth r11,12(r30)
	PPC_STORE_U16(ctx.r30.u32 + 12, ctx.r11.u16);
loc_82666F64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82666F70"))) PPC_WEAK_FUNC(sub_82666F70);
PPC_FUNC_IMPL(__imp__sub_82666F70) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
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

__attribute__((alias("__imp__sub_82666FAC"))) PPC_WEAK_FUNC(sub_82666FAC);
PPC_FUNC_IMPL(__imp__sub_82666FAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82666FB0"))) PPC_WEAK_FUNC(sub_82666FB0);
PPC_FUNC_IMPL(__imp__sub_82666FB0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
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
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82631328
	sub_82631328(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82666FF8"))) PPC_WEAK_FUNC(sub_82666FF8);
PPC_FUNC_IMPL(__imp__sub_82666FF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82667000"))) PPC_WEAK_FUNC(sub_82667000);
PPC_FUNC_IMPL(__imp__sub_82667000) {
	PPC_FUNC_PROLOGUE();
	// li r3,801
	ctx.r3.s64 = 801;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82667008"))) PPC_WEAK_FUNC(sub_82667008);
PPC_FUNC_IMPL(__imp__sub_82667008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82667010;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x825e6f70
	ctx.lr = 0x82667028;
	sub_825E6F70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82667070
	if (ctx.cr6.eq) goto loc_82667070;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x828f6a90
	ctx.lr = 0x82667044;
	sub_828F6A90(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,19795
	ctx.r9.s64 = 1297285120;
	// addi r11,r11,1336
	ctx.r11.s64 = ctx.r11.s64 + 1336;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r9,13136
	ctx.r9.u64 = ctx.r9.u64 | 13136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82667070:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82667080"))) PPC_WEAK_FUNC(sub_82667080);
PPC_FUNC_IMPL(__imp__sub_82667080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,1336
	ctx.r11.s64 = ctx.r11.s64 + 1336;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826670b8
	if (ctx.cr6.eq) goto loc_826670B8;
	// bl 0x82581e38
	ctx.lr = 0x826670B8;
	sub_82581E38(ctx, base);
loc_826670B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f6b38
	ctx.lr = 0x826670C0;
	sub_828F6B38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826670d8
	if (ctx.cr6.eq) goto loc_826670D8;
	// bl 0x825e6f78
	ctx.lr = 0x826670D4;
	sub_825E6F78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826670D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826670F0"))) PPC_WEAK_FUNC(sub_826670F0);
PPC_FUNC_IMPL(__imp__sub_826670F0) {
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
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826671ac
	if (!ctx.cr6.eq) goto loc_826671AC;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826671ac
	if (ctx.cr6.eq) goto loc_826671AC;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826671ac
	if (ctx.cr6.eq) goto loc_826671AC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8262fa18
	ctx.lr = 0x82667138;
	sub_8262FA18(ctx, base);
	// lfs f13,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// bne cr6,0x82667168
	if (!ctx.cr6.eq) goto loc_82667168;
	// lfs f11,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bne cr6,0x82667168
	if (!ctx.cr6.eq) goto loc_82667168;
	// lfs f11,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// beq cr6,0x826671ac
	if (ctx.cr6.eq) goto loc_826671AC;
loc_82667168:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x8251d058
	ctx.lr = 0x8266718C;
	sub_8251D058(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
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
loc_826671AC:
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

__attribute__((alias("__imp__sub_826671C0"))) PPC_WEAK_FUNC(sub_826671C0);
PPC_FUNC_IMPL(__imp__sub_826671C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x826671C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82667344
	if (!ctx.cr6.eq) goto loc_82667344;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8266733c
	if (ctx.cr6.eq) goto loc_8266733C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266733c
	if (ctx.cr6.eq) goto loc_8266733C;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,-17756(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17756);
	// lwz r4,160(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82667220;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82667324
	if (ctx.cr6.eq) goto loc_82667324;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82667324
	if (ctx.cr6.eq) goto loc_82667324;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82667254;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82667274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8262fa18
	ctx.lr = 0x82667288;
	sub_8262FA18(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f0,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826672D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r31,60
	ctx.r30.s64 = ctx.r31.s64 + 60;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823032b8
	ctx.lr = 0x826672E0;
	sub_823032B8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826672f0
	if (ctx.cr6.eq) goto loc_826672F0;
	// bl 0x82581e38
	ctx.lr = 0x826672F0;
	sub_82581E38(ctx, base);
loc_826672F0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266730c
	if (ctx.cr6.eq) goto loc_8266730C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82667324
	if (!ctx.cr6.eq) goto loc_82667324;
loc_8266730C:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r3,r10,1392
	ctx.r3.s64 = ctx.r10.s64 + 1392;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821e0968
	ctx.lr = 0x82667324;
	sub_821E0968(ctx, base);
loc_82667324:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82667344
	if (ctx.cr6.eq) goto loc_82667344;
	// bl 0x821601b8
	ctx.lr = 0x82667334;
	sub_821601B8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_8266733C:
	// ori r11,r10,2
	ctx.r11.u64 = ctx.r10.u64 | 2;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
loc_82667344:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82667350"))) PPC_WEAK_FUNC(sub_82667350);
PPC_FUNC_IMPL(__imp__sub_82667350) {
	PPC_FUNC_PROLOGUE();
	// li r3,800
	ctx.r3.s64 = 800;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82667358"))) PPC_WEAK_FUNC(sub_82667358);
PPC_FUNC_IMPL(__imp__sub_82667358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82667360;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x825e6f70
	ctx.lr = 0x82667378;
	sub_825E6F70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826673c0
	if (ctx.cr6.eq) goto loc_826673C0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x828f6a90
	ctx.lr = 0x82667394;
	sub_828F6A90(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,19795
	ctx.r9.s64 = 1297285120;
	// addi r11,r11,1436
	ctx.r11.s64 = ctx.r11.s64 + 1436;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r9,20048
	ctx.r9.u64 = ctx.r9.u64 | 20048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_826673C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826673D0"))) PPC_WEAK_FUNC(sub_826673D0);
PPC_FUNC_IMPL(__imp__sub_826673D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,1436
	ctx.r11.s64 = ctx.r11.s64 + 1436;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82667408
	if (ctx.cr6.eq) goto loc_82667408;
	// bl 0x82581e38
	ctx.lr = 0x82667408;
	sub_82581E38(ctx, base);
loc_82667408:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f6b38
	ctx.lr = 0x82667410;
	sub_828F6B38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82667428
	if (ctx.cr6.eq) goto loc_82667428;
	// bl 0x825e6f78
	ctx.lr = 0x82667424;
	sub_825E6F78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82667428:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82667440"))) PPC_WEAK_FUNC(sub_82667440);
PPC_FUNC_IMPL(__imp__sub_82667440) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
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
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82581e38
	sub_82581E38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82667488"))) PPC_WEAK_FUNC(sub_82667488);
PPC_FUNC_IMPL(__imp__sub_82667488) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82667490"))) PPC_WEAK_FUNC(sub_82667490);
PPC_FUNC_IMPL(__imp__sub_82667490) {
	PPC_FUNC_PROLOGUE();
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
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826675d4
	if (!ctx.cr6.eq) goto loc_826675D4;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826675cc
	if (ctx.cr6.eq) goto loc_826675CC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826675cc
	if (ctx.cr6.eq) goto loc_826675CC;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,-17756(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17756);
	// lwz r4,160(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826674F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826675b8
	if (ctx.cr6.eq) goto loc_826675B8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826675b8
	if (ctx.cr6.eq) goto loc_826675B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82667528;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82667548;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82667564;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r31,60
	ctx.r30.s64 = ctx.r31.s64 + 60;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823032b8
	ctx.lr = 0x82667574;
	sub_823032B8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82667584
	if (ctx.cr6.eq) goto loc_82667584;
	// bl 0x82581e38
	ctx.lr = 0x82667584;
	sub_82581E38(ctx, base);
loc_82667584:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826675a0
	if (ctx.cr6.eq) goto loc_826675A0;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826675b8
	if (!ctx.cr6.eq) goto loc_826675B8;
loc_826675A0:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r3,r10,1492
	ctx.r3.s64 = ctx.r10.s64 + 1492;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821e0968
	ctx.lr = 0x826675B8;
	sub_821E0968(ctx, base);
loc_826675B8:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826675d4
	if (ctx.cr6.eq) goto loc_826675D4;
	// bl 0x821601b8
	ctx.lr = 0x826675C8;
	sub_821601B8(ctx, base);
	// b 0x826675d4
	goto loc_826675D4;
loc_826675CC:
	// ori r11,r10,2
	ctx.r11.u64 = ctx.r10.u64 | 2;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
loc_826675D4:
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

__attribute__((alias("__imp__sub_826675F0"))) PPC_WEAK_FUNC(sub_826675F0);
PPC_FUNC_IMPL(__imp__sub_826675F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x826675F8;
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
	ctx.lr = 0x82667610;
	sub_825E6F70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82667650
	if (ctx.cr6.eq) goto loc_82667650;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x828f6a90
	ctx.lr = 0x8266762C;
	sub_828F6A90(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,19777
	ctx.r10.s64 = 1296105472;
	// addi r11,r11,1532
	ctx.r11.s64 = ctx.r11.s64 + 1532;
	// ori r10,r10,19529
	ctx.r10.u64 = ctx.r10.u64 | 19529;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82667650:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82667660"))) PPC_WEAK_FUNC(sub_82667660);
PPC_FUNC_IMPL(__imp__sub_82667660) {
	PPC_FUNC_PROLOGUE();
	// li r3,382
	ctx.r3.s64 = 382;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82667668"))) PPC_WEAK_FUNC(sub_82667668);
PPC_FUNC_IMPL(__imp__sub_82667668) {
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
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8266770c
	if (!ctx.cr6.eq) goto loc_8266770C;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lis r8,21314
	ctx.r8.s64 = 1396834304;
	// ori r8,r8,19529
	ctx.r8.u64 = ctx.r8.u64 | 19529;
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x826676bc
	if (ctx.cr6.eq) goto loc_826676BC;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// sth r10,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_826676BC:
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826676e0
	if (ctx.cr6.eq) goto loc_826676E0;
	// bl 0x82674ae8
	ctx.lr = 0x826676D0;
	sub_82674AE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_826676E0:
	// lfs f12,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82674b30
	ctx.lr = 0x8266770C;
	sub_82674B30(ctx, base);
loc_8266770C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82667720"))) PPC_WEAK_FUNC(sub_82667720);
PPC_FUNC_IMPL(__imp__sub_82667720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828f6b38
	ctx.lr = 0x82667740;
	sub_828F6B38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82667758
	if (ctx.cr6.eq) goto loc_82667758;
	// bl 0x825e6f78
	ctx.lr = 0x82667754;
	sub_825E6F78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82667758:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82667770"))) PPC_WEAK_FUNC(sub_82667770);
PPC_FUNC_IMPL(__imp__sub_82667770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82667778;
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
	ctx.lr = 0x82667790;
	sub_825E6F70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826677d0
	if (ctx.cr6.eq) goto loc_826677D0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x828f6a90
	ctx.lr = 0x826677AC;
	sub_828F6A90(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,19780
	ctx.r10.s64 = 1296302080;
	// addi r11,r11,1592
	ctx.r11.s64 = ctx.r11.s64 + 1592;
	// ori r10,r10,19529
	ctx.r10.u64 = ctx.r10.u64 | 19529;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_826677D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826677E0"))) PPC_WEAK_FUNC(sub_826677E0);
PPC_FUNC_IMPL(__imp__sub_826677E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,381
	ctx.r3.s64 = 381;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826677E8"))) PPC_WEAK_FUNC(sub_826677E8);
PPC_FUNC_IMPL(__imp__sub_826677E8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x8266780c
	if (!ctx.cr6.lt) goto loc_8266780C;
loc_826677FC:
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// sth r10,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
	// blr 
	return;
loc_8266780C:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lis r9,21314
	ctx.r9.s64 = 1396834304;
	// ori r9,r9,19529
	ctx.r9.u64 = ctx.r9.u64 | 19529;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x826677fc
	if (!ctx.cr6.eq) goto loc_826677FC;
	// b 0x82674948
	sub_82674948(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82667830"))) PPC_WEAK_FUNC(sub_82667830);
PPC_FUNC_IMPL(__imp__sub_82667830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,1592
	ctx.r11.s64 = ctx.r11.s64 + 1592;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828f6b38
	ctx.lr = 0x8266785C;
	sub_828F6B38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82667874
	if (ctx.cr6.eq) goto loc_82667874;
	// bl 0x825e6f78
	ctx.lr = 0x82667870;
	sub_825E6F78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82667874:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82667890"))) PPC_WEAK_FUNC(sub_82667890);
PPC_FUNC_IMPL(__imp__sub_82667890) {
	PPC_FUNC_PROLOGUE();
	// li r3,380
	ctx.r3.s64 = 380;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82667898"))) PPC_WEAK_FUNC(sub_82667898);
PPC_FUNC_IMPL(__imp__sub_82667898) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x826678d8
	if (ctx.cr6.gt) goto loc_826678D8;
loc_826678C8:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// b 0x8266791c
	goto loc_8266791C;
loc_826678D8:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r9,21314
	ctx.r9.s64 = 1396834304;
	// ori r9,r9,19529
	ctx.r9.u64 = ctx.r9.u64 | 19529;
	// lwz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x826678c8
	if (!ctx.cr6.eq) goto loc_826678C8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f3,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82674a00
	ctx.lr = 0x8266790C;
	sub_82674A00(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82674250
	ctx.lr = 0x8266791C;
	sub_82674250(ctx, base);
loc_8266791C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82667938"))) PPC_WEAK_FUNC(sub_82667938);
PPC_FUNC_IMPL(__imp__sub_82667938) {
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
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826679e8
	if (!ctx.cr6.eq) goto loc_826679E8;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r10,21314
	ctx.r10.s64 = 1396834304;
	// ori r10,r10,19529
	ctx.r10.u64 = ctx.r10.u64 | 19529;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826679e8
	if (!ctx.cr6.eq) goto loc_826679E8;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82674208
	ctx.lr = 0x82667990;
	sub_82674208(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826679e8
	if (ctx.cr6.eq) goto loc_826679E8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x826679b4
	if (ctx.cr6.lt) goto loc_826679B4;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_826679B4:
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x826679c4
	if (ctx.cr6.lt) goto loc_826679C4;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_826679C4:
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x826679d4
	if (ctx.cr6.lt) goto loc_826679D4;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_826679D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f3,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82674160
	ctx.lr = 0x826679E8;
	sub_82674160(ctx, base);
loc_826679E8:
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

__attribute__((alias("__imp__sub_82667A00"))) PPC_WEAK_FUNC(sub_82667A00);
PPC_FUNC_IMPL(__imp__sub_82667A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r11,r4,15
	ctx.r11.s64 = ctx.r4.s64 + 15;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82667A18"))) PPC_WEAK_FUNC(sub_82667A18);
PPC_FUNC_IMPL(__imp__sub_82667A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5424(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5424);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82667A30"))) PPC_WEAK_FUNC(sub_82667A30);
PPC_FUNC_IMPL(__imp__sub_82667A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,1652
	ctx.r11.s64 = ctx.r11.s64 + 1652;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828f6b38
	ctx.lr = 0x82667A5C;
	sub_828F6B38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82667a74
	if (ctx.cr6.eq) goto loc_82667A74;
	// bl 0x825e6f78
	ctx.lr = 0x82667A70;
	sub_825E6F78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82667A74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82667A90"))) PPC_WEAK_FUNC(sub_82667A90);
PPC_FUNC_IMPL(__imp__sub_82667A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82667A98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,72
	ctx.r3.s64 = 72;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x825e6f70
	ctx.lr = 0x82667AB0;
	sub_825E6F70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82667b04
	if (ctx.cr6.eq) goto loc_82667B04;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x828f6a90
	ctx.lr = 0x82667ACC;
	sub_828F6A90(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,19792
	ctx.r10.s64 = 1297088512;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r10,19529
	ctx.r10.u64 = ctx.r10.u64 | 19529;
	// lfs f0,5424(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5424);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,1652
	ctx.r11.s64 = ctx.r11.s64 + 1652;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82667B04:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82667B10"))) PPC_WEAK_FUNC(sub_82667B10);
PPC_FUNC_IMPL(__imp__sub_82667B10) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82667b3c
	if (ctx.cr6.eq) goto loc_82667B3C;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82667b44
	if (ctx.cr6.eq) goto loc_82667B44;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stb r9,168(r11)
	PPC_STORE_U8(ctx.r11.u32 + 168, ctx.r9.u8);
	// b 0x82667b40
	goto loc_82667B40;
loc_82667B3C:
	// stb r3,168(r11)
	PPC_STORE_U8(ctx.r11.u32 + 168, ctx.r3.u8);
loc_82667B40:
	// stw r4,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r4.u32);
loc_82667B44:
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stb r9,168(r11)
	PPC_STORE_U8(ctx.r11.u32 + 168, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82667B58"))) PPC_WEAK_FUNC(sub_82667B58);
PPC_FUNC_IMPL(__imp__sub_82667B58) {
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
	// bl 0x825e7650
	ctx.lr = 0x82667B74;
	sub_825E7650(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r31,192
	ctx.r10.s64 = ctx.r31.s64 + 192;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82667B84:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82667b84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82667B84;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82667BB0"))) PPC_WEAK_FUNC(sub_82667BB0);
PPC_FUNC_IMPL(__imp__sub_82667BB0) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,353(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 353);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r4,353(r3)
	PPC_STORE_U8(ctx.r3.u32 + 353, ctx.r4.u8);
	// stb r11,352(r3)
	PPC_STORE_U8(ctx.r3.u32 + 352, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82667BD0"))) PPC_WEAK_FUNC(sub_82667BD0);
PPC_FUNC_IMPL(__imp__sub_82667BD0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,353(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 353);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r3,356
	ctx.r11.s64 = ctx.r3.s64 + 356;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stb r10,352(r3)
	PPC_STORE_U8(ctx.r3.u32 + 352, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82667C10"))) PPC_WEAK_FUNC(sub_82667C10);
PPC_FUNC_IMPL(__imp__sub_82667C10) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,373(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 373);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r4,373(r3)
	PPC_STORE_U8(ctx.r3.u32 + 373, ctx.r4.u8);
	// stb r11,372(r3)
	PPC_STORE_U8(ctx.r3.u32 + 372, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82667C30"))) PPC_WEAK_FUNC(sub_82667C30);
PPC_FUNC_IMPL(__imp__sub_82667C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,373(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 373);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f1,376(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 376, temp.u32);
	// stfs f2,380(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 380, temp.u32);
	// stb r11,372(r3)
	PPC_STORE_U8(ctx.r3.u32 + 372, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82667C50"))) PPC_WEAK_FUNC(sub_82667C50);
PPC_FUNC_IMPL(__imp__sub_82667C50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,373(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 373);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f1,384(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 384, temp.u32);
	// stb r11,372(r3)
	PPC_STORE_U8(ctx.r3.u32 + 372, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82667C70"))) PPC_WEAK_FUNC(sub_82667C70);
PPC_FUNC_IMPL(__imp__sub_82667C70) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r5,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r5.u8);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82667CB0"))) PPC_WEAK_FUNC(sub_82667CB0);
PPC_FUNC_IMPL(__imp__sub_82667CB0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r8,12(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82667D08"))) PPC_WEAK_FUNC(sub_82667D08);
PPC_FUNC_IMPL(__imp__sub_82667D08) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,1
	ctx.r9.s64 = 1;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82667D48"))) PPC_WEAK_FUNC(sub_82667D48);
PPC_FUNC_IMPL(__imp__sub_82667D48) {
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
	// lwz r5,160(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 160);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r4,388(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 388);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8262f6a0
	ctx.lr = 0x82667D74;
	sub_8262F6A0(ctx, base);
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

__attribute__((alias("__imp__sub_82667D90"))) PPC_WEAK_FUNC(sub_82667D90);
PPC_FUNC_IMPL(__imp__sub_82667D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82667D98;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826680fc
	if (ctx.cr6.eq) goto loc_826680FC;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lwz r11,-14512(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14512);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// addi r29,r9,-14528
	ctx.r29.s64 = ctx.r9.s64 + -14528;
	// bne cr6,0x82667e04
	if (!ctx.cr6.eq) goto loc_82667E04;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-14512(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14512, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f0,5424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5424);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
loc_82667E04:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82667E30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8221f3c8
	ctx.lr = 0x82667E3C;
	sub_8221F3C8(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82667e4c
	if (ctx.cr6.eq) goto loc_82667E4C;
	// bl 0x821601b8
	ctx.lr = 0x82667E4C;
	sub_821601B8(ctx, base);
loc_82667E4C:
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826680ec
	if (ctx.cr6.eq) goto loc_826680EC;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826680ec
	if (ctx.cr6.eq) goto loc_826680EC;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82667E7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826680ec
	if (ctx.cr6.eq) goto loc_826680EC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82667E9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82667f8c
	if (ctx.cr6.eq) goto loc_82667F8C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82667EBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d25d8
	ctx.lr = 0x82667F04;
	sub_825D25D8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218c228
	ctx.lr = 0x82667F10;
	sub_8218C228(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d2aa8
	ctx.lr = 0x82667F30;
	sub_825D2AA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fmr f2,f13
	ctx.f2.f64 = ctx.f13.f64;
	// fmr f1,f12
	ctx.f1.f64 = ctx.f12.f64;
	// fmr f3,f0
	ctx.f3.f64 = ctx.f0.f64;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fadds f31,f11,f12
	ctx.f31.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fadds f30,f12,f13
	ctx.f30.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fadds f29,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x825e7680
	ctx.lr = 0x82667F78;
	sub_825E7680(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825e7730
	ctx.lr = 0x82667F8C;
	sub_825E7730(ctx, base);
loc_82667F8C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82667FA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r10,r31,132
	ctx.r10.s64 = ctx.r31.s64 + 132;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,-9120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9120);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stw r29,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r29.u32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82667FD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// stw r29,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82667FF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f1,140(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// addi r4,r11,7020
	ctx.r4.s64 = ctx.r11.s64 + 7020;
	// stw r29,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r29.u32);
	// bl 0x821620e8
	ctx.lr = 0x82668008;
	sub_821620E8(ctx, base);
	// lis r30,-32045
	ctx.r30.s64 = -2100101120;
	// lwz r4,26760(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26760);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82668024
	if (!ctx.cr6.eq) goto loc_82668024;
	// bl 0x8216d098
	ctx.lr = 0x8266801C;
	sub_8216D098(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,26760(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26760, ctx.r4.u32);
loc_82668024:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82582148
	ctx.lr = 0x82668030;
	sub_82582148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8216a158
	ctx.lr = 0x8266803C;
	sub_8216A158(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266804c
	if (ctx.cr6.eq) goto loc_8266804C;
	// bl 0x82581e38
	ctx.lr = 0x8266804C;
	sub_82581E38(ctx, base);
loc_8266804C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825fc7b8
	ctx.lr = 0x82668054;
	sub_825FC7B8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826680cc
	if (ctx.cr6.eq) goto loc_826680CC;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826680cc
	if (ctx.cr6.eq) goto loc_826680CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82668080;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266809C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// std r11,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r11.u64);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lfd f0,272(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 272);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// b 0x826680d4
	goto loc_826680D4;
loc_826680CC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-27268(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27268);
	ctx.f0.f64 = double(temp.f32);
loc_826680D4:
	// stfs f0,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stw r29,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r29.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826680ec
	if (ctx.cr6.eq) goto loc_826680EC;
	// bl 0x82581e38
	ctx.lr = 0x826680EC;
	sub_82581E38(ctx, base);
loc_826680EC:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826680fc
	if (ctx.cr6.eq) goto loc_826680FC;
	// bl 0x821601b8
	ctx.lr = 0x826680FC;
	sub_821601B8(ctx, base);
loc_826680FC:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
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

__attribute__((alias("__imp__sub_82668110"))) PPC_WEAK_FUNC(sub_82668110);
PPC_FUNC_IMPL(__imp__sub_82668110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82668118;
	__savegprlr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82668134;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,-22832
	ctx.r4.s64 = ctx.r11.s64 + -22832;
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// stb r29,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r29.u8);
	// bl 0x82161e08
	ctx.lr = 0x82668160;
	sub_82161E08(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825f7420
	ctx.lr = 0x8266816C;
	sub_825F7420(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82668184
	if (ctx.cr6.lt) goto loc_82668184;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82186190
	ctx.lr = 0x82668184;
	sub_82186190(ctx, base);
loc_82668184:
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stb r29,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r29.u8);
	// beq cr6,0x82668348
	if (ctx.cr6.eq) goto loc_82668348;
	// lbz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 352);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82668238
	if (ctx.cr6.eq) goto loc_82668238;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-18220
	ctx.r4.s64 = ctx.r11.s64 + -18220;
	// bl 0x821620e8
	ctx.lr = 0x826681B4;
	sub_821620E8(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825f6ea8
	ctx.lr = 0x826681C4;
	sub_825F6EA8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825fc7b8
	ctx.lr = 0x826681CC;
	sub_825FC7B8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82668224
	if (ctx.cr6.eq) goto loc_82668224;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82668224
	if (ctx.cr6.eq) goto loc_82668224;
	// lbz r10,353(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 353);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82668224
	if (ctx.cr6.eq) goto loc_82668224;
	// addi r10,r31,356
	ctx.r10.s64 = ctx.r31.s64 + 356;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
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
loc_82668224:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stb r29,352(r31)
	PPC_STORE_U8(ctx.r31.u32 + 352, ctx.r29.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82668238
	if (ctx.cr6.eq) goto loc_82668238;
	// bl 0x821601b8
	ctx.lr = 0x82668238;
	sub_821601B8(ctx, base);
loc_82668238:
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// addi r31,r31,272
	ctx.r31.s64 = ctx.r31.s64 + 272;
	// addi r30,r11,-15508
	ctx.r30.s64 = ctx.r11.s64 + -15508;
	// li r28,2
	ctx.r28.s64 = 2;
loc_82668248:
	// lbz r11,-16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82668334
	if (ctx.cr6.eq) goto loc_82668334;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r27,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stb r29,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r29.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8266826C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8266826c
	if (!ctx.cr6.eq) goto loc_8266826C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82668290;
	sub_82161E08(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825f6f70
	ctx.lr = 0x826682A0;
	sub_825F6F70(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x826682b4
	if (ctx.cr6.lt) goto loc_826682B4;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82186190
	ctx.lr = 0x826682B4;
	sub_82186190(ctx, base);
loc_826682B4:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r29,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r29.u8);
	// beq cr6,0x82668320
	if (ctx.cr6.eq) goto loc_82668320;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82668320
	if (ctx.cr6.eq) goto loc_82668320;
	// lbz r11,-15(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -15);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82668320
	if (ctx.cr6.eq) goto loc_82668320;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r31,16
	ctx.r9.s64 = ctx.r31.s64 + 16;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82668320:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r29,-16(r31)
	PPC_STORE_U8(ctx.r31.u32 + -16, ctx.r29.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82668334
	if (ctx.cr6.eq) goto loc_82668334;
	// bl 0x821601b8
	ctx.lr = 0x82668334;
	sub_821601B8(ctx, base);
loc_82668334:
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82668248
	if (!ctx.cr6.eq) goto loc_82668248;
loc_82668348:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82668350"))) PPC_WEAK_FUNC(sub_82668350);
PPC_FUNC_IMPL(__imp__sub_82668350) {
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
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266837C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 372);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826683f4
	if (ctx.cr6.eq) goto loc_826683F4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,2152
	ctx.r4.s64 = ctx.r11.s64 + 2152;
	// bl 0x821620e8
	ctx.lr = 0x8266839C;
	sub_821620E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825f7420
	ctx.lr = 0x826683A8;
	sub_825F7420(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x826683c0
	if (ctx.cr6.lt) goto loc_826683C0;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x826683C0;
	sub_82186190(ctx, base);
loc_826683C0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826683ec
	if (ctx.cr6.eq) goto loc_826683EC;
	// lbz r11,373(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 373);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826683ec
	if (ctx.cr6.eq) goto loc_826683EC;
	// lfs f0,380(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,376(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// stfs f0,24(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// lfs f0,384(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
loc_826683EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 372, ctx.r11.u8);
loc_826683F4:
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

__attribute__((alias("__imp__sub_82668410"))) PPC_WEAK_FUNC(sub_82668410);
PPC_FUNC_IMPL(__imp__sub_82668410) {
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
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82668440
	if (ctx.cr6.eq) goto loc_82668440;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82668448
	if (ctx.cr6.eq) goto loc_82668448;
	// stb r10,168(r3)
	PPC_STORE_U8(ctx.r3.u32 + 168, ctx.r10.u8);
loc_82668440:
	// stw r4,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r4.u32);
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_82668448:
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82668458
	if (!ctx.cr6.eq) goto loc_82668458;
	// stb r10,168(r3)
	PPC_STORE_U8(ctx.r3.u32 + 168, ctx.r10.u8);
loc_82668458:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82668470
	if (ctx.cr6.eq) goto loc_82668470;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82668470
	if (ctx.cr6.eq) goto loc_82668470;
	// bl 0x82667d90
	ctx.lr = 0x82668470;
	sub_82667D90(ctx, base);
loc_82668470:
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

__attribute__((alias("__imp__sub_82668488"))) PPC_WEAK_FUNC(sub_82668488);
PPC_FUNC_IMPL(__imp__sub_82668488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82668490;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825e6cf8
	ctx.lr = 0x826684A4;
	sub_825E6CF8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,1796
	ctx.r11.s64 = ctx.r11.s64 + 1796;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stb r10,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r10.u8);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// bl 0x82186158
	ctx.lr = 0x826684DC;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826684f0
	if (ctx.cr6.eq) goto loc_826684F0;
	// bl 0x8262f920
	ctx.lr = 0x826684E8;
	sub_8262F920(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x826684f4
	goto loc_826684F4;
loc_826684F0:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_826684F4:
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r10,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r10.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// li r5,37
	ctx.r5.s64 = 37;
	// stb r30,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r30.u8);
	// addi r4,r11,1752
	ctx.r4.s64 = ctx.r11.s64 + 1752;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// bl 0x82161e08
	ctx.lr = 0x8266851C;
	sub_82161E08(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371620
	ctx.lr = 0x82668528;
	sub_82371620(ctx, base);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8266853c
	if (ctx.cr6.eq) goto loc_8266853C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82659610
	ctx.lr = 0x8266853C;
	sub_82659610(ctx, base);
loc_8266853C:
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// stw r29,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82668550
	if (ctx.cr6.eq) goto loc_82668550;
	// bl 0x82581e38
	ctx.lr = 0x82668550;
	sub_82581E38(ctx, base);
loc_82668550:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82668560
	if (ctx.cr6.eq) goto loc_82668560;
	// bl 0x82581e38
	ctx.lr = 0x82668560;
	sub_82581E38(ctx, base);
loc_82668560:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82668574
	if (ctx.cr6.lt) goto loc_82668574;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82186190
	ctx.lr = 0x82668574;
	sub_82186190(ctx, base);
loc_82668574:
	// lwz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stb r30,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r30.u8);
	// beq cr6,0x826686a0
	if (ctx.cr6.eq) goto loc_826686A0;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826686a0
	if (ctx.cr6.eq) goto loc_826686A0;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r5,r11,1740
	ctx.r5.s64 = ctx.r11.s64 + 1740;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826685B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826685cc
	if (ctx.cr6.eq) goto loc_826685CC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82659610
	ctx.lr = 0x826685CC;
	sub_82659610(ctx, base);
loc_826685CC:
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// stw r29,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826685e0
	if (ctx.cr6.eq) goto loc_826685E0;
	// bl 0x82581e38
	ctx.lr = 0x826685E0;
	sub_82581E38(ctx, base);
loc_826685E0:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826685f0
	if (ctx.cr6.eq) goto loc_826685F0;
	// bl 0x82581e38
	ctx.lr = 0x826685F0;
	sub_82581E38(ctx, base);
loc_826685F0:
	// lwz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r5,r11,1724
	ctx.r5.s64 = ctx.r11.s64 + 1724;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82668610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82668624
	if (ctx.cr6.eq) goto loc_82668624;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82659610
	ctx.lr = 0x82668624;
	sub_82659610(ctx, base);
loc_82668624:
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// stw r29,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82668638
	if (ctx.cr6.eq) goto loc_82668638;
	// bl 0x82581e38
	ctx.lr = 0x82668638;
	sub_82581E38(ctx, base);
loc_82668638:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82668648
	if (ctx.cr6.eq) goto loc_82668648;
	// bl 0x82581e38
	ctx.lr = 0x82668648;
	sub_82581E38(ctx, base);
loc_82668648:
	// lwz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r5,r11,1708
	ctx.r5.s64 = ctx.r11.s64 + 1708;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82668668;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8266867c
	if (ctx.cr6.eq) goto loc_8266867C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82659610
	ctx.lr = 0x8266867C;
	sub_82659610(ctx, base);
loc_8266867C:
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// stw r29,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82668690
	if (ctx.cr6.eq) goto loc_82668690;
	// bl 0x82581e38
	ctx.lr = 0x82668690;
	sub_82581E38(ctx, base);
loc_82668690:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826686a0
	if (ctx.cr6.eq) goto loc_826686A0;
	// bl 0x82581e38
	ctx.lr = 0x826686A0;
	sub_82581E38(ctx, base);
loc_826686A0:
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x8262fd50
	ctx.lr = 0x826686A8;
	sub_8262FD50(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lfs f13,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,260
	ctx.r11.s64 = ctx.r31.s64 + 260;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f12,5424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5424);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_826686F0:
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// stb r30,-4(r11)
	PPC_STORE_U8(ctx.r11.u32 + -4, ctx.r30.u8);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stb r30,-3(r11)
	PPC_STORE_U8(ctx.r11.u32 + -3, ctx.r30.u8);
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// addi r6,r11,28
	ctx.r6.s64 = ctx.r11.s64 + 28;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// stw r4,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r4.u32);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// stvx v0,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blt cr6,0x826686f0
	if (ctx.cr6.lt) goto loc_826686F0;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r10,r31,356
	ctx.r10.s64 = ctx.r31.s64 + 356;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stb r30,352(r31)
	PPC_STORE_U8(ctx.r31.u32 + 352, ctx.r30.u8);
	// stb r30,353(r31)
	PPC_STORE_U8(ctx.r31.u32 + 353, ctx.r30.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stb r30,372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 372, ctx.r30.u8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stb r30,373(r31)
	PPC_STORE_U8(ctx.r31.u32 + 373, ctx.r30.u8);
	// bl 0x82532378
	ctx.lr = 0x82668790;
	sub_82532378(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826687A0"))) PPC_WEAK_FUNC(sub_826687A0);
PPC_FUNC_IMPL(__imp__sub_826687A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,1796
	ctx.r11.s64 = ctx.r11.s64 + 1796;
	// lwz r31,388(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 388);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82668800
	if (ctx.cr6.eq) goto loc_82668800;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826687e0
	if (ctx.cr6.eq) goto loc_826687E0;
	// bl 0x821601b8
	ctx.lr = 0x826687E0;
	sub_821601B8(ctx, base);
loc_826687E0:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826687f0
	if (ctx.cr6.eq) goto loc_826687F0;
	// bl 0x821601b8
	ctx.lr = 0x826687F0;
	sub_821601B8(ctx, base);
loc_826687F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825f2968
	ctx.lr = 0x826687F8;
	sub_825F2968(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82186190
	ctx.lr = 0x82668800;
	sub_82186190(ctx, base);
loc_82668800:
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82668810
	if (ctx.cr6.eq) goto loc_82668810;
	// bl 0x82581e38
	ctx.lr = 0x82668810;
	sub_82581E38(ctx, base);
loc_82668810:
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82668820
	if (ctx.cr6.eq) goto loc_82668820;
	// bl 0x82581e38
	ctx.lr = 0x82668820;
	sub_82581E38(ctx, base);
loc_82668820:
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82668830
	if (ctx.cr6.eq) goto loc_82668830;
	// bl 0x82581e38
	ctx.lr = 0x82668830;
	sub_82581E38(ctx, base);
loc_82668830:
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82668840
	if (ctx.cr6.eq) goto loc_82668840;
	// bl 0x82581e38
	ctx.lr = 0x82668840;
	sub_82581E38(ctx, base);
loc_82668840:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e6c30
	ctx.lr = 0x82668848;
	sub_825E6C30(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82668860"))) PPC_WEAK_FUNC(sub_82668860);
PPC_FUNC_IMPL(__imp__sub_82668860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826687a0
	ctx.lr = 0x82668880;
	sub_826687A0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82668898
	if (ctx.cr6.eq) goto loc_82668898;
	// bl 0x825e6f78
	ctx.lr = 0x82668894;
	sub_825E6F78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82668898:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826688B0"))) PPC_WEAK_FUNC(sub_826688B0);
PPC_FUNC_IMPL(__imp__sub_826688B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x826688B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
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
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x825ba970
	ctx.lr = 0x826688DC;
	sub_825BA970(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r28,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r28.u32);
	// addi r11,r11,1820
	ctx.r11.s64 = ctx.r11.s64 + 1820;
	// stb r27,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r27.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r26,61(r31)
	PPC_STORE_U8(ctx.r31.u32 + 61, ctx.r26.u8);
	// stw r25,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r25.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x825ba8f8
	ctx.lr = 0x82668908;
	sub_825BA8F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82668918"))) PPC_WEAK_FUNC(sub_82668918);
PPC_FUNC_IMPL(__imp__sub_82668918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,1800
	ctx.r3.s64 = ctx.r11.s64 + 1800;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82668928"))) PPC_WEAK_FUNC(sub_82668928);
PPC_FUNC_IMPL(__imp__sub_82668928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82668930;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x8263d700
	ctx.lr = 0x82668944;
	sub_8263D700(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266895C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82668980
	if (ctx.cr6.eq) goto loc_82668980;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82668984
	if (ctx.cr6.lt) goto loc_82668984;
loc_82668980:
	// twi 31,r0,22
loc_82668984:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8262b468
	ctx.lr = 0x82668994;
	sub_8262B468(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82668a08
	if (ctx.cr6.eq) goto loc_82668A08;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82668a08
	if (ctx.cr6.eq) goto loc_82668A08;
	// lbz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826689d0
	if (ctx.cr6.eq) goto loc_826689D0;
	// lbz r10,61(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 61);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826689d0
	if (ctx.cr6.eq) goto loc_826689D0;
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x826689f0
	goto loc_826689F0;
loc_826689D0:
	// lbz r10,61(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 61);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826689e4
	if (ctx.cr6.eq) goto loc_826689E4;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x826689f0
	goto loc_826689F0;
loc_826689E4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82668a08
	if (ctx.cr6.eq) goto loc_82668A08;
	// li r5,1
	ctx.r5.s64 = 1;
loc_826689F0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,64(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82668A08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82668A08:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82668a18
	if (ctx.cr6.eq) goto loc_82668A18;
	// bl 0x821601b8
	ctx.lr = 0x82668A18;
	sub_821601B8(ctx, base);
loc_82668A18:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82668A20"))) PPC_WEAK_FUNC(sub_82668A20);
PPC_FUNC_IMPL(__imp__sub_82668A20) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r10,r11,11,25,28
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 11) & 0x78) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF87);
	// rlwimi r10,r11,11,20,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 11) & 0xF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF0FF);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82668A38"))) PPC_WEAK_FUNC(sub_82668A38);
PPC_FUNC_IMPL(__imp__sub_82668A38) {
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
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r11,r11,0,28,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// rlwinm r11,r11,0,24,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF0FF;
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// beq cr6,0x82668a9c
	if (ctx.cr6.eq) goto loc_82668A9C;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x828f85d8
	ctx.lr = 0x82668A70;
	sub_828F85D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82668a90
	if (ctx.cr6.eq) goto loc_82668A90;
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
loc_82668A90:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82668A9C:
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

__attribute__((alias("__imp__sub_82668AB8"))) PPC_WEAK_FUNC(sub_82668AB8);
PPC_FUNC_IMPL(__imp__sub_82668AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82668b28
	if (ctx.cr6.eq) goto loc_82668B28;
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82668b20
	if (!ctx.cr6.eq) goto loc_82668B20;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82668b28
	if (ctx.cr6.eq) goto loc_82668B28;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x828f8128
	ctx.lr = 0x82668B04;
	sub_828F8128(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82668b28
	if (ctx.cr6.eq) goto loc_82668B28;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x82668b2c
	goto loc_82668B2C;
loc_82668B20:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82668b2c
	goto loc_82668B2C;
loc_82668B28:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82668B2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82668B48"))) PPC_WEAK_FUNC(sub_82668B48);
PPC_FUNC_IMPL(__imp__sub_82668B48) {
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
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82668b84
	if (ctx.cr6.eq) goto loc_82668B84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8262fd98
	ctx.lr = 0x82668B74;
	sub_8262FD98(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x8262fd98
	ctx.lr = 0x82668B84;
	sub_8262FD98(ctx, base);
loc_82668B84:
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

__attribute__((alias("__imp__sub_82668B98"))) PPC_WEAK_FUNC(sub_82668B98);
PPC_FUNC_IMPL(__imp__sub_82668B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r30,r11,0,30,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82668bdc
	if (ctx.cr6.eq) goto loc_82668BDC;
	// andi. r10,r11,2304
	ctx.r10.u64 = ctx.r11.u64 & 2304;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82668bdc
	if (ctx.cr6.eq) goto loc_82668BDC;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x82668c38
	goto loc_82668C38;
loc_82668BDC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82668c18
	if (!ctx.cr6.eq) goto loc_82668C18;
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82668c18
	if (ctx.cr6.eq) goto loc_82668C18;
	// rlwinm r11,r11,0,21,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82668c18
	if (!ctx.cr6.eq) goto loc_82668C18;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x828f78d8
	ctx.lr = 0x82668C0C;
	sub_828F78D8(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// ori r11,r11,80
	ctx.r11.u64 = ctx.r11.u64 | 80;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82668C18:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82668c34
	if (ctx.cr6.eq) goto loc_82668C34;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82668C34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82668C34:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82668C38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82668C50"))) PPC_WEAK_FUNC(sub_82668C50);
PPC_FUNC_IMPL(__imp__sub_82668C50) {
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
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82668c94
	if (ctx.cr6.eq) goto loc_82668C94;
	// andi. r11,r11,1280
	ctx.r11.u64 = ctx.r11.u64 & 1280;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82668c94
	if (!ctx.cr6.eq) goto loc_82668C94;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x828f7a10
	ctx.lr = 0x82668C88;
	sub_828F7A10(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82668C94:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82668CA8"))) PPC_WEAK_FUNC(sub_82668CA8);
PPC_FUNC_IMPL(__imp__sub_82668CA8) {
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
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82668ce0
	if (ctx.cr6.eq) goto loc_82668CE0;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x828f8420
	ctx.lr = 0x82668CD4;
	sub_828F8420(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r11,r11,0,26,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82668CE0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82668CF8"))) PPC_WEAK_FUNC(sub_82668CF8);
PPC_FUNC_IMPL(__imp__sub_82668CF8) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,-3408(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3408);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f29,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f29.f64 = double(temp.f32);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f30,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f30.f64 = double(temp.f32);
loc_82668D40:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x82668d50
	if (!ctx.cr6.gt) goto loc_82668D50;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// b 0x82668d54
	goto loc_82668D54;
loc_82668D50:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82668D54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82668b98
	ctx.lr = 0x82668D5C;
	sub_82668B98(ctx, base);
	// fsubs f31,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// ble cr6,0x82668d90
	if (!ctx.cr6.gt) goto loc_82668D90;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82668d40
	if (ctx.cr6.eq) goto loc_82668D40;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x828f8420
	ctx.lr = 0x82668D80;
	sub_828F8420(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r11,r11,0,26,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x82668d40
	goto loc_82668D40;
loc_82668D90:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
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

__attribute__((alias("__imp__sub_82668DC0"))) PPC_WEAK_FUNC(sub_82668DC0);
PPC_FUNC_IMPL(__imp__sub_82668DC0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-15232
	ctx.r4.s64 = ctx.r11.s64 + -15232;
	// bl 0x826de850
	ctx.lr = 0x82668DE4;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82668df8
	if (!ctx.cr6.eq) goto loc_82668DF8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82668DF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82668E10"))) PPC_WEAK_FUNC(sub_82668E10);
PPC_FUNC_IMPL(__imp__sub_82668E10) {
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
	// addi r11,r11,1856
	ctx.r11.s64 = ctx.r11.s64 + 1856;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwimi r11,r10,11,25,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 11) & 0x78) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF87);
	// rlwimi r11,r10,11,20,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 11) & 0xF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF0FF);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82668e54
	if (ctx.cr6.eq) goto loc_82668E54;
	// bl 0x821601b8
	ctx.lr = 0x82668E54;
	sub_821601B8(ctx, base);
loc_82668E54:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82668e74
	if (ctx.cr6.eq) goto loc_82668E74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82668E74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82668E74:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82668e84
	if (ctx.cr6.eq) goto loc_82668E84;
	// bl 0x82581e38
	ctx.lr = 0x82668E84;
	sub_82581E38(ctx, base);
loc_82668E84:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-5164
	ctx.r11.s64 = ctx.r11.s64 + -5164;
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

__attribute__((alias("__imp__sub_82668EA8"))) PPC_WEAK_FUNC(sub_82668EA8);
PPC_FUNC_IMPL(__imp__sub_82668EA8) {
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
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82668f8c
	if (!ctx.cr6.eq) goto loc_82668F8C;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,100(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82668f8c
	if (ctx.cr6.eq) goto loc_82668F8C;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// li r3,288
	ctx.r3.s64 = 288;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x825e6f70
	ctx.lr = 0x82668EF0;
	sub_825E6F70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82668f08
	if (ctx.cr6.eq) goto loc_82668F08;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f1,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828f8270
	ctx.lr = 0x82668F04;
	sub_828F8270(ctx, base);
	// b 0x82668f0c
	goto loc_82668F0C;
loc_82668F08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82668F0C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82668f34
	if (ctx.cr6.eq) goto loc_82668F34;
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
	ctx.lr = 0x82668F34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82668F34:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82668f50
	if (ctx.cr6.eq) goto loc_82668F50;
	// lwz r4,112(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// b 0x82668f54
	goto loc_82668F54;
loc_82668F50:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82668F54:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x828f7ac8
	ctx.lr = 0x82668F6C;
	sub_828F7AC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82668f8c
	if (ctx.cr6.eq) goto loc_82668F8C;
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
loc_82668F8C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82668FB0"))) PPC_WEAK_FUNC(sub_82668FB0);
PPC_FUNC_IMPL(__imp__sub_82668FB0) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82668fe4
	if (ctx.cr6.eq) goto loc_82668FE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82668a38
	ctx.lr = 0x82668FE0;
	sub_82668A38(ctx, base);
	// b 0x82669008
	goto loc_82669008;
loc_82668FE4:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669008
	if (ctx.cr6.eq) goto loc_82669008;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669008
	if (ctx.cr6.eq) goto loc_82669008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82668ea8
	ctx.lr = 0x82669008;
	sub_82668EA8(ctx, base);
loc_82669008:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82669020
	if (!ctx.cr6.eq) goto loc_82669020;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82669020:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82669038"))) PPC_WEAK_FUNC(sub_82669038);
PPC_FUNC_IMPL(__imp__sub_82669038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x82669068;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82669094
	if (ctx.cr6.eq) goto loc_82669094;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,1836
	ctx.r10.s64 = ctx.r11.s64 + 1836;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82669098
	goto loc_82669098;
loc_82669094:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82669098:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x826690e4
	if (!ctx.cr6.eq) goto loc_826690E4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826690c4
	if (ctx.cr6.eq) goto loc_826690C4;
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
	ctx.lr = 0x826690C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826690C4:
	// lis r10,-32071
	ctx.r10.s64 = -2101805056;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,-15396(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15396);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x826690E4;
	sub_821E0968(ctx, base);
loc_826690E4:
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

__attribute__((alias("__imp__sub_82669100"))) PPC_WEAK_FUNC(sub_82669100);
PPC_FUNC_IMPL(__imp__sub_82669100) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// addi r10,r11,1856
	ctx.r10.s64 = ctx.r11.s64 + 1856;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82669174
	if (ctx.cr6.eq) goto loc_82669174;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
loc_82669174:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82669188"))) PPC_WEAK_FUNC(sub_82669188);
PPC_FUNC_IMPL(__imp__sub_82669188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82668e10
	ctx.lr = 0x826691A8;
	sub_82668E10(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826691c0
	if (ctx.cr6.eq) goto loc_826691C0;
	// bl 0x82186190
	ctx.lr = 0x826691BC;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826691C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826691D8"))) PPC_WEAK_FUNC(sub_826691D8);
PPC_FUNC_IMPL(__imp__sub_826691D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x826691E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,52
	ctx.r3.s64 = 52;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82186158
	ctx.lr = 0x826691F4;
	sub_82186158(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826692f0
	if (ctx.cr6.eq) goto loc_826692F0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,1856
	ctx.r11.s64 = ctx.r11.s64 + 1856;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,3
	ctx.r9.s64 = 3;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
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
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// beq cr6,0x826692d8
	if (ctx.cr6.eq) goto loc_826692D8;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// li r3,288
	ctx.r3.s64 = 288;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x825e6f70
	ctx.lr = 0x82669268;
	sub_825E6F70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82669280
	if (ctx.cr6.eq) goto loc_82669280;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f1,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828f8270
	ctx.lr = 0x8266927C;
	sub_828F8270(ctx, base);
	// b 0x82669284
	goto loc_82669284;
loc_82669280:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82669284:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826692ac
	if (ctx.cr6.eq) goto loc_826692AC;
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
	ctx.lr = 0x826692AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826692AC:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x828f7ac8
	ctx.lr = 0x826692C8;
	sub_828F7AC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x826692f4
	if (!ctx.cr6.eq) goto loc_826692F4;
	// b 0x826692dc
	goto loc_826692DC;
loc_826692D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826692DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826692F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826692F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826692F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82669300"))) PPC_WEAK_FUNC(sub_82669300);
PPC_FUNC_IMPL(__imp__sub_82669300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82669308;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r30,44
	ctx.r31.s64 = ctx.r30.s64 + 44;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r28,4(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82669334
	if (ctx.cr6.eq) goto loc_82669334;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82160140
	ctx.lr = 0x82669334;
	sub_82160140(ctx, base);
loc_82669334:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82669344
	if (ctx.cr6.eq) goto loc_82669344;
	// bl 0x821601b8
	ctx.lr = 0x82669344;
	sub_821601B8(ctx, base);
loc_82669344:
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669364
	if (ctx.cr6.eq) goto loc_82669364;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x82209020
	ctx.lr = 0x82669364;
	sub_82209020(ctx, base);
loc_82669364:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82669374
	if (ctx.cr6.eq) goto loc_82669374;
	// bl 0x821601b8
	ctx.lr = 0x82669374;
	sub_821601B8(ctx, base);
loc_82669374:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82669380"))) PPC_WEAK_FUNC(sub_82669380);
PPC_FUNC_IMPL(__imp__sub_82669380) {
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
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826693ec
	if (ctx.cr6.eq) goto loc_826693EC;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826693ec
	if (ctx.cr6.eq) goto loc_826693EC;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826693ec
	if (ctx.cr6.eq) goto loc_826693EC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826693e0
	if (ctx.cr6.eq) goto loc_826693E0;
	// bl 0x821601b8
	ctx.lr = 0x826693E0;
	sub_821601B8(ctx, base);
loc_826693E0:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82209020
	ctx.lr = 0x826693EC;
	sub_82209020(ctx, base);
loc_826693EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82669400"))) PPC_WEAK_FUNC(sub_82669400);
PPC_FUNC_IMPL(__imp__sub_82669400) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82669450
	if (!ctx.cr0.eq) goto loc_82669450;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669438;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
loc_82669450:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669504
	if (ctx.cr6.eq) goto loc_82669504;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266947C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82669504
	if (ctx.cr6.eq) goto loc_82669504;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826694e4
	if (ctx.cr6.eq) goto loc_826694E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82669380
	ctx.lr = 0x826694AC;
	sub_82669380(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826694d8
	if (ctx.cr6.eq) goto loc_826694D8;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826694D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826694D8:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// b 0x82669500
	goto loc_82669500;
loc_826694E4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669504
	if (ctx.cr6.eq) goto loc_82669504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82669380
	ctx.lr = 0x826694F8;
	sub_82669380(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// ori r11,r11,258
	ctx.r11.u64 = ctx.r11.u64 | 258;
loc_82669500:
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82669504:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82669520"))) PPC_WEAK_FUNC(sub_82669520);
PPC_FUNC_IMPL(__imp__sub_82669520) {
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
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bgt cr6,0x826695e4
	if (ctx.cr6.gt) goto loc_826695E4;
	// lis r12,-32153
	ctx.r12.s64 = -2107179008;
	// addi r12,r12,-27308
	ctx.r12.s64 = ctx.r12.s64 + -27308;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_82669564;
	case 1:
		goto loc_82669570;
	case 2:
		goto loc_8266957C;
	case 3:
		goto loc_82669588;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-27292(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r19,-27280(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27280);
	// lwz r19,-27268(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27268);
	// lwz r19,-27256(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27256);
loc_82669564:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// b 0x826695e0
	goto loc_826695E0;
loc_82669570:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// b 0x826695e0
	goto loc_826695E0;
loc_8266957C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r11,r11,0,23,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// b 0x826695e0
	goto loc_826695E0;
loc_82669588:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826695e4
	if (ctx.cr6.eq) goto loc_826695E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82669380
	ctx.lr = 0x826695AC;
	sub_82669380(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826695d8
	if (ctx.cr6.eq) goto loc_826695D8;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826695D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826695D8:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_826695E0:
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_826695E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826695F8"))) PPC_WEAK_FUNC(sub_826695F8);
PPC_FUNC_IMPL(__imp__sub_826695F8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,320
	ctx.r3.s64 = 320;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x825e6f70
	ctx.lr = 0x8266961C;
	sub_825E6F70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82669634
	if (ctx.cr6.eq) goto loc_82669634;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82674c20
	ctx.lr = 0x8266962C;
	sub_82674C20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82669638
	goto loc_82669638;
loc_82669634:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82669638:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82669038
	ctx.lr = 0x82669654;
	sub_82669038(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82669300
	ctx.lr = 0x82669660;
	sub_82669300(ctx, base);
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

__attribute__((alias("__imp__sub_82669678"))) PPC_WEAK_FUNC(sub_82669678);
PPC_FUNC_IMPL(__imp__sub_82669678) {
	PPC_FUNC_PROLOGUE();
	// b 0x82669380
	sub_82669380(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82669680"))) PPC_WEAK_FUNC(sub_82669680);
PPC_FUNC_IMPL(__imp__sub_82669680) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826696B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826696d0
	if (ctx.cr6.eq) goto loc_826696D0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82630470
	ctx.lr = 0x826696CC;
	sub_82630470(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_826696D0:
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

__attribute__((alias("__imp__sub_826696E8"))) PPC_WEAK_FUNC(sub_826696E8);
PPC_FUNC_IMPL(__imp__sub_826696E8) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266971C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82669738
	if (ctx.cr6.eq) goto loc_82669738;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82630470
	ctx.lr = 0x82669734;
	sub_82630470(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82669738:
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

__attribute__((alias("__imp__sub_82669750"))) PPC_WEAK_FUNC(sub_82669750);
PPC_FUNC_IMPL(__imp__sub_82669750) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82669798
	if (ctx.cr6.eq) goto loc_82669798;
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8262fa18
	ctx.lr = 0x82669778;
	sub_8262FA18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82674e30
	ctx.lr = 0x82669784;
	sub_82674E30(ctx, base);
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
loc_82669798:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
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

__attribute__((alias("__imp__sub_826697B8"))) PPC_WEAK_FUNC(sub_826697B8);
PPC_FUNC_IMPL(__imp__sub_826697B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826697c8
	if (!ctx.cr6.eq) goto loc_826697C8;
	// twi 31,r0,22
loc_826697C8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826697e0
	if (ctx.cr6.eq) goto loc_826697E0;
	// twi 31,r0,22
	// blr 
	return;
loc_826697E0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,25(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 25);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8266981c
	if (!ctx.cr6.eq) goto loc_8266981C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,25(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82669814
	if (!ctx.cr6.eq) goto loc_82669814;
loc_82669800:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,25(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82669800
	if (ctx.cr6.eq) goto loc_82669800;
loc_82669814:
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_8266981C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82669854
	if (!ctx.cr6.eq) goto loc_82669854;
loc_8266982C:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82669854
	if (!ctx.cr6.eq) goto loc_82669854;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8266982c
	if (ctx.cr6.eq) goto loc_8266982C;
loc_82669854:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82669860"))) PPC_WEAK_FUNC(sub_82669860);
PPC_FUNC_IMPL(__imp__sub_82669860) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82669870
	if (!ctx.cr6.eq) goto loc_82669870;
	// twi 31,r0,22
loc_82669870:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82669888
	if (ctx.cr6.eq) goto loc_82669888;
	// twi 31,r0,22
	// blr 
	return;
loc_82669888:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,21(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826698c4
	if (!ctx.cr6.eq) goto loc_826698C4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826698bc
	if (!ctx.cr6.eq) goto loc_826698BC;
loc_826698A8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826698a8
	if (ctx.cr6.eq) goto loc_826698A8;
loc_826698BC:
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_826698C4:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826698fc
	if (!ctx.cr6.eq) goto loc_826698FC;
loc_826698D4:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x826698fc
	if (!ctx.cr6.eq) goto loc_826698FC;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826698d4
	if (ctx.cr6.eq) goto loc_826698D4;
loc_826698FC:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82669908"))) PPC_WEAK_FUNC(sub_82669908);
PPC_FUNC_IMPL(__imp__sub_82669908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82669924:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subfc r9,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82669944
	if (ctx.cr6.eq) goto loc_82669944;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8266994c
	goto loc_8266994C;
loc_82669944:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8266994C:
	// lbz r9,25(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82669924
	if (ctx.cr6.eq) goto loc_82669924;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82669960"))) PPC_WEAK_FUNC(sub_82669960);
PPC_FUNC_IMPL(__imp__sub_82669960) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-14912
	ctx.r4.s64 = ctx.r11.s64 + -14912;
	// bl 0x826de850
	ctx.lr = 0x82669984;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82669998
	if (!ctx.cr6.eq) goto loc_82669998;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82669998:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826699B0"))) PPC_WEAK_FUNC(sub_826699B0);
PPC_FUNC_IMPL(__imp__sub_826699B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x826699B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82669b18
	if (ctx.cr6.eq) goto loc_82669B18;
	// addi r28,r31,228
	ctx.r28.s64 = ctx.r31.s64 + 228;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669b5c
	if (ctx.cr6.eq) goto loc_82669B5C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669b5c
	if (ctx.cr6.eq) goto loc_82669B5C;
	// addi r29,r31,260
	ctx.r29.s64 = ctx.r31.s64 + 260;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669b5c
	if (ctx.cr6.eq) goto loc_82669B5C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669b5c
	if (ctx.cr6.eq) goto loc_82669B5C;
	// addi r30,r31,268
	ctx.r30.s64 = ctx.r31.s64 + 268;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669a28
	if (ctx.cr6.eq) goto loc_82669A28;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82669b5c
	if (!ctx.cr6.eq) goto loc_82669B5C;
loc_82669A28:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,-17756(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17756);
	// lwz r4,160(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669A4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669b00
	if (ctx.cr6.eq) goto loc_82669B00;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669b00
	if (ctx.cr6.eq) goto loc_82669B00;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82186158
	ctx.lr = 0x82669A70;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82669a84
	if (ctx.cr6.eq) goto loc_82669A84;
	// bl 0x82597e30
	ctx.lr = 0x82669A7C;
	sub_82597E30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82669a88
	goto loc_82669A88;
loc_82669A84:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82669A88:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82669a9c
	if (ctx.cr6.eq) goto loc_82669A9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x82669A9C;
	sub_82659610(ctx, base);
loc_82669A9C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823032b8
	ctx.lr = 0x82669AA8;
	sub_823032B8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82669ab8
	if (ctx.cr6.eq) goto loc_82669AB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581e38
	ctx.lr = 0x82669AB8;
	sub_82581E38(ctx, base);
loc_82669AB8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82669b00
	if (ctx.cr6.eq) goto loc_82669B00;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669b00
	if (ctx.cr6.eq) goto loc_82669B00;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82598110
	ctx.lr = 0x82669ADC;
	sub_82598110(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82597bf8
	ctx.lr = 0x82669AE8;
	sub_82597BF8(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669B00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82669B00:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82669b5c
	if (ctx.cr6.eq) goto loc_82669B5C;
	// bl 0x821601b8
	ctx.lr = 0x82669B10;
	sub_821601B8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82669B18:
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82669b5c
	if (ctx.cr6.eq) goto loc_82669B5C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669b5c
	if (ctx.cr6.eq) goto loc_82669B5C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669B44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// beq cr6,0x82669b5c
	if (ctx.cr6.eq) goto loc_82669B5C;
	// bl 0x82581e38
	ctx.lr = 0x82669B5C;
	sub_82581E38(ctx, base);
loc_82669B5C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82669B68"))) PPC_WEAK_FUNC(sub_82669B68);
PPC_FUNC_IMPL(__imp__sub_82669B68) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669d48
	if (ctx.cr6.eq) goto loc_82669D48;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669d48
	if (ctx.cr6.eq) goto loc_82669D48;
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,2952(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2952);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82669c80
	if (ctx.cr6.eq) goto loc_82669C80;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669c80
	if (ctx.cr6.eq) goto loc_82669C80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669BD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// fmuls f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669BF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// rlwinm r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669c80
	if (ctx.cr6.eq) goto loc_82669C80;
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82669c80
	if (ctx.cr6.eq) goto loc_82669C80;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669c80
	if (ctx.cr6.eq) goto loc_82669C80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669C34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669C48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// lwz r5,276(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r3,-4
	ctx.r4.s64 = ctx.r3.s64 + -4;
	// bne cr6,0x82669c64
	if (!ctx.cr6.eq) goto loc_82669C64;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82669C64:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// fsubs f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669C80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82669C80:
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669ce4
	if (ctx.cr6.eq) goto loc_82669CE4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669ce4
	if (ctx.cr6.eq) goto loc_82669CE4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669CB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669CCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// fmsubs f1,f30,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f31.f64 - ctx.f1.f64));
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669CE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82669CE4:
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669d48
	if (ctx.cr6.eq) goto loc_82669D48;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669d48
	if (ctx.cr6.eq) goto loc_82669D48;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669D18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669D30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// fmsubs f1,f30,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f31.f64 - ctx.f1.f64));
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669D48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82669D48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_82669D68"))) PPC_WEAK_FUNC(sub_82669D68);
PPC_FUNC_IMPL(__imp__sub_82669D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82669D70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,256(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82669e20
	if (!ctx.cr6.eq) goto loc_82669E20;
	// li r3,240
	ctx.r3.s64 = 240;
	// bl 0x82186158
	ctx.lr = 0x82669D8C;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82669e28
	if (ctx.cr6.eq) goto loc_82669E28;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,8016
	ctx.r4.s64 = ctx.r11.s64 + 8016;
	// bl 0x82594ed0
	ctx.lr = 0x82669DA0;
	sub_82594ED0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82669db0
	if (ctx.cr6.eq) goto loc_82669DB0;
	// bl 0x82659610
	ctx.lr = 0x82669DB0;
	sub_82659610(ctx, base);
loc_82669DB0:
	// addi r31,r29,260
	ctx.r31.s64 = ctx.r29.s64 + 260;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82669dc4
	if (ctx.cr6.eq) goto loc_82669DC4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x82669DC4;
	sub_82659610(ctx, base);
loc_82669DC4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82669dd8
	if (ctx.cr6.eq) goto loc_82669DD8;
	// bl 0x82581e38
	ctx.lr = 0x82669DD8;
	sub_82581E38(ctx, base);
loc_82669DD8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82669de8
	if (ctx.cr6.eq) goto loc_82669DE8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82581e38
	ctx.lr = 0x82669DE8;
	sub_82581E38(ctx, base);
loc_82669DE8:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-18576
	ctx.r4.s64 = ctx.r11.s64 + -18576;
	// bl 0x82594698
	ctx.lr = 0x82669DF8;
	sub_82594698(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,-17756(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17756);
	// lwz r3,160(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669E18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,256(r29)
	PPC_STORE_U8(ctx.r29.u32 + 256, ctx.r11.u8);
loc_82669E20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82669E28:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82669db0
	goto loc_82669DB0;
}

__attribute__((alias("__imp__sub_82669E30"))) PPC_WEAK_FUNC(sub_82669E30);
PPC_FUNC_IMPL(__imp__sub_82669E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82669E38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82669e54
	if (!ctx.cr6.eq) goto loc_82669E54;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x82669e60
	goto loc_82669E60;
loc_82669E54:
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r28,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 2;
loc_82669E60:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82669edc
	if (ctx.cr6.eq) goto loc_82669EDC;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82669E70:
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669e90
	if (ctx.cr6.eq) goto loc_82669E90;
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82669e94
	if (ctx.cr6.lt) goto loc_82669E94;
loc_82669E90:
	// twi 31,r0,22
loc_82669E94:
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669ecc
	if (ctx.cr6.eq) goto loc_82669ECC;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669ec0
	if (ctx.cr6.eq) goto loc_82669EC0;
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82669ec4
	if (ctx.cr6.lt) goto loc_82669EC4;
loc_82669EC0:
	// twi 31,r0,22
loc_82669EC4:
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x82669b68
	ctx.lr = 0x82669ECC;
	sub_82669B68(ctx, base);
loc_82669ECC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82669e70
	if (!ctx.cr6.eq) goto loc_82669E70;
loc_82669EDC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82669EE8"))) PPC_WEAK_FUNC(sub_82669EE8);
PPC_FUNC_IMPL(__imp__sub_82669EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82669EF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// lbz r11,21(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 21);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82669f44
	if (!ctx.cr6.eq) goto loc_82669F44;
loc_82669F0C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82669ee8
	ctx.lr = 0x82669F18;
	sub_82669EE8(ctx, base);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82669f2c
	if (ctx.cr6.eq) goto loc_82669F2C;
	// bl 0x82581e38
	ctx.lr = 0x82669F2C;
	sub_82581E38(ctx, base);
loc_82669F2C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82186190
	ctx.lr = 0x82669F34;
	sub_82186190(ctx, base);
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669f0c
	if (ctx.cr6.eq) goto loc_82669F0C;
loc_82669F44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82669F50"))) PPC_WEAK_FUNC(sub_82669F50);
PPC_FUNC_IMPL(__imp__sub_82669F50) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82186158
	ctx.lr = 0x82669F6C;
	sub_82186158(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82669f7c
	if (ctx.cr6.eq) goto loc_82669F7C;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82669F7C:
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669f8c
	if (ctx.cr6.eq) goto loc_82669F8C;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82669F8C:
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669f9c
	if (ctx.cr6.eq) goto loc_82669F9C;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82669F9C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// stb r10,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r10.u8);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stb r11,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r11.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82669FE0"))) PPC_WEAK_FUNC(sub_82669FE0);
PPC_FUNC_IMPL(__imp__sub_82669FE0) {
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
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266a004
	if (ctx.cr6.eq) goto loc_8266A004;
	// bl 0x82581e38
	ctx.lr = 0x8266A004;
	sub_82581E38(ctx, base);
loc_8266A004:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266a014
	if (ctx.cr6.eq) goto loc_8266A014;
	// bl 0x82581e38
	ctx.lr = 0x8266A014;
	sub_82581E38(ctx, base);
loc_8266A014:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266a024
	if (ctx.cr6.eq) goto loc_8266A024;
	// bl 0x82581e38
	ctx.lr = 0x8266A024;
	sub_82581E38(ctx, base);
loc_8266A024:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8266a03c
	if (ctx.cr6.lt) goto loc_8266A03C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x8266A03C;
	sub_82186190(ctx, base);
loc_8266A03C:
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

