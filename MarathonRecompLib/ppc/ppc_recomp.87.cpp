#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82649958"))) PPC_WEAK_FUNC(sub_82649958);
PPC_FUNC_IMPL(__imp__sub_82649958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r10,-3784
	ctx.r10.s64 = ctx.r10.s64 + -3784;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82649990
	if (ctx.cr6.eq) goto loc_82649990;
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
loc_82649990:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826499a0
	if (ctx.cr6.eq) goto loc_826499A0;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_826499A0:
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82664710
	ctx.lr = 0x826499AC;
	sub_82664710(ctx, base);
	// bl 0x828f5e30
	ctx.lr = 0x826499B0;
	sub_828F5E30(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826499d0
	if (ctx.cr6.eq) goto loc_826499D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826499D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826499D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82664880
	ctx.lr = 0x826499D8;
	sub_82664880(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-5152
	ctx.r11.s64 = ctx.r11.s64 + -5152;
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

__attribute__((alias("__imp__sub_82649A00"))) PPC_WEAK_FUNC(sub_82649A00);
PPC_FUNC_IMPL(__imp__sub_82649A00) {
	PPC_FUNC_PROLOGUE();
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x82649a30
	if (!ctx.cr6.eq) goto loc_82649A30;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82649aa4
	goto loc_82649AA4;
loc_82649A30:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// beq cr6,0x82649a60
	if (ctx.cr6.eq) goto loc_82649A60;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82664bc8
	ctx.lr = 0x82649A4C;
	sub_82664BC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82224c78
	ctx.lr = 0x82649A58;
	sub_82224C78(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82649a78
	goto loc_82649A78;
loc_82649A60:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82664d08
	ctx.lr = 0x82649A68;
	sub_82664D08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82224c78
	ctx.lr = 0x82649A74;
	sub_82224C78(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82649A78:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82649a84
	if (ctx.cr6.eq) goto loc_82649A84;
	// bl 0x82631328
	ctx.lr = 0x82649A84;
	sub_82631328(ctx, base);
loc_82649A84:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// beq cr6,0x82649aa4
	if (ctx.cr6.eq) goto loc_82649AA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x82649A9C;
	sub_82659610(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82631328
	ctx.lr = 0x82649AA4;
	sub_82631328(ctx, base);
loc_82649AA4:
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

__attribute__((alias("__imp__sub_82649AC0"))) PPC_WEAK_FUNC(sub_82649AC0);
PPC_FUNC_IMPL(__imp__sub_82649AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82649AC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-3784
	ctx.r11.s64 = ctx.r11.s64 + -3784;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826646c8
	ctx.lr = 0x82649AE8;
	sub_826646C8(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// lwz r11,-15120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82649b14
	if (!ctx.cr6.eq) goto loc_82649B14;
	// bl 0x82642018
	ctx.lr = 0x82649B10;
	sub_82642018(ctx, base);
	// stw r3,-15120(r30)
	PPC_STORE_U32(ctx.r30.u32 + -15120, ctx.r3.u32);
loc_82649B14:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82649B30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-17756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17756);
	// bl 0x82667b10
	ctx.lr = 0x82649B40;
	sub_82667B10(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-17756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17756);
	// bl 0x82668410
	ctx.lr = 0x82649B4C;
	sub_82668410(ctx, base);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x825e6f70
	ctx.lr = 0x82649B54;
	sub_825E6F70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82649b64
	if (ctx.cr6.eq) goto loc_82649B64;
	// bl 0x828f5bb8
	ctx.lr = 0x82649B60;
	sub_828F5BB8(ctx, base);
	// b 0x82649b68
	goto loc_82649B68;
loc_82649B64:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82649B68:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82649b90
	if (ctx.cr6.eq) goto loc_82649B90;
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
	ctx.lr = 0x82649B90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82649B90:
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828f5e08
	ctx.lr = 0x82649B9C;
	sub_828F5E08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82648db0
	ctx.lr = 0x82649BA8;
	sub_82648DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82649BB8"))) PPC_WEAK_FUNC(sub_82649BB8);
PPC_FUNC_IMPL(__imp__sub_82649BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82649958
	ctx.lr = 0x82649BD8;
	sub_82649958(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82649bf0
	if (ctx.cr6.eq) goto loc_82649BF0;
	// bl 0x82186190
	ctx.lr = 0x82649BEC;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82649BF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82649C08"))) PPC_WEAK_FUNC(sub_82649C08);
PPC_FUNC_IMPL(__imp__sub_82649C08) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r11,r11,-3732
	ctx.r11.s64 = ctx.r11.s64 + -3732;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r10,-15000
	ctx.r4.s64 = ctx.r10.s64 + -15000;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82649C40:
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
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
	// beq cr6,0x82649c9c
	if (ctx.cr6.eq) goto loc_82649C9C;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82649c68
	if (!ctx.cr6.eq) goto loc_82649C68;
	// twi 31,r0,22
loc_82649C68:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82649c88
	if (ctx.cr6.eq) goto loc_82649C88;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82649c80
	if (!ctx.cr6.eq) goto loc_82649C80;
	// twi 31,r0,22
loc_82649C80:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82649c40
	goto loc_82649C40;
loc_82649C88:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82273d58
	ctx.lr = 0x82649C98;
	sub_82273D58(ctx, base);
	// b 0x82649ca0
	goto loc_82649CA0;
loc_82649C9C:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82649CA0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r31,36
	ctx.r10.s64 = ctx.r31.s64 + 36;
	// addi r11,r11,7840
	ctx.r11.s64 = ctx.r11.s64 + 7840;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82649cd8
	if (ctx.cr6.eq) goto loc_82649CD8;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82649CC0:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// bne cr6,0x82649cc0
	if (!ctx.cr6.eq) goto loc_82649CC0;
loc_82649CD8:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82649cec
	if (ctx.cr6.eq) goto loc_82649CEC;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_82649CEC:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82649d00
	if (ctx.cr6.eq) goto loc_82649D00;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82649D00:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82649d20
	if (ctx.cr6.eq) goto loc_82649D20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82649D20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82649D20:
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

__attribute__((alias("__imp__sub_82649D38"))) PPC_WEAK_FUNC(sub_82649D38);
PPC_FUNC_IMPL(__imp__sub_82649D38) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82591d08
	ctx.lr = 0x82649D5C;
	sub_82591D08(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-3732
	ctx.r11.s64 = ctx.r11.s64 + -3732;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82649D80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r10,-15000
	ctx.r3.s64 = ctx.r10.s64 + -15000;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// bl 0x826478a8
	ctx.lr = 0x82649DB0;
	sub_826478A8(ctx, base);
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

__attribute__((alias("__imp__sub_82649DD0"))) PPC_WEAK_FUNC(sub_82649DD0);
PPC_FUNC_IMPL(__imp__sub_82649DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82649d38
	ctx.lr = 0x82649DF4;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-3712
	ctx.r11.s64 = ctx.r11.s64 + -3712;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// beq cr6,0x82649e14
	if (ctx.cr6.eq) goto loc_82649E14;
	// bl 0x82659610
	ctx.lr = 0x82649E14;
	sub_82659610(ctx, base);
loc_82649E14:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82649E28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82649e50
	if (ctx.cr6.eq) goto loc_82649E50;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82649e50
	if (ctx.cr6.eq) goto loc_82649E50;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82649e50
	if (ctx.cr6.eq) goto loc_82649E50;
	// bl 0x82629d00
	ctx.lr = 0x82649E50;
	sub_82629D00(ctx, base);
loc_82649E50:
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

__attribute__((alias("__imp__sub_82649E70"))) PPC_WEAK_FUNC(sub_82649E70);
PPC_FUNC_IMPL(__imp__sub_82649E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82649E98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82649ec4
	if (ctx.cr6.eq) goto loc_82649EC4;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82649ec4
	if (ctx.cr6.eq) goto loc_82649EC4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82649ec4
	if (ctx.cr6.eq) goto loc_82649EC4;
	// bl 0x82629a70
	ctx.lr = 0x82649EC4;
	sub_82629A70(ctx, base);
loc_82649EC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82649ED8"))) PPC_WEAK_FUNC(sub_82649ED8);
PPC_FUNC_IMPL(__imp__sub_82649ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b8
	ctx.lr = 0x82649EE0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x82649d38
	ctx.lr = 0x82649F04;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-3692
	ctx.r11.s64 = ctx.r11.s64 + -3692;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8263fe60
	ctx.lr = 0x82649F1C;
	sub_8263FE60(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x82186158
	ctx.lr = 0x82649F28;
	sub_82186158(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82649f70
	if (ctx.cr6.eq) goto loc_82649F70;
	// bl 0x82629338
	ctx.lr = 0x82649F3C;
	sub_82629338(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82629338
	ctx.lr = 0x82649F48;
	sub_82629338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826688b0
	ctx.lr = 0x82649F6C;
	sub_826688B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82649F70:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82649F78"))) PPC_WEAK_FUNC(sub_82649F78);
PPC_FUNC_IMPL(__imp__sub_82649F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82649FA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r30,36(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// blt cr6,0x82649fc0
	if (ctx.cr6.lt) goto loc_82649FC0;
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82649fc4
	if (ctx.cr6.eq) goto loc_82649FC4;
loc_82649FC0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82649FC4:
	// bl 0x8259afe0
	ctx.lr = 0x82649FC8;
	sub_8259AFE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82629338
	ctx.lr = 0x82649FD4;
	sub_82629338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825ba9c8
	ctx.lr = 0x82649FDC;
	sub_825BA9C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259afe0
	ctx.lr = 0x82649FE8;
	sub_8259AFE0(ctx, base);
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259afc0
	ctx.lr = 0x82649FFC;
	sub_8259AFC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264A018"))) PPC_WEAK_FUNC(sub_8264A018);
PPC_FUNC_IMPL(__imp__sub_8264A018) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-3604
	ctx.r3.s64 = ctx.r11.s64 + -3604;
	// bl 0x821e0968
	ctx.lr = 0x8264A038;
	sub_821E0968(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264a06c
	if (ctx.cr6.eq) goto loc_8264A06C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,53251
	ctx.r11.u64 = ctx.r11.u64 | 53251;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264A064;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8264A06C:
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

__attribute__((alias("__imp__sub_8264A080"))) PPC_WEAK_FUNC(sub_8264A080);
PPC_FUNC_IMPL(__imp__sub_8264A080) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264a0d0
	if (ctx.cr6.eq) goto loc_8264A0D0;
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x8264a0d0
	if (!ctx.cr6.gt) goto loc_8264A0D0;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264a0c0
	if (ctx.cr6.eq) goto loc_8264A0C0;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8264a0c4
	if (ctx.cr6.lt) goto loc_8264A0C4;
loc_8264A0C0:
	// twi 31,r0,22
loc_8264A0C4:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
loc_8264A0D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264A0D8"))) PPC_WEAK_FUNC(sub_8264A0D8);
PPC_FUNC_IMPL(__imp__sub_8264A0D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264a128
	if (ctx.cr6.eq) goto loc_8264A128;
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x8264a128
	if (!ctx.cr6.gt) goto loc_8264A128;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264a118
	if (ctx.cr6.eq) goto loc_8264A118;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8264a11c
	if (ctx.cr6.lt) goto loc_8264A11C;
loc_8264A118:
	// twi 31,r0,22
loc_8264A11C:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
loc_8264A128:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264A130"))) PPC_WEAK_FUNC(sub_8264A130);
PPC_FUNC_IMPL(__imp__sub_8264A130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8264a168
	if (ctx.cr6.eq) goto loc_8264A168;
	// lwz r4,112(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// b 0x8264a16c
	goto loc_8264A16C;
loc_8264A168:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8264A16C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f6150
	ctx.lr = 0x8264A174;
	sub_828F6150(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-3536
	ctx.r11.s64 = ctx.r11.s64 + -3536;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// beq cr6,0x8264a194
	if (ctx.cr6.eq) goto loc_8264A194;
	// bl 0x82659610
	ctx.lr = 0x8264A194;
	sub_82659610(ctx, base);
loc_8264A194:
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

__attribute__((alias("__imp__sub_8264A1B0"))) PPC_WEAK_FUNC(sub_8264A1B0);
PPC_FUNC_IMPL(__imp__sub_8264A1B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-28592
	ctx.r4.s64 = ctx.r11.s64 + -28592;
	// bl 0x826de850
	ctx.lr = 0x8264A1D4;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264a1e8
	if (!ctx.cr6.eq) goto loc_8264A1E8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264A1E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264A200"))) PPC_WEAK_FUNC(sub_8264A200);
PPC_FUNC_IMPL(__imp__sub_8264A200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-28376
	ctx.r4.s64 = ctx.r11.s64 + -28376;
	// bl 0x826de850
	ctx.lr = 0x8264A224;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264a238
	if (!ctx.cr6.eq) goto loc_8264A238;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264A238:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264A250"))) PPC_WEAK_FUNC(sub_8264A250);
PPC_FUNC_IMPL(__imp__sub_8264A250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-28144
	ctx.r4.s64 = ctx.r11.s64 + -28144;
	// bl 0x826de850
	ctx.lr = 0x8264A274;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264a288
	if (!ctx.cr6.eq) goto loc_8264A288;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264A288:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264A2A0"))) PPC_WEAK_FUNC(sub_8264A2A0);
PPC_FUNC_IMPL(__imp__sub_8264A2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264a2cc
	if (ctx.cr6.eq) goto loc_8264A2CC;
	// bl 0x82581e38
	ctx.lr = 0x8264A2CC;
	sub_82581E38(ctx, base);
loc_8264A2CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f6920
	ctx.lr = 0x8264A2D4;
	sub_828F6920(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264a2ec
	if (ctx.cr6.eq) goto loc_8264A2EC;
	// bl 0x825e6f78
	ctx.lr = 0x8264A2E8;
	sub_825E6F78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8264A2EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264A308"))) PPC_WEAK_FUNC(sub_8264A308);
PPC_FUNC_IMPL(__imp__sub_8264A308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8264A328;
	sub_82581500(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r11,r11,-3448
	ctx.r11.s64 = ctx.r11.s64 + -3448;
	// addi r9,r9,-3460
	ctx.r9.s64 = ctx.r9.s64 + -3460;
	// addi r10,r31,76
	ctx.r10.s64 = ctx.r31.s64 + 76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// beq cr6,0x8264a36c
	if (ctx.cr6.eq) goto loc_8264A36C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8264A36C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264A388"))) PPC_WEAK_FUNC(sub_8264A388);
PPC_FUNC_IMPL(__imp__sub_8264A388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-3580
	ctx.r3.s64 = ctx.r11.s64 + -3580;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264A398"))) PPC_WEAK_FUNC(sub_8264A398);
PPC_FUNC_IMPL(__imp__sub_8264A398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8264A3B8;
	sub_82581500(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r11,r11,-3420
	ctx.r11.s64 = ctx.r11.s64 + -3420;
	// addi r9,r9,-3432
	ctx.r9.s64 = ctx.r9.s64 + -3432;
	// addi r10,r31,76
	ctx.r10.s64 = ctx.r31.s64 + 76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// beq cr6,0x8264a3fc
	if (ctx.cr6.eq) goto loc_8264A3FC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8264A3FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264A418"))) PPC_WEAK_FUNC(sub_8264A418);
PPC_FUNC_IMPL(__imp__sub_8264A418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-3560
	ctx.r3.s64 = ctx.r11.s64 + -3560;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264A428"))) PPC_WEAK_FUNC(sub_8264A428);
PPC_FUNC_IMPL(__imp__sub_8264A428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8264A458;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264a484
	if (ctx.cr6.eq) goto loc_8264A484;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-3500
	ctx.r10.s64 = ctx.r11.s64 + -3500;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8264a488
	goto loc_8264A488;
loc_8264A484:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8264A488:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8264a4d4
	if (!ctx.cr6.eq) goto loc_8264A4D4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8264a4b4
	if (ctx.cr6.eq) goto loc_8264A4B4;
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
	ctx.lr = 0x8264A4B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8264A4B4:
	// lis r10,-32071
	ctx.r10.s64 = -2101805056;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,-28864(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28864);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x8264A4D4;
	sub_821E0968(ctx, base);
loc_8264A4D4:
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

__attribute__((alias("__imp__sub_8264A4F0"))) PPC_WEAK_FUNC(sub_8264A4F0);
PPC_FUNC_IMPL(__imp__sub_8264A4F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8264A520;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264a54c
	if (ctx.cr6.eq) goto loc_8264A54C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-3480
	ctx.r10.s64 = ctx.r11.s64 + -3480;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8264a550
	goto loc_8264A550;
loc_8264A54C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8264A550:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8264a59c
	if (!ctx.cr6.eq) goto loc_8264A59C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8264a57c
	if (ctx.cr6.eq) goto loc_8264A57C;
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
	ctx.lr = 0x8264A57C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8264A57C:
	// lis r10,-32071
	ctx.r10.s64 = -2101805056;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,-28864(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28864);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x8264A59C;
	sub_821E0968(ctx, base);
loc_8264A59C:
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

__attribute__((alias("__imp__sub_8264A5B8"))) PPC_WEAK_FUNC(sub_8264A5B8);
PPC_FUNC_IMPL(__imp__sub_8264A5B8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264a624
	if (ctx.cr6.eq) goto loc_8264A624;
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
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
	// beq cr6,0x8264a604
	if (ctx.cr6.eq) goto loc_8264A604;
	// bl 0x821601b8
	ctx.lr = 0x8264A604;
	sub_821601B8(ctx, base);
loc_8264A604:
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
loc_8264A624:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264a604
	if (ctx.cr6.eq) goto loc_8264A604;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264a604
	if (ctx.cr6.eq) goto loc_8264A604;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,-3408(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3408);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f29,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f30,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f30.f64 = double(temp.f32);
loc_8264A65C:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x8264a66c
	if (!ctx.cr6.gt) goto loc_8264A66C;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// b 0x8264a670
	goto loc_8264A670;
loc_8264A66C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_8264A670:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82668b98
	ctx.lr = 0x8264A678;
	sub_82668B98(ctx, base);
	// fsubs f31,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// ble cr6,0x8264a604
	if (!ctx.cr6.gt) goto loc_8264A604;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82668ca8
	ctx.lr = 0x8264A68C;
	sub_82668CA8(ctx, base);
	// b 0x8264a65c
	goto loc_8264A65C;
}

__attribute__((alias("__imp__sub_8264A690"))) PPC_WEAK_FUNC(sub_8264A690);
PPC_FUNC_IMPL(__imp__sub_8264A690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8264A698;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r28,80
	ctx.r30.s64 = ctx.r28.s64 + 80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8264a6c4
	if (ctx.cr6.eq) goto loc_8264A6C4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82160140
	ctx.lr = 0x8264A6C4;
	sub_82160140(ctx, base);
loc_8264A6C4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264a6d4
	if (ctx.cr6.eq) goto loc_8264A6D4;
	// bl 0x821601b8
	ctx.lr = 0x8264A6D4;
	sub_821601B8(ctx, base);
loc_8264A6D4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// addi r3,r11,-3404
	ctx.r3.s64 = ctx.r11.s64 + -3404;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,2952(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2952);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,92(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 92, temp.u32);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821e0968
	ctx.lr = 0x8264A724;
	sub_821E0968(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8264A730"))) PPC_WEAK_FUNC(sub_8264A730);
PPC_FUNC_IMPL(__imp__sub_8264A730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8264A738;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8264a794
	if (ctx.cr6.eq) goto loc_8264A794;
loc_8264A768:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264a77c
	if (ctx.cr6.eq) goto loc_8264A77C;
	// bl 0x82631328
	ctx.lr = 0x8264A77C;
	sub_82631328(ctx, base);
loc_8264A77C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82186190
	ctx.lr = 0x8264A784;
	sub_82186190(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8264a768
	if (!ctx.cr6.eq) goto loc_8264A768;
loc_8264A794:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8264A7A0"))) PPC_WEAK_FUNC(sub_8264A7A0);
PPC_FUNC_IMPL(__imp__sub_8264A7A0) {
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
	// bl 0x8264a4f0
	ctx.lr = 0x8264A7D0;
	sub_8264A4F0(ctx, base);
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
	// beq cr6,0x8264a7fc
	if (ctx.cr6.eq) goto loc_8264A7FC;
	// bl 0x821601b8
	ctx.lr = 0x8264A7FC;
	sub_821601B8(ctx, base);
loc_8264A7FC:
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

__attribute__((alias("__imp__sub_8264A810"))) PPC_WEAK_FUNC(sub_8264A810);
PPC_FUNC_IMPL(__imp__sub_8264A810) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r3,48
	ctx.r30.s64 = ctx.r3.s64 + 48;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8264A838:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r30,r30
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8264a848
	if (ctx.cr6.eq) goto loc_8264A848;
	// twi 31,r0,22
loc_8264A848:
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
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
	// beq cr6,0x8264a8a4
	if (ctx.cr6.eq) goto loc_8264A8A4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8264a874
	if (!ctx.cr6.eq) goto loc_8264A874;
	// twi 31,r0,22
loc_8264A874:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264A88C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8264a89c
	if (!ctx.cr6.eq) goto loc_8264A89C;
	// twi 31,r0,22
loc_8264A89C:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8264a838
	goto loc_8264A838;
loc_8264A8A4:
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

__attribute__((alias("__imp__sub_8264A8C0"))) PPC_WEAK_FUNC(sub_8264A8C0);
PPC_FUNC_IMPL(__imp__sub_8264A8C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r3,60
	ctx.r30.s64 = ctx.r3.s64 + 60;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8264A8E8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r30,r30
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8264a8f8
	if (ctx.cr6.eq) goto loc_8264A8F8;
	// twi 31,r0,22
loc_8264A8F8:
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
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
	// beq cr6,0x8264a954
	if (ctx.cr6.eq) goto loc_8264A954;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8264a924
	if (!ctx.cr6.eq) goto loc_8264A924;
	// twi 31,r0,22
loc_8264A924:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264A93C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8264a94c
	if (!ctx.cr6.eq) goto loc_8264A94C;
	// twi 31,r0,22
loc_8264A94C:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8264a8e8
	goto loc_8264A8E8;
loc_8264A954:
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

__attribute__((alias("__imp__sub_8264A970"))) PPC_WEAK_FUNC(sub_8264A970);
PPC_FUNC_IMPL(__imp__sub_8264A970) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r3,72
	ctx.r30.s64 = ctx.r3.s64 + 72;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8264A998:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r30,r30
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8264a9a8
	if (ctx.cr6.eq) goto loc_8264A9A8;
	// twi 31,r0,22
loc_8264A9A8:
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
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
	// beq cr6,0x8264aa24
	if (ctx.cr6.eq) goto loc_8264AA24;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8264a9d4
	if (!ctx.cr6.eq) goto loc_8264A9D4;
	// twi 31,r0,22
loc_8264A9D4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264aa00
	if (ctx.cr6.eq) goto loc_8264AA00;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8264aa00
	if (ctx.cr6.eq) goto loc_8264AA00;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82618d60
	ctx.lr = 0x8264A9FC;
	sub_82618D60(ctx, base);
	// b 0x8264aa0c
	goto loc_8264AA0C;
loc_8264AA00:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8264a5b8
	ctx.lr = 0x8264AA0C;
	sub_8264A5B8(ctx, base);
loc_8264AA0C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8264aa1c
	if (!ctx.cr6.eq) goto loc_8264AA1C;
	// twi 31,r0,22
loc_8264AA1C:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8264a998
	goto loc_8264A998;
loc_8264AA24:
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

__attribute__((alias("__imp__sub_8264AA40"))) PPC_WEAK_FUNC(sub_8264AA40);
PPC_FUNC_IMPL(__imp__sub_8264AA40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,72
	ctx.r30.s64 = ctx.r3.s64 + 72;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8264AA60:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r30,r30
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8264aa70
	if (ctx.cr6.eq) goto loc_8264AA70;
	// twi 31,r0,22
loc_8264AA70:
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
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
	// beq cr6,0x8264ab08
	if (ctx.cr6.eq) goto loc_8264AB08;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8264aa9c
	if (!ctx.cr6.eq) goto loc_8264AA9C;
	// twi 31,r0,22
loc_8264AA9C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264aad0
	if (ctx.cr6.eq) goto loc_8264AAD0;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8264aad0
	if (ctx.cr6.eq) goto loc_8264AAD0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264AACC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8264aaf0
	goto loc_8264AAF0;
loc_8264AAD0:
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264aaf0
	if (ctx.cr6.eq) goto loc_8264AAF0;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264aaf0
	if (ctx.cr6.eq) goto loc_8264AAF0;
	// bl 0x82668ca8
	ctx.lr = 0x8264AAF0;
	sub_82668CA8(ctx, base);
loc_8264AAF0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8264ab00
	if (!ctx.cr6.eq) goto loc_8264AB00;
	// twi 31,r0,22
loc_8264AB00:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8264aa60
	goto loc_8264AA60;
loc_8264AB08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264AB20"))) PPC_WEAK_FUNC(sub_8264AB20);
PPC_FUNC_IMPL(__imp__sub_8264AB20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x8264AB28;
	__savegprlr_26(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r3,76
	ctx.r3.s64 = 76;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// bl 0x825e6f70
	ctx.lr = 0x8264AB4C;
	sub_825E6F70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264ab64
	if (ctx.cr6.eq) goto loc_8264AB64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8264a130
	ctx.lr = 0x8264AB5C;
	sub_8264A130(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8264ab68
	goto loc_8264AB68;
loc_8264AB64:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8264AB68:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r4,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r4.u32);
	// bl 0x8264a428
	ctx.lr = 0x8264AB84;
	sub_8264A428(ctx, base);
	// addi r29,r31,20
	ctx.r29.s64 = ctx.r31.s64 + 20;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264ac38
	if (ctx.cr6.eq) goto loc_8264AC38;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264ac38
	if (ctx.cr6.eq) goto loc_8264AC38;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x826691d8
	ctx.lr = 0x8264ABBC;
	sub_826691D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8264a7a0
	ctx.lr = 0x8264ABC8;
	sub_8264A7A0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264ac38
	if (ctx.cr6.eq) goto loc_8264AC38;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264ac38
	if (ctx.cr6.eq) goto loc_8264AC38;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x825f1d78
	ctx.lr = 0x8264ABF0;
	sub_825F1D78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825d2bc0
	ctx.lr = 0x8264AC00;
	sub_825D2BC0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x825d2cb0
	ctx.lr = 0x8264AC10;
	sub_825D2CB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82168c48
	ctx.lr = 0x8264AC20;
	sub_82168C48(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264AC38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8264AC38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8264AC48"))) PPC_WEAK_FUNC(sub_8264AC48);
PPC_FUNC_IMPL(__imp__sub_8264AC48) {
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
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264ad20
	if (ctx.cr6.eq) goto loc_8264AD20;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264ad20
	if (ctx.cr6.eq) goto loc_8264AD20;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264aca8
	if (ctx.cr6.eq) goto loc_8264ACA8;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8264aca8
	if (ctx.cr6.eq) goto loc_8264ACA8;
	// stw r11,-14496(r30)
	PPC_STORE_U32(ctx.r30.u32 + -14496, ctx.r11.u32);
loc_8264ACA8:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8264a810
	ctx.lr = 0x8264ACB4;
	sub_8264A810(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264ace8
	if (ctx.cr6.eq) goto loc_8264ACE8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264ace8
	if (ctx.cr6.eq) goto loc_8264ACE8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264ACE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-14496(r30)
	PPC_STORE_U32(ctx.r30.u32 + -14496, ctx.r11.u32);
loc_8264ACE8:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8264ad20
	if (!ctx.cr6.gt) goto loc_8264AD20;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264ad0c
	if (!ctx.cr6.eq) goto loc_8264AD0C;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8264a970
	ctx.lr = 0x8264AD0C;
	sub_8264A970(ctx, base);
loc_8264AD0C:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264ad20
	if (!ctx.cr6.eq) goto loc_8264AD20;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x8264aa40
	ctx.lr = 0x8264AD20;
	sub_8264AA40(ctx, base);
loc_8264AD20:
	// lbz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264ad38
	if (ctx.cr6.eq) goto loc_8264AD38;
	// lfs f0,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
loc_8264AD38:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8264ad54
	if (ctx.cr6.gt) goto loc_8264AD54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8264a018
	ctx.lr = 0x8264AD54;
	sub_8264A018(ctx, base);
loc_8264AD54:
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

__attribute__((alias("__imp__sub_8264AD70"))) PPC_WEAK_FUNC(sub_8264AD70);
PPC_FUNC_IMPL(__imp__sub_8264AD70) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,76
	ctx.r4.s64 = ctx.r31.s64 + 76;
	// bl 0x8262b468
	ctx.lr = 0x8264AD98;
	sub_8262B468(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264adcc
	if (ctx.cr6.eq) goto loc_8264ADCC;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264adcc
	if (ctx.cr6.eq) goto loc_8264ADCC;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8264a970
	ctx.lr = 0x8264ADBC;
	sub_8264A970(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8264a8c0
	ctx.lr = 0x8264ADC8;
	sub_8264A8C0(ctx, base);
	// b 0x8264add4
	goto loc_8264ADD4;
loc_8264ADCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825813a0
	ctx.lr = 0x8264ADD4;
	sub_825813A0(ctx, base);
loc_8264ADD4:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264ade4
	if (ctx.cr6.eq) goto loc_8264ADE4;
	// bl 0x821601b8
	ctx.lr = 0x8264ADE4;
	sub_821601B8(ctx, base);
loc_8264ADE4:
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

__attribute__((alias("__imp__sub_8264AE00"))) PPC_WEAK_FUNC(sub_8264AE00);
PPC_FUNC_IMPL(__imp__sub_8264AE00) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,76
	ctx.r4.s64 = ctx.r31.s64 + 76;
	// bl 0x8262b468
	ctx.lr = 0x8264AE20;
	sub_8262B468(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264ae44
	if (ctx.cr6.eq) goto loc_8264AE44;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264ae44
	if (ctx.cr6.eq) goto loc_8264AE44;
	// bl 0x8264aa40
	ctx.lr = 0x8264AE40;
	sub_8264AA40(ctx, base);
	// b 0x8264ae4c
	goto loc_8264AE4C;
loc_8264AE44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825813a0
	ctx.lr = 0x8264AE4C;
	sub_825813A0(ctx, base);
loc_8264AE4C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264ae5c
	if (ctx.cr6.eq) goto loc_8264AE5C;
	// bl 0x821601b8
	ctx.lr = 0x8264AE5C;
	sub_821601B8(ctx, base);
loc_8264AE5C:
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

__attribute__((alias("__imp__sub_8264AE70"))) PPC_WEAK_FUNC(sub_8264AE70);
PPC_FUNC_IMPL(__imp__sub_8264AE70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8264aec4
	if (ctx.cr6.eq) goto loc_8264AEC4;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264ae9c
	if (ctx.cr6.eq) goto loc_8264AE9C;
	// bl 0x821601b8
	ctx.lr = 0x8264AE9C;
	sub_821601B8(ctx, base);
loc_8264AE9C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264aeac
	if (ctx.cr6.eq) goto loc_8264AEAC;
	// bl 0x821601b8
	ctx.lr = 0x8264AEAC;
	sub_821601B8(ctx, base);
loc_8264AEAC:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264aebc
	if (ctx.cr6.eq) goto loc_8264AEBC;
	// bl 0x821601b8
	ctx.lr = 0x8264AEBC;
	sub_821601B8(ctx, base);
loc_8264AEBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82186190
	ctx.lr = 0x8264AEC4;
	sub_82186190(ctx, base);
loc_8264AEC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264AED8"))) PPC_WEAK_FUNC(sub_8264AED8);
PPC_FUNC_IMPL(__imp__sub_8264AED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x8264af2c
	if (ctx.cr6.eq) goto loc_8264AF2C;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264af04
	if (ctx.cr6.eq) goto loc_8264AF04;
	// bl 0x821601b8
	ctx.lr = 0x8264AF04;
	sub_821601B8(ctx, base);
loc_8264AF04:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264af14
	if (ctx.cr6.eq) goto loc_8264AF14;
	// bl 0x821601b8
	ctx.lr = 0x8264AF14;
	sub_821601B8(ctx, base);
loc_8264AF14:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264af24
	if (ctx.cr6.eq) goto loc_8264AF24;
	// bl 0x821601b8
	ctx.lr = 0x8264AF24;
	sub_821601B8(ctx, base);
loc_8264AF24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82186190
	ctx.lr = 0x8264AF2C;
	sub_82186190(ctx, base);
loc_8264AF2C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264AF40"))) PPC_WEAK_FUNC(sub_8264AF40);
PPC_FUNC_IMPL(__imp__sub_8264AF40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8264AF48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8264afa4
	if (ctx.cr6.eq) goto loc_8264AFA4;
loc_8264AF78:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264af8c
	if (ctx.cr6.eq) goto loc_8264AF8C;
	// bl 0x821601b8
	ctx.lr = 0x8264AF8C;
	sub_821601B8(ctx, base);
loc_8264AF8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82186190
	ctx.lr = 0x8264AF94;
	sub_82186190(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8264af78
	if (!ctx.cr6.eq) goto loc_8264AF78;
loc_8264AFA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8264AFB0"))) PPC_WEAK_FUNC(sub_8264AFB0);
PPC_FUNC_IMPL(__imp__sub_8264AFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8264AFE0;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264b00c
	if (ctx.cr6.eq) goto loc_8264B00C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-3520
	ctx.r10.s64 = ctx.r11.s64 + -3520;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8264b010
	goto loc_8264B010;
loc_8264B00C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8264B010:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8264b048
	if (!ctx.cr6.eq) goto loc_8264B048;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,151
	ctx.r3.s64 = ctx.r1.s64 + 151;
	// bl 0x8264ae70
	ctx.lr = 0x8264B028;
	sub_8264AE70(ctx, base);
	// lis r10,-32071
	ctx.r10.s64 = -2101805056;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,-28864(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28864);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x8264B048;
	sub_821E0968(ctx, base);
loc_8264B048:
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

__attribute__((alias("__imp__sub_8264B068"))) PPC_WEAK_FUNC(sub_8264B068);
PPC_FUNC_IMPL(__imp__sub_8264B068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8264B070;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,72
	ctx.r28.s64 = ctx.r3.s64 + 72;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8264B084:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r28,r28
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8264b094
	if (ctx.cr6.eq) goto loc_8264B094;
	// twi 31,r0,22
loc_8264B094:
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
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
	// beq cr6,0x8264b130
	if (ctx.cr6.eq) goto loc_8264B130;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8264b0c0
	if (!ctx.cr6.eq) goto loc_8264B0C0;
	// twi 31,r0,22
loc_8264B0C0:
	// lwz r31,8(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264b0e0
	if (ctx.cr6.eq) goto loc_8264B0E0;
	// bl 0x821601b8
	ctx.lr = 0x8264B0E0;
	sub_821601B8(ctx, base);
loc_8264B0E0:
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264b0fc
	if (ctx.cr6.eq) goto loc_8264B0FC;
	// bl 0x821601b8
	ctx.lr = 0x8264B0FC;
	sub_821601B8(ctx, base);
loc_8264B0FC:
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
	// beq cr6,0x8264b118
	if (ctx.cr6.eq) goto loc_8264B118;
	// bl 0x821601b8
	ctx.lr = 0x8264B118;
	sub_821601B8(ctx, base);
loc_8264B118:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8264b128
	if (!ctx.cr6.eq) goto loc_8264B128;
	// twi 31,r0,22
loc_8264B128:
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x8264b084
	goto loc_8264B084;
loc_8264B130:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8264af40
	ctx.lr = 0x8264B138;
	sub_8264AF40(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8264B140"))) PPC_WEAK_FUNC(sub_8264B140);
PPC_FUNC_IMPL(__imp__sub_8264B140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8264B148;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8264b068
	ctx.lr = 0x8264B154;
	sub_8264B068(ctx, base);
	// addi r29,r31,48
	ctx.r29.s64 = ctx.r31.s64 + 48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8264a730
	ctx.lr = 0x8264B160;
	sub_8264A730(ctx, base);
	// addi r28,r31,60
	ctx.r28.s64 = ctx.r31.s64 + 60;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8264a730
	ctx.lr = 0x8264B16C;
	sub_8264A730(ctx, base);
	// addi r27,r31,72
	ctx.r27.s64 = ctx.r31.s64 + 72;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8264af40
	ctx.lr = 0x8264B178;
	sub_8264AF40(ctx, base);
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x8264B180;
	sub_82186190(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r30.u32);
	// bl 0x8264a730
	ctx.lr = 0x8264B190;
	sub_8264A730(ctx, base);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x8264B198;
	sub_82186190(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
	// bl 0x8264a730
	ctx.lr = 0x8264B1A4;
	sub_8264A730(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x8264B1AC;
	sub_82186190(ctx, base);
	// addi r28,r31,32
	ctx.r28.s64 = ctx.r31.s64 + 32;
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264b1d8
	if (ctx.cr6.eq) goto loc_8264B1D8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x82279350
	ctx.lr = 0x8264B1D0;
	sub_82279350(ctx, base);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x8264B1D8;
	sub_82186190(ctx, base);
loc_8264B1D8:
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
	// stw r30,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r30.u32);
	// stw r30,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r30.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264b20c
	if (ctx.cr6.eq) goto loc_8264B20C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82279350
	ctx.lr = 0x8264B204;
	sub_82279350(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x8264B20C;
	sub_82186190(ctx, base);
loc_8264B20C:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264b228
	if (ctx.cr6.eq) goto loc_8264B228;
	// bl 0x82581e38
	ctx.lr = 0x8264B228;
	sub_82581E38(ctx, base);
loc_8264B228:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264b238
	if (ctx.cr6.eq) goto loc_8264B238;
	// bl 0x82581e38
	ctx.lr = 0x8264B238;
	sub_82581E38(ctx, base);
loc_8264B238:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264b248
	if (ctx.cr6.eq) goto loc_8264B248;
	// bl 0x821601b8
	ctx.lr = 0x8264B248;
	sub_821601B8(ctx, base);
loc_8264B248:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8264B250"))) PPC_WEAK_FUNC(sub_8264B250);
PPC_FUNC_IMPL(__imp__sub_8264B250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x8264B258;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r27,172(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r28,4(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x82186158
	ctx.lr = 0x8264B278;
	sub_82186158(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8264b288
	if (ctx.cr6.eq) goto loc_8264B288;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_8264B288:
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8264b298
	if (ctx.cr6.eq) goto loc_8264B298;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_8264B298:
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264b2c0
	if (ctx.cr6.eq) goto loc_8264B2C0;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// beq cr6,0x8264b2c0
	if (ctx.cr6.eq) goto loc_8264B2C0;
	// bl 0x82160140
	ctx.lr = 0x8264B2C0;
	sub_82160140(ctx, base);
loc_8264B2C0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82414df8
	ctx.lr = 0x8264B2CC;
	sub_82414DF8(ctx, base);
	// stw r31,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r31.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8264B2E0"))) PPC_WEAK_FUNC(sub_8264B2E0);
PPC_FUNC_IMPL(__imp__sub_8264B2E0) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264b308
	if (!ctx.cr6.eq) goto loc_8264B308;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8264b314
	goto loc_8264B314;
loc_8264B308:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
loc_8264B314:
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8264b368
	if (!ctx.cr6.lt) goto loc_8264B368;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264b32c
	if (!ctx.cr6.eq) goto loc_8264B32C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8264b338
	goto loc_8264B338;
loc_8264B32C:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
loc_8264B338:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8264b348
	if (!ctx.cr6.gt) goto loc_8264B348;
	// twi 31,r0,22
loc_8264B348:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// subf r5,r9,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r9.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x822d8de8
	ctx.lr = 0x8264B364;
	sub_822D8DE8(ctx, base);
	// b 0x8264b400
	goto loc_8264B400;
loc_8264B368:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264b400
	if (ctx.cr6.eq) goto loc_8264B400;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8264b400
	if (!ctx.cr6.lt) goto loc_8264B400;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8264b390
	if (!ctx.cr6.gt) goto loc_8264B390;
	// twi 31,r0,22
loc_8264B390:
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8264b3a8
	if (!ctx.cr6.gt) goto loc_8264B3A8;
	// twi 31,r0,22
loc_8264B3A8:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bgt cr6,0x8264b3d8
	if (ctx.cr6.gt) goto loc_8264B3D8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8264b3dc
	if (!ctx.cr6.lt) goto loc_8264B3DC;
loc_8264B3D8:
	// twi 31,r0,22
loc_8264B3DC:
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x8241e620
	ctx.lr = 0x8264B400;
	sub_8241E620(ctx, base);
loc_8264B400:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264b410
	if (ctx.cr6.eq) goto loc_8264B410;
	// bl 0x82581e38
	ctx.lr = 0x8264B410;
	sub_82581E38(ctx, base);
loc_8264B410:
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

extern void MovieVoiceLang(PPCRegister& r19);

__attribute__((alias("__imp__sub_8264B428"))) PPC_WEAK_FUNC(sub_8264B428);
PPC_FUNC_IMPL(__imp__sub_8264B428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de898
	ctx.lr = 0x8264B430;
	__savegprlr_16(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264B450;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825fc198
	ctx.lr = 0x8264B458;
	sub_825FC198(ctx, base);
	// li r17,0
	ctx.r17.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r16,r3,8
	ctx.r16.s64 = ctx.r3.s64 + 8;
	// bne cr6,0x8264b46c
	if (!ctx.cr6.eq) goto loc_8264B46C;
	// mr r16,r17
	ctx.r16.u64 = ctx.r17.u64;
loc_8264B46C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264B480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264b4e0
	if (ctx.cr6.eq) goto loc_8264B4E0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,-3676
	ctx.r10.s64 = ctx.r11.s64 + -3676;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264b4e0
	if (ctx.cr6.eq) goto loc_8264B4E0;
loc_8264B4A0:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8264B4A4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8264b4c8
	if (ctx.cr6.eq) goto loc_8264B4C8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8264b4a4
	if (ctx.cr6.eq) goto loc_8264B4A4;
loc_8264B4C8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8264b64c
	if (ctx.cr6.eq) goto loc_8264B64C;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264b4a0
	if (!ctx.cr6.eq) goto loc_8264B4A0;
loc_8264B4E0:
	// lis r19,-32768
	ctx.r19.s64 = -2147483648;
loc_8264B4E4:
	// lwz r10,0(r31)
	MovieVoiceLang(ctx.r19);
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-25208
	ctx.r4.s64 = ctx.r11.s64 + -25208;
	// lwz r11,268(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264B500;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264ba9c
	if (ctx.cr6.eq) goto loc_8264BA9C;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8264ba9c
	if (ctx.cr6.eq) goto loc_8264BA9C;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x8264ba9c
	if (ctx.cr6.eq) goto loc_8264BA9C;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r10,-3220
	ctx.r3.s64 = ctx.r10.s64 + -3220;
	// bl 0x821e0968
	ctx.lr = 0x8264B53C;
	sub_821E0968(ctx, base);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r4,48(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8264b558
	if (ctx.cr6.eq) goto loc_8264B558;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-3232
	ctx.r3.s64 = ctx.r11.s64 + -3232;
	// bl 0x821e0968
	ctx.lr = 0x8264B558;
	sub_821E0968(ctx, base);
loc_8264B558:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8264b574
	if (ctx.cr6.eq) goto loc_8264B574;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-3244
	ctx.r3.s64 = ctx.r11.s64 + -3244;
	// bl 0x821e0968
	ctx.lr = 0x8264B574;
	sub_821E0968(ctx, base);
loc_8264B574:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8264b590
	if (ctx.cr6.eq) goto loc_8264B590;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-3256
	ctx.r3.s64 = ctx.r11.s64 + -3256;
	// bl 0x821e0968
	ctx.lr = 0x8264B590;
	sub_821E0968(ctx, base);
loc_8264B590:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8264b5ac
	if (ctx.cr6.eq) goto loc_8264B5AC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-3272
	ctx.r3.s64 = ctx.r11.s64 + -3272;
	// bl 0x821e0968
	ctx.lr = 0x8264B5AC;
	sub_821E0968(ctx, base);
loc_8264B5AC:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r4,64(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8264b5c8
	if (ctx.cr6.eq) goto loc_8264B5C8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-3284
	ctx.r3.s64 = ctx.r11.s64 + -3284;
	// bl 0x821e0968
	ctx.lr = 0x8264B5C8;
	sub_821E0968(ctx, base);
loc_8264B5C8:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8264b670
	if (ctx.cr6.eq) goto loc_8264B670;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r29,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8264b670
	if (ctx.cr6.eq) goto loc_8264B670;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// addi r28,r11,-3304
	ctx.r28.s64 = ctx.r11.s64 + -3304;
loc_8264B5FC:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8264b654
	if (ctx.cr6.eq) goto loc_8264B654;
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x8264b654
	if (!ctx.cr6.gt) goto loc_8264B654;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8264b640
	if (ctx.cr6.eq) goto loc_8264B640;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8264b644
	if (ctx.cr6.lt) goto loc_8264B644;
loc_8264B640:
	// twi 31,r0,22
loc_8264B644:
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// b 0x8264b658
	goto loc_8264B658;
loc_8264B64C:
	// lwz r19,4(r7)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x8264b4e4
	goto loc_8264B4E4;
loc_8264B654:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
loc_8264B658:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821e0968
	ctx.lr = 0x8264B660;
	sub_821E0968(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8264b5fc
	if (ctx.cr6.lt) goto loc_8264B5FC;
loc_8264B670:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8264b710
	if (ctx.cr6.eq) goto loc_8264B710;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r29,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8264b710
	if (ctx.cr6.eq) goto loc_8264B710;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// addi r28,r11,-3324
	ctx.r28.s64 = ctx.r11.s64 + -3324;
loc_8264B6A4:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8264b6f4
	if (ctx.cr6.eq) goto loc_8264B6F4;
	// lwz r9,92(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x8264b6f4
	if (!ctx.cr6.gt) goto loc_8264B6F4;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8264b6e8
	if (ctx.cr6.eq) goto loc_8264B6E8;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8264b6ec
	if (ctx.cr6.lt) goto loc_8264B6EC;
loc_8264B6E8:
	// twi 31,r0,22
loc_8264B6EC:
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// b 0x8264b6f8
	goto loc_8264B6F8;
loc_8264B6F4:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
loc_8264B6F8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821e0968
	ctx.lr = 0x8264B700;
	sub_821E0968(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8264b6a4
	if (ctx.cr6.lt) goto loc_8264B6A4;
loc_8264B710:
	// addi r20,r21,8
	ctx.r20.s64 = ctx.r21.s64 + 8;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264ba9c
	if (ctx.cr6.eq) goto loc_8264BA9C;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8264ba9c
	if (ctx.cr6.eq) goto loc_8264BA9C;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8264ba9c
	if (ctx.cr6.eq) goto loc_8264BA9C;
	// lwz r24,112(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8264ba9c
	if (ctx.cr6.eq) goto loc_8264BA9C;
	// clrlwi r11,r18,24
	ctx.r11.u64 = ctx.r18.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264b764
	if (ctx.cr6.eq) goto loc_8264B764;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r6,r11,18724
	ctx.r6.s64 = ctx.r11.s64 + 18724;
	// b 0x8264b76c
	goto loc_8264B76C;
loc_8264B764:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r6,r11,18720
	ctx.r6.s64 = ctx.r11.s64 + 18720;
loc_8264B76C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r19,2
	ctx.r5.s64 = ctx.r19.s64 + 2;
	// addi r3,r11,-3348
	ctx.r3.s64 = ctx.r11.s64 + -3348;
	// addi r4,r19,1
	ctx.r4.s64 = ctx.r19.s64 + 1;
	// bl 0x821e0968
	ctx.lr = 0x8264B780;
	sub_821E0968(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x828f63e8
	ctx.lr = 0x8264B788;
	sub_828F63E8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x8264ba9c
	if (!ctx.cr6.gt) goto loc_8264BA9C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r26,r25,-1
	ctx.r26.s64 = ctx.r25.s64 + -1;
	// addi r27,r11,-3372
	ctx.r27.s64 = ctx.r11.s64 + -3372;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r23,r11,24356
	ctx.r23.s64 = ctx.r11.s64 + 24356;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r22,r11,-3380
	ctx.r22.s64 = ctx.r11.s64 + -3380;
loc_8264B7B4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x828f6918
	ctx.lr = 0x8264B7C4;
	sub_828F6918(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8264b8f4
	if (ctx.cr6.eq) goto loc_8264B8F4;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8264b8e4
	if (ctx.cr6.eq) goto loc_8264B8E4;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8264b8cc
	if (ctx.cr6.eq) goto loc_8264B8CC;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8264b8f4
	if (!ctx.cr6.eq) goto loc_8264B8F4;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82664bc8
	ctx.lr = 0x8264B804;
	sub_82664BC8(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264b8c4
	if (ctx.cr6.eq) goto loc_8264B8C4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264b8b8
	if (ctx.cr6.eq) goto loc_8264B8B8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x82659610
	ctx.lr = 0x8264B82C;
	sub_82659610(ctx, base);
	// addi r3,r21,48
	ctx.r3.s64 = ctx.r21.s64 + 48;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x8261f540
	ctx.lr = 0x8264B84C;
	sub_8261F540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82631328
	ctx.lr = 0x8264B854;
	sub_82631328(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,0(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// bl 0x825f1d78
	ctx.lr = 0x8264B860;
	sub_825F1D78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825d2bc0
	ctx.lr = 0x8264B870;
	sub_825D2BC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x825d2cb0
	ctx.lr = 0x8264B880;
	sub_825D2CB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82168c48
	ctx.lr = 0x8264B890;
	sub_82168C48(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264B8A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x821ef318
	ctx.lr = 0x8264B8B4;
	sub_821EF318(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_8264B8B8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264b8c4
	if (ctx.cr6.eq) goto loc_8264B8C4;
	// bl 0x82631328
	ctx.lr = 0x8264B8C4;
	sub_82631328(ctx, base);
loc_8264B8C4:
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
	// b 0x8264b8f4
	goto loc_8264B8F4;
loc_8264B8CC:
	// and r11,r19,r29
	ctx.r11.u64 = ctx.r19.u64 & ctx.r29.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// and r31,r11,r18
	ctx.r31.u64 = ctx.r11.u64 & ctx.r18.u64;
	// b 0x8264b8f4
	goto loc_8264B8F4;
loc_8264B8E4:
	// and r11,r19,r29
	ctx.r11.u64 = ctx.r19.u64 & ctx.r29.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r31,r11,1
	ctx.r31.u64 = ctx.r11.u64 ^ 1;
loc_8264B8F4:
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8264b910
	if (!ctx.cr6.eq) goto loc_8264B910;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8264b914
	if (!ctx.cr6.eq) goto loc_8264B914;
loc_8264B910:
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
loc_8264B914:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821e0968
	ctx.lr = 0x8264B928;
	sub_821E0968(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8264ba90
	if (ctx.cr6.eq) goto loc_8264BA90;
	// rlwinm r11,r29,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264ba18
	if (!ctx.cr6.eq) goto loc_8264BA18;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82664bc8
	ctx.lr = 0x8264B954;
	sub_82664BC8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264ba90
	if (ctx.cr6.eq) goto loc_8264BA90;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264ba08
	if (ctx.cr6.eq) goto loc_8264BA08;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x82659610
	ctx.lr = 0x8264B97C;
	sub_82659610(ctx, base);
	// addi r3,r21,60
	ctx.r3.s64 = ctx.r21.s64 + 60;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x8261f540
	ctx.lr = 0x8264B99C;
	sub_8261F540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82631328
	ctx.lr = 0x8264B9A4;
	sub_82631328(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,0(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// bl 0x825f1d78
	ctx.lr = 0x8264B9B0;
	sub_825F1D78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825d2bc0
	ctx.lr = 0x8264B9C0;
	sub_825D2BC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x825d2cb0
	ctx.lr = 0x8264B9D0;
	sub_825D2CB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82168c48
	ctx.lr = 0x8264B9E0;
	sub_82168C48(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264B9F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821ef318
	ctx.lr = 0x8264BA04;
	sub_821EF318(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8264BA08:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264ba90
	if (ctx.cr6.eq) goto loc_8264BA90;
	// bl 0x82631328
	ctx.lr = 0x8264BA14;
	sub_82631328(ctx, base);
	// b 0x8264ba90
	goto loc_8264BA90;
loc_8264BA18:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82186158
	ctx.lr = 0x8264BA20;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264ba44
	if (ctx.cr6.eq) goto loc_8264BA44;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x8264ab20
	ctx.lr = 0x8264BA3C;
	sub_8264AB20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8264ba48
	goto loc_8264BA48;
loc_8264BA44:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
loc_8264BA48:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stb r17,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r17.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8264afb0
	ctx.lr = 0x8264BA60;
	sub_8264AFB0(ctx, base);
	// addi r3,r21,72
	ctx.r3.s64 = ctx.r21.s64 + 72;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x8264b250
	ctx.lr = 0x8264BA80;
	sub_8264B250(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264ba90
	if (ctx.cr6.eq) goto loc_8264BA90;
	// bl 0x821601b8
	ctx.lr = 0x8264BA90;
	sub_821601B8(ctx, base);
loc_8264BA90:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x8264b7b4
	if (ctx.cr6.lt) goto loc_8264B7B4;
loc_8264BA9C:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x826de8e8
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8264BAA8"))) PPC_WEAK_FUNC(sub_8264BAA8);
PPC_FUNC_IMPL(__imp__sub_8264BAA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8264BAB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82581078
	ctx.lr = 0x8264BABC;
	sub_82581078(ctx, base);
	// lbz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264bbb0
	if (!ctx.cr6.eq) goto loc_8264BBB0;
	// addi r29,r28,80
	ctx.r29.s64 = ctx.r28.s64 + 80;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264bbb0
	if (ctx.cr6.eq) goto loc_8264BBB0;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264bbb0
	if (ctx.cr6.eq) goto loc_8264BBB0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8264bbb0
	if (ctx.cr6.eq) goto loc_8264BBB0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8264b428
	ctx.lr = 0x8264BAFC;
	sub_8264B428(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8264bbb0
	if (!ctx.cr6.gt) goto loc_8264BBB0;
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82186158
	ctx.lr = 0x8264BB14;
	sub_82186158(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8264bb50
	if (ctx.cr6.eq) goto loc_8264BB50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264BB38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8264a308
	ctx.lr = 0x8264BB48;
	sub_8264A308(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8264bb54
	goto loc_8264BB54;
loc_8264BB50:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8264BB54:
	// li r3,84
	ctx.r3.s64 = 84;
	// stw r11,100(r28)
	PPC_STORE_U32(ctx.r28.u32 + 100, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x8264BB60;
	sub_82186158(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8264bba8
	if (ctx.cr6.eq) goto loc_8264BBA8;
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
	ctx.lr = 0x8264BB84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8264a398
	ctx.lr = 0x8264BB94;
	sub_8264A398(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,104(r28)
	PPC_STORE_U32(ctx.r28.u32 + 104, ctx.r3.u32);
	// stb r11,88(r28)
	PPC_STORE_U8(ctx.r28.u32 + 88, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_8264BBA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,104(r28)
	PPC_STORE_U32(ctx.r28.u32 + 104, ctx.r3.u32);
loc_8264BBB0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,88(r28)
	PPC_STORE_U8(ctx.r28.u32 + 88, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8264BBC0"))) PPC_WEAK_FUNC(sub_8264BBC0);
PPC_FUNC_IMPL(__imp__sub_8264BBC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b8
	ctx.lr = 0x8264BBC8;
	__savegprlr_24(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r3.u32);
	// beq cr6,0x8264bbf0
	if (ctx.cr6.eq) goto loc_8264BBF0;
	// bl 0x82160140
	ctx.lr = 0x8264BBF0;
	sub_82160140(ctx, base);
loc_8264BBF0:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r26,8
	ctx.r30.s64 = ctx.r26.s64 + 8;
	// addi r27,r26,12
	ctx.r27.s64 = ctx.r26.s64 + 12;
	// addi r28,r26,16
	ctx.r28.s64 = ctx.r26.s64 + 16;
	// addi r24,r26,32
	ctx.r24.s64 = ctx.r26.s64 + 32;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// stw r31,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r31.u32);
	// stw r31,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r31.u32);
	// stw r31,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r31.u32);
	// stw r31,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r31.u32);
	// bl 0x82186158
	ctx.lr = 0x8264BC2C;
	sub_82186158(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264bc3c
	if (ctx.cr6.eq) goto loc_8264BC3C;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_8264BC3C:
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8264bc4c
	if (ctx.cr6.eq) goto loc_8264BC4C;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8264BC4C:
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r11,52(r26)
	PPC_STORE_U32(ctx.r26.u32 + 52, ctx.r11.u32);
	// stw r31,56(r26)
	PPC_STORE_U32(ctx.r26.u32 + 56, ctx.r31.u32);
	// bl 0x82186158
	ctx.lr = 0x8264BC5C;
	sub_82186158(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264bc6c
	if (ctx.cr6.eq) goto loc_8264BC6C;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_8264BC6C:
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8264bc7c
	if (ctx.cr6.eq) goto loc_8264BC7C;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8264BC7C:
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r11,64(r26)
	PPC_STORE_U32(ctx.r26.u32 + 64, ctx.r11.u32);
	// stw r31,68(r26)
	PPC_STORE_U32(ctx.r26.u32 + 68, ctx.r31.u32);
	// bl 0x82186158
	ctx.lr = 0x8264BC8C;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264bc98
	if (ctx.cr6.eq) goto loc_8264BC98;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
loc_8264BC98:
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264bca8
	if (ctx.cr6.eq) goto loc_8264BCA8;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_8264BCA8:
	// stw r3,76(r26)
	PPC_STORE_U32(ctx.r26.u32 + 76, ctx.r3.u32);
	// stw r31,80(r26)
	PPC_STORE_U32(ctx.r26.u32 + 80, ctx.r31.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264c0a4
	if (ctx.cr6.eq) goto loc_8264C0A4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264c0a4
	if (ctx.cr6.eq) goto loc_8264C0A4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8264c0a4
	if (ctx.cr6.eq) goto loc_8264C0A4;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264BCE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8264c0a4
	if (ctx.cr6.eq) goto loc_8264C0A4;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x821620e8
	ctx.lr = 0x8264BD04;
	sub_821620E8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82642fc8
	ctx.lr = 0x8264BD10;
	sub_82642FC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823032b8
	ctx.lr = 0x8264BD1C;
	sub_823032B8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264bd2c
	if (ctx.cr6.eq) goto loc_8264BD2C;
	// bl 0x82581e38
	ctx.lr = 0x8264BD2C;
	sub_82581E38(ctx, base);
loc_8264BD2C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825fc7b8
	ctx.lr = 0x8264BD34;
	sub_825FC7B8(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264bde0
	if (ctx.cr6.eq) goto loc_8264BDE0;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264BD58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,64(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x821620e8
	ctx.lr = 0x8264BD6C;
	sub_821620E8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825ee6c0
	ctx.lr = 0x8264BD80;
	sub_825EE6C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82163588
	ctx.lr = 0x8264BD8C;
	sub_82163588(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823032b8
	ctx.lr = 0x8264BD98;
	sub_823032B8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264bda8
	if (ctx.cr6.eq) goto loc_8264BDA8;
	// bl 0x82581e38
	ctx.lr = 0x8264BDA8;
	sub_82581E38(ctx, base);
loc_8264BDA8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825fc7b8
	ctx.lr = 0x8264BDB0;
	sub_825FC7B8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825fc7b8
	ctx.lr = 0x8264BDB8;
	sub_825FC7B8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264bde0
	if (ctx.cr6.eq) goto loc_8264BDE0;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264bde0
	if (ctx.cr6.eq) goto loc_8264BDE0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825ef500
	ctx.lr = 0x8264BDE0;
	sub_825EF500(ctx, base);
loc_8264BDE0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8264bf84
	if (ctx.cr6.eq) goto loc_8264BF84;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r27,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8264bf84
	if (ctx.cr6.eq) goto loc_8264BF84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8264b2e0
	ctx.lr = 0x8264BE18;
	sub_8264B2E0(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264BE30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264bf74
	if (ctx.cr6.eq) goto loc_8264BF74;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264bf74
	if (ctx.cr6.eq) goto loc_8264BF74;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264bf74
	if (ctx.cr6.eq) goto loc_8264BF74;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264bf74
	if (ctx.cr6.eq) goto loc_8264BF74;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8264bf74
	if (ctx.cr6.eq) goto loc_8264BF74;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_8264BE7C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x8264a080
	ctx.lr = 0x8264BE88;
	sub_8264A080(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821620e8
	ctx.lr = 0x8264BE94;
	sub_821620E8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8216f6f0
	ctx.lr = 0x8264BEA0;
	sub_8216F6F0(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264bec4
	if (ctx.cr6.eq) goto loc_8264BEC4;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8264bec8
	if (ctx.cr6.lt) goto loc_8264BEC8;
loc_8264BEC4:
	// twi 31,r0,22
loc_8264BEC8:
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x823032b8
	ctx.lr = 0x8264BED0;
	sub_823032B8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264bee0
	if (ctx.cr6.eq) goto loc_8264BEE0;
	// bl 0x82581e38
	ctx.lr = 0x8264BEE0;
	sub_82581E38(ctx, base);
loc_8264BEE0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825fc7b8
	ctx.lr = 0x8264BEE8;
	sub_825FC7B8(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264bf08
	if (ctx.cr6.eq) goto loc_8264BF08;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8264bf0c
	if (ctx.cr6.lt) goto loc_8264BF0C;
loc_8264BF08:
	// twi 31,r0,22
loc_8264BF0C:
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264bf64
	if (ctx.cr6.eq) goto loc_8264BF64;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264bf64
	if (ctx.cr6.eq) goto loc_8264BF64;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264bf48
	if (ctx.cr6.eq) goto loc_8264BF48;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8264bf4c
	if (ctx.cr6.lt) goto loc_8264BF4C;
loc_8264BF48:
	// twi 31,r0,22
loc_8264BF4C:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264BF64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8264BF64:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8264be7c
	if (ctx.cr6.lt) goto loc_8264BE7C;
loc_8264BF74:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264bf84
	if (ctx.cr6.eq) goto loc_8264BF84;
	// bl 0x821601b8
	ctx.lr = 0x8264BF84;
	sub_821601B8(ctx, base);
loc_8264BF84:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8264c088
	if (ctx.cr6.eq) goto loc_8264C088;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r28,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8264c088
	if (ctx.cr6.eq) goto loc_8264C088;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8264b2e0
	ctx.lr = 0x8264BFBC;
	sub_8264B2E0(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264BFD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264c088
	if (ctx.cr6.eq) goto loc_8264C088;
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264c088
	if (ctx.cr6.eq) goto loc_8264C088;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8264c088
	if (ctx.cr6.eq) goto loc_8264C088;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8264c088
	if (ctx.cr6.eq) goto loc_8264C088;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8264C008:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x8264a0d8
	ctx.lr = 0x8264C014;
	sub_8264A0D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821620e8
	ctx.lr = 0x8264C020;
	sub_821620E8(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825fe988
	ctx.lr = 0x8264C030;
	sub_825FE988(ctx, base);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264c054
	if (ctx.cr6.eq) goto loc_8264C054;
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8264c058
	if (ctx.cr6.lt) goto loc_8264C058;
loc_8264C054:
	// twi 31,r0,22
loc_8264C058:
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x823032b8
	ctx.lr = 0x8264C060;
	sub_823032B8(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264c070
	if (ctx.cr6.eq) goto loc_8264C070;
	// bl 0x82581e38
	ctx.lr = 0x8264C070;
	sub_82581E38(ctx, base);
loc_8264C070:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825fc7b8
	ctx.lr = 0x8264C078;
	sub_825FC7B8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8264c008
	if (ctx.cr6.lt) goto loc_8264C008;
loc_8264C088:
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-15120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -15120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8264c0a0
	if (!ctx.cr6.eq) goto loc_8264C0A0;
	// bl 0x82642018
	ctx.lr = 0x8264C09C;
	sub_82642018(ctx, base);
	// stw r3,-15120(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15120, ctx.r3.u32);
loc_8264C0A0:
	// bl 0x8265a198
	ctx.lr = 0x8264C0A4;
	sub_8265A198(ctx, base);
loc_8264C0A4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8264C0B0"))) PPC_WEAK_FUNC(sub_8264C0B0);
PPC_FUNC_IMPL(__imp__sub_8264C0B0) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addis r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -131072;
	// addic. r11,r11,12287
	ctx.xer.ca = ctx.r11.u32 > 4294955008;
	ctx.r11.s64 = ctx.r11.s64 + 12287;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8264c144
	if (ctx.cr0.eq) goto loc_8264C144;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8264c128
	if (ctx.cr6.eq) goto loc_8264C128;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8264c0f0
	if (ctx.cr6.eq) goto loc_8264C0F0;
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
loc_8264C0F0:
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264c14c
	if (ctx.cr6.eq) goto loc_8264C14C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264c14c
	if (ctx.cr6.eq) goto loc_8264C14C;
	// lfs f1,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8264a8c0
	ctx.lr = 0x8264C114;
	sub_8264A8C0(ctx, base);
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
loc_8264C128:
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// bl 0x8264a018
	ctx.lr = 0x8264C130;
	sub_8264A018(ctx, base);
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
loc_8264C144:
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// bl 0x8264baa8
	ctx.lr = 0x8264C14C;
	sub_8264BAA8(ctx, base);
loc_8264C14C:
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

__attribute__((alias("__imp__sub_8264C160"))) PPC_WEAK_FUNC(sub_8264C160);
PPC_FUNC_IMPL(__imp__sub_8264C160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8264C168;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r29,40
	ctx.r31.s64 = ctx.r29.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82283438
	ctx.lr = 0x8264C17C;
	sub_82283438(ctx, base);
	// li r30,4
	ctx.r30.s64 = 4;
loc_8264C180:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264c1a4
	if (ctx.cr6.eq) goto loc_8264C1A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264C1A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8264C1A4:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x8264c180
	if (!ctx.cr6.lt) goto loc_8264C180;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x8259d1a8
	ctx.lr = 0x8264C1B8;
	sub_8259D1A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8264C1C0"))) PPC_WEAK_FUNC(sub_8264C1C0);
PPC_FUNC_IMPL(__imp__sub_8264C1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8264C1C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82581500
	ctx.lr = 0x8264C1E0;
	sub_82581500(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r10,-3180
	ctx.r10.s64 = ctx.r10.s64 + -3180;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-3196
	ctx.r11.s64 = ctx.r11.s64 + -3196;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stb r30,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r30.u8);
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264c278
	if (ctx.cr6.eq) goto loc_8264C278;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8260ed20
	ctx.lr = 0x8264C23C;
	sub_8260ED20(ctx, base);
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82186158
	ctx.lr = 0x8264C244;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264c254
	if (ctx.cr6.eq) goto loc_8264C254;
	// bl 0x8266b2c0
	ctx.lr = 0x8264C250;
	sub_8266B2C0(ctx, base);
	// b 0x8264c258
	goto loc_8264C258;
loc_8264C254:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8264C258:
	// lwz r29,108(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8264c278
	if (ctx.cr6.eq) goto loc_8264C278;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8264c160
	ctx.lr = 0x8264C270;
	sub_8264C160(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82186190
	ctx.lr = 0x8264C278;
	sub_82186190(ctx, base);
loc_8264C278:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8264C288"))) PPC_WEAK_FUNC(sub_8264C288);
PPC_FUNC_IMPL(__imp__sub_8264C288) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x8264c360
	sub_8264C360(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8264C290"))) PPC_WEAK_FUNC(sub_8264C290);
PPC_FUNC_IMPL(__imp__sub_8264C290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-3620
	ctx.r3.s64 = ctx.r11.s64 + -3620;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264C2A0"))) PPC_WEAK_FUNC(sub_8264C2A0);
PPC_FUNC_IMPL(__imp__sub_8264C2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r10,-3196
	ctx.r10.s64 = ctx.r10.s64 + -3196;
	// addi r9,r9,-3180
	ctx.r9.s64 = ctx.r9.s64 + -3180;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// stw r10,-14496(r9)
	PPC_STORE_U32(ctx.r9.u32 + -14496, ctx.r10.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264c2fc
	if (ctx.cr6.eq) goto loc_8264C2FC;
	// bl 0x821601b8
	ctx.lr = 0x8264C2FC;
	sub_821601B8(ctx, base);
loc_8264C2FC:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264c310
	if (ctx.cr6.eq) goto loc_8264C310;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8260ec60
	ctx.lr = 0x8264C310;
	sub_8260EC60(ctx, base);
loc_8264C310:
	// lwz r30,108(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8264c32c
	if (ctx.cr6.eq) goto loc_8264C32C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8264c160
	ctx.lr = 0x8264C324;
	sub_8264C160(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82186190
	ctx.lr = 0x8264C32C;
	sub_82186190(ctx, base);
loc_8264C32C:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264c33c
	if (ctx.cr6.eq) goto loc_8264C33C;
	// bl 0x821601b8
	ctx.lr = 0x8264C33C;
	sub_821601B8(ctx, base);
loc_8264C33C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581670
	ctx.lr = 0x8264C344;
	sub_82581670(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264C360"))) PPC_WEAK_FUNC(sub_8264C360);
PPC_FUNC_IMPL(__imp__sub_8264C360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8264c2a0
	ctx.lr = 0x8264C380;
	sub_8264C2A0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264c398
	if (ctx.cr6.eq) goto loc_8264C398;
	// bl 0x82186190
	ctx.lr = 0x8264C394;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8264C398:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264C3B0"))) PPC_WEAK_FUNC(sub_8264C3B0);
PPC_FUNC_IMPL(__imp__sub_8264C3B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8264c3d0
	if (!ctx.cr6.lt) goto loc_8264C3D0;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mulli r11,r4,52
	ctx.r11.s64 = ctx.r4.s64 * 52;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_8264C3D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264C3D8"))) PPC_WEAK_FUNC(sub_8264C3D8);
PPC_FUNC_IMPL(__imp__sub_8264C3D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8264C3E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// stb r30,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r30.u8);
loc_8264C404:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8264c404
	if (!ctx.cr6.eq) goto loc_8264C404;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x8264C428;
	sub_82161E08(ctx, base);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823a1aa8
	ctx.lr = 0x8264C43C;
	sub_823A1AA8(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8264c450
	if (ctx.cr6.lt) goto loc_8264C450;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82186190
	ctx.lr = 0x8264C450;
	sub_82186190(ctx, base);
loc_8264C450:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stb r30,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r30.u8);
	// beq cr6,0x8264c474
	if (ctx.cr6.eq) goto loc_8264C474;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8264c478
	if (ctx.cr6.eq) goto loc_8264C478;
loc_8264C474:
	// twi 31,r0,22
loc_8264C478:
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
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
	// beq cr6,0x8264c4c0
	if (ctx.cr6.eq) goto loc_8264C4C0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264c4a4
	if (!ctx.cr6.eq) goto loc_8264C4A4;
	// twi 31,r0,22
loc_8264C4A4:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8264c4b4
	if (!ctx.cr6.eq) goto loc_8264C4B4;
	// twi 31,r0,22
loc_8264C4B4:
	// lwz r3,40(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_8264C4C0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8264C4D0"))) PPC_WEAK_FUNC(sub_8264C4D0);
PPC_FUNC_IMPL(__imp__sub_8264C4D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x8264C4D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrldi r4,r31,32
	ctx.r4.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d4c48
	ctx.lr = 0x8264C4F4;
	sub_825D4C48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264c668
	if (ctx.cr6.eq) goto loc_8264C668;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82186158
	ctx.lr = 0x8264C508;
	sub_82186158(ctx, base);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82186190
	ctx.lr = 0x8264C518;
	sub_82186190(ctx, base);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264c668
	if (ctx.cr6.eq) goto loc_8264C668;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x826df680
	ctx.lr = 0x8264C530;
	sub_826DF680(ctx, base);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82186158
	ctx.lr = 0x8264C538;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264c668
	if (ctx.cr6.eq) goto loc_8264C668;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x825d4cb0
	ctx.lr = 0x8264C548;
	sub_825D4CB0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8264c668
	if (ctx.cr6.eq) goto loc_8264C668;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264c658
	if (ctx.cr6.eq) goto loc_8264C658;
	// lwz r9,20(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8264c658
	if (ctx.cr6.eq) goto loc_8264C658;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,-3172
	ctx.r10.s64 = ctx.r10.s64 + -3172;
loc_8264C580:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8264c5a0
	if (!ctx.cr0.eq) goto loc_8264C5A0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8264c580
	if (!ctx.cr6.eq) goto loc_8264C580;
loc_8264C5A0:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8264c658
	if (!ctx.cr6.eq) goto loc_8264C658;
	// lis r10,8198
	ctx.r10.s64 = 537264128;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// ori r10,r10,1792
	ctx.r10.u64 = ctx.r10.u64 | 1792;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8264c658
	if (!ctx.cr6.eq) goto loc_8264C658;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// lwz r28,64(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x8264c63c
	if (!ctx.cr6.gt) goto loc_8264C63C;
	// addi r27,r29,28
	ctx.r27.s64 = ctx.r29.s64 + 28;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8264C5F8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8263c878
	ctx.lr = 0x8264C614;
	sub_8263C878(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825bcbf8
	ctx.lr = 0x8264C624;
	sub_825BCBF8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825fc7b8
	ctx.lr = 0x8264C62C;
	sub_825FC7B8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,52
	ctx.r30.s64 = ctx.r30.s64 + 52;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x8264c5f8
	if (ctx.cr6.lt) goto loc_8264C5F8;
loc_8264C63C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825d4eb8
	ctx.lr = 0x8264C644;
	sub_825D4EB8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82186190
	ctx.lr = 0x8264C64C;
	sub_82186190(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_8264C658:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825d4eb8
	ctx.lr = 0x8264C660;
	sub_825D4EB8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82186190
	ctx.lr = 0x8264C668;
	sub_82186190(ctx, base);
loc_8264C668:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8264C678"))) PPC_WEAK_FUNC(sub_8264C678);
PPC_FUNC_IMPL(__imp__sub_8264C678) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264C688"))) PPC_WEAK_FUNC(sub_8264C688);
PPC_FUNC_IMPL(__imp__sub_8264C688) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264C698"))) PPC_WEAK_FUNC(sub_8264C698);
PPC_FUNC_IMPL(__imp__sub_8264C698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x8245ac68
	ctx.lr = 0x8264C6BC;
	sub_8245AC68(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82186190
	ctx.lr = 0x8264C6C4;
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
	// beq cr6,0x8264c6e8
	if (ctx.cr6.eq) goto loc_8264C6E8;
	// bl 0x82186190
	ctx.lr = 0x8264C6E4;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8264C6E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264C700"))) PPC_WEAK_FUNC(sub_8264C700);
PPC_FUNC_IMPL(__imp__sub_8264C700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8264C708;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82186158
	ctx.lr = 0x8264C720;
	sub_82186158(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8264c790
	if (ctx.cr6.eq) goto loc_8264C790;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r11,r11,-3160
	ctx.r11.s64 = ctx.r11.s64 + -3160;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// bl 0x82619550
	ctx.lr = 0x8264C75C;
	sub_82619550(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8264c4d0
	ctx.lr = 0x8264C76C;
	sub_8264C4D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264c794
	if (ctx.cr6.eq) goto loc_8264C794;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// bl 0x82659610
	ctx.lr = 0x8264C784;
	sub_82659610(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_8264C790:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8264C794:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// beq cr6,0x8264c7b8
	if (ctx.cr6.eq) goto loc_8264C7B8;
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
	ctx.lr = 0x8264C7B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8264C7B8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8264C7C8"))) PPC_WEAK_FUNC(sub_8264C7C8);
PPC_FUNC_IMPL(__imp__sub_8264C7C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8264c828
	if (ctx.cr6.gt) goto loc_8264C828;
	// lis r12,-32155
	ctx.r12.s64 = -2107310080;
	// addi r12,r12,-14352
	ctx.r12.s64 = ctx.r12.s64 + -14352;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8264C810;
	case 1:
		goto loc_8264C818;
	case 2:
		goto loc_8264C820;
	case 3:
		goto loc_8264C820;
	case 4:
		goto loc_8264C820;
	case 5:
		goto loc_8264C810;
	case 6:
		goto loc_8264C828;
	case 7:
		goto loc_8264C810;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-14320(r4)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r4.u32 + -14320);
	// lwz r19,-14312(r4)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r4.u32 + -14312);
	// lwz r19,-14304(r4)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r4.u32 + -14304);
	// lwz r19,-14304(r4)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r4.u32 + -14304);
	// lwz r19,-14304(r4)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r4.u32 + -14304);
	// lwz r19,-14320(r4)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r4.u32 + -14320);
	// lwz r19,-14296(r4)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r4.u32 + -14296);
	// lwz r19,-14320(r4)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r4.u32 + -14320);
loc_8264C810:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8264C818:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8264C820:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_8264C828:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264C830"))) PPC_WEAK_FUNC(sub_8264C830);
PPC_FUNC_IMPL(__imp__sub_8264C830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r5,-360
	ctx.r11.s64 = ctx.r5.s64 + -360;
	// clrldi r10,r7,32
	ctx.r10.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// addi r9,r4,-640
	ctx.r9.s64 = ctx.r4.s64 + -640;
	// clrldi r8,r6,32
	ctx.r8.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r10,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r10.u64);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r11.u64);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// std r9,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r9.u64);
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// lfd f0,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,-24(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f11,-8(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f10,f0
	ctx.f10.f64 = double(float(ctx.f0.f64));
	// lfs f0,-3132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3132);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,-3136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3136);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fneg f0,f10
	ctx.f0.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fneg f0,f13
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264C8D0"))) PPC_WEAK_FUNC(sub_8264C8D0);
PPC_FUNC_IMPL(__imp__sub_8264C8D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x8264C8D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r25,r11,-14976
	ctx.r25.s64 = ctx.r11.s64 + -14976;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// bl 0x826fd790
	ctx.lr = 0x8264C900;
	sub_826FD790(ctx, base);
	// stw r3,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r3.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826fce58
	ctx.lr = 0x8264C90C;
	sub_826FCE58(ctx, base);
	// ld r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// li r26,0
	ctx.r26.s64 = 0;
	// ld r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x8264c950
	if (ctx.cr6.lt) goto loc_8264C950;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// std r11,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r11.u64);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r26,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r26.u32);
	// stw r26,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r26.u32);
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r26,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r26.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
loc_8264C950:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264cc84
	if (ctx.cr6.eq) goto loc_8264CC84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x82733640
	ctx.lr = 0x8264C964;
	sub_82733640(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8264c978
	if (ctx.cr6.eq) goto loc_8264C978;
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
loc_8264C978:
	// lbz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264c9b4
	if (ctx.cr6.eq) goto loc_8264C9B4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x8264c9b4
	if (ctx.cr6.lt) goto loc_8264C9B4;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264c9b0
	if (ctx.cr6.eq) goto loc_8264C9B0;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264c9b0
	if (ctx.cr6.eq) goto loc_8264C9B0;
	// bl 0x8260ef00
	ctx.lr = 0x8264C9AC;
	sub_8260EF00(ctx, base);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_8264C9B0:
	// stb r26,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r26.u8);
loc_8264C9B4:
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x8264c9e8
	if (!ctx.cr6.eq) goto loc_8264C9E8;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264c9e8
	if (!ctx.cr6.eq) goto loc_8264C9E8;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82631338
	ctx.lr = 0x8264C9D4;
	sub_82631338(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r26,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r26.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_8264C9E8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,220(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8264ca0c
	if (!ctx.cr6.gt) goto loc_8264CA0C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f13,-3128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3128);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,220(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
loc_8264CA0C:
	// lfs f0,220(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x8264cc78
	if (ctx.cr6.gt) goto loc_8264CC78;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r27,r11,30
	ctx.r27.u64 = ctx.r11.u32 & 0x3;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264cc84
	if (ctx.cr6.eq) goto loc_8264CC84;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264cc84
	if (ctx.cr6.eq) goto loc_8264CC84;
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264cc84
	if (ctx.cr6.eq) goto loc_8264CC84;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264cc84
	if (ctx.cr6.eq) goto loc_8264CC84;
	// addi r11,r27,13
	ctx.r11.s64 = ctx.r27.s64 + 13;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264cc84
	if (ctx.cr6.eq) goto loc_8264CC84;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264cc84
	if (ctx.cr6.eq) goto loc_8264CC84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264CAB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,152(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264CAD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwzx r3,r29,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264CAF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r4,r11,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mullw r7,r11,r8
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r10,6
	ctx.r10.s64 = 6;
	// mullw r11,r4,r6
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8264CB1C:
	// std r5,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x8264cb1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8264CB1C;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// rlwinm r10,r10,1,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x2;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// stw r7,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// stw r6,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r6.u32);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// bl 0x826fd790
	ctx.lr = 0x8264CB78;
	sub_826FD790(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r3,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x827334d8
	ctx.lr = 0x8264CB88;
	sub_827334D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x8264cbdc
	if (ctx.cr6.eq) goto loc_8264CBDC;
	// bctrl 
	ctx.lr = 0x8264CBA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,152(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264CBC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwzx r3,r29,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264CBD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8264cc70
	goto loc_8264CC70;
loc_8264CBDC:
	// bctrl 
	ctx.lr = 0x8264CBE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,152(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264CBF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwzx r3,r29,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264CC10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lfs f0,216(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// stw r27,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r27.u32);
	// lfs f13,220(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f13.f64 = double(temp.f32);
	// stb r28,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r28.u8);
	// lfs f12,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f13,220(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lbz r10,-14912(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -14912);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8264cc70
	if (ctx.cr6.eq) goto loc_8264CC70;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stb r10,-14912(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14912, ctx.r10.u8);
	// bl 0x826fd790
	ctx.lr = 0x8264CC64;
	sub_826FD790(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-14944
	ctx.r11.s64 = ctx.r11.s64 + -14944;
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_8264CC70:
	// bl 0x826fd790
	ctx.lr = 0x8264CC74;
	sub_826FD790(ctx, base);
	// stw r3,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r3.u32);
loc_8264CC78:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8264CC84:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8264CC90"))) PPC_WEAK_FUNC(sub_8264CC90);
PPC_FUNC_IMPL(__imp__sub_8264CC90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8264CC98;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264cf54
	if (ctx.cr6.eq) goto loc_8264CF54;
	// lbz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264cf54
	if (ctx.cr6.eq) goto loc_8264CF54;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
	// lwz r29,36(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8264ccfc
	if (ctx.cr6.eq) goto loc_8264CCFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259b040
	ctx.lr = 0x8264CCE4;
	sub_8259B040(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259b088
	ctx.lr = 0x8264CCF0;
	sub_8259B088(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259afe0
	ctx.lr = 0x8264CCFC;
	sub_8259AFE0(ctx, base);
loc_8264CCFC:
	// lwz r11,196(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r5,r11,148
	ctx.r5.s64 = ctx.r11.s64 + 148;
	// bl 0x8259a830
	ctx.lr = 0x8264CD24;
	sub_8259A830(ctx, base);
	// lwz r11,196(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// li r4,1
	ctx.r4.s64 = 1;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r5,r11,152
	ctx.r5.s64 = ctx.r11.s64 + 152;
	// bl 0x8259a830
	ctx.lr = 0x8264CD4C;
	sub_8259A830(ctx, base);
	// lwz r11,196(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// li r4,2
	ctx.r4.s64 = 2;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 + 13;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8259a830
	ctx.lr = 0x8264CD74;
	sub_8259A830(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x8259ace8
	ctx.lr = 0x8264CD84;
	sub_8259ACE8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x8259ace8
	ctx.lr = 0x8264CD94;
	sub_8259ACE8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x8259ace8
	ctx.lr = 0x8264CDA4;
	sub_8259ACE8(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,-18576
	ctx.r11.s64 = ctx.r11.s64 + -18576;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v0,r10,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v0,r10,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,48
	ctx.r10.s64 = 48;
	// lvx128 v0,r10,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8259aec8
	ctx.lr = 0x8264CDF4;
	sub_8259AEC8(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8259d7d0
	ctx.lr = 0x8264CDFC;
	sub_8259D7D0(ctx, base);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lfs f31,14088(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14088);
	ctx.f31.f64 = double(temp.f32);
	// li r5,68
	ctx.r5.s64 = 68;
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
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
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x826df680
	ctx.lr = 0x8264CE4C;
	sub_826DF680(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x8259a7f0
	ctx.lr = 0x8264CE60;
	sub_8259A7F0(ctx, base);
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x8264ceb4
	if (ctx.cr6.eq) goto loc_8264CEB4;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// lwz r8,224(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lfs f4,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x8259a618
	ctx.lr = 0x8264CEB0;
	sub_8259A618(ctx, base);
	// b 0x8264cedc
	goto loc_8264CEDC;
loc_8264CEB4:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r4,224(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x8259a628
	ctx.lr = 0x8264CEDC;
	sub_8259A628(ctx, base);
loc_8264CEDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259a608
	ctx.lr = 0x8264CEE4;
	sub_8259A608(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x8259a830
	ctx.lr = 0x8264CEFC;
	sub_8259A830(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264cf0c
	if (ctx.cr6.eq) goto loc_8264CF0C;
	// bl 0x82581e38
	ctx.lr = 0x8264CF0C;
	sub_82581E38(ctx, base);
loc_8264CF0C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259a830
	ctx.lr = 0x8264CF20;
	sub_8259A830(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264cf30
	if (ctx.cr6.eq) goto loc_8264CF30;
	// bl 0x82581e38
	ctx.lr = 0x8264CF30;
	sub_82581E38(ctx, base);
loc_8264CF30:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259a830
	ctx.lr = 0x8264CF44;
	sub_8259A830(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264cf54
	if (ctx.cr6.eq) goto loc_8264CF54;
	// bl 0x82581e38
	ctx.lr = 0x8264CF54;
	sub_82581E38(ctx, base);
loc_8264CF54:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8264CF60"))) PPC_WEAK_FUNC(sub_8264CF60);
PPC_FUNC_IMPL(__imp__sub_8264CF60) {
	PPC_FUNC_PROLOGUE();
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
	// b 0x8264c8d0
	sub_8264C8D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8264CF80"))) PPC_WEAK_FUNC(sub_8264CF80);
PPC_FUNC_IMPL(__imp__sub_8264CF80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264CF88"))) PPC_WEAK_FUNC(sub_8264CF88);
PPC_FUNC_IMPL(__imp__sub_8264CF88) {
	PPC_FUNC_PROLOGUE();
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
	// b 0x8264cc90
	sub_8264CC90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8264CFA8"))) PPC_WEAK_FUNC(sub_8264CFA8);
PPC_FUNC_IMPL(__imp__sub_8264CFA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264CFB0"))) PPC_WEAK_FUNC(sub_8264CFB0);
PPC_FUNC_IMPL(__imp__sub_8264CFB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8264cfd4
	if (ctx.cr6.eq) goto loc_8264CFD4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264cfd4
	if (ctx.cr6.eq) goto loc_8264CFD4;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x8264c7c8
	sub_8264C7C8(ctx, base);
	return;
loc_8264CFD4:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264cff4
	if (ctx.cr6.eq) goto loc_8264CFF4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8264CFF4:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264D000"))) PPC_WEAK_FUNC(sub_8264D000);
PPC_FUNC_IMPL(__imp__sub_8264D000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// stw r5,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r5.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r6,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// stw r7,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r7.u32);
	// bne cr6,0x8264d040
	if (!ctx.cr6.eq) goto loc_8264D040;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8264d040
	if (!ctx.cr6.eq) goto loc_8264D040;
	// cmplwi cr6,r6,1280
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1280, ctx.xer);
	// bne cr6,0x8264d040
	if (!ctx.cr6.eq) goto loc_8264D040;
	// cmplwi cr6,r7,720
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 720, ctx.xer);
	// bne cr6,0x8264d040
	if (!ctx.cr6.eq) goto loc_8264D040;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r11.u8);
	// b 0x8264d044
	goto loc_8264D044;
loc_8264D040:
	// stb r9,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r9.u8);
loc_8264D044:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
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
	// addi r10,r5,-360
	ctx.r10.s64 = ctx.r5.s64 + -360;
	// stb r9,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r9.u8);
	// clrldi r8,r7,32
	ctx.r8.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// addi r7,r4,-640
	ctx.r7.s64 = ctx.r4.s64 + -640;
	// clrldi r6,r6,32
	ctx.r6.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// std r8,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r8.u64);
	// std r10,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r10.u64);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// std r7,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r7.u64);
	// lfd f0,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,-24(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f11,-8(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f10,f0
	ctx.f10.f64 = double(float(ctx.f0.f64));
	// lfs f0,-3132(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -3132);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,-3136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -3136);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fneg f0,f10
	ctx.f0.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fneg f0,f13
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264D0F8"))) PPC_WEAK_FUNC(sub_8264D0F8);
PPC_FUNC_IMPL(__imp__sub_8264D0F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264d128
	if (ctx.cr6.eq) goto loc_8264D128;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8264d128
	if (ctx.cr6.eq) goto loc_8264D128;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f1,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// blr 
	return;
loc_8264D128:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2952(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2952);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264D138"))) PPC_WEAK_FUNC(sub_8264D138);
PPC_FUNC_IMPL(__imp__sub_8264D138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8264D140;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-3120
	ctx.r11.s64 = ctx.r11.s64 + -3120;
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8264d180
	if (ctx.cr6.eq) goto loc_8264D180;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82733630
	ctx.lr = 0x8264D16C;
	sub_82733630(ctx, base);
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// bl 0x82631338
	ctx.lr = 0x8264D174;
	sub_82631338(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r29,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r29.u32);
	// stw r11,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r11.u32);
loc_8264D180:
	// lwz r3,140(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264d1b4
	if (ctx.cr6.eq) goto loc_8264D1B4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264d1b4
	if (ctx.cr6.eq) goto loc_8264D1B4;
	// bl 0x8260efe8
	ctx.lr = 0x8264D1A0;
	sub_8260EFE8(ctx, base);
	// lwz r3,140(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// stw r29,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264d1b4
	if (ctx.cr6.eq) goto loc_8264D1B4;
	// bl 0x82581e38
	ctx.lr = 0x8264D1B4;
	sub_82581E38(ctx, base);
loc_8264D1B4:
	// addi r31,r30,152
	ctx.r31.s64 = ctx.r30.s64 + 152;
	// li r28,4
	ctx.r28.s64 = 4;
loc_8264D1BC:
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// stw r29,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264d1d0
	if (ctx.cr6.eq) goto loc_8264D1D0;
	// bl 0x82581e38
	ctx.lr = 0x8264D1D0;
	sub_82581E38(ctx, base);
loc_8264D1D0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264d1e4
	if (ctx.cr6.eq) goto loc_8264D1E4;
	// bl 0x82581e38
	ctx.lr = 0x8264D1E4;
	sub_82581E38(ctx, base);
loc_8264D1E4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264d1f8
	if (ctx.cr6.eq) goto loc_8264D1F8;
	// bl 0x82581e38
	ctx.lr = 0x8264D1F8;
	sub_82581E38(ctx, base);
loc_8264D1F8:
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8264d1bc
	if (!ctx.cr6.eq) goto loc_8264D1BC;
	// addi r31,r30,228
	ctx.r31.s64 = ctx.r30.s64 + 228;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8264d220
	if (ctx.cr6.lt) goto loc_8264D220;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x8264D220;
	sub_82186190(ctx, base);
loc_8264D220:
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// lwz r3,224(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264d240
	if (ctx.cr6.eq) goto loc_8264D240;
	// bl 0x82581e38
	ctx.lr = 0x8264D240;
	sub_82581E38(ctx, base);
loc_8264D240:
	// addi r31,r30,196
	ctx.r31.s64 = ctx.r30.s64 + 196;
	// li r28,3
	ctx.r28.s64 = 3;
loc_8264D248:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264d25c
	if (ctx.cr6.eq) goto loc_8264D25C;
	// bl 0x82581e38
	ctx.lr = 0x8264D25C;
	sub_82581E38(ctx, base);
loc_8264D25C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264d26c
	if (ctx.cr6.eq) goto loc_8264D26C;
	// bl 0x82581e38
	ctx.lr = 0x8264D26C;
	sub_82581E38(ctx, base);
loc_8264D26C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264d27c
	if (ctx.cr6.eq) goto loc_8264D27C;
	// bl 0x82581e38
	ctx.lr = 0x8264D27C;
	sub_82581E38(ctx, base);
loc_8264D27C:
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge cr6,0x8264d248
	if (!ctx.cr6.lt) goto loc_8264D248;
	// lwz r3,140(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264d298
	if (ctx.cr6.eq) goto loc_8264D298;
	// bl 0x82581e38
	ctx.lr = 0x8264D298;
	sub_82581E38(ctx, base);
loc_8264D298:
	// addi r31,r30,32
	ctx.r31.s64 = ctx.r30.s64 + 32;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8264d2b0
	if (ctx.cr6.lt) goto loc_8264D2B0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x8264D2B0;
	sub_82186190(ctx, base);
loc_8264D2B0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// addi r11,r11,4952
	ctx.r11.s64 = ctx.r11.s64 + 4952;
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8264D2D0"))) PPC_WEAK_FUNC(sub_8264D2D0);
PPC_FUNC_IMPL(__imp__sub_8264D2D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8264D2D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-3112
	ctx.r11.s64 = ctx.r11.s64 + -3112;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264d304
	if (ctx.cr6.eq) goto loc_8264D304;
	// bl 0x82581e38
	ctx.lr = 0x8264D304;
	sub_82581E38(ctx, base);
loc_8264D304:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264d318
	if (ctx.cr6.eq) goto loc_8264D318;
	// bl 0x82581e38
	ctx.lr = 0x8264D318;
	sub_82581E38(ctx, base);
loc_8264D318:
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8264d330
	if (ctx.cr6.lt) goto loc_8264D330;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x8264D330;
	sub_82186190(ctx, base);
loc_8264D330:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// stb r29,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r29.u8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264d350
	if (ctx.cr6.eq) goto loc_8264D350;
	// bl 0x82581e38
	ctx.lr = 0x8264D350;
	sub_82581E38(ctx, base);
loc_8264D350:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264d360
	if (ctx.cr6.eq) goto loc_8264D360;
	// bl 0x82581e38
	ctx.lr = 0x8264D360;
	sub_82581E38(ctx, base);
loc_8264D360:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,4952
	ctx.r11.s64 = ctx.r11.s64 + 4952;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8264D378"))) PPC_WEAK_FUNC(sub_8264D378);
PPC_FUNC_IMPL(__imp__sub_8264D378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8264d138
	ctx.lr = 0x8264D398;
	sub_8264D138(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264d3b0
	if (ctx.cr6.eq) goto loc_8264D3B0;
	// bl 0x82186190
	ctx.lr = 0x8264D3AC;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8264D3B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264D3C8"))) PPC_WEAK_FUNC(sub_8264D3C8);
PPC_FUNC_IMPL(__imp__sub_8264D3C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8264d2d0
	ctx.lr = 0x8264D3E8;
	sub_8264D2D0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264d400
	if (ctx.cr6.eq) goto loc_8264D400;
	// bl 0x82186190
	ctx.lr = 0x8264D3FC;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8264D400:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264D418"))) PPC_WEAK_FUNC(sub_8264D418);
PPC_FUNC_IMPL(__imp__sub_8264D418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8264D420;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-3120
	ctx.r11.s64 = ctx.r11.s64 + -3120;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// li r29,15
	ctx.r29.s64 = 15;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r31,148
	ctx.r11.s64 = ctx.r31.s64 + 148;
	// stw r30,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r30.u32);
	// stw r29,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r29.u32);
	// stb r30,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r30.u8);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
loc_8264D460:
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bge cr6,0x8264d460
	if (!ctx.cr6.lt) goto loc_8264D460;
	// addi r3,r31,228
	ctx.r3.s64 = ctx.r31.s64 + 228;
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r29,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r29.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
loc_8264D498:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8264d498
	if (!ctx.cr6.eq) goto loc_8264D498;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x8264D4BC;
	sub_82161E08(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r28,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r28.u32);
	// stb r30,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r30.u8);
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// stb r30,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r30.u8);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// std r30,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r30.u64);
	// bl 0x826fc3c8
	ctx.lr = 0x8264D4F8;
	sub_826FC3C8(ctx, base);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r5,31
	ctx.r5.s64 = 31;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// addi r4,r10,-3080
	ctx.r4.s64 = ctx.r10.s64 + -3080;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r30,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r30.u8);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// std r11,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r11.u64);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f0,-3088(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -3088);
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// stfd f0,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.f0.u64);
	// bl 0x82161e08
	ctx.lr = 0x8264D53C;
	sub_82161E08(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371620
	ctx.lr = 0x8264D548;
	sub_82371620(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8264d55c
	if (ctx.cr6.lt) goto loc_8264D55C;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82186190
	ctx.lr = 0x8264D55C;
	sub_82186190(ctx, base);
loc_8264D55C:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stb r30,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r30.u8);
	// beq cr6,0x8264d5ec
	if (ctx.cr6.eq) goto loc_8264D5EC;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264d5dc
	if (ctx.cr6.eq) goto loc_8264D5DC;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r5,r11,-3108
	ctx.r5.s64 = ctx.r11.s64 + -3108;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264D5A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8264d5b4
	if (ctx.cr6.eq) goto loc_8264D5B4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x8264D5B4;
	sub_82659610(ctx, base);
loc_8264D5B4:
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264d5c8
	if (ctx.cr6.eq) goto loc_8264D5C8;
	// bl 0x82581e38
	ctx.lr = 0x8264D5C8;
	sub_82581E38(ctx, base);
loc_8264D5C8:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264d5d8
	if (ctx.cr6.eq) goto loc_8264D5D8;
	// bl 0x82581e38
	ctx.lr = 0x8264D5D8;
	sub_82581E38(ctx, base);
loc_8264D5D8:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8264D5DC:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8264d5ec
	if (ctx.cr6.eq) goto loc_8264D5EC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82581e38
	ctx.lr = 0x8264D5EC;
	sub_82581E38(ctx, base);
loc_8264D5EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

extern void XmvPlayerLang(PPCRegister& r11);

__attribute__((alias("__imp__sub_8264D5F8"))) PPC_WEAK_FUNC(sub_8264D5F8);
PPC_FUNC_IMPL(__imp__sub_8264D5F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8ac
	ctx.lr = 0x8264D600;
	__savegprlr_21(ctx, base);
	// stwu r1,-768(r1)
	ea = -768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x826fd790
	ctx.lr = 0x8264D614;
	sub_826FD790(ctx, base);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r21,r10,-14944
	ctx.r21.s64 = ctx.r10.s64 + -14944;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r3,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r3.u32);
loc_8264D628:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8264d628
	if (!ctx.cr6.eq) goto loc_8264D628;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x8264D650;
	sub_82161E08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
	// li r26,15
	ctx.r26.s64 = 15;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r4,r11,-3000
	ctx.r4.s64 = ctx.r11.s64 + -3000;
	// stfs f0,220(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// stw r26,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r26.u32);
	// stb r30,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r30.u8);
	// bl 0x82161e08
	ctx.lr = 0x8264D68C;
	sub_82161E08(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stb r30,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r30.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8264D6A0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8264d6a0
	if (!ctx.cr6.eq) goto loc_8264D6A0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x8264D6C8;
	sub_82161E08(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82583e48
	ctx.lr = 0x8264D6D8;
	sub_82583E48(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8264d6ec
	if (ctx.cr6.lt) goto loc_8264D6EC;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82186190
	ctx.lr = 0x8264D6EC;
	sub_82186190(ctx, base);
loc_8264D6EC:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r30,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r30.u8);
	// blt cr6,0x8264d70c
	if (ctx.cr6.lt) goto loc_8264D70C;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82186190
	ctx.lr = 0x8264D70C;
	sub_82186190(ctx, base);
loc_8264D70C:
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// stw r26,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r26.u32);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r30,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r30.u8);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r4,24236(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24236);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264D73C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82161d10
	ctx.lr = 0x8264D754;
	sub_82161D10(ctx, base);
	// lwz r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8264d768
	if (ctx.cr6.lt) goto loc_8264D768;
	// lwz r3,308(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// bl 0x82186190
	ctx.lr = 0x8264D768;
	sub_82186190(ctx, base);
loc_8264D768:
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r26,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r26.u32);
	// addi r6,r11,-16776
	ctx.r6.s64 = ctx.r11.s64 + -16776;
	// stw r30,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r30.u32);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// stb r30,308(r1)
	PPC_STORE_U8(ctx.r1.u32 + 308, ctx.r30.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-16820
	ctx.r5.s64 = ctx.r11.s64 + -16820;
	// bl 0x826df418
	ctx.lr = 0x8264D794;
	sub_826DF418(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264db08
	if (ctx.cr6.eq) goto loc_8264DB08;
	// lwz r28,340(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8264db08
	if (ctx.cr6.eq) goto loc_8264DB08;
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8264D7B8:
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x8264d7b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8264D7B8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r11.u32);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bge cr6,0x8264d7e0
	if (!ctx.cr6.lt) goto loc_8264D7E0;
	// addi r11,r1,164
	ctx.r11.s64 = ctx.r1.s64 + 164;
loc_8264D7E0:
	// stw r11,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r11.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8264d810
	if (ctx.cr6.eq) goto loc_8264D810;
	// stw r29,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264d87c
	if (!ctx.cr6.eq) goto loc_8264D87C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r11.u32);
	// b 0x8264d87c
	goto loc_8264D87C;
loc_8264D810:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264d848
	if (!ctx.cr6.eq) goto loc_8264D848;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,228
	ctx.r3.s64 = ctx.r31.s64 + 228;
	// addi r4,r11,6456
	ctx.r4.s64 = ctx.r11.s64 + 6456;
	// bl 0x8216d3c0
	ctx.lr = 0x8264D828;
	sub_8216D3C0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r11.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,360(r1)
	XmvPlayerLang(ctx.r11);
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r11.u32);
loc_8264D848:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8264d864
	if (ctx.cr6.eq) goto loc_8264D864;
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// stw r10,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r10.u32);
loc_8264D864:
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264d87c
	if (ctx.cr6.eq) goto loc_8264D87C;
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r11.u32);
loc_8264D87C:
	// addi r29,r31,132
	ctx.r29.s64 = ctx.r31.s64 + 132;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82733b78
	ctx.lr = 0x8264D890;
	sub_82733B78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8264db00
	if (!ctx.cr6.eq) goto loc_8264DB00;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x827334e8
	ctx.lr = 0x8264D8A4;
	sub_827334E8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r8,228(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lfs f13,232(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,-30764(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30764);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// stw r8,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r8.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// ble cr6,0x8264d8d0
	if (!ctx.cr6.gt) goto loc_8264D8D0;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_8264D8D0:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stb r9,212(r31)
	PPC_STORE_U8(ctx.r31.u32 + 212, ctx.r9.u8);
	// addi r11,r11,127
	ctx.r11.s64 = ctx.r11.s64 + 127;
	// lfs f0,14088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// li r10,-128
	ctx.r10.s64 = -128;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,216(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// divwu r10,r11,r10
	ctx.r10.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mulli r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 * -128;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// addi r3,r11,256
	ctx.r3.s64 = ctx.r11.s64 + 256;
	// bl 0x82186158
	ctx.lr = 0x8264D904;
	sub_82186158(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8264daec
	if (ctx.cr6.eq) goto loc_8264DAEC;
	// addi r11,r22,127
	ctx.r11.s64 = ctx.r22.s64 + 127;
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r27,r11,0,0,24
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// mullw r5,r10,r11
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826dfd40
	ctx.lr = 0x8264D930;
	sub_826DFD40(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r25,r11,-3016
	ctx.r25.s64 = ctx.r11.s64 + -3016;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r28,r31,152
	ctx.r28.s64 = ctx.r31.s64 + 152;
	// addi r24,r11,-3032
	ctx.r24.s64 = ctx.r11.s64 + -3032;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r23,r11,-3048
	ctx.r23.s64 = ctx.r11.s64 + -3048;
loc_8264D950:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x826e0998
	ctx.lr = 0x8264D960;
	sub_826E0998(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x821620e8
	ctx.lr = 0x8264D96C;
	sub_821620E8(ctx, base);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// li r8,5
	ctx.r8.s64 = 5;
	// lwz r7,208(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lwz r6,204(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,128(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// bl 0x82593528
	ctx.lr = 0x8264D98C;
	sub_82593528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r28,-4
	ctx.r3.s64 = ctx.r28.s64 + -4;
	// bl 0x823032b8
	ctx.lr = 0x8264D998;
	sub_823032B8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264d9a8
	if (ctx.cr6.eq) goto loc_8264D9A8;
	// bl 0x82581e38
	ctx.lr = 0x8264D9A8;
	sub_82581E38(ctx, base);
loc_8264D9A8:
	// lwz r11,296(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8264d9bc
	if (ctx.cr6.lt) goto loc_8264D9BC;
	// lwz r3,276(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// bl 0x82186190
	ctx.lr = 0x8264D9BC;
	sub_82186190(ctx, base);
loc_8264D9BC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r26,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r26.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r30,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r30.u32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stb r30,276(r1)
	PPC_STORE_U8(ctx.r1.u32 + 276, ctx.r30.u8);
	// bl 0x826e0998
	ctx.lr = 0x8264D9D8;
	sub_826E0998(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821620e8
	ctx.lr = 0x8264D9E4;
	sub_821620E8(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// li r8,5
	ctx.r8.s64 = 5;
	// lwz r5,128(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// rlwinm r7,r11,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r10,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82593528
	ctx.lr = 0x8264DA0C;
	sub_82593528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823032b8
	ctx.lr = 0x8264DA18;
	sub_823032B8(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264da28
	if (ctx.cr6.eq) goto loc_8264DA28;
	// bl 0x82581e38
	ctx.lr = 0x8264DA28;
	sub_82581E38(ctx, base);
loc_8264DA28:
	// lwz r11,264(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8264da3c
	if (ctx.cr6.lt) goto loc_8264DA3C;
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// bl 0x82186190
	ctx.lr = 0x8264DA3C;
	sub_82186190(ctx, base);
loc_8264DA3C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r26,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r26.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stb r30,244(r1)
	PPC_STORE_U8(ctx.r1.u32 + 244, ctx.r30.u8);
	// bl 0x826e0998
	ctx.lr = 0x8264DA58;
	sub_826E0998(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821620e8
	ctx.lr = 0x8264DA64;
	sub_821620E8(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// li r8,5
	ctx.r8.s64 = 5;
	// lwz r5,128(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// rlwinm r7,r11,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r10,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82593528
	ctx.lr = 0x8264DA8C;
	sub_82593528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x823032b8
	ctx.lr = 0x8264DA98;
	sub_823032B8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264daa8
	if (ctx.cr6.eq) goto loc_8264DAA8;
	// bl 0x82581e38
	ctx.lr = 0x8264DAA8;
	sub_82581E38(ctx, base);
loc_8264DAA8:
	// lwz r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8264dabc
	if (ctx.cr6.lt) goto loc_8264DABC;
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x82186190
	ctx.lr = 0x8264DABC;
	sub_82186190(ctx, base);
loc_8264DABC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r26,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r26.u32);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// stb r30,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r30.u8);
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x8264d950
	if (ctx.cr6.lt) goto loc_8264D950;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82186190
	ctx.lr = 0x8264DAE0;
	sub_82186190(ctx, base);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stb r30,200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 200, ctx.r30.u8);
	// b 0x8264db08
	goto loc_8264DB08;
loc_8264DAEC:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stb r30,200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 200, ctx.r30.u8);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// b 0x8264db08
	goto loc_8264DB08;
loc_8264DB00:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
loc_8264DB08:
	// bl 0x826fd790
	ctx.lr = 0x8264DB0C;
	sub_826FD790(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// stw r3,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r3.u32);
	// stb r11,-14912(r10)
	PPC_STORE_U8(ctx.r10.u32 + -14912, ctx.r11.u8);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8264db30
	if (ctx.cr6.lt) goto loc_8264DB30;
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x82186190
	ctx.lr = 0x8264DB30;
	sub_82186190(ctx, base);
loc_8264DB30:
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x826de8fc
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8264DB38"))) PPC_WEAK_FUNC(sub_8264DB38);
PPC_FUNC_IMPL(__imp__sub_8264DB38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8264DB40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r10,-3112
	ctx.r10.s64 = ctx.r10.s64 + -3112;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r9,15
	ctx.r9.s64 = 15;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
loc_8264DB84:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8264db84
	if (!ctx.cr6.eq) goto loc_8264DB84;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x8264DBA8;
	sub_82161E08(ctx, base);
	// li r11,1280
	ctx.r11.s64 = 1280;
	// li r10,720
	ctx.r10.s64 = 720;
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stb r30,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r30.u8);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8264DBD8"))) PPC_WEAK_FUNC(sub_8264DBD8);
PPC_FUNC_IMPL(__imp__sub_8264DBD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8264DBE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x826dfbf0
	ctx.lr = 0x8264DBFC;
	sub_826DFBF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8264dd0c
	if (ctx.cr6.eq) goto loc_8264DD0C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821620e8
	ctx.lr = 0x8264DC10;
	sub_821620E8(ctx, base);
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264dc30
	if (ctx.cr6.eq) goto loc_8264DC30;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264dcac
	if (!ctx.cr6.eq) goto loc_8264DCAC;
loc_8264DC30:
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x82186158
	ctx.lr = 0x8264DC38;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264dc78
	if (ctx.cr6.eq) goto loc_8264DC78;
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8264dc64
	if (ctx.cr6.lt) goto loc_8264DC64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x8264d418
	ctx.lr = 0x8264DC5C;
	sub_8264D418(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8264dc7c
	goto loc_8264DC7C;
loc_8264DC64:
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x8264d418
	ctx.lr = 0x8264DC70;
	sub_8264D418(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8264dc7c
	goto loc_8264DC7C;
loc_8264DC78:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8264DC7C:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8264dc90
	if (ctx.cr6.eq) goto loc_8264DC90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x8264DC90;
	sub_82659610(ctx, base);
loc_8264DC90:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823032b8
	ctx.lr = 0x8264DC9C;
	sub_823032B8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8264dcac
	if (ctx.cr6.eq) goto loc_8264DCAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581e38
	ctx.lr = 0x8264DCAC;
	sub_82581E38(ctx, base);
loc_8264DCAC:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264dcf8
	if (ctx.cr6.eq) goto loc_8264DCF8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264dcf8
	if (ctx.cr6.eq) goto loc_8264DCF8;
	// lbz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264dce8
	if (ctx.cr6.eq) goto loc_8264DCE8;
	// lwz r7,60(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r6,56(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r5,52(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x8264c830
	ctx.lr = 0x8264DCE8;
	sub_8264C830(ctx, base);
loc_8264DCE8:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8264d5f8
	ctx.lr = 0x8264DCF8;
	sub_8264D5F8(ctx, base);
loc_8264DCF8:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8264dd0c
	if (ctx.cr6.lt) goto loc_8264DD0C;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82186190
	ctx.lr = 0x8264DD0C;
	sub_82186190(ctx, base);
loc_8264DD0C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8264DD18"))) PPC_WEAK_FUNC(sub_8264DD18);
PPC_FUNC_IMPL(__imp__sub_8264DD18) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8264dd28
	if (!ctx.cr6.eq) goto loc_8264DD28;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8264DD28:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264DD40"))) PPC_WEAK_FUNC(sub_8264DD40);
PPC_FUNC_IMPL(__imp__sub_8264DD40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8264dd5c
	if (ctx.cr6.eq) goto loc_8264DD5C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8264DD5C:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264DD78"))) PPC_WEAK_FUNC(sub_8264DD78);
PPC_FUNC_IMPL(__imp__sub_8264DD78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264DD98"))) PPC_WEAK_FUNC(sub_8264DD98);
PPC_FUNC_IMPL(__imp__sub_8264DD98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8264ddfc
	if (ctx.cr6.eq) goto loc_8264DDFC;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_8264DDB8:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_8264DDC0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8264dde4
	if (ctx.cr6.eq) goto loc_8264DDE4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8264ddc0
	if (ctx.cr6.eq) goto loc_8264DDC0;
loc_8264DDE4:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8264de04
	if (ctx.cr6.eq) goto loc_8264DE04;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 + 12;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8264ddb8
	if (ctx.cr6.lt) goto loc_8264DDB8;
loc_8264DDFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8264DE04:
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264DE18"))) PPC_WEAK_FUNC(sub_8264DE18);
PPC_FUNC_IMPL(__imp__sub_8264DE18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x8264de40
	if (ctx.cr6.gt) goto loc_8264DE40;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8264de40
	if (!ctx.cr6.lt) goto loc_8264DE40;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_8264DE40:
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

__attribute__((alias("__imp__sub_8264DE50"))) PPC_WEAK_FUNC(sub_8264DE50);
PPC_FUNC_IMPL(__imp__sub_8264DE50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8264de84
	if (ctx.cr6.eq) goto loc_8264DE84;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8264dedc
	goto loc_8264DEDC;
loc_8264DE84:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// lwz r11,112(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264dec0
	if (ctx.cr6.eq) goto loc_8264DEC0;
	// lwz r9,116(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8264dec4
	if (ctx.cr6.lt) goto loc_8264DEC4;
loc_8264DEC0:
	// twi 31,r0,22
loc_8264DEC4:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x8264dedc
	if (ctx.cr6.eq) goto loc_8264DEDC;
	// bl 0x82659610
	ctx.lr = 0x8264DEDC;
	sub_82659610(ctx, base);
loc_8264DEDC:
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

__attribute__((alias("__imp__sub_8264DEF8"))) PPC_WEAK_FUNC(sub_8264DEF8);
PPC_FUNC_IMPL(__imp__sub_8264DEF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8264DF00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264dfa8
	if (ctx.cr6.eq) goto loc_8264DFA8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264dfa8
	if (ctx.cr6.eq) goto loc_8264DFA8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264DF44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264dfa8
	if (ctx.cr6.eq) goto loc_8264DFA8;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8264dfa8
	if (ctx.cr6.eq) goto loc_8264DFA8;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
loc_8264DF64:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_8264DF6C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8264df90
	if (ctx.cr6.eq) goto loc_8264DF90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8264df6c
	if (ctx.cr6.eq) goto loc_8264DF6C;
loc_8264DF90:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8264dfbc
	if (ctx.cr6.eq) goto loc_8264DFBC;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8264df64
	if (ctx.cr6.lt) goto loc_8264DF64;
loc_8264DFA8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8264DFB0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_8264DFBC:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264dff8
	if (ctx.cr6.eq) goto loc_8264DFF8;
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8264dffc
	if (ctx.cr6.lt) goto loc_8264DFFC;
loc_8264DFF8:
	// twi 31,r0,22
loc_8264DFFC:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// beq cr6,0x8264dfb0
	if (ctx.cr6.eq) goto loc_8264DFB0;
	// bl 0x82659610
	ctx.lr = 0x8264E014;
	sub_82659610(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8264E020"))) PPC_WEAK_FUNC(sub_8264E020);
PPC_FUNC_IMPL(__imp__sub_8264E020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,24236(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24236);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264E050;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8264E068"))) PPC_WEAK_FUNC(sub_8264E068);
PPC_FUNC_IMPL(__imp__sub_8264E068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de89c
	ctx.lr = 0x8264E070;
	__savegprlr_17(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rotlwi r31,r5,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82186158
	ctx.lr = 0x8264E088;
	sub_82186158(ctx, base);
	// lwz r11,104(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 104);
	// stw r3,104(r20)
	PPC_STORE_U32(ctx.r20.u32 + 104, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82186190
	ctx.lr = 0x8264E098;
	sub_82186190(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,104(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 104);
	// bl 0x826df680
	ctx.lr = 0x8264E0A8;
	sub_826DF680(ctx, base);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82186158
	ctx.lr = 0x8264E0B0;
	sub_82186158(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264e0c8
	if (ctx.cr6.eq) goto loc_8264E0C8;
	// lwz r4,104(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 104);
	// bl 0x825d4cb0
	ctx.lr = 0x8264E0C4;
	sub_825D4CB0(ctx, base);
	// b 0x8264e0cc
	goto loc_8264E0CC;
loc_8264E0C8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8264E0CC:
	// lwz r31,100(r20)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + 100);
	// stw r3,100(r20)
	PPC_STORE_U32(ctx.r20.u32 + 100, ctx.r3.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8264e0ec
	if (ctx.cr6.eq) goto loc_8264E0EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d4eb8
	ctx.lr = 0x8264E0E4;
	sub_825D4EB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82186190
	ctx.lr = 0x8264E0EC;
	sub_82186190(ctx, base);
loc_8264E0EC:
	// lwz r11,100(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 100);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8264e10c
	if (ctx.cr6.eq) goto loc_8264E10C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826de8ec
	__restgprlr_17(ctx, base);
	return;
loc_8264E10C:
	// lwz r19,20(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r23,r20,108
	ctx.r23.s64 = ctx.r20.s64 + 108;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,0(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// bl 0x8264b2e0
	ctx.lr = 0x8264E128;
	sub_8264B2E0(ctx, base);
	// lwz r11,8(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
	// mr r17,r27
	ctx.r17.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8264e2a0
	if (!ctx.cr6.gt) goto loc_8264E2A0;
	// mr r18,r27
	ctx.r18.u64 = ctx.r27.u64;
	// li r22,15
	ctx.r22.s64 = 15;
loc_8264E144:
	// lwz r11,12(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// add r29,r18,r11
	ctx.r29.u64 = ctx.r18.u64 + ctx.r11.u64;
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264E164;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8264e284
	if (ctx.cr6.eq) goto loc_8264E284;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8264e284
	if (!ctx.cr6.gt) goto loc_8264E284;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// rlwinm r26,r21,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
loc_8264E188:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r22,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r22.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stb r27,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r27.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8264E1A8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8264e1a8
	if (!ctx.cr6.eq) goto loc_8264E1A8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x8264E1CC;
	sub_82161E08(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264E1E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,4(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8264e20c
	if (ctx.cr6.eq) goto loc_8264E20C;
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// add r10,r25,r21
	ctx.r10.u64 = ctx.r25.u64 + ctx.r21.u64;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8264e210
	if (ctx.cr6.lt) goto loc_8264E210;
loc_8264E20C:
	// twi 31,r0,22
loc_8264E210:
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8264e224
	if (ctx.cr6.eq) goto loc_8264E224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x8264E224;
	sub_82659610(ctx, base);
loc_8264E224:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwzx r3,r26,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stwx r11,r26,r31
	PPC_STORE_U32(ctx.r26.u32 + ctx.r31.u32, ctx.r11.u32);
	// beq cr6,0x8264e23c
	if (ctx.cr6.eq) goto loc_8264E23C;
	// bl 0x82581e38
	ctx.lr = 0x8264E23C;
	sub_82581E38(ctx, base);
loc_8264E23C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264e24c
	if (ctx.cr6.eq) goto loc_8264E24C;
	// bl 0x82581e38
	ctx.lr = 0x8264E24C;
	sub_82581E38(ctx, base);
loc_8264E24C:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8264e260
	if (ctx.cr6.lt) goto loc_8264E260;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82186190
	ctx.lr = 0x8264E260;
	sub_82186190(ctx, base);
loc_8264E260:
	// stw r22,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r22.u32);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// stb r27,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r27.u8);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8264e188
	if (ctx.cr6.lt) goto loc_8264E188;
loc_8264E284:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// lwz r10,8(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// addi r18,r18,12
	ctx.r18.s64 = ctx.r18.s64 + 12;
	// add r21,r11,r21
	ctx.r21.u64 = ctx.r11.u64 + ctx.r21.u64;
	// cmplw cr6,r17,r10
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8264e144
	if (ctx.cr6.lt) goto loc_8264E144;
loc_8264E2A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826de8ec
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8264E2B0"))) PPC_WEAK_FUNC(sub_8264E2B0);
PPC_FUNC_IMPL(__imp__sub_8264E2B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r11,r11,-2988
	ctx.r11.s64 = ctx.r11.s64 + -2988;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8264e2e4
	if (ctx.cr6.eq) goto loc_8264E2E4;
	// bl 0x82186190
	ctx.lr = 0x8264E2E0;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8264E2E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264E2F8"))) PPC_WEAK_FUNC(sub_8264E2F8);
PPC_FUNC_IMPL(__imp__sub_8264E2F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-25808
	ctx.r4.s64 = ctx.r11.s64 + -25808;
	// bl 0x826de850
	ctx.lr = 0x8264E31C;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264e330
	if (!ctx.cr6.eq) goto loc_8264E330;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264E330:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264E348"))) PPC_WEAK_FUNC(sub_8264E348);
PPC_FUNC_IMPL(__imp__sub_8264E348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-25536
	ctx.r4.s64 = ctx.r11.s64 + -25536;
	// bl 0x826de850
	ctx.lr = 0x8264E36C;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264e380
	if (!ctx.cr6.eq) goto loc_8264E380;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264E380:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264E398"))) PPC_WEAK_FUNC(sub_8264E398);
PPC_FUNC_IMPL(__imp__sub_8264E398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-25272
	ctx.r4.s64 = ctx.r11.s64 + -25272;
	// bl 0x826de850
	ctx.lr = 0x8264E3BC;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264e3d0
	if (!ctx.cr6.eq) goto loc_8264E3D0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264E3D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264E3E8"))) PPC_WEAK_FUNC(sub_8264E3E8);
PPC_FUNC_IMPL(__imp__sub_8264E3E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-24992
	ctx.r4.s64 = ctx.r11.s64 + -24992;
	// bl 0x826de850
	ctx.lr = 0x8264E40C;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264e420
	if (!ctx.cr6.eq) goto loc_8264E420;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264E420:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264E438"))) PPC_WEAK_FUNC(sub_8264E438);
PPC_FUNC_IMPL(__imp__sub_8264E438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-24696
	ctx.r4.s64 = ctx.r11.s64 + -24696;
	// bl 0x826de850
	ctx.lr = 0x8264E45C;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264e470
	if (!ctx.cr6.eq) goto loc_8264E470;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264E470:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264E488"))) PPC_WEAK_FUNC(sub_8264E488);
PPC_FUNC_IMPL(__imp__sub_8264E488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// bl 0x826de850
	ctx.lr = 0x8264E4AC;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264e4c0
	if (!ctx.cr6.eq) goto loc_8264E4C0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264E4C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264E4D8"))) PPC_WEAK_FUNC(sub_8264E4D8);
PPC_FUNC_IMPL(__imp__sub_8264E4D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-24096
	ctx.r4.s64 = ctx.r11.s64 + -24096;
	// bl 0x826de850
	ctx.lr = 0x8264E4FC;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264e510
	if (!ctx.cr6.eq) goto loc_8264E510;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264E510:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264E528"))) PPC_WEAK_FUNC(sub_8264E528);
PPC_FUNC_IMPL(__imp__sub_8264E528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-23808
	ctx.r4.s64 = ctx.r11.s64 + -23808;
	// bl 0x826de850
	ctx.lr = 0x8264E54C;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264e560
	if (!ctx.cr6.eq) goto loc_8264E560;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264E560:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264E578"))) PPC_WEAK_FUNC(sub_8264E578);
PPC_FUNC_IMPL(__imp__sub_8264E578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-23536
	ctx.r4.s64 = ctx.r11.s64 + -23536;
	// bl 0x826de850
	ctx.lr = 0x8264E59C;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264e5b0
	if (!ctx.cr6.eq) goto loc_8264E5B0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264E5B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264E5C8"))) PPC_WEAK_FUNC(sub_8264E5C8);
PPC_FUNC_IMPL(__imp__sub_8264E5C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-23248
	ctx.r4.s64 = ctx.r11.s64 + -23248;
	// bl 0x826de850
	ctx.lr = 0x8264E5EC;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264e600
	if (!ctx.cr6.eq) goto loc_8264E600;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264E600:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264E618"))) PPC_WEAK_FUNC(sub_8264E618);
PPC_FUNC_IMPL(__imp__sub_8264E618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-22968
	ctx.r4.s64 = ctx.r11.s64 + -22968;
	// bl 0x826de850
	ctx.lr = 0x8264E63C;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264e650
	if (!ctx.cr6.eq) goto loc_8264E650;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264E650:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264E668"))) PPC_WEAK_FUNC(sub_8264E668);
PPC_FUNC_IMPL(__imp__sub_8264E668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-22680
	ctx.r4.s64 = ctx.r11.s64 + -22680;
	// bl 0x826de850
	ctx.lr = 0x8264E68C;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264e6a0
	if (!ctx.cr6.eq) goto loc_8264E6A0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264E6A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264E6B8"))) PPC_WEAK_FUNC(sub_8264E6B8);
PPC_FUNC_IMPL(__imp__sub_8264E6B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-22416
	ctx.r4.s64 = ctx.r11.s64 + -22416;
	// bl 0x826de850
	ctx.lr = 0x8264E6DC;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264e6f0
	if (!ctx.cr6.eq) goto loc_8264E6F0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264E6F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264E708"))) PPC_WEAK_FUNC(sub_8264E708);
PPC_FUNC_IMPL(__imp__sub_8264E708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-22176
	ctx.r4.s64 = ctx.r11.s64 + -22176;
	// bl 0x826de850
	ctx.lr = 0x8264E72C;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264e740
	if (!ctx.cr6.eq) goto loc_8264E740;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264E740:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264E758"))) PPC_WEAK_FUNC(sub_8264E758);
PPC_FUNC_IMPL(__imp__sub_8264E758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-21936
	ctx.r4.s64 = ctx.r11.s64 + -21936;
	// bl 0x826de850
	ctx.lr = 0x8264E77C;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264e790
	if (!ctx.cr6.eq) goto loc_8264E790;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264E790:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264E7A8"))) PPC_WEAK_FUNC(sub_8264E7A8);
PPC_FUNC_IMPL(__imp__sub_8264E7A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-21712
	ctx.r4.s64 = ctx.r11.s64 + -21712;
	// bl 0x826de850
	ctx.lr = 0x8264E7CC;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264e7e0
	if (!ctx.cr6.eq) goto loc_8264E7E0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264E7E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264E7F8"))) PPC_WEAK_FUNC(sub_8264E7F8);
PPC_FUNC_IMPL(__imp__sub_8264E7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-21496
	ctx.r4.s64 = ctx.r11.s64 + -21496;
	// bl 0x826de850
	ctx.lr = 0x8264E81C;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264e830
	if (!ctx.cr6.eq) goto loc_8264E830;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264E830:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264E848"))) PPC_WEAK_FUNC(sub_8264E848);
PPC_FUNC_IMPL(__imp__sub_8264E848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-21280
	ctx.r4.s64 = ctx.r11.s64 + -21280;
	// bl 0x826de850
	ctx.lr = 0x8264E86C;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264e880
	if (!ctx.cr6.eq) goto loc_8264E880;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264E880:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264E898"))) PPC_WEAK_FUNC(sub_8264E898);
PPC_FUNC_IMPL(__imp__sub_8264E898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-21064
	ctx.r4.s64 = ctx.r11.s64 + -21064;
	// bl 0x826de850
	ctx.lr = 0x8264E8BC;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264e8d0
	if (!ctx.cr6.eq) goto loc_8264E8D0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264E8D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264E8E8"))) PPC_WEAK_FUNC(sub_8264E8E8);
PPC_FUNC_IMPL(__imp__sub_8264E8E8) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82583528
	ctx.lr = 0x8264E910;
	sub_82583528(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x8264e924
	if (ctx.cr6.eq) goto loc_8264E924;
	// bl 0x82659610
	ctx.lr = 0x8264E924;
	sub_82659610(ctx, base);
loc_8264E924:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264e934
	if (ctx.cr6.eq) goto loc_8264E934;
	// bl 0x82581e38
	ctx.lr = 0x8264E934;
	sub_82581E38(ctx, base);
loc_8264E934:
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

__attribute__((alias("__imp__sub_8264E950"))) PPC_WEAK_FUNC(sub_8264E950);
PPC_FUNC_IMPL(__imp__sub_8264E950) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82583528
	ctx.lr = 0x8264E978;
	sub_82583528(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x8264e98c
	if (ctx.cr6.eq) goto loc_8264E98C;
	// bl 0x82659610
	ctx.lr = 0x8264E98C;
	sub_82659610(ctx, base);
loc_8264E98C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264e99c
	if (ctx.cr6.eq) goto loc_8264E99C;
	// bl 0x82581e38
	ctx.lr = 0x8264E99C;
	sub_82581E38(ctx, base);
loc_8264E99C:
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

__attribute__((alias("__imp__sub_8264E9B8"))) PPC_WEAK_FUNC(sub_8264E9B8);
PPC_FUNC_IMPL(__imp__sub_8264E9B8) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82583528
	ctx.lr = 0x8264E9E0;
	sub_82583528(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x8264e9f4
	if (ctx.cr6.eq) goto loc_8264E9F4;
	// bl 0x82659610
	ctx.lr = 0x8264E9F4;
	sub_82659610(ctx, base);
loc_8264E9F4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264ea04
	if (ctx.cr6.eq) goto loc_8264EA04;
	// bl 0x82581e38
	ctx.lr = 0x8264EA04;
	sub_82581E38(ctx, base);
loc_8264EA04:
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

__attribute__((alias("__imp__sub_8264EA20"))) PPC_WEAK_FUNC(sub_8264EA20);
PPC_FUNC_IMPL(__imp__sub_8264EA20) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82583528
	ctx.lr = 0x8264EA48;
	sub_82583528(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x8264ea5c
	if (ctx.cr6.eq) goto loc_8264EA5C;
	// bl 0x82659610
	ctx.lr = 0x8264EA5C;
	sub_82659610(ctx, base);
loc_8264EA5C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264ea6c
	if (ctx.cr6.eq) goto loc_8264EA6C;
	// bl 0x82581e38
	ctx.lr = 0x8264EA6C;
	sub_82581E38(ctx, base);
loc_8264EA6C:
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

__attribute__((alias("__imp__sub_8264EA88"))) PPC_WEAK_FUNC(sub_8264EA88);
PPC_FUNC_IMPL(__imp__sub_8264EA88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r10,-14892(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14892);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// bne cr6,0x8264eaf4
	if (!ctx.cr6.eq) goto loc_8264EAF4;
	// addi r31,r11,-14908
	ctx.r31.s64 = ctx.r11.s64 + -14908;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-14892(r9)
	PPC_STORE_U32(ctx.r9.u32 + -14892, ctx.r11.u32);
	// bl 0x82581e70
	ctx.lr = 0x8264EAC4;
	sub_82581E70(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32081
	ctx.r10.s64 = -2102460416;
	// addi r11,r11,-2940
	ctx.r11.s64 = ctx.r11.s64 + -2940;
	// addi r3,r10,-28760
	ctx.r3.s64 = ctx.r10.s64 + -28760;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x8264EADC;
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
loc_8264EAF4:
	// addi r3,r11,-14908
	ctx.r3.s64 = ctx.r11.s64 + -14908;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264EB10"))) PPC_WEAK_FUNC(sub_8264EB10);
PPC_FUNC_IMPL(__imp__sub_8264EB10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r10,-14872(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14872);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// bne cr6,0x8264eb7c
	if (!ctx.cr6.eq) goto loc_8264EB7C;
	// addi r31,r11,-14888
	ctx.r31.s64 = ctx.r11.s64 + -14888;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-14872(r9)
	PPC_STORE_U32(ctx.r9.u32 + -14872, ctx.r11.u32);
	// bl 0x82581e70
	ctx.lr = 0x8264EB4C;
	sub_82581E70(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32081
	ctx.r10.s64 = -2102460416;
	// addi r11,r11,-2904
	ctx.r11.s64 = ctx.r11.s64 + -2904;
	// addi r3,r10,-28776
	ctx.r3.s64 = ctx.r10.s64 + -28776;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x8264EB64;
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
loc_8264EB7C:
	// addi r3,r11,-14888
	ctx.r3.s64 = ctx.r11.s64 + -14888;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264EB98"))) PPC_WEAK_FUNC(sub_8264EB98);
PPC_FUNC_IMPL(__imp__sub_8264EB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r10,-14852(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14852);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// bne cr6,0x8264ec04
	if (!ctx.cr6.eq) goto loc_8264EC04;
	// addi r31,r11,-14868
	ctx.r31.s64 = ctx.r11.s64 + -14868;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-14852(r9)
	PPC_STORE_U32(ctx.r9.u32 + -14852, ctx.r11.u32);
	// bl 0x82581e70
	ctx.lr = 0x8264EBD4;
	sub_82581E70(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32081
	ctx.r10.s64 = -2102460416;
	// addi r11,r11,-2844
	ctx.r11.s64 = ctx.r11.s64 + -2844;
	// addi r3,r10,-28792
	ctx.r3.s64 = ctx.r10.s64 + -28792;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x8264EBEC;
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
loc_8264EC04:
	// addi r3,r11,-14868
	ctx.r3.s64 = ctx.r11.s64 + -14868;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264EC20"))) PPC_WEAK_FUNC(sub_8264EC20);
PPC_FUNC_IMPL(__imp__sub_8264EC20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8264EC50;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264ec7c
	if (ctx.cr6.eq) goto loc_8264EC7C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-2676
	ctx.r10.s64 = ctx.r11.s64 + -2676;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8264ec80
	goto loc_8264EC80;
loc_8264EC7C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8264EC80:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8264eccc
	if (!ctx.cr6.eq) goto loc_8264ECCC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8264ecac
	if (ctx.cr6.eq) goto loc_8264ECAC;
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
	ctx.lr = 0x8264ECAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8264ECAC:
	// lis r10,-32071
	ctx.r10.s64 = -2101805056;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,-27780(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27780);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x8264ECCC;
	sub_821E0968(ctx, base);
loc_8264ECCC:
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

__attribute__((alias("__imp__sub_8264ECE8"))) PPC_WEAK_FUNC(sub_8264ECE8);
PPC_FUNC_IMPL(__imp__sub_8264ECE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8264ED18;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264ed44
	if (ctx.cr6.eq) goto loc_8264ED44;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-2656
	ctx.r10.s64 = ctx.r11.s64 + -2656;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8264ed48
	goto loc_8264ED48;
loc_8264ED44:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8264ED48:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8264ed94
	if (!ctx.cr6.eq) goto loc_8264ED94;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8264ed74
	if (ctx.cr6.eq) goto loc_8264ED74;
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
	ctx.lr = 0x8264ED74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8264ED74:
	// lis r10,-32071
	ctx.r10.s64 = -2101805056;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,-27780(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27780);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x8264ED94;
	sub_821E0968(ctx, base);
loc_8264ED94:
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

__attribute__((alias("__imp__sub_8264EDB0"))) PPC_WEAK_FUNC(sub_8264EDB0);
PPC_FUNC_IMPL(__imp__sub_8264EDB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8264EDE0;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264ee0c
	if (ctx.cr6.eq) goto loc_8264EE0C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-2636
	ctx.r10.s64 = ctx.r11.s64 + -2636;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8264ee10
	goto loc_8264EE10;
loc_8264EE0C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8264EE10:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8264ee5c
	if (!ctx.cr6.eq) goto loc_8264EE5C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8264ee3c
	if (ctx.cr6.eq) goto loc_8264EE3C;
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
	ctx.lr = 0x8264EE3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8264EE3C:
	// lis r10,-32071
	ctx.r10.s64 = -2101805056;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,-27780(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27780);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x8264EE5C;
	sub_821E0968(ctx, base);
loc_8264EE5C:
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

__attribute__((alias("__imp__sub_8264EE78"))) PPC_WEAK_FUNC(sub_8264EE78);
PPC_FUNC_IMPL(__imp__sub_8264EE78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8264EEA8;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264eed4
	if (ctx.cr6.eq) goto loc_8264EED4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-2616
	ctx.r10.s64 = ctx.r11.s64 + -2616;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8264eed8
	goto loc_8264EED8;
loc_8264EED4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8264EED8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8264ef24
	if (!ctx.cr6.eq) goto loc_8264EF24;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8264ef04
	if (ctx.cr6.eq) goto loc_8264EF04;
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
	ctx.lr = 0x8264EF04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8264EF04:
	// lis r10,-32071
	ctx.r10.s64 = -2101805056;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,-27780(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27780);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x8264EF24;
	sub_821E0968(ctx, base);
loc_8264EF24:
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

__attribute__((alias("__imp__sub_8264EF40"))) PPC_WEAK_FUNC(sub_8264EF40);
PPC_FUNC_IMPL(__imp__sub_8264EF40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8264EF70;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264ef9c
	if (ctx.cr6.eq) goto loc_8264EF9C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-2596
	ctx.r10.s64 = ctx.r11.s64 + -2596;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8264efa0
	goto loc_8264EFA0;
loc_8264EF9C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8264EFA0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8264efec
	if (!ctx.cr6.eq) goto loc_8264EFEC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8264efcc
	if (ctx.cr6.eq) goto loc_8264EFCC;
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
	ctx.lr = 0x8264EFCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8264EFCC:
	// lis r10,-32071
	ctx.r10.s64 = -2101805056;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,-27780(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27780);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x8264EFEC;
	sub_821E0968(ctx, base);
loc_8264EFEC:
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

__attribute__((alias("__imp__sub_8264F008"))) PPC_WEAK_FUNC(sub_8264F008);
PPC_FUNC_IMPL(__imp__sub_8264F008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8264F038;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264f064
	if (ctx.cr6.eq) goto loc_8264F064;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-2576
	ctx.r10.s64 = ctx.r11.s64 + -2576;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8264f068
	goto loc_8264F068;
loc_8264F064:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8264F068:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8264f0b4
	if (!ctx.cr6.eq) goto loc_8264F0B4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8264f094
	if (ctx.cr6.eq) goto loc_8264F094;
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
	ctx.lr = 0x8264F094;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8264F094:
	// lis r10,-32071
	ctx.r10.s64 = -2101805056;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,-27780(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27780);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x8264F0B4;
	sub_821E0968(ctx, base);
loc_8264F0B4:
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

__attribute__((alias("__imp__sub_8264F0D0"))) PPC_WEAK_FUNC(sub_8264F0D0);
PPC_FUNC_IMPL(__imp__sub_8264F0D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8264F100;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264f12c
	if (ctx.cr6.eq) goto loc_8264F12C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-2556
	ctx.r10.s64 = ctx.r11.s64 + -2556;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8264f130
	goto loc_8264F130;
loc_8264F12C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8264F130:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8264f17c
	if (!ctx.cr6.eq) goto loc_8264F17C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8264f15c
	if (ctx.cr6.eq) goto loc_8264F15C;
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
	ctx.lr = 0x8264F15C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8264F15C:
	// lis r10,-32071
	ctx.r10.s64 = -2101805056;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,-27780(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27780);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x8264F17C;
	sub_821E0968(ctx, base);
loc_8264F17C:
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

__attribute__((alias("__imp__sub_8264F198"))) PPC_WEAK_FUNC(sub_8264F198);
PPC_FUNC_IMPL(__imp__sub_8264F198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8264F1C8;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264f1f4
	if (ctx.cr6.eq) goto loc_8264F1F4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-2536
	ctx.r10.s64 = ctx.r11.s64 + -2536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8264f1f8
	goto loc_8264F1F8;
loc_8264F1F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8264F1F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8264f244
	if (!ctx.cr6.eq) goto loc_8264F244;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8264f224
	if (ctx.cr6.eq) goto loc_8264F224;
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
	ctx.lr = 0x8264F224;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8264F224:
	// lis r10,-32071
	ctx.r10.s64 = -2101805056;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,-27780(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27780);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x8264F244;
	sub_821E0968(ctx, base);
loc_8264F244:
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

__attribute__((alias("__imp__sub_8264F260"))) PPC_WEAK_FUNC(sub_8264F260);
PPC_FUNC_IMPL(__imp__sub_8264F260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8264F290;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264f2bc
	if (ctx.cr6.eq) goto loc_8264F2BC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-2516
	ctx.r10.s64 = ctx.r11.s64 + -2516;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8264f2c0
	goto loc_8264F2C0;
loc_8264F2BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8264F2C0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8264f30c
	if (!ctx.cr6.eq) goto loc_8264F30C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8264f2ec
	if (ctx.cr6.eq) goto loc_8264F2EC;
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
	ctx.lr = 0x8264F2EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8264F2EC:
	// lis r10,-32071
	ctx.r10.s64 = -2101805056;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,-27780(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27780);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x8264F30C;
	sub_821E0968(ctx, base);
loc_8264F30C:
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

__attribute__((alias("__imp__sub_8264F328"))) PPC_WEAK_FUNC(sub_8264F328);
PPC_FUNC_IMPL(__imp__sub_8264F328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8264F358;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264f384
	if (ctx.cr6.eq) goto loc_8264F384;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-2496
	ctx.r10.s64 = ctx.r11.s64 + -2496;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8264f388
	goto loc_8264F388;
loc_8264F384:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8264F388:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8264f3d4
	if (!ctx.cr6.eq) goto loc_8264F3D4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8264f3b4
	if (ctx.cr6.eq) goto loc_8264F3B4;
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
	ctx.lr = 0x8264F3B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8264F3B4:
	// lis r10,-32071
	ctx.r10.s64 = -2101805056;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,-27780(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27780);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x8264F3D4;
	sub_821E0968(ctx, base);
loc_8264F3D4:
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

__attribute__((alias("__imp__sub_8264F3F0"))) PPC_WEAK_FUNC(sub_8264F3F0);
PPC_FUNC_IMPL(__imp__sub_8264F3F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8264F420;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264f44c
	if (ctx.cr6.eq) goto loc_8264F44C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-2476
	ctx.r10.s64 = ctx.r11.s64 + -2476;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8264f450
	goto loc_8264F450;
loc_8264F44C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8264F450:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8264f49c
	if (!ctx.cr6.eq) goto loc_8264F49C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8264f47c
	if (ctx.cr6.eq) goto loc_8264F47C;
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
	ctx.lr = 0x8264F47C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8264F47C:
	// lis r10,-32071
	ctx.r10.s64 = -2101805056;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,-27780(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27780);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x8264F49C;
	sub_821E0968(ctx, base);
loc_8264F49C:
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

__attribute__((alias("__imp__sub_8264F4B8"))) PPC_WEAK_FUNC(sub_8264F4B8);
PPC_FUNC_IMPL(__imp__sub_8264F4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8264F4E8;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264f514
	if (ctx.cr6.eq) goto loc_8264F514;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-2456
	ctx.r10.s64 = ctx.r11.s64 + -2456;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8264f518
	goto loc_8264F518;
loc_8264F514:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8264F518:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8264f564
	if (!ctx.cr6.eq) goto loc_8264F564;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8264f544
	if (ctx.cr6.eq) goto loc_8264F544;
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
	ctx.lr = 0x8264F544;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8264F544:
	// lis r10,-32071
	ctx.r10.s64 = -2101805056;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,-27780(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27780);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x8264F564;
	sub_821E0968(ctx, base);
loc_8264F564:
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

__attribute__((alias("__imp__sub_8264F580"))) PPC_WEAK_FUNC(sub_8264F580);
PPC_FUNC_IMPL(__imp__sub_8264F580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8264F5B0;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264f5dc
	if (ctx.cr6.eq) goto loc_8264F5DC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-2436
	ctx.r10.s64 = ctx.r11.s64 + -2436;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8264f5e0
	goto loc_8264F5E0;
loc_8264F5DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8264F5E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8264f62c
	if (!ctx.cr6.eq) goto loc_8264F62C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8264f60c
	if (ctx.cr6.eq) goto loc_8264F60C;
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
	ctx.lr = 0x8264F60C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8264F60C:
	// lis r10,-32071
	ctx.r10.s64 = -2101805056;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,-27780(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27780);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x8264F62C;
	sub_821E0968(ctx, base);
loc_8264F62C:
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

__attribute__((alias("__imp__sub_8264F648"))) PPC_WEAK_FUNC(sub_8264F648);
PPC_FUNC_IMPL(__imp__sub_8264F648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8264F678;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264f6a4
	if (ctx.cr6.eq) goto loc_8264F6A4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-2416
	ctx.r10.s64 = ctx.r11.s64 + -2416;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8264f6a8
	goto loc_8264F6A8;
loc_8264F6A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8264F6A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8264f6f4
	if (!ctx.cr6.eq) goto loc_8264F6F4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8264f6d4
	if (ctx.cr6.eq) goto loc_8264F6D4;
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
	ctx.lr = 0x8264F6D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8264F6D4:
	// lis r10,-32071
	ctx.r10.s64 = -2101805056;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,-27780(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27780);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x8264F6F4;
	sub_821E0968(ctx, base);
loc_8264F6F4:
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

__attribute__((alias("__imp__sub_8264F710"))) PPC_WEAK_FUNC(sub_8264F710);
PPC_FUNC_IMPL(__imp__sub_8264F710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8264F740;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264f76c
	if (ctx.cr6.eq) goto loc_8264F76C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-2396
	ctx.r10.s64 = ctx.r11.s64 + -2396;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8264f770
	goto loc_8264F770;
loc_8264F76C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8264F770:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8264f7bc
	if (!ctx.cr6.eq) goto loc_8264F7BC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8264f79c
	if (ctx.cr6.eq) goto loc_8264F79C;
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
	ctx.lr = 0x8264F79C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8264F79C:
	// lis r10,-32071
	ctx.r10.s64 = -2101805056;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,-27780(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27780);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x8264F7BC;
	sub_821E0968(ctx, base);
loc_8264F7BC:
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

__attribute__((alias("__imp__sub_8264F7D8"))) PPC_WEAK_FUNC(sub_8264F7D8);
PPC_FUNC_IMPL(__imp__sub_8264F7D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8264F808;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264f834
	if (ctx.cr6.eq) goto loc_8264F834;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-2376
	ctx.r10.s64 = ctx.r11.s64 + -2376;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8264f838
	goto loc_8264F838;
loc_8264F834:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8264F838:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8264f884
	if (!ctx.cr6.eq) goto loc_8264F884;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8264f864
	if (ctx.cr6.eq) goto loc_8264F864;
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
	ctx.lr = 0x8264F864;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8264F864:
	// lis r10,-32071
	ctx.r10.s64 = -2101805056;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,-27780(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27780);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x8264F884;
	sub_821E0968(ctx, base);
loc_8264F884:
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

__attribute__((alias("__imp__sub_8264F8A0"))) PPC_WEAK_FUNC(sub_8264F8A0);
PPC_FUNC_IMPL(__imp__sub_8264F8A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8264F8D0;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264f8fc
	if (ctx.cr6.eq) goto loc_8264F8FC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-2356
	ctx.r10.s64 = ctx.r11.s64 + -2356;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8264f900
	goto loc_8264F900;
loc_8264F8FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8264F900:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8264f94c
	if (!ctx.cr6.eq) goto loc_8264F94C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8264f92c
	if (ctx.cr6.eq) goto loc_8264F92C;
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
	ctx.lr = 0x8264F92C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8264F92C:
	// lis r10,-32071
	ctx.r10.s64 = -2101805056;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,-27780(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27780);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x8264F94C;
	sub_821E0968(ctx, base);
loc_8264F94C:
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

__attribute__((alias("__imp__sub_8264F968"))) PPC_WEAK_FUNC(sub_8264F968);
PPC_FUNC_IMPL(__imp__sub_8264F968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8264F998;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264f9c4
	if (ctx.cr6.eq) goto loc_8264F9C4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-2336
	ctx.r10.s64 = ctx.r11.s64 + -2336;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8264f9c8
	goto loc_8264F9C8;
loc_8264F9C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8264F9C8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8264fa14
	if (!ctx.cr6.eq) goto loc_8264FA14;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8264f9f4
	if (ctx.cr6.eq) goto loc_8264F9F4;
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
	ctx.lr = 0x8264F9F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8264F9F4:
	// lis r10,-32071
	ctx.r10.s64 = -2101805056;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,-27780(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27780);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x8264FA14;
	sub_821E0968(ctx, base);
loc_8264FA14:
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

__attribute__((alias("__imp__sub_8264FA30"))) PPC_WEAK_FUNC(sub_8264FA30);
PPC_FUNC_IMPL(__imp__sub_8264FA30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8264FA60;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264fa8c
	if (ctx.cr6.eq) goto loc_8264FA8C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-2316
	ctx.r10.s64 = ctx.r11.s64 + -2316;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8264fa90
	goto loc_8264FA90;
loc_8264FA8C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8264FA90:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8264fadc
	if (!ctx.cr6.eq) goto loc_8264FADC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8264fabc
	if (ctx.cr6.eq) goto loc_8264FABC;
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
	ctx.lr = 0x8264FABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8264FABC:
	// lis r10,-32071
	ctx.r10.s64 = -2101805056;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,-27780(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27780);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x8264FADC;
	sub_821E0968(ctx, base);
loc_8264FADC:
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

__attribute__((alias("__imp__sub_8264FAF8"))) PPC_WEAK_FUNC(sub_8264FAF8);
PPC_FUNC_IMPL(__imp__sub_8264FAF8) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82617058
	ctx.lr = 0x8264FB18;
	sub_82617058(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x8264fb2c
	if (ctx.cr6.eq) goto loc_8264FB2C;
	// bl 0x82659610
	ctx.lr = 0x8264FB2C;
	sub_82659610(ctx, base);
loc_8264FB2C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264fb3c
	if (ctx.cr6.eq) goto loc_8264FB3C;
	// bl 0x82581e38
	ctx.lr = 0x8264FB3C;
	sub_82581E38(ctx, base);
loc_8264FB3C:
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

__attribute__((alias("__imp__sub_8264FB58"))) PPC_WEAK_FUNC(sub_8264FB58);
PPC_FUNC_IMPL(__imp__sub_8264FB58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8264FB60;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,-14848(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -14848);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8264fb88
	if (!ctx.cr6.eq) goto loc_8264FB88;
	// bl 0x8264ea88
	ctx.lr = 0x8264FB80;
	sub_8264EA88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,-14848(r29)
	PPC_STORE_U32(ctx.r29.u32 + -14848, ctx.r4.u32);
loc_8264FB88:
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
	ctx.lr = 0x8264FBA0;
	sub_82582648(ctx, base);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,-6120
	ctx.r6.s64 = ctx.r11.s64 + -6120;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,6088
	ctx.r5.s64 = ctx.r11.s64 + 6088;
	// bl 0x826df418
	ctx.lr = 0x8264FBC0;
	sub_826DF418(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// beq cr6,0x8264fbd0
	if (ctx.cr6.eq) goto loc_8264FBD0;
	// bl 0x82659610
	ctx.lr = 0x8264FBD0;
	sub_82659610(ctx, base);
loc_8264FBD0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264fbe0
	if (ctx.cr6.eq) goto loc_8264FBE0;
	// bl 0x82581e38
	ctx.lr = 0x8264FBE0;
	sub_82581E38(ctx, base);
loc_8264FBE0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8264FBF0"))) PPC_WEAK_FUNC(sub_8264FBF0);
PPC_FUNC_IMPL(__imp__sub_8264FBF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8264FBF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,-14844(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -14844);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8264fc20
	if (!ctx.cr6.eq) goto loc_8264FC20;
	// bl 0x8264eb10
	ctx.lr = 0x8264FC18;
	sub_8264EB10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,-14844(r29)
	PPC_STORE_U32(ctx.r29.u32 + -14844, ctx.r4.u32);
loc_8264FC20:
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
	ctx.lr = 0x8264FC38;
	sub_82582648(ctx, base);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,20084
	ctx.r6.s64 = ctx.r11.s64 + 20084;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,6088
	ctx.r5.s64 = ctx.r11.s64 + 6088;
	// bl 0x826df418
	ctx.lr = 0x8264FC58;
	sub_826DF418(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// beq cr6,0x8264fc68
	if (ctx.cr6.eq) goto loc_8264FC68;
	// bl 0x82659610
	ctx.lr = 0x8264FC68;
	sub_82659610(ctx, base);
loc_8264FC68:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264fc78
	if (ctx.cr6.eq) goto loc_8264FC78;
	// bl 0x82581e38
	ctx.lr = 0x8264FC78;
	sub_82581E38(ctx, base);
loc_8264FC78:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8264FC88"))) PPC_WEAK_FUNC(sub_8264FC88);
PPC_FUNC_IMPL(__imp__sub_8264FC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8264FC90;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,-14840(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -14840);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8264fcb8
	if (!ctx.cr6.eq) goto loc_8264FCB8;
	// bl 0x8264eb98
	ctx.lr = 0x8264FCB0;
	sub_8264EB98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,-14840(r29)
	PPC_STORE_U32(ctx.r29.u32 + -14840, ctx.r4.u32);
loc_8264FCB8:
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
	ctx.lr = 0x8264FCD0;
	sub_82582648(ctx, base);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,-4948
	ctx.r6.s64 = ctx.r11.s64 + -4948;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,6088
	ctx.r5.s64 = ctx.r11.s64 + 6088;
	// bl 0x826df418
	ctx.lr = 0x8264FCF0;
	sub_826DF418(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// beq cr6,0x8264fd00
	if (ctx.cr6.eq) goto loc_8264FD00;
	// bl 0x82659610
	ctx.lr = 0x8264FD00;
	sub_82659610(ctx, base);
loc_8264FD00:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264fd10
	if (ctx.cr6.eq) goto loc_8264FD10;
	// bl 0x82581e38
	ctx.lr = 0x8264FD10;
	sub_82581E38(ctx, base);
loc_8264FD10:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8264FD20"))) PPC_WEAK_FUNC(sub_8264FD20);
PPC_FUNC_IMPL(__imp__sub_8264FD20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8264FD28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r11,49(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 49);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264fda8
	if (!ctx.cr6.eq) goto loc_8264FDA8;
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
loc_8264FD4C:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8264fd68
	if (ctx.cr6.lt) goto loc_8264FD68;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x8264fd6c
	goto loc_8264FD6C;
loc_8264FD68:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_8264FD6C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x8216a080
	ctx.lr = 0x8264FD78;
	sub_8216A080(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264fd94
	if (ctx.cr6.eq) goto loc_8264FD94;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x8264fd9c
	goto loc_8264FD9C;
loc_8264FD94:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8264FD9C:
	// lbz r11,49(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 49);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264fd4c
	if (ctx.cr6.eq) goto loc_8264FD4C;
loc_8264FDA8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8264FDB8"))) PPC_WEAK_FUNC(sub_8264FDB8);
PPC_FUNC_IMPL(__imp__sub_8264FDB8) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822de550
	ctx.lr = 0x8264FDD8;
	sub_822DE550(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x8264fdec
	if (ctx.cr6.eq) goto loc_8264FDEC;
	// bl 0x82659610
	ctx.lr = 0x8264FDEC;
	sub_82659610(ctx, base);
loc_8264FDEC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264fdfc
	if (ctx.cr6.eq) goto loc_8264FDFC;
	// bl 0x82581e38
	ctx.lr = 0x8264FDFC;
	sub_82581E38(ctx, base);
loc_8264FDFC:
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

__attribute__((alias("__imp__sub_8264FE18"))) PPC_WEAK_FUNC(sub_8264FE18);
PPC_FUNC_IMPL(__imp__sub_8264FE18) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822de5e8
	ctx.lr = 0x8264FE38;
	sub_822DE5E8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x8264fe4c
	if (ctx.cr6.eq) goto loc_8264FE4C;
	// bl 0x82659610
	ctx.lr = 0x8264FE4C;
	sub_82659610(ctx, base);
loc_8264FE4C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264fe5c
	if (ctx.cr6.eq) goto loc_8264FE5C;
	// bl 0x82581e38
	ctx.lr = 0x8264FE5C;
	sub_82581E38(ctx, base);
loc_8264FE5C:
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

__attribute__((alias("__imp__sub_8264FE78"))) PPC_WEAK_FUNC(sub_8264FE78);
PPC_FUNC_IMPL(__imp__sub_8264FE78) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8264fb58
	ctx.lr = 0x8264FE98;
	sub_8264FB58(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x8264feac
	if (ctx.cr6.eq) goto loc_8264FEAC;
	// bl 0x82659610
	ctx.lr = 0x8264FEAC;
	sub_82659610(ctx, base);
loc_8264FEAC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264febc
	if (ctx.cr6.eq) goto loc_8264FEBC;
	// bl 0x82581e38
	ctx.lr = 0x8264FEBC;
	sub_82581E38(ctx, base);
loc_8264FEBC:
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

__attribute__((alias("__imp__sub_8264FED8"))) PPC_WEAK_FUNC(sub_8264FED8);
PPC_FUNC_IMPL(__imp__sub_8264FED8) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8264fbf0
	ctx.lr = 0x8264FEF8;
	sub_8264FBF0(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x8264ff0c
	if (ctx.cr6.eq) goto loc_8264FF0C;
	// bl 0x82659610
	ctx.lr = 0x8264FF0C;
	sub_82659610(ctx, base);
loc_8264FF0C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264ff1c
	if (ctx.cr6.eq) goto loc_8264FF1C;
	// bl 0x82581e38
	ctx.lr = 0x8264FF1C;
	sub_82581E38(ctx, base);
loc_8264FF1C:
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

__attribute__((alias("__imp__sub_8264FF38"))) PPC_WEAK_FUNC(sub_8264FF38);
PPC_FUNC_IMPL(__imp__sub_8264FF38) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822de680
	ctx.lr = 0x8264FF58;
	sub_822DE680(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x8264ff6c
	if (ctx.cr6.eq) goto loc_8264FF6C;
	// bl 0x82659610
	ctx.lr = 0x8264FF6C;
	sub_82659610(ctx, base);
loc_8264FF6C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264ff7c
	if (ctx.cr6.eq) goto loc_8264FF7C;
	// bl 0x82581e38
	ctx.lr = 0x8264FF7C;
	sub_82581E38(ctx, base);
loc_8264FF7C:
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

__attribute__((alias("__imp__sub_8264FF98"))) PPC_WEAK_FUNC(sub_8264FF98);
PPC_FUNC_IMPL(__imp__sub_8264FF98) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82296100
	ctx.lr = 0x8264FFB8;
	sub_82296100(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x8264ffcc
	if (ctx.cr6.eq) goto loc_8264FFCC;
	// bl 0x82659610
	ctx.lr = 0x8264FFCC;
	sub_82659610(ctx, base);
loc_8264FFCC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264ffdc
	if (ctx.cr6.eq) goto loc_8264FFDC;
	// bl 0x82581e38
	ctx.lr = 0x8264FFDC;
	sub_82581E38(ctx, base);
loc_8264FFDC:
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

__attribute__((alias("__imp__sub_8264FFF8"))) PPC_WEAK_FUNC(sub_8264FFF8);
PPC_FUNC_IMPL(__imp__sub_8264FFF8) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8264fc88
	ctx.lr = 0x82650018;
	sub_8264FC88(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x8265002c
	if (ctx.cr6.eq) goto loc_8265002C;
	// bl 0x82659610
	ctx.lr = 0x8265002C;
	sub_82659610(ctx, base);
loc_8265002C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265003c
	if (ctx.cr6.eq) goto loc_8265003C;
	// bl 0x82581e38
	ctx.lr = 0x8265003C;
	sub_82581E38(ctx, base);
loc_8265003C:
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

__attribute__((alias("__imp__sub_82650058"))) PPC_WEAK_FUNC(sub_82650058);
PPC_FUNC_IMPL(__imp__sub_82650058) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371620
	ctx.lr = 0x82650078;
	sub_82371620(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x8265008c
	if (ctx.cr6.eq) goto loc_8265008C;
	// bl 0x82659610
	ctx.lr = 0x8265008C;
	sub_82659610(ctx, base);
loc_8265008C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265009c
	if (ctx.cr6.eq) goto loc_8265009C;
	// bl 0x82581e38
	ctx.lr = 0x8265009C;
	sub_82581E38(ctx, base);
loc_8265009C:
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

__attribute__((alias("__imp__sub_826500B8"))) PPC_WEAK_FUNC(sub_826500B8);
PPC_FUNC_IMPL(__imp__sub_826500B8) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8216f658
	ctx.lr = 0x826500D8;
	sub_8216F658(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x826500ec
	if (ctx.cr6.eq) goto loc_826500EC;
	// bl 0x82659610
	ctx.lr = 0x826500EC;
	sub_82659610(ctx, base);
loc_826500EC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826500fc
	if (ctx.cr6.eq) goto loc_826500FC;
	// bl 0x82581e38
	ctx.lr = 0x826500FC;
	sub_82581E38(ctx, base);
loc_826500FC:
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

__attribute__((alias("__imp__sub_82650118"))) PPC_WEAK_FUNC(sub_82650118);
PPC_FUNC_IMPL(__imp__sub_82650118) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8261d9f0
	ctx.lr = 0x82650138;
	sub_8261D9F0(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x8265014c
	if (ctx.cr6.eq) goto loc_8265014C;
	// bl 0x82659610
	ctx.lr = 0x8265014C;
	sub_82659610(ctx, base);
loc_8265014C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265015c
	if (ctx.cr6.eq) goto loc_8265015C;
	// bl 0x82581e38
	ctx.lr = 0x8265015C;
	sub_82581E38(ctx, base);
loc_8265015C:
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

__attribute__((alias("__imp__sub_82650178"))) PPC_WEAK_FUNC(sub_82650178);
PPC_FUNC_IMPL(__imp__sub_82650178) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8216f6f0
	ctx.lr = 0x82650198;
	sub_8216F6F0(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x826501ac
	if (ctx.cr6.eq) goto loc_826501AC;
	// bl 0x82659610
	ctx.lr = 0x826501AC;
	sub_82659610(ctx, base);
loc_826501AC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826501bc
	if (ctx.cr6.eq) goto loc_826501BC;
	// bl 0x82581e38
	ctx.lr = 0x826501BC;
	sub_82581E38(ctx, base);
loc_826501BC:
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

__attribute__((alias("__imp__sub_826501D8"))) PPC_WEAK_FUNC(sub_826501D8);
PPC_FUNC_IMPL(__imp__sub_826501D8) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825fc808
	ctx.lr = 0x826501F8;
	sub_825FC808(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x8265020c
	if (ctx.cr6.eq) goto loc_8265020C;
	// bl 0x82659610
	ctx.lr = 0x8265020C;
	sub_82659610(ctx, base);
loc_8265020C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265021c
	if (ctx.cr6.eq) goto loc_8265021C;
	// bl 0x82581e38
	ctx.lr = 0x8265021C;
	sub_82581E38(ctx, base);
loc_8265021C:
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

__attribute__((alias("__imp__sub_82650238"))) PPC_WEAK_FUNC(sub_82650238);
PPC_FUNC_IMPL(__imp__sub_82650238) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82163620
	ctx.lr = 0x82650258;
	sub_82163620(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bne cr6,0x8265026c
	if (!ctx.cr6.eq) goto loc_8265026C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265026C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x8265027c
	if (ctx.cr6.eq) goto loc_8265027C;
	// bl 0x82659610
	ctx.lr = 0x8265027C;
	sub_82659610(ctx, base);
loc_8265027C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82650290
	if (ctx.cr6.eq) goto loc_82650290;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x82581e38
	ctx.lr = 0x82650290;
	sub_82581E38(ctx, base);
loc_82650290:
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

__attribute__((alias("__imp__sub_826502A8"))) PPC_WEAK_FUNC(sub_826502A8);
PPC_FUNC_IMPL(__imp__sub_826502A8) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8228d9e8
	ctx.lr = 0x826502C8;
	sub_8228D9E8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x826502dc
	if (ctx.cr6.eq) goto loc_826502DC;
	// bl 0x82659610
	ctx.lr = 0x826502DC;
	sub_82659610(ctx, base);
loc_826502DC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826502ec
	if (ctx.cr6.eq) goto loc_826502EC;
	// bl 0x82581e38
	ctx.lr = 0x826502EC;
	sub_82581E38(ctx, base);
loc_826502EC:
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

__attribute__((alias("__imp__sub_82650308"))) PPC_WEAK_FUNC(sub_82650308);
PPC_FUNC_IMPL(__imp__sub_82650308) {
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
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823b7870
	ctx.lr = 0x8265032C;
	sub_823B7870(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82650344
	if (ctx.cr6.eq) goto loc_82650344;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82650348
	if (ctx.cr6.eq) goto loc_82650348;
loc_82650344:
	// twi 31,r0,22
loc_82650348:
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82650378
	if (ctx.cr6.eq) goto loc_82650378;
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
loc_82650378:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82650384
	if (!ctx.cr6.eq) goto loc_82650384;
	// twi 31,r0,22
loc_82650384:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82650394
	if (!ctx.cr6.eq) goto loc_82650394;
	// twi 31,r0,22
loc_82650394:
	// lwz r3,40(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
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

__attribute__((alias("__imp__sub_826503B0"))) PPC_WEAK_FUNC(sub_826503B0);
PPC_FUNC_IMPL(__imp__sub_826503B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x826503B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,15
	ctx.r11.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_826503E4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826503e4
	if (!ctx.cr6.eq) goto loc_826503E4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82650408;
	sub_82161E08(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// bl 0x8264ec20
	ctx.lr = 0x82650428;
	sub_8264EC20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82650438"))) PPC_WEAK_FUNC(sub_82650438);
PPC_FUNC_IMPL(__imp__sub_82650438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82650440;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,15
	ctx.r11.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8265046C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8265046c
	if (!ctx.cr6.eq) goto loc_8265046C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82650490;
	sub_82161E08(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// bl 0x8264ece8
	ctx.lr = 0x826504B0;
	sub_8264ECE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826504C0"))) PPC_WEAK_FUNC(sub_826504C0);
PPC_FUNC_IMPL(__imp__sub_826504C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x826504C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,15
	ctx.r11.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_826504F4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826504f4
	if (!ctx.cr6.eq) goto loc_826504F4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82650518;
	sub_82161E08(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// bl 0x8264edb0
	ctx.lr = 0x82650538;
	sub_8264EDB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82650548"))) PPC_WEAK_FUNC(sub_82650548);
PPC_FUNC_IMPL(__imp__sub_82650548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82650550;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,15
	ctx.r11.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8265057C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8265057c
	if (!ctx.cr6.eq) goto loc_8265057C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x826505A0;
	sub_82161E08(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// bl 0x8264ee78
	ctx.lr = 0x826505C0;
	sub_8264EE78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826505D0"))) PPC_WEAK_FUNC(sub_826505D0);
PPC_FUNC_IMPL(__imp__sub_826505D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x826505D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,15
	ctx.r11.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82650604:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82650604
	if (!ctx.cr6.eq) goto loc_82650604;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82650628;
	sub_82161E08(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// bl 0x8264ef40
	ctx.lr = 0x82650648;
	sub_8264EF40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82650658"))) PPC_WEAK_FUNC(sub_82650658);
PPC_FUNC_IMPL(__imp__sub_82650658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82650660;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,15
	ctx.r11.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8265068C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8265068c
	if (!ctx.cr6.eq) goto loc_8265068C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x826506B0;
	sub_82161E08(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// bl 0x8264f008
	ctx.lr = 0x826506D0;
	sub_8264F008(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826506E0"))) PPC_WEAK_FUNC(sub_826506E0);
PPC_FUNC_IMPL(__imp__sub_826506E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x826506E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,15
	ctx.r11.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82650714:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82650714
	if (!ctx.cr6.eq) goto loc_82650714;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82650738;
	sub_82161E08(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// bl 0x8264f0d0
	ctx.lr = 0x82650758;
	sub_8264F0D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82650768"))) PPC_WEAK_FUNC(sub_82650768);
PPC_FUNC_IMPL(__imp__sub_82650768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82650770;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,15
	ctx.r11.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8265079C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8265079c
	if (!ctx.cr6.eq) goto loc_8265079C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x826507C0;
	sub_82161E08(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// bl 0x8264f198
	ctx.lr = 0x826507E0;
	sub_8264F198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826507F0"))) PPC_WEAK_FUNC(sub_826507F0);
PPC_FUNC_IMPL(__imp__sub_826507F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x826507F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,15
	ctx.r11.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82650824:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82650824
	if (!ctx.cr6.eq) goto loc_82650824;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82650848;
	sub_82161E08(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// bl 0x8264f260
	ctx.lr = 0x82650868;
	sub_8264F260(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82650878"))) PPC_WEAK_FUNC(sub_82650878);
PPC_FUNC_IMPL(__imp__sub_82650878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82650880;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,15
	ctx.r11.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_826508AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826508ac
	if (!ctx.cr6.eq) goto loc_826508AC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x826508D0;
	sub_82161E08(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// bl 0x8264f328
	ctx.lr = 0x826508F0;
	sub_8264F328(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82650900"))) PPC_WEAK_FUNC(sub_82650900);
PPC_FUNC_IMPL(__imp__sub_82650900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82650908;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,15
	ctx.r11.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82650934:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82650934
	if (!ctx.cr6.eq) goto loc_82650934;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82650958;
	sub_82161E08(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// bl 0x8264f3f0
	ctx.lr = 0x82650978;
	sub_8264F3F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82650988"))) PPC_WEAK_FUNC(sub_82650988);
PPC_FUNC_IMPL(__imp__sub_82650988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82650990;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,15
	ctx.r11.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_826509BC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826509bc
	if (!ctx.cr6.eq) goto loc_826509BC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x826509E0;
	sub_82161E08(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// bl 0x8264f4b8
	ctx.lr = 0x82650A00;
	sub_8264F4B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82650A10"))) PPC_WEAK_FUNC(sub_82650A10);
PPC_FUNC_IMPL(__imp__sub_82650A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82650A18;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,15
	ctx.r11.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82650A44:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82650a44
	if (!ctx.cr6.eq) goto loc_82650A44;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82650A68;
	sub_82161E08(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// bl 0x8264f580
	ctx.lr = 0x82650A88;
	sub_8264F580(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82650A98"))) PPC_WEAK_FUNC(sub_82650A98);
PPC_FUNC_IMPL(__imp__sub_82650A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82650AA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,15
	ctx.r11.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82650ACC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82650acc
	if (!ctx.cr6.eq) goto loc_82650ACC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82650AF0;
	sub_82161E08(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// bl 0x8264f648
	ctx.lr = 0x82650B10;
	sub_8264F648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82650B20"))) PPC_WEAK_FUNC(sub_82650B20);
PPC_FUNC_IMPL(__imp__sub_82650B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82650B28;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,15
	ctx.r11.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82650B54:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82650b54
	if (!ctx.cr6.eq) goto loc_82650B54;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82650B78;
	sub_82161E08(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// bl 0x8264f710
	ctx.lr = 0x82650B98;
	sub_8264F710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82650BA8"))) PPC_WEAK_FUNC(sub_82650BA8);
PPC_FUNC_IMPL(__imp__sub_82650BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82650BB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,15
	ctx.r11.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82650BDC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82650bdc
	if (!ctx.cr6.eq) goto loc_82650BDC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82650C00;
	sub_82161E08(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// bl 0x8264f7d8
	ctx.lr = 0x82650C20;
	sub_8264F7D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82650C30"))) PPC_WEAK_FUNC(sub_82650C30);
PPC_FUNC_IMPL(__imp__sub_82650C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82650C38;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,15
	ctx.r11.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82650C64:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82650c64
	if (!ctx.cr6.eq) goto loc_82650C64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82650C88;
	sub_82161E08(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// bl 0x8264f8a0
	ctx.lr = 0x82650CA8;
	sub_8264F8A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82650CB8"))) PPC_WEAK_FUNC(sub_82650CB8);
PPC_FUNC_IMPL(__imp__sub_82650CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82650CC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,15
	ctx.r11.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82650CEC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82650cec
	if (!ctx.cr6.eq) goto loc_82650CEC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82650D10;
	sub_82161E08(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// bl 0x8264f968
	ctx.lr = 0x82650D30;
	sub_8264F968(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82650D40"))) PPC_WEAK_FUNC(sub_82650D40);
PPC_FUNC_IMPL(__imp__sub_82650D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82650D48;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,15
	ctx.r11.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82650D74:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82650d74
	if (!ctx.cr6.eq) goto loc_82650D74;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82650D98;
	sub_82161E08(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// bl 0x8264fa30
	ctx.lr = 0x82650DB8;
	sub_8264FA30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82650DC8"))) PPC_WEAK_FUNC(sub_82650DC8);
PPC_FUNC_IMPL(__imp__sub_82650DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82650DD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-1040(r1)
	ea = -1040 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824bafe0
	ctx.lr = 0x82650DE4;
	sub_824BAFE0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82186158
	ctx.lr = 0x82650DEC;
	sub_82186158(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82650e0c
	if (ctx.cr6.eq) goto loc_82650E0C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,-2976
	ctx.r10.s64 = ctx.r11.s64 + -2976;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82650e10
	goto loc_82650E10;
loc_82650E0C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82650E10:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,-17360
	ctx.r10.s64 = ctx.r10.s64 + -17360;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826503b0
	ctx.lr = 0x82650E2C;
	sub_826503B0(ctx, base);
	// addi r5,r1,528
	ctx.r5.s64 = ctx.r1.s64 + 528;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b7f18
	ctx.lr = 0x82650E3C;
	sub_823B7F18(ctx, base);
	// lwz r3,560(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 560);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82650e4c
	if (ctx.cr6.eq) goto loc_82650E4C;
	// bl 0x821601b8
	ctx.lr = 0x82650E4C;
	sub_821601B8(ctx, base);
loc_82650E4C:
	// lwz r11,552(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 552);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82650e60
	if (ctx.cr6.lt) goto loc_82650E60;
	// lwz r3,532(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// bl 0x82186190
	ctx.lr = 0x82650E60;
	sub_82186190(ctx, base);
loc_82650E60:
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r31.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// stb r31,532(r1)
	PPC_STORE_U8(ctx.r1.u32 + 532, ctx.r31.u8);
	// stw r29,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r29.u32);
	// bl 0x82186158
	ctx.lr = 0x82650E78;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82650e94
	if (ctx.cr6.eq) goto loc_82650E94;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,-2964
	ctx.r10.s64 = ctx.r11.s64 + -2964;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82650e98
	goto loc_82650E98;
loc_82650E94:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82650E98:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,8128
	ctx.r10.s64 = ctx.r10.s64 + 8128;
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82650438
	ctx.lr = 0x82650EB4;
	sub_82650438(ctx, base);
	// addi r5,r1,912
	ctx.r5.s64 = ctx.r1.s64 + 912;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b7f18
	ctx.lr = 0x82650EC4;
	sub_823B7F18(ctx, base);
	// lwz r3,944(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 944);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82650ed4
	if (ctx.cr6.eq) goto loc_82650ED4;
	// bl 0x821601b8
	ctx.lr = 0x82650ED4;
	sub_821601B8(ctx, base);
loc_82650ED4:
	// lwz r11,936(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 936);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82650ee8
	if (ctx.cr6.lt) goto loc_82650EE8;
	// lwz r3,916(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 916);
	// bl 0x82186190
	ctx.lr = 0x82650EE8;
	sub_82186190(ctx, base);
loc_82650EE8:
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r29,936(r1)
	PPC_STORE_U32(ctx.r1.u32 + 936, ctx.r29.u32);
	// stw r31,932(r1)
	PPC_STORE_U32(ctx.r1.u32 + 932, ctx.r31.u32);
	// stb r31,916(r1)
	PPC_STORE_U8(ctx.r1.u32 + 916, ctx.r31.u8);
	// bl 0x82186158
	ctx.lr = 0x82650EFC;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82650f18
	if (ctx.cr6.eq) goto loc_82650F18;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,-2952
	ctx.r10.s64 = ctx.r11.s64 + -2952;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82650f1c
	goto loc_82650F1C;
loc_82650F18:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82650F1C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,8524
	ctx.r10.s64 = ctx.r10.s64 + 8524;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826504c0
	ctx.lr = 0x82650F38;
	sub_826504C0(ctx, base);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b7f18
	ctx.lr = 0x82650F48;
	sub_823B7F18(ctx, base);
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82650f58
	if (ctx.cr6.eq) goto loc_82650F58;
	// bl 0x821601b8
	ctx.lr = 0x82650F58;
	sub_821601B8(ctx, base);
loc_82650F58:
	// lwz r11,264(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82650f6c
	if (ctx.cr6.lt) goto loc_82650F6C;
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// bl 0x82186190
	ctx.lr = 0x82650F6C;
	sub_82186190(ctx, base);
loc_82650F6C:
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r29,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r29.u32);
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// stb r31,244(r1)
	PPC_STORE_U8(ctx.r1.u32 + 244, ctx.r31.u8);
	// bl 0x82186158
	ctx.lr = 0x82650F80;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82650f9c
	if (ctx.cr6.eq) goto loc_82650F9C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,-2916
	ctx.r10.s64 = ctx.r11.s64 + -2916;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82650fa0
	goto loc_82650FA0;
loc_82650F9C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82650FA0:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,8512
	ctx.r10.s64 = ctx.r10.s64 + 8512;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82650548
	ctx.lr = 0x82650FBC;
	sub_82650548(ctx, base);
	// addi r5,r1,624
	ctx.r5.s64 = ctx.r1.s64 + 624;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b7f18
	ctx.lr = 0x82650FCC;
	sub_823B7F18(ctx, base);
	// lwz r3,656(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82650fdc
	if (ctx.cr6.eq) goto loc_82650FDC;
	// bl 0x821601b8
	ctx.lr = 0x82650FDC;
	sub_821601B8(ctx, base);
loc_82650FDC:
	// lwz r11,648(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 648);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82650ff0
	if (ctx.cr6.lt) goto loc_82650FF0;
	// lwz r3,628(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// bl 0x82186190
	ctx.lr = 0x82650FF0;
	sub_82186190(ctx, base);
loc_82650FF0:
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r29,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r29.u32);
	// stw r31,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r31.u32);
	// stb r31,628(r1)
	PPC_STORE_U8(ctx.r1.u32 + 628, ctx.r31.u8);
	// bl 0x82186158
	ctx.lr = 0x82651004;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82651020
	if (ctx.cr6.eq) goto loc_82651020;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,-2880
	ctx.r10.s64 = ctx.r11.s64 + -2880;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82651024
	goto loc_82651024;
loc_82651020:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82651024:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,9176
	ctx.r10.s64 = ctx.r10.s64 + 9176;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826505d0
	ctx.lr = 0x82651040;
	sub_826505D0(ctx, base);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b7f18
	ctx.lr = 0x82651050;
	sub_823B7F18(ctx, base);
	// lwz r3,368(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82651060
	if (ctx.cr6.eq) goto loc_82651060;
	// bl 0x821601b8
	ctx.lr = 0x82651060;
	sub_821601B8(ctx, base);
loc_82651060:
	// lwz r11,360(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82651074
	if (ctx.cr6.lt) goto loc_82651074;
	// lwz r3,340(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// bl 0x82186190
	ctx.lr = 0x82651074;
	sub_82186190(ctx, base);
loc_82651074:
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r29,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r29.u32);
	// stw r31,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r31.u32);
	// stb r31,340(r1)
	PPC_STORE_U8(ctx.r1.u32 + 340, ctx.r31.u8);
	// bl 0x82186158
	ctx.lr = 0x82651088;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826510a4
	if (ctx.cr6.eq) goto loc_826510A4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,-2868
	ctx.r10.s64 = ctx.r11.s64 + -2868;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x826510a8
	goto loc_826510A8;
loc_826510A4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_826510A8:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,25784
	ctx.r10.s64 = ctx.r10.s64 + 25784;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82650658
	ctx.lr = 0x826510C4;
	sub_82650658(ctx, base);
	// addi r5,r1,816
	ctx.r5.s64 = ctx.r1.s64 + 816;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b7f18
	ctx.lr = 0x826510D4;
	sub_823B7F18(ctx, base);
	// lwz r3,848(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 848);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826510e4
	if (ctx.cr6.eq) goto loc_826510E4;
	// bl 0x821601b8
	ctx.lr = 0x826510E4;
	sub_821601B8(ctx, base);
loc_826510E4:
	// lwz r11,840(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 840);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x826510f8
	if (ctx.cr6.lt) goto loc_826510F8;
	// lwz r3,820(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 820);
	// bl 0x82186190
	ctx.lr = 0x826510F8;
	sub_82186190(ctx, base);
loc_826510F8:
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r29,840(r1)
	PPC_STORE_U32(ctx.r1.u32 + 840, ctx.r29.u32);
	// stw r31,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r31.u32);
	// stb r31,820(r1)
	PPC_STORE_U8(ctx.r1.u32 + 820, ctx.r31.u8);
	// bl 0x82186158
	ctx.lr = 0x8265110C;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82651128
	if (ctx.cr6.eq) goto loc_82651128;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,-2856
	ctx.r10.s64 = ctx.r11.s64 + -2856;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8265112c
	goto loc_8265112C;
loc_82651128:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8265112C:
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,-11376
	ctx.r10.s64 = ctx.r10.s64 + -11376;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826506e0
	ctx.lr = 0x82651148;
	sub_826506E0(ctx, base);
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b7f18
	ctx.lr = 0x82651158;
	sub_823B7F18(ctx, base);
	// lwz r3,464(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82651168
	if (ctx.cr6.eq) goto loc_82651168;
	// bl 0x821601b8
	ctx.lr = 0x82651168;
	sub_821601B8(ctx, base);
loc_82651168:
	// lwz r11,456(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8265117c
	if (ctx.cr6.lt) goto loc_8265117C;
	// lwz r3,436(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// bl 0x82186190
	ctx.lr = 0x8265117C;
	sub_82186190(ctx, base);
loc_8265117C:
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r29,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r29.u32);
	// stw r31,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r31.u32);
	// stb r31,436(r1)
	PPC_STORE_U8(ctx.r1.u32 + 436, ctx.r31.u8);
	// bl 0x82186158
	ctx.lr = 0x82651190;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826511ac
	if (ctx.cr6.eq) goto loc_826511AC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,-2820
	ctx.r10.s64 = ctx.r11.s64 + -2820;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x826511b0
	goto loc_826511B0;
loc_826511AC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_826511B0:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,14800
	ctx.r10.s64 = ctx.r10.s64 + 14800;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82650768
	ctx.lr = 0x826511CC;
	sub_82650768(ctx, base);
	// addi r5,r1,720
	ctx.r5.s64 = ctx.r1.s64 + 720;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b7f18
	ctx.lr = 0x826511DC;
	sub_823B7F18(ctx, base);
	// lwz r3,752(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 752);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826511ec
	if (ctx.cr6.eq) goto loc_826511EC;
	// bl 0x821601b8
	ctx.lr = 0x826511EC;
	sub_821601B8(ctx, base);
loc_826511EC:
	// lwz r11,744(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 744);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82651200
	if (ctx.cr6.lt) goto loc_82651200;
	// lwz r3,724(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 724);
	// bl 0x82186190
	ctx.lr = 0x82651200;
	sub_82186190(ctx, base);
loc_82651200:
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r29,744(r1)
	PPC_STORE_U32(ctx.r1.u32 + 744, ctx.r29.u32);
	// stw r31,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r31.u32);
	// stb r31,724(r1)
	PPC_STORE_U8(ctx.r1.u32 + 724, ctx.r31.u8);
	// bl 0x82186158
	ctx.lr = 0x82651214;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82651230
	if (ctx.cr6.eq) goto loc_82651230;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,-2808
	ctx.r10.s64 = ctx.r11.s64 + -2808;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82651234
	goto loc_82651234;
loc_82651230:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82651234:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,31544
	ctx.r10.s64 = ctx.r10.s64 + 31544;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826507f0
	ctx.lr = 0x82651250;
	sub_826507F0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b7f18
	ctx.lr = 0x82651260;
	sub_823B7F18(ctx, base);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82651270
	if (ctx.cr6.eq) goto loc_82651270;
	// bl 0x821601b8
	ctx.lr = 0x82651270;
	sub_821601B8(ctx, base);
loc_82651270:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82651284
	if (ctx.cr6.lt) goto loc_82651284;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82186190
	ctx.lr = 0x82651284;
	sub_82186190(ctx, base);
loc_82651284:
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// bl 0x82186158
	ctx.lr = 0x82651298;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826512b4
	if (ctx.cr6.eq) goto loc_826512B4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,-2796
	ctx.r10.s64 = ctx.r11.s64 + -2796;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x826512b8
	goto loc_826512B8;
loc_826512B4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_826512B8:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,7324
	ctx.r10.s64 = ctx.r10.s64 + 7324;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82650878
	ctx.lr = 0x826512D4;
	sub_82650878(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b7f18
	ctx.lr = 0x826512E4;
	sub_823B7F18(ctx, base);
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826512f4
	if (ctx.cr6.eq) goto loc_826512F4;
	// bl 0x821601b8
	ctx.lr = 0x826512F4;
	sub_821601B8(ctx, base);
loc_826512F4:
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82651308
	if (ctx.cr6.lt) goto loc_82651308;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82186190
	ctx.lr = 0x82651308;
	sub_82186190(ctx, base);
loc_82651308:
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r29.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stb r31,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r31.u8);
	// bl 0x82186158
	ctx.lr = 0x8265131C;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82651338
	if (ctx.cr6.eq) goto loc_82651338;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,-2784
	ctx.r10.s64 = ctx.r11.s64 + -2784;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8265133c
	goto loc_8265133C;
loc_82651338:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8265133C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,6424
	ctx.r10.s64 = ctx.r10.s64 + 6424;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82650900
	ctx.lr = 0x82651358;
	sub_82650900(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b7f18
	ctx.lr = 0x82651368;
	sub_823B7F18(ctx, base);
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82651378
	if (ctx.cr6.eq) goto loc_82651378;
	// bl 0x821601b8
	ctx.lr = 0x82651378;
	sub_821601B8(ctx, base);
loc_82651378:
	// lwz r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8265138c
	if (ctx.cr6.lt) goto loc_8265138C;
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x82186190
	ctx.lr = 0x8265138C;
	sub_82186190(ctx, base);
loc_8265138C:
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r29,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r29.u32);
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// stb r31,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r31.u8);
	// bl 0x82186158
	ctx.lr = 0x826513A0;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826513bc
	if (ctx.cr6.eq) goto loc_826513BC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,-2772
	ctx.r10.s64 = ctx.r11.s64 + -2772;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x826513c0
	goto loc_826513C0;
loc_826513BC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_826513C0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,4104
	ctx.r10.s64 = ctx.r10.s64 + 4104;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82650988
	ctx.lr = 0x826513DC;
	sub_82650988(ctx, base);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b7f18
	ctx.lr = 0x826513EC;
	sub_823B7F18(ctx, base);
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826513fc
	if (ctx.cr6.eq) goto loc_826513FC;
	// bl 0x821601b8
	ctx.lr = 0x826513FC;
	sub_821601B8(ctx, base);
loc_826513FC:
	// lwz r11,312(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82651410
	if (ctx.cr6.lt) goto loc_82651410;
	// lwz r3,292(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// bl 0x82186190
	ctx.lr = 0x82651410;
	sub_82186190(ctx, base);
loc_82651410:
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r29,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r29.u32);
	// stw r31,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r31.u32);
	// stb r31,292(r1)
	PPC_STORE_U8(ctx.r1.u32 + 292, ctx.r31.u8);
	// bl 0x82186158
	ctx.lr = 0x82651424;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82651440
	if (ctx.cr6.eq) goto loc_82651440;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,-2760
	ctx.r10.s64 = ctx.r11.s64 + -2760;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82651444
	goto loc_82651444;
loc_82651440:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82651444:
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,-2248
	ctx.r10.s64 = ctx.r10.s64 + -2248;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82650a10
	ctx.lr = 0x82651460;
	sub_82650A10(ctx, base);
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b7f18
	ctx.lr = 0x82651470;
	sub_823B7F18(ctx, base);
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82651480
	if (ctx.cr6.eq) goto loc_82651480;
	// bl 0x821601b8
	ctx.lr = 0x82651480;
	sub_821601B8(ctx, base);
loc_82651480:
	// lwz r11,408(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82651494
	if (ctx.cr6.lt) goto loc_82651494;
	// lwz r3,388(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// bl 0x82186190
	ctx.lr = 0x82651494;
	sub_82186190(ctx, base);
loc_82651494:
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r29,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r29.u32);
	// stw r31,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r31.u32);
	// stb r31,388(r1)
	PPC_STORE_U8(ctx.r1.u32 + 388, ctx.r31.u8);
	// bl 0x82186158
	ctx.lr = 0x826514A8;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826514c4
	if (ctx.cr6.eq) goto loc_826514C4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,-2748
	ctx.r10.s64 = ctx.r11.s64 + -2748;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x826514c8
	goto loc_826514C8;
loc_826514C4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_826514C8:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,18144
	ctx.r10.s64 = ctx.r10.s64 + 18144;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82650a98
	ctx.lr = 0x826514E4;
	sub_82650A98(ctx, base);
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b7f18
	ctx.lr = 0x826514F4;
	sub_823B7F18(ctx, base);
	// lwz r3,512(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82651504
	if (ctx.cr6.eq) goto loc_82651504;
	// bl 0x821601b8
	ctx.lr = 0x82651504;
	sub_821601B8(ctx, base);
loc_82651504:
	// lwz r11,504(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 504);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82651518
	if (ctx.cr6.lt) goto loc_82651518;
	// lwz r3,484(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// bl 0x82186190
	ctx.lr = 0x82651518;
	sub_82186190(ctx, base);
loc_82651518:
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r29,504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 504, ctx.r29.u32);
	// stw r31,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r31.u32);
	// stb r31,484(r1)
	PPC_STORE_U8(ctx.r1.u32 + 484, ctx.r31.u8);
	// bl 0x82186158
	ctx.lr = 0x8265152C;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82651548
	if (ctx.cr6.eq) goto loc_82651548;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,-2736
	ctx.r10.s64 = ctx.r11.s64 + -2736;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8265154c
	goto loc_8265154C;
loc_82651548:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8265154C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,18132
	ctx.r10.s64 = ctx.r10.s64 + 18132;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82650b20
	ctx.lr = 0x82651568;
	sub_82650B20(ctx, base);
	// addi r5,r1,576
	ctx.r5.s64 = ctx.r1.s64 + 576;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b7f18
	ctx.lr = 0x82651578;
	sub_823B7F18(ctx, base);
	// lwz r3,608(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 608);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82651588
	if (ctx.cr6.eq) goto loc_82651588;
	// bl 0x821601b8
	ctx.lr = 0x82651588;
	sub_821601B8(ctx, base);
loc_82651588:
	// lwz r11,600(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 600);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8265159c
	if (ctx.cr6.lt) goto loc_8265159C;
	// lwz r3,580(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// bl 0x82186190
	ctx.lr = 0x8265159C;
	sub_82186190(ctx, base);
loc_8265159C:
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r29,600(r1)
	PPC_STORE_U32(ctx.r1.u32 + 600, ctx.r29.u32);
	// stw r31,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r31.u32);
	// stb r31,580(r1)
	PPC_STORE_U8(ctx.r1.u32 + 580, ctx.r31.u8);
	// bl 0x82186158
	ctx.lr = 0x826515B0;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826515cc
	if (ctx.cr6.eq) goto loc_826515CC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,-2724
	ctx.r10.s64 = ctx.r11.s64 + -2724;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x826515d0
	goto loc_826515D0;
loc_826515CC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_826515D0:
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,-21500
	ctx.r10.s64 = ctx.r10.s64 + -21500;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82650ba8
	ctx.lr = 0x826515EC;
	sub_82650BA8(ctx, base);
	// addi r5,r1,672
	ctx.r5.s64 = ctx.r1.s64 + 672;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b7f18
	ctx.lr = 0x826515FC;
	sub_823B7F18(ctx, base);
	// lwz r3,704(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 704);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265160c
	if (ctx.cr6.eq) goto loc_8265160C;
	// bl 0x821601b8
	ctx.lr = 0x8265160C;
	sub_821601B8(ctx, base);
loc_8265160C:
	// lwz r11,696(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 696);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82651620
	if (ctx.cr6.lt) goto loc_82651620;
	// lwz r3,676(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// bl 0x82186190
	ctx.lr = 0x82651620;
	sub_82186190(ctx, base);
loc_82651620:
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r29,696(r1)
	PPC_STORE_U32(ctx.r1.u32 + 696, ctx.r29.u32);
	// stw r31,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r31.u32);
	// stb r31,676(r1)
	PPC_STORE_U8(ctx.r1.u32 + 676, ctx.r31.u8);
	// bl 0x82186158
	ctx.lr = 0x82651634;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82651650
	if (ctx.cr6.eq) goto loc_82651650;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,-2712
	ctx.r10.s64 = ctx.r11.s64 + -2712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82651654
	goto loc_82651654;
loc_82651650:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82651654:
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,-2264
	ctx.r10.s64 = ctx.r10.s64 + -2264;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82650c30
	ctx.lr = 0x82651670;
	sub_82650C30(ctx, base);
	// addi r5,r1,768
	ctx.r5.s64 = ctx.r1.s64 + 768;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b7f18
	ctx.lr = 0x82651680;
	sub_823B7F18(ctx, base);
	// lwz r3,800(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 800);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82651690
	if (ctx.cr6.eq) goto loc_82651690;
	// bl 0x821601b8
	ctx.lr = 0x82651690;
	sub_821601B8(ctx, base);
loc_82651690:
	// lwz r11,792(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 792);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x826516a4
	if (ctx.cr6.lt) goto loc_826516A4;
	// lwz r3,772(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 772);
	// bl 0x82186190
	ctx.lr = 0x826516A4;
	sub_82186190(ctx, base);
loc_826516A4:
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r29,792(r1)
	PPC_STORE_U32(ctx.r1.u32 + 792, ctx.r29.u32);
	// stw r31,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r31.u32);
	// stb r31,772(r1)
	PPC_STORE_U8(ctx.r1.u32 + 772, ctx.r31.u8);
	// bl 0x82186158
	ctx.lr = 0x826516B8;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826516d4
	if (ctx.cr6.eq) goto loc_826516D4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,-2700
	ctx.r10.s64 = ctx.r11.s64 + -2700;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x826516d8
	goto loc_826516D8;
loc_826516D4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_826516D8:
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,-2280
	ctx.r10.s64 = ctx.r10.s64 + -2280;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82650cb8
	ctx.lr = 0x826516F4;
	sub_82650CB8(ctx, base);
	// addi r5,r1,864
	ctx.r5.s64 = ctx.r1.s64 + 864;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b7f18
	ctx.lr = 0x82651704;
	sub_823B7F18(ctx, base);
	// lwz r3,896(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 896);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82651714
	if (ctx.cr6.eq) goto loc_82651714;
	// bl 0x821601b8
	ctx.lr = 0x82651714;
	sub_821601B8(ctx, base);
loc_82651714:
	// lwz r11,888(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 888);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82651728
	if (ctx.cr6.lt) goto loc_82651728;
	// lwz r3,868(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 868);
	// bl 0x82186190
	ctx.lr = 0x82651728;
	sub_82186190(ctx, base);
loc_82651728:
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r29,888(r1)
	PPC_STORE_U32(ctx.r1.u32 + 888, ctx.r29.u32);
	// stw r31,884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 884, ctx.r31.u32);
	// stb r31,868(r1)
	PPC_STORE_U8(ctx.r1.u32 + 868, ctx.r31.u8);
	// bl 0x82186158
	ctx.lr = 0x8265173C;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82651758
	if (ctx.cr6.eq) goto loc_82651758;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,-2688
	ctx.r10.s64 = ctx.r11.s64 + -2688;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8265175c
	goto loc_8265175C;
loc_82651758:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8265175C:
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,-2300
	ctx.r10.s64 = ctx.r10.s64 + -2300;
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82650d40
	ctx.lr = 0x82651778;
	sub_82650D40(ctx, base);
	// addi r5,r1,960
	ctx.r5.s64 = ctx.r1.s64 + 960;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b7f18
	ctx.lr = 0x82651788;
	sub_823B7F18(ctx, base);
	// lwz r3,992(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 992);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82651798
	if (ctx.cr6.eq) goto loc_82651798;
	// bl 0x821601b8
	ctx.lr = 0x82651798;
	sub_821601B8(ctx, base);
loc_82651798:
	// lwz r11,984(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 984);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x826517ac
	if (ctx.cr6.lt) goto loc_826517AC;
	// lwz r3,964(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 964);
	// bl 0x82186190
	ctx.lr = 0x826517AC;
	sub_82186190(ctx, base);
loc_826517AC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,1040
	ctx.r1.s64 = ctx.r1.s64 + 1040;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826517B8"))) PPC_WEAK_FUNC(sub_826517B8);
PPC_FUNC_IMPL(__imp__sub_826517B8) {
	PPC_FUNC_PROLOGUE();
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

__attribute__((alias("__imp__sub_826517C8"))) PPC_WEAK_FUNC(sub_826517C8);
PPC_FUNC_IMPL(__imp__sub_826517C8) {
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
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,24236(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24236);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826517FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,-2232
	ctx.r5.s64 = ctx.r11.s64 + -2232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82164090
	ctx.lr = 0x82651810;
	sub_82164090(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82651824
	if (ctx.cr6.lt) goto loc_82651824;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x82651824;
	sub_82186190(ctx, base);
loc_82651824:
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

__attribute__((alias("__imp__sub_82651840"))) PPC_WEAK_FUNC(sub_82651840);
PPC_FUNC_IMPL(__imp__sub_82651840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x828bb238
	ctx.lr = 0x82651858;
	sub_828BB238(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r11,r11,-2180
	ctx.r11.s64 = ctx.r11.s64 + -2180;
	// addi r10,r10,-2192
	ctx.r10.s64 = ctx.r10.s64 + -2192;
	// addi r9,r9,-2208
	ctx.r9.s64 = ctx.r9.s64 + -2208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82651898"))) PPC_WEAK_FUNC(sub_82651898);
PPC_FUNC_IMPL(__imp__sub_82651898) {
	PPC_FUNC_PROLOGUE();
	// lis r3,1
	ctx.r3.s64 = 65536;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826518A0"))) PPC_WEAK_FUNC(sub_826518A0);
PPC_FUNC_IMPL(__imp__sub_826518A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// b 0x8289f248
	sub_8289F248(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826518A8"))) PPC_WEAK_FUNC(sub_826518A8);
PPC_FUNC_IMPL(__imp__sub_826518A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// b 0x8289f330
	sub_8289F330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826518B0"))) PPC_WEAK_FUNC(sub_826518B0);
PPC_FUNC_IMPL(__imp__sub_826518B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// b 0x8289ee58
	sub_8289EE58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826518B8"))) PPC_WEAK_FUNC(sub_826518B8);
PPC_FUNC_IMPL(__imp__sub_826518B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r4,48
	ctx.r4.s64 = ctx.r4.s64 + 48;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8289ee78
	ctx.lr = 0x826518D4;
	sub_8289EE78(ctx, base);
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

__attribute__((alias("__imp__sub_826518F0"))) PPC_WEAK_FUNC(sub_826518F0);
PPC_FUNC_IMPL(__imp__sub_826518F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// b 0x8289ee88
	sub_8289EE88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826518F8"))) PPC_WEAK_FUNC(sub_826518F8);
PPC_FUNC_IMPL(__imp__sub_826518F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r4,48
	ctx.r4.s64 = ctx.r4.s64 + 48;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8289eef8
	ctx.lr = 0x82651914;
	sub_8289EEF8(ctx, base);
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

__attribute__((alias("__imp__sub_82651930"))) PPC_WEAK_FUNC(sub_82651930);
PPC_FUNC_IMPL(__imp__sub_82651930) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// b 0x8289ef18
	sub_8289EF18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82651938"))) PPC_WEAK_FUNC(sub_82651938);
PPC_FUNC_IMPL(__imp__sub_82651938) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// b 0x8289efb0
	sub_8289EFB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82651940"))) PPC_WEAK_FUNC(sub_82651940);
PPC_FUNC_IMPL(__imp__sub_82651940) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// b 0x8289efc0
	sub_8289EFC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82651948"))) PPC_WEAK_FUNC(sub_82651948);
PPC_FUNC_IMPL(__imp__sub_82651948) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
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

__attribute__((alias("__imp__sub_82651960"))) PPC_WEAK_FUNC(sub_82651960);
PPC_FUNC_IMPL(__imp__sub_82651960) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82651968
	sub_82651968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82651968"))) PPC_WEAK_FUNC(sub_82651968);
PPC_FUNC_IMPL(__imp__sub_82651968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828bb308
	ctx.lr = 0x82651988;
	sub_828BB308(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826519a0
	if (ctx.cr6.eq) goto loc_826519A0;
	// bl 0x82186190
	ctx.lr = 0x8265199C;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826519A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826519B8"))) PPC_WEAK_FUNC(sub_826519B8);
PPC_FUNC_IMPL(__imp__sub_826519B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// beq cr6,0x826519e8
	if (ctx.cr6.eq) goto loc_826519E8;
	// bl 0x82659610
	ctx.lr = 0x826519E8;
	sub_82659610(ctx, base);
loc_826519E8:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,60(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// rlwinm r6,r11,0,27,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lwz r8,56(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r7,52(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x82584630
	ctx.lr = 0x82651A0C;
	sub_82584630(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828bb670
	ctx.lr = 0x82651A18;
	sub_828BB670(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82651a28
	if (ctx.cr6.eq) goto loc_82651A28;
	// bl 0x82581e38
	ctx.lr = 0x82651A28;
	sub_82581E38(ctx, base);
loc_82651A28:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r11,r11,-2180
	ctx.r11.s64 = ctx.r11.s64 + -2180;
	// addi r10,r10,-2192
	ctx.r10.s64 = ctx.r10.s64 + -2192;
	// addi r9,r9,-2208
	ctx.r9.s64 = ctx.r9.s64 + -2208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82651A68"))) PPC_WEAK_FUNC(sub_82651A68);
PPC_FUNC_IMPL(__imp__sub_82651A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// beq cr6,0x82651a98
	if (ctx.cr6.eq) goto loc_82651A98;
	// bl 0x82659610
	ctx.lr = 0x82651A98;
	sub_82659610(ctx, base);
loc_82651A98:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r6,r11,0,27,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r7,52(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82584630
	ctx.lr = 0x82651ABC;
	sub_82584630(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828bb510
	ctx.lr = 0x82651AC8;
	sub_828BB510(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82651ad8
	if (ctx.cr6.eq) goto loc_82651AD8;
	// bl 0x82581e38
	ctx.lr = 0x82651AD8;
	sub_82581E38(ctx, base);
loc_82651AD8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82651AF0"))) PPC_WEAK_FUNC(sub_82651AF0);
PPC_FUNC_IMPL(__imp__sub_82651AF0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x82651b10
	if (!ctx.cr6.eq) goto loc_82651B10;
	// rlwinm r11,r4,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82651b10
	if (ctx.cr6.eq) goto loc_82651B10;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82651B10:
	// andis. r11,r4,16696
	ctx.r11.u64 = ctx.r4.u64 & 1094189056;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82651B28"))) PPC_WEAK_FUNC(sub_82651B28);
PPC_FUNC_IMPL(__imp__sub_82651B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,-2020
	ctx.r11.s64 = ctx.r11.s64 + -2020;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82651b60
	if (ctx.cr6.eq) goto loc_82651B60;
	// bl 0x82581e38
	ctx.lr = 0x82651B60;
	sub_82581E38(ctx, base);
loc_82651B60:
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
	// beq cr6,0x82651b84
	if (ctx.cr6.eq) goto loc_82651B84;
	// bl 0x82186190
	ctx.lr = 0x82651B80;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82651B84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82651BA0"))) PPC_WEAK_FUNC(sub_82651BA0);
PPC_FUNC_IMPL(__imp__sub_82651BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r10,r10,-2000
	ctx.r10.s64 = ctx.r10.s64 + -2000;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82186158
	ctx.lr = 0x82651BDC;
	sub_82186158(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82651C18"))) PPC_WEAK_FUNC(sub_82651C18);
PPC_FUNC_IMPL(__imp__sub_82651C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82186190
	ctx.lr = 0x82651C34;
	sub_82186190(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82651c48
	if (ctx.cr6.eq) goto loc_82651C48;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82581e38
	ctx.lr = 0x82651C48;
	sub_82581E38(ctx, base);
loc_82651C48:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82186190
	ctx.lr = 0x82651C50;
	sub_82186190(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-2020
	ctx.r11.s64 = ctx.r11.s64 + -2020;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82651c6c
	if (ctx.cr6.eq) goto loc_82651C6C;
	// bl 0x82581e38
	ctx.lr = 0x82651C6C;
	sub_82581E38(ctx, base);
loc_82651C6C:
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

__attribute__((alias("__imp__sub_82651C90"))) PPC_WEAK_FUNC(sub_82651C90);
PPC_FUNC_IMPL(__imp__sub_82651C90) {
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
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82186158
	ctx.lr = 0x82651CA4;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82651cc0
	if (ctx.cr6.eq) goto loc_82651CC0;
	// bl 0x82651ba0
	ctx.lr = 0x82651CB0;
	sub_82651BA0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82651CC0:
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

__attribute__((alias("__imp__sub_82651CD8"))) PPC_WEAK_FUNC(sub_82651CD8);
PPC_FUNC_IMPL(__imp__sub_82651CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82651c18
	ctx.lr = 0x82651CF8;
	sub_82651C18(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82651d10
	if (ctx.cr6.eq) goto loc_82651D10;
	// bl 0x82186190
	ctx.lr = 0x82651D0C;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82651D10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82651D28"))) PPC_WEAK_FUNC(sub_82651D28);
PPC_FUNC_IMPL(__imp__sub_82651D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82651D30;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82581e68
	ctx.lr = 0x82651D44;
	sub_82581E68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82583d88
	ctx.lr = 0x82651D50;
	sub_82583D88(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,7
	ctx.r7.s64 = 7;
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r6,r11,-1972
	ctx.r6.s64 = ctx.r11.s64 + -1972;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8216a080
	ctx.lr = 0x82651D68;
	sub_8216A080(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// blt cr6,0x82651d88
	if (ctx.cr6.lt) goto loc_82651D88;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82186190
	ctx.lr = 0x82651D88;
	sub_82186190(ctx, base);
loc_82651D88:
	// li r11,15
	ctx.r11.s64 = 15;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// beq cr6,0x82651e2c
	if (ctx.cr6.eq) goto loc_82651E2C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828baf68
	ctx.lr = 0x82651DB8;
	sub_828BAF68(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186158
	ctx.lr = 0x82651DC0;
	sub_82186158(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82186190
	ctx.lr = 0x82651DD0;
	sub_82186190(ctx, base);
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82651e18
	if (ctx.cr6.eq) goto loc_82651E18;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82651e18
	if (ctx.cr6.eq) goto loc_82651E18;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828ba738
	ctx.lr = 0x82651DF4;
	sub_828BA738(ctx, base);
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// lwz r5,108(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x828bbd18
	ctx.lr = 0x82651E04;
	sub_828BBD18(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82186190
	ctx.lr = 0x82651E0C;
	sub_82186190(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82651E18:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82186190
	ctx.lr = 0x82651E20;
	sub_82186190(ctx, base);
loc_82651E20:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82651E2C:
	// rotlwi r30,r30,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82186158
	ctx.lr = 0x82651E38;
	sub_82186158(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82186190
	ctx.lr = 0x82651E48;
	sub_82186190(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82651e20
	if (ctx.cr6.eq) goto loc_82651E20;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82651e20
	if (ctx.cr6.eq) goto loc_82651E20;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x826df680
	ctx.lr = 0x82651E70;
	sub_826DF680(ctx, base);
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// lwz r5,108(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x828bbd18
	ctx.lr = 0x82651E80;
	sub_828BBD18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82651E90"))) PPC_WEAK_FUNC(sub_82651E90);
PPC_FUNC_IMPL(__imp__sub_82651E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82651E98;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82583d88
	ctx.lr = 0x82651EB0;
	sub_82583D88(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,7
	ctx.r7.s64 = 7;
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r6,r11,-1972
	ctx.r6.s64 = ctx.r11.s64 + -1972;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8216a080
	ctx.lr = 0x82651EC8;
	sub_8216A080(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// blt cr6,0x82651ee8
	if (ctx.cr6.lt) goto loc_82651EE8;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x82651EE8;
	sub_82186190(ctx, base);
loc_82651EE8:
	// li r11,15
	ctx.r11.s64 = 15;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// lwz r4,24236(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24236);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bne cr6,0x82651f28
	if (!ctx.cr6.eq) goto loc_82651F28;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82651F28:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82651F30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82651F40"))) PPC_WEAK_FUNC(sub_82651F40);
PPC_FUNC_IMPL(__imp__sub_82651F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82651F48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8261dbc8
	ctx.lr = 0x82651F64;
	sub_8261DBC8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// addi r11,r11,-1960
	ctx.r11.s64 = ctx.r11.s64 + -1960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82651F90"))) PPC_WEAK_FUNC(sub_82651F90);
PPC_FUNC_IMPL(__imp__sub_82651F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82651fbc
	if (ctx.cr6.eq) goto loc_82651FBC;
	// bl 0x82631328
	ctx.lr = 0x82651FBC;
	sub_82631328(ctx, base);
loc_82651FBC:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82651fcc
	if (ctx.cr6.eq) goto loc_82651FCC;
	// bl 0x82581e38
	ctx.lr = 0x82651FCC;
	sub_82581E38(ctx, base);
loc_82651FCC:
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
	// beq cr6,0x82651ff0
	if (ctx.cr6.eq) goto loc_82651FF0;
	// bl 0x82186190
	ctx.lr = 0x82651FEC;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82651FF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82652008"))) PPC_WEAK_FUNC(sub_82652008);
PPC_FUNC_IMPL(__imp__sub_82652008) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265214c
	if (ctx.cr6.eq) goto loc_8265214C;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82652090
	if (!ctx.cr6.eq) goto loc_82652090;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82652054
	if (!ctx.cr6.eq) goto loc_82652054;
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x82652058
	goto loc_82652058;
loc_82652054:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82652058:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8265206c
	if (!ctx.cr6.eq) goto loc_8265206C;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82652070
	goto loc_82652070;
loc_8265206C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82652070:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x825fc9f8
	ctx.lr = 0x82652078;
	sub_825FC9F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x825fddf8
	ctx.lr = 0x82652088;
	sub_825FDDF8(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
loc_82652090:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8261dd50
	ctx.lr = 0x826520A4;
	sub_8261DD50(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x825fe5b0
	ctx.lr = 0x826520BC;
	sub_825FE5B0(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826520d0
	if (ctx.cr6.eq) goto loc_826520D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x826520D0;
	sub_82659610(ctx, base);
loc_826520D0:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826520e4
	if (ctx.cr6.eq) goto loc_826520E4;
	// bl 0x82631328
	ctx.lr = 0x826520E4;
	sub_82631328(ctx, base);
loc_826520E4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826520f4
	if (ctx.cr6.eq) goto loc_826520F4;
	// bl 0x82631328
	ctx.lr = 0x826520F4;
	sub_82631328(ctx, base);
loc_826520F4:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f13,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x826521c8
	if (!ctx.cr6.lt) goto loc_826521C8;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82652144
	if (ctx.cr6.eq) goto loc_82652144;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82652144
	if (ctx.cr6.eq) goto loc_82652144;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826521d8
	if (!ctx.cr6.eq) goto loc_826521D8;
loc_82652144:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826521dc
	goto loc_826521DC;
loc_8265214C:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826521c8
	if (ctx.cr6.eq) goto loc_826521C8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826521c8
	if (ctx.cr6.eq) goto loc_826521C8;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826521ac
	if (ctx.cr6.eq) goto loc_826521AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8261dd50
	ctx.lr = 0x82652190;
	sub_8261DD50(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
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
	ctx.lr = 0x826521AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826521AC:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f13,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x826521d8
	if (ctx.cr6.lt) goto loc_826521D8;
loc_826521C8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x826521dc
	if (ctx.cr6.gt) goto loc_826521DC;
loc_826521D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826521DC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826521F8"))) PPC_WEAK_FUNC(sub_826521F8);
PPC_FUNC_IMPL(__imp__sub_826521F8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82652374
	if (ctx.cr6.eq) goto loc_82652374;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8265229c
	if (!ctx.cr6.eq) goto loc_8265229C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82652244
	if (!ctx.cr6.eq) goto loc_82652244;
	// lwz r30,20(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x82652248
	goto loc_82652248;
loc_82652244:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82652248:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8265225c
	if (!ctx.cr6.eq) goto loc_8265225C;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x82652260
	goto loc_82652260;
loc_8265225C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82652260:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82652274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82652294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
loc_8265229C:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8261dd50
	ctx.lr = 0x826522B0;
	sub_8261DD50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218c228
	ctx.lr = 0x826522BC;
	sub_8218C228(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826522E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826522f8
	if (ctx.cr6.eq) goto loc_826522F8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x826522F8;
	sub_82659610(ctx, base);
loc_826522F8:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265230c
	if (ctx.cr6.eq) goto loc_8265230C;
	// bl 0x82581e38
	ctx.lr = 0x8265230C;
	sub_82581E38(ctx, base);
loc_8265230C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265231c
	if (ctx.cr6.eq) goto loc_8265231C;
	// bl 0x82581e38
	ctx.lr = 0x8265231C;
	sub_82581E38(ctx, base);
loc_8265231C:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f13,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x826523ec
	if (!ctx.cr6.lt) goto loc_826523EC;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8265236c
	if (ctx.cr6.eq) goto loc_8265236C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265236c
	if (ctx.cr6.eq) goto loc_8265236C;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826523fc
	if (!ctx.cr6.eq) goto loc_826523FC;
loc_8265236C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82652400
	goto loc_82652400;
loc_82652374:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826523ec
	if (ctx.cr6.eq) goto loc_826523EC;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826523ec
	if (ctx.cr6.eq) goto loc_826523EC;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826523d0
	if (ctx.cr6.eq) goto loc_826523D0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8261dd50
	ctx.lr = 0x826523B8;
	sub_8261DD50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218c228
	ctx.lr = 0x826523C4;
	sub_8218C228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x8251d058
	ctx.lr = 0x826523D0;
	sub_8251D058(ctx, base);
loc_826523D0:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f13,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x826523fc
	if (ctx.cr6.lt) goto loc_826523FC;
loc_826523EC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82652400
	if (ctx.cr6.gt) goto loc_82652400;
loc_826523FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82652400:
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

__attribute__((alias("__imp__sub_82652418"))) PPC_WEAK_FUNC(sub_82652418);
PPC_FUNC_IMPL(__imp__sub_82652418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82652420;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8261dbc8
	ctx.lr = 0x8265243C;
	sub_8261DBC8(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// addi r10,r10,-1948
	ctx.r10.s64 = ctx.r10.s64 + -1948;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// beq cr6,0x82652468
	if (ctx.cr6.eq) goto loc_82652468;
	// bl 0x82160140
	ctx.lr = 0x82652468;
	sub_82160140(ctx, base);
loc_82652468:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82652480"))) PPC_WEAK_FUNC(sub_82652480);
PPC_FUNC_IMPL(__imp__sub_82652480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826524ac
	if (ctx.cr6.eq) goto loc_826524AC;
	// bl 0x82581e38
	ctx.lr = 0x826524AC;
	sub_82581E38(ctx, base);
loc_826524AC:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826524bc
	if (ctx.cr6.eq) goto loc_826524BC;
	// bl 0x821601b8
	ctx.lr = 0x826524BC;
	sub_821601B8(ctx, base);
loc_826524BC:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826524cc
	if (ctx.cr6.eq) goto loc_826524CC;
	// bl 0x82581e38
	ctx.lr = 0x826524CC;
	sub_82581E38(ctx, base);
loc_826524CC:
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
	// beq cr6,0x826524f0
	if (ctx.cr6.eq) goto loc_826524F0;
	// bl 0x82186190
	ctx.lr = 0x826524EC;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826524F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82652508"))) PPC_WEAK_FUNC(sub_82652508);
PPC_FUNC_IMPL(__imp__sub_82652508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// addi r10,r11,-1936
	ctx.r10.s64 = ctx.r11.s64 + -1936;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r3,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82652538"))) PPC_WEAK_FUNC(sub_82652538);
PPC_FUNC_IMPL(__imp__sub_82652538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-1936
	ctx.r11.s64 = ctx.r11.s64 + -1936;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82652558
	if (ctx.cr6.eq) goto loc_82652558;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82652558:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265256c
	if (ctx.cr6.eq) goto loc_8265256C;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8265256C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,4952
	ctx.r11.s64 = ctx.r11.s64 + 4952;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82652580"))) PPC_WEAK_FUNC(sub_82652580);
PPC_FUNC_IMPL(__imp__sub_82652580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r11,r11,-1936
	ctx.r11.s64 = ctx.r11.s64 + -1936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826525b4
	if (ctx.cr6.eq) goto loc_826525B4;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_826525B4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826525c8
	if (ctx.cr6.eq) goto loc_826525C8;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_826525C8:
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
	// beq cr6,0x826525ec
	if (ctx.cr6.eq) goto loc_826525EC;
	// bl 0x82186190
	ctx.lr = 0x826525E8;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826525EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82652600"))) PPC_WEAK_FUNC(sub_82652600);
PPC_FUNC_IMPL(__imp__sub_82652600) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82652628"))) PPC_WEAK_FUNC(sub_82652628);
PPC_FUNC_IMPL(__imp__sub_82652628) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// b 0x826df680
	sub_826DF680(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82652638"))) PPC_WEAK_FUNC(sub_82652638);
PPC_FUNC_IMPL(__imp__sub_82652638) {
	PPC_FUNC_PROLOGUE();
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82652640"))) PPC_WEAK_FUNC(sub_82652640);
PPC_FUNC_IMPL(__imp__sub_82652640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82652648"))) PPC_WEAK_FUNC(sub_82652648);
PPC_FUNC_IMPL(__imp__sub_82652648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f1,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// lfs f13,2188(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2188);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f0,8248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8248);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82652674
	if (!ctx.cr6.gt) goto loc_82652674;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// b 0x82652684
	goto loc_82652684;
loc_82652674:
	// addi r11,r1,28
	ctx.r11.s64 = ctx.r1.s64 + 28;
	// fcmpu cr6,f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x82652684
	if (!ctx.cr6.lt) goto loc_82652684;
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
loc_82652684:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5144);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826526A0"))) PPC_WEAK_FUNC(sub_826526A0);
PPC_FUNC_IMPL(__imp__sub_826526A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfs f1,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// lfs f0,-1920(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1920);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x826526c0
	if (ctx.cr6.gt) goto loc_826526C0;
	// addi r11,r1,28
	ctx.r11.s64 = ctx.r1.s64 + 28;
loc_826526C0:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x826526e4
	if (ctx.cr6.lt) goto loc_826526E4;
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
loc_826526E4:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,14096(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14096);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82652710
	if (!ctx.cr6.gt) goto loc_82652710;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8248);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,2372(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2372);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_82652710:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,5144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5144);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82652728"))) PPC_WEAK_FUNC(sub_82652728);
PPC_FUNC_IMPL(__imp__sub_82652728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// lfs f0,7856(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7856);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82652748
	if (ctx.cr6.gt) goto loc_82652748;
	// addi r11,r1,28
	ctx.r11.s64 = ctx.r1.s64 + 28;
loc_82652748:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f0,-12556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12556);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8265276c
	if (ctx.cr6.lt) goto loc_8265276C;
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
loc_8265276C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82652778"))) PPC_WEAK_FUNC(sub_82652778);
PPC_FUNC_IMPL(__imp__sub_82652778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// lfs f0,8248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8248);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82652798
	if (ctx.cr6.gt) goto loc_82652798;
	// addi r11,r1,28
	ctx.r11.s64 = ctx.r1.s64 + 28;
loc_82652798:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x826527bc
	if (ctx.cr6.lt) goto loc_826527BC;
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
loc_826527BC:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,5144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5144);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826527D8"))) PPC_WEAK_FUNC(sub_826527D8);
PPC_FUNC_IMPL(__imp__sub_826527D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f1,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// lfs f13,-12556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12556);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f0,7856(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7856);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8265280c
	if (!ctx.cr6.gt) goto loc_8265280C;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
loc_8265280C:
	// addi r11,r1,28
	ctx.r11.s64 = ctx.r1.s64 + 28;
	// fcmpu cr6,f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x8265281c
	if (!ctx.cr6.lt) goto loc_8265281C;
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
loc_8265281C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82652828"))) PPC_WEAK_FUNC(sub_82652828);
PPC_FUNC_IMPL(__imp__sub_82652828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82652830;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x826dfb50
	ctx.lr = 0x82652838;
	__savefpr_14(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x82652858
	if (ctx.cr6.gt) goto loc_82652858;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82652858:
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// clrldi r10,r5,32
	ctx.r10.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// std r10,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r10.u64);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f12,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f23.f64 = double(temp.f32);
	// lfs f22,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f22.f64 = double(temp.f32);
	// lfs f21,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f21.f64 = double(temp.f32);
	// lfs f20,140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	ctx.f20.f64 = double(temp.f32);
	// lfs f19,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f19.f64 = double(temp.f32);
	// lfs f18,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f18.f64 = double(temp.f32);
	// lfs f17,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f17.f64 = double(temp.f32);
	// lfs f16,156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f16.f64 = double(temp.f32);
	// lfs f15,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f15.f64 = double(temp.f32);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f13,240(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f14,f0
	ctx.f14.f64 = double(float(ctx.f0.f64));
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f14,f0,f14
	ctx.f14.f64 = double(float(ctx.f0.f64 / ctx.f14.f64));
	// stfs f14,80(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f14
	ctx.f13.f64 = ctx.f14.f64;
	// lfs f14,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f14.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmuls f12,f11,f13
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f12,f9,f13
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f12,f8,f0
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f12,140(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmuls f12,f7,f13
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f12,f6,f0
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f12,f5,f13
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmuls f14,f14,f13
	ctx.f14.f64 = double(float(ctx.f14.f64 * ctx.f13.f64));
	// stfs f14,120(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f12,f4,f0
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f12,156(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmuls f12,f3,f13
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmuls f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmuls f12,f31,f0
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// stfs f12,172(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmuls f12,f30,f13
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// stfs f12,176(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmuls f12,f29,f0
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// stfs f12,180(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmuls f12,f28,f13
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f13.f64));
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fmuls f12,f27,f0
	ctx.f12.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// stfs f12,188(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fmuls f12,f26,f13
	ctx.f12.f64 = double(float(ctx.f26.f64 * ctx.f13.f64));
	// stfs f12,192(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fmuls f12,f25,f0
	ctx.f12.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
	// stfs f12,196(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fmuls f12,f24,f13
	ctx.f12.f64 = double(float(ctx.f24.f64 * ctx.f13.f64));
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fmuls f12,f23,f0
	ctx.f12.f64 = double(float(ctx.f23.f64 * ctx.f0.f64));
	// stfs f12,204(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fmuls f12,f22,f13
	ctx.f12.f64 = double(float(ctx.f22.f64 * ctx.f13.f64));
	// stfs f12,208(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fmuls f12,f21,f0
	ctx.f12.f64 = double(float(ctx.f21.f64 * ctx.f0.f64));
	// stfs f12,212(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// fmuls f12,f20,f13
	ctx.f12.f64 = double(float(ctx.f20.f64 * ctx.f13.f64));
	// stfs f12,216(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// fmuls f12,f19,f0
	ctx.f12.f64 = double(float(ctx.f19.f64 * ctx.f0.f64));
	// stfs f12,220(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// fmuls f12,f18,f13
	ctx.f12.f64 = double(float(ctx.f18.f64 * ctx.f13.f64));
	// stfs f12,224(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// fmuls f12,f17,f0
	ctx.f12.f64 = double(float(ctx.f17.f64 * ctx.f0.f64));
	// fmuls f13,f16,f13
	ctx.f13.f64 = double(float(ctx.f16.f64 * ctx.f13.f64));
	// stfs f12,228(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// fmuls f0,f15,f0
	ctx.f0.f64 = double(float(ctx.f15.f64 * ctx.f0.f64));
	// stfs f13,232(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f0,236(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82652A50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82652aa4
	if (ctx.cr6.eq) goto loc_82652AA4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,210
	ctx.r4.s64 = 210;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82652A78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82652aa4
	if (ctx.cr6.eq) goto loc_82652AA4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r31,176
	ctx.r5.s64 = ctx.r31.s64 + 176;
	// li r4,218
	ctx.r4.s64 = 218;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82652AA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82652AA4:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x826dfb9c
	ctx.lr = 0x82652AB0;
	__restfpr_14(ctx, base);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82652AB8"))) PPC_WEAK_FUNC(sub_82652AB8);
PPC_FUNC_IMPL(__imp__sub_82652AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x82652AC0;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82652AE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r26,36(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r28,40(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82652B08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82652B24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82652828
	ctx.lr = 0x82652B34;
	sub_82652828(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259a830
	ctx.lr = 0x82652B44;
	sub_8259A830(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8259b040
	ctx.lr = 0x82652B50;
	sub_8259B040(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259ace8
	ctx.lr = 0x82652B60;
	sub_8259ACE8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259acc0
	ctx.lr = 0x82652B74;
	sub_8259ACC0(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82652B88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82652BA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82652828
	ctx.lr = 0x82652BB4;
	sub_82652828(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259a7f0
	ctx.lr = 0x82652BBC;
	sub_8259A7F0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// bl 0x8259a628
	ctx.lr = 0x82652C04;
	sub_8259A628(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259a608
	ctx.lr = 0x82652C0C;
	sub_8259A608(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8259a830
	ctx.lr = 0x82652C24;
	sub_8259A830(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82652c34
	if (ctx.cr6.eq) goto loc_82652C34;
	// bl 0x82581e38
	ctx.lr = 0x82652C34;
	sub_82581E38(ctx, base);
loc_82652C34:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82652C40"))) PPC_WEAK_FUNC(sub_82652C40);
PPC_FUNC_IMPL(__imp__sub_82652C40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// stfs f2,36(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 36, temp.u32);
	// stfs f3,44(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 44, temp.u32);
	// stfs f4,52(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 52, temp.u32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,28
	ctx.r11.s64 = ctx.r1.s64 + 28;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82652c6c
	if (ctx.cr6.gt) goto loc_82652C6C;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
loc_82652C6C:
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f12,36(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,36
	ctx.r11.s64 = ctx.r1.s64 + 36;
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fcmpu cr6,f13,f2
	ctx.cr6.compare(ctx.f13.f64, ctx.f2.f64);
	// blt cr6,0x82652c94
	if (ctx.cr6.lt) goto loc_82652C94;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
loc_82652C94:
	// fadds f13,f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r11,r1,44
	ctx.r11.s64 = ctx.r1.s64 + 44;
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// fcmpu cr6,f13,f3
	ctx.cr6.compare(ctx.f13.f64, ctx.f3.f64);
	// blt cr6,0x82652cb4
	if (ctx.cr6.lt) goto loc_82652CB4;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
loc_82652CB4:
	// fadds f0,f3,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r11,r1,52
	ctx.r11.s64 = ctx.r1.s64 + 52;
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// fcmpu cr6,f0,f4
	ctx.cr6.compare(ctx.f0.f64, ctx.f4.f64);
	// blt cr6,0x82652cd4
	if (ctx.cr6.lt) goto loc_82652CD4;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
loc_82652CD4:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82652CE0"))) PPC_WEAK_FUNC(sub_82652CE0);
PPC_FUNC_IMPL(__imp__sub_82652CE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82652CE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82657d00
	ctx.lr = 0x82652CF8;
	sub_82657D00(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-1912
	ctx.r11.s64 = ctx.r11.s64 + -1912;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r10,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r10.u8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82652D38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82652dd8
	if (ctx.cr6.eq) goto loc_82652DD8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8262dec8
	ctx.lr = 0x82652D50;
	sub_8262DEC8(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82652dd8
	if (ctx.cr6.eq) goto loc_82652DD8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82652dd0
	if (ctx.cr6.eq) goto loc_82652DD0;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82652d80
	if (ctx.cr6.lt) goto loc_82652D80;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82652d84
	goto loc_82652D84;
loc_82652D80:
	// addi r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 4;
loc_82652D84:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82652D98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823032b8
	ctx.lr = 0x82652DA4;
	sub_823032B8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82652db4
	if (ctx.cr6.eq) goto loc_82652DB4;
	// bl 0x82581e38
	ctx.lr = 0x82652DB4;
	sub_82581E38(ctx, base);
loc_82652DB4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82652dd8
	if (ctx.cr6.eq) goto loc_82652DD8;
	// bl 0x82581e38
	ctx.lr = 0x82652DC4;
	sub_82581E38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82652DD0:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82581e38
	ctx.lr = 0x82652DD8;
	sub_82581E38(ctx, base);
loc_82652DD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82652DE8"))) PPC_WEAK_FUNC(sub_82652DE8);
PPC_FUNC_IMPL(__imp__sub_82652DE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8ac
	ctx.lr = 0x82652DF0;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82652E2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r24,36(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r30,40(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// beq cr6,0x82652e84
	if (ctx.cr6.eq) goto loc_82652E84;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82652e84
	if (ctx.cr6.eq) goto loc_82652E84;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8259a830
	ctx.lr = 0x82652E60;
	sub_8259A830(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259ace8
	ctx.lr = 0x82652E70;
	sub_8259ACE8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259acc0
	ctx.lr = 0x82652E84;
	sub_8259ACC0(ctx, base);
loc_82652E84:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82652ed4
	if (ctx.cr6.eq) goto loc_82652ED4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82652ed4
	if (ctx.cr6.eq) goto loc_82652ED4;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259a830
	ctx.lr = 0x82652EB0;
	sub_8259A830(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259ace8
	ctx.lr = 0x82652EC0;
	sub_8259ACE8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259acc0
	ctx.lr = 0x82652ED4;
	sub_8259ACC0(ctx, base);
loc_82652ED4:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82652f24
	if (ctx.cr6.eq) goto loc_82652F24;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82652f24
	if (ctx.cr6.eq) goto loc_82652F24;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259a830
	ctx.lr = 0x82652F00;
	sub_8259A830(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259ace8
	ctx.lr = 0x82652F10;
	sub_8259ACE8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259acc0
	ctx.lr = 0x82652F24;
	sub_8259ACC0(ctx, base);
loc_82652F24:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82652f74
	if (ctx.cr6.eq) goto loc_82652F74;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82652f74
	if (ctx.cr6.eq) goto loc_82652F74;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259a830
	ctx.lr = 0x82652F50;
	sub_8259A830(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,308(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// bl 0x8259ace8
	ctx.lr = 0x82652F60;
	sub_8259ACE8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259acc0
	ctx.lr = 0x82652F74;
	sub_8259ACC0(ctx, base);
loc_82652F74:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8259b040
	ctx.lr = 0x82652F80;
	sub_8259B040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259a7f0
	ctx.lr = 0x82652F88;
	sub_8259A7F0(ctx, base);
	// lbz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82652f9c
	if (!ctx.cr6.eq) goto loc_82652F9C;
	// addi r6,r27,12
	ctx.r6.s64 = ctx.r27.s64 + 12;
	// b 0x82653044
	goto loc_82653044;
loc_82652F9C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// beq cr6,0x82653030
	if (ctx.cr6.eq) goto loc_82653030;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82653030
	if (ctx.cr6.eq) goto loc_82653030;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82652FD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,3548(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3548);
	ctx.f31.f64 = double(temp.f32);
	// lfd f0,104(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82653014;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_82653030:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r27,12
	ctx.r4.s64 = ctx.r27.s64 + 12;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825d4198
	ctx.lr = 0x82653040;
	sub_825D4198(ctx, base);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
loc_82653044:
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-20144
	ctx.r5.s64 = ctx.r11.s64 + -20144;
	// bl 0x8259a628
	ctx.lr = 0x82653058;
	sub_8259A628(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259a608
	ctx.lr = 0x82653060;
	sub_8259A608(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826530a4
	if (ctx.cr6.eq) goto loc_826530A4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826530a4
	if (ctx.cr6.eq) goto loc_826530A4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259a830
	ctx.lr = 0x82653094;
	sub_8259A830(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826530a4
	if (ctx.cr6.eq) goto loc_826530A4;
	// bl 0x82581e38
	ctx.lr = 0x826530A4;
	sub_82581E38(ctx, base);
loc_826530A4:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826530e4
	if (ctx.cr6.eq) goto loc_826530E4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826530e4
	if (ctx.cr6.eq) goto loc_826530E4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259a830
	ctx.lr = 0x826530D4;
	sub_8259A830(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826530e4
	if (ctx.cr6.eq) goto loc_826530E4;
	// bl 0x82581e38
	ctx.lr = 0x826530E4;
	sub_82581E38(ctx, base);
loc_826530E4:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82653124
	if (ctx.cr6.eq) goto loc_82653124;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82653124
	if (ctx.cr6.eq) goto loc_82653124;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259a830
	ctx.lr = 0x82653114;
	sub_8259A830(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82653124
	if (ctx.cr6.eq) goto loc_82653124;
	// bl 0x82581e38
	ctx.lr = 0x82653124;
	sub_82581E38(ctx, base);
loc_82653124:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82653164
	if (ctx.cr6.eq) goto loc_82653164;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82653164
	if (ctx.cr6.eq) goto loc_82653164;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259a830
	ctx.lr = 0x82653154;
	sub_8259A830(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82653164
	if (ctx.cr6.eq) goto loc_82653164;
	// bl 0x82581e38
	ctx.lr = 0x82653164;
	sub_82581E38(ctx, base);
loc_82653164:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x826de8fc
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82653170"))) PPC_WEAK_FUNC(sub_82653170);
PPC_FUNC_IMPL(__imp__sub_82653170) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82653198;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r31,24
	ctx.r5.s64 = ctx.r31.s64 + 24;
	// li r4,210
	ctx.r4.s64 = 210;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826531B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82652de8
	ctx.lr = 0x826531F0;
	sub_82652DE8(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82653200
	if (ctx.cr6.eq) goto loc_82653200;
	// bl 0x82581e38
	ctx.lr = 0x82653200;
	sub_82581E38(ctx, base);
loc_82653200:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82653210
	if (ctx.cr6.eq) goto loc_82653210;
	// bl 0x82581e38
	ctx.lr = 0x82653210;
	sub_82581E38(ctx, base);
loc_82653210:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82653220
	if (ctx.cr6.eq) goto loc_82653220;
	// bl 0x82581e38
	ctx.lr = 0x82653220;
	sub_82581E38(ctx, base);
loc_82653220:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82653230
	if (ctx.cr6.eq) goto loc_82653230;
	// bl 0x82581e38
	ctx.lr = 0x82653230;
	sub_82581E38(ctx, base);
loc_82653230:
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

__attribute__((alias("__imp__sub_82653248"))) PPC_WEAK_FUNC(sub_82653248);
PPC_FUNC_IMPL(__imp__sub_82653248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82653250;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82653274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r31,24
	ctx.r5.s64 = ctx.r31.s64 + 24;
	// li r4,210
	ctx.r4.s64 = 210;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82653290;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82652de8
	ctx.lr = 0x826532C8;
	sub_82652DE8(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826532d8
	if (ctx.cr6.eq) goto loc_826532D8;
	// bl 0x82581e38
	ctx.lr = 0x826532D8;
	sub_82581E38(ctx, base);
loc_826532D8:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826532e8
	if (ctx.cr6.eq) goto loc_826532E8;
	// bl 0x82581e38
	ctx.lr = 0x826532E8;
	sub_82581E38(ctx, base);
loc_826532E8:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826532f8
	if (ctx.cr6.eq) goto loc_826532F8;
	// bl 0x82581e38
	ctx.lr = 0x826532F8;
	sub_82581E38(ctx, base);
loc_826532F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82653300"))) PPC_WEAK_FUNC(sub_82653300);
PPC_FUNC_IMPL(__imp__sub_82653300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82653308;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265332C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f0,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r4,210
	ctx.r4.s64 = 210;
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f0,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82653368;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82652de8
	ctx.lr = 0x826533A0;
	sub_82652DE8(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826533b0
	if (ctx.cr6.eq) goto loc_826533B0;
	// bl 0x82581e38
	ctx.lr = 0x826533B0;
	sub_82581E38(ctx, base);
loc_826533B0:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826533c0
	if (ctx.cr6.eq) goto loc_826533C0;
	// bl 0x82581e38
	ctx.lr = 0x826533C0;
	sub_82581E38(ctx, base);
loc_826533C0:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826533d0
	if (ctx.cr6.eq) goto loc_826533D0;
	// bl 0x82581e38
	ctx.lr = 0x826533D0;
	sub_82581E38(ctx, base);
loc_826533D0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826533D8"))) PPC_WEAK_FUNC(sub_826533D8);
PPC_FUNC_IMPL(__imp__sub_826533D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x826533E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82653404;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,210
	ctx.r4.s64 = 210;
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265343C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82652de8
	ctx.lr = 0x82653474;
	sub_82652DE8(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82653484
	if (ctx.cr6.eq) goto loc_82653484;
	// bl 0x82581e38
	ctx.lr = 0x82653484;
	sub_82581E38(ctx, base);
loc_82653484:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82653494
	if (ctx.cr6.eq) goto loc_82653494;
	// bl 0x82581e38
	ctx.lr = 0x82653494;
	sub_82581E38(ctx, base);
loc_82653494:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826534a4
	if (ctx.cr6.eq) goto loc_826534A4;
	// bl 0x82581e38
	ctx.lr = 0x826534A4;
	sub_82581E38(ctx, base);
loc_826534A4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826534B0"))) PPC_WEAK_FUNC(sub_826534B0);
PPC_FUNC_IMPL(__imp__sub_826534B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x826534B8;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x826dfb88
	ctx.lr = 0x826534C0;
	__savefpr_28(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826534F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f30,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r29,r1,272
	ctx.r29.s64 = ctx.r1.s64 + 272;
	// stfs f29,136(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
	// li r30,16
	ctx.r30.s64 = 16;
	// lfs f30,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f30,140(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f0,-24552(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24552);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lfs f13,5424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5424);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lfs f31,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fdivs f29,f31,f28
	ctx.f29.f64 = double(float(ctx.f31.f64 / ctx.f28.f64));
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f13,188(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lfs f12,5524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5524);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f13,204(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// lfs f28,9324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9324);
	ctx.f28.f64 = double(temp.f32);
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f31,212(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f13,216(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f31,220(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f31,224(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f31,228(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f12,232(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f31,236(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f0,240(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f12,244(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f13,248(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f12,252(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f31,256(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f12,260(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f12,264(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f12,268(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
loc_826535C8:
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fmuls f13,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f1,f0,f28
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// bl 0x826e5140
	ctx.lr = 0x826535EC;
	sub_826E5140(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// fadds f30,f0,f30
	ctx.f30.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// bne cr6,0x826535c8
	if (!ctx.cr6.eq) goto loc_826535C8;
	// fdivs f0,f31,f30
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f30.f64));
	// addi r11,r1,276
	ctx.r11.s64 = ctx.r1.s64 + 276;
	// li r10,2
	ctx.r10.s64 = 2;
loc_82653618:
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r6,r11,12
	ctx.r6.s64 = ctx.r11.s64 + 12;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// lfs f12,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lfs f10,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f9,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f7,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f12,0(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f11,0(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f10,0(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stfs f9,0(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stfs f8,0(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f7,0(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// bne cr6,0x82653618
	if (!ctx.cr6.eq) goto loc_82653618;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826536B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f30,f31,f0
	ctx.f30.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826536E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// li r10,16
	ctx.r10.s64 = 16;
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
loc_82653708:
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// bne cr6,0x82653708
	if (!ctx.cr6.eq) goto loc_82653708;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,210
	ctx.r4.s64 = 210;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82653754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,211
	ctx.r4.s64 = 211;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82653774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// li r4,219
	ctx.r4.s64 = 219;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82653794;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82652de8
	ctx.lr = 0x826537CC;
	sub_82652DE8(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826537dc
	if (ctx.cr6.eq) goto loc_826537DC;
	// bl 0x82581e38
	ctx.lr = 0x826537DC;
	sub_82581E38(ctx, base);
loc_826537DC:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826537ec
	if (ctx.cr6.eq) goto loc_826537EC;
	// bl 0x82581e38
	ctx.lr = 0x826537EC;
	sub_82581E38(ctx, base);
loc_826537EC:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826537fc
	if (ctx.cr6.eq) goto loc_826537FC;
	// bl 0x82581e38
	ctx.lr = 0x826537FC;
	sub_82581E38(ctx, base);
loc_826537FC:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x826dfbd4
	ctx.lr = 0x82653808;
	__restfpr_28(ctx, base);
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

extern bool DisableRadialBlur();

__attribute__((alias("__imp__sub_82653810"))) PPC_WEAK_FUNC(sub_82653810);
PPC_FUNC_IMPL(__imp__sub_82653810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82653818;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f13,26012(r11)
	if (DisableRadialBlur()) {
		goto loc_82653840;
	}
	else {
	}
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26012);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8265386c
	if (!ctx.cr6.lt) goto loc_8265386C;
loc_82653840:
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82653854
	if (ctx.cr6.eq) goto loc_82653854;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x82653854;
	sub_82659610(ctx, base);
loc_82653854:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265388c
	if (ctx.cr6.eq) goto loc_8265388C;
	// bl 0x82581e38
	ctx.lr = 0x82653868;
	sub_82581E38(ctx, base);
	// b 0x8265388c
	goto loc_8265388C;
loc_8265386C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// lfs f13,-32208(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32208);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82653888
	if (ctx.cr6.lt) goto loc_82653888;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
loc_82653888:
	// bl 0x823032b8
	ctx.lr = 0x8265388C;
	sub_823032B8(ctx, base);
loc_8265388C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826538A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,210
	ctx.r4.s64 = 210;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826538C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,210
	ctx.r4.s64 = 210;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826538E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82652de8
	ctx.lr = 0x8265391C;
	sub_82652DE8(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265392c
	if (ctx.cr6.eq) goto loc_8265392C;
	// bl 0x82581e38
	ctx.lr = 0x8265392C;
	sub_82581E38(ctx, base);
loc_8265392C:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265393c
	if (ctx.cr6.eq) goto loc_8265393C;
	// bl 0x82581e38
	ctx.lr = 0x8265393C;
	sub_82581E38(ctx, base);
loc_8265393C:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265394c
	if (ctx.cr6.eq) goto loc_8265394C;
	// bl 0x82581e38
	ctx.lr = 0x8265394C;
	sub_82581E38(ctx, base);
loc_8265394C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82653958"))) PPC_WEAK_FUNC(sub_82653958);
PPC_FUNC_IMPL(__imp__sub_82653958) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f0,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826539A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// li r4,210
	ctx.r4.s64 = 210;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826539C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,211
	ctx.r4.s64 = 211;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826539E0;
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

__attribute__((alias("__imp__sub_826539F8"))) PPC_WEAK_FUNC(sub_826539F8);
PPC_FUNC_IMPL(__imp__sub_826539F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82653A00;
	__savegprlr_28(ctx, base);
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82653A24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r31
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82653a44
	if (ctx.cr6.eq) goto loc_82653A44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x82653A44;
	sub_82659610(ctx, base);
loc_82653A44:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82653a58
	if (ctx.cr6.eq) goto loc_82653A58;
	// bl 0x82581e38
	ctx.lr = 0x82653A58;
	sub_82581E38(ctx, base);
loc_82653A58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82653958
	ctx.lr = 0x82653A60;
	sub_82653958(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82652de8
	ctx.lr = 0x82653A98;
	sub_82652DE8(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82653aa8
	if (ctx.cr6.eq) goto loc_82653AA8;
	// bl 0x82581e38
	ctx.lr = 0x82653AA8;
	sub_82581E38(ctx, base);
loc_82653AA8:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82653ab8
	if (ctx.cr6.eq) goto loc_82653AB8;
	// bl 0x82581e38
	ctx.lr = 0x82653AB8;
	sub_82581E38(ctx, base);
loc_82653AB8:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82653ac8
	if (ctx.cr6.eq) goto loc_82653AC8;
	// bl 0x82581e38
	ctx.lr = 0x82653AC8;
	sub_82581E38(ctx, base);
loc_82653AC8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82653AD0"))) PPC_WEAK_FUNC(sub_82653AD0);
PPC_FUNC_IMPL(__imp__sub_82653AD0) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,-1888
	ctx.r4.s64 = ctx.r11.s64 + -1888;
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
	ctx.lr = 0x82653B14;
	sub_82161E08(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82652ce0
	ctx.lr = 0x82653B24;
	sub_82652CE0(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82653b38
	if (ctx.cr6.lt) goto loc_82653B38;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x82653B38;
	sub_82186190(ctx, base);
loc_82653B38:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-1900
	ctx.r11.s64 = ctx.r11.s64 + -1900;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
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

__attribute__((alias("__imp__sub_82653B78"))) PPC_WEAK_FUNC(sub_82653B78);
PPC_FUNC_IMPL(__imp__sub_82653B78) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,-1856
	ctx.r4.s64 = ctx.r11.s64 + -1856;
	// li r11,15
	ctx.r11.s64 = 15;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,15
	ctx.r5.s64 = 15;
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
	ctx.lr = 0x82653BBC;
	sub_82161E08(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82652ce0
	ctx.lr = 0x82653BCC;
	sub_82652CE0(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82653be0
	if (ctx.cr6.lt) goto loc_82653BE0;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x82653BE0;
	sub_82186190(ctx, base);
loc_82653BE0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-1868
	ctx.r11.s64 = ctx.r11.s64 + -1868;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
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

__attribute__((alias("__imp__sub_82653C20"))) PPC_WEAK_FUNC(sub_82653C20);
PPC_FUNC_IMPL(__imp__sub_82653C20) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,-1824
	ctx.r4.s64 = ctx.r11.s64 + -1824;
	// li r11,15
	ctx.r11.s64 = 15;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,21
	ctx.r5.s64 = 21;
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
	ctx.lr = 0x82653C64;
	sub_82161E08(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82652ce0
	ctx.lr = 0x82653C74;
	sub_82652CE0(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82653c88
	if (ctx.cr6.lt) goto loc_82653C88;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x82653C88;
	sub_82186190(ctx, base);
loc_82653C88:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1836
	ctx.r11.s64 = ctx.r11.s64 + -1836;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f13,14088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
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

__attribute__((alias("__imp__sub_82653CD0"))) PPC_WEAK_FUNC(sub_82653CD0);
PPC_FUNC_IMPL(__imp__sub_82653CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82653cfc
	if (ctx.cr6.eq) goto loc_82653CFC;
	// bl 0x82581e38
	ctx.lr = 0x82653CFC;
	sub_82581E38(ctx, base);
loc_82653CFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82657d18
	ctx.lr = 0x82653D04;
	sub_82657D18(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82653d1c
	if (ctx.cr6.eq) goto loc_82653D1C;
	// bl 0x82186190
	ctx.lr = 0x82653D18;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82653D1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653D38"))) PPC_WEAK_FUNC(sub_82653D38);
PPC_FUNC_IMPL(__imp__sub_82653D38) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,-10008
	ctx.r4.s64 = ctx.r11.s64 + -10008;
	// li r11,15
	ctx.r11.s64 = 15;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,16
	ctx.r5.s64 = 16;
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
	ctx.lr = 0x82653D7C;
	sub_82161E08(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82652ce0
	ctx.lr = 0x82653D8C;
	sub_82652CE0(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82653da0
	if (ctx.cr6.lt) goto loc_82653DA0;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x82653DA0;
	sub_82186190(ctx, base);
loc_82653DA0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-1796
	ctx.r11.s64 = ctx.r11.s64 + -1796;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82653DD8"))) PPC_WEAK_FUNC(sub_82653DD8);
PPC_FUNC_IMPL(__imp__sub_82653DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82653DE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82657d00
	ctx.lr = 0x82653DEC;
	sub_82657D00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r28,r29,12
	ctx.r28.s64 = ctx.r29.s64 + 12;
	// addi r11,r11,-1608
	ctx.r11.s64 = ctx.r11.s64 + -1608;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,6
	ctx.r10.s64 = 6;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82653E10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82653e10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82653E10;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r11,-1628
	ctx.r4.s64 = ctx.r11.s64 + -1628;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// bl 0x82161e08
	ctx.lr = 0x82653E40;
	sub_82161E08(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82657d70
	ctx.lr = 0x82653E50;
	sub_82657D70(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82653e64
	if (ctx.cr6.lt) goto loc_82653E64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82186190
	ctx.lr = 0x82653E64;
	sub_82186190(ctx, base);
loc_82653E64:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// addi r5,r11,-1652
	ctx.r5.s64 = ctx.r11.s64 + -1652;
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82653E90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82653ea4
	if (ctx.cr6.eq) goto loc_82653EA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x82653EA4;
	sub_82659610(ctx, base);
loc_82653EA4:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82653eb8
	if (ctx.cr6.eq) goto loc_82653EB8;
	// bl 0x82581e38
	ctx.lr = 0x82653EB8;
	sub_82581E38(ctx, base);
loc_82653EB8:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82653ec8
	if (ctx.cr6.eq) goto loc_82653EC8;
	// bl 0x82581e38
	ctx.lr = 0x82653EC8;
	sub_82581E38(ctx, base);
loc_82653EC8:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r5,r11,-1676
	ctx.r5.s64 = ctx.r11.s64 + -1676;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82653EE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82653efc
	if (ctx.cr6.eq) goto loc_82653EFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x82653EFC;
	sub_82659610(ctx, base);
loc_82653EFC:
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82653f10
	if (ctx.cr6.eq) goto loc_82653F10;
	// bl 0x82581e38
	ctx.lr = 0x82653F10;
	sub_82581E38(ctx, base);
loc_82653F10:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82653f20
	if (ctx.cr6.eq) goto loc_82653F20;
	// bl 0x82581e38
	ctx.lr = 0x82653F20;
	sub_82581E38(ctx, base);
loc_82653F20:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r5,r11,-1700
	ctx.r5.s64 = ctx.r11.s64 + -1700;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82653F40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82653f54
	if (ctx.cr6.eq) goto loc_82653F54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x82653F54;
	sub_82659610(ctx, base);
loc_82653F54:
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r31,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82653f68
	if (ctx.cr6.eq) goto loc_82653F68;
	// bl 0x82581e38
	ctx.lr = 0x82653F68;
	sub_82581E38(ctx, base);
loc_82653F68:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82653f78
	if (ctx.cr6.eq) goto loc_82653F78;
	// bl 0x82581e38
	ctx.lr = 0x82653F78;
	sub_82581E38(ctx, base);
loc_82653F78:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,-1728
	ctx.r5.s64 = ctx.r11.s64 + -1728;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82653F98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82653fac
	if (ctx.cr6.eq) goto loc_82653FAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x82653FAC;
	sub_82659610(ctx, base);
loc_82653FAC:
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stw r31,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82653fc0
	if (ctx.cr6.eq) goto loc_82653FC0;
	// bl 0x82581e38
	ctx.lr = 0x82653FC0;
	sub_82581E38(ctx, base);
loc_82653FC0:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82653fd0
	if (ctx.cr6.eq) goto loc_82653FD0;
	// bl 0x82581e38
	ctx.lr = 0x82653FD0;
	sub_82581E38(ctx, base);
loc_82653FD0:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r5,r11,-1756
	ctx.r5.s64 = ctx.r11.s64 + -1756;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82653FF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82654004
	if (ctx.cr6.eq) goto loc_82654004;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x82654004;
	sub_82659610(ctx, base);
loc_82654004:
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// stw r31,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82654018
	if (ctx.cr6.eq) goto loc_82654018;
	// bl 0x82581e38
	ctx.lr = 0x82654018;
	sub_82581E38(ctx, base);
loc_82654018:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82654028
	if (ctx.cr6.eq) goto loc_82654028;
	// bl 0x82581e38
	ctx.lr = 0x82654028;
	sub_82581E38(ctx, base);
loc_82654028:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r5,r11,-1784
	ctx.r5.s64 = ctx.r11.s64 + -1784;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8265405c
	if (ctx.cr6.eq) goto loc_8265405C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x8265405C;
	sub_82659610(ctx, base);
loc_8265405C:
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r31,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82654070
	if (ctx.cr6.eq) goto loc_82654070;
	// bl 0x82581e38
	ctx.lr = 0x82654070;
	sub_82581E38(ctx, base);
loc_82654070:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82654080
	if (ctx.cr6.eq) goto loc_82654080;
	// bl 0x82581e38
	ctx.lr = 0x82654080;
	sub_82581E38(ctx, base);
loc_82654080:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r29,36
	ctx.r10.s64 = ctx.r29.s64 + 36;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// ld r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
loc_8265409C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265409c
	if (!ctx.cr6.eq) goto loc_8265409C;
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// addi r10,r29,176
	ctx.r10.s64 = ctx.r29.s64 + 176;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r9,r9,-18448
	ctx.r9.s64 = ctx.r9.s64 + -18448;
loc_826540C0:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826540c0
	if (!ctx.cr6.eq) goto loc_826540C0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826540e8
	if (ctx.cr6.eq) goto loc_826540E8;
	// bl 0x82581e38
	ctx.lr = 0x826540E8;
	sub_82581E38(ctx, base);
loc_826540E8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826540F8"))) PPC_WEAK_FUNC(sub_826540F8);
PPC_FUNC_IMPL(__imp__sub_826540F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82654100;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,5
	ctx.r30.s64 = 5;
	// addi r31,r29,36
	ctx.r31.s64 = ctx.r29.s64 + 36;
loc_82654110:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82654124
	if (ctx.cr6.eq) goto loc_82654124;
	// bl 0x82581e38
	ctx.lr = 0x82654124;
	sub_82581E38(ctx, base);
loc_82654124:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82654110
	if (!ctx.cr6.lt) goto loc_82654110;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82657d18
	ctx.lr = 0x82654138;
	sub_82657D18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82654140"))) PPC_WEAK_FUNC(sub_82654140);
PPC_FUNC_IMPL(__imp__sub_82654140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826540f8
	ctx.lr = 0x82654160;
	sub_826540F8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82654178
	if (ctx.cr6.eq) goto loc_82654178;
	// bl 0x82186190
	ctx.lr = 0x82654174;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82654178:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82654190"))) PPC_WEAK_FUNC(sub_82654190);
PPC_FUNC_IMPL(__imp__sub_82654190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82654198;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// addi r26,r11,-1520
	ctx.r26.s64 = ctx.r11.s64 + -1520;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,17
	ctx.r5.s64 = 17;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x826541D0;
	sub_82161E08(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82652ce0
	ctx.lr = 0x826541E0;
	sub_82652CE0(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x826541f4
	if (ctx.cr6.lt) goto loc_826541F4;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82186190
	ctx.lr = 0x826541F4;
	sub_82186190(ctx, base);
loc_826541F4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r11,r11,-1532
	ctx.r11.s64 = ctx.r11.s64 + -1532;
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// addi r29,r30,48
	ctx.r29.s64 = ctx.r30.s64 + 48;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-18448
	ctx.r11.s64 = ctx.r11.s64 + -18448;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8265436c
	if (ctx.cr6.eq) goto loc_8265436C;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x821620e8
	ctx.lr = 0x8265425C;
	sub_821620E8(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8262dec8
	ctx.lr = 0x8265426C;
	sub_8262DEC8(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82654280
	if (ctx.cr6.lt) goto loc_82654280;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82186190
	ctx.lr = 0x82654280;
	sub_82186190(ctx, base);
loc_82654280:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
	// beq cr6,0x8265436c
	if (ctx.cr6.eq) goto loc_8265436C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265435c
	if (ctx.cr6.eq) goto loc_8265435C;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r5,r11,-1556
	ctx.r5.s64 = ctx.r11.s64 + -1556;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826542C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823032b8
	ctx.lr = 0x826542D0;
	sub_823032B8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826542e0
	if (ctx.cr6.eq) goto loc_826542E0;
	// bl 0x82581e38
	ctx.lr = 0x826542E0;
	sub_82581E38(ctx, base);
loc_826542E0:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r5,r11,-1576
	ctx.r5.s64 = ctx.r11.s64 + -1576;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// bl 0x823032b8
	ctx.lr = 0x8265430C;
	sub_823032B8(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265431c
	if (ctx.cr6.eq) goto loc_8265431C;
	// bl 0x82581e38
	ctx.lr = 0x8265431C;
	sub_82581E38(ctx, base);
loc_8265431C:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r5,r11,-1596
	ctx.r5.s64 = ctx.r11.s64 + -1596;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265433C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// bl 0x823032b8
	ctx.lr = 0x82654348;
	sub_823032B8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82654358
	if (ctx.cr6.eq) goto loc_82654358;
	// bl 0x82581e38
	ctx.lr = 0x82654358;
	sub_82581E38(ctx, base);
loc_82654358:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8265435C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8265436c
	if (ctx.cr6.eq) goto loc_8265436C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82581e38
	ctx.lr = 0x8265436C;
	sub_82581E38(ctx, base);
loc_8265436C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82654378"))) PPC_WEAK_FUNC(sub_82654378);
PPC_FUNC_IMPL(__imp__sub_82654378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82654380;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r31,r29,60
	ctx.r31.s64 = ctx.r29.s64 + 60;
loc_82654390:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826543a4
	if (ctx.cr6.eq) goto loc_826543A4;
	// bl 0x82581e38
	ctx.lr = 0x826543A4;
	sub_82581E38(ctx, base);
loc_826543A4:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82654390
	if (!ctx.cr6.lt) goto loc_82654390;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826543c0
	if (ctx.cr6.eq) goto loc_826543C0;
	// bl 0x82581e38
	ctx.lr = 0x826543C0;
	sub_82581E38(ctx, base);
loc_826543C0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82657d18
	ctx.lr = 0x826543C8;
	sub_82657D18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826543D0"))) PPC_WEAK_FUNC(sub_826543D0);
PPC_FUNC_IMPL(__imp__sub_826543D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82654378
	ctx.lr = 0x826543F0;
	sub_82654378(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82654408
	if (ctx.cr6.eq) goto loc_82654408;
	// bl 0x82186190
	ctx.lr = 0x82654404;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82654408:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82654420"))) PPC_WEAK_FUNC(sub_82654420);
PPC_FUNC_IMPL(__imp__sub_82654420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82654428;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// addi r26,r11,-1464
	ctx.r26.s64 = ctx.r11.s64 + -1464;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,18
	ctx.r5.s64 = 18;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82654460;
	sub_82161E08(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82652ce0
	ctx.lr = 0x82654470;
	sub_82652CE0(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82654484
	if (ctx.cr6.lt) goto loc_82654484;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82186190
	ctx.lr = 0x82654484;
	sub_82186190(ctx, base);
loc_82654484:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// addi r29,r30,24
	ctx.r29.s64 = ctx.r30.s64 + 24;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r11,r11,-1476
	ctx.r11.s64 = ctx.r11.s64 + -1476;
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r31,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826544C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x826545a8
	if (ctx.cr6.eq) goto loc_826545A8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x821620e8
	ctx.lr = 0x826544D8;
	sub_821620E8(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8262dec8
	ctx.lr = 0x826544E8;
	sub_8262DEC8(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x826544fc
	if (ctx.cr6.lt) goto loc_826544FC;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82186190
	ctx.lr = 0x826544FC;
	sub_82186190(ctx, base);
loc_826544FC:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
	// beq cr6,0x826545a8
	if (ctx.cr6.eq) goto loc_826545A8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82654598
	if (ctx.cr6.eq) goto loc_82654598;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265453C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823032b8
	ctx.lr = 0x82654548;
	sub_823032B8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82654558
	if (ctx.cr6.eq) goto loc_82654558;
	// bl 0x82581e38
	ctx.lr = 0x82654558;
	sub_82581E38(ctx, base);
loc_82654558:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r5,r11,-1500
	ctx.r5.s64 = ctx.r11.s64 + -1500;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654578;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x823032b8
	ctx.lr = 0x82654584;
	sub_823032B8(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82654594
	if (ctx.cr6.eq) goto loc_82654594;
	// bl 0x82581e38
	ctx.lr = 0x82654594;
	sub_82581E38(ctx, base);
loc_82654594:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82654598:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826545a8
	if (ctx.cr6.eq) goto loc_826545A8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82581e38
	ctx.lr = 0x826545A8;
	sub_82581E38(ctx, base);
loc_826545A8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f4,28476(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28476);
	ctx.f4.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f3,-26736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26736);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f2,-26548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26548);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5808(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5808);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82652c40
	ctx.lr = 0x826545D0;
	sub_82652C40(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826545E8"))) PPC_WEAK_FUNC(sub_826545E8);
PPC_FUNC_IMPL(__imp__sub_826545E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x826545F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r31,r29,32
	ctx.r31.s64 = ctx.r29.s64 + 32;
loc_82654600:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82654614
	if (ctx.cr6.eq) goto loc_82654614;
	// bl 0x82581e38
	ctx.lr = 0x82654614;
	sub_82581E38(ctx, base);
loc_82654614:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82654600
	if (!ctx.cr6.lt) goto loc_82654600;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82654630
	if (ctx.cr6.eq) goto loc_82654630;
	// bl 0x82581e38
	ctx.lr = 0x82654630;
	sub_82581E38(ctx, base);
loc_82654630:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82657d18
	ctx.lr = 0x82654638;
	sub_82657D18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82654640"))) PPC_WEAK_FUNC(sub_82654640);
PPC_FUNC_IMPL(__imp__sub_82654640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826545e8
	ctx.lr = 0x82654660;
	sub_826545E8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82654678
	if (ctx.cr6.eq) goto loc_82654678;
	// bl 0x82186190
	ctx.lr = 0x82654674;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82654678:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82654690"))) PPC_WEAK_FUNC(sub_82654690);
PPC_FUNC_IMPL(__imp__sub_82654690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x828b2358
	ctx.lr = 0x826546A8;
	sub_828B2358(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// addi r11,r11,-9952
	ctx.r11.s64 = ctx.r11.s64 + -9952;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828b2430
	ctx.lr = 0x826546C0;
	sub_828B2430(ctx, base);
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

__attribute__((alias("__imp__sub_826546D8"))) PPC_WEAK_FUNC(sub_826546D8);
PPC_FUNC_IMPL(__imp__sub_826546D8) {
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
	// li r3,856
	ctx.r3.s64 = 856;
	// bl 0x82186158
	ctx.lr = 0x826546EC;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82654708
	if (ctx.cr6.eq) goto loc_82654708;
	// bl 0x82829d80
	ctx.lr = 0x826546F8;
	sub_82829D80(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82654708:
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

__attribute__((alias("__imp__sub_82654720"))) PPC_WEAK_FUNC(sub_82654720);
PPC_FUNC_IMPL(__imp__sub_82654720) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// addi r11,r11,-1400
	ctx.r11.s64 = ctx.r11.s64 + -1400;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82654740"))) PPC_WEAK_FUNC(sub_82654740);
PPC_FUNC_IMPL(__imp__sub_82654740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-9932
	ctx.r11.s64 = ctx.r11.s64 + -9932;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82654750"))) PPC_WEAK_FUNC(sub_82654750);
PPC_FUNC_IMPL(__imp__sub_82654750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82654758;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32045
	ctx.r30.s64 = -2100101120;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,26624(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26624);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8265477c
	if (!ctx.cr6.eq) goto loc_8265477C;
	// bl 0x82169f30
	ctx.lr = 0x82654778;
	sub_82169F30(ctx, base);
	// stw r3,26624(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26624, ctx.r3.u32);
loc_8265477C:
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x825d3888
	ctx.lr = 0x82654784;
	sub_825D3888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82654854
	if (ctx.cr6.eq) goto loc_82654854;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82654854
	if (ctx.cr6.eq) goto loc_82654854;
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82654854
	if (ctx.cr6.eq) goto loc_82654854;
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r11,r11,-1020
	ctx.r11.s64 = ctx.r11.s64 + -1020;
	// lfs f11,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// beq cr6,0x826547dc
	if (ctx.cr6.eq) goto loc_826547DC;
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
loc_826547DC:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r31
	PPC_STORE_U32(ctx.r31.u32, ctx.f0.u32);
	// fctiwz f0,f13
	ctx.f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// li r9,0
	ctx.r9.s64 = 0;
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lfs f0,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82654828
	if (!ctx.cr6.eq) goto loc_82654828;
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82654830
	if (ctx.cr6.eq) goto loc_82654830;
loc_82654828:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82654830:
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82654868
	if (ctx.cr6.eq) goto loc_82654868;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82654854:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82654868:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82654878"))) PPC_WEAK_FUNC(sub_82654878);
PPC_FUNC_IMPL(__imp__sub_82654878) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFF0000;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82654888"))) PPC_WEAK_FUNC(sub_82654888);
PPC_FUNC_IMPL(__imp__sub_82654888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82654890;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82654914
	if (!ctx.cr6.lt) goto loc_82654914;
	// lwz r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// addi r29,r28,4
	ctx.r29.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x826548c4
	if (ctx.cr6.lt) goto loc_826548C4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x826548c8
	goto loc_826548C8;
loc_826548C4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_826548C8:
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x826548dc
	if (ctx.cr6.lt) goto loc_826548DC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x826548e0
	goto loc_826548E0;
loc_826548DC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_826548E0:
	// add r31,r11,r5
	ctx.r31.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82654914
	if (!ctx.cr6.lt) goto loc_82654914;
loc_826548EC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x826dfca0
	ctx.lr = 0x82654900;
	sub_826DFCA0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82654920
	if (ctx.cr6.eq) goto loc_82654920;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x826548ec
	if (ctx.cr6.lt) goto loc_826548EC;
loc_82654914:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_82654920:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8265493c
	if (ctx.cr6.lt) goto loc_8265493C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r3,r11,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r11.s64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_8265493C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// subf r3,r11,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r11.s64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82654950"))) PPC_WEAK_FUNC(sub_82654950);
PPC_FUNC_IMPL(__imp__sub_82654950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82654958;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82654a1c
	if (ctx.cr6.eq) goto loc_82654A1C;
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r27,r30,4
	ctx.r27.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x82654990
	if (ctx.cr6.lt) goto loc_82654990;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// b 0x82654994
	goto loc_82654994;
loc_82654990:
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
loc_82654994:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x826549a0
	if (ctx.cr6.lt) goto loc_826549A0;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_826549A0:
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x826dfca0
	ctx.lr = 0x826549B8;
	sub_826DFCA0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826549f0
	if (ctx.cr6.eq) goto loc_826549F0;
loc_826549C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82160c88
	ctx.lr = 0x826549C8;
	sub_82160C88(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82654a1c
	if (ctx.cr6.eq) goto loc_82654A1C;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x826dfca0
	ctx.lr = 0x826549E8;
	sub_826DFCA0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826549c0
	if (!ctx.cr6.eq) goto loc_826549C0;
loc_826549F0:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82654a0c
	if (ctx.cr6.lt) goto loc_82654A0C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf r3,r11,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r11.s64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_82654A0C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// subf r3,r11,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r11.s64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_82654A1C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82654A28"))) PPC_WEAK_FUNC(sub_82654A28);
PPC_FUNC_IMPL(__imp__sub_82654A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r4,r11,-956
	ctx.r4.s64 = ctx.r11.s64 + -956;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82654888
	ctx.lr = 0x82654A5C;
	sub_82654888(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82654a70
	if (!ctx.cr6.eq) goto loc_82654A70;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82654a74
	goto loc_82654A74;
loc_82654A70:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82654A74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82654A90"))) PPC_WEAK_FUNC(sub_82654A90);
PPC_FUNC_IMPL(__imp__sub_82654A90) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ble cr6,0x82654c04
	if (!ctx.cr6.gt) goto loc_82654C04;
loc_82654AB0:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82654b28
	if (ctx.cr6.eq) goto loc_82654B28;
	// bge cr6,0x82654bc0
	if (!ctx.cr6.lt) goto loc_82654BC0;
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_82654AC0:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82654acc
	if (!ctx.cr6.gt) goto loc_82654ACC;
	// twi 31,r0,22
loc_82654ACC:
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// blt cr6,0x82654ae0
	if (ctx.cr6.lt) goto loc_82654AE0;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x82654ae4
	goto loc_82654AE4;
loc_82654AE0:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82654AE4:
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,44
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 44, ctx.xer);
	// beq cr6,0x82654bc0
	if (ctx.cr6.eq) goto loc_82654BC0;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82654afc
	if (!ctx.cr6.gt) goto loc_82654AFC;
	// twi 31,r0,22
loc_82654AFC:
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// blt cr6,0x82654b0c
	if (ctx.cr6.lt) goto loc_82654B0C;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x82654b10
	goto loc_82654B10;
loc_82654B0C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82654B10:
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,40
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 40, ctx.xer);
	// beq cr6,0x82654b3c
	if (ctx.cr6.eq) goto loc_82654B3C;
	// cmpwi cr6,r10,41
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 41, ctx.xer);
	// bne cr6,0x82654bb0
	if (!ctx.cr6.eq) goto loc_82654BB0;
loc_82654B28:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82654B3C:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82654b80
	if (!ctx.cr6.lt) goto loc_82654B80;
loc_82654B44:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82654b50
	if (!ctx.cr6.gt) goto loc_82654B50;
	// twi 31,r0,22
loc_82654B50:
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// blt cr6,0x82654b60
	if (ctx.cr6.lt) goto loc_82654B60;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x82654b64
	goto loc_82654B64;
loc_82654B60:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82654B64:
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,41
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 41, ctx.xer);
	// beq cr6,0x82654b7c
	if (ctx.cr6.eq) goto loc_82654B7C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82654b44
	if (ctx.cr6.lt) goto loc_82654B44;
loc_82654B7C:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
loc_82654B80:
	// bne cr6,0x82654bb0
	if (!ctx.cr6.eq) goto loc_82654BB0;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82654b90
	if (!ctx.cr6.gt) goto loc_82654B90;
	// twi 31,r0,22
loc_82654B90:
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// blt cr6,0x82654ba0
	if (ctx.cr6.lt) goto loc_82654BA0;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x82654ba4
	goto loc_82654BA4;
loc_82654BA0:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82654BA4:
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,41
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 41, ctx.xer);
	// bne cr6,0x82654b28
	if (!ctx.cr6.eq) goto loc_82654B28;
loc_82654BB0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// blt cr6,0x82654ac0
	if (ctx.cr6.lt) goto loc_82654AC0;
loc_82654BC0:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82654bcc
	if (!ctx.cr6.gt) goto loc_82654BCC;
	// twi 31,r0,22
loc_82654BCC:
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82654be0
	if (ctx.cr6.lt) goto loc_82654BE0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82654be4
	goto loc_82654BE4;
loc_82654BE0:
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
loc_82654BE4:
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,44
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 44, ctx.xer);
	// bne cr6,0x82654bf8
	if (!ctx.cr6.eq) goto loc_82654BF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82654BF8:
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bgt cr6,0x82654ab0
	if (ctx.cr6.gt) goto loc_82654AB0;
loc_82654C04:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82654c10
	if (!ctx.cr6.gt) goto loc_82654C10;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
loc_82654C10:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82654a28
	ctx.lr = 0x82654C1C;
	sub_82654A28(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

