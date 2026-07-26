#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82268F08"))) PPC_WEAK_FUNC(sub_82268F08);
PPC_FUNC_IMPL(__imp__sub_82268F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82268F10;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82266678
	ctx.lr = 0x82268F20;
	sub_82266678(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r31,336
	ctx.r29.s64 = ctx.r31.s64 + 336;
	// addi r10,r11,-1716
	ctx.r10.s64 = ctx.r11.s64 + -1716;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r11,-1796
	ctx.r9.s64 = ctx.r11.s64 + -1796;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r8,r11,-1812
	ctx.r8.s64 = ctx.r11.s64 + -1812;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// addi r28,r10,-1896
	ctx.r28.s64 = ctx.r10.s64 + -1896;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// stw r11,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r11.u32);
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
loc_82268F64:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82268f74
	if (!ctx.cr6.eq) goto loc_82268F74;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82268F74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82265810
	ctx.lr = 0x82268F80;
	sub_82265810(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r11,r28,80
	ctx.r11.s64 = ctx.r28.s64 + 80;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82268f64
	if (!ctx.cr6.eq) goto loc_82268F64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82268FA8"))) PPC_WEAK_FUNC(sub_82268FA8);
PPC_FUNC_IMPL(__imp__sub_82268FA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-56
	ctx.r3.s64 = ctx.r3.s64 + -56;
	// b 0x82268fb8
	sub_82268FB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82268FB0"))) PPC_WEAK_FUNC(sub_82268FB0);
PPC_FUNC_IMPL(__imp__sub_82268FB0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82268fb8
	sub_82268FB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82268FB8"))) PPC_WEAK_FUNC(sub_82268FB8);
PPC_FUNC_IMPL(__imp__sub_82268FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82268fe4
	if (ctx.cr6.eq) goto loc_82268FE4;
	// bl 0x82581e38
	ctx.lr = 0x82268FE4;
	sub_82581E38(ctx, base);
loc_82268FE4:
	// lwz r3,380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82268ff4
	if (ctx.cr6.eq) goto loc_82268FF4;
	// bl 0x82581e38
	ctx.lr = 0x82268FF4;
	sub_82581E38(ctx, base);
loc_82268FF4:
	// lwz r3,376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82269004
	if (ctx.cr6.eq) goto loc_82269004;
	// bl 0x82581e38
	ctx.lr = 0x82269004;
	sub_82581E38(ctx, base);
loc_82269004:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822667a0
	ctx.lr = 0x8226900C;
	sub_822667A0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82269024
	if (ctx.cr6.eq) goto loc_82269024;
	// bl 0x82186190
	ctx.lr = 0x82269020;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82269024:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82269040"))) PPC_WEAK_FUNC(sub_82269040);
PPC_FUNC_IMPL(__imp__sub_82269040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82265a68
	ctx.lr = 0x8226905C;
	sub_82265A68(ctx, base);
	// addi r30,r31,-32
	ctx.r30.s64 = ctx.r31.s64 + -32;
	// addi r4,r31,372
	ctx.r4.s64 = ctx.r31.s64 + 372;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82265988
	ctx.lr = 0x8226906C;
	sub_82265988(ctx, base);
	// addi r4,r31,376
	ctx.r4.s64 = ctx.r31.s64 + 376;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82265988
	ctx.lr = 0x82269078;
	sub_82265988(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82269090"))) PPC_WEAK_FUNC(sub_82269090);
PPC_FUNC_IMPL(__imp__sub_82269090) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r10,412(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 412);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822690dc
	if (ctx.cr6.eq) goto loc_822690DC;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r5,336(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82265898
	ctx.lr = 0x822690BC;
	sub_82265898(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822690e4
	if (ctx.cr6.eq) goto loc_822690E4;
	// bl 0x82581e38
	ctx.lr = 0x822690CC;
	sub_82581E38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822690DC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82266288
	ctx.lr = 0x822690E4;
	sub_82266288(ctx, base);
loc_822690E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822690F8"))) PPC_WEAK_FUNC(sub_822690F8);
PPC_FUNC_IMPL(__imp__sub_822690F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82269100;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82265bf0
	ctx.lr = 0x82269110;
	sub_82265BF0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r29,153
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 153, ctx.xer);
	// blt cr6,0x82269168
	if (ctx.cr6.lt) goto loc_82269168;
	// cmpwi cr6,r29,154
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 154, ctx.xer);
	// bgt cr6,0x82269168
	if (ctx.cr6.gt) goto loc_82269168;
	// addi r30,r31,376
	ctx.r30.s64 = ctx.r31.s64 + 376;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82269144
	if (ctx.cr6.eq) goto loc_82269144;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8226917c
	if (!ctx.cr6.eq) goto loc_8226917C;
loc_82269144:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,316(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82265898
	ctx.lr = 0x82269154;
	sub_82265898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823032b8
	ctx.lr = 0x82269160;
	sub_823032B8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82269170
	goto loc_82269170;
loc_82269168:
	// lwz r3,376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// stw r28,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r28.u32);
loc_82269170:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226917c
	if (ctx.cr6.eq) goto loc_8226917C;
	// bl 0x82581e38
	ctx.lr = 0x8226917C;
	sub_82581E38(ctx, base);
loc_8226917C:
	// cmpwi cr6,r29,5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 5, ctx.xer);
	// blt cr6,0x82269198
	if (ctx.cr6.lt) goto loc_82269198;
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 6, ctx.xer);
	// bgt cr6,0x82269198
	if (ctx.cr6.gt) goto loc_82269198;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,380(r31)
	PPC_STORE_U8(ctx.r31.u32 + 380, ctx.r11.u8);
	// b 0x8226919c
	goto loc_8226919C;
loc_82269198:
	// stb r28,380(r31)
	PPC_STORE_U8(ctx.r31.u32 + 380, ctx.r28.u8);
loc_8226919C:
	// lwz r3,372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// stw r28,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822691b0
	if (ctx.cr6.eq) goto loc_822691B0;
	// bl 0x82581e38
	ctx.lr = 0x822691B0;
	sub_82581E38(ctx, base);
loc_822691B0:
	// addi r11,r29,-69
	ctx.r11.s64 = ctx.r29.s64 + -69;
	// cmplwi cr6,r11,99
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 99, ctx.xer);
	// bgt cr6,0x82269564
	if (ctx.cr6.gt) goto loc_82269564;
	// lis r12,-32217
	ctx.r12.s64 = -2111373312;
	// addi r12,r12,-28204
	ctx.r12.s64 = ctx.r12.s64 + -28204;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8226937C;
	case 1:
		goto loc_822694F0;
	case 2:
		goto loc_82269564;
	case 3:
		goto loc_822694D8;
	case 4:
		goto loc_822694D8;
	case 5:
		goto loc_822694D8;
	case 6:
		goto loc_82269564;
	case 7:
		goto loc_82269564;
	case 8:
		goto loc_82269564;
	case 9:
		goto loc_82269564;
	case 10:
		goto loc_82269564;
	case 11:
		goto loc_82269564;
	case 12:
		goto loc_82269564;
	case 13:
		goto loc_82269564;
	case 14:
		goto loc_82269564;
	case 15:
		goto loc_82269564;
	case 16:
		goto loc_82269564;
	case 17:
		goto loc_82269564;
	case 18:
		goto loc_82269564;
	case 19:
		goto loc_82269564;
	case 20:
		goto loc_82269564;
	case 21:
		goto loc_82269564;
	case 22:
		goto loc_82269564;
	case 23:
		goto loc_82269564;
	case 24:
		goto loc_82269564;
	case 25:
		goto loc_82269564;
	case 26:
		goto loc_82269564;
	case 27:
		goto loc_82269564;
	case 28:
		goto loc_82269564;
	case 29:
		goto loc_82269564;
	case 30:
		goto loc_82269564;
	case 31:
		goto loc_82269564;
	case 32:
		goto loc_82269564;
	case 33:
		goto loc_82269544;
	case 34:
		goto loc_82269564;
	case 35:
		goto loc_82269564;
	case 36:
		goto loc_82269564;
	case 37:
		goto loc_82269564;
	case 38:
		goto loc_82269564;
	case 39:
		goto loc_82269564;
	case 40:
		goto loc_82269564;
	case 41:
		goto loc_82269564;
	case 42:
		goto loc_82269564;
	case 43:
		goto loc_82269564;
	case 44:
		goto loc_82269564;
	case 45:
		goto loc_82269564;
	case 46:
		goto loc_82269564;
	case 47:
		goto loc_82269564;
	case 48:
		goto loc_82269564;
	case 49:
		goto loc_82269564;
	case 50:
		goto loc_82269564;
	case 51:
		goto loc_82269564;
	case 52:
		goto loc_82269564;
	case 53:
		goto loc_82269564;
	case 54:
		goto loc_82269564;
	case 55:
		goto loc_82269564;
	case 56:
		goto loc_82269564;
	case 57:
		goto loc_82269564;
	case 58:
		goto loc_82269564;
	case 59:
		goto loc_82269564;
	case 60:
		goto loc_82269564;
	case 61:
		goto loc_82269564;
	case 62:
		goto loc_82269564;
	case 63:
		goto loc_82269564;
	case 64:
		goto loc_82269564;
	case 65:
		goto loc_82269564;
	case 66:
		goto loc_82269564;
	case 67:
		goto loc_82269564;
	case 68:
		goto loc_82269564;
	case 69:
		goto loc_82269564;
	case 70:
		goto loc_82269564;
	case 71:
		goto loc_82269564;
	case 72:
		goto loc_82269564;
	case 73:
		goto loc_82269564;
	case 74:
		goto loc_82269564;
	case 75:
		goto loc_82269564;
	case 76:
		goto loc_82269564;
	case 77:
		goto loc_82269564;
	case 78:
		goto loc_82269564;
	case 79:
		goto loc_82269564;
	case 80:
		goto loc_8226952C;
	case 81:
		goto loc_82269564;
	case 82:
		goto loc_822693D0;
	case 83:
		goto loc_82269564;
	case 84:
		goto loc_82269364;
	case 85:
		goto loc_82269564;
	case 86:
		goto loc_822693B8;
	case 87:
		goto loc_82269564;
	case 88:
		goto loc_82269564;
	case 89:
		goto loc_82269564;
	case 90:
		goto loc_82269564;
	case 91:
		goto loc_82269564;
	case 92:
		goto loc_82269460;
	case 93:
		goto loc_82269460;
	case 94:
		goto loc_82269460;
	case 95:
		goto loc_82269460;
	case 96:
		goto loc_8226949C;
	case 97:
		goto loc_822693E8;
	case 98:
		goto loc_822693E8;
	case 99:
		goto loc_82269424;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-27780(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27780);
	// lwz r17,-27408(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27408);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27432(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27432);
	// lwz r17,-27432(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27432);
	// lwz r17,-27432(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27432);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27324(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27324);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27348(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27348);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27696(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27696);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27804(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27804);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27720(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27720);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27292(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27292);
	// lwz r17,-27552(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27552);
	// lwz r17,-27552(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27552);
	// lwz r17,-27552(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27552);
	// lwz r17,-27552(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27552);
	// lwz r17,-27492(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27492);
	// lwz r17,-27672(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27672);
	// lwz r17,-27672(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27672);
	// lwz r17,-27612(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27612);
loc_82269364:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,368(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82265898
	ctx.lr = 0x82269374;
	sub_82265898(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82269558
	goto loc_82269558;
loc_8226937C:
	// addi r30,r31,-32
	ctx.r30.s64 = ctx.r31.s64 + -32;
	// lwz r5,308(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82265898
	ctx.lr = 0x82269390;
	sub_82265898(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822693a0
	if (ctx.cr6.eq) goto loc_822693A0;
	// bl 0x82581e38
	ctx.lr = 0x822693A0;
	sub_82581E38(ctx, base);
loc_822693A0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,352(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82265898
	ctx.lr = 0x822693B0;
	sub_82265898(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x82269558
	goto loc_82269558;
loc_822693B8:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,312(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82265898
	ctx.lr = 0x822693C8;
	sub_82265898(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x82269558
	goto loc_82269558;
loc_822693D0:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,320(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82265898
	ctx.lr = 0x822693E0;
	sub_82265898(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x82269558
	goto loc_82269558;
loc_822693E8:
	// addi r30,r31,-32
	ctx.r30.s64 = ctx.r31.s64 + -32;
	// lwz r5,324(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82265898
	ctx.lr = 0x822693FC;
	sub_82265898(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226940c
	if (ctx.cr6.eq) goto loc_8226940C;
	// bl 0x82581e38
	ctx.lr = 0x8226940C;
	sub_82581E38(ctx, base);
loc_8226940C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,360(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82265898
	ctx.lr = 0x8226941C;
	sub_82265898(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x82269558
	goto loc_82269558;
loc_82269424:
	// addi r30,r31,-32
	ctx.r30.s64 = ctx.r31.s64 + -32;
	// lwz r5,324(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82265898
	ctx.lr = 0x82269438;
	sub_82265898(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82269448
	if (ctx.cr6.eq) goto loc_82269448;
	// bl 0x82581e38
	ctx.lr = 0x82269448;
	sub_82581E38(ctx, base);
loc_82269448:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,364(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82265898
	ctx.lr = 0x82269458;
	sub_82265898(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x82269558
	goto loc_82269558;
loc_82269460:
	// addi r30,r31,-32
	ctx.r30.s64 = ctx.r31.s64 + -32;
	// lwz r5,352(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82265898
	ctx.lr = 0x82269474;
	sub_82265898(ctx, base);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82269484
	if (ctx.cr6.eq) goto loc_82269484;
	// bl 0x82581e38
	ctx.lr = 0x82269484;
	sub_82581E38(ctx, base);
loc_82269484:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,328(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82265898
	ctx.lr = 0x82269494;
	sub_82265898(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// b 0x82269558
	goto loc_82269558;
loc_8226949C:
	// addi r30,r31,-32
	ctx.r30.s64 = ctx.r31.s64 + -32;
	// lwz r5,356(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82265898
	ctx.lr = 0x822694B0;
	sub_82265898(ctx, base);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822694c0
	if (ctx.cr6.eq) goto loc_822694C0;
	// bl 0x82581e38
	ctx.lr = 0x822694C0;
	sub_82581E38(ctx, base);
loc_822694C0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,328(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82265898
	ctx.lr = 0x822694D0;
	sub_82265898(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// b 0x82269558
	goto loc_82269558;
loc_822694D8:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,332(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82265898
	ctx.lr = 0x822694E8;
	sub_82265898(ctx, base);
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// b 0x82269558
	goto loc_82269558;
loc_822694F0:
	// addi r30,r31,-32
	ctx.r30.s64 = ctx.r31.s64 + -32;
	// lwz r5,336(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82265898
	ctx.lr = 0x82269504;
	sub_82265898(ctx, base);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82269514
	if (ctx.cr6.eq) goto loc_82269514;
	// bl 0x82581e38
	ctx.lr = 0x82269514;
	sub_82581E38(ctx, base);
loc_82269514:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,348(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82265898
	ctx.lr = 0x82269524;
	sub_82265898(ctx, base);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// b 0x82269558
	goto loc_82269558;
loc_8226952C:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,340(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82265898
	ctx.lr = 0x8226953C;
	sub_82265898(ctx, base);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// b 0x82269558
	goto loc_82269558;
loc_82269544:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,344(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82265898
	ctx.lr = 0x82269554;
	sub_82265898(ctx, base);
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
loc_82269558:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82269564
	if (ctx.cr6.eq) goto loc_82269564;
	// bl 0x82581e38
	ctx.lr = 0x82269564;
	sub_82581E38(ctx, base);
loc_82269564:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82269570"))) PPC_WEAK_FUNC(sub_82269570);
PPC_FUNC_IMPL(__imp__sub_82269570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82269578;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82266678
	ctx.lr = 0x82269588;
	sub_82266678(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r31,336
	ctx.r29.s64 = ctx.r31.s64 + 336;
	// addi r10,r11,-1356
	ctx.r10.s64 = ctx.r11.s64 + -1356;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r11,-1436
	ctx.r9.s64 = ctx.r11.s64 + -1436;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r8,r11,-1452
	ctx.r8.s64 = ctx.r11.s64 + -1452;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// addi r28,r10,-1592
	ctx.r28.s64 = ctx.r10.s64 + -1592;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// stw r11,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// stb r11,412(r31)
	PPC_STORE_U8(ctx.r31.u32 + 412, ctx.r11.u8);
loc_822695CC:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822695dc
	if (!ctx.cr6.eq) goto loc_822695DC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_822695DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82265810
	ctx.lr = 0x822695E8;
	sub_82265810(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r11,r28,136
	ctx.r11.s64 = ctx.r28.s64 + 136;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822695cc
	if (!ctx.cr6.eq) goto loc_822695CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82269610"))) PPC_WEAK_FUNC(sub_82269610);
PPC_FUNC_IMPL(__imp__sub_82269610) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82269620
	sub_82269620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82269618"))) PPC_WEAK_FUNC(sub_82269618);
PPC_FUNC_IMPL(__imp__sub_82269618) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-56
	ctx.r3.s64 = ctx.r3.s64 + -56;
	// b 0x82269620
	sub_82269620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82269620"))) PPC_WEAK_FUNC(sub_82269620);
PPC_FUNC_IMPL(__imp__sub_82269620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226964c
	if (ctx.cr6.eq) goto loc_8226964C;
	// bl 0x82581e38
	ctx.lr = 0x8226964C;
	sub_82581E38(ctx, base);
loc_8226964C:
	// lwz r3,404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226965c
	if (ctx.cr6.eq) goto loc_8226965C;
	// bl 0x82581e38
	ctx.lr = 0x8226965C;
	sub_82581E38(ctx, base);
loc_8226965C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822667a0
	ctx.lr = 0x82269664;
	sub_822667A0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226967c
	if (ctx.cr6.eq) goto loc_8226967C;
	// bl 0x82186190
	ctx.lr = 0x82269678;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8226967C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82269698"))) PPC_WEAK_FUNC(sub_82269698);
PPC_FUNC_IMPL(__imp__sub_82269698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r30,r31,-32
	ctx.r30.s64 = ctx.r31.s64 + -32;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82265988
	ctx.lr = 0x822696C0;
	sub_82265988(ctx, base);
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82265988
	ctx.lr = 0x822696CC;
	sub_82265988(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822696E8"))) PPC_WEAK_FUNC(sub_822696E8);
PPC_FUNC_IMPL(__imp__sub_822696E8) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// bne cr6,0x82269718
	if (!ctx.cr6.eq) goto loc_82269718;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// bl 0x82265898
	ctx.lr = 0x82269710;
	sub_82265898(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82269728
	goto loc_82269728;
loc_82269718:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,76(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x82265898
	ctx.lr = 0x82269724;
	sub_82265898(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82269728:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82269734
	if (ctx.cr6.eq) goto loc_82269734;
	// bl 0x82581e38
	ctx.lr = 0x82269734;
	sub_82581E38(ctx, base);
loc_82269734:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82269748"))) PPC_WEAK_FUNC(sub_82269748);
PPC_FUNC_IMPL(__imp__sub_82269748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82269750;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r29,-5
	ctx.r11.s64 = ctx.r29.s64 + -5;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x82269810
	if (ctx.cr6.gt) goto loc_82269810;
	// lis r12,-32217
	ctx.r12.s64 = -2111373312;
	// addi r12,r12,-26752
	ctx.r12.s64 = ctx.r12.s64 + -26752;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8226979C;
	case 1:
		goto loc_82269810;
	case 2:
		goto loc_8226979C;
	case 3:
		goto loc_82269810;
	case 4:
		goto loc_82269810;
	case 5:
		goto loc_822697D8;
	case 6:
		goto loc_822697F0;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-26724(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -26724);
	// lwz r17,-26608(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -26608);
	// lwz r17,-26724(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -26724);
	// lwz r17,-26608(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -26608);
	// lwz r17,-26608(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -26608);
	// lwz r17,-26664(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -26664);
	// lwz r17,-26640(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -26640);
loc_8226979C:
	// addi r30,r31,-32
	ctx.r30.s64 = ctx.r31.s64 + -32;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82265898
	ctx.lr = 0x822697B0;
	sub_82265898(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822697c0
	if (ctx.cr6.eq) goto loc_822697C0;
	// bl 0x82581e38
	ctx.lr = 0x822697C0;
	sub_82581E38(ctx, base);
loc_822697C0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,104(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82265898
	ctx.lr = 0x822697D0;
	sub_82265898(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82269804
	goto loc_82269804;
loc_822697D8:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,108(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82265898
	ctx.lr = 0x822697E8;
	sub_82265898(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x82269804
	goto loc_82269804;
loc_822697F0:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,116(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82265898
	ctx.lr = 0x82269800;
	sub_82265898(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82269804:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82269810
	if (ctx.cr6.eq) goto loc_82269810;
	// bl 0x82581e38
	ctx.lr = 0x82269810;
	sub_82581E38(ctx, base);
loc_82269810:
	// cmplwi cr6,r29,13
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 13, ctx.xer);
	// bgt cr6,0x82269888
	if (ctx.cr6.gt) goto loc_82269888;
	// lis r12,-32217
	ctx.r12.s64 = -2111373312;
	// addi r12,r12,-26576
	ctx.r12.s64 = ctx.r12.s64 + -26576;
	// rlwinm r0,r29,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r29.u64) {
	case 0:
		goto loc_82269868;
	case 1:
		goto loc_82269870;
	case 2:
		goto loc_82269870;
	case 3:
		goto loc_82269878;
	case 4:
		goto loc_82269880;
	case 5:
		goto loc_82269880;
	case 6:
		goto loc_82269880;
	case 7:
		goto loc_82269880;
	case 8:
		goto loc_82269888;
	case 9:
		goto loc_82269888;
	case 10:
		goto loc_82269888;
	case 11:
		goto loc_82269888;
	case 12:
		goto loc_82269888;
	case 13:
		goto loc_82269868;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-26520(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -26520);
	// lwz r17,-26512(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -26512);
	// lwz r17,-26512(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -26512);
	// lwz r17,-26504(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -26504);
	// lwz r17,-26496(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -26496);
	// lwz r17,-26496(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -26496);
	// lwz r17,-26496(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -26496);
	// lwz r17,-26496(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -26496);
	// lwz r17,-26488(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -26488);
	// lwz r17,-26488(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -26488);
	// lwz r17,-26488(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -26488);
	// lwz r17,-26488(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -26488);
	// lwz r17,-26488(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -26488);
	// lwz r17,-26520(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -26520);
loc_82269868:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8226988c
	goto loc_8226988C;
loc_82269870:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8226988c
	goto loc_8226988C;
loc_82269878:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8226988c
	goto loc_8226988C;
loc_82269880:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8226988c
	goto loc_8226988C;
loc_82269888:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8226988C:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82269984
	if (ctx.cr6.eq) goto loc_82269984;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bgt cr6,0x82269984
	if (ctx.cr6.gt) goto loc_82269984;
	// lis r12,-32217
	ctx.r12.s64 = -2111373312;
	// addi r12,r12,-26436
	ctx.r12.s64 = ctx.r12.s64 + -26436;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_822698D0;
	case 1:
		goto loc_822698EC;
	case 2:
		goto loc_82269910;
	case 3:
		goto loc_82269934;
	case 4:
		goto loc_82269958;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-26416(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -26416);
	// lwz r17,-26388(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -26388);
	// lwz r17,-26352(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -26352);
	// lwz r17,-26316(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -26316);
	// lwz r17,-26280(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -26280);
loc_822698D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x823032b8
	ctx.lr = 0x822698E4;
	sub_823032B8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_822698EC:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82265898
	ctx.lr = 0x822698FC;
	sub_82265898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x823032b8
	ctx.lr = 0x82269908;
	sub_823032B8(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x82269978
	goto loc_82269978;
loc_82269910:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82265898
	ctx.lr = 0x82269920;
	sub_82265898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x823032b8
	ctx.lr = 0x8226992C;
	sub_823032B8(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x82269978
	goto loc_82269978;
loc_82269934:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82265898
	ctx.lr = 0x82269944;
	sub_82265898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x823032b8
	ctx.lr = 0x82269950;
	sub_823032B8(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x82269978
	goto loc_82269978;
loc_82269958:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82265898
	ctx.lr = 0x82269968;
	sub_82265898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x823032b8
	ctx.lr = 0x82269974;
	sub_823032B8(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82269978:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82269984
	if (ctx.cr6.eq) goto loc_82269984;
	// bl 0x82581e38
	ctx.lr = 0x82269984;
	sub_82581E38(ctx, base);
loc_82269984:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82269990"))) PPC_WEAK_FUNC(sub_82269990);
PPC_FUNC_IMPL(__imp__sub_82269990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82269998;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82269a1c
	if (ctx.cr6.eq) goto loc_82269A1C;
	// addi r30,r31,-32
	ctx.r30.s64 = ctx.r31.s64 + -32;
	// lwz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82265898
	ctx.lr = 0x822699C4;
	sub_82265898(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822699d4
	if (ctx.cr6.eq) goto loc_822699D4;
	// bl 0x82581e38
	ctx.lr = 0x822699D4;
	sub_82581E38(ctx, base);
loc_822699D4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82265898
	ctx.lr = 0x822699E4;
	sub_82265898(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822699f8
	if (ctx.cr6.eq) goto loc_822699F8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x822699F8;
	sub_82659610(ctx, base);
loc_822699F8:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82269a0c
	if (ctx.cr6.eq) goto loc_82269A0C;
	// bl 0x82581e38
	ctx.lr = 0x82269A0C;
	sub_82581E38(ctx, base);
loc_82269A0C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82269a1c
	if (ctx.cr6.eq) goto loc_82269A1C;
	// bl 0x82581e38
	ctx.lr = 0x82269A1C;
	sub_82581E38(ctx, base);
loc_82269A1C:
	// rlwinm r11,r29,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82269a40
	if (ctx.cr6.eq) goto loc_82269A40;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// beq cr6,0x82269a40
	if (ctx.cr6.eq) goto loc_82269A40;
	// bl 0x82581e38
	ctx.lr = 0x82269A40;
	sub_82581E38(ctx, base);
loc_82269A40:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82269A48"))) PPC_WEAK_FUNC(sub_82269A48);
PPC_FUNC_IMPL(__imp__sub_82269A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82269A50;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r29,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82269abc
	if (ctx.cr6.eq) goto loc_82269ABC;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82265920
	ctx.lr = 0x82269A84;
	sub_82265920(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82269a98
	if (ctx.cr6.eq) goto loc_82269A98;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x82269A98;
	sub_82659610(ctx, base);
loc_82269A98:
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82269aac
	if (ctx.cr6.eq) goto loc_82269AAC;
	// bl 0x82581e38
	ctx.lr = 0x82269AAC;
	sub_82581E38(ctx, base);
loc_82269AAC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82269abc
	if (ctx.cr6.eq) goto loc_82269ABC;
	// bl 0x82581e38
	ctx.lr = 0x82269ABC;
	sub_82581E38(ctx, base);
loc_82269ABC:
	// rlwinm r11,r29,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82269ae8
	if (ctx.cr6.eq) goto loc_82269AE8;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,120(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82265898
	ctx.lr = 0x82269AD8;
	sub_82265898(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82269ae8
	if (ctx.cr6.eq) goto loc_82269AE8;
	// bl 0x82581e38
	ctx.lr = 0x82269AE8;
	sub_82581E38(ctx, base);
loc_82269AE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82269AF0"))) PPC_WEAK_FUNC(sub_82269AF0);
PPC_FUNC_IMPL(__imp__sub_82269AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82269AF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82266560
	ctx.lr = 0x82269B08;
	sub_82266560(ctx, base);
	// addi r30,r31,56
	ctx.r30.s64 = ctx.r31.s64 + 56;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221ee08
	ctx.lr = 0x82269B14;
	sub_8221EE08(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r31,96
	ctx.r29.s64 = ctx.r31.s64 + 96;
	// addi r10,r11,-924
	ctx.r10.s64 = ctx.r11.s64 + -924;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r11,-1004
	ctx.r9.s64 = ctx.r11.s64 + -1004;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r8,r11,-1020
	ctx.r8.s64 = ctx.r11.s64 + -1020;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r28,r10,-1192
	ctx.r28.s64 = ctx.r10.s64 + -1192;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stb r11,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r11.u8);
	// stw r9,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r9.u32);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
loc_82269B68:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82269b78
	if (!ctx.cr6.eq) goto loc_82269B78;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82269B78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82265810
	ctx.lr = 0x82269B84;
	sub_82265810(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r11,r28,168
	ctx.r11.s64 = ctx.r28.s64 + 168;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82269b68
	if (!ctx.cr6.eq) goto loc_82269B68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82269BA8"))) PPC_WEAK_FUNC(sub_82269BA8);
PPC_FUNC_IMPL(__imp__sub_82269BA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-56
	ctx.r3.s64 = ctx.r3.s64 + -56;
	// b 0x82269c60
	sub_82269C60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82269BB0"))) PPC_WEAK_FUNC(sub_82269BB0);
PPC_FUNC_IMPL(__imp__sub_82269BB0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82269c60
	sub_82269C60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82269BB8"))) PPC_WEAK_FUNC(sub_82269BB8);
PPC_FUNC_IMPL(__imp__sub_82269BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82269bdc
	if (ctx.cr6.eq) goto loc_82269BDC;
	// bl 0x82581e38
	ctx.lr = 0x82269BDC;
	sub_82581E38(ctx, base);
loc_82269BDC:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82269bec
	if (ctx.cr6.eq) goto loc_82269BEC;
	// bl 0x82581e38
	ctx.lr = 0x82269BEC;
	sub_82581E38(ctx, base);
loc_82269BEC:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82269bfc
	if (ctx.cr6.eq) goto loc_82269BFC;
	// bl 0x82581e38
	ctx.lr = 0x82269BFC;
	sub_82581E38(ctx, base);
loc_82269BFC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bne cr6,0x82269c0c
	if (!ctx.cr6.eq) goto loc_82269C0C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82269C0C:
	// bl 0x8221ee08
	ctx.lr = 0x82269C10;
	sub_8221EE08(ctx, base);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82269c20
	if (ctx.cr6.eq) goto loc_82269C20;
	// bl 0x82581e38
	ctx.lr = 0x82269C20;
	sub_82581E38(ctx, base);
loc_82269C20:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82269c30
	if (ctx.cr6.eq) goto loc_82269C30;
	// bl 0x821601b8
	ctx.lr = 0x82269C30;
	sub_821601B8(ctx, base);
loc_82269C30:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bne cr6,0x82269c40
	if (!ctx.cr6.eq) goto loc_82269C40;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82269C40:
	// bl 0x8221f3a8
	ctx.lr = 0x82269C44;
	sub_8221F3A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221f0e8
	ctx.lr = 0x82269C4C;
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

__attribute__((alias("__imp__sub_82269C60"))) PPC_WEAK_FUNC(sub_82269C60);
PPC_FUNC_IMPL(__imp__sub_82269C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82269bb8
	ctx.lr = 0x82269C80;
	sub_82269BB8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82269c98
	if (ctx.cr6.eq) goto loc_82269C98;
	// bl 0x82186190
	ctx.lr = 0x82269C94;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82269C98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82269CB0"))) PPC_WEAK_FUNC(sub_82269CB0);
PPC_FUNC_IMPL(__imp__sub_82269CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82265a68
	ctx.lr = 0x82269CCC;
	sub_82265A68(ctx, base);
	// addi r30,r31,-32
	ctx.r30.s64 = ctx.r31.s64 + -32;
	// addi r4,r31,396
	ctx.r4.s64 = ctx.r31.s64 + 396;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82265988
	ctx.lr = 0x82269CDC;
	sub_82265988(ctx, base);
	// addi r4,r31,404
	ctx.r4.s64 = ctx.r31.s64 + 404;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82265988
	ctx.lr = 0x82269CE8;
	sub_82265988(ctx, base);
	// addi r4,r31,408
	ctx.r4.s64 = ctx.r31.s64 + 408;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82265988
	ctx.lr = 0x82269CF4;
	sub_82265988(ctx, base);
	// addi r4,r31,412
	ctx.r4.s64 = ctx.r31.s64 + 412;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82265988
	ctx.lr = 0x82269D00;
	sub_82265988(ctx, base);
	// addi r4,r31,416
	ctx.r4.s64 = ctx.r31.s64 + 416;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82265988
	ctx.lr = 0x82269D0C;
	sub_82265988(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82269D28"))) PPC_WEAK_FUNC(sub_82269D28);
PPC_FUNC_IMPL(__imp__sub_82269D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x821e0968
	ctx.lr = 0x82269D48;
	sub_821E0968(ctx, base);
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82269d78
	if (ctx.cr6.eq) goto loc_82269D78;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,344(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82265898
	ctx.lr = 0x82269D64;
	sub_82265898(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82269d74
	if (ctx.cr6.eq) goto loc_82269D74;
	// bl 0x82581e38
	ctx.lr = 0x82269D74;
	sub_82581E38(ctx, base);
loc_82269D74:
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
loc_82269D78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82269D90"))) PPC_WEAK_FUNC(sub_82269D90);
PPC_FUNC_IMPL(__imp__sub_82269D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82269D98;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82265bf0
	ctx.lr = 0x82269DA8;
	sub_82265BF0(ctx, base);
	// addi r30,r31,396
	ctx.r30.s64 = ctx.r31.s64 + 396;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82269dc4
	if (ctx.cr6.eq) goto loc_82269DC4;
	// bl 0x82581e38
	ctx.lr = 0x82269DC4;
	sub_82581E38(ctx, base);
loc_82269DC4:
	// addi r11,r28,-69
	ctx.r11.s64 = ctx.r28.s64 + -69;
	// cmplwi cr6,r11,136
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 136, ctx.xer);
	// bgt cr6,0x8226a194
	if (ctx.cr6.gt) goto loc_8226A194;
	// lis r12,-32217
	ctx.r12.s64 = -2111373312;
	// addi r12,r12,-25112
	ctx.r12.s64 = ctx.r12.s64 + -25112;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8226A048;
	case 1:
		goto loc_8226A00C;
	case 2:
		goto loc_8226A194;
	case 3:
		goto loc_8226A108;
	case 4:
		goto loc_8226A108;
	case 5:
		goto loc_8226A108;
	case 6:
		goto loc_8226A194;
	case 7:
		goto loc_8226A194;
	case 8:
		goto loc_8226A194;
	case 9:
		goto loc_8226A194;
	case 10:
		goto loc_8226A084;
	case 11:
		goto loc_8226A194;
	case 12:
		goto loc_8226A0CC;
	case 13:
		goto loc_8226A0F0;
	case 14:
		goto loc_8226A194;
	case 15:
		goto loc_8226A194;
	case 16:
		goto loc_8226A194;
	case 17:
		goto loc_8226A194;
	case 18:
		goto loc_8226A194;
	case 19:
		goto loc_8226A194;
	case 20:
		goto loc_8226A194;
	case 21:
		goto loc_8226A194;
	case 22:
		goto loc_8226A194;
	case 23:
		goto loc_8226A194;
	case 24:
		goto loc_8226A194;
	case 25:
		goto loc_8226A194;
	case 26:
		goto loc_8226A194;
	case 27:
		goto loc_8226A194;
	case 28:
		goto loc_8226A194;
	case 29:
		goto loc_8226A194;
	case 30:
		goto loc_8226A194;
	case 31:
		goto loc_8226A194;
	case 32:
		goto loc_8226A194;
	case 33:
		goto loc_8226A120;
	case 34:
		goto loc_8226A194;
	case 35:
		goto loc_8226A194;
	case 36:
		goto loc_8226A194;
	case 37:
		goto loc_8226A194;
	case 38:
		goto loc_8226A194;
	case 39:
		goto loc_8226A194;
	case 40:
		goto loc_8226A194;
	case 41:
		goto loc_8226A194;
	case 42:
		goto loc_8226A194;
	case 43:
		goto loc_8226A194;
	case 44:
		goto loc_8226A194;
	case 45:
		goto loc_8226A194;
	case 46:
		goto loc_8226A194;
	case 47:
		goto loc_8226A194;
	case 48:
		goto loc_8226A194;
	case 49:
		goto loc_8226A194;
	case 50:
		goto loc_8226A194;
	case 51:
		goto loc_8226A194;
	case 52:
		goto loc_8226A194;
	case 53:
		goto loc_8226A194;
	case 54:
		goto loc_8226A194;
	case 55:
		goto loc_8226A194;
	case 56:
		goto loc_8226A194;
	case 57:
		goto loc_8226A194;
	case 58:
		goto loc_8226A194;
	case 59:
		goto loc_8226A194;
	case 60:
		goto loc_8226A194;
	case 61:
		goto loc_8226A194;
	case 62:
		goto loc_8226A194;
	case 63:
		goto loc_8226A194;
	case 64:
		goto loc_8226A194;
	case 65:
		goto loc_8226A194;
	case 66:
		goto loc_8226A194;
	case 67:
		goto loc_8226A194;
	case 68:
		goto loc_8226A194;
	case 69:
		goto loc_8226A194;
	case 70:
		goto loc_8226A194;
	case 71:
		goto loc_8226A194;
	case 72:
		goto loc_8226A194;
	case 73:
		goto loc_8226A194;
	case 74:
		goto loc_8226A194;
	case 75:
		goto loc_8226A194;
	case 76:
		goto loc_8226A194;
	case 77:
		goto loc_8226A194;
	case 78:
		goto loc_8226A194;
	case 79:
		goto loc_8226A194;
	case 80:
		goto loc_8226A194;
	case 81:
		goto loc_8226A194;
	case 82:
		goto loc_8226A194;
	case 83:
		goto loc_8226A194;
	case 84:
		goto loc_8226A194;
	case 85:
		goto loc_8226A194;
	case 86:
		goto loc_8226A194;
	case 87:
		goto loc_8226A194;
	case 88:
		goto loc_8226A194;
	case 89:
		goto loc_8226A194;
	case 90:
		goto loc_8226A194;
	case 91:
		goto loc_8226A194;
	case 92:
		goto loc_8226A194;
	case 93:
		goto loc_8226A194;
	case 94:
		goto loc_8226A194;
	case 95:
		goto loc_8226A194;
	case 96:
		goto loc_8226A194;
	case 97:
		goto loc_8226A194;
	case 98:
		goto loc_8226A194;
	case 99:
		goto loc_8226A194;
	case 100:
		goto loc_8226A194;
	case 101:
		goto loc_8226A194;
	case 102:
		goto loc_8226A194;
	case 103:
		goto loc_8226A194;
	case 104:
		goto loc_8226A194;
	case 105:
		goto loc_8226A194;
	case 106:
		goto loc_8226A194;
	case 107:
		goto loc_8226A194;
	case 108:
		goto loc_8226A194;
	case 109:
		goto loc_8226A194;
	case 110:
		goto loc_8226A194;
	case 111:
		goto loc_8226A194;
	case 112:
		goto loc_8226A194;
	case 113:
		goto loc_8226A194;
	case 114:
		goto loc_8226A194;
	case 115:
		goto loc_8226A194;
	case 116:
		goto loc_8226A194;
	case 117:
		goto loc_8226A194;
	case 118:
		goto loc_8226A194;
	case 119:
		goto loc_8226A194;
	case 120:
		goto loc_8226A194;
	case 121:
		goto loc_8226A194;
	case 122:
		goto loc_8226A194;
	case 123:
		goto loc_8226A194;
	case 124:
		goto loc_8226A194;
	case 125:
		goto loc_8226A194;
	case 126:
		goto loc_8226A194;
	case 127:
		goto loc_8226A194;
	case 128:
		goto loc_8226A194;
	case 129:
		goto loc_8226A194;
	case 130:
		goto loc_8226A194;
	case 131:
		goto loc_8226A194;
	case 132:
		goto loc_8226A194;
	case 133:
		goto loc_8226A194;
	case 134:
		goto loc_8226A194;
	case 135:
		goto loc_8226A144;
	case 136:
		goto loc_8226A168;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-24504(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24504);
	// lwz r17,-24564(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24564);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24312(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24312);
	// lwz r17,-24312(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24312);
	// lwz r17,-24312(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24312);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24444(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24444);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24372(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24372);
	// lwz r17,-24336(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24336);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24288(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24288);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24172(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24172);
	// lwz r17,-24252(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24252);
	// lwz r17,-24216(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24216);
loc_8226A00C:
	// addi r30,r31,-32
	ctx.r30.s64 = ctx.r31.s64 + -32;
	// lwz r5,304(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82265898
	ctx.lr = 0x8226A020;
	sub_82265898(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226a030
	if (ctx.cr6.eq) goto loc_8226A030;
	// bl 0x82581e38
	ctx.lr = 0x8226A030;
	sub_82581E38(ctx, base);
loc_8226A030:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,384(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82265898
	ctx.lr = 0x8226A040;
	sub_82265898(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8226a188
	goto loc_8226A188;
loc_8226A048:
	// addi r30,r31,-32
	ctx.r30.s64 = ctx.r31.s64 + -32;
	// lwz r5,308(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82265898
	ctx.lr = 0x8226A05C;
	sub_82265898(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226a06c
	if (ctx.cr6.eq) goto loc_8226A06C;
	// bl 0x82581e38
	ctx.lr = 0x8226A06C;
	sub_82581E38(ctx, base);
loc_8226A06C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,380(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82265898
	ctx.lr = 0x8226A07C;
	sub_82265898(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x8226a188
	goto loc_8226A188;
loc_8226A084:
	// addi r29,r31,-32
	ctx.r29.s64 = ctx.r31.s64 + -32;
	// lwz r5,316(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82265898
	ctx.lr = 0x8226A098;
	sub_82265898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823032b8
	ctx.lr = 0x8226A0A4;
	sub_823032B8(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226a0b4
	if (ctx.cr6.eq) goto loc_8226A0B4;
	// bl 0x82581e38
	ctx.lr = 0x8226A0B4;
	sub_82581E38(ctx, base);
loc_8226A0B4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,388(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82265898
	ctx.lr = 0x8226A0C4;
	sub_82265898(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x8226a188
	goto loc_8226A188;
loc_8226A0CC:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,320(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82265898
	ctx.lr = 0x8226A0DC;
	sub_82265898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823032b8
	ctx.lr = 0x8226A0E8;
	sub_823032B8(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x8226a188
	goto loc_8226A188;
loc_8226A0F0:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,324(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82265898
	ctx.lr = 0x8226A100;
	sub_82265898(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x8226a188
	goto loc_8226A188;
loc_8226A108:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,328(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82265898
	ctx.lr = 0x8226A118;
	sub_82265898(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x8226a188
	goto loc_8226A188;
loc_8226A120:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,332(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82265898
	ctx.lr = 0x8226A130;
	sub_82265898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823032b8
	ctx.lr = 0x8226A13C;
	sub_823032B8(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x8226a188
	goto loc_8226A188;
loc_8226A144:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,336(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82265898
	ctx.lr = 0x8226A154;
	sub_82265898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823032b8
	ctx.lr = 0x8226A160;
	sub_823032B8(ctx, base);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// b 0x8226a188
	goto loc_8226A188;
loc_8226A168:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,340(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82265898
	ctx.lr = 0x8226A178;
	sub_82265898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823032b8
	ctx.lr = 0x8226A184;
	sub_823032B8(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_8226A188:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226a194
	if (ctx.cr6.eq) goto loc_8226A194;
	// bl 0x82581e38
	ctx.lr = 0x8226A194;
	sub_82581E38(ctx, base);
loc_8226A194:
	// cmpwi cr6,r28,172
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 172, ctx.xer);
	// blt cr6,0x8226a1e8
	if (ctx.cr6.lt) goto loc_8226A1E8;
	// cmpwi cr6,r28,173
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 173, ctx.xer);
	// bgt cr6,0x8226a1e8
	if (ctx.cr6.gt) goto loc_8226A1E8;
	// addi r30,r31,408
	ctx.r30.s64 = ctx.r31.s64 + 408;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226a1c4
	if (ctx.cr6.eq) goto loc_8226A1C4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8226a1fc
	if (!ctx.cr6.eq) goto loc_8226A1FC;
loc_8226A1C4:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,356(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82265898
	ctx.lr = 0x8226A1D4;
	sub_82265898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823032b8
	ctx.lr = 0x8226A1E0;
	sub_823032B8(ctx, base);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// b 0x8226a1f0
	goto loc_8226A1F0;
loc_8226A1E8:
	// lwz r3,408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// stw r27,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r27.u32);
loc_8226A1F0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226a1fc
	if (ctx.cr6.eq) goto loc_8226A1FC;
	// bl 0x82581e38
	ctx.lr = 0x8226A1FC;
	sub_82581E38(ctx, base);
loc_8226A1FC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226A208"))) PPC_WEAK_FUNC(sub_8226A208);
PPC_FUNC_IMPL(__imp__sub_8226A208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8226A210;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x821e0968
	ctx.lr = 0x8226A224;
	sub_821E0968(ctx, base);
	// rlwinm r11,r28,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226a29c
	if (ctx.cr6.eq) goto loc_8226A29C;
	// addi r29,r31,-32
	ctx.r29.s64 = ctx.r31.s64 + -32;
	// lwz r5,372(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82265898
	ctx.lr = 0x8226A244;
	sub_82265898(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8226a258
	if (ctx.cr6.eq) goto loc_8226A258;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x8226A258;
	sub_82659610(ctx, base);
loc_8226A258:
	// lwz r3,416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226a26c
	if (ctx.cr6.eq) goto loc_8226A26C;
	// bl 0x82581e38
	ctx.lr = 0x8226A26C;
	sub_82581E38(ctx, base);
loc_8226A26C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226a27c
	if (ctx.cr6.eq) goto loc_8226A27C;
	// bl 0x82581e38
	ctx.lr = 0x8226A27C;
	sub_82581E38(ctx, base);
loc_8226A27C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,392(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82265898
	ctx.lr = 0x8226A28C;
	sub_82265898(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226a29c
	if (ctx.cr6.eq) goto loc_8226A29C;
	// bl 0x82581e38
	ctx.lr = 0x8226A29C;
	sub_82581E38(ctx, base);
loc_8226A29C:
	// rlwinm r11,r27,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x800;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226a2e0
	if (ctx.cr6.eq) goto loc_8226A2E0;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,376(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82265898
	ctx.lr = 0x8226A2BC;
	sub_82265898(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226a2cc
	if (ctx.cr6.eq) goto loc_8226A2CC;
	// bl 0x82581e38
	ctx.lr = 0x8226A2CC;
	sub_82581E38(ctx, base);
loc_8226A2CC:
	// lwz r3,416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// stw r29,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226a2e0
	if (ctx.cr6.eq) goto loc_8226A2E0;
	// bl 0x82581e38
	ctx.lr = 0x8226A2E0;
	sub_82581E38(ctx, base);
loc_8226A2E0:
	// rlwinm r11,r28,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226a30c
	if (ctx.cr6.eq) goto loc_8226A30C;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,312(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82265898
	ctx.lr = 0x8226A2FC;
	sub_82265898(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226a30c
	if (ctx.cr6.eq) goto loc_8226A30C;
	// bl 0x82581e38
	ctx.lr = 0x8226A30C;
	sub_82581E38(ctx, base);
loc_8226A30C:
	// rlwinm r11,r28,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226a338
	if (ctx.cr6.eq) goto loc_8226A338;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,348(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82265898
	ctx.lr = 0x8226A328;
	sub_82265898(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226a338
	if (ctx.cr6.eq) goto loc_8226A338;
	// bl 0x82581e38
	ctx.lr = 0x8226A338;
	sub_82581E38(ctx, base);
loc_8226A338:
	// rlwinm r11,r28,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226a364
	if (ctx.cr6.eq) goto loc_8226A364;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,352(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82265898
	ctx.lr = 0x8226A354;
	sub_82265898(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226a364
	if (ctx.cr6.eq) goto loc_8226A364;
	// bl 0x82581e38
	ctx.lr = 0x8226A364;
	sub_82581E38(ctx, base);
loc_8226A364:
	// rlwinm r11,r28,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226a3b8
	if (ctx.cr6.eq) goto loc_8226A3B8;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,368(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82265898
	ctx.lr = 0x8226A380;
	sub_82265898(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8226a394
	if (ctx.cr6.eq) goto loc_8226A394;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x8226A394;
	sub_82659610(ctx, base);
loc_8226A394:
	// lwz r3,412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// stw r30,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226a3a8
	if (ctx.cr6.eq) goto loc_8226A3A8;
	// bl 0x82581e38
	ctx.lr = 0x8226A3A8;
	sub_82581E38(ctx, base);
loc_8226A3A8:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226a3b8
	if (ctx.cr6.eq) goto loc_8226A3B8;
	// bl 0x82581e38
	ctx.lr = 0x8226A3B8;
	sub_82581E38(ctx, base);
loc_8226A3B8:
	// rlwinm r11,r27,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226a3d8
	if (ctx.cr6.eq) goto loc_8226A3D8;
	// lwz r3,412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// stw r29,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226a3d8
	if (ctx.cr6.eq) goto loc_8226A3D8;
	// bl 0x82581e38
	ctx.lr = 0x8226A3D8;
	sub_82581E38(ctx, base);
loc_8226A3D8:
	// rlwinm r11,r28,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226a450
	if (ctx.cr6.eq) goto loc_8226A450;
	// addi r30,r31,-32
	ctx.r30.s64 = ctx.r31.s64 + -32;
	// lwz r5,360(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82265898
	ctx.lr = 0x8226A3F8;
	sub_82265898(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226a408
	if (ctx.cr6.eq) goto loc_8226A408;
	// bl 0x82581e38
	ctx.lr = 0x8226A408;
	sub_82581E38(ctx, base);
loc_8226A408:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,364(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82265898
	ctx.lr = 0x8226A418;
	sub_82265898(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8226a42c
	if (ctx.cr6.eq) goto loc_8226A42C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x8226A42C;
	sub_82659610(ctx, base);
loc_8226A42C:
	// lwz r3,404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226a440
	if (ctx.cr6.eq) goto loc_8226A440;
	// bl 0x82581e38
	ctx.lr = 0x8226A440;
	sub_82581E38(ctx, base);
loc_8226A440:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226a450
	if (ctx.cr6.eq) goto loc_8226A450;
	// bl 0x82581e38
	ctx.lr = 0x8226A450;
	sub_82581E38(ctx, base);
loc_8226A450:
	// rlwinm r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226a470
	if (ctx.cr6.eq) goto loc_8226A470;
	// lwz r3,404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// stw r29,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226a470
	if (ctx.cr6.eq) goto loc_8226A470;
	// bl 0x82581e38
	ctx.lr = 0x8226A470;
	sub_82581E38(ctx, base);
loc_8226A470:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226A478"))) PPC_WEAK_FUNC(sub_8226A478);
PPC_FUNC_IMPL(__imp__sub_8226A478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8226A480;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82266678
	ctx.lr = 0x8226A490;
	sub_82266678(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r31,336
	ctx.r29.s64 = ctx.r31.s64 + 336;
	// addi r10,r11,-580
	ctx.r10.s64 = ctx.r11.s64 + -580;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r11,-660
	ctx.r9.s64 = ctx.r11.s64 + -660;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r8,r11,-676
	ctx.r8.s64 = ctx.r11.s64 + -676;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// addi r28,r10,-864
	ctx.r28.s64 = ctx.r10.s64 + -864;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// stw r11,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// stw r11,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r11.u32);
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
loc_8226A4E0:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8226a4f0
	if (!ctx.cr6.eq) goto loc_8226A4F0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8226A4F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82265810
	ctx.lr = 0x8226A4FC;
	sub_82265810(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r11,r28,184
	ctx.r11.s64 = ctx.r28.s64 + 184;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8226a4e0
	if (!ctx.cr6.eq) goto loc_8226A4E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226A520"))) PPC_WEAK_FUNC(sub_8226A520);
PPC_FUNC_IMPL(__imp__sub_8226A520) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-56
	ctx.r3.s64 = ctx.r3.s64 + -56;
	// b 0x8226a530
	sub_8226A530(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226A528"))) PPC_WEAK_FUNC(sub_8226A528);
PPC_FUNC_IMPL(__imp__sub_8226A528) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x8226a530
	sub_8226A530(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226A530"))) PPC_WEAK_FUNC(sub_8226A530);
PPC_FUNC_IMPL(__imp__sub_8226A530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82267858
	ctx.lr = 0x8226A550;
	sub_82267858(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226a568
	if (ctx.cr6.eq) goto loc_8226A568;
	// bl 0x82186190
	ctx.lr = 0x8226A564;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8226A568:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226A580"))) PPC_WEAK_FUNC(sub_8226A580);
PPC_FUNC_IMPL(__imp__sub_8226A580) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r31,-32
	ctx.r30.s64 = ctx.r31.s64 + -32;
	// addi r4,r31,348
	ctx.r4.s64 = ctx.r31.s64 + 348;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82265988
	ctx.lr = 0x8226A5B0;
	sub_82265988(ctx, base);
	// addi r4,r31,352
	ctx.r4.s64 = ctx.r31.s64 + 352;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82265988
	ctx.lr = 0x8226A5BC;
	sub_82265988(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82265a68
	ctx.lr = 0x8226A5C8;
	sub_82265A68(ctx, base);
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

__attribute__((alias("__imp__sub_8226A5E8"))) PPC_WEAK_FUNC(sub_8226A5E8);
PPC_FUNC_IMPL(__imp__sub_8226A5E8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82265bf0
	ctx.lr = 0x8226A608;
	sub_82265BF0(ctx, base);
	// addi r11,r30,-15
	ctx.r11.s64 = ctx.r30.s64 + -15;
	// cmplwi cr6,r11,202
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 202, ctx.xer);
	// bgt cr6,0x8226aab4
	if (ctx.cr6.gt) goto loc_8226AAB4;
	// lis r12,-32217
	ctx.r12.s64 = -2111373312;
	// addi r12,r12,-22996
	ctx.r12.s64 = ctx.r12.s64 + -22996;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8226AAA8;
	case 1:
		goto loc_8226AAB4;
	case 2:
		goto loc_8226AAB4;
	case 3:
		goto loc_8226AAB4;
	case 4:
		goto loc_8226AAB4;
	case 5:
		goto loc_8226AAB4;
	case 6:
		goto loc_8226AAB4;
	case 7:
		goto loc_8226AAB4;
	case 8:
		goto loc_8226AAB4;
	case 9:
		goto loc_8226AAB4;
	case 10:
		goto loc_8226AAB4;
	case 11:
		goto loc_8226AAB4;
	case 12:
		goto loc_8226AAB4;
	case 13:
		goto loc_8226AAB4;
	case 14:
		goto loc_8226AAB4;
	case 15:
		goto loc_8226AAB4;
	case 16:
		goto loc_8226AAB4;
	case 17:
		goto loc_8226AAB4;
	case 18:
		goto loc_8226AAB4;
	case 19:
		goto loc_8226AAB4;
	case 20:
		goto loc_8226AAB4;
	case 21:
		goto loc_8226AAB4;
	case 22:
		goto loc_8226AAB4;
	case 23:
		goto loc_8226AAB4;
	case 24:
		goto loc_8226AAB4;
	case 25:
		goto loc_8226AAB4;
	case 26:
		goto loc_8226AAB4;
	case 27:
		goto loc_8226AAB4;
	case 28:
		goto loc_8226AAB4;
	case 29:
		goto loc_8226AAB4;
	case 30:
		goto loc_8226AAB4;
	case 31:
		goto loc_8226AAB4;
	case 32:
		goto loc_8226AAB4;
	case 33:
		goto loc_8226AAB4;
	case 34:
		goto loc_8226AAB4;
	case 35:
		goto loc_8226AAB4;
	case 36:
		goto loc_8226AAB4;
	case 37:
		goto loc_8226AAB4;
	case 38:
		goto loc_8226AAB4;
	case 39:
		goto loc_8226AAB4;
	case 40:
		goto loc_8226AAB4;
	case 41:
		goto loc_8226AAB4;
	case 42:
		goto loc_8226AAB4;
	case 43:
		goto loc_8226AAB4;
	case 44:
		goto loc_8226AAB4;
	case 45:
		goto loc_8226AAB4;
	case 46:
		goto loc_8226AAB4;
	case 47:
		goto loc_8226AAB4;
	case 48:
		goto loc_8226AAB4;
	case 49:
		goto loc_8226AAB4;
	case 50:
		goto loc_8226AAB4;
	case 51:
		goto loc_8226AAB4;
	case 52:
		goto loc_8226AAB4;
	case 53:
		goto loc_8226AAB4;
	case 54:
		goto loc_8226AAB4;
	case 55:
		goto loc_8226AAB4;
	case 56:
		goto loc_8226AAB4;
	case 57:
		goto loc_8226AAB4;
	case 58:
		goto loc_8226AAB4;
	case 59:
		goto loc_8226AAB4;
	case 60:
		goto loc_8226AAB4;
	case 61:
		goto loc_8226AAB4;
	case 62:
		goto loc_8226AAB4;
	case 63:
		goto loc_8226AAB4;
	case 64:
		goto loc_8226AAB4;
	case 65:
		goto loc_8226AAB4;
	case 66:
		goto loc_8226AAB4;
	case 67:
		goto loc_8226AAB4;
	case 68:
		goto loc_8226AAB4;
	case 69:
		goto loc_8226AAB4;
	case 70:
		goto loc_8226AAB4;
	case 71:
		goto loc_8226AAB4;
	case 72:
		goto loc_8226AAB4;
	case 73:
		goto loc_8226AAB4;
	case 74:
		goto loc_8226AAB4;
	case 75:
		goto loc_8226AAB4;
	case 76:
		goto loc_8226AAB4;
	case 77:
		goto loc_8226AAB4;
	case 78:
		goto loc_8226AAB4;
	case 79:
		goto loc_8226AAB4;
	case 80:
		goto loc_8226AAB4;
	case 81:
		goto loc_8226AAB4;
	case 82:
		goto loc_8226AAB4;
	case 83:
		goto loc_8226AAB4;
	case 84:
		goto loc_8226AAB4;
	case 85:
		goto loc_8226AAB4;
	case 86:
		goto loc_8226AAB4;
	case 87:
		goto loc_8226AAB4;
	case 88:
		goto loc_8226AAB4;
	case 89:
		goto loc_8226A9D8;
	case 90:
		goto loc_8226AAB4;
	case 91:
		goto loc_8226AAB4;
	case 92:
		goto loc_8226AAB4;
	case 93:
		goto loc_8226AAB4;
	case 94:
		goto loc_8226AAB4;
	case 95:
		goto loc_8226AAB4;
	case 96:
		goto loc_8226AAB4;
	case 97:
		goto loc_8226AAB4;
	case 98:
		goto loc_8226AAB4;
	case 99:
		goto loc_8226AAB4;
	case 100:
		goto loc_8226AAB4;
	case 101:
		goto loc_8226AAB4;
	case 102:
		goto loc_8226AAB4;
	case 103:
		goto loc_8226AAB4;
	case 104:
		goto loc_8226AAB4;
	case 105:
		goto loc_8226AAB4;
	case 106:
		goto loc_8226AAB4;
	case 107:
		goto loc_8226AAB4;
	case 108:
		goto loc_8226AAB4;
	case 109:
		goto loc_8226AAB4;
	case 110:
		goto loc_8226AAB4;
	case 111:
		goto loc_8226AAB4;
	case 112:
		goto loc_8226AAB4;
	case 113:
		goto loc_8226AAB4;
	case 114:
		goto loc_8226AAB4;
	case 115:
		goto loc_8226AAB4;
	case 116:
		goto loc_8226AAB4;
	case 117:
		goto loc_8226AAB4;
	case 118:
		goto loc_8226AAB4;
	case 119:
		goto loc_8226AAB4;
	case 120:
		goto loc_8226AAB4;
	case 121:
		goto loc_8226AAB4;
	case 122:
		goto loc_8226AAB4;
	case 123:
		goto loc_8226AAB4;
	case 124:
		goto loc_8226AAB4;
	case 125:
		goto loc_8226AAB4;
	case 126:
		goto loc_8226AAB4;
	case 127:
		goto loc_8226AAB4;
	case 128:
		goto loc_8226AAB4;
	case 129:
		goto loc_8226AAB4;
	case 130:
		goto loc_8226AAB4;
	case 131:
		goto loc_8226AAB4;
	case 132:
		goto loc_8226AAB4;
	case 133:
		goto loc_8226AAB4;
	case 134:
		goto loc_8226AAB4;
	case 135:
		goto loc_8226AAB4;
	case 136:
		goto loc_8226AAB4;
	case 137:
		goto loc_8226AAB4;
	case 138:
		goto loc_8226AAB4;
	case 139:
		goto loc_8226AAB4;
	case 140:
		goto loc_8226AAB4;
	case 141:
		goto loc_8226AAB4;
	case 142:
		goto loc_8226AAB4;
	case 143:
		goto loc_8226AAB4;
	case 144:
		goto loc_8226AAB4;
	case 145:
		goto loc_8226AAB4;
	case 146:
		goto loc_8226AAB4;
	case 147:
		goto loc_8226AAB4;
	case 148:
		goto loc_8226AAB4;
	case 149:
		goto loc_8226AAB4;
	case 150:
		goto loc_8226AAB4;
	case 151:
		goto loc_8226AAB4;
	case 152:
		goto loc_8226AAB4;
	case 153:
		goto loc_8226AAB4;
	case 154:
		goto loc_8226AAB4;
	case 155:
		goto loc_8226AAB4;
	case 156:
		goto loc_8226AAB4;
	case 157:
		goto loc_8226AAB4;
	case 158:
		goto loc_8226AAB4;
	case 159:
		goto loc_8226AAB4;
	case 160:
		goto loc_8226AAB4;
	case 161:
		goto loc_8226AAB4;
	case 162:
		goto loc_8226AAB4;
	case 163:
		goto loc_8226AAB4;
	case 164:
		goto loc_8226AAB4;
	case 165:
		goto loc_8226AAB4;
	case 166:
		goto loc_8226AAB4;
	case 167:
		goto loc_8226AAB4;
	case 168:
		goto loc_8226AAB4;
	case 169:
		goto loc_8226AAB4;
	case 170:
		goto loc_8226AAB4;
	case 171:
		goto loc_8226AAB4;
	case 172:
		goto loc_8226AAB4;
	case 173:
		goto loc_8226AAB4;
	case 174:
		goto loc_8226AAB4;
	case 175:
		goto loc_8226AAB4;
	case 176:
		goto loc_8226AAB4;
	case 177:
		goto loc_8226AAB4;
	case 178:
		goto loc_8226AAB4;
	case 179:
		goto loc_8226AAB4;
	case 180:
		goto loc_8226AAB4;
	case 181:
		goto loc_8226AAB4;
	case 182:
		goto loc_8226AAB4;
	case 183:
		goto loc_8226AAB4;
	case 184:
		goto loc_8226AAB4;
	case 185:
		goto loc_8226AAB4;
	case 186:
		goto loc_8226AAB4;
	case 187:
		goto loc_8226AAB4;
	case 188:
		goto loc_8226AAB4;
	case 189:
		goto loc_8226AAB4;
	case 190:
		goto loc_8226AAB4;
	case 191:
		goto loc_8226AAB4;
	case 192:
		goto loc_8226A9A0;
	case 193:
		goto loc_8226AAB4;
	case 194:
		goto loc_8226AAB4;
	case 195:
		goto loc_8226AAB4;
	case 196:
		goto loc_8226AAB4;
	case 197:
		goto loc_8226AAB4;
	case 198:
		goto loc_8226AAB4;
	case 199:
		goto loc_8226AAB4;
	case 200:
		goto loc_8226AAB4;
	case 201:
		goto loc_8226A958;
	case 202:
		goto loc_8226A97C;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-21848(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21848);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-22056(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -22056);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-22112(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -22112);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-21836(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21836);
	// lwz r17,-22184(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -22184);
	// lwz r17,-22148(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -22148);
loc_8226A958:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,340(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82265898
	ctx.lr = 0x8226A968;
	sub_82265898(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226aab4
	if (ctx.cr6.eq) goto loc_8226AAB4;
	// bl 0x82581e38
	ctx.lr = 0x8226A978;
	sub_82581E38(ctx, base);
	// b 0x8226aab4
	goto loc_8226AAB4;
loc_8226A97C:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,344(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82265898
	ctx.lr = 0x8226A98C;
	sub_82265898(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226aab4
	if (ctx.cr6.eq) goto loc_8226AAB4;
	// bl 0x82581e38
	ctx.lr = 0x8226A99C;
	sub_82581E38(ctx, base);
	// b 0x8226aab4
	goto loc_8226AAB4;
loc_8226A9A0:
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x8226aab4
	if (ctx.cr6.gt) goto loc_8226AAB4;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,320(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82265920
	ctx.lr = 0x8226A9C4;
	sub_82265920(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226aab4
	if (ctx.cr6.eq) goto loc_8226AAB4;
	// bl 0x82581e38
	ctx.lr = 0x8226A9D4;
	sub_82581E38(ctx, base);
	// b 0x8226aab4
	goto loc_8226AAB4;
loc_8226A9D8:
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8226aab4
	if (ctx.cr6.gt) goto loc_8226AAB4;
	// lis r12,-32217
	ctx.r12.s64 = -2111373312;
	// addi r12,r12,-22012
	ctx.r12.s64 = ctx.r12.s64 + -22012;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8226AA18;
	case 1:
		goto loc_8226AA18;
	case 2:
		goto loc_8226AA3C;
	case 3:
		goto loc_8226AA60;
	case 4:
		goto loc_8226AA84;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-21992(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21992);
	// lwz r17,-21992(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21992);
	// lwz r17,-21956(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21956);
	// lwz r17,-21920(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21920);
	// lwz r17,-21884(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -21884);
loc_8226AA18:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,324(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82265920
	ctx.lr = 0x8226AA28;
	sub_82265920(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226aab4
	if (ctx.cr6.eq) goto loc_8226AAB4;
	// bl 0x82581e38
	ctx.lr = 0x8226AA38;
	sub_82581E38(ctx, base);
	// b 0x8226aab4
	goto loc_8226AAB4;
loc_8226AA3C:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,328(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82265920
	ctx.lr = 0x8226AA4C;
	sub_82265920(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226aab4
	if (ctx.cr6.eq) goto loc_8226AAB4;
	// bl 0x82581e38
	ctx.lr = 0x8226AA5C;
	sub_82581E38(ctx, base);
	// b 0x8226aab4
	goto loc_8226AAB4;
loc_8226AA60:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,332(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82265920
	ctx.lr = 0x8226AA70;
	sub_82265920(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226aab4
	if (ctx.cr6.eq) goto loc_8226AAB4;
	// bl 0x82581e38
	ctx.lr = 0x8226AA80;
	sub_82581E38(ctx, base);
	// b 0x8226aab4
	goto loc_8226AAB4;
loc_8226AA84:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,336(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82265920
	ctx.lr = 0x8226AA94;
	sub_82265920(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226aab4
	if (ctx.cr6.eq) goto loc_8226AAB4;
	// bl 0x82581e38
	ctx.lr = 0x8226AAA4;
	sub_82581E38(ctx, base);
	// b 0x8226aab4
	goto loc_8226AAB4;
loc_8226AAA8:
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82265b90
	ctx.lr = 0x8226AAB4;
	sub_82265B90(ctx, base);
loc_8226AAB4:
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

extern bool Super3_DisableChangeRequestHint();

__attribute__((alias("__imp__sub_8226AAD0"))) PPC_WEAK_FUNC(sub_8226AAD0);
PPC_FUNC_IMPL(__imp__sub_8226AAD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8226AAD8;
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
	// bl 0x82266150
	ctx.lr = 0x8226AAEC;
	sub_82266150(ctx, base);
	// rlwinm r11,r30,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226ab18
	if (ctx.cr6.eq) goto loc_8226AB18;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,304(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82265898
	ctx.lr = 0x8226AB08;
	sub_82265898(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226ab18
	if (ctx.cr6.eq) goto loc_8226AB18;
	// bl 0x82581e38
	ctx.lr = 0x8226AB18;
	sub_82581E38(ctx, base);
loc_8226AB18:
	// rlwinm r11,r30,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226ab44
	if (ctx.cr6.eq) goto loc_8226AB44;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,312(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82265898
	ctx.lr = 0x8226AB34;
	sub_82265898(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226ab44
	if (ctx.cr6.eq) goto loc_8226AB44;
	// bl 0x82581e38
	ctx.lr = 0x8226AB44;
	sub_82581E38(ctx, base);
loc_8226AB44:
	// rlwinm r11,r30,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226ab70
	if (Super3_DisableChangeRequestHint()) {
		goto loc_8226AB70;
	}
	else {
	}
	if (ctx.cr6.eq) goto loc_8226AB70;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,316(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82265920
	ctx.lr = 0x8226AB60;
	sub_82265920(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226ab70
	if (ctx.cr6.eq) goto loc_8226AB70;
	// bl 0x82581e38
	ctx.lr = 0x8226AB70;
	sub_82581E38(ctx, base);
loc_8226AB70:
	// rlwinm r11,r30,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226abc4
	if (ctx.cr6.eq) goto loc_8226ABC4;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,308(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82265898
	ctx.lr = 0x8226AB8C;
	sub_82265898(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8226aba0
	if (ctx.cr6.eq) goto loc_8226ABA0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x8226ABA0;
	sub_82659610(ctx, base);
loc_8226ABA0:
	// lwz r3,348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226abb4
	if (ctx.cr6.eq) goto loc_8226ABB4;
	// bl 0x82581e38
	ctx.lr = 0x8226ABB4;
	sub_82581E38(ctx, base);
loc_8226ABB4:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226abc4
	if (ctx.cr6.eq) goto loc_8226ABC4;
	// bl 0x82581e38
	ctx.lr = 0x8226ABC4;
	sub_82581E38(ctx, base);
loc_8226ABC4:
	// rlwinm r11,r29,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226abe8
	if (ctx.cr6.eq) goto loc_8226ABE8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// beq cr6,0x8226abe8
	if (ctx.cr6.eq) goto loc_8226ABE8;
	// bl 0x82581e38
	ctx.lr = 0x8226ABE8;
	sub_82581E38(ctx, base);
loc_8226ABE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226ABF0"))) PPC_WEAK_FUNC(sub_8226ABF0);
PPC_FUNC_IMPL(__imp__sub_8226ABF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x8226ABF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82266678
	ctx.lr = 0x8226AC0C;
	sub_82266678(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-196
	ctx.r11.s64 = ctx.r11.s64 + -196;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r10,-276
	ctx.r10.s64 = ctx.r10.s64 + -276;
	// addi r9,r9,-292
	ctx.r9.s64 = ctx.r9.s64 + -292;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r31,336
	ctx.r29.s64 = ctx.r31.s64 + 336;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// addi r27,r11,-384
	ctx.r27.s64 = ctx.r11.s64 + -384;
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// stw r8,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r8.u32);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// stw r8,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r8.u32);
	// stw r28,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r28.u32);
loc_8226AC50:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8226ac60
	if (!ctx.cr6.eq) goto loc_8226AC60;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8226AC60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82265810
	ctx.lr = 0x8226AC6C;
	sub_82265810(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r11,r27,88
	ctx.r11.s64 = ctx.r27.s64 + 88;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8226ac50
	if (!ctx.cr6.eq) goto loc_8226AC50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226AC90"))) PPC_WEAK_FUNC(sub_8226AC90);
PPC_FUNC_IMPL(__imp__sub_8226AC90) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-56
	ctx.r3.s64 = ctx.r3.s64 + -56;
	// b 0x8226ac98
	sub_8226AC98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226AC98"))) PPC_WEAK_FUNC(sub_8226AC98);
PPC_FUNC_IMPL(__imp__sub_8226AC98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226acc4
	if (ctx.cr6.eq) goto loc_8226ACC4;
	// bl 0x82581e38
	ctx.lr = 0x8226ACC4;
	sub_82581E38(ctx, base);
loc_8226ACC4:
	// lwz r3,380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226acd4
	if (ctx.cr6.eq) goto loc_8226ACD4;
	// bl 0x82581e38
	ctx.lr = 0x8226ACD4;
	sub_82581E38(ctx, base);
loc_8226ACD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822667a0
	ctx.lr = 0x8226ACDC;
	sub_822667A0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226acf4
	if (ctx.cr6.eq) goto loc_8226ACF4;
	// bl 0x82186190
	ctx.lr = 0x8226ACF0;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8226ACF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226AD10"))) PPC_WEAK_FUNC(sub_8226AD10);
PPC_FUNC_IMPL(__imp__sub_8226AD10) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82265bf0
	ctx.lr = 0x8226AD30;
	sub_82265BF0(ctx, base);
	// addi r11,r30,-15
	ctx.r11.s64 = ctx.r30.s64 + -15;
	// cmplwi cr6,r11,206
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 206, ctx.xer);
	// bgt cr6,0x8226b1ec
	if (ctx.cr6.gt) goto loc_8226B1EC;
	// lis r12,-32217
	ctx.r12.s64 = -2111373312;
	// addi r12,r12,-21164
	ctx.r12.s64 = ctx.r12.s64 + -21164;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8226B1E0;
	case 1:
		goto loc_8226B1EC;
	case 2:
		goto loc_8226B1EC;
	case 3:
		goto loc_8226B1EC;
	case 4:
		goto loc_8226B1EC;
	case 5:
		goto loc_8226B1EC;
	case 6:
		goto loc_8226B1EC;
	case 7:
		goto loc_8226B1EC;
	case 8:
		goto loc_8226B1EC;
	case 9:
		goto loc_8226B1EC;
	case 10:
		goto loc_8226B1EC;
	case 11:
		goto loc_8226B1EC;
	case 12:
		goto loc_8226B1EC;
	case 13:
		goto loc_8226B1EC;
	case 14:
		goto loc_8226B1EC;
	case 15:
		goto loc_8226B1EC;
	case 16:
		goto loc_8226B1EC;
	case 17:
		goto loc_8226B1EC;
	case 18:
		goto loc_8226B1EC;
	case 19:
		goto loc_8226B1EC;
	case 20:
		goto loc_8226B1EC;
	case 21:
		goto loc_8226B1EC;
	case 22:
		goto loc_8226B1EC;
	case 23:
		goto loc_8226B1EC;
	case 24:
		goto loc_8226B1EC;
	case 25:
		goto loc_8226B1EC;
	case 26:
		goto loc_8226B1EC;
	case 27:
		goto loc_8226B1EC;
	case 28:
		goto loc_8226B1EC;
	case 29:
		goto loc_8226B1EC;
	case 30:
		goto loc_8226B1EC;
	case 31:
		goto loc_8226B1EC;
	case 32:
		goto loc_8226B1EC;
	case 33:
		goto loc_8226B1EC;
	case 34:
		goto loc_8226B1EC;
	case 35:
		goto loc_8226B1EC;
	case 36:
		goto loc_8226B1EC;
	case 37:
		goto loc_8226B1EC;
	case 38:
		goto loc_8226B1EC;
	case 39:
		goto loc_8226B1EC;
	case 40:
		goto loc_8226B1EC;
	case 41:
		goto loc_8226B1EC;
	case 42:
		goto loc_8226B1EC;
	case 43:
		goto loc_8226B1EC;
	case 44:
		goto loc_8226B1EC;
	case 45:
		goto loc_8226B1EC;
	case 46:
		goto loc_8226B1EC;
	case 47:
		goto loc_8226B1EC;
	case 48:
		goto loc_8226B1EC;
	case 49:
		goto loc_8226B1EC;
	case 50:
		goto loc_8226B1EC;
	case 51:
		goto loc_8226B1EC;
	case 52:
		goto loc_8226B1EC;
	case 53:
		goto loc_8226B1EC;
	case 54:
		goto loc_8226B1EC;
	case 55:
		goto loc_8226B1EC;
	case 56:
		goto loc_8226B1EC;
	case 57:
		goto loc_8226B1EC;
	case 58:
		goto loc_8226B1EC;
	case 59:
		goto loc_8226B1EC;
	case 60:
		goto loc_8226B1EC;
	case 61:
		goto loc_8226B1EC;
	case 62:
		goto loc_8226B1EC;
	case 63:
		goto loc_8226B1EC;
	case 64:
		goto loc_8226B1EC;
	case 65:
		goto loc_8226B1EC;
	case 66:
		goto loc_8226B1EC;
	case 67:
		goto loc_8226B1EC;
	case 68:
		goto loc_8226B1EC;
	case 69:
		goto loc_8226B1EC;
	case 70:
		goto loc_8226B1EC;
	case 71:
		goto loc_8226B1EC;
	case 72:
		goto loc_8226B1EC;
	case 73:
		goto loc_8226B1EC;
	case 74:
		goto loc_8226B1EC;
	case 75:
		goto loc_8226B1EC;
	case 76:
		goto loc_8226B1EC;
	case 77:
		goto loc_8226B1EC;
	case 78:
		goto loc_8226B1EC;
	case 79:
		goto loc_8226B1EC;
	case 80:
		goto loc_8226B1EC;
	case 81:
		goto loc_8226B1EC;
	case 82:
		goto loc_8226B1EC;
	case 83:
		goto loc_8226B1EC;
	case 84:
		goto loc_8226B1EC;
	case 85:
		goto loc_8226B1EC;
	case 86:
		goto loc_8226B1EC;
	case 87:
		goto loc_8226B1EC;
	case 88:
		goto loc_8226B1EC;
	case 89:
		goto loc_8226B110;
	case 90:
		goto loc_8226B1EC;
	case 91:
		goto loc_8226B1EC;
	case 92:
		goto loc_8226B1EC;
	case 93:
		goto loc_8226B1EC;
	case 94:
		goto loc_8226B1EC;
	case 95:
		goto loc_8226B1EC;
	case 96:
		goto loc_8226B1EC;
	case 97:
		goto loc_8226B1EC;
	case 98:
		goto loc_8226B1EC;
	case 99:
		goto loc_8226B1EC;
	case 100:
		goto loc_8226B1EC;
	case 101:
		goto loc_8226B1EC;
	case 102:
		goto loc_8226B1EC;
	case 103:
		goto loc_8226B1EC;
	case 104:
		goto loc_8226B1EC;
	case 105:
		goto loc_8226B1EC;
	case 106:
		goto loc_8226B1EC;
	case 107:
		goto loc_8226B1EC;
	case 108:
		goto loc_8226B1EC;
	case 109:
		goto loc_8226B1EC;
	case 110:
		goto loc_8226B1EC;
	case 111:
		goto loc_8226B1EC;
	case 112:
		goto loc_8226B1EC;
	case 113:
		goto loc_8226B1EC;
	case 114:
		goto loc_8226B1EC;
	case 115:
		goto loc_8226B1EC;
	case 116:
		goto loc_8226B1EC;
	case 117:
		goto loc_8226B1EC;
	case 118:
		goto loc_8226B1EC;
	case 119:
		goto loc_8226B1EC;
	case 120:
		goto loc_8226B1EC;
	case 121:
		goto loc_8226B1EC;
	case 122:
		goto loc_8226B1EC;
	case 123:
		goto loc_8226B1EC;
	case 124:
		goto loc_8226B1EC;
	case 125:
		goto loc_8226B1EC;
	case 126:
		goto loc_8226B1EC;
	case 127:
		goto loc_8226B1EC;
	case 128:
		goto loc_8226B1EC;
	case 129:
		goto loc_8226B1EC;
	case 130:
		goto loc_8226B1EC;
	case 131:
		goto loc_8226B1EC;
	case 132:
		goto loc_8226B1EC;
	case 133:
		goto loc_8226B1EC;
	case 134:
		goto loc_8226B1EC;
	case 135:
		goto loc_8226B1EC;
	case 136:
		goto loc_8226B1EC;
	case 137:
		goto loc_8226B1EC;
	case 138:
		goto loc_8226B1EC;
	case 139:
		goto loc_8226B1EC;
	case 140:
		goto loc_8226B1EC;
	case 141:
		goto loc_8226B1EC;
	case 142:
		goto loc_8226B1EC;
	case 143:
		goto loc_8226B1EC;
	case 144:
		goto loc_8226B1EC;
	case 145:
		goto loc_8226B1EC;
	case 146:
		goto loc_8226B1EC;
	case 147:
		goto loc_8226B1EC;
	case 148:
		goto loc_8226B1EC;
	case 149:
		goto loc_8226B1EC;
	case 150:
		goto loc_8226B1EC;
	case 151:
		goto loc_8226B1EC;
	case 152:
		goto loc_8226B1EC;
	case 153:
		goto loc_8226B1EC;
	case 154:
		goto loc_8226B1EC;
	case 155:
		goto loc_8226B1EC;
	case 156:
		goto loc_8226B1EC;
	case 157:
		goto loc_8226B1EC;
	case 158:
		goto loc_8226B1EC;
	case 159:
		goto loc_8226B1EC;
	case 160:
		goto loc_8226B1EC;
	case 161:
		goto loc_8226B1EC;
	case 162:
		goto loc_8226B1EC;
	case 163:
		goto loc_8226B1EC;
	case 164:
		goto loc_8226B1EC;
	case 165:
		goto loc_8226B1EC;
	case 166:
		goto loc_8226B1EC;
	case 167:
		goto loc_8226B1EC;
	case 168:
		goto loc_8226B1EC;
	case 169:
		goto loc_8226B1EC;
	case 170:
		goto loc_8226B1EC;
	case 171:
		goto loc_8226B1EC;
	case 172:
		goto loc_8226B1EC;
	case 173:
		goto loc_8226B1EC;
	case 174:
		goto loc_8226B1EC;
	case 175:
		goto loc_8226B1EC;
	case 176:
		goto loc_8226B1EC;
	case 177:
		goto loc_8226B1EC;
	case 178:
		goto loc_8226B1EC;
	case 179:
		goto loc_8226B1EC;
	case 180:
		goto loc_8226B1EC;
	case 181:
		goto loc_8226B1EC;
	case 182:
		goto loc_8226B1EC;
	case 183:
		goto loc_8226B1EC;
	case 184:
		goto loc_8226B1EC;
	case 185:
		goto loc_8226B1EC;
	case 186:
		goto loc_8226B1EC;
	case 187:
		goto loc_8226B1EC;
	case 188:
		goto loc_8226B1EC;
	case 189:
		goto loc_8226B1EC;
	case 190:
		goto loc_8226B1EC;
	case 191:
		goto loc_8226B1EC;
	case 192:
		goto loc_8226B0D8;
	case 193:
		goto loc_8226B1EC;
	case 194:
		goto loc_8226B1EC;
	case 195:
		goto loc_8226B1EC;
	case 196:
		goto loc_8226B1EC;
	case 197:
		goto loc_8226B1EC;
	case 198:
		goto loc_8226B1EC;
	case 199:
		goto loc_8226B1EC;
	case 200:
		goto loc_8226B1EC;
	case 201:
		goto loc_8226B1EC;
	case 202:
		goto loc_8226B1EC;
	case 203:
		goto loc_8226B1EC;
	case 204:
		goto loc_8226B090;
	case 205:
		goto loc_8226B1EC;
	case 206:
		goto loc_8226B0B4;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-20000(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20000);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-20208(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20208);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-20264(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20264);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-20336(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20336);
	// lwz r17,-19988(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19988);
	// lwz r17,-20300(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20300);
loc_8226B090:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,340(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82265898
	ctx.lr = 0x8226B0A0;
	sub_82265898(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226b1ec
	if (ctx.cr6.eq) goto loc_8226B1EC;
	// bl 0x82581e38
	ctx.lr = 0x8226B0B0;
	sub_82581E38(ctx, base);
	// b 0x8226b1ec
	goto loc_8226B1EC;
loc_8226B0B4:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,344(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82265898
	ctx.lr = 0x8226B0C4;
	sub_82265898(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226b1ec
	if (ctx.cr6.eq) goto loc_8226B1EC;
	// bl 0x82581e38
	ctx.lr = 0x8226B0D4;
	sub_82581E38(ctx, base);
	// b 0x8226b1ec
	goto loc_8226B1EC;
loc_8226B0D8:
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x8226b1ec
	if (ctx.cr6.gt) goto loc_8226B1EC;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,320(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82265920
	ctx.lr = 0x8226B0FC;
	sub_82265920(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226b1ec
	if (ctx.cr6.eq) goto loc_8226B1EC;
	// bl 0x82581e38
	ctx.lr = 0x8226B10C;
	sub_82581E38(ctx, base);
	// b 0x8226b1ec
	goto loc_8226B1EC;
loc_8226B110:
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8226b1ec
	if (ctx.cr6.gt) goto loc_8226B1EC;
	// lis r12,-32217
	ctx.r12.s64 = -2111373312;
	// addi r12,r12,-20164
	ctx.r12.s64 = ctx.r12.s64 + -20164;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8226B150;
	case 1:
		goto loc_8226B150;
	case 2:
		goto loc_8226B174;
	case 3:
		goto loc_8226B198;
	case 4:
		goto loc_8226B1BC;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-20144(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20144);
	// lwz r17,-20144(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20144);
	// lwz r17,-20108(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20108);
	// lwz r17,-20072(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20072);
	// lwz r17,-20036(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20036);
loc_8226B150:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,324(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82265920
	ctx.lr = 0x8226B160;
	sub_82265920(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226b1ec
	if (ctx.cr6.eq) goto loc_8226B1EC;
	// bl 0x82581e38
	ctx.lr = 0x8226B170;
	sub_82581E38(ctx, base);
	// b 0x8226b1ec
	goto loc_8226B1EC;
loc_8226B174:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,328(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82265920
	ctx.lr = 0x8226B184;
	sub_82265920(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226b1ec
	if (ctx.cr6.eq) goto loc_8226B1EC;
	// bl 0x82581e38
	ctx.lr = 0x8226B194;
	sub_82581E38(ctx, base);
	// b 0x8226b1ec
	goto loc_8226B1EC;
loc_8226B198:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,332(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82265920
	ctx.lr = 0x8226B1A8;
	sub_82265920(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226b1ec
	if (ctx.cr6.eq) goto loc_8226B1EC;
	// bl 0x82581e38
	ctx.lr = 0x8226B1B8;
	sub_82581E38(ctx, base);
	// b 0x8226b1ec
	goto loc_8226B1EC;
loc_8226B1BC:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,336(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82265920
	ctx.lr = 0x8226B1CC;
	sub_82265920(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226b1ec
	if (ctx.cr6.eq) goto loc_8226B1EC;
	// bl 0x82581e38
	ctx.lr = 0x8226B1DC;
	sub_82581E38(ctx, base);
	// b 0x8226b1ec
	goto loc_8226B1EC;
loc_8226B1E0:
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82265b90
	ctx.lr = 0x8226B1EC;
	sub_82265B90(ctx, base);
loc_8226B1EC:
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

__attribute__((alias("__imp__sub_8226B208"))) PPC_WEAK_FUNC(sub_8226B208);
PPC_FUNC_IMPL(__imp__sub_8226B208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x8226B210;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82266678
	ctx.lr = 0x8226B224;
	sub_82266678(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,196
	ctx.r11.s64 = ctx.r11.s64 + 196;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r10,116
	ctx.r10.s64 = ctx.r10.s64 + 116;
	// addi r9,r9,100
	ctx.r9.s64 = ctx.r9.s64 + 100;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r31,336
	ctx.r29.s64 = ctx.r31.s64 + 336;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// addi r27,r11,8
	ctx.r27.s64 = ctx.r11.s64 + 8;
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// stw r8,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r8.u32);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// stw r8,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r8.u32);
	// stw r28,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r28.u32);
loc_8226B268:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8226b278
	if (!ctx.cr6.eq) goto loc_8226B278;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8226B278:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82265810
	ctx.lr = 0x8226B284;
	sub_82265810(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r11,r27,88
	ctx.r11.s64 = ctx.r27.s64 + 88;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8226b268
	if (!ctx.cr6.eq) goto loc_8226B268;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226B2A8"))) PPC_WEAK_FUNC(sub_8226B2A8);
PPC_FUNC_IMPL(__imp__sub_8226B2A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x8226ac98
	sub_8226AC98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226B2B0"))) PPC_WEAK_FUNC(sub_8226B2B0);
PPC_FUNC_IMPL(__imp__sub_8226B2B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r31,-32
	ctx.r30.s64 = ctx.r31.s64 + -32;
	// addi r4,r31,352
	ctx.r4.s64 = ctx.r31.s64 + 352;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82265988
	ctx.lr = 0x8226B2E0;
	sub_82265988(ctx, base);
	// addi r4,r31,356
	ctx.r4.s64 = ctx.r31.s64 + 356;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82265988
	ctx.lr = 0x8226B2EC;
	sub_82265988(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82265a68
	ctx.lr = 0x8226B2F8;
	sub_82265A68(ctx, base);
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

__attribute__((alias("__imp__sub_8226B318"))) PPC_WEAK_FUNC(sub_8226B318);
PPC_FUNC_IMPL(__imp__sub_8226B318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8226B320;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82265bf0
	ctx.lr = 0x8226B330;
	sub_82265BF0(ctx, base);
	// addi r30,r31,356
	ctx.r30.s64 = ctx.r31.s64 + 356;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226b34c
	if (ctx.cr6.eq) goto loc_8226B34C;
	// bl 0x82581e38
	ctx.lr = 0x8226B34C;
	sub_82581E38(ctx, base);
loc_8226B34C:
	// addi r11,r29,-15
	ctx.r11.s64 = ctx.r29.s64 + -15;
	// cmplwi cr6,r11,198
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 198, ctx.xer);
	// bgt cr6,0x8226b864
	if (ctx.cr6.gt) goto loc_8226B864;
	// lis r12,-32217
	ctx.r12.s64 = -2111373312;
	// addi r12,r12,-19600
	ctx.r12.s64 = ctx.r12.s64 + -19600;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8226B858;
	case 1:
		goto loc_8226B864;
	case 2:
		goto loc_8226B864;
	case 3:
		goto loc_8226B864;
	case 4:
		goto loc_8226B864;
	case 5:
		goto loc_8226B864;
	case 6:
		goto loc_8226B864;
	case 7:
		goto loc_8226B864;
	case 8:
		goto loc_8226B864;
	case 9:
		goto loc_8226B864;
	case 10:
		goto loc_8226B864;
	case 11:
		goto loc_8226B864;
	case 12:
		goto loc_8226B864;
	case 13:
		goto loc_8226B864;
	case 14:
		goto loc_8226B864;
	case 15:
		goto loc_8226B864;
	case 16:
		goto loc_8226B864;
	case 17:
		goto loc_8226B864;
	case 18:
		goto loc_8226B864;
	case 19:
		goto loc_8226B864;
	case 20:
		goto loc_8226B864;
	case 21:
		goto loc_8226B864;
	case 22:
		goto loc_8226B864;
	case 23:
		goto loc_8226B864;
	case 24:
		goto loc_8226B864;
	case 25:
		goto loc_8226B864;
	case 26:
		goto loc_8226B864;
	case 27:
		goto loc_8226B864;
	case 28:
		goto loc_8226B864;
	case 29:
		goto loc_8226B864;
	case 30:
		goto loc_8226B864;
	case 31:
		goto loc_8226B864;
	case 32:
		goto loc_8226B864;
	case 33:
		goto loc_8226B864;
	case 34:
		goto loc_8226B864;
	case 35:
		goto loc_8226B864;
	case 36:
		goto loc_8226B864;
	case 37:
		goto loc_8226B864;
	case 38:
		goto loc_8226B864;
	case 39:
		goto loc_8226B864;
	case 40:
		goto loc_8226B864;
	case 41:
		goto loc_8226B864;
	case 42:
		goto loc_8226B864;
	case 43:
		goto loc_8226B864;
	case 44:
		goto loc_8226B864;
	case 45:
		goto loc_8226B864;
	case 46:
		goto loc_8226B864;
	case 47:
		goto loc_8226B864;
	case 48:
		goto loc_8226B864;
	case 49:
		goto loc_8226B864;
	case 50:
		goto loc_8226B864;
	case 51:
		goto loc_8226B864;
	case 52:
		goto loc_8226B864;
	case 53:
		goto loc_8226B864;
	case 54:
		goto loc_8226B864;
	case 55:
		goto loc_8226B864;
	case 56:
		goto loc_8226B864;
	case 57:
		goto loc_8226B864;
	case 58:
		goto loc_8226B864;
	case 59:
		goto loc_8226B864;
	case 60:
		goto loc_8226B864;
	case 61:
		goto loc_8226B864;
	case 62:
		goto loc_8226B864;
	case 63:
		goto loc_8226B864;
	case 64:
		goto loc_8226B864;
	case 65:
		goto loc_8226B864;
	case 66:
		goto loc_8226B864;
	case 67:
		goto loc_8226B864;
	case 68:
		goto loc_8226B864;
	case 69:
		goto loc_8226B864;
	case 70:
		goto loc_8226B864;
	case 71:
		goto loc_8226B864;
	case 72:
		goto loc_8226B864;
	case 73:
		goto loc_8226B864;
	case 74:
		goto loc_8226B864;
	case 75:
		goto loc_8226B864;
	case 76:
		goto loc_8226B864;
	case 77:
		goto loc_8226B864;
	case 78:
		goto loc_8226B864;
	case 79:
		goto loc_8226B864;
	case 80:
		goto loc_8226B864;
	case 81:
		goto loc_8226B864;
	case 82:
		goto loc_8226B864;
	case 83:
		goto loc_8226B864;
	case 84:
		goto loc_8226B864;
	case 85:
		goto loc_8226B864;
	case 86:
		goto loc_8226B864;
	case 87:
		goto loc_8226B864;
	case 88:
		goto loc_8226B864;
	case 89:
		goto loc_8226B778;
	case 90:
		goto loc_8226B864;
	case 91:
		goto loc_8226B864;
	case 92:
		goto loc_8226B864;
	case 93:
		goto loc_8226B864;
	case 94:
		goto loc_8226B864;
	case 95:
		goto loc_8226B864;
	case 96:
		goto loc_8226B864;
	case 97:
		goto loc_8226B864;
	case 98:
		goto loc_8226B864;
	case 99:
		goto loc_8226B864;
	case 100:
		goto loc_8226B864;
	case 101:
		goto loc_8226B864;
	case 102:
		goto loc_8226B864;
	case 103:
		goto loc_8226B864;
	case 104:
		goto loc_8226B864;
	case 105:
		goto loc_8226B864;
	case 106:
		goto loc_8226B864;
	case 107:
		goto loc_8226B864;
	case 108:
		goto loc_8226B864;
	case 109:
		goto loc_8226B864;
	case 110:
		goto loc_8226B864;
	case 111:
		goto loc_8226B864;
	case 112:
		goto loc_8226B864;
	case 113:
		goto loc_8226B864;
	case 114:
		goto loc_8226B864;
	case 115:
		goto loc_8226B864;
	case 116:
		goto loc_8226B864;
	case 117:
		goto loc_8226B864;
	case 118:
		goto loc_8226B864;
	case 119:
		goto loc_8226B864;
	case 120:
		goto loc_8226B864;
	case 121:
		goto loc_8226B864;
	case 122:
		goto loc_8226B864;
	case 123:
		goto loc_8226B864;
	case 124:
		goto loc_8226B864;
	case 125:
		goto loc_8226B864;
	case 126:
		goto loc_8226B864;
	case 127:
		goto loc_8226B864;
	case 128:
		goto loc_8226B864;
	case 129:
		goto loc_8226B864;
	case 130:
		goto loc_8226B864;
	case 131:
		goto loc_8226B864;
	case 132:
		goto loc_8226B864;
	case 133:
		goto loc_8226B864;
	case 134:
		goto loc_8226B864;
	case 135:
		goto loc_8226B864;
	case 136:
		goto loc_8226B864;
	case 137:
		goto loc_8226B864;
	case 138:
		goto loc_8226B864;
	case 139:
		goto loc_8226B864;
	case 140:
		goto loc_8226B864;
	case 141:
		goto loc_8226B864;
	case 142:
		goto loc_8226B864;
	case 143:
		goto loc_8226B864;
	case 144:
		goto loc_8226B864;
	case 145:
		goto loc_8226B864;
	case 146:
		goto loc_8226B864;
	case 147:
		goto loc_8226B864;
	case 148:
		goto loc_8226B864;
	case 149:
		goto loc_8226B864;
	case 150:
		goto loc_8226B864;
	case 151:
		goto loc_8226B864;
	case 152:
		goto loc_8226B864;
	case 153:
		goto loc_8226B864;
	case 154:
		goto loc_8226B864;
	case 155:
		goto loc_8226B864;
	case 156:
		goto loc_8226B864;
	case 157:
		goto loc_8226B864;
	case 158:
		goto loc_8226B864;
	case 159:
		goto loc_8226B864;
	case 160:
		goto loc_8226B864;
	case 161:
		goto loc_8226B864;
	case 162:
		goto loc_8226B864;
	case 163:
		goto loc_8226B864;
	case 164:
		goto loc_8226B864;
	case 165:
		goto loc_8226B864;
	case 166:
		goto loc_8226B864;
	case 167:
		goto loc_8226B864;
	case 168:
		goto loc_8226B864;
	case 169:
		goto loc_8226B864;
	case 170:
		goto loc_8226B864;
	case 171:
		goto loc_8226B864;
	case 172:
		goto loc_8226B864;
	case 173:
		goto loc_8226B864;
	case 174:
		goto loc_8226B864;
	case 175:
		goto loc_8226B864;
	case 176:
		goto loc_8226B864;
	case 177:
		goto loc_8226B864;
	case 178:
		goto loc_8226B864;
	case 179:
		goto loc_8226B864;
	case 180:
		goto loc_8226B864;
	case 181:
		goto loc_8226B864;
	case 182:
		goto loc_8226B864;
	case 183:
		goto loc_8226B864;
	case 184:
		goto loc_8226B864;
	case 185:
		goto loc_8226B864;
	case 186:
		goto loc_8226B864;
	case 187:
		goto loc_8226B864;
	case 188:
		goto loc_8226B864;
	case 189:
		goto loc_8226B864;
	case 190:
		goto loc_8226B864;
	case 191:
		goto loc_8226B864;
	case 192:
		goto loc_8226B73C;
	case 193:
		goto loc_8226B864;
	case 194:
		goto loc_8226B864;
	case 195:
		goto loc_8226B864;
	case 196:
		goto loc_8226B864;
	case 197:
		goto loc_8226B68C;
	case 198:
		goto loc_8226B6E4;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-18344(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18344);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18568(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18568);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18628(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18628);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18332(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18332);
	// lwz r17,-18804(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18804);
	// lwz r17,-18716(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18716);
loc_8226B68C:
	// addi r29,r31,-32
	ctx.r29.s64 = ctx.r31.s64 + -32;
	// lwz r5,340(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82265898
	ctx.lr = 0x8226B6A0;
	sub_82265898(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226b6b0
	if (ctx.cr6.eq) goto loc_8226B6B0;
	// bl 0x82581e38
	ctx.lr = 0x8226B6B0;
	sub_82581E38(ctx, base);
loc_8226B6B0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,348(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82265898
	ctx.lr = 0x8226B6C0;
	sub_82265898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823032b8
	ctx.lr = 0x8226B6CC;
	sub_823032B8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226b864
	if (ctx.cr6.eq) goto loc_8226B864;
	// bl 0x82581e38
	ctx.lr = 0x8226B6DC;
	sub_82581E38(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_8226B6E4:
	// addi r29,r31,-32
	ctx.r29.s64 = ctx.r31.s64 + -32;
	// lwz r5,344(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82265898
	ctx.lr = 0x8226B6F8;
	sub_82265898(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226b708
	if (ctx.cr6.eq) goto loc_8226B708;
	// bl 0x82581e38
	ctx.lr = 0x8226B708;
	sub_82581E38(ctx, base);
loc_8226B708:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,348(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82265898
	ctx.lr = 0x8226B718;
	sub_82265898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823032b8
	ctx.lr = 0x8226B724;
	sub_823032B8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226b864
	if (ctx.cr6.eq) goto loc_8226B864;
	// bl 0x82581e38
	ctx.lr = 0x8226B734;
	sub_82581E38(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_8226B73C:
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x8226b864
	if (ctx.cr6.gt) goto loc_8226B864;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,320(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82265920
	ctx.lr = 0x8226B760;
	sub_82265920(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226b864
	if (ctx.cr6.eq) goto loc_8226B864;
	// bl 0x82581e38
	ctx.lr = 0x8226B770;
	sub_82581E38(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_8226B778:
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8226b864
	if (ctx.cr6.gt) goto loc_8226B864;
	// lis r12,-32217
	ctx.r12.s64 = -2111373312;
	// addi r12,r12,-18524
	ctx.r12.s64 = ctx.r12.s64 + -18524;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8226B7B8;
	case 1:
		goto loc_8226B7B8;
	case 2:
		goto loc_8226B7E0;
	case 3:
		goto loc_8226B808;
	case 4:
		goto loc_8226B830;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-18504(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18504);
	// lwz r17,-18504(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18504);
	// lwz r17,-18464(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18464);
	// lwz r17,-18424(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18424);
	// lwz r17,-18384(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18384);
loc_8226B7B8:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,324(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82265920
	ctx.lr = 0x8226B7C8;
	sub_82265920(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226b864
	if (ctx.cr6.eq) goto loc_8226B864;
	// bl 0x82581e38
	ctx.lr = 0x8226B7D8;
	sub_82581E38(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_8226B7E0:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,328(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82265920
	ctx.lr = 0x8226B7F0;
	sub_82265920(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226b864
	if (ctx.cr6.eq) goto loc_8226B864;
	// bl 0x82581e38
	ctx.lr = 0x8226B800;
	sub_82581E38(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_8226B808:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,332(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82265920
	ctx.lr = 0x8226B818;
	sub_82265920(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226b864
	if (ctx.cr6.eq) goto loc_8226B864;
	// bl 0x82581e38
	ctx.lr = 0x8226B828;
	sub_82581E38(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_8226B830:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,336(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82265920
	ctx.lr = 0x8226B840;
	sub_82265920(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226b864
	if (ctx.cr6.eq) goto loc_8226B864;
	// bl 0x82581e38
	ctx.lr = 0x8226B850;
	sub_82581E38(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_8226B858:
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82265b90
	ctx.lr = 0x8226B864;
	sub_82265B90(ctx, base);
loc_8226B864:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

extern bool Super3_DisableChangeRequestHint();

__attribute__((alias("__imp__sub_8226B870"))) PPC_WEAK_FUNC(sub_8226B870);
PPC_FUNC_IMPL(__imp__sub_8226B870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8226B878;
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
	// bl 0x82266150
	ctx.lr = 0x8226B88C;
	sub_82266150(ctx, base);
	// rlwinm r11,r30,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226b8b8
	if (ctx.cr6.eq) goto loc_8226B8B8;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,304(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82265898
	ctx.lr = 0x8226B8A8;
	sub_82265898(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226b8b8
	if (ctx.cr6.eq) goto loc_8226B8B8;
	// bl 0x82581e38
	ctx.lr = 0x8226B8B8;
	sub_82581E38(ctx, base);
loc_8226B8B8:
	// rlwinm r11,r30,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226b8e4
	if (ctx.cr6.eq) goto loc_8226B8E4;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,312(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82265898
	ctx.lr = 0x8226B8D4;
	sub_82265898(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226b8e4
	if (ctx.cr6.eq) goto loc_8226B8E4;
	// bl 0x82581e38
	ctx.lr = 0x8226B8E4;
	sub_82581E38(ctx, base);
loc_8226B8E4:
	// rlwinm r11,r30,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226b910
	if (Super3_DisableChangeRequestHint()) {
		goto loc_8226B910;
	}
	else {
	}
	if (ctx.cr6.eq) goto loc_8226B910;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,316(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82265920
	ctx.lr = 0x8226B900;
	sub_82265920(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226b910
	if (ctx.cr6.eq) goto loc_8226B910;
	// bl 0x82581e38
	ctx.lr = 0x8226B910;
	sub_82581E38(ctx, base);
loc_8226B910:
	// rlwinm r11,r30,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226b964
	if (ctx.cr6.eq) goto loc_8226B964;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,308(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82265898
	ctx.lr = 0x8226B92C;
	sub_82265898(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8226b940
	if (ctx.cr6.eq) goto loc_8226B940;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x8226B940;
	sub_82659610(ctx, base);
loc_8226B940:
	// lwz r3,352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226b954
	if (ctx.cr6.eq) goto loc_8226B954;
	// bl 0x82581e38
	ctx.lr = 0x8226B954;
	sub_82581E38(ctx, base);
loc_8226B954:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226b964
	if (ctx.cr6.eq) goto loc_8226B964;
	// bl 0x82581e38
	ctx.lr = 0x8226B964;
	sub_82581E38(ctx, base);
loc_8226B964:
	// rlwinm r11,r29,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226b988
	if (ctx.cr6.eq) goto loc_8226B988;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// beq cr6,0x8226b988
	if (ctx.cr6.eq) goto loc_8226B988;
	// bl 0x82581e38
	ctx.lr = 0x8226B988;
	sub_82581E38(ctx, base);
loc_8226B988:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226B990"))) PPC_WEAK_FUNC(sub_8226B990);
PPC_FUNC_IMPL(__imp__sub_8226B990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x8226B998;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82266678
	ctx.lr = 0x8226B9AC;
	sub_82266678(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,556
	ctx.r11.s64 = ctx.r11.s64 + 556;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r10,476
	ctx.r10.s64 = ctx.r10.s64 + 476;
	// addi r9,r9,460
	ctx.r9.s64 = ctx.r9.s64 + 460;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r31,336
	ctx.r29.s64 = ctx.r31.s64 + 336;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// addi r27,r11,360
	ctx.r27.s64 = ctx.r11.s64 + 360;
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// stw r8,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r8.u32);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// stw r8,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r8.u32);
	// stw r28,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r28.u32);
loc_8226B9F0:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8226ba00
	if (!ctx.cr6.eq) goto loc_8226BA00;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8226BA00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82265810
	ctx.lr = 0x8226BA0C;
	sub_82265810(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r11,r27,96
	ctx.r11.s64 = ctx.r27.s64 + 96;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8226b9f0
	if (!ctx.cr6.eq) goto loc_8226B9F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226BA30"))) PPC_WEAK_FUNC(sub_8226BA30);
PPC_FUNC_IMPL(__imp__sub_8226BA30) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-56
	ctx.r3.s64 = ctx.r3.s64 + -56;
	// b 0x8226ba40
	sub_8226BA40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226BA38"))) PPC_WEAK_FUNC(sub_8226BA38);
PPC_FUNC_IMPL(__imp__sub_8226BA38) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x8226ba40
	sub_8226BA40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226BA40"))) PPC_WEAK_FUNC(sub_8226BA40);
PPC_FUNC_IMPL(__imp__sub_8226BA40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226ba6c
	if (ctx.cr6.eq) goto loc_8226BA6C;
	// bl 0x82581e38
	ctx.lr = 0x8226BA6C;
	sub_82581E38(ctx, base);
loc_8226BA6C:
	// lwz r3,384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226ba7c
	if (ctx.cr6.eq) goto loc_8226BA7C;
	// bl 0x82581e38
	ctx.lr = 0x8226BA7C;
	sub_82581E38(ctx, base);
loc_8226BA7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822667a0
	ctx.lr = 0x8226BA84;
	sub_822667A0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226ba9c
	if (ctx.cr6.eq) goto loc_8226BA9C;
	// bl 0x82186190
	ctx.lr = 0x8226BA98;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8226BA9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226BAB8"))) PPC_WEAK_FUNC(sub_8226BAB8);
PPC_FUNC_IMPL(__imp__sub_8226BAB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82265a68
	ctx.lr = 0x8226BAD4;
	sub_82265A68(ctx, base);
	// addi r30,r31,-32
	ctx.r30.s64 = ctx.r31.s64 + -32;
	// addi r4,r31,336
	ctx.r4.s64 = ctx.r31.s64 + 336;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82265988
	ctx.lr = 0x8226BAE4;
	sub_82265988(ctx, base);
	// addi r4,r31,340
	ctx.r4.s64 = ctx.r31.s64 + 340;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82265988
	ctx.lr = 0x8226BAF0;
	sub_82265988(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226BB08"))) PPC_WEAK_FUNC(sub_8226BB08);
PPC_FUNC_IMPL(__imp__sub_8226BB08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8226BB10;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82265bf0
	ctx.lr = 0x8226BB20;
	sub_82265BF0(ctx, base);
	// addi r30,r31,336
	ctx.r30.s64 = ctx.r31.s64 + 336;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226bb3c
	if (ctx.cr6.eq) goto loc_8226BB3C;
	// bl 0x82581e38
	ctx.lr = 0x8226BB3C;
	sub_82581E38(ctx, base);
loc_8226BB3C:
	// addi r11,r28,-6
	ctx.r11.s64 = ctx.r28.s64 + -6;
	// cmplwi cr6,r11,168
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 168, ctx.xer);
	// bgt cr6,0x8226bf44
	if (ctx.cr6.gt) goto loc_8226BF44;
	// lis r12,-32217
	ctx.r12.s64 = -2111373312;
	// addi r12,r12,-17568
	ctx.r12.s64 = ctx.r12.s64 + -17568;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8226BE58;
	case 1:
		goto loc_8226BF44;
	case 2:
		goto loc_8226BF44;
	case 3:
		goto loc_8226BF44;
	case 4:
		goto loc_8226BF44;
	case 5:
		goto loc_8226BF44;
	case 6:
		goto loc_8226BF44;
	case 7:
		goto loc_8226BF44;
	case 8:
		goto loc_8226BF44;
	case 9:
		goto loc_8226BF44;
	case 10:
		goto loc_8226BF44;
	case 11:
		goto loc_8226BF44;
	case 12:
		goto loc_8226BF44;
	case 13:
		goto loc_8226BF44;
	case 14:
		goto loc_8226BF44;
	case 15:
		goto loc_8226BF44;
	case 16:
		goto loc_8226BF44;
	case 17:
		goto loc_8226BF44;
	case 18:
		goto loc_8226BF44;
	case 19:
		goto loc_8226BF44;
	case 20:
		goto loc_8226BF44;
	case 21:
		goto loc_8226BF44;
	case 22:
		goto loc_8226BF44;
	case 23:
		goto loc_8226BF44;
	case 24:
		goto loc_8226BF44;
	case 25:
		goto loc_8226BF44;
	case 26:
		goto loc_8226BF44;
	case 27:
		goto loc_8226BF44;
	case 28:
		goto loc_8226BF44;
	case 29:
		goto loc_8226BF44;
	case 30:
		goto loc_8226BF44;
	case 31:
		goto loc_8226BF44;
	case 32:
		goto loc_8226BF44;
	case 33:
		goto loc_8226BF44;
	case 34:
		goto loc_8226BF44;
	case 35:
		goto loc_8226BF44;
	case 36:
		goto loc_8226BF44;
	case 37:
		goto loc_8226BF44;
	case 38:
		goto loc_8226BF44;
	case 39:
		goto loc_8226BF44;
	case 40:
		goto loc_8226BF44;
	case 41:
		goto loc_8226BF44;
	case 42:
		goto loc_8226BF44;
	case 43:
		goto loc_8226BF44;
	case 44:
		goto loc_8226BF44;
	case 45:
		goto loc_8226BF44;
	case 46:
		goto loc_8226BF44;
	case 47:
		goto loc_8226BF44;
	case 48:
		goto loc_8226BF44;
	case 49:
		goto loc_8226BF44;
	case 50:
		goto loc_8226BF44;
	case 51:
		goto loc_8226BF44;
	case 52:
		goto loc_8226BF44;
	case 53:
		goto loc_8226BF44;
	case 54:
		goto loc_8226BF44;
	case 55:
		goto loc_8226BF44;
	case 56:
		goto loc_8226BF44;
	case 57:
		goto loc_8226BF44;
	case 58:
		goto loc_8226BF44;
	case 59:
		goto loc_8226BF44;
	case 60:
		goto loc_8226BF44;
	case 61:
		goto loc_8226BF44;
	case 62:
		goto loc_8226BF44;
	case 63:
		goto loc_8226BF44;
	case 64:
		goto loc_8226BF44;
	case 65:
		goto loc_8226BF44;
	case 66:
		goto loc_8226BF44;
	case 67:
		goto loc_8226BF44;
	case 68:
		goto loc_8226BF44;
	case 69:
		goto loc_8226BF44;
	case 70:
		goto loc_8226BF44;
	case 71:
		goto loc_8226BF44;
	case 72:
		goto loc_8226BF44;
	case 73:
		goto loc_8226BF44;
	case 74:
		goto loc_8226BF44;
	case 75:
		goto loc_8226BF44;
	case 76:
		goto loc_8226BF44;
	case 77:
		goto loc_8226BF44;
	case 78:
		goto loc_8226BF44;
	case 79:
		goto loc_8226BF44;
	case 80:
		goto loc_8226BF44;
	case 81:
		goto loc_8226BF44;
	case 82:
		goto loc_8226BF44;
	case 83:
		goto loc_8226BF44;
	case 84:
		goto loc_8226BF44;
	case 85:
		goto loc_8226BF44;
	case 86:
		goto loc_8226BF44;
	case 87:
		goto loc_8226BF44;
	case 88:
		goto loc_8226BF44;
	case 89:
		goto loc_8226BF44;
	case 90:
		goto loc_8226BF44;
	case 91:
		goto loc_8226BF44;
	case 92:
		goto loc_8226BF44;
	case 93:
		goto loc_8226BF44;
	case 94:
		goto loc_8226BF44;
	case 95:
		goto loc_8226BF44;
	case 96:
		goto loc_8226BF44;
	case 97:
		goto loc_8226BF44;
	case 98:
		goto loc_8226BF44;
	case 99:
		goto loc_8226BF44;
	case 100:
		goto loc_8226BF44;
	case 101:
		goto loc_8226BF44;
	case 102:
		goto loc_8226BF44;
	case 103:
		goto loc_8226BF44;
	case 104:
		goto loc_8226BF44;
	case 105:
		goto loc_8226BF44;
	case 106:
		goto loc_8226BF44;
	case 107:
		goto loc_8226BF44;
	case 108:
		goto loc_8226BF44;
	case 109:
		goto loc_8226BF44;
	case 110:
		goto loc_8226BF44;
	case 111:
		goto loc_8226BF44;
	case 112:
		goto loc_8226BF44;
	case 113:
		goto loc_8226BF44;
	case 114:
		goto loc_8226BF44;
	case 115:
		goto loc_8226BF44;
	case 116:
		goto loc_8226BF44;
	case 117:
		goto loc_8226BF44;
	case 118:
		goto loc_8226BF44;
	case 119:
		goto loc_8226BF44;
	case 120:
		goto loc_8226BF44;
	case 121:
		goto loc_8226BF44;
	case 122:
		goto loc_8226BF44;
	case 123:
		goto loc_8226BF44;
	case 124:
		goto loc_8226BF44;
	case 125:
		goto loc_8226BF44;
	case 126:
		goto loc_8226BF44;
	case 127:
		goto loc_8226BF44;
	case 128:
		goto loc_8226BF44;
	case 129:
		goto loc_8226BF44;
	case 130:
		goto loc_8226BF44;
	case 131:
		goto loc_8226BF44;
	case 132:
		goto loc_8226BF44;
	case 133:
		goto loc_8226BF44;
	case 134:
		goto loc_8226BF44;
	case 135:
		goto loc_8226BF44;
	case 136:
		goto loc_8226BF44;
	case 137:
		goto loc_8226BF44;
	case 138:
		goto loc_8226BF44;
	case 139:
		goto loc_8226BF44;
	case 140:
		goto loc_8226BF44;
	case 141:
		goto loc_8226BF44;
	case 142:
		goto loc_8226BF44;
	case 143:
		goto loc_8226BF44;
	case 144:
		goto loc_8226BF44;
	case 145:
		goto loc_8226BF44;
	case 146:
		goto loc_8226BF44;
	case 147:
		goto loc_8226BF44;
	case 148:
		goto loc_8226BF44;
	case 149:
		goto loc_8226BF44;
	case 150:
		goto loc_8226BF44;
	case 151:
		goto loc_8226BF44;
	case 152:
		goto loc_8226BF44;
	case 153:
		goto loc_8226BF44;
	case 154:
		goto loc_8226BF44;
	case 155:
		goto loc_8226BF44;
	case 156:
		goto loc_8226BF44;
	case 157:
		goto loc_8226BF44;
	case 158:
		goto loc_8226BF44;
	case 159:
		goto loc_8226BF44;
	case 160:
		goto loc_8226BF44;
	case 161:
		goto loc_8226BF44;
	case 162:
		goto loc_8226BF44;
	case 163:
		goto loc_8226BE7C;
	case 164:
		goto loc_8226BEC4;
	case 165:
		goto loc_8226BF00;
	case 166:
		goto loc_8226BE04;
	case 167:
		goto loc_8226BF44;
	case 168:
		goto loc_8226BE1C;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-16808(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16808);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16772(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16772);
	// lwz r17,-16700(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16700);
	// lwz r17,-16640(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16640);
	// lwz r17,-16892(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16892);
	// lwz r17,-16572(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16572);
	// lwz r17,-16868(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16868);
loc_8226BE04:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,332(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82265898
	ctx.lr = 0x8226BE14;
	sub_82265898(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8226bf38
	goto loc_8226BF38;
loc_8226BE1C:
	// addi r30,r31,-32
	ctx.r30.s64 = ctx.r31.s64 + -32;
	// lwz r5,312(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82265898
	ctx.lr = 0x8226BE30;
	sub_82265898(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226be40
	if (ctx.cr6.eq) goto loc_8226BE40;
	// bl 0x82581e38
	ctx.lr = 0x8226BE40;
	sub_82581E38(ctx, base);
loc_8226BE40:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,328(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82265898
	ctx.lr = 0x8226BE50;
	sub_82265898(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x8226bf38
	goto loc_8226BF38;
loc_8226BE58:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,304(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82265898
	ctx.lr = 0x8226BE68;
	sub_82265898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823032b8
	ctx.lr = 0x8226BE74;
	sub_823032B8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x8226bf38
	goto loc_8226BF38;
loc_8226BE7C:
	// addi r29,r31,-32
	ctx.r29.s64 = ctx.r31.s64 + -32;
	// lwz r5,304(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82265898
	ctx.lr = 0x8226BE90;
	sub_82265898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823032b8
	ctx.lr = 0x8226BE9C;
	sub_823032B8(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226beac
	if (ctx.cr6.eq) goto loc_8226BEAC;
	// bl 0x82581e38
	ctx.lr = 0x8226BEAC;
	sub_82581E38(ctx, base);
loc_8226BEAC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,320(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82265898
	ctx.lr = 0x8226BEBC;
	sub_82265898(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x8226bf38
	goto loc_8226BF38;
loc_8226BEC4:
	// addi r30,r31,-32
	ctx.r30.s64 = ctx.r31.s64 + -32;
	// lwz r5,308(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82265898
	ctx.lr = 0x8226BED8;
	sub_82265898(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226bee8
	if (ctx.cr6.eq) goto loc_8226BEE8;
	// bl 0x82581e38
	ctx.lr = 0x8226BEE8;
	sub_82581E38(ctx, base);
loc_8226BEE8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,324(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82265898
	ctx.lr = 0x8226BEF8;
	sub_82265898(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x8226bf38
	goto loc_8226BF38;
loc_8226BF00:
	// addi r30,r31,-32
	ctx.r30.s64 = ctx.r31.s64 + -32;
	// lwz r5,312(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82265898
	ctx.lr = 0x8226BF14;
	sub_82265898(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226bf24
	if (ctx.cr6.eq) goto loc_8226BF24;
	// bl 0x82581e38
	ctx.lr = 0x8226BF24;
	sub_82581E38(ctx, base);
loc_8226BF24:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,328(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82265898
	ctx.lr = 0x8226BF34;
	sub_82265898(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_8226BF38:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226bf44
	if (ctx.cr6.eq) goto loc_8226BF44;
	// bl 0x82581e38
	ctx.lr = 0x8226BF44;
	sub_82581E38(ctx, base);
loc_8226BF44:
	// cmpwi cr6,r28,172
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 172, ctx.xer);
	// blt cr6,0x8226bf98
	if (ctx.cr6.lt) goto loc_8226BF98;
	// cmpwi cr6,r28,173
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 173, ctx.xer);
	// bgt cr6,0x8226bf98
	if (ctx.cr6.gt) goto loc_8226BF98;
	// addi r30,r31,340
	ctx.r30.s64 = ctx.r31.s64 + 340;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226bf74
	if (ctx.cr6.eq) goto loc_8226BF74;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8226bfac
	if (!ctx.cr6.eq) goto loc_8226BFAC;
loc_8226BF74:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,316(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82265898
	ctx.lr = 0x8226BF84;
	sub_82265898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823032b8
	ctx.lr = 0x8226BF90;
	sub_823032B8(ctx, base);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// b 0x8226bfa0
	goto loc_8226BFA0;
loc_8226BF98:
	// lwz r3,340(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// stw r27,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r27.u32);
loc_8226BFA0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226bfac
	if (ctx.cr6.eq) goto loc_8226BFAC;
	// bl 0x82581e38
	ctx.lr = 0x8226BFAC;
	sub_82581E38(ctx, base);
loc_8226BFAC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226BFB8"))) PPC_WEAK_FUNC(sub_8226BFB8);
PPC_FUNC_IMPL(__imp__sub_8226BFB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8226BFC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82266150
	ctx.lr = 0x8226BFD0;
	sub_82266150(ctx, base);
	// rlwinm r11,r30,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226c04c
	if (ctx.cr6.eq) goto loc_8226C04C;
	// addi r29,r31,-32
	ctx.r29.s64 = ctx.r31.s64 + -32;
	// lwz r5,312(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82265898
	ctx.lr = 0x8226BFF0;
	sub_82265898(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226c000
	if (ctx.cr6.eq) goto loc_8226C000;
	// bl 0x82581e38
	ctx.lr = 0x8226C000;
	sub_82581E38(ctx, base);
loc_8226C000:
	// addi r30,r31,292
	ctx.r30.s64 = ctx.r31.s64 + 292;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226c020
	if (ctx.cr6.eq) goto loc_8226C020;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8226c04c
	if (!ctx.cr6.eq) goto loc_8226C04C;
loc_8226C020:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,328(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82265898
	ctx.lr = 0x8226C030;
	sub_82265898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823032b8
	ctx.lr = 0x8226C03C;
	sub_823032B8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226c04c
	if (ctx.cr6.eq) goto loc_8226C04C;
	// bl 0x82581e38
	ctx.lr = 0x8226C04C;
	sub_82581E38(ctx, base);
loc_8226C04C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226C058"))) PPC_WEAK_FUNC(sub_8226C058);
PPC_FUNC_IMPL(__imp__sub_8226C058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8226C060;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82266678
	ctx.lr = 0x8226C070;
	sub_82266678(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,900
	ctx.r11.s64 = ctx.r11.s64 + 900;
	// addi r10,r10,820
	ctx.r10.s64 = ctx.r10.s64 + 820;
	// addi r9,r9,804
	ctx.r9.s64 = ctx.r9.s64 + 804;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r29,r31,336
	ctx.r29.s64 = ctx.r31.s64 + 336;
	// addi r28,r8,736
	ctx.r28.s64 = ctx.r8.s64 + 736;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// stw r7,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r7.u32);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// stw r7,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r7.u32);
loc_8226C0B0:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8226c0c0
	if (!ctx.cr6.eq) goto loc_8226C0C0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8226C0C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82265810
	ctx.lr = 0x8226C0CC;
	sub_82265810(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r11,r28,64
	ctx.r11.s64 = ctx.r28.s64 + 64;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8226c0b0
	if (!ctx.cr6.eq) goto loc_8226C0B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226C0F0"))) PPC_WEAK_FUNC(sub_8226C0F0);
PPC_FUNC_IMPL(__imp__sub_8226C0F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-56
	ctx.r3.s64 = ctx.r3.s64 + -56;
	// b 0x8226c100
	sub_8226C100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226C0F8"))) PPC_WEAK_FUNC(sub_8226C0F8);
PPC_FUNC_IMPL(__imp__sub_8226C0F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x8226c100
	sub_8226C100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226C100"))) PPC_WEAK_FUNC(sub_8226C100);
PPC_FUNC_IMPL(__imp__sub_8226C100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226c12c
	if (ctx.cr6.eq) goto loc_8226C12C;
	// bl 0x82581e38
	ctx.lr = 0x8226C12C;
	sub_82581E38(ctx, base);
loc_8226C12C:
	// lwz r3,368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226c13c
	if (ctx.cr6.eq) goto loc_8226C13C;
	// bl 0x82581e38
	ctx.lr = 0x8226C13C;
	sub_82581E38(ctx, base);
loc_8226C13C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822667a0
	ctx.lr = 0x8226C144;
	sub_822667A0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226c15c
	if (ctx.cr6.eq) goto loc_8226C15C;
	// bl 0x82186190
	ctx.lr = 0x8226C158;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8226C15C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226C178"))) PPC_WEAK_FUNC(sub_8226C178);
PPC_FUNC_IMPL(__imp__sub_8226C178) {
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
	// bl 0x82265a68
	ctx.lr = 0x8226C190;
	sub_82265A68(ctx, base);
	// lwz r3,380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226c20c
	if (ctx.cr6.eq) goto loc_8226C20C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226c20c
	if (ctx.cr6.eq) goto loc_8226C20C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226C1BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r10,376(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 376);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8226c20c
	if (ctx.cr6.eq) goto loc_8226C20C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r3,376(r31)
	PPC_STORE_U8(ctx.r31.u32 + 376, ctx.r3.u8);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// bne cr6,0x8226c1f0
	if (!ctx.cr6.eq) goto loc_8226C1F0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,348(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// bl 0x82265898
	ctx.lr = 0x8226C1E8;
	sub_82265898(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8226c200
	goto loc_8226C200;
loc_8226C1F0:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,352(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// bl 0x82265898
	ctx.lr = 0x8226C1FC;
	sub_82265898(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8226C200:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226c20c
	if (ctx.cr6.eq) goto loc_8226C20C;
	// bl 0x82581e38
	ctx.lr = 0x8226C20C;
	sub_82581E38(ctx, base);
loc_8226C20C:
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

__attribute__((alias("__imp__sub_8226C220"))) PPC_WEAK_FUNC(sub_8226C220);
PPC_FUNC_IMPL(__imp__sub_8226C220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8226C228;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82265bf0
	ctx.lr = 0x8226C238;
	sub_82265BF0(ctx, base);
	// addi r29,r31,372
	ctx.r29.s64 = ctx.r31.s64 + 372;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226c254
	if (ctx.cr6.eq) goto loc_8226C254;
	// bl 0x82581e38
	ctx.lr = 0x8226C254;
	sub_82581E38(ctx, base);
loc_8226C254:
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// addi r11,r11,-54
	ctx.r11.s64 = ctx.r11.s64 + -54;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8226c2ec
	if (ctx.cr6.gt) goto loc_8226C2EC;
	// lis r12,-32217
	ctx.r12.s64 = -2111373312;
	// addi r12,r12,-15748
	ctx.r12.s64 = ctx.r12.s64 + -15748;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8226C290;
	case 1:
		goto loc_8226C2B4;
	case 2:
		goto loc_8226C290;
	case 3:
		goto loc_8226C2CC;
	case 4:
		goto loc_8226C2CC;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-15728(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15728);
	// lwz r17,-15692(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15692);
	// lwz r17,-15728(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15728);
	// lwz r17,-15668(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15668);
	// lwz r17,-15668(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15668);
loc_8226C290:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,336(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82265898
	ctx.lr = 0x8226C2A0;
	sub_82265898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823032b8
	ctx.lr = 0x8226C2AC;
	sub_823032B8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8226c2e0
	goto loc_8226C2E0;
loc_8226C2B4:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,344(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82265898
	ctx.lr = 0x8226C2C4;
	sub_82265898(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8226c2e0
	goto loc_8226C2E0;
loc_8226C2CC:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,324(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82265898
	ctx.lr = 0x8226C2DC;
	sub_82265898(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_8226C2E0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226c2ec
	if (ctx.cr6.eq) goto loc_8226C2EC;
	// bl 0x82581e38
	ctx.lr = 0x8226C2EC;
	sub_82581E38(ctx, base);
loc_8226C2EC:
	// addi r11,r28,-32
	ctx.r11.s64 = ctx.r28.s64 + -32;
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// bgt cr6,0x8226c4b4
	if (ctx.cr6.gt) goto loc_8226C4B4;
	// lis r12,-32217
	ctx.r12.s64 = -2111373312;
	// addi r12,r12,-15600
	ctx.r12.s64 = ctx.r12.s64 + -15600;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8226C464;
	case 1:
		goto loc_8226C4B4;
	case 2:
		goto loc_8226C4B4;
	case 3:
		goto loc_8226C47C;
	case 4:
		goto loc_8226C494;
	case 5:
		goto loc_8226C4B4;
	case 6:
		goto loc_8226C4B4;
	case 7:
		goto loc_8226C3A4;
	case 8:
		goto loc_8226C3A4;
	case 9:
		goto loc_8226C428;
	case 10:
		goto loc_8226C4B4;
	case 11:
		goto loc_8226C4B4;
	case 12:
		goto loc_8226C3A4;
	case 13:
		goto loc_8226C4B4;
	case 14:
		goto loc_8226C4B4;
	case 15:
		goto loc_8226C3A4;
	case 16:
		goto loc_8226C428;
	case 17:
		goto loc_8226C4B4;
	case 18:
		goto loc_8226C4B4;
	case 19:
		goto loc_8226C4B4;
	case 20:
		goto loc_8226C4B4;
	case 21:
		goto loc_8226C4B4;
	case 22:
		goto loc_8226C4B4;
	case 23:
		goto loc_8226C4B4;
	case 24:
		goto loc_8226C4B4;
	case 25:
		goto loc_8226C4B4;
	case 26:
		goto loc_8226C4B4;
	case 27:
		goto loc_8226C4B4;
	case 28:
		goto loc_8226C4B4;
	case 29:
		goto loc_8226C4B4;
	case 30:
		goto loc_8226C4B4;
	case 31:
		goto loc_8226C3A4;
	case 32:
		goto loc_8226C3A4;
	case 33:
		goto loc_8226C3EC;
	case 34:
		goto loc_8226C3EC;
	case 35:
		goto loc_8226C3EC;
	case 36:
		goto loc_8226C3EC;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-15260(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15260);
	// lwz r17,-15180(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15180);
	// lwz r17,-15180(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15180);
	// lwz r17,-15236(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15236);
	// lwz r17,-15212(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15212);
	// lwz r17,-15180(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15180);
	// lwz r17,-15180(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15180);
	// lwz r17,-15452(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15452);
	// lwz r17,-15452(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15452);
	// lwz r17,-15320(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15320);
	// lwz r17,-15180(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15180);
	// lwz r17,-15180(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15180);
	// lwz r17,-15452(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15452);
	// lwz r17,-15180(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15180);
	// lwz r17,-15180(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15180);
	// lwz r17,-15452(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15452);
	// lwz r17,-15320(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15320);
	// lwz r17,-15180(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15180);
	// lwz r17,-15180(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15180);
	// lwz r17,-15180(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15180);
	// lwz r17,-15180(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15180);
	// lwz r17,-15180(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15180);
	// lwz r17,-15180(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15180);
	// lwz r17,-15180(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15180);
	// lwz r17,-15180(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15180);
	// lwz r17,-15180(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15180);
	// lwz r17,-15180(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15180);
	// lwz r17,-15180(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15180);
	// lwz r17,-15180(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15180);
	// lwz r17,-15180(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15180);
	// lwz r17,-15180(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15180);
	// lwz r17,-15452(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15452);
	// lwz r17,-15452(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15452);
	// lwz r17,-15380(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15380);
	// lwz r17,-15380(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15380);
	// lwz r17,-15380(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15380);
	// lwz r17,-15380(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -15380);
loc_8226C3A4:
	// addi r30,r31,-32
	ctx.r30.s64 = ctx.r31.s64 + -32;
	// lwz r5,340(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82265898
	ctx.lr = 0x8226C3B8;
	sub_82265898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823032b8
	ctx.lr = 0x8226C3C4;
	sub_823032B8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226c3d4
	if (ctx.cr6.eq) goto loc_8226C3D4;
	// bl 0x82581e38
	ctx.lr = 0x8226C3D4;
	sub_82581E38(ctx, base);
loc_8226C3D4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,364(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82265898
	ctx.lr = 0x8226C3E4;
	sub_82265898(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x8226c4a8
	goto loc_8226C4A8;
loc_8226C3EC:
	// addi r30,r31,-32
	ctx.r30.s64 = ctx.r31.s64 + -32;
	// lwz r5,308(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82265898
	ctx.lr = 0x8226C400;
	sub_82265898(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226c410
	if (ctx.cr6.eq) goto loc_8226C410;
	// bl 0x82581e38
	ctx.lr = 0x8226C410;
	sub_82581E38(ctx, base);
loc_8226C410:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,356(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82265898
	ctx.lr = 0x8226C420;
	sub_82265898(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x8226c4a8
	goto loc_8226C4A8;
loc_8226C428:
	// addi r30,r31,-32
	ctx.r30.s64 = ctx.r31.s64 + -32;
	// lwz r5,308(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82265898
	ctx.lr = 0x8226C43C;
	sub_82265898(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226c44c
	if (ctx.cr6.eq) goto loc_8226C44C;
	// bl 0x82581e38
	ctx.lr = 0x8226C44C;
	sub_82581E38(ctx, base);
loc_8226C44C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,360(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82265898
	ctx.lr = 0x8226C45C;
	sub_82265898(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x8226c4a8
	goto loc_8226C4A8;
loc_8226C464:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,316(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82265898
	ctx.lr = 0x8226C474;
	sub_82265898(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x8226c4a8
	goto loc_8226C4A8;
loc_8226C47C:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,328(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82265898
	ctx.lr = 0x8226C48C;
	sub_82265898(ctx, base);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// b 0x8226c4a8
	goto loc_8226C4A8;
loc_8226C494:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r5,332(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82265898
	ctx.lr = 0x8226C4A4;
	sub_82265898(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_8226C4A8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226c4b4
	if (ctx.cr6.eq) goto loc_8226C4B4;
	// bl 0x82581e38
	ctx.lr = 0x8226C4B4;
	sub_82581E38(ctx, base);
loc_8226C4B4:
	// stw r28,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r28.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226C4C0"))) PPC_WEAK_FUNC(sub_8226C4C0);
PPC_FUNC_IMPL(__imp__sub_8226C4C0) {
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
	// beq cr6,0x8226c57c
	if (ctx.cr6.eq) goto loc_8226C57C;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8226c57c
	if (ctx.cr6.eq) goto loc_8226C57C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8226c508
	if (ctx.cr6.lt) goto loc_8226C508;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8226c50c
	goto loc_8226C50C;
loc_8226C508:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8226C50C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226c57c
	if (ctx.cr6.eq) goto loc_8226C57C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,13988
	ctx.r10.s64 = ctx.r10.s64 + 13988;
loc_8226C51C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8226c540
	if (ctx.cr6.eq) goto loc_8226C540;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8226c51c
	if (ctx.cr6.eq) goto loc_8226C51C;
loc_8226C540:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8226c57c
	if (!ctx.cr6.eq) goto loc_8226C57C;
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
	ctx.lr = 0x8226C560;
	sub_8221D210(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x8221f3c8
	ctx.lr = 0x8226C56C;
	sub_8221F3C8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226c57c
	if (ctx.cr6.eq) goto loc_8226C57C;
	// bl 0x821601b8
	ctx.lr = 0x8226C57C;
	sub_821601B8(ctx, base);
loc_8226C57C:
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

__attribute__((alias("__imp__sub_8226C590"))) PPC_WEAK_FUNC(sub_8226C590);
PPC_FUNC_IMPL(__imp__sub_8226C590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8226C598;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82266678
	ctx.lr = 0x8226C5A8;
	sub_82266678(ctx, base);
	// addi r30,r31,336
	ctx.r30.s64 = ctx.r31.s64 + 336;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221ed78
	ctx.lr = 0x8226C5B4;
	sub_8221ED78(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r10,r11,1188
	ctx.r10.s64 = ctx.r11.s64 + 1188;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r31,340
	ctx.r29.s64 = ctx.r31.s64 + 340;
	// addi r9,r11,1108
	ctx.r9.s64 = ctx.r11.s64 + 1108;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r6,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r6.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r8,r11,1092
	ctx.r8.s64 = ctx.r11.s64 + 1092;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// addi r28,r10,968
	ctx.r28.s64 = ctx.r10.s64 + 968;
	// addi r7,r11,956
	ctx.r7.s64 = ctx.r11.s64 + 956;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// stw r11,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// stb r11,408(r31)
	PPC_STORE_U8(ctx.r31.u32 + 408, ctx.r11.u8);
	// stw r11,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r11.u32);
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
loc_8226C610:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8226c620
	if (!ctx.cr6.eq) goto loc_8226C620;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8226C620:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82265810
	ctx.lr = 0x8226C62C;
	sub_82265810(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r11,r28,120
	ctx.r11.s64 = ctx.r28.s64 + 120;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8226c610
	if (!ctx.cr6.eq) goto loc_8226C610;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226C650"))) PPC_WEAK_FUNC(sub_8226C650);
PPC_FUNC_IMPL(__imp__sub_8226C650) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-56
	ctx.r3.s64 = ctx.r3.s64 + -56;
	// b 0x8226c660
	sub_8226C660(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226C658"))) PPC_WEAK_FUNC(sub_8226C658);
PPC_FUNC_IMPL(__imp__sub_8226C658) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x8226c660
	sub_8226C660(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226C660"))) PPC_WEAK_FUNC(sub_8226C660);
PPC_FUNC_IMPL(__imp__sub_8226C660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226c68c
	if (ctx.cr6.eq) goto loc_8226C68C;
	// bl 0x821601b8
	ctx.lr = 0x8226C68C;
	sub_821601B8(ctx, base);
loc_8226C68C:
	// lwz r3,404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226c69c
	if (ctx.cr6.eq) goto loc_8226C69C;
	// bl 0x82581e38
	ctx.lr = 0x8226C69C;
	sub_82581E38(ctx, base);
loc_8226C69C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// bne cr6,0x8226c6ac
	if (!ctx.cr6.eq) goto loc_8226C6AC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226C6AC:
	// bl 0x8221ed78
	ctx.lr = 0x8226C6B0;
	sub_8221ED78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822667a0
	ctx.lr = 0x8226C6B8;
	sub_822667A0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226c6d0
	if (ctx.cr6.eq) goto loc_8226C6D0;
	// bl 0x82186190
	ctx.lr = 0x8226C6CC;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8226C6D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226C6E8"))) PPC_WEAK_FUNC(sub_8226C6E8);
PPC_FUNC_IMPL(__imp__sub_8226C6E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r11,r11,1392
	ctx.r11.s64 = ctx.r11.s64 + 1392;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8226c71c
	if (ctx.cr6.eq) goto loc_8226C71C;
	// bl 0x82186190
	ctx.lr = 0x8226C718;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8226C71C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226C730"))) PPC_WEAK_FUNC(sub_8226C730);
PPC_FUNC_IMPL(__imp__sub_8226C730) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// b 0x82581100
	sub_82581100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226C740"))) PPC_WEAK_FUNC(sub_8226C740);
PPC_FUNC_IMPL(__imp__sub_8226C740) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8226c750
	if (!ctx.cr6.eq) goto loc_8226C750;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// blr 
	return;
loc_8226C750:
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r3,r11,-4608
	ctx.r3.s64 = ctx.r11.s64 + -4608;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226C760"))) PPC_WEAK_FUNC(sub_8226C760);
PPC_FUNC_IMPL(__imp__sub_8226C760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lfs f1,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226C790"))) PPC_WEAK_FUNC(sub_8226C790);
PPC_FUNC_IMPL(__imp__sub_8226C790) {
	PPC_FUNC_PROLOGUE();
	// ld r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226C798"))) PPC_WEAK_FUNC(sub_8226C798);
PPC_FUNC_IMPL(__imp__sub_8226C798) {
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
	// addi r31,r3,84
	ctx.r31.s64 = ctx.r3.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581100
	ctx.lr = 0x8226C7B8;
	sub_82581100(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226c808
	if (ctx.cr6.eq) goto loc_8226C808;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,12313
	ctx.r11.u64 = ctx.r11.u64 | 12313;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82615d60
	ctx.lr = 0x8226C7E0;
	sub_82615D60(ctx, base);
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
	ctx.lr = 0x8226C7F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8226c80c
	if (!ctx.cr6.eq) goto loc_8226C80C;
loc_8226C808:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226C80C:
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

__attribute__((alias("__imp__sub_8226C820"))) PPC_WEAK_FUNC(sub_8226C820);
PPC_FUNC_IMPL(__imp__sub_8226C820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8226C828;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r31,r11,-4608
	ctx.r31.s64 = ctx.r11.s64 + -4608;
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r30,r11,-4576
	ctx.r30.s64 = ctx.r11.s64 + -4576;
	// beq cr6,0x8226c8c0
	if (ctx.cr6.eq) goto loc_8226C8C0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// lvx128 v0,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r10,r10,7
	ctx.r10.u64 = ctx.r10.u64 | 7;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226C88C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226c8c0
	if (ctx.cr6.eq) goto loc_8226C8C0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r29,16
	ctx.r11.s64 = ctx.r29.s64 + 16;
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_8226C8C0:
	// addi r11,r29,16
	ctx.r11.s64 = ctx.r29.s64 + 16;
	// lvx128 v0,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lvx128 v0,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226C8E0"))) PPC_WEAK_FUNC(sub_8226C8E0);
PPC_FUNC_IMPL(__imp__sub_8226C8E0) {
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
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226c95c
	if (ctx.cr6.eq) goto loc_8226C95C;
	// lis r10,-32072
	ctx.r10.s64 = -2101870592;
	// lvx128 v13,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r10,r10,-4576
	ctx.r10.s64 = ctx.r10.s64 + -4576;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-4608
	ctx.r11.s64 = ctx.r11.s64 + -4608;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,12291
	ctx.r11.u64 = ctx.r11.u64 | 12291;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226C95C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8226C95C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226C970"))) PPC_WEAK_FUNC(sub_8226C970);
PPC_FUNC_IMPL(__imp__sub_8226C970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8226c9e4
	if (!ctx.cr6.eq) goto loc_8226C9E4;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,2384
	ctx.r6.s64 = ctx.r11.s64 + 2384;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// addi r5,r11,2500
	ctx.r5.s64 = ctx.r11.s64 + 2500;
	// bl 0x826df418
	ctx.lr = 0x8226C9A8;
	sub_826DF418(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x82581608
	ctx.lr = 0x8226C9B4;
	sub_82581608(ctx, base);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226c9e4
	if (ctx.cr6.eq) goto loc_8226C9E4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226c9e4
	if (ctx.cr6.eq) goto loc_8226C9E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226C9E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8226C9E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226C9F8"))) PPC_WEAK_FUNC(sub_8226C9F8);
PPC_FUNC_IMPL(__imp__sub_8226C9F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8226CA00;
	__savegprlr_29(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r30,84
	ctx.r29.s64 = ctx.r30.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82581100
	ctx.lr = 0x8226CA1C;
	sub_82581100(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226cbb0
	if (ctx.cr6.eq) goto loc_8226CBB0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595090
	ctx.lr = 0x8226CA30;
	sub_82595090(ctx, base);
	// lwz r4,148(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8226ca78
	if (ctx.cr6.eq) goto loc_8226CA78;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226ca78
	if (ctx.cr6.eq) goto loc_8226CA78;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226CA64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825951f0
	ctx.lr = 0x8226CA70;
	sub_825951F0(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82595180
	ctx.lr = 0x8226CA78;
	sub_82595180(ctx, base);
loc_8226CA78:
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,12312
	ctx.r11.u64 = ctx.r11.u64 | 12312;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// bl 0x82615d60
	ctx.lr = 0x8226CA94;
	sub_82615D60(ctx, base);
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
	ctx.lr = 0x8226CAAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226cbac
	if (ctx.cr6.eq) goto loc_8226CBAC;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82595500
	ctx.lr = 0x8226CACC;
	sub_82595500(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226cb7c
	if (ctx.cr6.eq) goto loc_8226CB7C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8226c820
	ctx.lr = 0x8226CAE4;
	sub_8226C820(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d3bc8
	ctx.lr = 0x8226CB18;
	sub_825D3BC8(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x825d2200
	ctx.lr = 0x8226CB20;
	sub_825D2200(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226CB38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x825d3bc8
	ctx.lr = 0x8226CB48;
	sub_825D3BC8(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x825d2200
	ctx.lr = 0x8226CB50;
	sub_825D2200(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226CB68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595180
	ctx.lr = 0x8226CB70;
	sub_82595180(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_8226CB7C:
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82595180
	ctx.lr = 0x8226CBA0;
	sub_82595180(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_8226CBAC:
	// bl 0x82595180
	ctx.lr = 0x8226CBB0;
	sub_82595180(ctx, base);
loc_8226CBB0:
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,-4608
	ctx.r11.s64 = ctx.r11.s64 + -4608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// stvx v0,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,-4576
	ctx.r11.s64 = ctx.r11.s64 + -4576;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226CBE0"))) PPC_WEAK_FUNC(sub_8226CBE0);
PPC_FUNC_IMPL(__imp__sub_8226CBE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x8226CBE8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r4,r11,-31140
	ctx.r4.s64 = ctx.r11.s64 + -31140;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x8221f1b8
	ctx.lr = 0x8226CC04;
	sub_8221F1B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,36
	ctx.r30.s64 = ctx.r31.s64 + 36;
	// addi r11,r11,1392
	ctx.r11.s64 = ctx.r11.s64 + 1392;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x8221edd8
	ctx.lr = 0x8226CC1C;
	sub_8221EDD8(ctx, base);
	// addi r29,r31,40
	ctx.r29.s64 = ctx.r31.s64 + 40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221ed78
	ctx.lr = 0x8226CC28;
	sub_8221ED78(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r28,r31,48
	ctx.r28.s64 = ctx.r31.s64 + 48;
	// addi r11,r11,14116
	ctx.r11.s64 = ctx.r11.s64 + 14116;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bl 0x82223500
	ctx.lr = 0x8226CC40;
	sub_82223500(ctx, base);
	// addi r27,r31,72
	ctx.r27.s64 = ctx.r31.s64 + 72;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8221ed98
	ctx.lr = 0x8226CC4C;
	sub_8221ED98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r11,r11,1500
	ctx.r11.s64 = ctx.r11.s64 + 1500;
	// addi r10,r10,1484
	ctx.r10.s64 = ctx.r10.s64 + 1484;
	// addi r9,r9,1472
	ctx.r9.s64 = ctx.r9.s64 + 1472;
	// addi r8,r8,1460
	ctx.r8.s64 = ctx.r8.s64 + 1460;
	// addi r7,r7,1452
	ctx.r7.s64 = ctx.r7.s64 + 1452;
	// addi r6,r6,1420
	ctx.r6.s64 = ctx.r6.s64 + 1420;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r5,r5,1408
	ctx.r5.s64 = ctx.r5.s64 + 1408;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// stw r6,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r6.u32);
	// stw r5,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r5.u32);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// beq cr6,0x8226ccb4
	if (ctx.cr6.eq) goto loc_8226CCB4;
	// bl 0x82659610
	ctx.lr = 0x8226CCB4;
	sub_82659610(ctx, base);
loc_8226CCB4:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// bl 0x82595090
	ctx.lr = 0x8226CCC4;
	sub_82595090(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// std r30,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r30.u64);
	// addi r10,r31,112
	ctx.r10.s64 = ctx.r31.s64 + 112;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// ori r5,r5,19552
	ctx.r5.u64 = ctx.r5.u64 | 19552;
	// lfs f0,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// addi r11,r11,-4608
	ctx.r11.s64 = ctx.r11.s64 + -4608;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stb r30,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r30.u8);
	// bl 0x821f0778
	ctx.lr = 0x8226CD08;
	sub_821F0778(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
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
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226CD38"))) PPC_WEAK_FUNC(sub_8226CD38);
PPC_FUNC_IMPL(__imp__sub_8226CD38) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x8226ce88
	sub_8226CE88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226CD40"))) PPC_WEAK_FUNC(sub_8226CD40);
PPC_FUNC_IMPL(__imp__sub_8226CD40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-36
	ctx.r3.s64 = ctx.r3.s64 + -36;
	// b 0x8226ce88
	sub_8226CE88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226CD48"))) PPC_WEAK_FUNC(sub_8226CD48);
PPC_FUNC_IMPL(__imp__sub_8226CD48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x8226ce88
	sub_8226CE88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226CD50"))) PPC_WEAK_FUNC(sub_8226CD50);
PPC_FUNC_IMPL(__imp__sub_8226CD50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-72
	ctx.r3.s64 = ctx.r3.s64 + -72;
	// b 0x8226ce88
	sub_8226CE88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226CD58"))) PPC_WEAK_FUNC(sub_8226CD58);
PPC_FUNC_IMPL(__imp__sub_8226CD58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-48
	ctx.r3.s64 = ctx.r3.s64 + -48;
	// b 0x8226ce88
	sub_8226CE88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226CD60"))) PPC_WEAK_FUNC(sub_8226CD60);
PPC_FUNC_IMPL(__imp__sub_8226CD60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226cd84
	if (ctx.cr6.eq) goto loc_8226CD84;
	// bl 0x821601b8
	ctx.lr = 0x8226CD84;
	sub_821601B8(ctx, base);
loc_8226CD84:
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226cd94
	if (ctx.cr6.eq) goto loc_8226CD94;
	// bl 0x82581e38
	ctx.lr = 0x8226CD94;
	sub_82581E38(ctx, base);
loc_8226CD94:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226cda8
	if (ctx.cr6.eq) goto loc_8226CDA8;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8226CDA8:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226cdbc
	if (ctx.cr6.eq) goto loc_8226CDBC;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8226CDBC:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226cdcc
	if (ctx.cr6.eq) goto loc_8226CDCC;
	// bl 0x82581e38
	ctx.lr = 0x8226CDCC;
	sub_82581E38(ctx, base);
loc_8226CDCC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bne cr6,0x8226cddc
	if (!ctx.cr6.eq) goto loc_8226CDDC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226CDDC:
	// bl 0x8221ed98
	ctx.lr = 0x8226CDE0;
	sub_8221ED98(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// bne cr6,0x8226cdf0
	if (!ctx.cr6.eq) goto loc_8226CDF0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8226CDF0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8226ce04
	if (ctx.cr6.eq) goto loc_8226CE04;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_8226CE04:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8226ce18
	if (ctx.cr6.eq) goto loc_8226CE18;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_8226CE18:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r10,r10,7884
	ctx.r10.s64 = ctx.r10.s64 + 7884;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x8226ce34
	if (!ctx.cr6.eq) goto loc_8226CE34;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226CE34:
	// bl 0x8221ed78
	ctx.lr = 0x8226CE38;
	sub_8221ED78(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bne cr6,0x8226ce48
	if (!ctx.cr6.eq) goto loc_8226CE48;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226CE48:
	// bl 0x8221edd8
	ctx.lr = 0x8226CE4C;
	sub_8221EDD8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// bne cr6,0x8226ce5c
	if (!ctx.cr6.eq) goto loc_8226CE5C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8226CE5C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1392
	ctx.r11.s64 = ctx.r11.s64 + 1392;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x8221f0e8
	ctx.lr = 0x8226CE70;
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

__attribute__((alias("__imp__sub_8226CE88"))) PPC_WEAK_FUNC(sub_8226CE88);
PPC_FUNC_IMPL(__imp__sub_8226CE88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8226cd60
	ctx.lr = 0x8226CEA8;
	sub_8226CD60(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226cec0
	if (ctx.cr6.eq) goto loc_8226CEC0;
	// bl 0x82186190
	ctx.lr = 0x8226CEBC;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8226CEC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226CED8"))) PPC_WEAK_FUNC(sub_8226CED8);
PPC_FUNC_IMPL(__imp__sub_8226CED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x8226CEE0;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// std r26,68(r31)
	PPC_STORE_U64(ctx.r31.u32 + 68, ctx.r26.u64);
	// stw r26,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r26.u32);
	// bl 0x82581100
	ctx.lr = 0x8226CF08;
	sub_82581100(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226d3a8
	if (ctx.cr6.eq) goto loc_8226D3A8;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226d3a8
	if (ctx.cr6.eq) goto loc_8226D3A8;
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 68);
	// rldicr r12,r12,39,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 39) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,68(r31)
	PPC_STORE_U64(ctx.r31.u32 + 68, ctx.r11.u64);
	// lbz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8226cf54
	if (!ctx.cr6.eq) goto loc_8226CF54;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,-36
	ctx.r3.s64 = ctx.r31.s64 + -36;
	// stb r11,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r11.u8);
	// bl 0x8226c798
	ctx.lr = 0x8226CF50;
	sub_8226C798(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
loc_8226CF54:
	// addi r30,r31,-36
	ctx.r30.s64 = ctx.r31.s64 + -36;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8226c820
	ctx.lr = 0x8226CF64;
	sub_8226C820(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8226c9f8
	ctx.lr = 0x8226CF70;
	sub_8226C9F8(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d3bc8
	ctx.lr = 0x8226CFA0;
	sub_825D3BC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,196(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// bl 0x825d22a0
	ctx.lr = 0x8226CFB4;
	sub_825D22A0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lfs f0,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// ble cr6,0x8226d000
	if (!ctx.cr6.gt) goto loc_8226D000;
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8226c8e0
	ctx.lr = 0x8226CFE4;
	sub_8226C8E0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lfs f0,5592(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5592);
	ctx.f0.f64 = double(temp.f32);
	// ori r11,r10,4
	ctx.r11.u64 = ctx.r10.u64 | 4;
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x8226d03c
	goto loc_8226D03C;
loc_8226D000:
	// lfs f0,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// ble cr6,0x8226d01c
	if (!ctx.cr6.gt) goto loc_8226D01C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// b 0x8226d03c
	goto loc_8226D03C;
loc_8226D01C:
	// lfs f0,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// ble cr6,0x8226d038
	if (!ctx.cr6.gt) goto loc_8226D038;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5592(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5592);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// b 0x8226d03c
	goto loc_8226D03C;
loc_8226D038:
	// stfs f31,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
loc_8226D03C:
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r30,r11,31184
	ctx.r30.s64 = ctx.r11.s64 + 31184;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,31200
	ctx.r4.s64 = ctx.r11.s64 + 31200;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821e8778
	ctx.lr = 0x8226D05C;
	sub_821E8778(ctx, base);
	// addi r11,r31,76
	ctx.r11.s64 = ctx.r31.s64 + 76;
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226d3a8
	if (ctx.cr6.eq) goto loc_8226D3A8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226d3a8
	if (ctx.cr6.eq) goto loc_8226D3A8;
	// addi r11,r31,132
	ctx.r11.s64 = ctx.r31.s64 + 132;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x8226d098
	if (ctx.cr6.lt) goto loc_8226D098;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8226D098:
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r4,240
	ctx.r11.s64 = ctx.r4.s64 + 240;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8223b970
	ctx.lr = 0x8226D0B8;
	sub_8223B970(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r29,r1,432
	ctx.r29.s64 = ctx.r1.s64 + 432;
	// li r28,2
	ctx.r28.s64 = 2;
	// addi r27,r11,31840
	ctx.r27.s64 = ctx.r11.s64 + 31840;
loc_8226D0C8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825957e8
	ctx.lr = 0x8226D0D0;
	sub_825957E8(ctx, base);
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// bl 0x82595090
	ctx.lr = 0x8226D0DC;
	sub_82595090(ctx, base);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge cr6,0x8226d0c8
	if (!ctx.cr6.lt) goto loc_8226D0C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f31,13952(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13952);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825d2350
	ctx.lr = 0x8226D104;
	sub_825D2350(ctx, base);
	// addi r5,r1,528
	ctx.r5.s64 = ctx.r1.s64 + 528;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x825d3bb0
	ctx.lr = 0x8226D114;
	sub_825D3BB0(ctx, base);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825d2350
	ctx.lr = 0x8226D124;
	sub_825D2350(ctx, base);
	// addi r5,r1,560
	ctx.r5.s64 = ctx.r1.s64 + 560;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x825d3bb0
	ctx.lr = 0x8226D134;
	sub_825D3BB0(ctx, base);
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226D170;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f31,-10492(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10492);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825d2350
	ctx.lr = 0x8226D188;
	sub_825D2350(ctx, base);
	// addi r5,r1,592
	ctx.r5.s64 = ctx.r1.s64 + 592;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x825d3bb0
	ctx.lr = 0x8226D198;
	sub_825D3BB0(ctx, base);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825d2350
	ctx.lr = 0x8226D1A8;
	sub_825D2350(ctx, base);
	// addi r5,r1,544
	ctx.r5.s64 = ctx.r1.s64 + 544;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x825d3bb0
	ctx.lr = 0x8226D1B8;
	sub_825D3BB0(ctx, base);
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r5,r1,460
	ctx.r5.s64 = ctx.r1.s64 + 460;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226D1F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f31,1504(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1504);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825d2350
	ctx.lr = 0x8226D20C;
	sub_825D2350(ctx, base);
	// addi r5,r1,576
	ctx.r5.s64 = ctx.r1.s64 + 576;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x825d3bb0
	ctx.lr = 0x8226D21C;
	sub_825D3BB0(ctx, base);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825d2350
	ctx.lr = 0x8226D22C;
	sub_825D2350(ctx, base);
	// addi r5,r1,608
	ctx.r5.s64 = ctx.r1.s64 + 608;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825d3bb0
	ctx.lr = 0x8226D23C;
	sub_825D3BB0(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r5,r1,488
	ctx.r5.s64 = ctx.r1.s64 + 488;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,400
	ctx.r11.s64 = ctx.r1.s64 + 400;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,416
	ctx.r11.s64 = ctx.r1.s64 + 416;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226D278;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,440
	ctx.r3.s64 = ctx.r1.s64 + 440;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// bl 0x82595500
	ctx.lr = 0x8226D288;
	sub_82595500(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226d2cc
	if (ctx.cr6.eq) goto loc_8226D2CC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,468
	ctx.r3.s64 = ctx.r1.s64 + 468;
	// bl 0x82595500
	ctx.lr = 0x8226D2A4;
	sub_82595500(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226d2cc
	if (ctx.cr6.eq) goto loc_8226D2CC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82595500
	ctx.lr = 0x8226D2C0;
	sub_82595500(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8226d380
	if (!ctx.cr6.eq) goto loc_8226D380;
loc_8226D2CC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,440
	ctx.r3.s64 = ctx.r1.s64 + 440;
	// bl 0x82595500
	ctx.lr = 0x8226D2DC;
	sub_82595500(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226d320
	if (ctx.cr6.eq) goto loc_8226D320;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,468
	ctx.r3.s64 = ctx.r1.s64 + 468;
	// bl 0x82595500
	ctx.lr = 0x8226D2F8;
	sub_82595500(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226d320
	if (ctx.cr6.eq) goto loc_8226D320;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x825953d0
	ctx.lr = 0x8226D314;
	sub_825953D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8226d374
	if (!ctx.cr6.eq) goto loc_8226D374;
loc_8226D320:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,440
	ctx.r3.s64 = ctx.r1.s64 + 440;
	// bl 0x82595500
	ctx.lr = 0x8226D330;
	sub_82595500(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226d380
	if (ctx.cr6.eq) goto loc_8226D380;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,468
	ctx.r3.s64 = ctx.r1.s64 + 468;
	// bl 0x825953d0
	ctx.lr = 0x8226D34C;
	sub_825953D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226d380
	if (ctx.cr6.eq) goto loc_8226D380;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x825953d0
	ctx.lr = 0x8226D368;
	sub_825953D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226d380
	if (ctx.cr6.eq) goto loc_8226D380;
loc_8226D374:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8226D380:
	// addi r31,r1,516
	ctx.r31.s64 = ctx.r1.s64 + 516;
	// li r30,2
	ctx.r30.s64 = 2;
loc_8226D388:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82595180
	ctx.lr = 0x8226D394;
	sub_82595180(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825960c0
	ctx.lr = 0x8226D39C;
	sub_825960C0(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x8226d388
	if (!ctx.cr6.lt) goto loc_8226D388;
loc_8226D3A8:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226D3B8"))) PPC_WEAK_FUNC(sub_8226D3B8);
PPC_FUNC_IMPL(__imp__sub_8226D3B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8226D3C0;
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
	// beq cr6,0x8226d53c
	if (ctx.cr6.eq) goto loc_8226D53C;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8226d53c
	if (ctx.cr6.eq) goto loc_8226D53C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8226d400
	if (ctx.cr6.lt) goto loc_8226D400;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8226d404
	goto loc_8226D404;
loc_8226D400:
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_8226D404:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8226d53c
	if (ctx.cr6.eq) goto loc_8226D53C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-32764
	ctx.r10.s64 = ctx.r11.s64 + -32764;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8226D418:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8226d43c
	if (ctx.cr6.eq) goto loc_8226D43C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8226d418
	if (ctx.cr6.eq) goto loc_8226D418;
loc_8226D43C:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8226d49c
	if (!ctx.cr6.eq) goto loc_8226D49C;
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
	// bl 0x821ebcc0
	ctx.lr = 0x8226D460;
	sub_821EBCC0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226d48c
	if (ctx.cr6.eq) goto loc_8226D48C;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8226d48c
	if (ctx.cr6.eq) goto loc_8226D48C;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x821609d0
	ctx.lr = 0x8226D488;
	sub_821609D0(ctx, base);
	// stw r3,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r3.u32);
loc_8226D48C:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226d49c
	if (ctx.cr6.eq) goto loc_8226D49C;
	// bl 0x821601b8
	ctx.lr = 0x8226D49C;
	sub_821601B8(ctx, base);
loc_8226D49C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,1508
	ctx.r10.s64 = ctx.r11.s64 + 1508;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8226D4A8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8226d4cc
	if (ctx.cr6.eq) goto loc_8226D4CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8226d4a8
	if (ctx.cr6.eq) goto loc_8226D4A8;
loc_8226D4CC:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8226d53c
	if (!ctx.cr6.eq) goto loc_8226D53C;
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
	// bl 0x821f3978
	ctx.lr = 0x8226D4EC;
	sub_821F3978(ctx, base);
	// addi r31,r28,108
	ctx.r31.s64 = ctx.r28.s64 + 108;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221f3c8
	ctx.lr = 0x8226D4FC;
	sub_8221F3C8(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226d50c
	if (ctx.cr6.eq) goto loc_8226D50C;
	// bl 0x821601b8
	ctx.lr = 0x8226D50C;
	sub_821601B8(ctx, base);
loc_8226D50C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226d53c
	if (ctx.cr6.eq) goto loc_8226D53C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226d53c
	if (ctx.cr6.eq) goto loc_8226D53C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226D53C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8226D53C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226D548"))) PPC_WEAK_FUNC(sub_8226D548);
PPC_FUNC_IMPL(__imp__sub_8226D548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8226D550;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
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
	// addi r4,r11,1584
	ctx.r4.s64 = ctx.r11.s64 + 1584;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r5,17
	ctx.r5.s64 = 17;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x8226D588;
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
	ctx.lr = 0x8226D5A0;
	sub_821EA350(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f1,112(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 112, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8226d5b8
	if (ctx.cr6.lt) goto loc_8226D5B8;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x8226D5B8;
	sub_82186190(ctx, base);
loc_8226D5B8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// li r5,18
	ctx.r5.s64 = 18;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r4,r11,1564
	ctx.r4.s64 = ctx.r11.s64 + 1564;
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
	ctx.lr = 0x8226D5E4;
	sub_82161E08(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x8226D5F4;
	sub_821EA350(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stfs f1,116(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 116, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8226d60c
	if (ctx.cr6.lt) goto loc_8226D60C;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82186190
	ctx.lr = 0x8226D60C;
	sub_82186190(ctx, base);
loc_8226D60C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// li r5,17
	ctx.r5.s64 = 17;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r4,r11,1544
	ctx.r4.s64 = ctx.r11.s64 + 1544;
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
	ctx.lr = 0x8226D638;
	sub_82161E08(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x8226D648;
	sub_821EA350(ctx, base);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stfs f1,120(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 120, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8226d660
	if (ctx.cr6.lt) goto loc_8226D660;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82186190
	ctx.lr = 0x8226D660;
	sub_82186190(ctx, base);
loc_8226D660:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// li r5,18
	ctx.r5.s64 = 18;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// addi r4,r11,1524
	ctx.r4.s64 = ctx.r11.s64 + 1524;
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
	ctx.lr = 0x8226D68C;
	sub_82161E08(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ea350
	ctx.lr = 0x8226D69C;
	sub_821EA350(ctx, base);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stfs f1,124(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 124, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8226d6b4
	if (ctx.cr6.lt) goto loc_8226D6B4;
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x82186190
	ctx.lr = 0x8226D6B4;
	sub_82186190(ctx, base);
loc_8226D6B4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226D6C0"))) PPC_WEAK_FUNC(sub_8226D6C0);
PPC_FUNC_IMPL(__imp__sub_8226D6C0) {
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
	// addi r31,r3,104
	ctx.r31.s64 = ctx.r3.s64 + 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581100
	ctx.lr = 0x8226D6E0;
	sub_82581100(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226d730
	if (ctx.cr6.eq) goto loc_8226D730;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,12301
	ctx.r11.u64 = ctx.r11.u64 | 12301;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// bl 0x82615d60
	ctx.lr = 0x8226D708;
	sub_82615D60(ctx, base);
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
	ctx.lr = 0x8226D720;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lbz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8226d734
	if (!ctx.cr6.eq) goto loc_8226D734;
loc_8226D730:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226D734:
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

__attribute__((alias("__imp__sub_8226D748"))) PPC_WEAK_FUNC(sub_8226D748);
PPC_FUNC_IMPL(__imp__sub_8226D748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lfs f1,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226D778"))) PPC_WEAK_FUNC(sub_8226D778);
PPC_FUNC_IMPL(__imp__sub_8226D778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8226D780;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,-31140
	ctx.r4.s64 = ctx.r11.s64 + -31140;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8221f1b8
	ctx.lr = 0x8226D798;
	sub_8221F1B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r31,36
	ctx.r29.s64 = ctx.r31.s64 + 36;
	// addi r11,r11,1392
	ctx.r11.s64 = ctx.r11.s64 + 1392;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x8221edd8
	ctx.lr = 0x8226D7B0;
	sub_8221EDD8(ctx, base);
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8221ed78
	ctx.lr = 0x8226D7BC;
	sub_8221ED78(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r27,r31,48
	ctx.r27.s64 = ctx.r31.s64 + 48;
	// addi r11,r11,14116
	ctx.r11.s64 = ctx.r11.s64 + 14116;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bl 0x82223500
	ctx.lr = 0x8226D7D4;
	sub_82223500(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r11,r11,1688
	ctx.r11.s64 = ctx.r11.s64 + 1688;
	// addi r9,r9,1672
	ctx.r9.s64 = ctx.r9.s64 + 1672;
	// addi r8,r8,1660
	ctx.r8.s64 = ctx.r8.s64 + 1660;
	// addi r7,r7,1648
	ctx.r7.s64 = ctx.r7.s64 + 1648;
	// addi r6,r6,1640
	ctx.r6.s64 = ctx.r6.s64 + 1640;
	// addi r5,r5,1608
	ctx.r5.s64 = ctx.r5.s64 + 1608;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// addi r10,r31,72
	ctx.r10.s64 = ctx.r31.s64 + 72;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// stw r7,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r7.u32);
	// stw r6,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
	// stw r5,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r5.u32);
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
	// beq cr6,0x8226d844
	if (ctx.cr6.eq) goto loc_8226D844;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8226D844:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// bl 0x82595090
	ctx.lr = 0x8226D868;
	sub_82595090(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r31,128
	ctx.r10.s64 = ctx.r31.s64 + 128;
	// lfs f0,4956(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4956);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// addi r11,r11,-4608
	ctx.r11.s64 = ctx.r11.s64 + -4608;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r29,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r29.u32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// lfs f13,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,144(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226d8c8
	if (ctx.cr6.eq) goto loc_8226D8C8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne 0x8226d8c8
	if (!ctx.cr0.eq) goto loc_8226D8C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226D8C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8226D8C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226D8D8"))) PPC_WEAK_FUNC(sub_8226D8D8);
PPC_FUNC_IMPL(__imp__sub_8226D8D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-48
	ctx.r3.s64 = ctx.r3.s64 + -48;
	// b 0x8226eb40
	sub_8226EB40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226D8E0"))) PPC_WEAK_FUNC(sub_8226D8E0);
PPC_FUNC_IMPL(__imp__sub_8226D8E0) {
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
	// addi r4,r31,72
	ctx.r4.s64 = ctx.r31.s64 + 72;
	// bl 0x8262b468
	ctx.lr = 0x8226D900;
	sub_8262B468(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226d9a4
	if (ctx.cr6.eq) goto loc_8226D9A4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226d9a4
	if (ctx.cr6.eq) goto loc_8226D9A4;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226d9a4
	if (ctx.cr6.eq) goto loc_8226D9A4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226d9a4
	if (ctx.cr6.eq) goto loc_8226D9A4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,20524
	ctx.r11.u64 = ctx.r11.u64 | 20524;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226D960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226d9a4
	if (ctx.cr6.eq) goto loc_8226D9A4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x821609d0
	ctx.lr = 0x8226D978;
	sub_821609D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226d98c
	if (ctx.cr6.eq) goto loc_8226D98C;
	// bl 0x821601b8
	ctx.lr = 0x8226D98C;
	sub_821601B8(ctx, base);
loc_8226D98C:
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
loc_8226D9A4:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226d9b4
	if (ctx.cr6.eq) goto loc_8226D9B4;
	// bl 0x821601b8
	ctx.lr = 0x8226D9B4;
	sub_821601B8(ctx, base);
loc_8226D9B4:
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

__attribute__((alias("__imp__sub_8226D9D0"))) PPC_WEAK_FUNC(sub_8226D9D0);
PPC_FUNC_IMPL(__imp__sub_8226D9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8226D9D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r31,68
	ctx.r29.s64 = ctx.r31.s64 + 68;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825810e8
	ctx.lr = 0x8226D9F0;
	sub_825810E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226da10
	if (ctx.cr6.eq) goto loc_8226DA10;
	// addi r3,r31,-36
	ctx.r3.s64 = ctx.r31.s64 + -36;
	// bl 0x8226d8e0
	ctx.lr = 0x8226DA04;
	sub_8226D8E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82581608
	ctx.lr = 0x8226DA10;
	sub_82581608(ctx, base);
loc_8226DA10:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r30,r10,7
	ctx.r30.u64 = ctx.r10.u64 | 7;
	// lfs f0,4956(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4956);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r28,r11,-4608
	ctx.r28.s64 = ctx.r11.s64 + -4608;
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r27,r11,-4576
	ctx.r27.s64 = ctx.r11.s64 + -4576;
	// beq cr6,0x8226daf0
	if (ctx.cr6.eq) goto loc_8226DAF0;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226daf0
	if (ctx.cr6.eq) goto loc_8226DAF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82581100
	ctx.lr = 0x8226DA5C;
	sub_82581100(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226daf0
	if (ctx.cr6.eq) goto loc_8226DAF0;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// lvx128 v0,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// lvx128 v0,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82615d60
	ctx.lr = 0x8226DA8C;
	sub_82615D60(ctx, base);
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
	ctx.lr = 0x8226DAA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226daf0
	if (ctx.cr6.eq) goto loc_8226DAF0;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 + 240;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d3bc8
	ctx.lr = 0x8226DAE4;
	sub_825D3BC8(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x825d2200
	ctx.lr = 0x8226DAEC;
	sub_825D2200(ctx, base);
	// stfs f1,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
loc_8226DAF0:
	// lfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8226db30
	if (!ctx.cr6.lt) goto loc_8226DB30;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226db30
	if (ctx.cr6.eq) goto loc_8226DB30;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,12290
	ctx.r11.u64 = ctx.r11.u64 | 12290;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226DB30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8226DB30:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82581100
	ctx.lr = 0x8226DB3C;
	sub_82581100(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226dc04
	if (ctx.cr6.eq) goto loc_8226DC04;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lvx128 v0,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lvx128 v0,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82615d60
	ctx.lr = 0x8226DB6C;
	sub_82615D60(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226DB84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226dc04
	if (ctx.cr6.eq) goto loc_8226DC04;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 + 240;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d3bc8
	ctx.lr = 0x8226DBC4;
	sub_825D3BC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,260(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// bl 0x825d2260
	ctx.lr = 0x8226DBDC;
	sub_825D2260(ctx, base);
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r11,31232
	ctx.r6.s64 = ctx.r11.s64 + 31232;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,31248
	ctx.r4.s64 = ctx.r11.s64 + 31248;
	// bl 0x821e8778
	ctx.lr = 0x8226DBF8;
	sub_821E8778(ctx, base);
	// addi r11,r31,92
	ctx.r11.s64 = ctx.r31.s64 + 92;
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8226DC04:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226DC10"))) PPC_WEAK_FUNC(sub_8226DC10);
PPC_FUNC_IMPL(__imp__sub_8226DC10) {
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
	// addi r4,r11,1692
	ctx.r4.s64 = ctx.r11.s64 + 1692;
	// li r11,15
	ctx.r11.s64 = 15;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,20
	ctx.r5.s64 = 20;
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
	ctx.lr = 0x8226DC54;
	sub_82161E08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,4956(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4956);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ea350
	ctx.lr = 0x8226DC68;
	sub_821EA350(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f1,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8226dc80
	if (ctx.cr6.lt) goto loc_8226DC80;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x8226DC80;
	sub_82186190(ctx, base);
loc_8226DC80:
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

__attribute__((alias("__imp__sub_8226DC98"))) PPC_WEAK_FUNC(sub_8226DC98);
PPC_FUNC_IMPL(__imp__sub_8226DC98) {
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
	// addi r31,r3,112
	ctx.r31.s64 = ctx.r3.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581100
	ctx.lr = 0x8226DCB8;
	sub_82581100(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226dd08
	if (ctx.cr6.eq) goto loc_8226DD08;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,12301
	ctx.r11.u64 = ctx.r11.u64 | 12301;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// bl 0x82615d60
	ctx.lr = 0x8226DCE0;
	sub_82615D60(ctx, base);
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
	ctx.lr = 0x8226DCF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lbz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8226dd0c
	if (!ctx.cr6.eq) goto loc_8226DD0C;
loc_8226DD08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226DD0C:
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

__attribute__((alias("__imp__sub_8226DD20"))) PPC_WEAK_FUNC(sub_8226DD20);
PPC_FUNC_IMPL(__imp__sub_8226DD20) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8226dd30
	if (!ctx.cr6.eq) goto loc_8226DD30;
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// blr 
	return;
loc_8226DD30:
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r3,r11,-4608
	ctx.r3.s64 = ctx.r11.s64 + -4608;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226DD40"))) PPC_WEAK_FUNC(sub_8226DD40);
PPC_FUNC_IMPL(__imp__sub_8226DD40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lfs f1,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226DD70"))) PPC_WEAK_FUNC(sub_8226DD70);
PPC_FUNC_IMPL(__imp__sub_8226DD70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8226DD78;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581100
	ctx.lr = 0x8226DD90;
	sub_82581100(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r30,r11,-4576
	ctx.r30.s64 = ctx.r11.s64 + -4576;
	// beq cr6,0x8226de08
	if (ctx.cr6.eq) goto loc_8226DE08;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,7
	ctx.r11.u64 = ctx.r11.u64 | 7;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r11,r11,-4608
	ctx.r11.s64 = ctx.r11.s64 + -4608;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82615d60
	ctx.lr = 0x8226DDD8;
	sub_82615D60(ctx, base);
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
	ctx.lr = 0x8226DDF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226de08
	if (ctx.cr6.eq) goto loc_8226DE08;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x8226de0c
	goto loc_8226DE0C;
loc_8226DE08:
	// lvx128 v0,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8226DE0C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stvx v0,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226de24
	if (ctx.cr6.eq) goto loc_8226DE24;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8226DE24:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226de38
	if (ctx.cr6.eq) goto loc_8226DE38;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8226DE38:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226DE48"))) PPC_WEAK_FUNC(sub_8226DE48);
PPC_FUNC_IMPL(__imp__sub_8226DE48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8226DE50;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,-31140
	ctx.r4.s64 = ctx.r11.s64 + -31140;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8221f1b8
	ctx.lr = 0x8226DE68;
	sub_8221F1B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r31,36
	ctx.r29.s64 = ctx.r31.s64 + 36;
	// addi r11,r11,1392
	ctx.r11.s64 = ctx.r11.s64 + 1392;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x8221edd8
	ctx.lr = 0x8226DE80;
	sub_8221EDD8(ctx, base);
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8221ed78
	ctx.lr = 0x8226DE8C;
	sub_8221ED78(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r27,r31,48
	ctx.r27.s64 = ctx.r31.s64 + 48;
	// addi r11,r11,14116
	ctx.r11.s64 = ctx.r11.s64 + 14116;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bl 0x82223500
	ctx.lr = 0x8226DEA4;
	sub_82223500(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r11,r11,1800
	ctx.r11.s64 = ctx.r11.s64 + 1800;
	// addi r9,r9,1784
	ctx.r9.s64 = ctx.r9.s64 + 1784;
	// addi r8,r8,1772
	ctx.r8.s64 = ctx.r8.s64 + 1772;
	// addi r7,r7,1760
	ctx.r7.s64 = ctx.r7.s64 + 1760;
	// addi r6,r6,1752
	ctx.r6.s64 = ctx.r6.s64 + 1752;
	// addi r5,r5,1720
	ctx.r5.s64 = ctx.r5.s64 + 1720;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// addi r10,r31,72
	ctx.r10.s64 = ctx.r31.s64 + 72;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// stw r7,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r7.u32);
	// stw r6,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
	// stw r5,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r5.u32);
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
	// beq cr6,0x8226df14
	if (ctx.cr6.eq) goto loc_8226DF14;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8226DF14:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// bl 0x82595090
	ctx.lr = 0x8226DF40;
	sub_82595090(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r31,144
	ctx.r10.s64 = ctx.r31.s64 + 144;
	// lfs f0,4956(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4956);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// addi r11,r11,-4608
	ctx.r11.s64 = ctx.r11.s64 + -4608;
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r29,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r29.u8);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// stw r29,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r29.u32);
	// lfs f13,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,160(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226dfa8
	if (ctx.cr6.eq) goto loc_8226DFA8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne 0x8226dfa8
	if (!ctx.cr0.eq) goto loc_8226DFA8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226DFA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8226DFA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226DFB8"))) PPC_WEAK_FUNC(sub_8226DFB8);
PPC_FUNC_IMPL(__imp__sub_8226DFB8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-48
	ctx.r3.s64 = ctx.r3.s64 + -48;
	// b 0x8226e138
	sub_8226E138(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226DFC0"))) PPC_WEAK_FUNC(sub_8226DFC0);
PPC_FUNC_IMPL(__imp__sub_8226DFC0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x8226e138
	sub_8226E138(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226DFC8"))) PPC_WEAK_FUNC(sub_8226DFC8);
PPC_FUNC_IMPL(__imp__sub_8226DFC8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-36
	ctx.r3.s64 = ctx.r3.s64 + -36;
	// b 0x8226e138
	sub_8226E138(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226DFD0"))) PPC_WEAK_FUNC(sub_8226DFD0);
PPC_FUNC_IMPL(__imp__sub_8226DFD0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x8226e138
	sub_8226E138(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226DFD8"))) PPC_WEAK_FUNC(sub_8226DFD8);
PPC_FUNC_IMPL(__imp__sub_8226DFD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226e000
	if (ctx.cr6.eq) goto loc_8226E000;
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8226E000:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226e014
	if (ctx.cr6.eq) goto loc_8226E014;
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8226E014:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226e024
	if (ctx.cr6.eq) goto loc_8226E024;
	// bl 0x821601b8
	ctx.lr = 0x8226E024;
	sub_821601B8(ctx, base);
loc_8226E024:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226e034
	if (ctx.cr6.eq) goto loc_8226E034;
	// bl 0x821601b8
	ctx.lr = 0x8226E034;
	sub_821601B8(ctx, base);
loc_8226E034:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226e044
	if (ctx.cr6.eq) goto loc_8226E044;
	// bl 0x821601b8
	ctx.lr = 0x8226E044;
	sub_821601B8(ctx, base);
loc_8226E044:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226e054
	if (ctx.cr6.eq) goto loc_8226E054;
	// bl 0x82581e38
	ctx.lr = 0x8226E054;
	sub_82581E38(ctx, base);
loc_8226E054:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226e064
	if (ctx.cr6.eq) goto loc_8226E064;
	// bl 0x82581e38
	ctx.lr = 0x8226E064;
	sub_82581E38(ctx, base);
loc_8226E064:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226e090
	if (ctx.cr6.eq) goto loc_8226E090;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne 0x8226e090
	if (!ctx.cr0.eq) goto loc_8226E090;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226E090;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8226E090:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// bne cr6,0x8226e0a0
	if (!ctx.cr6.eq) goto loc_8226E0A0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8226E0A0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8226e0b4
	if (ctx.cr6.eq) goto loc_8226E0B4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_8226E0B4:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8226e0c8
	if (ctx.cr6.eq) goto loc_8226E0C8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_8226E0C8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r10,r10,7884
	ctx.r10.s64 = ctx.r10.s64 + 7884;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x8226e0e4
	if (!ctx.cr6.eq) goto loc_8226E0E4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226E0E4:
	// bl 0x8221ed78
	ctx.lr = 0x8226E0E8;
	sub_8221ED78(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bne cr6,0x8226e0f8
	if (!ctx.cr6.eq) goto loc_8226E0F8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226E0F8:
	// bl 0x8221edd8
	ctx.lr = 0x8226E0FC;
	sub_8221EDD8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// bne cr6,0x8226e10c
	if (!ctx.cr6.eq) goto loc_8226E10C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8226E10C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1392
	ctx.r11.s64 = ctx.r11.s64 + 1392;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x8221f0e8
	ctx.lr = 0x8226E120;
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

__attribute__((alias("__imp__sub_8226E138"))) PPC_WEAK_FUNC(sub_8226E138);
PPC_FUNC_IMPL(__imp__sub_8226E138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8226dfd8
	ctx.lr = 0x8226E158;
	sub_8226DFD8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226e170
	if (ctx.cr6.eq) goto loc_8226E170;
	// bl 0x82186190
	ctx.lr = 0x8226E16C;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8226E170:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226E188"))) PPC_WEAK_FUNC(sub_8226E188);
PPC_FUNC_IMPL(__imp__sub_8226E188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8226E190;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226e374
	if (ctx.cr6.eq) goto loc_8226E374;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8226e374
	if (ctx.cr6.eq) goto loc_8226E374;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8226e1d0
	if (ctx.cr6.lt) goto loc_8226E1D0;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8226e1d4
	goto loc_8226E1D4;
loc_8226E1D0:
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_8226E1D4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8226e374
	if (ctx.cr6.eq) goto loc_8226E374;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-32764
	ctx.r10.s64 = ctx.r11.s64 + -32764;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8226E1E8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8226e20c
	if (ctx.cr6.eq) goto loc_8226E20C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8226e1e8
	if (ctx.cr6.eq) goto loc_8226E1E8;
loc_8226E20C:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8226e29c
	if (!ctx.cr6.eq) goto loc_8226E29C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x821ebcc0
	ctx.lr = 0x8226E230;
	sub_821EBCC0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226e28c
	if (ctx.cr6.eq) goto loc_8226E28C;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8226e28c
	if (ctx.cr6.eq) goto loc_8226E28C;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x823032b8
	ctx.lr = 0x8226E258;
	sub_823032B8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r29,44
	ctx.r3.s64 = ctx.r29.s64 + 44;
	// addi r4,r11,52
	ctx.r4.s64 = ctx.r11.s64 + 52;
	// bl 0x823032b8
	ctx.lr = 0x8226E268;
	sub_823032B8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r29,64
	ctx.r3.s64 = ctx.r29.s64 + 64;
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// bl 0x8221f3c8
	ctx.lr = 0x8226E278;
	sub_8221F3C8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x821609d0
	ctx.lr = 0x8226E288;
	sub_821609D0(ctx, base);
	// stw r3,132(r29)
	PPC_STORE_U32(ctx.r29.u32 + 132, ctx.r3.u32);
loc_8226E28C:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226e29c
	if (ctx.cr6.eq) goto loc_8226E29C;
	// bl 0x821601b8
	ctx.lr = 0x8226E29C;
	sub_821601B8(ctx, base);
loc_8226E29C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,32004
	ctx.r10.s64 = ctx.r11.s64 + 32004;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8226E2A8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8226e2cc
	if (ctx.cr6.eq) goto loc_8226E2CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8226e2a8
	if (ctx.cr6.eq) goto loc_8226E2A8;
loc_8226E2CC:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8226e308
	if (!ctx.cr6.eq) goto loc_8226E308;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x821f3978
	ctx.lr = 0x8226E2EC;
	sub_821F3978(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r29,48
	ctx.r3.s64 = ctx.r29.s64 + 48;
	// bl 0x8221f3c8
	ctx.lr = 0x8226E2F8;
	sub_8221F3C8(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226e308
	if (ctx.cr6.eq) goto loc_8226E308;
	// bl 0x821601b8
	ctx.lr = 0x8226E308;
	sub_821601B8(ctx, base);
loc_8226E308:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,1804
	ctx.r10.s64 = ctx.r11.s64 + 1804;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8226E314:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8226e338
	if (ctx.cr6.eq) goto loc_8226E338;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8226e314
	if (ctx.cr6.eq) goto loc_8226E314;
loc_8226E338:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8226e374
	if (!ctx.cr6.eq) goto loc_8226E374;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x821f3978
	ctx.lr = 0x8226E358;
	sub_821F3978(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r29,56
	ctx.r3.s64 = ctx.r29.s64 + 56;
	// bl 0x8221f3c8
	ctx.lr = 0x8226E364;
	sub_8221F3C8(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226e374
	if (ctx.cr6.eq) goto loc_8226E374;
	// bl 0x821601b8
	ctx.lr = 0x8226E374;
	sub_821601B8(ctx, base);
loc_8226E374:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226E380"))) PPC_WEAK_FUNC(sub_8226E380);
PPC_FUNC_IMPL(__imp__sub_8226E380) {
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
	// addi r4,r31,72
	ctx.r4.s64 = ctx.r31.s64 + 72;
	// bl 0x8262b468
	ctx.lr = 0x8226E3A0;
	sub_8262B468(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226e444
	if (ctx.cr6.eq) goto loc_8226E444;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226e444
	if (ctx.cr6.eq) goto loc_8226E444;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226e444
	if (ctx.cr6.eq) goto loc_8226E444;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226e444
	if (ctx.cr6.eq) goto loc_8226E444;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,20524
	ctx.r11.u64 = ctx.r11.u64 | 20524;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226E400;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226e444
	if (ctx.cr6.eq) goto loc_8226E444;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x821609d0
	ctx.lr = 0x8226E418;
	sub_821609D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226e42c
	if (ctx.cr6.eq) goto loc_8226E42C;
	// bl 0x821601b8
	ctx.lr = 0x8226E42C;
	sub_821601B8(ctx, base);
loc_8226E42C:
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
loc_8226E444:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226e454
	if (ctx.cr6.eq) goto loc_8226E454;
	// bl 0x821601b8
	ctx.lr = 0x8226E454;
	sub_821601B8(ctx, base);
loc_8226E454:
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

__attribute__((alias("__imp__sub_8226E470"))) PPC_WEAK_FUNC(sub_8226E470);
PPC_FUNC_IMPL(__imp__sub_8226E470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8226E478;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226e620
	if (ctx.cr6.eq) goto loc_8226E620;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226e620
	if (ctx.cr6.eq) goto loc_8226E620;
	// addi r30,r31,-36
	ctx.r30.s64 = ctx.r31.s64 + -36;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// bl 0x8226e380
	ctx.lr = 0x8226E4B4;
	sub_8226E380(ctx, base);
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8226e538
	if (ctx.cr6.eq) goto loc_8226E538;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226e538
	if (ctx.cr6.eq) goto loc_8226E538;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226E4EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x82595500
	ctx.lr = 0x8226E4FC;
	sub_82595500(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226e530
	if (ctx.cr6.eq) goto loc_8226E530;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82214520
	ctx.lr = 0x8226E510;
	sub_82214520(ctx, base);
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,2352
	ctx.r6.s64 = ctx.r11.s64 + 2352;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,2500
	ctx.r5.s64 = ctx.r11.s64 + 2500;
	// bl 0x826df418
	ctx.lr = 0x8226E52C;
	sub_826DF418(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8226E530:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82595180
	ctx.lr = 0x8226E538;
	sub_82595180(ctx, base);
loc_8226E538:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8226e5d8
	if (ctx.cr6.eq) goto loc_8226E5D8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8226e5d8
	if (ctx.cr6.eq) goto loc_8226E5D8;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 + 240;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825815d8
	ctx.lr = 0x8226E568;
	sub_825815D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8226dd70
	ctx.lr = 0x8226E578;
	sub_8226DD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x825d3bc8
	ctx.lr = 0x8226E588;
	sub_825D3BC8(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 + 240;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825815d8
	ctx.lr = 0x8226E5A8;
	sub_825815D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8226dd70
	ctx.lr = 0x8226E5B8;
	sub_8226DD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x825d3bc8
	ctx.lr = 0x8226E5C8;
	sub_825D3BC8(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x825d2200
	ctx.lr = 0x8226E5D0;
	sub_825D2200(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x825d2200
	ctx.lr = 0x8226E5D8;
	sub_825D2200(ctx, base);
loc_8226E5D8:
	// addi r30,r31,76
	ctx.r30.s64 = ctx.r31.s64 + 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825810e8
	ctx.lr = 0x8226E5E8;
	sub_825810E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226e620
	if (ctx.cr6.eq) goto loc_8226E620;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8226e614
	if (ctx.cr6.eq) goto loc_8226E614;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82581608
	ctx.lr = 0x8226E608;
	sub_82581608(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// b 0x8226e620
	goto loc_8226E620;
loc_8226E614:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82581608
	ctx.lr = 0x8226E61C;
	sub_82581608(ctx, base);
	// stb r27,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r27.u8);
loc_8226E620:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x8226e6dc
	if (ctx.cr6.eq) goto loc_8226E6DC;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226e6dc
	if (ctx.cr6.eq) goto loc_8226E6DC;
	// addi r30,r31,76
	ctx.r30.s64 = ctx.r31.s64 + 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82581100
	ctx.lr = 0x8226E654;
	sub_82581100(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226e6dc
	if (ctx.cr6.eq) goto loc_8226E6DC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825815f0
	ctx.lr = 0x8226E66C;
	sub_825815F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8226dd70
	ctx.lr = 0x8226E67C;
	sub_8226DD70(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 + 240;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d3bc8
	ctx.lr = 0x8226E6A0;
	sub_825D3BC8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfs f0,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x825d2200
	ctx.lr = 0x8226E6C8;
	sub_825D2200(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f1,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// bl 0x825d2200
	ctx.lr = 0x8226E6D4;
	sub_825D2200(ctx, base);
	// stfs f1,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// b 0x8226e6ec
	goto loc_8226E6EC;
loc_8226E6DC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,4956(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4956);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
loc_8226E6EC:
	// lfs f0,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8226e72c
	if (!ctx.cr6.lt) goto loc_8226E72C;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226e72c
	if (ctx.cr6.eq) goto loc_8226E72C;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// ori r11,r11,12290
	ctx.r11.u64 = ctx.r11.u64 | 12290;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226E72C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8226E72C:
	// addi r30,r31,76
	ctx.r30.s64 = ctx.r31.s64 + 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82581100
	ctx.lr = 0x8226E73C;
	sub_82581100(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226e7c0
	if (ctx.cr6.eq) goto loc_8226E7C0;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 + 240;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825815f0
	ctx.lr = 0x8226E768;
	sub_825815F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8226dd70
	ctx.lr = 0x8226E778;
	sub_8226DD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x825d3bc8
	ctx.lr = 0x8226E788;
	sub_825D3BC8(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f31,244(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// bl 0x825d2260
	ctx.lr = 0x8226E798;
	sub_825D2260(ctx, base);
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r11,31280
	ctx.r6.s64 = ctx.r11.s64 + 31280;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,31296
	ctx.r4.s64 = ctx.r11.s64 + 31296;
	// bl 0x821e8778
	ctx.lr = 0x8226E7B4;
	sub_821E8778(ctx, base);
	// addi r11,r31,108
	ctx.r11.s64 = ctx.r31.s64 + 108;
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8226E7C0:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226E7D0"))) PPC_WEAK_FUNC(sub_8226E7D0);
PPC_FUNC_IMPL(__imp__sub_8226E7D0) {
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
	// addi r4,r11,1692
	ctx.r4.s64 = ctx.r11.s64 + 1692;
	// li r11,15
	ctx.r11.s64 = 15;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,20
	ctx.r5.s64 = 20;
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
	ctx.lr = 0x8226E814;
	sub_82161E08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,4956(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4956);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ea350
	ctx.lr = 0x8226E828;
	sub_821EA350(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f1,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8226e840
	if (ctx.cr6.lt) goto loc_8226E840;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x8226E840;
	sub_82186190(ctx, base);
loc_8226E840:
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

__attribute__((alias("__imp__sub_8226E858"))) PPC_WEAK_FUNC(sub_8226E858);
PPC_FUNC_IMPL(__imp__sub_8226E858) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8226e868
	if (!ctx.cr6.eq) goto loc_8226E868;
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// blr 
	return;
loc_8226E868:
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r3,r11,-4608
	ctx.r3.s64 = ctx.r11.s64 + -4608;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226E878"))) PPC_WEAK_FUNC(sub_8226E878);
PPC_FUNC_IMPL(__imp__sub_8226E878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8226E880;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,-31140
	ctx.r4.s64 = ctx.r11.s64 + -31140;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8221f1b8
	ctx.lr = 0x8226E898;
	sub_8221F1B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r31,36
	ctx.r29.s64 = ctx.r31.s64 + 36;
	// addi r11,r11,1392
	ctx.r11.s64 = ctx.r11.s64 + 1392;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x8221edd8
	ctx.lr = 0x8226E8B0;
	sub_8221EDD8(ctx, base);
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8221ed78
	ctx.lr = 0x8226E8BC;
	sub_8221ED78(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r27,r31,48
	ctx.r27.s64 = ctx.r31.s64 + 48;
	// addi r11,r11,14116
	ctx.r11.s64 = ctx.r11.s64 + 14116;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bl 0x82223500
	ctx.lr = 0x8226E8D4;
	sub_82223500(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r11,r11,1900
	ctx.r11.s64 = ctx.r11.s64 + 1900;
	// addi r9,r9,1884
	ctx.r9.s64 = ctx.r9.s64 + 1884;
	// addi r8,r8,1872
	ctx.r8.s64 = ctx.r8.s64 + 1872;
	// addi r7,r7,1860
	ctx.r7.s64 = ctx.r7.s64 + 1860;
	// addi r6,r6,1852
	ctx.r6.s64 = ctx.r6.s64 + 1852;
	// addi r5,r5,1820
	ctx.r5.s64 = ctx.r5.s64 + 1820;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// addi r10,r31,72
	ctx.r10.s64 = ctx.r31.s64 + 72;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// stw r7,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r7.u32);
	// stw r6,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
	// stw r5,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r5.u32);
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
	// beq cr6,0x8226e944
	if (ctx.cr6.eq) goto loc_8226E944;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8226E944:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// bl 0x82595090
	ctx.lr = 0x8226E968;
	sub_82595090(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r31,128
	ctx.r10.s64 = ctx.r31.s64 + 128;
	// lfs f0,4956(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4956);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// addi r11,r11,-4608
	ctx.r11.s64 = ctx.r11.s64 + -4608;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r29,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r29.u32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// lfs f13,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,144(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226e9c8
	if (ctx.cr6.eq) goto loc_8226E9C8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne 0x8226e9c8
	if (!ctx.cr0.eq) goto loc_8226E9C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226E9C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8226E9C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226E9D8"))) PPC_WEAK_FUNC(sub_8226E9D8);
PPC_FUNC_IMPL(__imp__sub_8226E9D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x8226eb40
	sub_8226EB40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226E9E0"))) PPC_WEAK_FUNC(sub_8226E9E0);
PPC_FUNC_IMPL(__imp__sub_8226E9E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-36
	ctx.r3.s64 = ctx.r3.s64 + -36;
	// b 0x8226eb40
	sub_8226EB40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226E9E8"))) PPC_WEAK_FUNC(sub_8226E9E8);
PPC_FUNC_IMPL(__imp__sub_8226E9E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x8226eb40
	sub_8226EB40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226E9F0"))) PPC_WEAK_FUNC(sub_8226E9F0);
PPC_FUNC_IMPL(__imp__sub_8226E9F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226ea18
	if (ctx.cr6.eq) goto loc_8226EA18;
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8226EA18:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226ea2c
	if (ctx.cr6.eq) goto loc_8226EA2C;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8226EA2C:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226ea3c
	if (ctx.cr6.eq) goto loc_8226EA3C;
	// bl 0x821601b8
	ctx.lr = 0x8226EA3C;
	sub_821601B8(ctx, base);
loc_8226EA3C:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226ea4c
	if (ctx.cr6.eq) goto loc_8226EA4C;
	// bl 0x821601b8
	ctx.lr = 0x8226EA4C;
	sub_821601B8(ctx, base);
loc_8226EA4C:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226ea5c
	if (ctx.cr6.eq) goto loc_8226EA5C;
	// bl 0x82581e38
	ctx.lr = 0x8226EA5C;
	sub_82581E38(ctx, base);
loc_8226EA5C:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226ea6c
	if (ctx.cr6.eq) goto loc_8226EA6C;
	// bl 0x82581e38
	ctx.lr = 0x8226EA6C;
	sub_82581E38(ctx, base);
loc_8226EA6C:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226ea98
	if (ctx.cr6.eq) goto loc_8226EA98;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne 0x8226ea98
	if (!ctx.cr0.eq) goto loc_8226EA98;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226EA98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8226EA98:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// bne cr6,0x8226eaa8
	if (!ctx.cr6.eq) goto loc_8226EAA8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8226EAA8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8226eabc
	if (ctx.cr6.eq) goto loc_8226EABC;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_8226EABC:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8226ead0
	if (ctx.cr6.eq) goto loc_8226EAD0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_8226EAD0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r10,r10,7884
	ctx.r10.s64 = ctx.r10.s64 + 7884;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x8226eaec
	if (!ctx.cr6.eq) goto loc_8226EAEC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226EAEC:
	// bl 0x8221ed78
	ctx.lr = 0x8226EAF0;
	sub_8221ED78(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bne cr6,0x8226eb00
	if (!ctx.cr6.eq) goto loc_8226EB00;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226EB00:
	// bl 0x8221edd8
	ctx.lr = 0x8226EB04;
	sub_8221EDD8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// bne cr6,0x8226eb14
	if (!ctx.cr6.eq) goto loc_8226EB14;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8226EB14:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1392
	ctx.r11.s64 = ctx.r11.s64 + 1392;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x8221f0e8
	ctx.lr = 0x8226EB28;
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

__attribute__((alias("__imp__sub_8226EB40"))) PPC_WEAK_FUNC(sub_8226EB40);
PPC_FUNC_IMPL(__imp__sub_8226EB40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8226e9f0
	ctx.lr = 0x8226EB60;
	sub_8226E9F0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226eb78
	if (ctx.cr6.eq) goto loc_8226EB78;
	// bl 0x82186190
	ctx.lr = 0x8226EB74;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8226EB78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226EB90"))) PPC_WEAK_FUNC(sub_8226EB90);
PPC_FUNC_IMPL(__imp__sub_8226EB90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8226EB98;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226ed10
	if (ctx.cr6.eq) goto loc_8226ED10;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8226ed10
	if (ctx.cr6.eq) goto loc_8226ED10;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8226ebd8
	if (ctx.cr6.lt) goto loc_8226EBD8;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8226ebdc
	goto loc_8226EBDC;
loc_8226EBD8:
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_8226EBDC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8226ed10
	if (ctx.cr6.eq) goto loc_8226ED10;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-32764
	ctx.r10.s64 = ctx.r11.s64 + -32764;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8226EBF0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8226ec14
	if (ctx.cr6.eq) goto loc_8226EC14;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8226ebf0
	if (ctx.cr6.eq) goto loc_8226EBF0;
loc_8226EC14:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8226eca4
	if (!ctx.cr6.eq) goto loc_8226ECA4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x821ebcc0
	ctx.lr = 0x8226EC38;
	sub_821EBCC0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226ec94
	if (ctx.cr6.eq) goto loc_8226EC94;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8226ec94
	if (ctx.cr6.eq) goto loc_8226EC94;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x823032b8
	ctx.lr = 0x8226EC60;
	sub_823032B8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r29,44
	ctx.r3.s64 = ctx.r29.s64 + 44;
	// addi r4,r11,52
	ctx.r4.s64 = ctx.r11.s64 + 52;
	// bl 0x823032b8
	ctx.lr = 0x8226EC70;
	sub_823032B8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r29,56
	ctx.r3.s64 = ctx.r29.s64 + 56;
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// bl 0x8221f3c8
	ctx.lr = 0x8226EC80;
	sub_8221F3C8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x821609d0
	ctx.lr = 0x8226EC90;
	sub_821609D0(ctx, base);
	// stw r3,112(r29)
	PPC_STORE_U32(ctx.r29.u32 + 112, ctx.r3.u32);
loc_8226EC94:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226eca4
	if (ctx.cr6.eq) goto loc_8226ECA4;
	// bl 0x821601b8
	ctx.lr = 0x8226ECA4;
	sub_821601B8(ctx, base);
loc_8226ECA4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,32004
	ctx.r10.s64 = ctx.r11.s64 + 32004;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8226ECB0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8226ecd4
	if (ctx.cr6.eq) goto loc_8226ECD4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8226ecb0
	if (ctx.cr6.eq) goto loc_8226ECB0;
loc_8226ECD4:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8226ed10
	if (!ctx.cr6.eq) goto loc_8226ED10;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x821f3978
	ctx.lr = 0x8226ECF4;
	sub_821F3978(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r29,48
	ctx.r3.s64 = ctx.r29.s64 + 48;
	// bl 0x8221f3c8
	ctx.lr = 0x8226ED00;
	sub_8221F3C8(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226ed10
	if (ctx.cr6.eq) goto loc_8226ED10;
	// bl 0x821601b8
	ctx.lr = 0x8226ED10;
	sub_821601B8(ctx, base);
loc_8226ED10:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226ED18"))) PPC_WEAK_FUNC(sub_8226ED18);
PPC_FUNC_IMPL(__imp__sub_8226ED18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8226ED20;
	__savegprlr_27(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r31,68
	ctx.r29.s64 = ctx.r31.s64 + 68;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825810e8
	ctx.lr = 0x8226ED38;
	sub_825810E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226ed58
	if (ctx.cr6.eq) goto loc_8226ED58;
	// addi r3,r31,-36
	ctx.r3.s64 = ctx.r31.s64 + -36;
	// bl 0x8226d8e0
	ctx.lr = 0x8226ED4C;
	sub_8226D8E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82581608
	ctx.lr = 0x8226ED58;
	sub_82581608(ctx, base);
loc_8226ED58:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r30,r10,7
	ctx.r30.u64 = ctx.r10.u64 | 7;
	// lfs f0,4956(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4956);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r28,r11,-4608
	ctx.r28.s64 = ctx.r11.s64 + -4608;
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r27,r11,-4576
	ctx.r27.s64 = ctx.r11.s64 + -4576;
	// beq cr6,0x8226ee38
	if (ctx.cr6.eq) goto loc_8226EE38;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226ee38
	if (ctx.cr6.eq) goto loc_8226EE38;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82581100
	ctx.lr = 0x8226EDA4;
	sub_82581100(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226ee38
	if (ctx.cr6.eq) goto loc_8226EE38;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// lvx128 v0,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// lvx128 v0,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82615d60
	ctx.lr = 0x8226EDD4;
	sub_82615D60(ctx, base);
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
	ctx.lr = 0x8226EDEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226ee38
	if (ctx.cr6.eq) goto loc_8226EE38;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 + 240;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d3bc8
	ctx.lr = 0x8226EE2C;
	sub_825D3BC8(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x825d2200
	ctx.lr = 0x8226EE34;
	sub_825D2200(ctx, base);
	// stfs f1,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
loc_8226EE38:
	// lfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8226ee78
	if (!ctx.cr6.lt) goto loc_8226EE78;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226ee78
	if (ctx.cr6.eq) goto loc_8226EE78;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,12290
	ctx.r11.u64 = ctx.r11.u64 | 12290;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226EE78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8226EE78:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82581100
	ctx.lr = 0x8226EE84;
	sub_82581100(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226ef4c
	if (ctx.cr6.eq) goto loc_8226EF4C;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lvx128 v0,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lvx128 v0,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82615d60
	ctx.lr = 0x8226EEB4;
	sub_82615D60(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226EECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226ef4c
	if (ctx.cr6.eq) goto loc_8226EF4C;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 + 240;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d3bc8
	ctx.lr = 0x8226EF0C;
	sub_825D3BC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,260(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// bl 0x825d2260
	ctx.lr = 0x8226EF24;
	sub_825D2260(ctx, base);
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r11,31328
	ctx.r6.s64 = ctx.r11.s64 + 31328;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,31344
	ctx.r4.s64 = ctx.r11.s64 + 31344;
	// bl 0x821e8778
	ctx.lr = 0x8226EF40;
	sub_821E8778(ctx, base);
	// addi r11,r31,92
	ctx.r11.s64 = ctx.r31.s64 + 92;
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8226EF4C:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226EF58"))) PPC_WEAK_FUNC(sub_8226EF58);
PPC_FUNC_IMPL(__imp__sub_8226EF58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f0,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f0,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f0,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f0,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f0,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f0,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f0,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f0,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f0,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f0,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f0,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f0,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f0,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f0,80(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lfs f0,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lfs f0,88(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// lfs f0,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lfs f0,96(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f0,100(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lfs f0,104(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// lfs f0,108(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// lfs f0,112(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226F048"))) PPC_WEAK_FUNC(sub_8226F048);
PPC_FUNC_IMPL(__imp__sub_8226F048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,92(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226F050"))) PPC_WEAK_FUNC(sub_8226F050);
PPC_FUNC_IMPL(__imp__sub_8226F050) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x825d6160
	ctx.lr = 0x8226F078;
	sub_825D6160(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8226f0b0
	if (ctx.cr6.eq) goto loc_8226F0B0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5418
	ctx.lr = 0x8226F08C;
	sub_825D5418(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8226f0a4
	if (ctx.cr6.eq) goto loc_8226F0A4;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d55b0
	ctx.lr = 0x8226F0A0;
	sub_825D55B0(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
loc_8226F0A4:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d51c0
	ctx.lr = 0x8226F0B0;
	sub_825D51C0(ctx, base);
loc_8226F0B0:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
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

__attribute__((alias("__imp__sub_8226F0D0"))) PPC_WEAK_FUNC(sub_8226F0D0);
PPC_FUNC_IMPL(__imp__sub_8226F0D0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f13,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bl 0x825d5918
	ctx.lr = 0x8226F118;
	sub_825D5918(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d5b30
	ctx.lr = 0x8226F124;
	sub_825D5B30(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d5368
	ctx.lr = 0x8226F130;
	sub_825D5368(ctx, base);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x8226f170
	if (!ctx.cr6.eq) goto loc_8226F170;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d5870
	ctx.lr = 0x8226F140;
	sub_825D5870(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8226f050
	ctx.lr = 0x8226F148;
	sub_8226F050(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// bl 0x8226f050
	ctx.lr = 0x8226F154;
	sub_8226F050(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// bl 0x8226f050
	ctx.lr = 0x8226F160;
	sub_8226F050(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// bl 0x825d51c0
	ctx.lr = 0x8226F170;
	sub_825D51C0(ctx, base);
loc_8226F170:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d51c0
	ctx.lr = 0x8226F17C;
	sub_825D51C0(ctx, base);
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

__attribute__((alias("__imp__sub_8226F198"))) PPC_WEAK_FUNC(sub_8226F198);
PPC_FUNC_IMPL(__imp__sub_8226F198) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8226f1f0
	if (ctx.cr6.eq) goto loc_8226F1F0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// twllei r31,0
	// divwu r11,r11,r31
	ctx.r11.u32 = ctx.r11.u32 / ctx.r31.u32;
	// cmplwi cr6,r11,116
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 116, ctx.xer);
	// bge cr6,0x8226f1f0
	if (!ctx.cr6.lt) goto loc_8226F1F0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82160c28
	ctx.lr = 0x8226F1E4;
	sub_82160C28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,2220
	ctx.r11.s64 = ctx.r11.s64 + 2220;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8226F1F0:
	// mulli r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 * 116;
	// bl 0x82186158
	ctx.lr = 0x8226F1F8;
	sub_82186158(ctx, base);
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

__attribute__((alias("__imp__sub_8226F210"))) PPC_WEAK_FUNC(sub_8226F210);
PPC_FUNC_IMPL(__imp__sub_8226F210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8226F218;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,-29379
	ctx.r10.s64 = -1925382144;
	// subf r11,r3,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r3.s64;
	// ori r10,r10,51977
	ctx.r10.u64 = ctx.r10.u64 | 51977;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mulhw r10,r11,r10
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32)) >> 32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r11,r11,116
	ctx.r11.s64 = ctx.r11.s64 * 116;
	// add r28,r11,r5
	ctx.r28.u64 = ctx.r11.u64 + ctx.r5.u64;
	// beq cr6,0x8226f274
	if (ctx.cr6.eq) goto loc_8226F274;
	// subf r29,r3,r5
	ctx.r29.s64 = ctx.r5.s64 - ctx.r3.s64;
loc_8226F258:
	// add r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 + ctx.r31.u64;
	// li r5,116
	ctx.r5.s64 = 116;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826df680
	ctx.lr = 0x8226F268;
	sub_826DF680(ctx, base);
	// addi r31,r31,116
	ctx.r31.s64 = ctx.r31.s64 + 116;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8226f258
	if (!ctx.cr6.eq) goto loc_8226F258;
loc_8226F274:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226F280"))) PPC_WEAK_FUNC(sub_8226F280);
PPC_FUNC_IMPL(__imp__sub_8226F280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8226F288;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,-29379
	ctx.r10.s64 = -1925382144;
	// subf r11,r30,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r30.s64;
	// ori r10,r10,51977
	ctx.r10.u64 = ctx.r10.u64 | 51977;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mulhw r10,r11,r10
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32)) >> 32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r11,r11,116
	ctx.r11.s64 = ctx.r11.s64 * 116;
	// subf r28,r11,r5
	ctx.r28.s64 = ctx.r5.s64 - ctx.r11.s64;
	// beq cr6,0x8226f2e4
	if (ctx.cr6.eq) goto loc_8226F2E4;
	// subf r29,r4,r5
	ctx.r29.s64 = ctx.r5.s64 - ctx.r4.s64;
loc_8226F2C8:
	// addi r31,r31,-116
	ctx.r31.s64 = ctx.r31.s64 + -116;
	// li r5,116
	ctx.r5.s64 = 116;
	// add r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826df680
	ctx.lr = 0x8226F2DC;
	sub_826DF680(ctx, base);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8226f2c8
	if (!ctx.cr6.eq) goto loc_8226F2C8;
loc_8226F2E4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226F2F0"))) PPC_WEAK_FUNC(sub_8226F2F0);
PPC_FUNC_IMPL(__imp__sub_8226F2F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x8226f308
	sub_8226F308(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226F2F8"))) PPC_WEAK_FUNC(sub_8226F2F8);
PPC_FUNC_IMPL(__imp__sub_8226F2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,1904
	ctx.r3.s64 = ctx.r11.s64 + 1904;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226F308"))) PPC_WEAK_FUNC(sub_8226F308);
PPC_FUNC_IMPL(__imp__sub_8226F308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,1940
	ctx.r11.s64 = ctx.r11.s64 + 1940;
	// addi r10,r10,1928
	ctx.r10.s64 = ctx.r10.s64 + 1928;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// beq cr6,0x8226f35c
	if (ctx.cr6.eq) goto loc_8226F35C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226F35C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8226F35C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581670
	ctx.lr = 0x8226F364;
	sub_82581670(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226f37c
	if (ctx.cr6.eq) goto loc_8226F37C;
	// bl 0x82186190
	ctx.lr = 0x8226F378;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8226F37C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226F398"))) PPC_WEAK_FUNC(sub_8226F398);
PPC_FUNC_IMPL(__imp__sub_8226F398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8226F3A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,1956
	ctx.r11.s64 = ctx.r11.s64 + 1956;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// stw r31,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r31.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r10,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r10.u8);
	// stb r29,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r29.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x825b4a48
	ctx.lr = 0x8226F3DC;
	sub_825B4A48(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226f400
	if (ctx.cr6.eq) goto loc_8226F400;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226F3FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
loc_8226F400:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226F418"))) PPC_WEAK_FUNC(sub_8226F418);
PPC_FUNC_IMPL(__imp__sub_8226F418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226f458
	if (ctx.cr6.eq) goto loc_8226F458;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226F454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_8226F458:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226f478
	if (ctx.cr6.eq) goto loc_8226F478;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8226F478:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226f48c
	if (ctx.cr6.eq) goto loc_8226F48C;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8226F48C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,7884
	ctx.r11.s64 = ctx.r11.s64 + 7884;
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

__attribute__((alias("__imp__sub_8226F4B0"))) PPC_WEAK_FUNC(sub_8226F4B0);
PPC_FUNC_IMPL(__imp__sub_8226F4B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8226f418
	ctx.lr = 0x8226F4D0;
	sub_8226F418(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226f4e8
	if (ctx.cr6.eq) goto loc_8226F4E8;
	// bl 0x82186190
	ctx.lr = 0x8226F4E4;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8226F4E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226F500"))) PPC_WEAK_FUNC(sub_8226F500);
PPC_FUNC_IMPL(__imp__sub_8226F500) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8226F51C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8226f51c
	if (!ctx.cr6.eq) goto loc_8226F51C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8216a080
	ctx.lr = 0x8226F548;
	sub_8216A080(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
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
}

__attribute__((alias("__imp__sub_8226F568"))) PPC_WEAK_FUNC(sub_8226F568);
PPC_FUNC_IMPL(__imp__sub_8226F568) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8226F584:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8226f584
	if (!ctx.cr6.eq) goto loc_8226F584;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8216a080
	ctx.lr = 0x8226F5B0;
	sub_8216A080(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
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
}

__attribute__((alias("__imp__sub_8226F5D8"))) PPC_WEAK_FUNC(sub_8226F5D8);
PPC_FUNC_IMPL(__imp__sub_8226F5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8226F5E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r29,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r29.u64);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226f610
	if (ctx.cr6.eq) goto loc_8226F610;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8226f614
	if (ctx.cr6.eq) goto loc_8226F614;
loc_8226F610:
	// twi 31,r0,22
loc_8226F614:
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// subf r11,r5,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r5.s64;
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
	// beq cr6,0x8226f660
	if (ctx.cr6.eq) goto loc_8226F660;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// bl 0x8226f210
	ctx.lr = 0x8226F65C;
	sub_8226F210(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_8226F660:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r29,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r29.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226F670"))) PPC_WEAK_FUNC(sub_8226F670);
PPC_FUNC_IMPL(__imp__sub_8226F670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8226F678;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8226f6bc
	if (ctx.cr6.eq) goto loc_8226F6BC;
loc_8226F698:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8226f6ac
	if (ctx.cr6.eq) goto loc_8226F6AC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226ef58
	ctx.lr = 0x8226F6AC;
	sub_8226EF58(ctx, base);
loc_8226F6AC:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,116
	ctx.r31.s64 = ctx.r31.s64 + 116;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8226f698
	if (!ctx.cr6.eq) goto loc_8226F698;
loc_8226F6BC:
	// mulli r11,r29,116
	ctx.r11.s64 = ctx.r29.s64 * 116;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226F6D0"))) PPC_WEAK_FUNC(sub_8226F6D0);
PPC_FUNC_IMPL(__imp__sub_8226F6D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b4
	ctx.lr = 0x8226F6D8;
	__savegprlr_23(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r4,328(r1)
	PPC_STORE_U64(ctx.r1.u32 + 328, ctx.r4.u64);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// bl 0x8226ef58
	ctx.lr = 0x8226F6F4;
	sub_8226EF58(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-29379
	ctx.r10.s64 = -1925382144;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ori r28,r10,51977
	ctx.r28.u64 = ctx.r10.u64 | 51977;
	// bne cr6,0x8226f710
	if (!ctx.cr6.eq) goto loc_8226F710;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x8226f72c
	goto loc_8226F72C;
loc_8226F710:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mulhw r9,r10,r28
	ctx.r9.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32)) >> 32;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r10,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 6;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8226F72C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8226fa84
	if (ctx.cr6.eq) goto loc_8226FA84;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8226f744
	if (!ctx.cr6.eq) goto loc_8226F744;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8226f760
	goto loc_8226F760;
loc_8226F744:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mulhw r9,r10,r28
	ctx.r9.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32)) >> 32;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r10,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 6;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8226F760:
	// lis r9,564
	ctx.r9.s64 = 36962304;
	// ori r8,r9,63276
	ctx.r8.u64 = ctx.r9.u64 | 63276;
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplw cr6,r10,r23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x8226f780
	if (!ctx.cr6.lt) goto loc_8226F780;
	// bl 0x8231c3a8
	ctx.lr = 0x8226F778;
	sub_8231C3A8(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
loc_8226F780:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8226f790
	if (!ctx.cr6.eq) goto loc_8226F790;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8226f7ac
	goto loc_8226F7AC;
loc_8226F790:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mulhw r9,r10,r28
	ctx.r9.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32)) >> 32;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r10,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 6;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8226F7AC:
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + ctx.r23.u64;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8226f928
	if (!ctx.cr6.lt) goto loc_8226F928;
	// rlwinm r10,r7,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// li r24,0
	ctx.r24.s64 = 0;
	// subf r9,r10,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8226f7d0
	if (ctx.cr6.lt) goto loc_8226F7D0;
	// add r24,r10,r7
	ctx.r24.u64 = ctx.r10.u64 + ctx.r7.u64;
loc_8226F7D0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8226f7e0
	if (!ctx.cr6.eq) goto loc_8226F7E0;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8226f7fc
	goto loc_8226F7FC;
loc_8226F7E0:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mulhw r9,r10,r28
	ctx.r9.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32)) >> 32;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r10,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 6;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8226F7FC:
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + ctx.r23.u64;
	// cmplw cr6,r24,r10
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8226f830
	if (!ctx.cr6.lt) goto loc_8226F830;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226f82c
	if (ctx.cr6.eq) goto loc_8226F82C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mulhw r10,r11,r28
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32)) >> 32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8226F82C:
	// add r24,r11,r23
	ctx.r24.u64 = ctx.r11.u64 + ctx.r23.u64;
loc_8226F830:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8226f198
	ctx.lr = 0x8226F83C;
	sub_8226F198(ctx, base);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r27,332(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// beq cr6,0x8226f878
	if (ctx.cr6.eq) goto loc_8226F878;
loc_8226F854:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8226f868
	if (ctx.cr6.eq) goto loc_8226F868;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8226ef58
	ctx.lr = 0x8226F868;
	sub_8226EF58(ctx, base);
loc_8226F868:
	// addi r30,r30,116
	ctx.r30.s64 = ctx.r30.s64 + 116;
	// addi r29,r29,116
	ctx.r29.s64 = ctx.r29.s64 + 116;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8226f854
	if (!ctx.cr6.eq) goto loc_8226F854;
loc_8226F878:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226f670
	ctx.lr = 0x8226F88C;
	sub_8226F670(ctx, base);
	// lwz r26,8(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x8226f8c4
	if (ctx.cr6.eq) goto loc_8226F8C4;
	// subf r29,r3,r27
	ctx.r29.s64 = ctx.r27.s64 - ctx.r3.s64;
loc_8226F8A0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8226f8b4
	if (ctx.cr6.eq) goto loc_8226F8B4;
	// add r4,r29,r30
	ctx.r4.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8226ef58
	ctx.lr = 0x8226F8B4;
	sub_8226EF58(ctx, base);
loc_8226F8B4:
	// addi r30,r30,116
	ctx.r30.s64 = ctx.r30.s64 + 116;
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8226f8a0
	if (!ctx.cr6.eq) goto loc_8226F8A0;
loc_8226F8C4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8226f8d8
	if (!ctx.cr6.eq) goto loc_8226F8D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8226f8f4
	goto loc_8226F8F4;
loc_8226F8D8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// mulhw r10,r11,r28
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32)) >> 32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8226F8F4:
	// add r30,r11,r23
	ctx.r30.u64 = ctx.r11.u64 + ctx.r23.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226f904
	if (ctx.cr6.eq) goto loc_8226F904;
	// bl 0x82186190
	ctx.lr = 0x8226F904;
	sub_82186190(ctx, base);
loc_8226F904:
	// mulli r10,r24,116
	ctx.r10.s64 = ctx.r24.s64 * 116;
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// mulli r11,r30,116
	ctx.r11.s64 = ctx.r30.s64 * 116;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
loc_8226F928:
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,332(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// mulhw r10,r11,r28
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32)) >> 32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x8226f9f0
	if (!ctx.cr6.lt) goto loc_8226F9F0;
	// mulli r27,r23,116
	ctx.r27.s64 = ctx.r23.s64 * 116;
	// add r26,r27,r30
	ctx.r26.u64 = ctx.r27.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8226f988
	if (ctx.cr6.eq) goto loc_8226F988;
	// subf r25,r27,r26
	ctx.r25.s64 = ctx.r26.s64 - ctx.r27.s64;
loc_8226F964:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8226f978
	if (ctx.cr6.eq) goto loc_8226F978;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8226ef58
	ctx.lr = 0x8226F978;
	sub_8226EF58(ctx, base);
loc_8226F978:
	// addi r25,r25,116
	ctx.r25.s64 = ctx.r25.s64 + 116;
	// addi r26,r26,116
	ctx.r26.s64 = ctx.r26.s64 + 116;
	// cmplw cr6,r25,r29
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8226f964
	if (!ctx.cr6.eq) goto loc_8226F964;
loc_8226F988:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r30,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r30.s64;
	// mulhw r10,r11,r28
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32)) >> 32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r5,r11,r23
	ctx.r5.s64 = ctx.r23.s64 - ctx.r11.s64;
	// bl 0x8226f670
	ctx.lr = 0x8226F9B4;
	sub_8226F670(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// subf r29,r27,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r27.s64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x8226fa84
	if (ctx.cr6.eq) goto loc_8226FA84;
loc_8226F9CC:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,116
	ctx.r5.s64 = 116;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826df680
	ctx.lr = 0x8226F9DC;
	sub_826DF680(ctx, base);
	// addi r30,r30,116
	ctx.r30.s64 = ctx.r30.s64 + 116;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8226f9cc
	if (!ctx.cr6.eq) goto loc_8226F9CC;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
loc_8226F9F0:
	// mulli r26,r23,116
	ctx.r26.s64 = ctx.r23.s64 * 116;
	// lwz r28,8(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r25,r26,r29
	ctx.r25.s64 = ctx.r29.s64 - ctx.r26.s64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmplw cr6,r27,r29
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8226fa2c
	if (ctx.cr6.eq) goto loc_8226FA2C;
loc_8226FA08:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8226fa1c
	if (ctx.cr6.eq) goto loc_8226FA1C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8226ef58
	ctx.lr = 0x8226FA1C;
	sub_8226EF58(ctx, base);
loc_8226FA1C:
	// addi r27,r27,116
	ctx.r27.s64 = ctx.r27.s64 + 116;
	// addi r28,r28,116
	ctx.r28.s64 = ctx.r28.s64 + 116;
	// cmplw cr6,r27,r29
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8226fa08
	if (!ctx.cr6.eq) goto loc_8226FA08;
loc_8226FA2C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8226f280
	ctx.lr = 0x8226FA58;
	sub_8226F280(ctx, base);
	// add r29,r26,r30
	ctx.r29.u64 = ctx.r26.u64 + ctx.r30.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8226fa84
	if (ctx.cr6.eq) goto loc_8226FA84;
loc_8226FA68:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,116
	ctx.r5.s64 = 116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826df680
	ctx.lr = 0x8226FA78;
	sub_826DF680(ctx, base);
	// addi r31,r31,116
	ctx.r31.s64 = ctx.r31.s64 + 116;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8226fa68
	if (!ctx.cr6.eq) goto loc_8226FA68;
loc_8226FA84:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226FA90"))) PPC_WEAK_FUNC(sub_8226FA90);
PPC_FUNC_IMPL(__imp__sub_8226FA90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8226FA98;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82581500
	ctx.lr = 0x8226FAA4;
	sub_82581500(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,7004(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7004);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// addi r10,r10,1940
	ctx.r10.s64 = ctx.r10.s64 + 1940;
	// addi r9,r9,1928
	ctx.r9.s64 = ctx.r9.s64 + 1928;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r8,r8,-4024
	ctx.r8.s64 = ctx.r8.s64 + -4024;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f13,88(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stb r7,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r7.u8);
	// bl 0x8238c6d8
	ctx.lr = 0x8226FB28;
	sub_8238C6D8(ctx, base);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82186158
	ctx.lr = 0x8226FB30;
	sub_82186158(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8226fb58
	if (ctx.cr6.eq) goto loc_8226FB58;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825b4a48
	ctx.lr = 0x8226FB48;
	sub_825B4A48(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8226f398
	ctx.lr = 0x8226FB54;
	sub_8226F398(ctx, base);
	// b 0x8226fb5c
	goto loc_8226FB5C;
loc_8226FB58:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8226FB5C:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226fb84
	if (ctx.cr6.eq) goto loc_8226FB84;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226FB84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8226FB84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581078
	ctx.lr = 0x8226FB8C;
	sub_82581078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226FBA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226FBC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226fbdc
	if (ctx.cr6.eq) goto loc_8226FBDC;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226FBDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8226FBDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226FBE8"))) PPC_WEAK_FUNC(sub_8226FBE8);
PPC_FUNC_IMPL(__imp__sub_8226FBE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8226FBF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8226fc3c
	if (ctx.cr6.eq) goto loc_8226FC3C;
	// lis r11,-29379
	ctx.r11.s64 = -1925382144;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r10,r11,51977
	ctx.r10.u64 = ctx.r11.u64 | 51977;
	// subf r11,r9,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	// mulhw r7,r11,r10
	ctx.r7.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32)) >> 32;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8226fc44
	if (!ctx.cr6.eq) goto loc_8226FC44;
loc_8226FC3C:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8226fc84
	goto loc_8226FC84;
loc_8226FC44:
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8226fc50
	if (!ctx.cr6.gt) goto loc_8226FC50;
	// twi 31,r0,22
loc_8226FC50:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226fc64
	if (ctx.cr6.eq) goto loc_8226FC64;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8226fc68
	if (ctx.cr6.eq) goto loc_8226FC68;
loc_8226FC64:
	// twi 31,r0,22
loc_8226FC68:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// mulhw r10,r11,r10
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32)) >> 32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8226FC84:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226f6d0
	ctx.lr = 0x8226FC90;
	sub_8226F6D0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8226fca4
	if (!ctx.cr6.gt) goto loc_8226FCA4;
	// twi 31,r0,22
loc_8226FCA4:
	// mulli r10,r30,116
	ctx.r10.s64 = ctx.r30.s64 * 116;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bgt cr6,0x8226fcd4
	if (ctx.cr6.gt) goto loc_8226FCD4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8226fcd8
	if (!ctx.cr6.lt) goto loc_8226FCD8;
loc_8226FCD4:
	// twi 31,r0,22
loc_8226FCD8:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226FCF0"))) PPC_WEAK_FUNC(sub_8226FCF0);
PPC_FUNC_IMPL(__imp__sub_8226FCF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r9,15
	ctx.r9.s64 = 15;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r4,r10,5020
	ctx.r4.s64 = ctx.r10.s64 + 5020;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// bl 0x82161e08
	ctx.lr = 0x8226FD38;
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

__attribute__((alias("__imp__sub_8226FD50"))) PPC_WEAK_FUNC(sub_8226FD50);
PPC_FUNC_IMPL(__imp__sub_8226FD50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-29379
	ctx.r11.s64 = -1925382144;
	// ori r11,r11,51977
	ctx.r11.u64 = ctx.r11.u64 | 51977;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8226fd84
	if (!ctx.cr6.eq) goto loc_8226FD84;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x8226fda0
	goto loc_8226FDA0;
loc_8226FD84:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// mulhw r8,r9,r11
	ctx.r8.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32)) >> 32;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r9,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 6;
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_8226FDA0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8226fdf0
	if (ctx.cr6.eq) goto loc_8226FDF0;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// mulhw r9,r11,r7
	ctx.r9.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32)) >> 32;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8226fdf0
	if (!ctx.cr6.lt) goto loc_8226FDF0;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8226fde4
	if (ctx.cr6.eq) goto loc_8226FDE4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8226ef58
	ctx.lr = 0x8226FDE4;
	sub_8226EF58(ctx, base);
loc_8226FDE4:
	// addi r11,r30,116
	ctx.r11.s64 = ctx.r30.s64 + 116;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8226fe20
	goto loc_8226FE20;
loc_8226FDF0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8226fe00
	if (!ctx.cr6.gt) goto loc_8226FE00;
	// twi 31,r0,22
loc_8226FE00:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x8226fbe8
	ctx.lr = 0x8226FE20;
	sub_8226FBE8(ctx, base);
loc_8226FE20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226FE38"))) PPC_WEAK_FUNC(sub_8226FE38);
PPC_FUNC_IMPL(__imp__sub_8226FE38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r10,27904(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27904);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// bne cr6,0x8226fe98
	if (!ctx.cr6.eq) goto loc_8226FE98;
	// addi r31,r11,27860
	ctx.r31.s64 = ctx.r11.s64 + 27860;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,27904(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27904, ctx.r11.u32);
	// bl 0x8226fcf0
	ctx.lr = 0x8226FE74;
	sub_8226FCF0(ctx, base);
	// lis r11,-32082
	ctx.r11.s64 = -2102525952;
	// addi r3,r11,32072
	ctx.r3.s64 = ctx.r11.s64 + 32072;
	// bl 0x826ded00
	ctx.lr = 0x8226FE80;
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
loc_8226FE98:
	// addi r3,r11,27860
	ctx.r3.s64 = ctx.r11.s64 + 27860;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226FEB0"))) PPC_WEAK_FUNC(sub_8226FEB0);
PPC_FUNC_IMPL(__imp__sub_8226FEB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8a4
	ctx.lr = 0x8226FEB8;
	__savegprlr_19(ctx, base);
	// stfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f30.u64);
	// stfd f31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,8(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// lwz r10,4(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8226fee0
	if (!ctx.cr6.gt) goto loc_8226FEE0;
	// twi 31,r0,22
loc_8226FEE0:
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8226fef8
	if (!ctx.cr6.gt) goto loc_8226FEF8;
	// twi 31,r0,22
loc_8226FEF8:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x8226f5d8
	ctx.lr = 0x8226FF18;
	sub_8226F5D8(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r19,16
	ctx.r3.s64 = ctx.r19.s64 + 16;
	// bl 0x82161d10
	ctx.lr = 0x8226FF2C;
	sub_82161D10(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8226ff40
	if (ctx.cr6.lt) goto loc_8226FF40;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x8226ff44
	goto loc_8226FF44;
loc_8226FF40:
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
loc_8226FF44:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
loc_8226FF60:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8226ff60
	if (!ctx.cr6.eq) goto loc_8226FF60;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x8226FF84;
	sub_82161E08(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82163620
	ctx.lr = 0x8226FF90;
	sub_82163620(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8226ffa4
	if (ctx.cr6.lt) goto loc_8226FFA4;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82186190
	ctx.lr = 0x8226FFA4;
	sub_82186190(ctx, base);
loc_8226FFA4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// bl 0x8269b1f8
	ctx.lr = 0x8226FFB8;
	sub_8269B1F8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,2092
	ctx.r4.s64 = ctx.r11.s64 + 2092;
	// bl 0x825d5918
	ctx.lr = 0x8226FFC8;
	sub_825D5918(ctx, base);
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5b30
	ctx.lr = 0x8226FFD4;
	sub_825D5B30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5870
	ctx.lr = 0x8226FFDC;
	sub_825D5870(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6160
	ctx.lr = 0x8226FFE8;
	sub_825D6160(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8227036c
	if (ctx.cr6.eq) goto loc_8227036C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r23,r11,2080
	ctx.r23.s64 = ctx.r11.s64 + 2080;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r22,r11,2064
	ctx.r22.s64 = ctx.r11.s64 + 2064;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f30,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f30.f64 = double(temp.f32);
	// addi r21,r11,2048
	ctx.r21.s64 = ctx.r11.s64 + 2048;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r11,2044
	ctx.r30.s64 = ctx.r11.s64 + 2044;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r11,2036
	ctx.r29.s64 = ctx.r11.s64 + 2036;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r28,r11,2028
	ctx.r28.s64 = ctx.r11.s64 + 2028;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r27,r11,2016
	ctx.r27.s64 = ctx.r11.s64 + 2016;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r26,r11,2004
	ctx.r26.s64 = ctx.r11.s64 + 2004;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r25,r11,1988
	ctx.r25.s64 = ctx.r11.s64 + 1988;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r24,r11,1976
	ctx.r24.s64 = ctx.r11.s64 + 1976;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r20,r11,1968
	ctx.r20.s64 = ctx.r11.s64 + 1968;
loc_82270050:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5368
	ctx.lr = 0x8227005C;
	sub_825D5368(ctx, base);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x8227034c
	if (!ctx.cr6.eq) goto loc_8227034C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x825d5918
	ctx.lr = 0x82270074;
	sub_825D5918(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5b30
	ctx.lr = 0x82270080;
	sub_825D5B30(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5418
	ctx.lr = 0x8227008C;
	sub_825D5418(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822700a4
	if (ctx.cr6.eq) goto loc_822700A4;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d55b0
	ctx.lr = 0x822700A0;
	sub_825D55B0(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
loc_822700A4:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d51c0
	ctx.lr = 0x822700B0;
	sub_825D51C0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// stfs f31,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8226f0d0
	ctx.lr = 0x822700C4;
	sub_8226F0D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
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
	// bl 0x8226f0d0
	ctx.lr = 0x822700FC;
	sub_8226F0D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
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
	// bl 0x8226f0d0
	ctx.lr = 0x82270134;
	sub_8226F0D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,180
	ctx.r10.s64 = ctx.r1.s64 + 180;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
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
	// bl 0x8226f0d0
	ctx.lr = 0x8227016C;
	sub_8226F0D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,196
	ctx.r10.s64 = ctx.r1.s64 + 196;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
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
	// bl 0x8226f0d0
	ctx.lr = 0x822701A4;
	sub_8226F0D0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r1,212
	ctx.r11.s64 = ctx.r1.s64 + 212;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// bl 0x8226f0d0
	ctx.lr = 0x822701D8;
	sub_8226F0D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,228
	ctx.r10.s64 = ctx.r1.s64 + 228;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
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
	// bl 0x825d5918
	ctx.lr = 0x82270210;
	sub_825D5918(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5b30
	ctx.lr = 0x8227021C;
	sub_825D5B30(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5418
	ctx.lr = 0x82270228;
	sub_825D5418(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82270240
	if (ctx.cr6.eq) goto loc_82270240;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d55b0
	ctx.lr = 0x8227023C;
	sub_825D55B0(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
loc_82270240:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d51c0
	ctx.lr = 0x8227024C;
	sub_825D51C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stfs f31,244(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// bl 0x825d5918
	ctx.lr = 0x82270260;
	sub_825D5918(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5b30
	ctx.lr = 0x8227026C;
	sub_825D5B30(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5418
	ctx.lr = 0x82270278;
	sub_825D5418(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82270290
	if (ctx.cr6.eq) goto loc_82270290;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d55b0
	ctx.lr = 0x8227028C;
	sub_825D55B0(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
loc_82270290:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d51c0
	ctx.lr = 0x8227029C;
	sub_825D51C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stfs f31,248(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// bl 0x825d5918
	ctx.lr = 0x822702B0;
	sub_825D5918(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5b30
	ctx.lr = 0x822702BC;
	sub_825D5B30(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5418
	ctx.lr = 0x822702C8;
	sub_825D5418(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822702e0
	if (ctx.cr6.eq) goto loc_822702E0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d55b0
	ctx.lr = 0x822702DC;
	sub_825D55B0(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
loc_822702E0:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d51c0
	ctx.lr = 0x822702EC;
	sub_825D51C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stfs f31,252(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// bl 0x825d5918
	ctx.lr = 0x82270300;
	sub_825D5918(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5b30
	ctx.lr = 0x8227030C;
	sub_825D5B30(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5418
	ctx.lr = 0x82270318;
	sub_825D5418(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82270330
	if (ctx.cr6.eq) goto loc_82270330;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d55b0
	ctx.lr = 0x8227032C;
	sub_825D55B0(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
loc_82270330:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d51c0
	ctx.lr = 0x8227033C;
	sub_825D51C0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stfs f31,256(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// bl 0x8226fd50
	ctx.lr = 0x8227034C;
	sub_8226FD50(ctx, base);
loc_8227034C:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d51c0
	ctx.lr = 0x82270358;
	sub_825D51C0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6160
	ctx.lr = 0x82270364;
	sub_825D6160(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82270050
	if (!ctx.cr6.eq) goto loc_82270050;
loc_8227036C:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d51c0
	ctx.lr = 0x82270378;
	sub_825D51C0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227038c
	if (ctx.cr6.eq) goto loc_8227038C;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x82581e38
	ctx.lr = 0x8227038C;
	sub_82581E38(ctx, base);
loc_8227038C:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x826de8f4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822703A0"))) PPC_WEAK_FUNC(sub_822703A0);
PPC_FUNC_IMPL(__imp__sub_822703A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b4
	ctx.lr = 0x822703A8;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826dfb68
	ctx.lr = 0x822703B0;
	__savefpr_20(ctx, base);
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,212
	ctx.r9.s64 = ctx.r1.s64 + 212;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f27,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f27.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f26,14088(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14088);
	ctx.f26.f64 = double(temp.f32);
	// addi r7,r1,196
	ctx.r7.s64 = ctx.r1.s64 + 196;
	// stfs f27,80(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// stfs f27,84(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// stfs f27,88(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f26,92(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// lwz r26,0(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lis r27,-32045
	ctx.r27.s64 = -2100101120;
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// stw r30,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r30.u32);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r30,8(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r29,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r29.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r26,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r26.u32);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r31,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r31.u32);
	// stw r30,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r30.u32);
	// lwz r31,8(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r31,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r31.u32);
	// lwz r7,12(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r8,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r8.u32);
	// lwz r3,27908(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27908);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// stw r7,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r7.u32);
	// bne cr6,0x822704a0
	if (!ctx.cr6.eq) goto loc_822704A0;
	// bl 0x8226fe38
	ctx.lr = 0x8227049C;
	sub_8226FE38(ctx, base);
	// stw r3,27908(r27)
	PPC_STORE_U32(ctx.r27.u32 + 27908, ctx.r3.u32);
loc_822704A0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82270acc
	if (ctx.cr6.eq) goto loc_82270ACC;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r9,-29379
	ctx.r9.s64 = -1925382144;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// ori r31,r9,51977
	ctx.r31.u64 = ctx.r9.u64 | 51977;
	// mulhw r10,r11,r31
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32)) >> 32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82270acc
	if (ctx.cr6.eq) goto loc_82270ACC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// lfs f30,2108(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2108);
	ctx.f30.f64 = double(temp.f32);
	// b 0x822704f0
	goto loc_822704F0;
loc_822704EC:
	// lwz r3,27908(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27908);
loc_822704F0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82270500
	if (!ctx.cr6.eq) goto loc_82270500;
	// bl 0x8226fe38
	ctx.lr = 0x822704FC;
	sub_8226FE38(ctx, base);
	// stw r3,27908(r27)
	PPC_STORE_U32(ctx.r27.u32 + 27908, ctx.r3.u32);
loc_82270500:
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82270530
	if (ctx.cr6.eq) goto loc_82270530;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// mulhw r10,r11,r31
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32)) >> 32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82270534
	if (ctx.cr6.lt) goto loc_82270534;
loc_82270530:
	// twi 31,r0,22
loc_82270534:
	// add r4,r26,r9
	ctx.r4.u64 = ctx.r26.u64 + ctx.r9.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8226ef58
	ctx.lr = 0x82270540;
	sub_8226EF58(ctx, base);
	// lwz r3,27908(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27908);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82270554
	if (!ctx.cr6.eq) goto loc_82270554;
	// bl 0x8226fe38
	ctx.lr = 0x82270550;
	sub_8226FE38(ctx, base);
	// stw r3,27908(r27)
	PPC_STORE_U32(ctx.r27.u32 + 27908, ctx.r3.u32);
loc_82270554:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// twllei r29,0
	// divwu r11,r30,r29
	ctx.r11.u32 = ctx.r30.u32 / ctx.r29.u32;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// subf r9,r11,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r11.s64;
	// beq cr6,0x82270598
	if (ctx.cr6.eq) goto loc_82270598;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mulhw r8,r11,r31
	ctx.r8.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32)) >> 32;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8227059c
	if (ctx.cr6.lt) goto loc_8227059C;
loc_82270598:
	// twi 31,r0,22
loc_8227059C:
	// mulli r11,r9,116
	ctx.r11.s64 = ctx.r9.s64 * 116;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x8226ef58
	ctx.lr = 0x822705AC;
	sub_8226EF58(ctx, base);
	// lfs f0,432(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822705c0
	if (ctx.cr6.gt) goto loc_822705C0;
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
loc_822705C0:
	// fcmpu cr6,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bgt cr6,0x822705d0
	if (ctx.cr6.gt) goto loc_822705D0;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x822705e0
	if (ctx.cr6.lt) goto loc_822705E0;
loc_822705D0:
	// addi r26,r26,116
	ctx.r26.s64 = ctx.r26.s64 + 116;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x822704ec
	if (ctx.cr6.lt) goto loc_822704EC;
	// b 0x82270898
	goto loc_82270898;
loc_822705E0:
	// fsubs f12,f31,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// lfs f23,308(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	ctx.f23.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f1,440(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,444(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	ctx.f31.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f22,324(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	ctx.f22.f64 = double(temp.f32);
	// addi r9,r1,164
	ctx.r9.s64 = ctx.r1.s64 + 164;
	// lfs f30,456(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	ctx.f30.f64 = double(temp.f32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f29,460(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	ctx.f29.f64 = double(temp.f32);
	// addi r7,r1,180
	ctx.r7.s64 = ctx.r1.s64 + 180;
	// lfs f11,436(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f10,312(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r1,196
	ctx.r6.s64 = ctx.r1.s64 + 196;
	// lfs f21,340(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	ctx.f21.f64 = double(temp.f32);
	// lfs f9,316(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	ctx.f9.f64 = double(temp.f32);
	// lfs f28,472(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 472);
	ctx.f28.f64 = double(temp.f32);
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// lfs f8,452(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	ctx.f8.f64 = double(temp.f32);
	// lfs f25,476(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	ctx.f25.f64 = double(temp.f32);
	// lfs f7,328(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	ctx.f7.f64 = double(temp.f32);
	// lfs f20,356(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	ctx.f20.f64 = double(temp.f32);
	// lfs f6,332(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,468(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,344(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,348(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	ctx.f3.f64 = double(temp.f32);
	// lfs f12,484(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	ctx.f12.f64 = double(temp.f32);
	// lfs f24,488(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	ctx.f24.f64 = double(temp.f32);
	// fsubs f13,f26,f0
	ctx.f13.f64 = double(float(ctx.f26.f64 - ctx.f0.f64));
	// lfs f2,360(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmuls f30,f30,f0
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmuls f29,f29,f0
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fmuls f28,f28,f0
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// fmuls f25,f25,f0
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
	// fmuls f24,f24,f0
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f0.f64));
	// fmuls f23,f13,f23
	ctx.f23.f64 = double(float(ctx.f13.f64 * ctx.f23.f64));
	// fmuls f22,f13,f22
	ctx.f22.f64 = double(float(ctx.f13.f64 * ctx.f22.f64));
	// fmuls f21,f13,f21
	ctx.f21.f64 = double(float(ctx.f13.f64 * ctx.f21.f64));
	// fmuls f20,f13,f20
	ctx.f20.f64 = double(float(ctx.f13.f64 * ctx.f20.f64));
	// fmadds f11,f11,f0,f23
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f23.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f11,f13,f10,f1
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f1.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f11,f13,f9,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f31.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// fmadds f11,f8,f0,f22
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f22.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// fmadds f11,f13,f7,f30
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f30.f64));
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// fmadds f11,f13,f6,f29
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 + ctx.f29.f64));
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// fmadds f11,f5,f0,f21
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f21.f64));
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// fmadds f11,f13,f4,f28
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f4.f64 + ctx.f28.f64));
	// stw r4,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r3,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r3.u32);
	// fmadds f11,f13,f3,f25
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f25.f64));
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// stw r31,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r31.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// fmadds f12,f12,f0,f20
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f20.f64));
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
	// stfs f12,288(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lfs f11,492(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	ctx.f11.f64 = double(temp.f32);
	// stw r4,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r4.u32);
	// lfs f9,500(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f7,504(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 504);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// lfs f5,508(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// fmadds f12,f13,f2,f24
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f2.f64 + ctx.f24.f64));
	// stfs f12,292(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// lfs f12,364(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// lfs f1,520(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 520);
	ctx.f1.f64 = double(temp.f32);
	// stw r5,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r5.u32);
	// lfs f10,372(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmadds f12,f13,f12,f11
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f11.f64));
	// lfs f3,516(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	ctx.f3.f64 = double(temp.f32);
	// lfs f30,524(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 524);
	ctx.f30.f64 = double(temp.f32);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// stfs f12,296(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f8,376(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f12,f13,f10,f9
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f9.f64));
	// addi r9,r1,212
	ctx.r9.s64 = ctx.r1.s64 + 212;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f30,f30,f0
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f6,380(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f12,f13,f8,f7
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f7.f64));
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// fmadds f12,f13,f6,f5
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 + ctx.f5.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// addi r7,r1,228
	ctx.r7.s64 = ctx.r1.s64 + 228;
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f2,392(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	ctx.f2.f64 = double(temp.f32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stw r4,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// lfs f4,388(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	ctx.f4.f64 = double(temp.f32);
	// lfs f31,396(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	ctx.f31.f64 = double(temp.f32);
	// stw r3,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r3.u32);
	// fmadds f11,f13,f2,f1
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f2.f64 + ctx.f1.f64));
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f12,f13,f4,f3
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f4.f64 + ctx.f3.f64));
	// lfs f11,404(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f13,f31,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f30.f64));
	// lfs f9,536(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 536);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,540(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 540);
	ctx.f7.f64 = double(temp.f32);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f5,544(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	ctx.f5.f64 = double(temp.f32);
	// stw r31,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r31.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lfs f12,532(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lfs f10,408(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r1,244
	ctx.r6.s64 = ctx.r1.s64 + 244;
	// lfs f8,412(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f6,416(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// fmadds f0,f12,f0,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stw r4,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r4.u32);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r9,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// stw r5,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r5.u32);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// stfs f0,260(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// fmadds f0,f13,f10,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f9.f64));
	// stfs f0,264(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// fmadds f0,f13,f8,f7
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f7.f64));
	// stfs f0,268(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// fmadds f0,f13,f6,f5
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 + ctx.f5.f64));
	// stfs f0,272(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
loc_82270898:
	// lfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826e0668
	ctx.lr = 0x822708A0;
	sub_826E0668(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f1,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826e0668
	ctx.lr = 0x822708AC;
	sub_826E0668(ctx, base);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x826e0590
	ctx.lr = 0x822708BC;
	sub_826E0590(ctx, base);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x826e0668
	ctx.lr = 0x822708CC;
	sub_826E0668(ctx, base);
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmr f28,f1
	ctx.f28.f64 = ctx.f1.f64;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x826e0590
	ctx.lr = 0x822708DC;
	sub_826E0590(ctx, base);
	// lfs f0,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r25,32
	ctx.r9.s64 = ctx.r25.s64 + 32;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r1,180
	ctx.r11.s64 = ctx.r1.s64 + 180;
	// lfs f0,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r25,48
	ctx.r7.s64 = ctx.r25.s64 + 48;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r6,r25,64
	ctx.r6.s64 = ctx.r25.s64 + 64;
	// lfs f0,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r24,48
	ctx.r10.s64 = ctx.r24.s64 + 48;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// frsp f13,f30
	ctx.f13.f64 = double(float(ctx.f30.f64));
	// stfs f27,92(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f0,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f31
	ctx.f12.f64 = double(float(ctx.f31.f64));
	// frsp f11,f29
	ctx.f11.f64 = double(float(ctx.f29.f64));
	// li r4,0
	ctx.r4.s64 = 0;
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r25,20
	ctx.r8.s64 = ctx.r25.s64 + 20;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f27,92(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f0,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lvx128 v13,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lfs f0,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,252(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// frsp f0,f28
	ctx.f0.f64 = double(float(ctx.f28.f64));
	// stfs f27,92(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stvx v13,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stvx v0,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f11,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,80(r25)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r25.u32 + 80, temp.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stfs f26,92(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,24(r24)
	PPC_STORE_U32(ctx.r24.u32 + 24, ctx.r11.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lwz r31,32(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82270A00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,196
	ctx.r11.s64 = ctx.r1.s64 + 196;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82270A54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82270A70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,212
	ctx.r11.s64 = ctx.r1.s64 + 212;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82270AB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,264(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r23)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r23.u32 + 20, temp.u32);
	// lfs f0,268(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r23)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r23.u32 + 24, temp.u32);
	// lfs f0,272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r23)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r23.u32 + 28, temp.u32);
loc_82270ACC:
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826dfbb4
	ctx.lr = 0x82270AD8;
	__restfpr_20(ctx, base);
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82270AE0"))) PPC_WEAK_FUNC(sub_82270AE0);
PPC_FUNC_IMPL(__imp__sub_82270AE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x82270AE8;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x82581078
	ctx.lr = 0x82270B04;
	sub_82581078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82270B18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82270B30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r11,2160
	ctx.r4.s64 = ctx.r11.s64 + 2160;
	// li r5,7
	ctx.r5.s64 = 7;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82270B5C;
	sub_82161E08(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825f7420
	ctx.lr = 0x82270B68;
	sub_825F7420(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82270b80
	if (ctx.cr6.lt) goto loc_82270B80;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82186190
	ctx.lr = 0x82270B80;
	sub_82186190(ctx, base);
loc_82270B80:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,92(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// lfs f30,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x82270bac
	if (!ctx.cr6.eq) goto loc_82270BAC;
	// lbz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82270d68
	if (ctx.cr6.eq) goto loc_82270D68;
loc_82270BAC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// addi r4,r11,2152
	ctx.r4.s64 = ctx.r11.s64 + 2152;
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82161e08
	ctx.lr = 0x82270BCC;
	sub_82161E08(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825f7420
	ctx.lr = 0x82270BD8;
	sub_825F7420(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82270bf0
	if (ctx.cr6.lt) goto loc_82270BF0;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82186190
	ctx.lr = 0x82270BF0;
	sub_82186190(ctx, base);
loc_82270BF0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// addi r4,r11,2148
	ctx.r4.s64 = ctx.r11.s64 + 2148;
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r29,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r29.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// stb r31,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82270C1C;
	sub_82161E08(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825f7420
	ctx.lr = 0x82270C28;
	sub_825F7420(ctx, base);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82270c40
	if (ctx.cr6.lt) goto loc_82270C40;
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x82186190
	ctx.lr = 0x82270C40;
	sub_82186190(ctx, base);
loc_82270C40:
	// stw r29,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r29.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// stb r31,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r31.u8);
	// ld r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 20);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fneg f0,f13
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfd f13,2136(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 2136);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fneg f10,f12
	ctx.f10.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lfs f11,2128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2128);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82270c94
	if (!ctx.cr6.gt) goto loc_82270C94;
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// b 0x82270ca0
	goto loc_82270CA0;
loc_82270C94:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82270ca0
	if (!ctx.cr6.lt) goto loc_82270CA0;
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
loc_82270CA0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,2124(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,2120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2120);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmadds f13,f0,f13,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// lfs f0,2108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2108);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82270cc8
	if (!ctx.cr6.gt) goto loc_82270CC8;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_82270CC8:
	// lfs f9,92(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f9,f9,f29
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// lfs f8,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fdivs f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 / ctx.f8.f64));
	// fmadds f31,f9,f0,f13
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82270cec
	if (!ctx.cr6.gt) goto loc_82270CEC;
	// fsubs f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// b 0x82270cf8
	goto loc_82270CF8;
loc_82270CEC:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bge cr6,0x82270cf8
	if (!ctx.cr6.lt) goto loc_82270CF8;
	// fadds f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
loc_82270CF8:
	// fsubs f13,f31,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5624);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82270d14
	if (!ctx.cr6.lt) goto loc_82270D14;
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
loc_82270D14:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lfs f13,8160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8160);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f0,2116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2116);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// stfs f0,24(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 24, temp.u32);
	// fneg f0,f12
	ctx.f0.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fneg f0,f13
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x822703a0
	ctx.lr = 0x82270D5C;
	sub_822703A0(ctx, base);
	// stfs f31,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
	// stfs f30,92(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 92, temp.u32);
	// stb r31,96(r30)
	PPC_STORE_U8(ctx.r30.u32 + 96, ctx.r31.u8);
loc_82270D68:
	// lfs f0,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fadds f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// stfs f0,80(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
	// lfs f13,2112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82270d8c
	if (!ctx.cr6.gt) goto loc_82270D8C;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,80(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
loc_82270D8C:
	// lfs f0,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 20, temp.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f29,-88(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82270DA8"))) PPC_WEAK_FUNC(sub_82270DA8);
PPC_FUNC_IMPL(__imp__sub_82270DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8ac
	ctx.lr = 0x82270DB0;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x826dfb84
	ctx.lr = 0x82270DB8;
	__savefpr_27(ctx, base);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,28056(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28056);
	// lfs f30,3544(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3544);
	ctx.f30.f64 = double(temp.f32);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// lfs f31,14088(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 14088);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lis r9,-32045
	ctx.r9.s64 = -2100101120;
	// addi r30,r9,27912
	ctx.r30.s64 = ctx.r9.s64 + 27912;
	// bne cr6,0x82270e94
	if (!ctx.cr6.eq) goto loc_82270E94;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,28056(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28056, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8100);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f31,4(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f13,23736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23736);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f0,20(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// stfs f13,24(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// stfs f13,28(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// stfs f0,32(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// stfs f30,36(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// stfs f13,40(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// stfs f0,44(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// stfs f13,48(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// stfs f31,56(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// stfs f13,60(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// stfs f13,64(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// stfs f30,68(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// stfs f31,72(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 72, temp.u32);
	// stfs f0,76(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 76, temp.u32);
	// stfs f30,80(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
	// stfs f13,84(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
	// stfs f0,88(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 88, temp.u32);
	// stfs f31,92(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 92, temp.u32);
	// stfs f30,96(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 96, temp.u32);
	// stfs f30,100(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 100, temp.u32);
	// stfs f0,104(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 104, temp.u32);
	// stfs f0,108(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 108, temp.u32);
	// stfs f13,112(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 112, temp.u32);
	// stfs f13,116(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 116, temp.u32);
	// stfs f31,120(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 120, temp.u32);
	// stfs f31,124(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 124, temp.u32);
	// stfs f30,128(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 128, temp.u32);
	// stfs f0,132(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 132, temp.u32);
	// stfs f0,136(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 136, temp.u32);
	// stfs f13,140(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 140, temp.u32);
loc_82270E94:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r11,200(r26)
	PPC_STORE_U32(ctx.r26.u32 + 200, ctx.r11.u32);
	// beq cr6,0x822711f8
	if (ctx.cr6.eq) goto loc_822711F8;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r8,255
	ctx.r8.s64 = 16711680;
	// addi r29,r4,32
	ctx.r29.s64 = ctx.r4.s64 + 32;
	// lfs f29,2188(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2188);
	ctx.f29.f64 = double(temp.f32);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// lfs f27,2184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2184);
	ctx.f27.f64 = double(temp.f32);
	// lis r23,-32256
	ctx.r23.s64 = -2113929216;
	// lfs f28,5024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5024);
	ctx.f28.f64 = double(temp.f32);
	// lis r21,-32079
	ctx.r21.s64 = -2102329344;
	// ori r24,r8,65535
	ctx.r24.u64 = ctx.r8.u64 | 65535;
loc_82270ED4:
	// lwz r11,-32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32);
	// lwz r10,2548(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2548);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822711e8
	if (ctx.cr6.eq) goto loc_822711E8;
	// lfs f13,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// fmsubs f13,f13,f28,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f28.f64 - ctx.f31.f64));
	// lfs f0,8248(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8248);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r10,200(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 200);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r9,196(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 196);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mulli r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 * 60;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r11,-28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28);
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f29,136(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f30,116(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// add r31,r10,r9
	ctx.r31.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stfs f29,96(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f29,104(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// add r28,r10,r30
	ctx.r28.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f29,144(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f30,148(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmuls f0,f13,f27
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r8
	PPC_STORE_U32(ctx.r8.u32, ctx.f0.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// or r27,r11,r24
	ctx.r27.u64 = ctx.r11.u64 | ctx.r24.u64;
	// bne cr6,0x8227102c
	if (!ctx.cr6.eq) goto loc_8227102C;
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x825d2bc0
	ctx.lr = 0x82270F90;
	sub_825D2BC0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x825d2cb0
	ctx.lr = 0x82270FA0;
	sub_825D2CB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82168c48
	ctx.lr = 0x82270FB0;
	sub_82168C48(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x825d2aa8
	ctx.lr = 0x82270FC0;
	sub_825D2AA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d2aa8
	ctx.lr = 0x82270FE0;
	sub_825D2AA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d2aa8
	ctx.lr = 0x82271000;
	sub_825D2AA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d2aa8
	ctx.lr = 0x82271020;
	sub_825D2AA8(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8227102C:
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// lvx128 v0,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d3bb0
	ctx.lr = 0x82271048;
	sub_825D3BB0(ctx, base);
	// lfs f0,256(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f0,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f0,264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// lvx128 v0,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d3bb0
	ctx.lr = 0x8227107C;
	sub_825D3BB0(ctx, base);
	// lfs f0,304(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f0,308(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f0,312(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// lvx128 v0,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d3bb0
	ctx.lr = 0x822710B0;
	sub_825D3BB0(ctx, base);
	// lfs f0,336(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f0,340(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// lfs f0,344(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lvx128 v0,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d3bb0
	ctx.lr = 0x822710E4;
	sub_825D3BB0(ctx, base);
	// lfs f0,272(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f0,276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// lfs f0,280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,188(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// lvx128 v0,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d3bb0
	ctx.lr = 0x82271118;
	sub_825D3BB0(ctx, base);
	// lfs f0,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// stfs f0,240(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lfs f0,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stfs f0,244(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// lfs f0,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,248(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lvx128 v0,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d3bb0
	ctx.lr = 0x8227114C;
	sub_825D3BB0(ctx, base);
	// lfs f0,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,300(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 300, temp.u32);
	// lfs f0,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,304(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// lfs f0,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,308(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// lfs f0,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f0,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f13,92(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lfs f0,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stfs f13,152(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// lfs f0,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,208(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// stfs f13,212(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// lfs f0,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,268(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// stfs f13,272(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// lfs f0,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,328(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 328, temp.u32);
	// stfs f13,332(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 332, temp.u32);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// stw r27,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r27.u32);
	// stw r27,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r27.u32);
	// stw r27,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r27.u32);
	// stw r27,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r27.u32);
	// stw r27,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r27.u32);
	// lwz r11,200(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 200);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// stw r11,200(r26)
	PPC_STORE_U32(ctx.r26.u32 + 200, ctx.r11.u32);
loc_822711E8:
	// addi r22,r22,-1
	ctx.r22.s64 = ctx.r22.s64 + -1;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x82270ed4
	if (!ctx.cr6.eq) goto loc_82270ED4;
loc_822711F8:
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x826dfbd0
	ctx.lr = 0x82271204;
	__restfpr_27(ctx, base);
	// b 0x826de8fc
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82271208"))) PPC_WEAK_FUNC(sub_82271208);
PPC_FUNC_IMPL(__imp__sub_82271208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82271300
	if (ctx.cr6.eq) goto loc_82271300;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82271300
	if (ctx.cr6.eq) goto loc_82271300;
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82271300
	if (ctx.cr6.eq) goto loc_82271300;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x8259b040
	ctx.lr = 0x8227124C;
	sub_8259B040(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x8259b088
	ctx.lr = 0x8227125C;
	sub_8259B088(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x8259afe0
	ctx.lr = 0x8227126C;
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
	ctx.lr = 0x82271284;
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
	ctx.lr = 0x82271298;
	sub_8259AEC8(ctx, base);
	// addi r5,r31,192
	ctx.r5.s64 = ctx.r31.s64 + 192;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8259a830
	ctx.lr = 0x822712A8;
	sub_8259A830(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x8259ace8
	ctx.lr = 0x822712BC;
	sub_8259ACE8(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x8259acc0
	ctx.lr = 0x822712D4;
	sub_8259ACC0(ctx, base);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x8259a7f0
	ctx.lr = 0x822712DC;
	sub_8259A7F0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,200(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// li r5,13
	ctx.r5.s64 = 13;
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x8259a5e0
	ctx.lr = 0x822712F8;
	sub_8259A5E0(ctx, base);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x8259a608
	ctx.lr = 0x82271300;
	sub_8259A608(ctx, base);
loc_82271300:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271318"))) PPC_WEAK_FUNC(sub_82271318);
PPC_FUNC_IMPL(__imp__sub_82271318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,80(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 80);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82271328:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r8,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r8.s64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82271388
	if (!ctx.cr6.eq) goto loc_82271388;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// bne cr6,0x82271328
	if (!ctx.cr6.eq) goto loc_82271328;
	// lis r8,-32079
	ctx.r8.s64 = -2102329344;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r8,2548(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2548);
loc_82271360:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r6,r6,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r6.s64;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82271390
	if (!ctx.cr6.eq) goto loc_82271390;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x82271360
	if (!ctx.cr6.eq) goto loc_82271360;
loc_82271388:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82271390:
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r4,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r4.u32);
	// lfs f0,14088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,80(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 80);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822713B8"))) PPC_WEAK_FUNC(sub_822713B8);
PPC_FUNC_IMPL(__imp__sub_822713B8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,-32079
	ctx.r8.s64 = -2102329344;
loc_822713C0:
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// subf r9,r9,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r9.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822713e4
	if (ctx.cr6.eq) goto loc_822713E4;
	// lwz r9,2548(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2548);
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_822713E4:
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// bne cr6,0x822713c0
	if (!ctx.cr6.eq) goto loc_822713C0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822713F8"))) PPC_WEAK_FUNC(sub_822713F8);
PPC_FUNC_IMPL(__imp__sub_822713F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r3,160
	ctx.r11.s64 = ctx.r3.s64 + 160;
	// li r3,1
	ctx.r3.s64 = 1;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271418"))) PPC_WEAK_FUNC(sub_82271418);
PPC_FUNC_IMPL(__imp__sub_82271418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82271420;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lfs f31,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f31.f64 = double(temp.f32);
	// lis r29,-32079
	ctx.r29.s64 = -2102329344;
	// ori r28,r10,51204
	ctx.r28.u64 = ctx.r10.u64 | 51204;
	// li r27,3
	ctx.r27.s64 = 3;
loc_82271454:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,2548(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2548);
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82271554
	if (ctx.cr6.eq) goto loc_82271554;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x821609d0
	ctx.lr = 0x82271484;
	sub_821609D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82271548
	if (ctx.cr6.eq) goto loc_82271548;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r26,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r26.u8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822714B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82271548
	if (ctx.cr6.eq) goto loc_82271548;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// beq cr6,0x82271540
	if (ctx.cr6.eq) goto loc_82271540;
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82271554
	if (!ctx.cr6.gt) goto loc_82271554;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// b 0x82271554
	goto loc_82271554;
loc_82271540:
	// stfs f31,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// b 0x82271554
	goto loc_82271554;
loc_82271548:
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,2548(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2548);
	// stwx r11,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u32);
loc_82271554:
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// cmplwi cr6,r30,16384
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16384, ctx.xer);
	// bne cr6,0x82271454
	if (!ctx.cr6.eq) goto loc_82271454;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82271588
	if (ctx.cr6.eq) goto loc_82271588;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82271588
	if (ctx.cr6.eq) goto loc_82271588;
	// li r5,256
	ctx.r5.s64 = 256;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82270da8
	ctx.lr = 0x82271588;
	sub_82270DA8(ctx, base);
loc_82271588:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82271598"))) PPC_WEAK_FUNC(sub_82271598);
PPC_FUNC_IMPL(__imp__sub_82271598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x822715A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82597c60
	ctx.lr = 0x822715B0;
	sub_82597C60(ctx, base);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r31,128
	ctx.r11.s64 = ctx.r31.s64 + 128;
	// addi r9,r9,2272
	ctx.r9.s64 = ctx.r9.s64 + 2272;
	// lfs f13,14088(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f0,2296(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2296);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r10,r10,2224
	ctx.r10.s64 = ctx.r10.s64 + 2224;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r29,15
	ctx.r29.s64 = 15;
	// lfs f0,2264(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2264);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r5,27
	ctx.r5.s64 = 27;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stb r30,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r30.u8);
	// lvx128 v13,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f12,3544(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3544);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r8,2192
	ctx.r4.s64 = ctx.r8.s64 + 2192;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lvx128 v12,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stvx v13,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// li r12,160
	ctx.r12.s64 = 160;
	// stvx v12,r31,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82161e08
	ctx.lr = 0x82271678;
	sub_82161E08(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x8216f658
	ctx.lr = 0x82271684;
	sub_8216F658(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82271698
	if (ctx.cr6.lt) goto loc_82271698;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82186190
	ctx.lr = 0x82271698;
	sub_82186190(ctx, base);
loc_82271698:
	// lis r3,1
	ctx.r3.s64 = 65536;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// ori r3,r3,26624
	ctx.r3.u64 = ctx.r3.u64 | 26624;
	// stb r30,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r30.u8);
	// bl 0x82186158
	ctx.lr = 0x822716B0;
	sub_82186158(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822716f4
	if (ctx.cr6.eq) goto loc_822716F4;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// li r29,1535
	ctx.r29.s64 = 1535;
loc_822716C4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259a550
	ctx.lr = 0x822716CC;
	sub_8259A550(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r28,r28,60
	ctx.r28.s64 = ctx.r28.s64 + 60;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x822716c4
	if (!ctx.cr6.lt) goto loc_822716C4;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_822716F4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82271710"))) PPC_WEAK_FUNC(sub_82271710);
PPC_FUNC_IMPL(__imp__sub_82271710) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82271718
	sub_82271718(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82271718"))) PPC_WEAK_FUNC(sub_82271718);
PPC_FUNC_IMPL(__imp__sub_82271718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// bl 0x82186190
	ctx.lr = 0x8227173C;
	sub_82186190(ctx, base);
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227174c
	if (ctx.cr6.eq) goto loc_8227174C;
	// bl 0x82581e38
	ctx.lr = 0x8227174C;
	sub_82581E38(ctx, base);
loc_8227174C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597cf8
	ctx.lr = 0x82271754;
	sub_82597CF8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227176c
	if (ctx.cr6.eq) goto loc_8227176C;
	// bl 0x82186190
	ctx.lr = 0x82271768;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8227176C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271788"))) PPC_WEAK_FUNC(sub_82271788);
PPC_FUNC_IMPL(__imp__sub_82271788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82271790;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82581500
	ctx.lr = 0x822717A4;
	sub_82581500(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,2316
	ctx.r11.s64 = ctx.r11.s64 + 2316;
	// addi r10,r10,2304
	ctx.r10.s64 = ctx.r10.s64 + 2304;
	// li r3,208
	ctx.r3.s64 = 208;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r10.u32);
	// bl 0x82186158
	ctx.lr = 0x822717C4;
	sub_82186158(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822717f8
	if (ctx.cr6.eq) goto loc_822717F8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822717E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82271598
	ctx.lr = 0x822717F4;
	sub_82271598(ctx, base);
	// b 0x822717fc
	goto loc_822717FC;
loc_822717F8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_822717FC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r3.u32);
	// beq cr6,0x8227180c
	if (ctx.cr6.eq) goto loc_8227180C;
	// bl 0x82659610
	ctx.lr = 0x8227180C;
	sub_82659610(ctx, base);
loc_8227180C:
	// li r3,16384
	ctx.r3.s64 = 16384;
	// bl 0x82186158
	ctx.lr = 0x82271814;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82271858
	if (ctx.cr6.eq) goto loc_82271858;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r10,255
	ctx.r10.s64 = 255;
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// lis r8,-32079
	ctx.r8.s64 = -2102329344;
	// lfs f0,14088(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
loc_82271830:
	// lwz r9,2548(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2548);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r28,-44(r11)
	PPC_STORE_U32(ctx.r11.u32 + -44, ctx.r28.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,-48(r11)
	PPC_STORE_U32(ctx.r11.u32 + -48, ctx.r9.u32);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bge cr6,0x82271830
	if (!ctx.cr6.lt) goto loc_82271830;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8227185c
	goto loc_8227185C;
loc_82271858:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8227185C:
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r27,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r27.u32);
	// beq cr6,0x82271910
	if (ctx.cr6.eq) goto loc_82271910;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82271910
	if (ctx.cr6.eq) goto loc_82271910;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82271910
	if (ctx.cr6.eq) goto loc_82271910;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822718A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82271900
	if (ctx.cr6.eq) goto loc_82271900;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82271900
	if (ctx.cr6.eq) goto loc_82271900;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x822718dc
	if (ctx.cr6.eq) goto loc_822718DC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82659610
	ctx.lr = 0x822718D8;
	sub_82659610(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_822718DC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822718F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82271900
	if (ctx.cr6.eq) goto loc_82271900;
	// bl 0x82581e38
	ctx.lr = 0x82271900;
	sub_82581E38(ctx, base);
loc_82271900:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82271910
	if (ctx.cr6.eq) goto loc_82271910;
	// bl 0x821601b8
	ctx.lr = 0x82271910;
	sub_821601B8(ctx, base);
loc_82271910:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82271920"))) PPC_WEAK_FUNC(sub_82271920);
PPC_FUNC_IMPL(__imp__sub_82271920) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82271938
	sub_82271938(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82271928"))) PPC_WEAK_FUNC(sub_82271928);
PPC_FUNC_IMPL(__imp__sub_82271928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,2168
	ctx.r3.s64 = ctx.r11.s64 + 2168;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271938"))) PPC_WEAK_FUNC(sub_82271938);
PPC_FUNC_IMPL(__imp__sub_82271938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82186190
	ctx.lr = 0x8227195C;
	sub_82186190(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227196c
	if (ctx.cr6.eq) goto loc_8227196C;
	// bl 0x82581e38
	ctx.lr = 0x8227196C;
	sub_82581E38(ctx, base);
loc_8227196C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581670
	ctx.lr = 0x82271974;
	sub_82581670(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227198c
	if (ctx.cr6.eq) goto loc_8227198C;
	// bl 0x82186190
	ctx.lr = 0x82271988;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8227198C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822719A8"))) PPC_WEAK_FUNC(sub_822719A8);
PPC_FUNC_IMPL(__imp__sub_822719A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,2360
	ctx.r11.s64 = ctx.r11.s64 + 2360;
	// addi r10,r10,2348
	ctx.r10.s64 = ctx.r10.s64 + 2348;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822719e4
	if (ctx.cr6.eq) goto loc_822719E4;
	// bl 0x82581e38
	ctx.lr = 0x822719E4;
	sub_82581E38(ctx, base);
loc_822719E4:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822719f4
	if (ctx.cr6.eq) goto loc_822719F4;
	// bl 0x82581e38
	ctx.lr = 0x822719F4;
	sub_82581E38(ctx, base);
loc_822719F4:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82271a04
	if (ctx.cr6.eq) goto loc_82271A04;
	// bl 0x82581e38
	ctx.lr = 0x82271A04;
	sub_82581E38(ctx, base);
loc_82271A04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82160560
	ctx.lr = 0x82271A0C;
	sub_82160560(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271A20"))) PPC_WEAK_FUNC(sub_82271A20);
PPC_FUNC_IMPL(__imp__sub_82271A20) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82271b88
	sub_82271B88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82271A28"))) PPC_WEAK_FUNC(sub_82271A28);
PPC_FUNC_IMPL(__imp__sub_82271A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,2328
	ctx.r3.s64 = ctx.r11.s64 + 2328;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271A38"))) PPC_WEAK_FUNC(sub_82271A38);
PPC_FUNC_IMPL(__imp__sub_82271A38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82271A40;
	__savegprlr_29(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x825d3bc8
	ctx.lr = 0x82271A5C;
	sub_825D3BC8(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825d2260
	ctx.lr = 0x82271A68;
	sub_825D2260(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x825d21b8
	ctx.lr = 0x82271A78;
	sub_825D21B8(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825d2260
	ctx.lr = 0x82271A84;
	sub_825D2260(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x825d21b8
	ctx.lr = 0x82271A94;
	sub_825D21B8(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825d2260
	ctx.lr = 0x82271AA0;
	sub_825D2260(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lfs f11,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f7.f64 = double(temp.f32);
	// lfs f12,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f12.f64 = double(temp.f32);
	// lfs f6,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f6.f64 = double(temp.f32);
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// lfs f5,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f5.f64 = double(temp.f32);
	// fmr f4,f12
	ctx.f4.f64 = ctx.f12.f64;
	// lfs f3,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8218c3c0
	ctx.lr = 0x82271ADC;
	sub_8218C3C0(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x825d1e60
	ctx.lr = 0x82271AE8;
	sub_825D1E60(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82271B10"))) PPC_WEAK_FUNC(sub_82271B10);
PPC_FUNC_IMPL(__imp__sub_82271B10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addis r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -131072;
	// addic. r10,r10,14335
	ctx.xer.ca = ctx.r10.u32 > 4294952960;
	ctx.r10.s64 = ctx.r10.s64 + 14335;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82271b5c
	if (ctx.cr0.eq) goto loc_82271B5C;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82271b4c
	if (ctx.cr6.eq) goto loc_82271B4C;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x82271b3c
	if (ctx.cr6.eq) goto loc_82271B3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82271B3C:
	// lbz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,100(r11)
	PPC_STORE_U8(ctx.r11.u32 + 100, ctx.r10.u8);
	// blr 
	return;
loc_82271B4C:
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,96(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// blr 
	return;
loc_82271B5C:
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// addi r9,r11,80
	ctx.r9.s64 = ctx.r11.s64 + 80;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// li r3,1
	ctx.r3.s64 = 1;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271B88"))) PPC_WEAK_FUNC(sub_82271B88);
PPC_FUNC_IMPL(__imp__sub_82271B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x822719a8
	ctx.lr = 0x82271BA8;
	sub_822719A8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82271bc0
	if (ctx.cr6.eq) goto loc_82271BC0;
	// bl 0x82186190
	ctx.lr = 0x82271BBC;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82271BC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271BD8"))) PPC_WEAK_FUNC(sub_82271BD8);
PPC_FUNC_IMPL(__imp__sub_82271BD8) {
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
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,31712
	ctx.r4.s64 = ctx.r11.s64 + 31712;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f13,5808(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5808);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f13,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f12,14096(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14096);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x825d3bb0
	ctx.lr = 0x82271C58;
	sub_825D3BB0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825d3bb0
	ctx.lr = 0x82271C68;
	sub_825D3BB0(ctx, base);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82271a38
	ctx.lr = 0x82271C80;
	sub_82271A38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82271CA0"))) PPC_WEAK_FUNC(sub_82271CA0);
PPC_FUNC_IMPL(__imp__sub_82271CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82271CA8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,28096(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28096);
	// lfs f0,14088(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// lfs f31,3544(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lis r9,-32045
	ctx.r9.s64 = -2100101120;
	// addi r31,r9,28080
	ctx.r31.s64 = ctx.r9.s64 + 28080;
	// bne cr6,0x82271d04
	if (!ctx.cr6.eq) goto loc_82271D04;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stw r11,28096(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28096, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,2372(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2372);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f31,8(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_82271D04:
	// lbz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 132);
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// beq cr6,0x82271d78
	if (ctx.cr6.eq) goto loc_82271D78;
	// addi r4,r30,144
	ctx.r4.s64 = ctx.r30.s64 + 144;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x825d2bc0
	ctx.lr = 0x82271D3C;
	sub_825D2BC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82166e50
	ctx.lr = 0x82271D4C;
	sub_82166E50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x825d2260
	ctx.lr = 0x82271D6C;
	sub_825D2260(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82271D78:
	// addi r29,r30,112
	ctx.r29.s64 = ctx.r30.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x825d3bb0
	ctx.lr = 0x82271D8C;
	sub_825D3BB0(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82271a38
	ctx.lr = 0x82271DA4;
	sub_82271A38(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82271DB8"))) PPC_WEAK_FUNC(sub_82271DB8);
PPC_FUNC_IMPL(__imp__sub_82271DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b4
	ctx.lr = 0x82271DC0;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// beq cr6,0x82271df4
	if (ctx.cr6.eq) goto loc_82271DF4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82271DF4:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821602f0
	ctx.lr = 0x82271E00;
	sub_821602F0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r10,2348
	ctx.r10.s64 = ctx.r10.s64 + 2348;
	// addi r25,r31,88
	ctx.r25.s64 = ctx.r31.s64 + 88;
	// lfs f31,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r27,r31,92
	ctx.r27.s64 = ctx.r31.s64 + 92;
	// addi r11,r11,2360
	ctx.r11.s64 = ctx.r11.s64 + 2360;
	// addi r29,r31,96
	ctx.r29.s64 = ctx.r31.s64 + 96;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r30,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r30.u32);
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stfs f31,128(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stb r30,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r30.u8);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// bl 0x82581078
	ctx.lr = 0x82271E54;
	sub_82581078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,240
	ctx.r3.s64 = 240;
	// bl 0x82186158
	ctx.lr = 0x82271E60;
	sub_82186158(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r24,r11,8016
	ctx.r24.s64 = ctx.r11.s64 + 8016;
	// beq cr6,0x82271e80
	if (ctx.cr6.eq) goto loc_82271E80;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82594ed0
	ctx.lr = 0x82271E78;
	sub_82594ED0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82271e84
	goto loc_82271E84;
loc_82271E80:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_82271E84:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82271e94
	if (ctx.cr6.eq) goto loc_82271E94;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82659610
	ctx.lr = 0x82271E94;
	sub_82659610(ctx, base);
loc_82271E94:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82271ea8
	if (ctx.cr6.eq) goto loc_82271EA8;
	// bl 0x82581e38
	ctx.lr = 0x82271EA8;
	sub_82581E38(ctx, base);
loc_82271EA8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82271EC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,15
	ctx.r29.s64 = 15;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stb r30,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r30.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
loc_82271ED8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82271ed8
	if (!ctx.cr6.eq) goto loc_82271ED8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82271F00;
	sub_82161E08(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82618280
	ctx.lr = 0x82271F0C;
	sub_82618280(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82271f20
	if (ctx.cr6.lt) goto loc_82271F20;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82186190
	ctx.lr = 0x82271F20;
	sub_82186190(ctx, base);
loc_82271F20:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// addi r5,r11,-17360
	ctx.r5.s64 = ctx.r11.s64 + -17360;
	// stb r30,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r30.u8);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82617e68
	ctx.lr = 0x82271F40;
	sub_82617E68(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82598548
	ctx.lr = 0x82271F54;
	sub_82598548(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// beq cr6,0x82271f6c
	if (ctx.cr6.eq) goto loc_82271F6C;
	// bl 0x82659610
	ctx.lr = 0x82271F6C;
	sub_82659610(ctx, base);
loc_82271F6C:
	// li r3,240
	ctx.r3.s64 = 240;
	// bl 0x82186158
	ctx.lr = 0x82271F74;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822721a4
	if (ctx.cr6.eq) goto loc_822721A4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82594ed0
	ctx.lr = 0x82271F84;
	sub_82594ED0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82271fa4
	if (ctx.cr6.eq) goto loc_82271FA4;
	// bl 0x82659610
	ctx.lr = 0x82271F94;
	sub_82659610(ctx, base);
loc_82271F94:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82271fa4
	if (ctx.cr6.eq) goto loc_82271FA4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82659610
	ctx.lr = 0x82271FA4;
	sub_82659610(ctx, base);
loc_82271FA4:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82271fb8
	if (ctx.cr6.eq) goto loc_82271FB8;
	// bl 0x82581e38
	ctx.lr = 0x82271FB8;
	sub_82581E38(ctx, base);
loc_82271FB8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82271fc8
	if (ctx.cr6.eq) goto loc_82271FC8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82581e38
	ctx.lr = 0x82271FC8;
	sub_82581E38(ctx, base);
loc_82271FC8:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x825949f0
	ctx.lr = 0x82271FD4;
	sub_825949F0(ctx, base);
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82186158
	ctx.lr = 0x82271FDC;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82271ff8
	if (ctx.cr6.eq) goto loc_82271FF8;
	// bl 0x82597e30
	ctx.lr = 0x82271FE8;
	sub_82597E30(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82272008
	if (ctx.cr6.eq) goto loc_82272008;
	// bl 0x82659610
	ctx.lr = 0x82271FF8;
	sub_82659610(ctx, base);
loc_82271FF8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82272008
	if (ctx.cr6.eq) goto loc_82272008;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x82272008;
	sub_82659610(ctx, base);
loc_82272008:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r30,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227201c
	if (ctx.cr6.eq) goto loc_8227201C;
	// bl 0x82581e38
	ctx.lr = 0x8227201C;
	sub_82581E38(ctx, base);
loc_8227201C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227202c
	if (ctx.cr6.eq) goto loc_8227202C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82581e38
	ctx.lr = 0x8227202C;
	sub_82581E38(ctx, base);
loc_8227202C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822720bc
	if (ctx.cr6.eq) goto loc_822720BC;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822720bc
	if (ctx.cr6.eq) goto loc_822720BC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272060;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x82598110
	ctx.lr = 0x8227206C;
	sub_82598110(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x82597bf8
	ctx.lr = 0x82272078;
	sub_82597BF8(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272094;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822720AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822720bc
	if (ctx.cr6.eq) goto loc_822720BC;
	// bl 0x821601b8
	ctx.lr = 0x822720BC;
	sub_821601B8(ctx, base);
loc_822720BC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r10,r31,112
	ctx.r10.s64 = ctx.r31.s64 + 112;
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r9,r31,144
	ctx.r9.s64 = ctx.r31.s64 + 144;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
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
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,2376(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2376);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r11,r11,-4608
	ctx.r11.s64 = ctx.r11.s64 + -4608;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d2bc0
	ctx.lr = 0x82272128;
	sub_825D2BC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x825d2cb0
	ctx.lr = 0x82272138;
	sub_825D2CB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82168c48
	ctx.lr = 0x82272148;
	sub_82168C48(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82594698
	ctx.lr = 0x82272154;
	sub_82594698(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82272164
	if (ctx.cr6.eq) goto loc_82272164;
	// bl 0x82581e38
	ctx.lr = 0x82272164;
	sub_82581E38(ctx, base);
loc_82272164:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82272174
	if (ctx.cr6.eq) goto loc_82272174;
	// bl 0x82581e38
	ctx.lr = 0x82272174;
	sub_82581E38(ctx, base);
loc_82272174:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82272184
	if (ctx.cr6.eq) goto loc_82272184;
	// bl 0x82581e38
	ctx.lr = 0x82272184;
	sub_82581E38(ctx, base);
loc_82272184:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82272194
	if (ctx.cr6.eq) goto loc_82272194;
	// bl 0x82581e38
	ctx.lr = 0x82272194;
	sub_82581E38(ctx, base);
loc_82272194:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
loc_822721A4:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// b 0x82271f94
	goto loc_82271F94;
}

__attribute__((alias("__imp__sub_822721B0"))) PPC_WEAK_FUNC(sub_822721B0);
PPC_FUNC_IMPL(__imp__sub_822721B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x822721B8;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82581078
	ctx.lr = 0x822721C8;
	sub_82581078(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r27,0
	ctx.r27.s64 = 0;
	// ori r11,r11,36871
	ctx.r11.u64 = ctx.r11.u64 | 36871;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// stb r27,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r27.u8);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r28,r11,2380
	ctx.r28.s64 = ctx.r11.s64 + 2380;
	// beq cr6,0x82272260
	if (ctx.cr6.eq) goto loc_82272260;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272208;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82272260
	if (ctx.cr6.eq) goto loc_82272260;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821620e8
	ctx.lr = 0x82272220;
	sub_821620E8(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82619650
	ctx.lr = 0x82272230;
	sub_82619650(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x825fc7b8
	ctx.lr = 0x82272238;
	sub_825FC7B8(ctx, base);
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82272254
	if (ctx.cr6.eq) goto loc_82272254;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
loc_82272254:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82272260
	if (ctx.cr6.eq) goto loc_82272260;
	// bl 0x82581e38
	ctx.lr = 0x82272260;
	sub_82581E38(ctx, base);
loc_82272260:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x822724c4
	if (ctx.cr6.eq) goto loc_822724C4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,18
	ctx.r5.s64 = 18;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227228C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,31696(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31696);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822722A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,31692(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31692);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,60(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822722C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822722DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f13,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,31688(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31688);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,60(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x821620e8
	ctx.lr = 0x82272310;
	sub_821620E8(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82619650
	ctx.lr = 0x82272320;
	sub_82619650(ctx, base);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82272334
	if (ctx.cr6.lt) goto loc_82272334;
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x82186190
	ctx.lr = 0x82272334;
	sub_82186190(ctx, base);
loc_82272334:
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// stb r27,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r27.u8);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272358;
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
	ctx.lr = 0x82272374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f12,-29808(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29808);
	ctx.f12.f64 = double(temp.f32);
	// lfd f0,128(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x822723b8
	if (!ctx.cr6.gt) goto loc_822723B8;
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_822723B8:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fmuls f0,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822723DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// addi r11,r11,-19744
	ctx.r11.s64 = ctx.r11.s64 + -19744;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v0,r9,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blt cr6,0x82272420
	if (ctx.cr6.lt) goto loc_82272420;
	// bne cr6,0x82272448
	if (!ctx.cr6.eq) goto loc_82272448;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82271bd8
	ctx.lr = 0x8227241C;
	sub_82271BD8(ctx, base);
	// b 0x8227242c
	goto loc_8227242C;
loc_82272420:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82271ca0
	ctx.lr = 0x8227242C;
	sub_82271CA0(ctx, base);
loc_8227242C:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82272448:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x825d2bc0
	ctx.lr = 0x82272454;
	sub_825D2BC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x825d2cb0
	ctx.lr = 0x82272464;
	sub_825D2CB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82168c48
	ctx.lr = 0x82272474;
	sub_82168C48(ctx, base);
	// addi r31,r31,96
	ctx.r31.s64 = ctx.r31.s64 + 96;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82594698
	ctx.lr = 0x82272484;
	sub_82594698(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227249C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r11,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r11.u8);
	// beq cr6,0x822724b4
	if (ctx.cr6.eq) goto loc_822724B4;
	// bl 0x82581e38
	ctx.lr = 0x822724B4;
	sub_82581E38(ctx, base);
loc_822724B4:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822724c4
	if (ctx.cr6.eq) goto loc_822724C4;
	// bl 0x821601b8
	ctx.lr = 0x822724C4;
	sub_821601B8(ctx, base);
loc_822724C4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822724D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822724f4
	if (ctx.cr6.eq) goto loc_822724F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822724F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822724F4:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82272500"))) PPC_WEAK_FUNC(sub_82272500);
PPC_FUNC_IMPL(__imp__sub_82272500) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// b 0x82615d60
	sub_82615D60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82272508"))) PPC_WEAK_FUNC(sub_82272508);
PPC_FUNC_IMPL(__imp__sub_82272508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82214520
	ctx.lr = 0x82272528;
	sub_82214520(ctx, base);
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,31892
	ctx.r6.s64 = ctx.r11.s64 + 31892;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,2500
	ctx.r5.s64 = ctx.r11.s64 + 2500;
	// bl 0x826df418
	ctx.lr = 0x82272544;
	sub_826DF418(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82272580
	if (ctx.cr6.eq) goto loc_82272580;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82214520
	ctx.lr = 0x82272558;
	sub_82214520(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82272580
	if (ctx.cr6.eq) goto loc_82272580;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82214520
	ctx.lr = 0x82272568;
	sub_82214520(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272580;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82272580:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82272598"))) PPC_WEAK_FUNC(sub_82272598);
PPC_FUNC_IMPL(__imp__sub_82272598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82214520
	ctx.lr = 0x822725B8;
	sub_82214520(ctx, base);
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,31892
	ctx.r6.s64 = ctx.r11.s64 + 31892;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,2500
	ctx.r5.s64 = ctx.r11.s64 + 2500;
	// bl 0x826df418
	ctx.lr = 0x822725D4;
	sub_826DF418(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82272610
	if (ctx.cr6.eq) goto loc_82272610;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82214520
	ctx.lr = 0x822725E8;
	sub_82214520(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82272610
	if (ctx.cr6.eq) goto loc_82272610;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82214520
	ctx.lr = 0x822725F8;
	sub_82214520(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82272610:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82272628"))) PPC_WEAK_FUNC(sub_82272628);
PPC_FUNC_IMPL(__imp__sub_82272628) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,100(r3)
	PPC_STORE_U8(ctx.r3.u32 + 100, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82272638"))) PPC_WEAK_FUNC(sub_82272638);
PPC_FUNC_IMPL(__imp__sub_82272638) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,100(r3)
	PPC_STORE_U8(ctx.r3.u32 + 100, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82272648"))) PPC_WEAK_FUNC(sub_82272648);
PPC_FUNC_IMPL(__imp__sub_82272648) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r1,-128
	ctx.r10.s64 = ctx.r1.s64 + -128;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82272658:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82272658
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82272658;
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8227267C:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8227267c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227267C;
	// addi r11,r1,-96
	ctx.r11.s64 = ctx.r1.s64 + -96;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r3,48
	ctx.r9.s64 = ctx.r3.s64 + 48;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-128
	ctx.r11.s64 = ctx.r1.s64 + -128;
	// lvx128 v11,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-80
	ctx.r11.s64 = ctx.r1.s64 + -80;
	// vmrghw v13,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrglw v11,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// lvx128 v9,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-112
	ctx.r11.s64 = ctx.r1.s64 + -112;
	// lvx128 v8,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-64
	ctx.r11.s64 = ctx.r1.s64 + -64;
	// vmrghw v12,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmrglw v7,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// lvx128 v10,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-48
	ctx.r11.s64 = ctx.r1.s64 + -48;
	// vmrghw v0,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrglw v13,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v12,v11,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrglw v11,v11,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// lvx128 v9,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-32
	ctx.r11.s64 = ctx.r1.s64 + -32;
	// vmsum4fp128 v7,v10,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v3,v10,v12
	simde_mm_store_ps(ctx.v3.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32), 0xFF));
	// vmsum4fp128 v2,v10,v11
	simde_mm_store_ps(ctx.v2.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v11.f32), 0xFF));
	// vmsum4fp128 v6,v10,v13
	simde_mm_store_ps(ctx.v6.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32), 0xFF));
	// lvx128 v10,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v5,v9,v0
	simde_mm_store_ps(ctx.v5.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// lvx128 v8,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v4,v9,v13
	simde_mm_store_ps(ctx.v4.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v13.f32), 0xFF));
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// vmsum4fp128 v1,v9,v12
	simde_mm_store_ps(ctx.v1.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32), 0xFF));
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// vmsum4fp128 v9,v9,v11
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v11.f32), 0xFF));
	// vmsum4fp128 v30,v8,v12
	simde_mm_store_ps(ctx.v30.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v12.f32), 0xFF));
	// vmsum4fp128 v28,v10,v0
	simde_mm_store_ps(ctx.v28.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v12,v10,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32), 0xFF));
	// vmsum4fp128 v31,v8,v0
	simde_mm_store_ps(ctx.v31.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v29,v8,v13
	simde_mm_store_ps(ctx.v29.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32), 0xFF));
	// vmsum4fp128 v27,v10,v13
	simde_mm_store_ps(ctx.v27.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32), 0xFF));
	// vmsum4fp128 v26,v10,v11
	simde_mm_store_ps(ctx.v26.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v11.f32), 0xFF));
	// vmsum4fp128 v8,v8,v11
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v11.f32), 0xFF));
	// vmrghw v0,v7,v3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmrghw v13,v6,v2
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vmrghw v11,v5,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.u32), simde_mm_load_si128((simde__m128i*)ctx.v5.u32)));
	// vmrghw v10,v4,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v4.u32)));
	// vmrghw v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vmrghw v13,v28,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v28.u32)));
	// vmrghw v12,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v9,v31,v30
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v30.u32), simde_mm_load_si128((simde__m128i*)ctx.v31.u32)));
	// vmrghw v11,v27,v26
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v26.u32), simde_mm_load_si128((simde__m128i*)ctx.v27.u32)));
	// vmrghw v8,v29,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v29.u32)));
	// stvx v0,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v0,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// stvx v12,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v10,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v10,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82272780"))) PPC_WEAK_FUNC(sub_82272780);
PPC_FUNC_IMPL(__imp__sub_82272780) {
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
	// bl 0x82582018
	ctx.lr = 0x822727A0;
	sub_82582018(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r11,r11,2476
	ctx.r11.s64 = ctx.r11.s64 + 2476;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825815d8
	ctx.lr = 0x822727B8;
	sub_825815D8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// bl 0x825815d8
	ctx.lr = 0x822727C4;
	sub_825815D8(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// beq cr6,0x822727d8
	if (ctx.cr6.eq) goto loc_822727D8;
	// bl 0x82659610
	ctx.lr = 0x822727D8;
	sub_82659610(ctx, base);
loc_822727D8:
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82272808"))) PPC_WEAK_FUNC(sub_82272808);
PPC_FUNC_IMPL(__imp__sub_82272808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,2512
	ctx.r11.s64 = ctx.r11.s64 + 2512;
	// addi r10,r10,2500
	ctx.r10.s64 = ctx.r10.s64 + 2500;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82272848
	if (ctx.cr6.eq) goto loc_82272848;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82581e38
	ctx.lr = 0x82272848;
	sub_82581E38(ctx, base);
loc_82272848:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82272858
	if (ctx.cr6.eq) goto loc_82272858;
	// bl 0x82581e38
	ctx.lr = 0x82272858;
	sub_82581E38(ctx, base);
loc_82272858:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581670
	ctx.lr = 0x82272860;
	sub_82581670(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82272878"))) PPC_WEAK_FUNC(sub_82272878);
PPC_FUNC_IMPL(__imp__sub_82272878) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82272c90
	sub_82272C90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82272880"))) PPC_WEAK_FUNC(sub_82272880);
PPC_FUNC_IMPL(__imp__sub_82272880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,2392
	ctx.r3.s64 = ctx.r11.s64 + 2392;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82272890"))) PPC_WEAK_FUNC(sub_82272890);
PPC_FUNC_IMPL(__imp__sub_82272890) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82272dd0
	sub_82272DD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82272898"))) PPC_WEAK_FUNC(sub_82272898);
PPC_FUNC_IMPL(__imp__sub_82272898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,2428
	ctx.r3.s64 = ctx.r11.s64 + 2428;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822728A8"))) PPC_WEAK_FUNC(sub_822728A8);
PPC_FUNC_IMPL(__imp__sub_822728A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x822728B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ori r11,r11,36870
	ctx.r11.u64 = ctx.r11.u64 | 36870;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82581080
	ctx.lr = 0x822728F4;
	sub_82581080(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82272984
	if (ctx.cr6.eq) goto loc_82272984;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// addi r30,r11,2384
	ctx.r30.s64 = ctx.r11.s64 + 2384;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// addi r29,r11,31892
	ctx.r29.s64 = ctx.r11.s64 + 31892;
loc_82272910:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826df418
	ctx.lr = 0x82272928;
	sub_826DF418(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 100);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82272950
	if (!ctx.cr6.eq) goto loc_82272950;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581088
	ctx.lr = 0x82272940;
	sub_82581088(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82272910
	if (!ctx.cr6.eq) goto loc_82272910;
	// b 0x82272984
	goto loc_82272984;
loc_82272950:
	// addi r4,r11,80
	ctx.r4.s64 = ctx.r11.s64 + 80;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f2,108(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82272984;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82272984:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82581078
	ctx.lr = 0x8227298C;
	sub_82581078(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227299C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822729b8
	if (ctx.cr6.eq) goto loc_822729B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822729B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822729B8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822729C0"))) PPC_WEAK_FUNC(sub_822729C0);
PPC_FUNC_IMPL(__imp__sub_822729C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822729e4
	if (ctx.cr6.eq) goto loc_822729E4;
	// bl 0x82581e38
	ctx.lr = 0x822729E4;
	sub_82581E38(ctx, base);
loc_822729E4:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822729f8
	if (ctx.cr6.eq) goto loc_822729F8;
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_822729F8:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82272a0c
	if (ctx.cr6.eq) goto loc_82272A0C;
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82272A0C:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82272a20
	if (ctx.cr6.eq) goto loc_82272A20;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82272A20:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82272a34
	if (ctx.cr6.eq) goto loc_82272A34;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82272A34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82582070
	ctx.lr = 0x82272A3C;
	sub_82582070(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82272A50"))) PPC_WEAK_FUNC(sub_82272A50);
PPC_FUNC_IMPL(__imp__sub_82272A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,144
	ctx.r3.s64 = 144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82186158
	ctx.lr = 0x82272A70;
	sub_82186158(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82272a98
	if (ctx.cr6.eq) goto loc_82272A98;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82272780
	ctx.lr = 0x82272A84;
	sub_82272780(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2568
	ctx.r11.s64 = ctx.r11.s64 + 2568;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82272a9c
	goto loc_82272A9C;
loc_82272A98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82272A9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82272AB8"))) PPC_WEAK_FUNC(sub_82272AB8);
PPC_FUNC_IMPL(__imp__sub_82272AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x822729c0
	ctx.lr = 0x82272AD8;
	sub_822729C0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82272af0
	if (ctx.cr6.eq) goto loc_82272AF0;
	// bl 0x82186190
	ctx.lr = 0x82272AEC;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82272AF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82272B08"))) PPC_WEAK_FUNC(sub_82272B08);
PPC_FUNC_IMPL(__imp__sub_82272B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82272B10;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82581500
	ctx.lr = 0x82272B28;
	sub_82581500(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r28,r31,32
	ctx.r28.s64 = ctx.r31.s64 + 32;
	// addi r11,r11,2512
	ctx.r11.s64 = ctx.r11.s64 + 2512;
	// addi r10,r10,2500
	ctx.r10.s64 = ctx.r10.s64 + 2500;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// beq cr6,0x82272b58
	if (ctx.cr6.eq) goto loc_82272B58;
	// bl 0x82659610
	ctx.lr = 0x82272B58;
	sub_82659610(ctx, base);
loc_82272B58:
	// lvx128 v0,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r31,80
	ctx.r10.s64 = ctx.r31.s64 + 80;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stb r29,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r29.u8);
	// bl 0x82584548
	ctx.lr = 0x82272B88;
	sub_82584548(ctx, base);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82272b9c
	if (ctx.cr6.eq) goto loc_82272B9C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x82272B9C;
	sub_82659610(ctx, base);
loc_82272B9C:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82272bb0
	if (ctx.cr6.eq) goto loc_82272BB0;
	// bl 0x82581e38
	ctx.lr = 0x82272BB0;
	sub_82581E38(ctx, base);
loc_82272BB0:
	// li r11,128
	ctx.r11.s64 = 128;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// bl 0x82584610
	ctx.lr = 0x82272BC4;
	sub_82584610(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82272bd8
	if (ctx.cr6.eq) goto loc_82272BD8;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82659610
	ctx.lr = 0x82272BD8;
	sub_82659610(ctx, base);
loc_82272BD8:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82272bf0
	if (ctx.cr6.eq) goto loc_82272BF0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82581e38
	ctx.lr = 0x82272BF0;
	sub_82581E38(ctx, base);
loc_82272BF0:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82186158
	ctx.lr = 0x82272BF8;
	sub_82186158(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82272c1c
	if (ctx.cr6.eq) goto loc_82272C1C;
	// bl 0x82595b78
	ctx.lr = 0x82272C08;
	sub_82595B78(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,2412
	ctx.r11.s64 = ctx.r11.s64 + 2412;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82272c20
	goto loc_82272C20;
loc_82272C1C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82272C20:
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82272c30
	if (ctx.cr6.eq) goto loc_82272C30;
	// bl 0x82659610
	ctx.lr = 0x82272C30;
	sub_82659610(ctx, base);
loc_82272C30:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272C48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82272c58
	if (ctx.cr6.eq) goto loc_82272C58;
	// bl 0x82581e38
	ctx.lr = 0x82272C58;
	sub_82581E38(ctx, base);
loc_82272C58:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272C70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82272c80
	if (ctx.cr6.eq) goto loc_82272C80;
	// bl 0x82581e38
	ctx.lr = 0x82272C80;
	sub_82581E38(ctx, base);
loc_82272C80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82272C90"))) PPC_WEAK_FUNC(sub_82272C90);
PPC_FUNC_IMPL(__imp__sub_82272C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,2512
	ctx.r11.s64 = ctx.r11.s64 + 2512;
	// addi r10,r10,2500
	ctx.r10.s64 = ctx.r10.s64 + 2500;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82272cd8
	if (ctx.cr6.eq) goto loc_82272CD8;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82581e38
	ctx.lr = 0x82272CD8;
	sub_82581E38(ctx, base);
loc_82272CD8:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82272ce8
	if (ctx.cr6.eq) goto loc_82272CE8;
	// bl 0x82581e38
	ctx.lr = 0x82272CE8;
	sub_82581E38(ctx, base);
loc_82272CE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581670
	ctx.lr = 0x82272CF0;
	sub_82581670(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82272d08
	if (ctx.cr6.eq) goto loc_82272D08;
	// bl 0x82186190
	ctx.lr = 0x82272D04;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82272D08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82272D20"))) PPC_WEAK_FUNC(sub_82272D20);
PPC_FUNC_IMPL(__imp__sub_82272D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82272D28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82581500
	ctx.lr = 0x82272D34;
	sub_82581500(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,2548
	ctx.r11.s64 = ctx.r11.s64 + 2548;
	// addi r10,r10,2536
	ctx.r10.s64 = ctx.r10.s64 + 2536;
	// addi r30,r31,76
	ctx.r30.s64 = ctx.r31.s64 + 76;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// bl 0x82581078
	ctx.lr = 0x82272D60;
	sub_82581078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,240
	ctx.r3.s64 = 240;
	// bl 0x82186158
	ctx.lr = 0x82272D6C;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82272d84
	if (ctx.cr6.eq) goto loc_82272D84;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,8016
	ctx.r4.s64 = ctx.r11.s64 + 8016;
	// bl 0x82594ed0
	ctx.lr = 0x82272D80;
	sub_82594ED0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82272D84:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82272d94
	if (ctx.cr6.eq) goto loc_82272D94;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82659610
	ctx.lr = 0x82272D94;
	sub_82659610(ctx, base);
loc_82272D94:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82272da8
	if (ctx.cr6.eq) goto loc_82272DA8;
	// bl 0x82581e38
	ctx.lr = 0x82272DA8;
	sub_82581E38(ctx, base);
loc_82272DA8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272DC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82272DD0"))) PPC_WEAK_FUNC(sub_82272DD0);
PPC_FUNC_IMPL(__imp__sub_82272DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,2548
	ctx.r11.s64 = ctx.r11.s64 + 2548;
	// addi r10,r10,2536
	ctx.r10.s64 = ctx.r10.s64 + 2536;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82272e14
	if (ctx.cr6.eq) goto loc_82272E14;
	// bl 0x82581e38
	ctx.lr = 0x82272E14;
	sub_82581E38(ctx, base);
loc_82272E14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581670
	ctx.lr = 0x82272E1C;
	sub_82581670(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82272e34
	if (ctx.cr6.eq) goto loc_82272E34;
	// bl 0x82186190
	ctx.lr = 0x82272E30;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82272E34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82272E50"))) PPC_WEAK_FUNC(sub_82272E50);
PPC_FUNC_IMPL(__imp__sub_82272E50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82272e7c
	if (ctx.cr6.eq) goto loc_82272E7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x82272E7C;
	sub_82659610(ctx, base);
loc_82272E7C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82272e90
	if (ctx.cr6.eq) goto loc_82272E90;
	// bl 0x82581e38
	ctx.lr = 0x82272E90;
	sub_82581E38(ctx, base);
loc_82272E90:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82272EA8"))) PPC_WEAK_FUNC(sub_82272EA8);
PPC_FUNC_IMPL(__imp__sub_82272EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82272EB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82272ef8
	if (ctx.cr6.eq) goto loc_82272EF8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82272ef8
	if (ctx.cr6.eq) goto loc_82272EF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272EF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82272EF8:
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82186158
	ctx.lr = 0x82272F00;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82272f24
	if (ctx.cr6.eq) goto loc_82272F24;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82272b08
	ctx.lr = 0x82272F1C;
	sub_82272B08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82272F24:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82272F30"))) PPC_WEAK_FUNC(sub_82272F30);
PPC_FUNC_IMPL(__imp__sub_82272F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r10,28116(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28116);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// bne cr6,0x82272f9c
	if (!ctx.cr6.eq) goto loc_82272F9C;
	// addi r31,r11,28100
	ctx.r31.s64 = ctx.r11.s64 + 28100;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28116(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28116, ctx.r11.u32);
	// bl 0x82581e70
	ctx.lr = 0x82272F6C;
	sub_82581E70(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32082
	ctx.r10.s64 = -2102525952;
	// addi r11,r11,2452
	ctx.r11.s64 = ctx.r11.s64 + 2452;
	// addi r3,r10,32192
	ctx.r3.s64 = ctx.r10.s64 + 32192;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x82272F84;
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
loc_82272F9C:
	// addi r3,r11,28100
	ctx.r3.s64 = ctx.r11.s64 + 28100;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82272FB8"))) PPC_WEAK_FUNC(sub_82272FB8);
PPC_FUNC_IMPL(__imp__sub_82272FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de89c
	ctx.lr = 0x82272FC0;
	__savegprlr_17(ctx, base);
	// stfd f29,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f29.u64);
	// stfd f30,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f30.u64);
	// stfd f31,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-912(r1)
	ea = -912 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// bl 0x82581078
	ctx.lr = 0x82272FE4;
	sub_82581078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,200(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227305C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x822730dc
	if (ctx.cr6.eq) goto loc_822730DC;
	// bl 0x82659610
	ctx.lr = 0x8227306C;
	sub_82659610(ctx, base);
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822730dc
	if (ctx.cr6.eq) goto loc_822730DC;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82594160
	ctx.lr = 0x82273088;
	sub_82594160(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82590d58
	ctx.lr = 0x82273094;
	sub_82590D58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x825d4308
	ctx.lr = 0x822730A0;
	sub_825D4308(ctx, base);
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82273128
	goto loc_82273128;
loc_822730DC:
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822730F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
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
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82273128:
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// lwz r3,200(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273144;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,200(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227316C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273180;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273194;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,9844
	ctx.r6.s64 = ctx.r11.s64 + 9844;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,9788
	ctx.r5.s64 = ctx.r11.s64 + 9788;
	// bl 0x826df418
	ctx.lr = 0x822731B4;
	sub_826DF418(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x822731e8
	if (ctx.cr6.eq) goto loc_822731E8;
	// bl 0x82659610
	ctx.lr = 0x822731C4;
	sub_82659610(ctx, base);
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822731e8
	if (ctx.cr6.eq) goto loc_822731E8;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82589210
	ctx.lr = 0x822731E8;
	sub_82589210(ctx, base);
loc_822731E8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825d42d8
	ctx.lr = 0x822731F8;
	sub_825D42D8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f29,5024(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5024);
	ctx.f29.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f30,14088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f30.f64 = double(temp.f32);
	// fnmsubs f0,f0,f29,f30
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f29.f64 - ctx.f30.f64)));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// bl 0x825d42d8
	ctx.lr = 0x8227322C;
	sub_825D42D8(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f31,2588(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2588);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// bl 0x825d42d8
	ctx.lr = 0x8227325C;
	sub_825D42D8(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// bl 0x825d42d8
	ctx.lr = 0x82273284;
	sub_825D42D8(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// bl 0x825d42d8
	ctx.lr = 0x822732AC;
	sub_825D42D8(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// bl 0x825d42d8
	ctx.lr = 0x822732D4;
	sub_825D42D8(ctx, base);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fnmsubs f0,f0,f29,f30
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f29.f64 - ctx.f30.f64)));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// bl 0x825d42d8
	ctx.lr = 0x822732F8;
	sub_825D42D8(ctx, base);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// bl 0x825d42d8
	ctx.lr = 0x82273320;
	sub_825D42D8(ctx, base);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825d42d8
	ctx.lr = 0x82273344;
	sub_825D42D8(ctx, base);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// bl 0x825d42d8
	ctx.lr = 0x8227336C;
	sub_825D42D8(ctx, base);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// bl 0x825d42d8
	ctx.lr = 0x82273394;
	sub_825D42D8(ctx, base);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fnmsubs f0,f0,f29,f30
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f29.f64 - ctx.f30.f64)));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// bl 0x825d42d8
	ctx.lr = 0x822733B8;
	sub_825D42D8(ctx, base);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// bl 0x825d42d8
	ctx.lr = 0x822733E0;
	sub_825D42D8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f31,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,0(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// bl 0x825d42d8
	ctx.lr = 0x82273400;
	sub_825D42D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// bl 0x825d42d8
	ctx.lr = 0x82273418;
	sub_825D42D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// bl 0x825d42d8
	ctx.lr = 0x82273430;
	sub_825D42D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stfs f30,0(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f1,5424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5424);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825d2c50
	ctx.lr = 0x82273450;
	sub_825D2C50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x825d4308
	ctx.lr = 0x8227345C;
	sub_825D4308(ctx, base);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82272648
	ctx.lr = 0x8227346C;
	sub_82272648(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82272648
	ctx.lr = 0x8227347C;
	sub_82272648(ctx, base);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d42d8
	ctx.lr = 0x822734CC;
	sub_825D42D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825d42d8
	ctx.lr = 0x822734E0;
	sub_825D42D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825d42d8
	ctx.lr = 0x822734F4;
	sub_825D42D8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825d42d8
	ctx.lr = 0x82273508;
	sub_825D42D8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825d42d8
	ctx.lr = 0x8227351C;
	sub_825D42D8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825d42d8
	ctx.lr = 0x82273530;
	sub_825D42D8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825d42d8
	ctx.lr = 0x82273544;
	sub_825D42D8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825d42d8
	ctx.lr = 0x82273558;
	sub_825D42D8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825d42d8
	ctx.lr = 0x8227356C;
	sub_825D42D8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825d42d8
	ctx.lr = 0x82273580;
	sub_825D42D8(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825d42d8
	ctx.lr = 0x82273594;
	sub_825D42D8(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825d42d8
	ctx.lr = 0x822735A8;
	sub_825D42D8(ctx, base);
	// lfs f12,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// lfs f10,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8218c3c0
	ctx.lr = 0x822735E4;
	sub_8218C3C0(ctx, base);
	// addi r30,r19,76
	ctx.r30.s64 = ctx.r19.s64 + 76;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227364c
	if (ctx.cr6.eq) goto loc_8227364C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227364c
	if (ctx.cr6.eq) goto loc_8227364C;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82590e78
	ctx.lr = 0x82273610;
	sub_82590E78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82594698
	ctx.lr = 0x8227361C;
	sub_82594698(ctx, base);
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273634;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227364C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227364C:
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x825d4308
	ctx.lr = 0x82273658;
	sub_825D4308(ctx, base);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,496
	ctx.r5.s64 = ctx.r1.s64 + 496;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82272648
	ctx.lr = 0x82273680;
	sub_82272648(ctx, base);
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x825d4398
	ctx.lr = 0x8227368C;
	sub_825D4398(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x825d4478
	ctx.lr = 0x82273698;
	sub_825D4478(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stvx v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r4,0
	ctx.r4.s64 = 0;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d42d8
	ctx.lr = 0x822736E8;
	sub_825D42D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825d42d8
	ctx.lr = 0x822736FC;
	sub_825D42D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825d42d8
	ctx.lr = 0x82273710;
	sub_825D42D8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825d42d8
	ctx.lr = 0x82273724;
	sub_825D42D8(ctx, base);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f9,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f11,f10,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fmadds f0,f13,f9,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f0.f64));
	// stfs f0,288(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// bl 0x825d42d8
	ctx.lr = 0x8227376C;
	sub_825D42D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825d42d8
	ctx.lr = 0x82273780;
	sub_825D42D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825d42d8
	ctx.lr = 0x82273794;
	sub_825D42D8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825d42d8
	ctx.lr = 0x822737A8;
	sub_825D42D8(ctx, base);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// li r4,2
	ctx.r4.s64 = 2;
	// lfs f9,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f13,f8,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f0.f64));
	// fmadds f0,f12,f11,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f0,f10,f9,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f0.f64));
	// stfs f0,292(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// bl 0x825d42d8
	ctx.lr = 0x822737F0;
	sub_825D42D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825d42d8
	ctx.lr = 0x82273804;
	sub_825D42D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825d42d8
	ctx.lr = 0x82273818;
	sub_825D42D8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825d42d8
	ctx.lr = 0x8227382C;
	sub_825D42D8(ctx, base);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// li r4,3
	ctx.r4.s64 = 3;
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f9,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f11,f10,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fmadds f0,f13,f9,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f0.f64));
	// stfs f0,296(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// bl 0x825d42d8
	ctx.lr = 0x82273874;
	sub_825D42D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825d42d8
	ctx.lr = 0x82273888;
	sub_825D42D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825d42d8
	ctx.lr = 0x8227389C;
	sub_825D42D8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825d42d8
	ctx.lr = 0x822738B0;
	sub_825D42D8(ctx, base);
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f0,f13,f8,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f0.f64));
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r4,1
	ctx.r4.s64 = 1;
	// fmadds f0,f12,f11,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f0,f10,f9,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f0.f64));
	// stfs f0,300(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822738FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227394C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x8227395c
	if (ctx.cr6.eq) goto loc_8227395C;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82581e38
	ctx.lr = 0x8227395C;
	sub_82581E38(ctx, base);
loc_8227395C:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x8227396c
	if (ctx.cr6.eq) goto loc_8227396C;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82581e38
	ctx.lr = 0x8227396C;
	sub_82581E38(ctx, base);
loc_8227396C:
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227397c
	if (ctx.cr6.eq) goto loc_8227397C;
	// bl 0x821601b8
	ctx.lr = 0x8227397C;
	sub_821601B8(ctx, base);
loc_8227397C:
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227398c
	if (ctx.cr6.eq) goto loc_8227398C;
	// bl 0x821601b8
	ctx.lr = 0x8227398C;
	sub_821601B8(ctx, base);
loc_8227398C:
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227399c
	if (ctx.cr6.eq) goto loc_8227399C;
	// bl 0x821601b8
	ctx.lr = 0x8227399C;
	sub_821601B8(ctx, base);
loc_8227399C:
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// lfd f29,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f30,-144(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x826de8ec
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822739B0"))) PPC_WEAK_FUNC(sub_822739B0);
PPC_FUNC_IMPL(__imp__sub_822739B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b0
	ctx.lr = 0x822739B8;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82186158
	ctx.lr = 0x822739CC;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822739e4
	if (ctx.cr6.eq) goto loc_822739E4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825d4cb0
	ctx.lr = 0x822739DC;
	sub_825D4CB0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// b 0x822739e8
	goto loc_822739E8;
loc_822739E4:
	// li r22,0
	ctx.r22.s64 = 0;
loc_822739E8:
	// cntlzw r11,r22
	ctx.r11.u64 = ctx.r22.u32 == 0 ? 32 : __builtin_clz(ctx.r22.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82273a04
	if (ctx.cr6.eq) goto loc_82273A04;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82273b70
	if (ctx.cr6.eq) goto loc_82273B70;
	// b 0x82273b60
	goto loc_82273B60;
loc_82273A04:
	// lwz r31,20(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82273a30
	if (!ctx.cr6.eq) goto loc_82273A30;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x825d4eb8
	ctx.lr = 0x82273A1C;
	sub_825D4EB8(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82186190
	ctx.lr = 0x82273A24;
	sub_82186190(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de900
	__restgprlr_22(ctx, base);
	return;
loc_82273A30:
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82186158
	ctx.lr = 0x82273A38;
	sub_82186158(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82273a60
	if (ctx.cr6.eq) goto loc_82273A60;
	// addi r3,r25,100
	ctx.r3.s64 = ctx.r25.s64 + 100;
	// bl 0x82615d60
	ctx.lr = 0x82273A4C;
	sub_82615D60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82272d20
	ctx.lr = 0x82273A58;
	sub_82272D20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82273a64
	goto loc_82273A64;
loc_82273A60:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82273A64:
	// addi r23,r25,116
	ctx.r23.s64 = ctx.r25.s64 + 116;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82581608
	ctx.lr = 0x82273A70;
	sub_82581608(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82273b60
	if (!ctx.cr6.gt) goto loc_82273B60;
	// addi r28,r25,132
	ctx.r28.s64 = ctx.r25.s64 + 132;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r24,-32045
	ctx.r24.s64 = -2100101120;
	// li r27,12
	ctx.r27.s64 = 12;
loc_82273A90:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82584430
	ctx.lr = 0x82273ABC;
	sub_82584430(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// beq cr6,0x82273ad0
	if (ctx.cr6.eq) goto loc_82273AD0;
	// bl 0x82659610
	ctx.lr = 0x82273AD0;
	sub_82659610(ctx, base);
loc_82273AD0:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82273ae0
	if (ctx.cr6.eq) goto loc_82273AE0;
	// bl 0x82581e38
	ctx.lr = 0x82273AE0;
	sub_82581E38(ctx, base);
loc_82273AE0:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82615d60
	ctx.lr = 0x82273AE8;
	sub_82615D60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,26764(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 26764);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82273b00
	if (!ctx.cr6.eq) goto loc_82273B00;
	// bl 0x8216d120
	ctx.lr = 0x82273AFC;
	sub_8216D120(ctx, base);
	// stw r3,26764(r24)
	PPC_STORE_U32(ctx.r24.u32 + 26764, ctx.r3.u32);
loc_82273B00:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82272ea8
	ctx.lr = 0x82273B28;
	sub_82272EA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82273b3c
	if (ctx.cr6.eq) goto loc_82273B3C;
	// bl 0x82581e38
	ctx.lr = 0x82273B3C;
	sub_82581E38(ctx, base);
loc_82273B3C:
	// lfs f0,136(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stfs f0,104(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 104, temp.u32);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// lfs f0,140(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 108, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82273a90
	if (ctx.cr6.lt) goto loc_82273A90;
loc_82273B60:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x825d4eb8
	ctx.lr = 0x82273B68;
	sub_825D4EB8(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82186190
	ctx.lr = 0x82273B70;
	sub_82186190(ctx, base);
loc_82273B70:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de900
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82273B80"))) PPC_WEAK_FUNC(sub_82273B80);
PPC_FUNC_IMPL(__imp__sub_82273B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82273B88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32045
	ctx.r28.s64 = -2100101120;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r4,28120(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28120);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82273bb4
	if (!ctx.cr6.eq) goto loc_82273BB4;
	// bl 0x82272f30
	ctx.lr = 0x82273BAC;
	sub_82272F30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,28120(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28120, ctx.r4.u32);
loc_82273BB4:
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82582648
	ctx.lr = 0x82273BCC;
	sub_82582648(ctx, base);
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,32136
	ctx.r6.s64 = ctx.r11.s64 + 32136;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,6088
	ctx.r5.s64 = ctx.r11.s64 + 6088;
	// bl 0x826df418
	ctx.lr = 0x82273BEC;
	sub_826DF418(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82273bfc
	if (ctx.cr6.eq) goto loc_82273BFC;
	// bl 0x82659610
	ctx.lr = 0x82273BFC;
	sub_82659610(ctx, base);
loc_82273BFC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82273c0c
	if (ctx.cr6.eq) goto loc_82273C0C;
	// bl 0x82581e38
	ctx.lr = 0x82273C0C;
	sub_82581E38(ctx, base);
loc_82273C0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82273C18"))) PPC_WEAK_FUNC(sub_82273C18);
PPC_FUNC_IMPL(__imp__sub_82273C18) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r11,2592
	ctx.r5.s64 = ctx.r11.s64 + 2592;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82164090
	ctx.lr = 0x82273C40;
	sub_82164090(ctx, base);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,24236(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24236);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273C64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82273c78
	if (ctx.cr6.lt) goto loc_82273C78;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x82273C78;
	sub_82186190(ctx, base);
loc_82273C78:
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

__attribute__((alias("__imp__sub_82273C90"))) PPC_WEAK_FUNC(sub_82273C90);
PPC_FUNC_IMPL(__imp__sub_82273C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,2620
	ctx.r11.s64 = ctx.r11.s64 + 2620;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82273CD0"))) PPC_WEAK_FUNC(sub_82273CD0);
PPC_FUNC_IMPL(__imp__sub_82273CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82273d18
	if (ctx.cr6.eq) goto loc_82273D18;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne 0x82273d18
	if (!ctx.cr0.eq) goto loc_82273D18;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273D18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82273D18:
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
	// beq cr6,0x82273d3c
	if (ctx.cr6.eq) goto loc_82273D3C;
	// bl 0x82186190
	ctx.lr = 0x82273D38;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82273D3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82273D58"))) PPC_WEAK_FUNC(sub_82273D58);
PPC_FUNC_IMPL(__imp__sub_82273D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82273d8c
	if (!ctx.cr6.eq) goto loc_82273D8C;
	// twi 31,r0,22
loc_82273D8C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82273da0
	if (!ctx.cr6.eq) goto loc_82273DA0;
	// twi 31,r0,22
loc_82273DA0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82273de4
	if (ctx.cr6.eq) goto loc_82273DE4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bl 0x82186190
	ctx.lr = 0x82273DD8;
	sub_82186190(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82273DE4:
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82273E08"))) PPC_WEAK_FUNC(sub_82273E08);
PPC_FUNC_IMPL(__imp__sub_82273E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// bl 0x82272b08
	ctx.lr = 0x82273E28;
	sub_82272B08(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,2644
	ctx.r11.s64 = ctx.r11.s64 + 2644;
	// addi r9,r9,2632
	ctx.r9.s64 = ctx.r9.s64 + 2632;
	// addi r10,r31,112
	ctx.r10.s64 = ctx.r31.s64 + 112;
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
	// beq cr6,0x82273e68
	if (ctx.cr6.eq) goto loc_82273E68;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82273E68:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82186158
	ctx.lr = 0x82273E70;
	sub_82186158(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82273e80
	if (ctx.cr6.eq) goto loc_82273E80;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_82273E80:
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82273e90
	if (ctx.cr6.eq) goto loc_82273E90;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82273E90:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82273EB8"))) PPC_WEAK_FUNC(sub_82273EB8);
PPC_FUNC_IMPL(__imp__sub_82273EB8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82273f40
	sub_82273F40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82273EC0"))) PPC_WEAK_FUNC(sub_82273EC0);
PPC_FUNC_IMPL(__imp__sub_82273EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r31,r30,120
	ctx.r31.s64 = ctx.r30.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82405418
	ctx.lr = 0x82273EE4;
	sub_82405418(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82273EEC;
	sub_82186190(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82273f20
	if (ctx.cr6.eq) goto loc_82273F20;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne 0x82273f20
	if (!ctx.cr0.eq) goto loc_82273F20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273F20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82273F20:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82272808
	ctx.lr = 0x82273F28;
	sub_82272808(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82273F40"))) PPC_WEAK_FUNC(sub_82273F40);
PPC_FUNC_IMPL(__imp__sub_82273F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82273ec0
	ctx.lr = 0x82273F60;
	sub_82273EC0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82273f78
	if (ctx.cr6.eq) goto loc_82273F78;
	// bl 0x82186190
	ctx.lr = 0x82273F74;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82273F78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82273F90"))) PPC_WEAK_FUNC(sub_82273F90);
PPC_FUNC_IMPL(__imp__sub_82273F90) {
	PPC_FUNC_PROLOGUE();
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82274090
	if (ctx.cr6.eq) goto loc_82274090;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,2352
	ctx.r6.s64 = ctx.r11.s64 + 2352;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,2500
	ctx.r5.s64 = ctx.r11.s64 + 2500;
	// bl 0x826df418
	ctx.lr = 0x82273FD0;
	sub_826DF418(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82274090
	if (ctx.cr6.eq) goto loc_82274090;
	// addi r31,r31,120
	ctx.r31.s64 = ctx.r31.s64 + 120;
	// lwz r30,84(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
loc_82273FEC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82273FF4:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82274008
	if (ctx.cr6.eq) goto loc_82274008;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8227400c
	if (ctx.cr6.eq) goto loc_8227400C;
loc_82274008:
	// twi 31,r0,22
loc_8227400C:
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
	// beq cr6,0x82274090
	if (ctx.cr6.eq) goto loc_82274090;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82274034
	if (!ctx.cr6.eq) goto loc_82274034;
	// twi 31,r0,22
loc_82274034:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82274044
	if (!ctx.cr6.eq) goto loc_82274044;
	// twi 31,r0,22
loc_82274044:
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r8,r8,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r8.s64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82274080
	if (ctx.cr6.eq) goto loc_82274080;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82273d58
	ctx.lr = 0x8227406C;
	sub_82273D58(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82273ff4
	goto loc_82273FF4;
loc_82274080:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82273fec
	if (!ctx.cr6.eq) goto loc_82273FEC;
	// twi 31,r0,22
	// b 0x82273fec
	goto loc_82273FEC;
loc_82274090:
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

__attribute__((alias("__imp__sub_822740A8"))) PPC_WEAK_FUNC(sub_822740A8);
PPC_FUNC_IMPL(__imp__sub_822740A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x822740B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,128(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 128);
	// stb r25,100(r27)
	PPC_STORE_U8(ctx.r27.u32 + 100, ctx.r25.u8);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82274220
	if (!ctx.cr6.eq) goto loc_82274220;
	// addi r4,r27,112
	ctx.r4.s64 = ctx.r27.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8262b468
	ctx.lr = 0x822740E0;
	sub_8262B468(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822740F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x82274110
	if (ctx.cr6.eq) goto loc_82274110;
	// bl 0x821601b8
	ctx.lr = 0x82274110;
	sub_821601B8(ctx, base);
loc_82274110:
	// addi r29,r27,120
	ctx.r29.s64 = ctx.r27.s64 + 120;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r28,r11,12302
	ctx.r28.u64 = ctx.r11.u64 | 12302;
loc_8227412C:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
loc_82274130:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82274144
	if (ctx.cr6.eq) goto loc_82274144;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82274148
	if (ctx.cr6.eq) goto loc_82274148;
loc_82274144:
	// twi 31,r0,22
loc_82274148:
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
	// beq cr6,0x82274210
	if (ctx.cr6.eq) goto loc_82274210;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82274170
	if (!ctx.cr6.eq) goto loc_82274170;
	// twi 31,r0,22
loc_82274170:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82274180
	if (!ctx.cr6.eq) goto loc_82274180;
	// twi 31,r0,22
loc_82274180:
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821609d0
	ctx.lr = 0x8227418C;
	sub_821609D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822741e4
	if (ctx.cr6.eq) goto loc_822741E4;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stb r25,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r25.u8);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822741B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822741cc
	if (ctx.cr6.eq) goto loc_822741CC;
	// lbz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82274208
	if (!ctx.cr6.eq) goto loc_82274208;
loc_822741CC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822741dc
	if (!ctx.cr6.eq) goto loc_822741DC;
	// twi 31,r0,22
loc_822741DC:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8227412c
	goto loc_8227412C;
loc_822741E4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82273d58
	ctx.lr = 0x822741F4;
	sub_82273D58(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82274130
	goto loc_82274130;
loc_82274208:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,100(r27)
	PPC_STORE_U8(ctx.r27.u32 + 100, ctx.r11.u8);
loc_82274210:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82274220
	if (ctx.cr6.eq) goto loc_82274220;
	// bl 0x821601b8
	ctx.lr = 0x82274220;
	sub_821601B8(ctx, base);
loc_82274220:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82274228"))) PPC_WEAK_FUNC(sub_82274228);
PPC_FUNC_IMPL(__imp__sub_82274228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82274230;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82186158
	ctx.lr = 0x82274250;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82274278
	if (ctx.cr6.eq) goto loc_82274278;
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82273e08
	ctx.lr = 0x82274270;
	sub_82273E08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_82274278:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82274288"))) PPC_WEAK_FUNC(sub_82274288);
PPC_FUNC_IMPL(__imp__sub_82274288) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822742f8
	if (ctx.cr6.eq) goto loc_822742F8;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,2352
	ctx.r6.s64 = ctx.r11.s64 + 2352;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,2500
	ctx.r5.s64 = ctx.r11.s64 + 2500;
	// bl 0x826df418
	ctx.lr = 0x822742C4;
	sub_826DF418(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822742f8
	if (ctx.cr6.eq) goto loc_822742F8;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x826478a8
	ctx.lr = 0x822742F8;
	sub_826478A8(ctx, base);
loc_822742F8:
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

__attribute__((alias("__imp__sub_82274310"))) PPC_WEAK_FUNC(sub_82274310);
PPC_FUNC_IMPL(__imp__sub_82274310) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addis r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -65536;
	// addic. r11,r11,-4100
	ctx.xer.ca = ctx.r11.u32 > 4099;
	ctx.r11.s64 = ctx.r11.s64 + -4100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82274348
	if (ctx.cr0.eq) goto loc_82274348;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82274338
	if (ctx.cr6.eq) goto loc_82274338;
	// cmplwi cr6,r11,28758
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28758, ctx.xer);
	// beq cr6,0x82274350
	if (ctx.cr6.eq) goto loc_82274350;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82274338:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r11.u8);
	// blr 
	return;
loc_82274348:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
loc_82274350:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82274358"))) PPC_WEAK_FUNC(sub_82274358);
PPC_FUNC_IMPL(__imp__sub_82274358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82274360;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,15
	ctx.r10.s64 = 15;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82274390:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82274390
	if (!ctx.cr6.eq) goto loc_82274390;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x822743B8;
	sub_82161E08(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822743cc
	if (!ctx.cr6.gt) goto loc_822743CC;
	// twi 31,r0,22
loc_822743CC:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bge cr6,0x822743e0
	if (!ctx.cr6.lt) goto loc_822743E0;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_822743E0:
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// beq cr6,0x82274414
	if (ctx.cr6.eq) goto loc_82274414;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,5788
	ctx.r4.s64 = ctx.r11.s64 + 5788;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821637b8
	ctx.lr = 0x82274400;
	sub_821637B8(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82274414
	if (!ctx.cr6.lt) goto loc_82274414;
	// addi r31,r1,84
	ctx.r31.s64 = ctx.r1.s64 + 84;
loc_82274414:
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82274440
	if (ctx.cr6.eq) goto loc_82274440;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82274440
	if (ctx.cr6.eq) goto loc_82274440;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8261cb20
	ctx.lr = 0x82274440;
	sub_8261CB20(ctx, base);
loc_82274440:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82274454
	if (ctx.cr6.lt) goto loc_82274454;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x82274454;
	sub_82186190(ctx, base);
loc_82274454:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82274460"))) PPC_WEAK_FUNC(sub_82274460);
PPC_FUNC_IMPL(__imp__sub_82274460) {
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
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822744bc
	if (ctx.cr6.eq) goto loc_822744BC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822744a4
	if (ctx.cr6.eq) goto loc_822744A4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8216fd50
	ctx.lr = 0x8227449C;
	sub_8216FD50(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x822744A4;
	sub_82186190(ctx, base);
loc_822744A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82186190
	ctx.lr = 0x822744BC;
	sub_82186190(ctx, base);
loc_822744BC:
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

__attribute__((alias("__imp__sub_822744D0"))) PPC_WEAK_FUNC(sub_822744D0);
PPC_FUNC_IMPL(__imp__sub_822744D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r10,r11,5152
	ctx.r10.s64 = ctx.r11.s64 + 5152;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r11,2728
	ctx.r9.s64 = ctx.r11.s64 + 2728;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r8,r11,2716
	ctx.r8.s64 = ctx.r11.s64 + 2716;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stb r7,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r7.u8);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82274518"))) PPC_WEAK_FUNC(sub_82274518);
PPC_FUNC_IMPL(__imp__sub_82274518) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82274908
	sub_82274908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82274520"))) PPC_WEAK_FUNC(sub_82274520);
PPC_FUNC_IMPL(__imp__sub_82274520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,2696
	ctx.r3.s64 = ctx.r11.s64 + 2696;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82274530"))) PPC_WEAK_FUNC(sub_82274530);
PPC_FUNC_IMPL(__imp__sub_82274530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b4
	ctx.lr = 0x82274538;
	__savegprlr_23(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r24,15
	ctx.r24.s64 = 15;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// stb r25,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r25.u8);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82274570:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82274570
	if (!ctx.cr6.eq) goto loc_82274570;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82274598;
	sub_82161E08(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822745ac
	if (!ctx.cr6.gt) goto loc_822745AC;
	// twi 31,r0,22
loc_822745AC:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bge cr6,0x822745c0
	if (!ctx.cr6.lt) goto loc_822745C0;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_822745C0:
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// beq cr6,0x822745f4
	if (ctx.cr6.eq) goto loc_822745F4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,5788
	ctx.r4.s64 = ctx.r11.s64 + 5788;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821637b8
	ctx.lr = 0x822745E0;
	sub_821637B8(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x822745f4
	if (!ctx.cr6.lt) goto loc_822745F4;
	// addi r31,r1,84
	ctx.r31.s64 = ctx.r1.s64 + 84;
loc_822745F4:
	// addi r30,r26,24
	ctx.r30.s64 = ctx.r26.s64 + 24;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82274614
	if (ctx.cr6.eq) goto loc_82274614;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8227466c
	if (!ctx.cr6.eq) goto loc_8227466C;
loc_82274614:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82186158
	ctx.lr = 0x8227461C;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82274634
	if (ctx.cr6.eq) goto loc_82274634;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8261bcc0
	ctx.lr = 0x8227462C;
	sub_8261BCC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82274638
	goto loc_82274638;
loc_82274634:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82274638:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82274460
	ctx.lr = 0x82274640;
	sub_82274460(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227466c
	if (ctx.cr6.eq) goto loc_8227466C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227466c
	if (ctx.cr6.eq) goto loc_8227466C;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8261cb20
	ctx.lr = 0x8227466C;
	sub_8261CB20(ctx, base);
loc_8227466C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r24,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r24.u32);
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
	// stb r25,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r25.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82274680:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82274680
	if (!ctx.cr6.eq) goto loc_82274680;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x822746A8;
	sub_82161E08(ctx, base);
	// lbz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82274768
	if (ctx.cr6.eq) goto loc_82274768;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r5,r11,2736
	ctx.r5.s64 = ctx.r11.s64 + 2736;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82164090
	ctx.lr = 0x822746C8;
	sub_82164090(ctx, base);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x822746dc
	if (!ctx.cr6.lt) goto loc_822746DC;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
loc_822746DC:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821620e8
	ctx.lr = 0x822746E4;
	sub_821620E8(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x8261db50
	ctx.lr = 0x822746F0;
	sub_8261DB50(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82274704
	if (ctx.cr6.eq) goto loc_82274704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x82274704;
	sub_82659610(ctx, base);
loc_82274704:
	// lwz r3,16(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// stw r31,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82274718
	if (ctx.cr6.eq) goto loc_82274718;
	// bl 0x82581e38
	ctx.lr = 0x82274718;
	sub_82581E38(ctx, base);
loc_82274718:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82274728
	if (ctx.cr6.eq) goto loc_82274728;
	// bl 0x82581e38
	ctx.lr = 0x82274728;
	sub_82581E38(ctx, base);
loc_82274728:
	// lwz r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8227473c
	if (ctx.cr6.lt) goto loc_8227473C;
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x82186190
	ctx.lr = 0x8227473C;
	sub_82186190(ctx, base);
loc_8227473C:
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r24,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r24.u32);
	// stw r25,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r25.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r25,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r25.u8);
	// blt cr6,0x8227475c
	if (ctx.cr6.lt) goto loc_8227475C;
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x82186190
	ctx.lr = 0x8227475C;
	sub_82186190(ctx, base);
loc_8227475C:
	// stw r24,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r24.u32);
	// stw r25,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r25.u32);
	// stb r25,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r25.u8);
loc_82274768:
	// lwz r4,16(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822747d8
	if (ctx.cr6.eq) goto loc_822747D8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822747d8
	if (ctx.cr6.eq) goto loc_822747D8;
	// addi r11,r26,8
	ctx.r11.s64 = ctx.r26.s64 + 8;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x8259b1e8
	ctx.lr = 0x822747A0;
	sub_8259B1E8(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822747b4
	if (ctx.cr6.eq) goto loc_822747B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x822747B4;
	sub_82659610(ctx, base);
loc_822747B4:
	// lwz r3,20(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// stw r31,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822747c8
	if (ctx.cr6.eq) goto loc_822747C8;
	// bl 0x82581e38
	ctx.lr = 0x822747C8;
	sub_82581E38(ctx, base);
loc_822747C8:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822747d8
	if (ctx.cr6.eq) goto loc_822747D8;
	// bl 0x82581e38
	ctx.lr = 0x822747D8;
	sub_82581E38(ctx, base);
loc_822747D8:
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82274820
	if (ctx.cr6.eq) goto loc_82274820;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82274820
	if (ctx.cr6.eq) goto loc_82274820;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// beq cr6,0x82274808
	if (ctx.cr6.eq) goto loc_82274808;
	// bl 0x82659610
	ctx.lr = 0x82274808;
	sub_82659610(ctx, base);
loc_82274808:
	// lwz r3,20(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82274820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82274820:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82274834
	if (ctx.cr6.lt) goto loc_82274834;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82186190
	ctx.lr = 0x82274834;
	sub_82186190(ctx, base);
loc_82274834:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r24,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r24.u32);
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r25,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r25.u8);
	// blt cr6,0x82274854
	if (ctx.cr6.lt) goto loc_82274854;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x82274854;
	sub_82186190(ctx, base);
loc_82274854:
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r25,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r25.u8);
	// beq cr6,0x82274870
	if (ctx.cr6.eq) goto loc_82274870;
	// bl 0x82581e38
	ctx.lr = 0x82274870;
	sub_82581E38(ctx, base);
loc_82274870:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82274878"))) PPC_WEAK_FUNC(sub_82274878);
PPC_FUNC_IMPL(__imp__sub_82274878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82274880;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822748a0
	if (ctx.cr6.eq) goto loc_822748A0;
	// bl 0x82581e38
	ctx.lr = 0x822748A0;
	sub_82581E38(ctx, base);
loc_822748A0:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822748b4
	if (ctx.cr6.eq) goto loc_822748B4;
	// bl 0x82581e38
	ctx.lr = 0x822748B4;
	sub_82581E38(ctx, base);
loc_822748B4:
	// lwz r31,24(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822748fc
	if (ctx.cr6.eq) goto loc_822748FC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822748e8
	if (ctx.cr6.eq) goto loc_822748E8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8216fd50
	ctx.lr = 0x822748E0;
	sub_8216FD50(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x822748E8;
	sub_82186190(ctx, base);
loc_822748E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// bl 0x82186190
	ctx.lr = 0x822748FC;
	sub_82186190(ctx, base);
loc_822748FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82274908"))) PPC_WEAK_FUNC(sub_82274908);
PPC_FUNC_IMPL(__imp__sub_82274908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8217d860
	ctx.lr = 0x82274928;
	sub_8217D860(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82274940
	if (ctx.cr6.eq) goto loc_82274940;
	// bl 0x82186190
	ctx.lr = 0x8227493C;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82274940:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82274958"))) PPC_WEAK_FUNC(sub_82274958);
PPC_FUNC_IMPL(__imp__sub_82274958) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825d5800
	ctx.lr = 0x8227496C;
	sub_825D5800(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82274994
	if (ctx.cr6.eq) goto loc_82274994;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82274994
	if (ctx.cr6.eq) goto loc_82274994;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82274994;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82274994:
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

__attribute__((alias("__imp__sub_822749A8"))) PPC_WEAK_FUNC(sub_822749A8);
PPC_FUNC_IMPL(__imp__sub_822749A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x822749B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d5800
	ctx.lr = 0x822749C0;
	sub_825D5800(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82274a14
	if (ctx.cr6.eq) goto loc_82274A14;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82274a14
	if (ctx.cr6.eq) goto loc_82274A14;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5660
	ctx.lr = 0x822749E4;
	sub_825D5660(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5660
	ctx.lr = 0x822749F4;
	sub_825D5660(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82274A14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82274A14:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82274A20"))) PPC_WEAK_FUNC(sub_82274A20);
PPC_FUNC_IMPL(__imp__sub_82274A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x825d5800
	ctx.lr = 0x82274A40;
	sub_825D5800(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82274a7c
	if (ctx.cr6.eq) goto loc_82274A7C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82274a7c
	if (ctx.cr6.eq) goto loc_82274A7C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d55b0
	ctx.lr = 0x82274A64;
	sub_825D55B0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82274A7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82274A7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82274A98"))) PPC_WEAK_FUNC(sub_82274A98);
PPC_FUNC_IMPL(__imp__sub_82274A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x825d5800
	ctx.lr = 0x82274AB8;
	sub_825D5800(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82274af8
	if (ctx.cr6.eq) goto loc_82274AF8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82274af8
	if (ctx.cr6.eq) goto loc_82274AF8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d5660
	ctx.lr = 0x82274ADC;
	sub_825D5660(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82274AF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82274AF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82274B18"))) PPC_WEAK_FUNC(sub_82274B18);
PPC_FUNC_IMPL(__imp__sub_82274B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x825d5800
	ctx.lr = 0x82274B38;
	sub_825D5800(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82274b78
	if (ctx.cr6.eq) goto loc_82274B78;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82274b78
	if (ctx.cr6.eq) goto loc_82274B78;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d5660
	ctx.lr = 0x82274B5C;
	sub_825D5660(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82274B78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82274B78:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82274B98"))) PPC_WEAK_FUNC(sub_82274B98);
PPC_FUNC_IMPL(__imp__sub_82274B98) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825d5800
	ctx.lr = 0x82274BAC;
	sub_825D5800(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82274bd4
	if (ctx.cr6.eq) goto loc_82274BD4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82274bd4
	if (ctx.cr6.eq) goto loc_82274BD4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82274BD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82274BD4:
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

__attribute__((alias("__imp__sub_82274BE8"))) PPC_WEAK_FUNC(sub_82274BE8);
PPC_FUNC_IMPL(__imp__sub_82274BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82274BF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d5800
	ctx.lr = 0x82274C00;
	sub_825D5800(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82274c54
	if (ctx.cr6.eq) goto loc_82274C54;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82274c54
	if (ctx.cr6.eq) goto loc_82274C54;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5660
	ctx.lr = 0x82274C24;
	sub_825D5660(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5660
	ctx.lr = 0x82274C34;
	sub_825D5660(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
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
	ctx.lr = 0x82274C54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82274C54:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82274C60"))) PPC_WEAK_FUNC(sub_82274C60);
PPC_FUNC_IMPL(__imp__sub_82274C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x825d5800
	ctx.lr = 0x82274C80;
	sub_825D5800(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82274cc0
	if (ctx.cr6.eq) goto loc_82274CC0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82274cc0
	if (ctx.cr6.eq) goto loc_82274CC0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d5660
	ctx.lr = 0x82274CA4;
	sub_825D5660(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82274CC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82274CC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82274CE0"))) PPC_WEAK_FUNC(sub_82274CE0);
PPC_FUNC_IMPL(__imp__sub_82274CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82274CE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d5800
	ctx.lr = 0x82274CF8;
	sub_825D5800(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82274d74
	if (ctx.cr6.eq) goto loc_82274D74;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82274d74
	if (ctx.cr6.eq) goto loc_82274D74;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5660
	ctx.lr = 0x82274D1C;
	sub_825D5660(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d51a8
	ctx.lr = 0x82274D28;
	sub_825D51A8(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bge cr6,0x82274d48
	if (!ctx.cr6.lt) goto loc_82274D48;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r11,4124
	ctx.r5.s64 = ctx.r11.s64 + 4124;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// b 0x82274d68
	goto loc_82274D68;
loc_82274D48:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5660
	ctx.lr = 0x82274D54;
	sub_825D5660(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
loc_82274D68:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82274D74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82274D74:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82274D80"))) PPC_WEAK_FUNC(sub_82274D80);
PPC_FUNC_IMPL(__imp__sub_82274D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x825d5800
	ctx.lr = 0x82274DA0;
	sub_825D5800(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82274de0
	if (ctx.cr6.eq) goto loc_82274DE0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82274de0
	if (ctx.cr6.eq) goto loc_82274DE0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d5660
	ctx.lr = 0x82274DC4;
	sub_825D5660(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
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
	ctx.lr = 0x82274DE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82274DE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82274E00"))) PPC_WEAK_FUNC(sub_82274E00);
PPC_FUNC_IMPL(__imp__sub_82274E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x825d5800
	ctx.lr = 0x82274E20;
	sub_825D5800(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82274e60
	if (ctx.cr6.eq) goto loc_82274E60;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82274e60
	if (ctx.cr6.eq) goto loc_82274E60;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d5660
	ctx.lr = 0x82274E44;
	sub_825D5660(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82274E60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82274E60:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82274E80"))) PPC_WEAK_FUNC(sub_82274E80);
PPC_FUNC_IMPL(__imp__sub_82274E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x825d5800
	ctx.lr = 0x82274EA0;
	sub_825D5800(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82274ee0
	if (ctx.cr6.eq) goto loc_82274EE0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82274ee0
	if (ctx.cr6.eq) goto loc_82274EE0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d5660
	ctx.lr = 0x82274EC4;
	sub_825D5660(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82274EE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82274EE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82274F00"))) PPC_WEAK_FUNC(sub_82274F00);
PPC_FUNC_IMPL(__imp__sub_82274F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x825d5800
	ctx.lr = 0x82274F20;
	sub_825D5800(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82274f60
	if (ctx.cr6.eq) goto loc_82274F60;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82274f60
	if (ctx.cr6.eq) goto loc_82274F60;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d5660
	ctx.lr = 0x82274F44;
	sub_825D5660(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82274F60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82274F60:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82274F80"))) PPC_WEAK_FUNC(sub_82274F80);
PPC_FUNC_IMPL(__imp__sub_82274F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x825d5800
	ctx.lr = 0x82274FA0;
	sub_825D5800(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82274fe0
	if (ctx.cr6.eq) goto loc_82274FE0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82274fe0
	if (ctx.cr6.eq) goto loc_82274FE0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d5660
	ctx.lr = 0x82274FC4;
	sub_825D5660(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
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
	ctx.lr = 0x82274FE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82274FE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82275000"))) PPC_WEAK_FUNC(sub_82275000);
PPC_FUNC_IMPL(__imp__sub_82275000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82275008;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x826dfb84
	ctx.lr = 0x82275010;
	__savefpr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d5800
	ctx.lr = 0x82275020;
	sub_825D5800(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82275148
	if (ctx.cr6.eq) goto loc_82275148;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82275148
	if (ctx.cr6.eq) goto loc_82275148;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d55b0
	ctx.lr = 0x82275044;
	sub_825D55B0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x825d55b0
	ctx.lr = 0x82275054;
	sub_825D55B0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x825d55b0
	ctx.lr = 0x82275064;
	sub_825D55B0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// bl 0x825d55b0
	ctx.lr = 0x82275074;
	sub_825D55B0(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x825d5660
	ctx.lr = 0x82275084;
	sub_825D5660(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d55b0
	ctx.lr = 0x82275094;
	sub_825D55B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64));
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f27,f1
	ctx.f27.f64 = ctx.f1.f64;
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f31,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f0,-29804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,-13228(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13228);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x825d20b0
	ctx.lr = 0x822750E0;
	sub_825D20B0(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// frsp f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// frsp f0,f29
	ctx.f0.f64 = double(float(ctx.f29.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// frsp f0,f28
	ctx.f0.f64 = double(float(ctx.f28.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fctiwz f0,f27
	ctx.f0.s64 = (ctx.f27.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f27.f64));
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82275148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82275148:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x826dfbd0
	ctx.lr = 0x82275158;
	__restfpr_27(ctx, base);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82275160"))) PPC_WEAK_FUNC(sub_82275160);
PPC_FUNC_IMPL(__imp__sub_82275160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,4099
	ctx.r11.u64 = ctx.r11.u64 | 4099;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// lwz r11,2596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2596);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82275180"))) PPC_WEAK_FUNC(sub_82275180);
PPC_FUNC_IMPL(__imp__sub_82275180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// lwz r11,2596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2596);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82595090
	ctx.lr = 0x822751AC;
	sub_82595090(ctx, base);
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

__attribute__((alias("__imp__sub_822751C8"))) PPC_WEAK_FUNC(sub_822751C8);
PPC_FUNC_IMPL(__imp__sub_822751C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,4098
	ctx.r11.u64 = ctx.r11.u64 | 4098;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// lwz r11,2596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2596);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82595090
	ctx.lr = 0x822751FC;
	sub_82595090(ctx, base);
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

__attribute__((alias("__imp__sub_82275218"))) PPC_WEAK_FUNC(sub_82275218);
PPC_FUNC_IMPL(__imp__sub_82275218) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,81(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 81);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82275238
	if (!ctx.cr6.eq) goto loc_82275238;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82275238:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82275260
	if (!ctx.cr6.eq) goto loc_82275260;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82275260:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82275280
	if (!ctx.cr6.eq) goto loc_82275280;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82275280:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82275290"))) PPC_WEAK_FUNC(sub_82275290);
PPC_FUNC_IMPL(__imp__sub_82275290) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,81(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 81);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822752b4
	if (!ctx.cr6.eq) goto loc_822752B4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_822752B4:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822752dc
	if (!ctx.cr6.eq) goto loc_822752DC;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_822752DC:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822752fc
	if (!ctx.cr6.eq) goto loc_822752FC;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_822752FC:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82275310"))) PPC_WEAK_FUNC(sub_82275310);
PPC_FUNC_IMPL(__imp__sub_82275310) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82275320
	if (!ctx.cr6.eq) goto loc_82275320;
	// twi 31,r0,22
loc_82275320:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r10,81(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82275338
	if (ctx.cr6.eq) goto loc_82275338;
	// twi 31,r0,22
	// blr 
	return;
loc_82275338:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,81(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 81);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82275374
	if (!ctx.cr6.eq) goto loc_82275374;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,81(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8227536c
	if (!ctx.cr6.eq) goto loc_8227536C;
loc_82275358:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,81(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82275358
	if (ctx.cr6.eq) goto loc_82275358;
loc_8227536C:
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_82275374:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,81(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822753ac
	if (!ctx.cr6.eq) goto loc_822753AC;
loc_82275384:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822753ac
	if (!ctx.cr6.eq) goto loc_822753AC;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,81(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82275384
	if (ctx.cr6.eq) goto loc_82275384;
loc_822753AC:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822753B8"))) PPC_WEAK_FUNC(sub_822753B8);
PPC_FUNC_IMPL(__imp__sub_822753B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822753c8
	if (!ctx.cr6.eq) goto loc_822753C8;
	// twi 31,r0,22
loc_822753C8:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r11,81(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 81);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822753f4
	if (ctx.cr6.eq) goto loc_822753F4;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lbz r11,81(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822753EC:
	// twi 31,r0,22
	// blr 
	return;
loc_822753F4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,81(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82275430
	if (!ctx.cr6.eq) goto loc_82275430;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,81(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 81);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82275478
	if (!ctx.cr6.eq) goto loc_82275478;
loc_82275414:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,81(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 81);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82275414
	if (ctx.cr6.eq) goto loc_82275414;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82275430:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r10,81(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82275468
	if (!ctx.cr6.eq) goto loc_82275468;
loc_82275440:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82275468
	if (!ctx.cr6.eq) goto loc_82275468;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,81(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82275440
	if (ctx.cr6.eq) goto loc_82275440;
loc_82275468:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r10,81(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 81);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822753ec
	if (!ctx.cr6.eq) goto loc_822753EC;
loc_82275478:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82275480"))) PPC_WEAK_FUNC(sub_82275480);
PPC_FUNC_IMPL(__imp__sub_82275480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82275488;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// std r3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// lwz r29,140(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r30,136(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_822754A0:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822754b4
	if (ctx.cr6.eq) goto loc_822754B4;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x822754b8
	if (ctx.cr6.eq) goto loc_822754B8;
loc_822754B4:
	// twi 31,r0,22
loc_822754B8:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
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
	// beq cr6,0x822754f0
	if (ctx.cr6.eq) goto loc_822754F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826027a8
	ctx.lr = 0x822754EC;
	sub_826027A8(ctx, base);
	// b 0x822754a0
	goto loc_822754A0;
loc_822754F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822754F8"))) PPC_WEAK_FUNC(sub_822754F8);
PPC_FUNC_IMPL(__imp__sub_822754F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// addi r9,r10,3140
	ctx.r9.s64 = ctx.r10.s64 + 3140;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82275528"))) PPC_WEAK_FUNC(sub_82275528);
PPC_FUNC_IMPL(__imp__sub_82275528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82275530;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r29,28
	ctx.r28.s64 = ctx.r29.s64 + 28;
	// addi r31,r28,12
	ctx.r31.s64 = ctx.r28.s64 + 12;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82275554
	if (ctx.cr6.lt) goto loc_82275554;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82275554;
	sub_82186190(ctx, base);
loc_82275554:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82275578
	if (ctx.cr6.eq) goto loc_82275578;
	// bl 0x821601b8
	ctx.lr = 0x82275578;
	sub_821601B8(ctx, base);
loc_82275578:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8227558c
	if (ctx.cr6.lt) goto loc_8227558C;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x8227558C;
	sub_82186190(ctx, base);
loc_8227558C:
	// stw r27,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r27.u32);
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// stb r30,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822755A0"))) PPC_WEAK_FUNC(sub_822755A0);
PPC_FUNC_IMPL(__imp__sub_822755A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82186158
	ctx.lr = 0x822755BC;
	sub_82186158(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822755cc
	if (ctx.cr6.eq) goto loc_822755CC;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_822755CC:
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822755dc
	if (ctx.cr6.eq) goto loc_822755DC;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822755DC:
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822755ec
	if (ctx.cr6.eq) goto loc_822755EC;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822755EC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r11.u8);
	// stb r10,81(r3)
	PPC_STORE_U8(ctx.r3.u32 + 81, ctx.r10.u8);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stb r11,81(r3)
	PPC_STORE_U8(ctx.r3.u32 + 81, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82275630"))) PPC_WEAK_FUNC(sub_82275630);
PPC_FUNC_IMPL(__imp__sub_82275630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82275638;
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
	// lbz r11,81(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822756b8
	if (!ctx.cr6.eq) goto loc_822756B8;
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
loc_8227565C:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82275678
	if (ctx.cr6.lt) goto loc_82275678;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x8227567c
	goto loc_8227567C;
loc_82275678:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_8227567C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x8216a080
	ctx.lr = 0x82275688;
	sub_8216A080(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822756a4
	if (ctx.cr6.eq) goto loc_822756A4;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x822756ac
	goto loc_822756AC;
loc_822756A4:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_822756AC:
	// lbz r11,81(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227565c
	if (ctx.cr6.eq) goto loc_8227565C;
loc_822756B8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822756C8"))) PPC_WEAK_FUNC(sub_822756C8);
PPC_FUNC_IMPL(__imp__sub_822756C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x822756D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r11,45(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 45);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82275750
	if (!ctx.cr6.eq) goto loc_82275750;
loc_822756F0:
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8227570c
	if (ctx.cr6.lt) goto loc_8227570C;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82275710
	goto loc_82275710;
loc_8227570C:
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
loc_82275710:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216a080
	ctx.lr = 0x82275720;
	sub_8216A080(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82275740
	if (ctx.cr6.eq) goto loc_82275740;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82275744
	goto loc_82275744;
loc_82275740:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82275744:
	// lbz r11,45(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 45);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822756f0
	if (ctx.cr6.eq) goto loc_822756F0;
loc_82275750:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82275760"))) PPC_WEAK_FUNC(sub_82275760);
PPC_FUNC_IMPL(__imp__sub_82275760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82275768;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq cr6,0x82275798
	if (ctx.cr6.eq) goto loc_82275798;
	// bl 0x82160140
	ctx.lr = 0x82275798;
	sub_82160140(ctx, base);
loc_82275798:
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// bl 0x82161d10
	ctx.lr = 0x822757C4;
	sub_82161D10(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822757d4
	if (ctx.cr6.eq) goto loc_822757D4;
	// bl 0x821601b8
	ctx.lr = 0x822757D4;
	sub_821601B8(ctx, base);
loc_822757D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822757E0"))) PPC_WEAK_FUNC(sub_822757E0);
PPC_FUNC_IMPL(__imp__sub_822757E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq cr6,0x82275818
	if (ctx.cr6.eq) goto loc_82275818;
	// bl 0x82160140
	ctx.lr = 0x82275818;
	sub_82160140(ctx, base);
loc_82275818:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// bl 0x82161d10
	ctx.lr = 0x82275848;
	sub_82161D10(ctx, base);
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

__attribute__((alias("__imp__sub_82275868"))) PPC_WEAK_FUNC(sub_82275868);
PPC_FUNC_IMPL(__imp__sub_82275868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82275870;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82275630
	ctx.lr = 0x8227588C;
	sub_82275630(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// bne cr6,0x8227589c
	if (!ctx.cr6.eq) goto loc_8227589C;
	// twi 31,r0,22
loc_8227589C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82275904
	if (!ctx.cr6.eq) goto loc_82275904;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x822758d4
	if (ctx.cr6.lt) goto loc_822758D4;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x822758d8
	goto loc_822758D8;
loc_822758D4:
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
loc_822758D8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216a080
	ctx.lr = 0x822758E8;
	sub_8216A080(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82275904
	if (!ctx.cr6.eq) goto loc_82275904;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// b 0x82275914
	goto loc_82275914;
loc_82275904:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_82275914:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82275930"))) PPC_WEAK_FUNC(sub_82275930);
PPC_FUNC_IMPL(__imp__sub_82275930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// bl 0x82161d10
	ctx.lr = 0x8227596C;
	sub_82161D10(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82275990"))) PPC_WEAK_FUNC(sub_82275990);
PPC_FUNC_IMPL(__imp__sub_82275990) {
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
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82275868
	ctx.lr = 0x822759BC;
	sub_82275868(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82275868
	ctx.lr = 0x822759CC;
	sub_82275868(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822759ec
	if (ctx.cr6.eq) goto loc_822759EC;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x822759f0
	if (ctx.cr6.eq) goto loc_822759F0;
loc_822759EC:
	// twi 31,r0,22
loc_822759F0:
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
	// beq cr6,0x82275a30
	if (ctx.cr6.eq) goto loc_82275A30;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82275a1c
	if (!ctx.cr6.eq) goto loc_82275A1C;
	// twi 31,r0,22
loc_82275A1C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82275a2c
	if (!ctx.cr6.eq) goto loc_82275A2C;
	// twi 31,r0,22
loc_82275A2C:
	// lwz r7,48(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
loc_82275A30:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82275a48
	if (ctx.cr6.eq) goto loc_82275A48;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82275a4c
	if (ctx.cr6.eq) goto loc_82275A4C;
loc_82275A48:
	// twi 31,r0,22
loc_82275A4C:
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
	// beq cr6,0x82275a8c
	if (ctx.cr6.eq) goto loc_82275A8C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82275a78
	if (!ctx.cr6.eq) goto loc_82275A78;
	// twi 31,r0,22
loc_82275A78:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82275a88
	if (!ctx.cr6.eq) goto loc_82275A88;
	// twi 31,r0,22
loc_82275A88:
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
loc_82275A8C:
	// subfc r11,r8,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r8.u32;
	ctx.r11.s64 = ctx.r7.s64 - ctx.r8.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
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

__attribute__((alias("__imp__sub_82275AB0"))) PPC_WEAK_FUNC(sub_82275AB0);
PPC_FUNC_IMPL(__imp__sub_82275AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82275AB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r28,4
	ctx.r31.s64 = ctx.r28.s64 + 4;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82275ae8
	if (ctx.cr6.lt) goto loc_82275AE8;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82275aec
	goto loc_82275AEC;
loc_82275AE8:
	// addi r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 4;
loc_82275AEC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216a080
	ctx.lr = 0x82275AFC;
	sub_8216A080(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82275b2c
	if (ctx.cr6.eq) goto loc_82275B2C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82275990
	ctx.lr = 0x82275B24;
	sub_82275990(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_82275B2C:
	// addi r31,r28,32
	ctx.r31.s64 = ctx.r28.s64 + 32;
	// addi r30,r29,32
	ctx.r30.s64 = ctx.r29.s64 + 32;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82275b4c
	if (ctx.cr6.lt) goto loc_82275B4C;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82275b50
	goto loc_82275B50;
loc_82275B4C:
	// addi r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 4;
loc_82275B50:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216a080
	ctx.lr = 0x82275B60;
	sub_8216A080(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82275b8c
	if (ctx.cr6.eq) goto loc_82275B8C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216d528
	ctx.lr = 0x82275B84;
	sub_8216D528(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_82275B8C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82275BA8"))) PPC_WEAK_FUNC(sub_82275BA8);
PPC_FUNC_IMPL(__imp__sub_82275BA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82275990
	sub_82275990(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82275BB0"))) PPC_WEAK_FUNC(sub_82275BB0);
PPC_FUNC_IMPL(__imp__sub_82275BB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82275ab0
	sub_82275AB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82275BB8"))) PPC_WEAK_FUNC(sub_82275BB8);
PPC_FUNC_IMPL(__imp__sub_82275BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82275BC0;
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
	ctx.lr = 0x82275C0C;
	sub_82161D10(ctx, base);
	// addi r4,r29,28
	ctx.r4.s64 = ctx.r29.s64 + 28;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x822757e0
	ctx.lr = 0x82275C18;
	sub_822757E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r27,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r27.u8);
	// stb r28,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r28.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82275C30"))) PPC_WEAK_FUNC(sub_82275C30);
PPC_FUNC_IMPL(__imp__sub_82275C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82275C38;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r26,15
	ctx.r26.s64 = 15;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r30.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r26,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r26.u32);
	// stb r30,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r30.u8);
	// bl 0x82161d10
	ctx.lr = 0x82275C68;
	sub_82161D10(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r28,28
	ctx.r3.s64 = ctx.r28.s64 + 28;
	// bl 0x822757e0
	ctx.lr = 0x82275C74;
	sub_822757E0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82275c88
	if (ctx.cr6.lt) goto loc_82275C88;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82275C88;
	sub_82186190(ctx, base);
loc_82275C88:
	// addi r29,r27,12
	ctx.r29.s64 = ctx.r27.s64 + 12;
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82275cac
	if (ctx.cr6.lt) goto loc_82275CAC;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82275CAC;
	sub_82186190(ctx, base);
loc_82275CAC:
	// stw r26,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r26.u32);
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// stb r30,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r30.u8);
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82275cc8
	if (ctx.cr6.eq) goto loc_82275CC8;
	// bl 0x821601b8
	ctx.lr = 0x82275CC8;
	sub_821601B8(ctx, base);
loc_82275CC8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82275CD8"))) PPC_WEAK_FUNC(sub_82275CD8);
PPC_FUNC_IMPL(__imp__sub_82275CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82275CE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// bl 0x82161d10
	ctx.lr = 0x82275D10;
	sub_82161D10(ctx, base);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82275d28
	if (ctx.cr6.lt) goto loc_82275D28;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82275D28;
	sub_82186190(ctx, base);
loc_82275D28:
	// stw r27,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// stb r29,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r29.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82275D40"))) PPC_WEAK_FUNC(sub_82275D40);
PPC_FUNC_IMPL(__imp__sub_82275D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b8
	ctx.lr = 0x82275D48;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r5.u64);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r31,260(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r25,15
	ctx.r25.s64 = 15;
	// li r27,0
	ctx.r27.s64 = 0;
	// lbz r11,81(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82275dc4
	if (ctx.cr6.eq) goto loc_82275DC4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,6488
	ctx.r4.s64 = ctx.r11.s64 + 6488;
	// bl 0x821620e8
	ctx.lr = 0x82275D80;
	sub_821620E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82170138
	ctx.lr = 0x82275D8C;
	sub_82170138(ctx, base);
	// bl 0x82160c28
	ctx.lr = 0x82275D90;
	sub_82160C28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,5776
	ctx.r11.s64 = ctx.r11.s64 + 5776;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x821639b8
	ctx.lr = 0x82275DA4;
	sub_821639B8(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82275db8
	if (ctx.cr6.lt) goto loc_82275DB8;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x82275DB8;
	sub_82186190(ctx, base);
loc_82275DB8:
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stb r27,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r27.u8);
loc_82275DC4:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// bl 0x82275310
	ctx.lr = 0x82275DD0;
	sub_82275310(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,81(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82275de8
	if (ctx.cr6.eq) goto loc_82275DE8;
	// lwz r29,8(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x82275e10
	goto loc_82275E10;
loc_82275DE8:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r10,81(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 81);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82275e00
	if (ctx.cr6.eq) goto loc_82275E00;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x82275e10
	goto loc_82275E10;
loc_82275E00:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bne cr6,0x82275f04
	if (!ctx.cr6.eq) goto loc_82275F04;
loc_82275E10:
	// lbz r11,81(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 81);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82275e24
	if (!ctx.cr6.eq) goto loc_82275E24;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_82275E24:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82275e3c
	if (!ctx.cr6.eq) goto loc_82275E3C;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// b 0x82275e54
	goto loc_82275E54;
loc_82275E3C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82275e50
	if (!ctx.cr6.eq) goto loc_82275E50;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// b 0x82275e54
	goto loc_82275E54;
loc_82275E50:
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_82275E54:
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82275ea4
	if (!ctx.cr6.eq) goto loc_82275EA4;
	// lbz r11,81(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 81);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82275e78
	if (ctx.cr6.eq) goto loc_82275E78;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82275ea0
	goto loc_82275EA0;
loc_82275E78:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lbz r8,81(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82275ea0
	if (!ctx.cr6.eq) goto loc_82275EA0;
loc_82275E8C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r8,81(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82275e8c
	if (ctx.cr6.eq) goto loc_82275E8C;
loc_82275EA0:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82275EA4:
	// lwz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82275f9c
	if (!ctx.cr6.eq) goto loc_82275F9C;
	// lbz r11,81(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 81);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82275ecc
	if (ctx.cr6.eq) goto loc_82275ECC;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// b 0x82275f9c
	goto loc_82275F9C;
loc_82275ECC:
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,81(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 81);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82275efc
	if (!ctx.cr6.eq) goto loc_82275EFC;
loc_82275EE4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,81(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 81);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82275ee4
	if (ctx.cr6.eq) goto loc_82275EE4;
loc_82275EFC:
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// b 0x82275f9c
	goto loc_82275F9C;
loc_82275F04:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82275f28
	if (!ctx.cr6.eq) goto loc_82275F28;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x82275f50
	goto loc_82275F50;
loc_82275F28:
	// lbz r10,81(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 81);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82275f3c
	if (!ctx.cr6.eq) goto loc_82275F3C;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_82275F3C:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_82275F50:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82275f68
	if (!ctx.cr6.eq) goto loc_82275F68;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82275f84
	goto loc_82275F84;
loc_82275F68:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82275f80
	if (!ctx.cr6.eq) goto loc_82275F80;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x82275f84
	goto loc_82275F84;
loc_82275F80:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_82275F84:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lbz r9,80(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 80);
	// lbz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// stb r9,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r9.u8);
	// stb r10,80(r26)
	PPC_STORE_U8(ctx.r26.u32 + 80, ctx.r10.u8);
loc_82275F9C:
	// lbz r11,80(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82276138
	if (!ctx.cr6.eq) goto loc_82276138;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82276134
	if (ctx.cr6.eq) goto loc_82276134;
loc_82275FBC:
	// lbz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82276134
	if (!ctx.cr6.eq) goto loc_82276134;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82276078
	if (!ctx.cr6.eq) goto loc_82276078;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82275ffc
	if (!ctx.cr6.eq) goto loc_82275FFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r30.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r27,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r27.u8);
	// bl 0x82275218
	ctx.lr = 0x82275FF8;
	sub_82275218(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82275FFC:
	// lbz r10,81(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822760cc
	if (!ctx.cr6.eq) goto loc_822760CC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 80);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82276028
	if (!ctx.cr6.eq) goto loc_82276028;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 80);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x822760c8
	if (ctx.cr6.eq) goto loc_822760C8;
loc_82276028:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 80);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82276054
	if (!ctx.cr6.eq) goto loc_82276054;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r30,80(r10)
	PPC_STORE_U8(ctx.r10.u32 + 80, ctx.r30.u8);
	// stb r27,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r27.u8);
	// bl 0x82275290
	ctx.lr = 0x82276050;
	sub_82275290(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82276054:
	// lbz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r10,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r10.u8);
	// stb r30,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r30.u8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r30,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r30.u8);
	// bl 0x82275218
	ctx.lr = 0x82276074;
	sub_82275218(ctx, base);
	// b 0x82276134
	goto loc_82276134;
loc_82276078:
	// lbz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8227609c
	if (!ctx.cr6.eq) goto loc_8227609C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r30.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r27,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r27.u8);
	// bl 0x82275290
	ctx.lr = 0x82276098;
	sub_82275290(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8227609C:
	// lbz r10,81(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822760cc
	if (!ctx.cr6.eq) goto loc_822760CC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 80);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x822760e8
	if (!ctx.cr6.eq) goto loc_822760E8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 80);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x822760e8
	if (!ctx.cr6.eq) goto loc_822760E8;
loc_822760C8:
	// stb r27,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r27.u8);
loc_822760CC:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82275fbc
	if (!ctx.cr6.eq) goto loc_82275FBC;
	// b 0x82276134
	goto loc_82276134;
loc_822760E8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 80);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82276114
	if (!ctx.cr6.eq) goto loc_82276114;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r30,80(r10)
	PPC_STORE_U8(ctx.r10.u32 + 80, ctx.r30.u8);
	// stb r27,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r27.u8);
	// bl 0x82275218
	ctx.lr = 0x82276110;
	sub_82275218(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82276114:
	// lbz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r10,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r10.u8);
	// stb r30,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r30.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r30,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r30.u8);
	// bl 0x82275290
	ctx.lr = 0x82276134;
	sub_82275290(ctx, base);
loc_82276134:
	// stb r30,80(r29)
	PPC_STORE_U8(ctx.r29.u32 + 80, ctx.r30.u8);
loc_82276138:
	// addi r30,r26,12
	ctx.r30.s64 = ctx.r26.s64 + 12;
	// addi r29,r30,28
	ctx.r29.s64 = ctx.r30.s64 + 28;
	// addi r31,r29,12
	ctx.r31.s64 = ctx.r29.s64 + 12;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82276158
	if (ctx.cr6.lt) goto loc_82276158;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82276158;
	sub_82186190(ctx, base);
loc_82276158:
	// stw r25,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r25.u32);
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// stb r27,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r27.u8);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82276174
	if (ctx.cr6.eq) goto loc_82276174;
	// bl 0x821601b8
	ctx.lr = 0x82276174;
	sub_821601B8(ctx, base);
loc_82276174:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82276188
	if (ctx.cr6.lt) goto loc_82276188;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82276188;
	sub_82186190(ctx, base);
loc_82276188:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r25,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r25.u32);
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r27,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r27.u8);
	// bl 0x82186190
	ctx.lr = 0x8227619C;
	sub_82186190(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822761b0
	if (ctx.cr6.eq) goto loc_822761B0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
loc_822761B0:
	// ld r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// std r11,0(r24)
	PPC_STORE_U64(ctx.r24.u32 + 0, ctx.r11.u64);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822761C8"))) PPC_WEAK_FUNC(sub_822761C8);
PPC_FUNC_IMPL(__imp__sub_822761C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b8
	ctx.lr = 0x822761D0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// lbz r11,81(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 81);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82276278
	if (!ctx.cr6.eq) goto loc_82276278;
	// li r25,15
	ctx.r25.s64 = 15;
	// li r26,0
	ctx.r26.s64 = 0;
loc_822761F4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x822761c8
	ctx.lr = 0x82276200;
	sub_822761C8(ctx, base);
	// addi r30,r27,12
	ctx.r30.s64 = ctx.r27.s64 + 12;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r28,r30,28
	ctx.r28.s64 = ctx.r30.s64 + 28;
	// addi r31,r28,12
	ctx.r31.s64 = ctx.r28.s64 + 12;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82276224
	if (ctx.cr6.lt) goto loc_82276224;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82276224;
	sub_82186190(ctx, base);
loc_82276224:
	// stw r25,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r25.u32);
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// stb r26,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r26.u8);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82276240
	if (ctx.cr6.eq) goto loc_82276240;
	// bl 0x821601b8
	ctx.lr = 0x82276240;
	sub_821601B8(ctx, base);
loc_82276240:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82276254
	if (ctx.cr6.lt) goto loc_82276254;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82276254;
	sub_82186190(ctx, base);
loc_82276254:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r25,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r25.u32);
	// stw r26,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r26.u32);
	// stb r26,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r26.u8);
	// bl 0x82186190
	ctx.lr = 0x82276268;
	sub_82186190(ctx, base);
	// lbz r11,81(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 81);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822761f4
	if (ctx.cr6.eq) goto loc_822761F4;
loc_82276278:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82276280"))) PPC_WEAK_FUNC(sub_82276280);
PPC_FUNC_IMPL(__imp__sub_82276280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b8
	ctx.lr = 0x82276288;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lis r11,963
	ctx.r11.s64 = 63111168;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// ori r11,r11,50114
	ctx.r11.u64 = ctx.r11.u64 | 50114;
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
	// blt cr6,0x82276310
	if (ctx.cr6.lt) goto loc_82276310;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,6468
	ctx.r4.s64 = ctx.r11.s64 + 6468;
	// bl 0x821620e8
	ctx.lr = 0x822762C8;
	sub_821620E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82163e00
	ctx.lr = 0x822762D4;
	sub_82163E00(ctx, base);
	// bl 0x82160c28
	ctx.lr = 0x822762D8;
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
	ctx.lr = 0x822762EC;
	sub_821639B8(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82276300
	if (ctx.cr6.lt) goto loc_82276300;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x82276300;
	sub_82186190(ctx, base);
loc_82276300:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stb r26,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r26.u8);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_82276310:
	// li r3,84
	ctx.r3.s64 = 84;
	// lwz r30,4(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x82186158
	ctx.lr = 0x8227631C;
	sub_82186158(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82276340
	if (ctx.cr6.eq) goto loc_82276340;
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
	// bl 0x82275bb8
	ctx.lr = 0x82276340;
	sub_82275BB8(ctx, base);
loc_82276340:
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
	// bne cr6,0x8227636c
	if (!ctx.cr6.eq) goto loc_8227636C;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// b 0x822763a8
	goto loc_822763A8;
loc_8227636C:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82276394
	if (ctx.cr6.eq) goto loc_82276394;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822763ac
	if (!ctx.cr6.eq) goto loc_822763AC;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x822763ac
	goto loc_822763AC;
loc_82276394:
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822763ac
	if (!ctx.cr6.eq) goto loc_822763AC;
loc_822763A8:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_822763AC:
	// addi r11,r25,4
	ctx.r11.s64 = ctx.r25.s64 + 4;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822765ac
	if (!ctx.cr6.eq) goto loc_822765AC;
loc_822763C8:
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
	// bne cr6,0x822764c8
	if (!ctx.cr6.eq) goto loc_822764C8;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lbz r8,80(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 80);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82276414
	if (!ctx.cr6.eq) goto loc_82276414;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stb r30,80(r10)
	PPC_STORE_U8(ctx.r10.u32 + 80, ctx.r30.u8);
	// stb r30,80(r9)
	PPC_STORE_U8(ctx.r9.u32 + 80, ctx.r30.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r26,80(r10)
	PPC_STORE_U8(ctx.r10.u32 + 80, ctx.r26.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82276598
	goto loc_82276598;
loc_82276414:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82276430
	if (!ctx.cr6.eq) goto loc_82276430;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82275218
	ctx.lr = 0x82276430;
	sub_82275218(ctx, base);
loc_82276430:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r30,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r30.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r26,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r26.u8);
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
	// lbz r9,81(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 81);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82276470
	if (!ctx.cr6.eq) goto loc_82276470;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_82276470:
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
	// bne cr6,0x82276498
	if (!ctx.cr6.eq) goto loc_82276498;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82276598
	goto loc_82276598;
loc_82276498:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x822764b8
	if (!ctx.cr6.eq) goto loc_822764B8;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82276598
	goto loc_82276598;
loc_822764B8:
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82276598
	goto loc_82276598;
loc_822764C8:
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r8,80(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 80);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822764fc
	if (!ctx.cr6.eq) goto loc_822764FC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r30,80(r10)
	PPC_STORE_U8(ctx.r10.u32 + 80, ctx.r30.u8);
	// stb r30,80(r9)
	PPC_STORE_U8(ctx.r9.u32 + 80, ctx.r30.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r26,80(r10)
	PPC_STORE_U8(ctx.r10.u32 + 80, ctx.r26.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82276598
	goto loc_82276598;
loc_822764FC:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82276518
	if (!ctx.cr6.eq) goto loc_82276518;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82275290
	ctx.lr = 0x82276518;
	sub_82275290(ctx, base);
loc_82276518:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r30,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r30.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r26,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r26.u8);
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
	// lbz r8,81(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 81);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82276554
	if (!ctx.cr6.eq) goto loc_82276554;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
loc_82276554:
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
	// bne cr6,0x82276574
	if (!ctx.cr6.eq) goto loc_82276574;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// b 0x82276590
	goto loc_82276590;
loc_82276574:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8227658c
	if (!ctx.cr6.eq) goto loc_8227658C;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// b 0x82276590
	goto loc_82276590;
loc_8227658C:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
loc_82276590:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82276598:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822763c8
	if (ctx.cr6.eq) goto loc_822763C8;
loc_822765AC:
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
	// stb r30,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r30.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822765D0"))) PPC_WEAK_FUNC(sub_822765D0);
PPC_FUNC_IMPL(__imp__sub_822765D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822761c8
	ctx.lr = 0x822765F0;
	sub_822761C8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82276628"))) PPC_WEAK_FUNC(sub_82276628);
PPC_FUNC_IMPL(__imp__sub_82276628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x82276630;
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
	// lbz r11,81(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822766c4
	if (!ctx.cr6.eq) goto loc_822766C4;
loc_82276660:
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
	// blt cr6,0x82276680
	if (ctx.cr6.lt) goto loc_82276680;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82276684
	goto loc_82276684;
loc_82276680:
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
loc_82276684:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216a080
	ctx.lr = 0x82276694;
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
	// beq cr6,0x822766b4
	if (ctx.cr6.eq) goto loc_822766B4;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x822766b8
	goto loc_822766B8;
loc_822766B4:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_822766B8:
	// lbz r11,81(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82276660
	if (ctx.cr6.eq) goto loc_82276660;
loc_822766C4:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82276734
	if (ctx.cr6.eq) goto loc_82276734;
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
	// beq cr6,0x82276730
	if (ctx.cr6.eq) goto loc_82276730;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82276280
	ctx.lr = 0x8227670C;
	sub_82276280(ctx, base);
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
loc_82276730:
	// bl 0x822753b8
	ctx.lr = 0x82276734;
	sub_822753B8(ctx, base);
loc_82276734:
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
	// blt cr6,0x82276754
	if (ctx.cr6.lt) goto loc_82276754;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82276758
	goto loc_82276758;
loc_82276754:
	// addi r6,r30,4
	ctx.r6.s64 = ctx.r30.s64 + 4;
loc_82276758:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x8216a080
	ctx.lr = 0x82276764;
	sub_8216A080(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822767b4
	if (ctx.cr6.eq) goto loc_822767B4;
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
	// bl 0x82276280
	ctx.lr = 0x82276790;
	sub_82276280(ctx, base);
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
loc_822767B4:
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

__attribute__((alias("__imp__sub_822767D0"))) PPC_WEAK_FUNC(sub_822767D0);
PPC_FUNC_IMPL(__imp__sub_822767D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x822767D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r5,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r5.u64);
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// beq cr6,0x82276808
	if (ctx.cr6.eq) goto loc_82276808;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8227680c
	if (ctx.cr6.eq) goto loc_8227680C;
loc_82276808:
	// twi 31,r0,22
loc_8227680C:
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r28,188(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lwz r30,184(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82276878
	if (ctx.cr6.eq) goto loc_82276878;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227683c
	if (ctx.cr6.eq) goto loc_8227683C;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82276840
	if (ctx.cr6.eq) goto loc_82276840;
loc_8227683C:
	// twi 31,r0,22
loc_82276840:
	// subf r11,r28,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r28.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82276878
	if (ctx.cr6.eq) goto loc_82276878;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822765d0
	ctx.lr = 0x8227685C;
	sub_822765D0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82276878:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82276888
	if (ctx.cr6.eq) goto loc_82276888;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8227688c
	if (ctx.cr6.eq) goto loc_8227688C;
loc_82276888:
	// twi 31,r0,22
loc_8227688C:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// subf r11,r11,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r11.s64;
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
	// beq cr6,0x822768d8
	if (ctx.cr6.eq) goto loc_822768D8;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// bl 0x82275310
	ctx.lr = 0x822768B8;
	sub_82275310(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82275d40
	ctx.lr = 0x822768CC;
	sub_82275D40(ctx, base);
	// ld r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// b 0x82276878
	goto loc_82276878;
loc_822768D8:
	// std r5,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r5.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822768E8"))) PPC_WEAK_FUNC(sub_822768E8);
PPC_FUNC_IMPL(__imp__sub_822768E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x822768F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,16(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8227691c
	if (ctx.cr6.eq) goto loc_8227691C;
	// bl 0x82160140
	ctx.lr = 0x8227691C;
	sub_82160140(ctx, base);
loc_8227691C:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82275760
	ctx.lr = 0x82276930;
	sub_82275760(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x822757e0
	ctx.lr = 0x8227693C;
	sub_822757E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r27,-1
	ctx.r27.s64 = -1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// bl 0x82161d10
	ctx.lr = 0x8227696C;
	sub_82161D10(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82275c30
	ctx.lr = 0x8227697C;
	sub_82275C30(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r29,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r31,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r31.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82161d10
	ctx.lr = 0x822769A0;
	sub_82161D10(ctx, base);
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// bl 0x822757e0
	ctx.lr = 0x822769AC;
	sub_822757E0(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r28,8
	ctx.r4.s64 = ctx.r28.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82276628
	ctx.lr = 0x822769BC;
	sub_82276628(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82275528
	ctx.lr = 0x822769C4;
	sub_82275528(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82275528
	ctx.lr = 0x822769CC;
	sub_82275528(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822769e0
	if (ctx.cr6.lt) goto loc_822769E0;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82186190
	ctx.lr = 0x822769E0;
	sub_82186190(ctx, base);
loc_822769E0:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// beq cr6,0x822769fc
	if (ctx.cr6.eq) goto loc_822769FC;
	// bl 0x821601b8
	ctx.lr = 0x822769FC;
	sub_821601B8(ctx, base);
loc_822769FC:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82276A08"))) PPC_WEAK_FUNC(sub_82276A08);
PPC_FUNC_IMPL(__imp__sub_82276A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82276A10;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r28,r30,20
	ctx.r28.s64 = ctx.r30.s64 + 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x823a1aa8
	ctx.lr = 0x82276A30;
	sub_823A1AA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82276a48
	if (ctx.cr6.eq) goto loc_82276A48;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82276a4c
	if (ctx.cr6.eq) goto loc_82276A4C;
loc_82276A48:
	// twi 31,r0,22
loc_82276A4C:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
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
	// beq cr6,0x82276aa8
	if (ctx.cr6.eq) goto loc_82276AA8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82276a78
	if (!ctx.cr6.eq) goto loc_82276A78;
	// twi 31,r0,22
loc_82276A78:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82276a88
	if (!ctx.cr6.eq) goto loc_82276A88;
	// twi 31,r0,22
loc_82276A88:
	// lwz r3,40(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82276ba8
	if (ctx.cr6.eq) goto loc_82276BA8;
	// bl 0x82659610
	ctx.lr = 0x82276A9C;
	sub_82659610(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_82276AA8:
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82275868
	ctx.lr = 0x82276ABC;
	sub_82275868(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82276ad4
	if (ctx.cr6.eq) goto loc_82276AD4;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82276ad8
	if (ctx.cr6.eq) goto loc_82276AD8;
loc_82276AD4:
	// twi 31,r0,22
loc_82276AD8:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82276b04
	if (ctx.cr6.eq) goto loc_82276B04;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_82276B04:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82276b10
	if (!ctx.cr6.eq) goto loc_82276B10;
	// twi 31,r0,22
loc_82276B10:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82276b20
	if (!ctx.cr6.eq) goto loc_82276B20;
	// twi 31,r0,22
loc_82276B20:
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82276B40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82276b94
	if (ctx.cr6.eq) goto loc_82276B94;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82163c10
	ctx.lr = 0x82276B58;
	sub_82163C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82275cd8
	ctx.lr = 0x82276B68;
	sub_82275CD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82275930
	ctx.lr = 0x82276B74;
	sub_82275930(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825bcbf8
	ctx.lr = 0x82276B84;
	sub_825BCBF8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825fc7b8
	ctx.lr = 0x82276B8C;
	sub_825FC7B8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825fc7b8
	ctx.lr = 0x82276B94;
	sub_825FC7B8(ctx, base);
loc_82276B94:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// beq cr6,0x82276ba8
	if (ctx.cr6.eq) goto loc_82276BA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x82276BA8;
	sub_82659610(ctx, base);
loc_82276BA8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82276BB8"))) PPC_WEAK_FUNC(sub_82276BB8);
PPC_FUNC_IMPL(__imp__sub_82276BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r10,r10,3140
	ctx.r10.s64 = ctx.r10.s64 + 3140;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82276bf4
	if (ctx.cr6.eq) goto loc_82276BF4;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x825fe398
	ctx.lr = 0x82276BF4;
	sub_825FE398(ctx, base);
loc_82276BF4:
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82276c0c
	if (ctx.cr6.lt) goto loc_82276C0C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82276C0C;
	sub_82186190(ctx, base);
loc_82276C0C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r11,r11,4952
	ctx.r11.s64 = ctx.r11.s64 + 4952;
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

__attribute__((alias("__imp__sub_82276C48"))) PPC_WEAK_FUNC(sub_82276C48);
PPC_FUNC_IMPL(__imp__sub_82276C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82276C50;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,3160
	ctx.r11.s64 = ctx.r11.s64 + 3160;
	// addi r31,r28,20
	ctx.r31.s64 = ctx.r28.s64 + 20;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_82276C80:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82276c94
	if (ctx.cr6.eq) goto loc_82276C94;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82276c98
	if (ctx.cr6.eq) goto loc_82276C98;
loc_82276C94:
	// twi 31,r0,22
loc_82276C98:
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
	// beq cr6,0x82276cec
	if (ctx.cr6.eq) goto loc_82276CEC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82276cc0
	if (!ctx.cr6.eq) goto loc_82276CC0;
	// twi 31,r0,22
loc_82276CC0:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82276cd0
	if (!ctx.cr6.eq) goto loc_82276CD0;
	// twi 31,r0,22
loc_82276CD0:
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r29,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r29.u32);
	// bl 0x826027a8
	ctx.lr = 0x82276CE0;
	sub_826027A8(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x82276c80
	goto loc_82276C80;
loc_82276CEC:
	// addi r30,r28,32
	ctx.r30.s64 = ctx.r28.s64 + 32;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82276d14
	if (ctx.cr6.eq) goto loc_82276D14;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82279350
	ctx.lr = 0x82276D0C;
	sub_82279350(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82276D14;
	sub_82186190(ctx, base);
loc_82276D14:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// bl 0x8245a8b0
	ctx.lr = 0x82276D54;
	sub_8245A8B0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82276D5C;
	sub_82186190(ctx, base);
	// addi r30,r28,8
	ctx.r30.s64 = ctx.r28.s64 + 8;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// bl 0x822767d0
	ctx.lr = 0x82276D9C;
	sub_822767D0(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82276DA4;
	sub_82186190(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

