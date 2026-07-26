#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_825D6C68"))) PPC_WEAK_FUNC(sub_825D6C68);
PPC_FUNC_IMPL(__imp__sub_825D6C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825D6C70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825d6cd8
	if (ctx.cr6.eq) goto loc_825D6CD8;
	// addi r28,r31,524
	ctx.r28.s64 = ctx.r31.s64 + 524;
loc_825D6C8C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x825d6cb4
	if (ctx.cr6.lt) goto loc_825D6CB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6b60
	ctx.lr = 0x825D6CA4;
	sub_825D6B60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825d6cb4
	if (ctx.cr0.eq) goto loc_825D6CB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6bd0
	ctx.lr = 0x825D6CB4;
	sub_825D6BD0(ctx, base);
loc_825D6CB4:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne cr6,0x825d6c8c
	if (!ctx.cr6.eq) goto loc_825D6C8C;
loc_825D6CD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D6CE0"))) PPC_WEAK_FUNC(sub_825D6CE0);
PPC_FUNC_IMPL(__imp__sub_825D6CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x825d6b60
	ctx.lr = 0x825D6CF8;
	sub_825D6B60(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x825d61c0
	ctx.lr = 0x825D6D04;
	sub_825D61C0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D6D20"))) PPC_WEAK_FUNC(sub_825D6D20);
PPC_FUNC_IMPL(__imp__sub_825D6D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825D6D28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825d5700
	ctx.lr = 0x825D6D40;
	sub_825D5700(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// addi r11,r11,524
	ctx.r11.s64 = ctx.r11.s64 + 524;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x825d6d90
	if (ctx.cr6.gt) goto loc_825D6D90;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825d5660
	ctx.lr = 0x825D6D64;
	sub_825D5660(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x826df680
	ctx.lr = 0x825D6D74;
	sub_826DF680(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,-2
	ctx.r4.s64 = -2;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x825d51c0
	ctx.lr = 0x825D6D8C;
	sub_825D51C0(ctx, base);
	// b 0x825d6dc0
	goto loc_825D6DC0;
loc_825D6D90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6b60
	ctx.lr = 0x825D6D98;
	sub_825D6B60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825d6dac
	if (ctx.cr0.eq) goto loc_825D6DAC;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825d5278
	ctx.lr = 0x825D6DAC;
	sub_825D5278(ctx, base);
loc_825D6DAC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x825d6bd0
	ctx.lr = 0x825D6DC0;
	sub_825D6BD0(ctx, base);
loc_825D6DC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D6DC8"))) PPC_WEAK_FUNC(sub_825D6DC8);
PPC_FUNC_IMPL(__imp__sub_825D6DC8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// stw r3,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D6DE0"))) PPC_WEAK_FUNC(sub_825D6DE0);
PPC_FUNC_IMPL(__imp__sub_825D6DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825D6DE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825e0b68
	ctx.lr = 0x825D6DFC;
	sub_825E0B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825d6e2c
	if (!ctx.cr0.eq) goto loc_825D6E2C;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e0b50
	ctx.lr = 0x825D6E1C;
	sub_825E0B50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne 0x825d6e30
	if (!ctx.cr0.eq) goto loc_825D6E30;
loc_825D6E2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D6E30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D6E38"))) PPC_WEAK_FUNC(sub_825D6E38);
PPC_FUNC_IMPL(__imp__sub_825D6E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x825D6E40;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825d51a8
	ctx.lr = 0x825D6E50;
	sub_825D51A8(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r10,-29176
	ctx.r4.s64 = ctx.r10.s64 + -29176;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// bl 0x825d59b0
	ctx.lr = 0x825D6E6C;
	sub_825D59B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,27332
	ctx.r4.s64 = ctx.r11.s64 + 27332;
	// bl 0x825e0b28
	ctx.lr = 0x825D6E7C;
	sub_825E0B28(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-18272
	ctx.r30.s64 = ctx.r11.s64 + -18272;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x825d6edc
	if (!ctx.cr0.eq) goto loc_825D6EDC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x825d5660
	ctx.lr = 0x825D6E9C;
	sub_825D5660(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x826e4390
	ctx.lr = 0x825D6EA4;
	sub_826E4390(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826e4b40
	ctx.lr = 0x825D6EAC;
	sub_826E4B40(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-29196
	ctx.r4.s64 = ctx.r11.s64 + -29196;
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d59b0
	ctx.lr = 0x825D6EC4;
	sub_825D59B0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5220
	ctx.lr = 0x825D6ED0;
	sub_825D5220(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
loc_825D6ED4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_825D6EDC:
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x825d5660
	ctx.lr = 0x825D6EE4;
	sub_825D5660(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,28128
	ctx.r4.s64 = ctx.r11.s64 + 28128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6070
	ctx.lr = 0x825D6EFC;
	sub_825D6070(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825e0b80
	ctx.lr = 0x825D6F08;
	sub_825E0B80(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x826e3500
	ctx.lr = 0x825D6F10;
	sub_826E3500(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x825d6f24
	if (ctx.cr6.eq) goto loc_825D6F24;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x825e0b38
	ctx.lr = 0x825D6F24;
	sub_825E0B38(ctx, base);
loc_825D6F24:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x825d6f84
	if (ctx.cr6.eq) goto loc_825D6F84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d51c0
	ctx.lr = 0x825D6F38;
	sub_825D51C0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5660
	ctx.lr = 0x825D6F44;
	sub_825D5660(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x826e4390
	ctx.lr = 0x825D6F4C;
	sub_826E4390(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826e4b40
	ctx.lr = 0x825D6F54;
	sub_826E4B40(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-29196
	ctx.r4.s64 = ctx.r11.s64 + -29196;
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d59b0
	ctx.lr = 0x825D6F6C;
	sub_825D59B0(ctx, base);
	// li r30,2
	ctx.r30.s64 = 2;
loc_825D6F70:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5220
	ctx.lr = 0x825D6F7C;
	sub_825D5220(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x825d6ed4
	goto loc_825D6ED4;
loc_825D6F84:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// b 0x825d6f70
	goto loc_825D6F70;
}

__attribute__((alias("__imp__sub_825D6F90"))) PPC_WEAK_FUNC(sub_825D6F90);
PPC_FUNC_IMPL(__imp__sub_825D6F90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825d6fa4
	if (!ctx.cr0.eq) goto loc_825D6FA4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825D6FA4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D6FB8"))) PPC_WEAK_FUNC(sub_825D6FB8);
PPC_FUNC_IMPL(__imp__sub_825D6FB8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,28560
	ctx.r4.s64 = ctx.r9.s64 + 28560;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x825d6070
	ctx.lr = 0x825D6FE4;
	sub_825D6070(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D6FF8"))) PPC_WEAK_FUNC(sub_825D6FF8);
PPC_FUNC_IMPL(__imp__sub_825D6FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825D7000;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825dfdb8
	ctx.lr = 0x825D701C;
	sub_825DFDB8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-29200
	ctx.r4.s64 = ctx.r11.s64 + -29200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0840
	ctx.lr = 0x825D7030;
	sub_825E0840(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,-29108
	ctx.r10.s64 = ctx.r11.s64 + -29108;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_825D703C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x825d7060
	if (ctx.cr0.eq) goto loc_825D7060;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x825d703c
	if (ctx.cr6.eq) goto loc_825D703C;
loc_825D7060:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x825d708c
	if (!ctx.cr0.eq) goto loc_825D708C;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x825d708c
	if (!ctx.cr0.eq) goto loc_825D708C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,-29140
	ctx.r4.s64 = ctx.r11.s64 + -29140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6380
	ctx.lr = 0x825D7088;
	sub_825D6380(ctx, base);
	// b 0x825d70bc
	goto loc_825D70BC;
loc_825D708C:
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x825d70a4
	if (!ctx.cr6.eq) goto loc_825D70A4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r6,r11,-29256
	ctx.r6.s64 = ctx.r11.s64 + -29256;
	// stw r6,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
loc_825D70A4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r4,r11,-29172
	ctx.r4.s64 = ctx.r11.s64 + -29172;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6380
	ctx.lr = 0x825D70BC;
	sub_825D6380(ctx, base);
loc_825D70BC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D70C8"))) PPC_WEAK_FUNC(sub_825D70C8);
PPC_FUNC_IMPL(__imp__sub_825D70C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825D70D0;
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
	// bl 0x825d5368
	ctx.lr = 0x825D70E4;
	sub_825D5368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d53a0
	ctx.lr = 0x825D70F0;
	sub_825D53A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-29100
	ctx.r4.s64 = ctx.r11.s64 + -29100;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d59b0
	ctx.lr = 0x825D7108;
	sub_825D59B0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6ff8
	ctx.lr = 0x825D7118;
	sub_825D6FF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D7120"))) PPC_WEAK_FUNC(sub_825D7120);
PPC_FUNC_IMPL(__imp__sub_825D7120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825D7128;
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
	// bl 0x825d5368
	ctx.lr = 0x825D713C;
	sub_825D5368(ctx, base);
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x825d7160
	if (ctx.cr6.eq) goto loc_825D7160;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d53a0
	ctx.lr = 0x825D7150;
	sub_825D53A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d70c8
	ctx.lr = 0x825D7160;
	sub_825D70C8(ctx, base);
loc_825D7160:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D7168"))) PPC_WEAK_FUNC(sub_825D7168);
PPC_FUNC_IMPL(__imp__sub_825D7168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x825d5368
	ctx.lr = 0x825D7188;
	sub_825D5368(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x825d71a4
	if (!ctx.cr6.eq) goto loc_825D71A4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-29080
	ctx.r5.s64 = ctx.r11.s64 + -29080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6ff8
	ctx.lr = 0x825D71A4;
	sub_825D6FF8(ctx, base);
loc_825D71A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D71C0"))) PPC_WEAK_FUNC(sub_825D71C0);
PPC_FUNC_IMPL(__imp__sub_825D71C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825D71C8;
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
	// bl 0x825d5660
	ctx.lr = 0x825D71DC;
	sub_825D5660(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x825d7200
	if (!ctx.cr0.eq) goto loc_825D7200;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d53a0
	ctx.lr = 0x825D71F0;
	sub_825D53A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d70c8
	ctx.lr = 0x825D7200;
	sub_825D70C8(ctx, base);
loc_825D7200:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825d7218
	if (ctx.cr6.eq) goto loc_825D7218;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5700
	ctx.lr = 0x825D7214;
	sub_825D5700(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_825D7218:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D7228"))) PPC_WEAK_FUNC(sub_825D7228);
PPC_FUNC_IMPL(__imp__sub_825D7228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825D7230;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x825d5368
	ctx.lr = 0x825D7248;
	sub_825D5368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x825d7298
	if (ctx.cr0.gt) goto loc_825D7298;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825d7290
	if (ctx.cr6.eq) goto loc_825D7290;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x825d7288
	if (ctx.cr6.eq) goto loc_825D7288;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_825D7268:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825d7268
	if (!ctx.cr6.eq) goto loc_825D7268;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x825d728c
	goto loc_825D728C;
loc_825D7288:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825D728C:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_825D7290:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x825d72a8
	goto loc_825D72A8;
loc_825D7298:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d71c0
	ctx.lr = 0x825D72A8;
	sub_825D71C0(ctx, base);
loc_825D72A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D72B0"))) PPC_WEAK_FUNC(sub_825D72B0);
PPC_FUNC_IMPL(__imp__sub_825D72B0) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x825d55b0
	ctx.lr = 0x825D72D4;
	sub_825D55B0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,13960(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 13960);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bne cr6,0x825d7318
	if (!ctx.cr6.eq) goto loc_825D7318;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5418
	ctx.lr = 0x825D72F4;
	sub_825D5418(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825d7318
	if (!ctx.cr0.eq) goto loc_825D7318;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d53a0
	ctx.lr = 0x825D7308;
	sub_825D53A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d70c8
	ctx.lr = 0x825D7318;
	sub_825D70C8(ctx, base);
loc_825D7318:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_825D7338"))) PPC_WEAK_FUNC(sub_825D7338);
PPC_FUNC_IMPL(__imp__sub_825D7338) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x825d5368
	ctx.lr = 0x825D7360;
	sub_825D5368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x825d7370
	if (ctx.cr0.gt) goto loc_825D7370;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x825d737c
	goto loc_825D737C;
loc_825D7370:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d72b0
	ctx.lr = 0x825D737C;
	sub_825D72B0(ctx, base);
loc_825D737C:
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

__attribute__((alias("__imp__sub_825D7398"))) PPC_WEAK_FUNC(sub_825D7398);
PPC_FUNC_IMPL(__imp__sub_825D7398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825D73A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d7120
	ctx.lr = 0x825D73B4;
	sub_825D7120(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d69f8
	ctx.lr = 0x825D73C0;
	sub_825D69F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d7120
	ctx.lr = 0x825D73D4;
	sub_825D7120(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// blt cr6,0x825d7450
	if (ctx.cr6.lt) goto loc_825D7450;
loc_825D73E0:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5320
	ctx.lr = 0x825D73EC;
	sub_825D5320(ctx, base);
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// bl 0x825d5890
	ctx.lr = 0x825D7404;
	sub_825D5890(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5bd8
	ctx.lr = 0x825D7414;
	sub_825D5BD8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5fb8
	ctx.lr = 0x825D7424;
	sub_825D5FB8(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5368
	ctx.lr = 0x825D7430;
	sub_825D5368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825d745c
	if (!ctx.cr0.eq) goto loc_825D745C;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d51c0
	ctx.lr = 0x825D7444;
	sub_825D51C0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x825d73e0
	if (!ctx.cr6.gt) goto loc_825D73E0;
loc_825D7450:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D7454:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_825D745C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d7454
	goto loc_825D7454;
}

__attribute__((alias("__imp__sub_825D7468"))) PPC_WEAK_FUNC(sub_825D7468);
PPC_FUNC_IMPL(__imp__sub_825D7468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d7120
	ctx.lr = 0x825D7488;
	sub_825D7120(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d7120
	ctx.lr = 0x825D7498;
	sub_825D7120(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5870
	ctx.lr = 0x825D74A0;
	sub_825D5870(ctx, base);
	// b 0x825d74f8
	goto loc_825D74F8;
loc_825D74A4:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5320
	ctx.lr = 0x825D74B0;
	sub_825D5320(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5320
	ctx.lr = 0x825D74BC;
	sub_825D5320(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5320
	ctx.lr = 0x825D74C8;
	sub_825D5320(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5fb8
	ctx.lr = 0x825D74D8;
	sub_825D5FB8(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5368
	ctx.lr = 0x825D74E4;
	sub_825D5368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825d7510
	if (!ctx.cr0.eq) goto loc_825D7510;
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d51c0
	ctx.lr = 0x825D74F8;
	sub_825D51C0(ctx, base);
loc_825D74F8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6160
	ctx.lr = 0x825D7504;
	sub_825D6160(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825d74a4
	if (!ctx.cr0.eq) goto loc_825D74A4;
	// b 0x825d7514
	goto loc_825D7514;
loc_825D7510:
	// li r3,1
	ctx.r3.s64 = 1;
loc_825D7514:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D7528"))) PPC_WEAK_FUNC(sub_825D7528);
PPC_FUNC_IMPL(__imp__sub_825D7528) {
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
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d7120
	ctx.lr = 0x825D7548;
	sub_825D7120(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d69f8
	ctx.lr = 0x825D7554;
	sub_825D69F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// bl 0x825d5890
	ctx.lr = 0x825D7570;
	sub_825D5890(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_825D7588"))) PPC_WEAK_FUNC(sub_825D7588);
PPC_FUNC_IMPL(__imp__sub_825D7588) {
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
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d7120
	ctx.lr = 0x825D75A8;
	sub_825D7120(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d72b0
	ctx.lr = 0x825D75B4;
	sub_825D72B0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825d68d0
	ctx.lr = 0x825D75D0;
	sub_825D68D0(ctx, base);
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

__attribute__((alias("__imp__sub_825D75E8"))) PPC_WEAK_FUNC(sub_825D75E8);
PPC_FUNC_IMPL(__imp__sub_825D75E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825D75F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d51a8
	ctx.lr = 0x825D75FC;
	sub_825D51A8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d7120
	ctx.lr = 0x825D7610;
	sub_825D7120(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d69f8
	ctx.lr = 0x825D761C;
	sub_825D69F8(ctx, base);
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// addi r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 1;
	// bne cr6,0x825d7630
	if (!ctx.cr6.eq) goto loc_825D7630;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// b 0x825d765c
	goto loc_825D765C;
loc_825D7630:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d72b0
	ctx.lr = 0x825D763C;
	sub_825D72B0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x825d7658
	if (!ctx.cr6.gt) goto loc_825D7658;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_825D7658:
	// li r28,3
	ctx.r28.s64 = 3;
loc_825D765C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d68d0
	ctx.lr = 0x825D766C;
	sub_825D68D0(ctx, base);
	// b 0x825d768c
	goto loc_825D768C;
loc_825D7670:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825d5bd8
	ctx.lr = 0x825D767C;
	sub_825D5BD8(ctx, base);
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5e50
	ctx.lr = 0x825D768C;
	sub_825D5E50(ctx, base);
loc_825D768C:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x825d7670
	if (!ctx.cr6.lt) goto loc_825D7670;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x825d5320
	ctx.lr = 0x825D76A4;
	sub_825D5320(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5e50
	ctx.lr = 0x825D76B4;
	sub_825D5E50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D76C0"))) PPC_WEAK_FUNC(sub_825D76C0);
PPC_FUNC_IMPL(__imp__sub_825D76C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825D76C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d7120
	ctx.lr = 0x825D76DC;
	sub_825D7120(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d69f8
	ctx.lr = 0x825D76E8;
	sub_825D69F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// bl 0x825d7338
	ctx.lr = 0x825D7708;
	sub_825D7338(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// bgt cr6,0x825d7724
	if (ctx.cr6.gt) goto loc_825D7724;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825d7794
	goto loc_825D7794;
loc_825D7724:
	// addi r5,r29,-1
	ctx.r5.s64 = ctx.r29.s64 + -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d68d0
	ctx.lr = 0x825D7734;
	sub_825D68D0(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5bd8
	ctx.lr = 0x825D7748;
	sub_825D5BD8(ctx, base);
	// b 0x825d7770
	goto loc_825D7770;
loc_825D774C:
	// addi r28,r30,1
	ctx.r28.s64 = ctx.r30.s64 + 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x825d5bd8
	ctx.lr = 0x825D775C;
	sub_825D5BD8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5e50
	ctx.lr = 0x825D776C;
	sub_825D5E50(ctx, base);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_825D7770:
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt cr6,0x825d774c
	if (ctx.cr6.lt) goto loc_825D774C;
	// bl 0x825d5870
	ctx.lr = 0x825D7780;
	sub_825D5870(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5e50
	ctx.lr = 0x825D7790;
	sub_825D5E50(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_825D7794:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D77A0"))) PPC_WEAK_FUNC(sub_825D77A0);
PPC_FUNC_IMPL(__imp__sub_825D77A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x825D77A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r11,5020
	ctx.r5.s64 = ctx.r11.s64 + 5020;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d7228
	ctx.lr = 0x825D77C4;
	sub_825D7228(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f1,4080(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4080);
	// bl 0x825d7338
	ctx.lr = 0x825D77DC;
	sub_825D7338(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f1,13960(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 13960);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// bl 0x825d7338
	ctx.lr = 0x825D7800;
	sub_825D7338(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// li r5,5
	ctx.r5.s64 = 5;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// bl 0x825d7120
	ctx.lr = 0x825D781C;
	sub_825D7120(ctx, base);
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x825d7838
	if (!ctx.cr6.eq) goto loc_825D7838;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d69f8
	ctx.lr = 0x825D7834;
	sub_825D69F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_825D7838:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6dc8
	ctx.lr = 0x825D7844;
	sub_825D6DC8(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// bgt cr6,0x825d78b8
	if (ctx.cr6.gt) goto loc_825D78B8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r28,r11,-28928
	ctx.r28.s64 = ctx.r11.s64 + -28928;
loc_825D7858:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5bd8
	ctx.lr = 0x825D7868;
	sub_825D5BD8(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5468
	ctx.lr = 0x825D7874;
	sub_825D5468(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825d788c
	if (!ctx.cr0.eq) goto loc_825D788C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6ff8
	ctx.lr = 0x825D788C;
	sub_825D6FF8(ctx, base);
loc_825D788C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825d6d20
	ctx.lr = 0x825D7894;
	sub_825D6D20(ctx, base);
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x825d78ac
	if (ctx.cr6.eq) goto loc_825D78AC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825d6c68
	ctx.lr = 0x825D78AC;
	sub_825D6C68(ctx, base);
loc_825D78AC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x825d7858
	if (!ctx.cr6.gt) goto loc_825D7858;
loc_825D78B8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825d6ce0
	ctx.lr = 0x825D78C0;
	sub_825D6CE0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D78D0"))) PPC_WEAK_FUNC(sub_825D78D0);
PPC_FUNC_IMPL(__imp__sub_825D78D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825D78D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x825d5368
	ctx.lr = 0x825D78F0;
	sub_825D5368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x825d7950
	if (ctx.cr0.eq) goto loc_825D7950;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x825d5320
	ctx.lr = 0x825D7904;
	sub_825D5320(ctx, base);
	// addi r4,r30,-1
	ctx.r4.s64 = ctx.r30.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5320
	ctx.lr = 0x825D7910;
	sub_825D5320(ctx, base);
	// addi r4,r29,-2
	ctx.r4.s64 = ctx.r29.s64 + -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5320
	ctx.lr = 0x825D791C;
	sub_825D5320(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5fb8
	ctx.lr = 0x825D792C;
	sub_825D5FB8(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5608
	ctx.lr = 0x825D7938;
	sub_825D5608(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d51c0
	ctx.lr = 0x825D7948;
	sub_825D51C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x825d795c
	goto loc_825D795C;
loc_825D7950:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825d5550
	ctx.lr = 0x825D795C;
	sub_825D5550(ctx, base);
loc_825D795C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D7968"))) PPC_WEAK_FUNC(sub_825D7968);
PPC_FUNC_IMPL(__imp__sub_825D7968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x825D7970;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x825d7c68
	if (!ctx.cr6.lt) goto loc_825D7C68;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r25,r11,-28900
	ctx.r25.s64 = ctx.r11.s64 + -28900;
loc_825D7990:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5bd8
	ctx.lr = 0x825D79A0;
	sub_825D5BD8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5bd8
	ctx.lr = 0x825D79B0;
	sub_825D5BD8(ctx, base);
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d78d0
	ctx.lr = 0x825D79C0;
	sub_825D78D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x825d79ec
	if (ctx.cr0.eq) goto loc_825D79EC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825d5e50
	ctx.lr = 0x825D79D8;
	sub_825D5E50(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5e50
	ctx.lr = 0x825D79E8;
	sub_825D5E50(ctx, base);
	// b 0x825d79f4
	goto loc_825D79F4;
loc_825D79EC:
	// li r4,-3
	ctx.r4.s64 = -3;
	// bl 0x825d51c0
	ctx.lr = 0x825D79F4;
	sub_825D51C0(ctx, base);
loc_825D79F4:
	// subf r29,r27,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r27.s64;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x825d7c68
	if (ctx.cr6.eq) goto loc_825D7C68;
	// add r11,r27,r28
	ctx.r11.u64 = ctx.r27.u64 + ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addze r30,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r30.s64 = temp.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x825d5bd8
	ctx.lr = 0x825D7A1C;
	sub_825D5BD8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5bd8
	ctx.lr = 0x825D7A2C;
	sub_825D5BD8(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d78d0
	ctx.lr = 0x825D7A3C;
	sub_825D78D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x825d7a5c
	if (ctx.cr0.eq) goto loc_825D7A5C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825d5e50
	ctx.lr = 0x825D7A54;
	sub_825D5E50(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// b 0x825d7aa0
	goto loc_825D7AA0;
loc_825D7A5C:
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x825d51c0
	ctx.lr = 0x825D7A64;
	sub_825D51C0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5bd8
	ctx.lr = 0x825D7A74;
	sub_825D5BD8(ctx, base);
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d78d0
	ctx.lr = 0x825D7A84;
	sub_825D78D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x825d7ab0
	if (ctx.cr0.eq) goto loc_825D7AB0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825d5e50
	ctx.lr = 0x825D7A9C;
	sub_825D5E50(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_825D7AA0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5e50
	ctx.lr = 0x825D7AAC;
	sub_825D5E50(ctx, base);
	// b 0x825d7ab8
	goto loc_825D7AB8;
loc_825D7AB0:
	// li r4,-3
	ctx.r4.s64 = -3;
	// bl 0x825d51c0
	ctx.lr = 0x825D7AB8;
	sub_825D51C0(ctx, base);
loc_825D7AB8:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x825d7c68
	if (ctx.cr6.eq) goto loc_825D7C68;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5bd8
	ctx.lr = 0x825D7AD0;
	sub_825D5BD8(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5320
	ctx.lr = 0x825D7ADC;
	sub_825D5320(ctx, base);
	// addi r26,r28,-1
	ctx.r26.s64 = ctx.r28.s64 + -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x825d5bd8
	ctx.lr = 0x825D7AF0;
	sub_825D5BD8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5e50
	ctx.lr = 0x825D7B00;
	sub_825D5E50(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5e50
	ctx.lr = 0x825D7B10;
	sub_825D5E50(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// b 0x825d7b3c
	goto loc_825D7B3C;
loc_825D7B1C:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x825d7b30
	if (!ctx.cr6.gt) goto loc_825D7B30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x825d6380
	ctx.lr = 0x825D7B30;
	sub_825D6380(ctx, base);
loc_825D7B30:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d51c0
	ctx.lr = 0x825D7B3C;
	sub_825D51C0(ctx, base);
loc_825D7B3C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5bd8
	ctx.lr = 0x825D7B50;
	sub_825D5BD8(ctx, base);
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d78d0
	ctx.lr = 0x825D7B60;
	sub_825D78D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825d7b1c
	if (!ctx.cr0.eq) goto loc_825D7B1C;
	// b 0x825d7b8c
	goto loc_825D7B8C;
loc_825D7B6C:
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x825d7b80
	if (!ctx.cr6.lt) goto loc_825D7B80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x825d6380
	ctx.lr = 0x825D7B80;
	sub_825D6380(ctx, base);
loc_825D7B80:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d51c0
	ctx.lr = 0x825D7B8C;
	sub_825D51C0(ctx, base);
loc_825D7B8C:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5bd8
	ctx.lr = 0x825D7BA0;
	sub_825D5BD8(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d78d0
	ctx.lr = 0x825D7BB0;
	sub_825D78D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825d7b6c
	if (!ctx.cr0.eq) goto loc_825D7B6C;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt cr6,0x825d7be4
	if (ctx.cr6.lt) goto loc_825D7BE4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825d5e50
	ctx.lr = 0x825D7BD0;
	sub_825D5E50(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5e50
	ctx.lr = 0x825D7BE0;
	sub_825D5E50(ctx, base);
	// b 0x825d7b3c
	goto loc_825D7B3C;
loc_825D7BE4:
	// li r4,-4
	ctx.r4.s64 = -4;
	// bl 0x825d51c0
	ctx.lr = 0x825D7BEC;
	sub_825D51C0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5bd8
	ctx.lr = 0x825D7BFC;
	sub_825D5BD8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5bd8
	ctx.lr = 0x825D7C0C;
	sub_825D5BD8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5e50
	ctx.lr = 0x825D7C1C;
	sub_825D5E50(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5e50
	ctx.lr = 0x825D7C2C;
	sub_825D5E50(ctx, base);
	// subf r11,r30,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r30.s64;
	// subf r10,r27,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r27.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x825d7c4c
	if (!ctx.cr6.lt) goto loc_825D7C4C;
	// addi r5,r30,-1
	ctx.r5.s64 = ctx.r30.s64 + -1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r27,r5,2
	ctx.r27.s64 = ctx.r5.s64 + 2;
	// b 0x825d7c58
	goto loc_825D7C58;
loc_825D7C4C:
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r28,r4,-2
	ctx.r28.s64 = ctx.r4.s64 + -2;
loc_825D7C58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d7968
	ctx.lr = 0x825D7C60;
	sub_825D7968(ctx, base);
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x825d7990
	if (ctx.cr6.lt) goto loc_825D7990;
loc_825D7C68:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D7C70"))) PPC_WEAK_FUNC(sub_825D7C70);
PPC_FUNC_IMPL(__imp__sub_825D7C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d7120
	ctx.lr = 0x825D7C94;
	sub_825D7120(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d69f8
	ctx.lr = 0x825D7CA0;
	sub_825D69F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r11,5020
	ctx.r5.s64 = ctx.r11.s64 + 5020;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d65a8
	ctx.lr = 0x825D7CB8;
	sub_825D65A8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5368
	ctx.lr = 0x825D7CC4;
	sub_825D5368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x825d7cdc
	if (!ctx.cr0.gt) goto loc_825D7CDC;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d7120
	ctx.lr = 0x825D7CDC;
	sub_825D7120(ctx, base);
loc_825D7CDC:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d51c0
	ctx.lr = 0x825D7CE8;
	sub_825D51C0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d7968
	ctx.lr = 0x825D7CF8;
	sub_825D7968(ctx, base);
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

__attribute__((alias("__imp__sub_825D7D18"))) PPC_WEAK_FUNC(sub_825D7D18);
PPC_FUNC_IMPL(__imp__sub_825D7D18) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-29000
	ctx.r5.s64 = ctx.r11.s64 + -29000;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-28864
	ctx.r4.s64 = ctx.r11.s64 + -28864;
	// bl 0x825d6700
	ctx.lr = 0x825D7D3C;
	sub_825D6700(ctx, base);
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

__attribute__((alias("__imp__sub_825D7D50"))) PPC_WEAK_FUNC(sub_825D7D50);
PPC_FUNC_IMPL(__imp__sub_825D7D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x825D7D58;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d51a8
	ctx.lr = 0x825D7D64;
	sub_825D51A8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r11,-28692
	ctx.r4.s64 = ctx.r11.s64 + -28692;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5918
	ctx.lr = 0x825D7D78;
	sub_825D5918(ctx, base);
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5b30
	ctx.lr = 0x825D7D84;
	sub_825D5B30(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// blt cr6,0x825d7e1c
	if (ctx.cr6.lt) goto loc_825D7E1C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r27,r11,-28280
	ctx.r27.s64 = ctx.r11.s64 + -28280;
loc_825D7D98:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5320
	ctx.lr = 0x825D7DA4;
	sub_825D5320(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5320
	ctx.lr = 0x825D7DB0;
	sub_825D5320(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5fb8
	ctx.lr = 0x825D7DC0;
	sub_825D5FB8(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5660
	ctx.lr = 0x825D7DCC;
	sub_825D5660(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x825d7e40
	if (ctx.cr0.eq) goto loc_825D7E40;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// ble cr6,0x825d7df0
	if (!ctx.cr6.gt) goto loc_825D7DF0;
	// bl 0x826e3500
	ctx.lr = 0x825D7DE0;
	sub_826E3500(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x826e32c0
	ctx.lr = 0x825D7DF0;
	sub_826E32C0(ctx, base);
loc_825D7DF0:
	// bl 0x826e3500
	ctx.lr = 0x825D7DF4;
	sub_826E3500(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x826e32c0
	ctx.lr = 0x825D7E04;
	sub_826E32C0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d51c0
	ctx.lr = 0x825D7E10;
	sub_825D51C0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x825d7d98
	if (!ctx.cr6.gt) goto loc_825D7D98;
loc_825D7E1C:
	// bl 0x826e3500
	ctx.lr = 0x825D7E20;
	sub_826E3500(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// addi r3,r10,-15828
	ctx.r3.s64 = ctx.r10.s64 + -15828;
	// bl 0x826e32c0
	ctx.lr = 0x825D7E34;
	sub_826E32C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D7E38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_825D7E40:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28324
	ctx.r4.s64 = ctx.r11.s64 + -28324;
	// bl 0x825d6380
	ctx.lr = 0x825D7E50;
	sub_825D6380(ctx, base);
	// b 0x825d7e38
	goto loc_825D7E38;
}

__attribute__((alias("__imp__sub_825D7E58"))) PPC_WEAK_FUNC(sub_825D7E58);
PPC_FUNC_IMPL(__imp__sub_825D7E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825D7E60;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfd f1,17320(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 17320);
	// bl 0x825d7338
	ctx.lr = 0x825D7E78;
	sub_825D7338(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r30,10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 10, ctx.xer);
	// bne cr6,0x825d7ec8
	if (!ctx.cr6.eq) goto loc_825D7EC8;
	// bl 0x825d7168
	ctx.lr = 0x825D7E9C;
	sub_825D7168(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5418
	ctx.lr = 0x825D7EA8;
	sub_825D5418(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825d7f18
	if (ctx.cr0.eq) goto loc_825D7F18;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d55b0
	ctx.lr = 0x825D7EBC;
	sub_825D55B0(ctx, base);
loc_825D7EBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5890
	ctx.lr = 0x825D7EC4;
	sub_825D5890(ctx, base);
	// b 0x825d7f20
	goto loc_825D7F20;
loc_825D7EC8:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825d71c0
	ctx.lr = 0x825D7ED0;
	sub_825D71C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x825d7ee4
	if (ctx.cr6.lt) goto loc_825D7EE4;
	// cmpwi cr6,r30,36
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 36, ctx.xer);
	// ble cr6,0x825d7ef8
	if (!ctx.cr6.gt) goto loc_825D7EF8;
loc_825D7EE4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,-28276
	ctx.r5.s64 = ctx.r11.s64 + -28276;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6ff8
	ctx.lr = 0x825D7EF8;
	sub_825D6FF8(ctx, base);
loc_825D7EF8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826e4ee8
	ctx.lr = 0x825D7F08;
	sub_826E4EE8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825d7f34
	if (!ctx.cr6.eq) goto loc_825D7F34;
loc_825D7F18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5870
	ctx.lr = 0x825D7F20;
	sub_825D5870(ctx, base);
loc_825D7F20:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_825D7F2C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_825D7F34:
	// bl 0x826e42f8
	ctx.lr = 0x825D7F38;
	sub_826E42F8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lhzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825d7f2c
	if (!ctx.cr0.eq) goto loc_825D7F2C;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825d7f18
	if (!ctx.cr6.eq) goto loc_825D7F18;
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// b 0x825d7ebc
	goto loc_825D7EBC;
}

__attribute__((alias("__imp__sub_825D7F70"))) PPC_WEAK_FUNC(sub_825D7F70);
PPC_FUNC_IMPL(__imp__sub_825D7F70) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfd f1,4080(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4080);
	// bl 0x825d7338
	ctx.lr = 0x825D7F94;
	sub_825D7338(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// bl 0x825d7168
	ctx.lr = 0x825D7FAC;
	sub_825D7168(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5468
	ctx.lr = 0x825D7FB8;
	sub_825D5468(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825d7ff0
	if (ctx.cr0.eq) goto loc_825D7FF0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x825d7ff0
	if (ctx.cr6.eq) goto loc_825D7FF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d62f8
	ctx.lr = 0x825D7FD4;
	sub_825D62F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5320
	ctx.lr = 0x825D7FE0;
	sub_825D5320(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d61c0
	ctx.lr = 0x825D7FEC;
	sub_825D61C0(ctx, base);
	// b 0x825d7ffc
	goto loc_825D7FFC;
loc_825D7FF0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5320
	ctx.lr = 0x825D7FFC;
	sub_825D5320(ctx, base);
loc_825D7FFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6138
	ctx.lr = 0x825D8004;
	sub_825D6138(ctx, base);
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

__attribute__((alias("__imp__sub_825D8018"))) PPC_WEAK_FUNC(sub_825D8018);
PPC_FUNC_IMPL(__imp__sub_825D8018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d7168
	ctx.lr = 0x825D8034;
	sub_825D7168(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5ca8
	ctx.lr = 0x825D8040;
	sub_825D5CA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x825d8054
	if (!ctx.cr0.eq) goto loc_825D8054;
	// bl 0x825d5870
	ctx.lr = 0x825D8050;
	sub_825D5870(ctx, base);
	// b 0x825d8064
	goto loc_825D8064;
loc_825D8054:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-28256
	ctx.r5.s64 = ctx.r11.s64 + -28256;
	// bl 0x825d6600
	ctx.lr = 0x825D8064;
	sub_825D6600(ctx, base);
loc_825D8064:
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

__attribute__((alias("__imp__sub_825D8080"))) PPC_WEAK_FUNC(sub_825D8080);
PPC_FUNC_IMPL(__imp__sub_825D8080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d5368
	ctx.lr = 0x825D80A0;
	sub_825D5368(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d7120
	ctx.lr = 0x825D80B4;
	sub_825D7120(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x825d80d8
	if (ctx.cr6.eq) goto loc_825D80D8;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// beq cr6,0x825d80d8
	if (ctx.cr6.eq) goto loc_825D80D8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,-28208
	ctx.r5.s64 = ctx.r11.s64 + -28208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6ff8
	ctx.lr = 0x825D80D8;
	sub_825D6FF8(ctx, base);
loc_825D80D8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-28256
	ctx.r5.s64 = ctx.r11.s64 + -28256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6600
	ctx.lr = 0x825D80EC;
	sub_825D6600(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825d8104
	if (ctx.cr0.eq) goto loc_825D8104;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28244
	ctx.r4.s64 = ctx.r11.s64 + -28244;
	// bl 0x825d6380
	ctx.lr = 0x825D8104;
	sub_825D6380(ctx, base);
loc_825D8104:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d51c0
	ctx.lr = 0x825D8110;
	sub_825D51C0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5eb8
	ctx.lr = 0x825D811C;
	sub_825D5EB8(ctx, base);
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

__attribute__((alias("__imp__sub_825D8138"))) PPC_WEAK_FUNC(sub_825D8138);
PPC_FUNC_IMPL(__imp__sub_825D8138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d5368
	ctx.lr = 0x825D8158;
	sub_825D5368(ctx, base);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x825d8170
	if (!ctx.cr6.eq) goto loc_825D8170;
	// bl 0x825d5320
	ctx.lr = 0x825D816C;
	sub_825D5320(ctx, base);
	// b 0x825d8210
	goto loc_825D8210;
loc_825D8170:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f1,4080(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4080);
	// bl 0x825d7338
	ctx.lr = 0x825D817C;
	sub_825D7338(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x825d81a8
	if (!ctx.cr6.lt) goto loc_825D81A8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-28112
	ctx.r5.s64 = ctx.r11.s64 + -28112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6ff8
	ctx.lr = 0x825D81A8;
	sub_825D6FF8(ctx, base);
loc_825D81A8:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825dfdb8
	ctx.lr = 0x825D81B8;
	sub_825DFDB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825d81d4
	if (!ctx.cr0.eq) goto loc_825D81D4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-28128
	ctx.r5.s64 = ctx.r11.s64 + -28128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6ff8
	ctx.lr = 0x825D81D4;
	sub_825D6FF8(ctx, base);
loc_825D81D4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-28132
	ctx.r4.s64 = ctx.r11.s64 + -28132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0840
	ctx.lr = 0x825D81E8;
	sub_825E0840(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5368
	ctx.lr = 0x825D81F4;
	sub_825D5368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825d8210
	if (!ctx.cr0.eq) goto loc_825D8210;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-28184
	ctx.r4.s64 = ctx.r11.s64 + -28184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6380
	ctx.lr = 0x825D8210;
	sub_825D6380(ctx, base);
loc_825D8210:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D8228"))) PPC_WEAK_FUNC(sub_825D8228);
PPC_FUNC_IMPL(__imp__sub_825D8228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x825d8138
	ctx.lr = 0x825D8240;
	sub_825D8138(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5d30
	ctx.lr = 0x825D824C;
	sub_825D5D30(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r11,-28084
	ctx.r4.s64 = ctx.r11.s64 + -28084;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d58b0
	ctx.lr = 0x825D8260;
	sub_825D58B0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5b88
	ctx.lr = 0x825D826C;
	sub_825D5B88(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5368
	ctx.lr = 0x825D8278;
	sub_825D5368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825d828c
	if (!ctx.cr0.eq) goto loc_825D828C;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d51c0
	ctx.lr = 0x825D828C;
	sub_825D51C0(ctx, base);
loc_825D828C:
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

__attribute__((alias("__imp__sub_825D82A8"))) PPC_WEAK_FUNC(sub_825D82A8);
PPC_FUNC_IMPL(__imp__sub_825D82A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d7120
	ctx.lr = 0x825D82C8;
	sub_825D7120(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d8138
	ctx.lr = 0x825D82D0;
	sub_825D8138(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5d30
	ctx.lr = 0x825D82DC;
	sub_825D5D30(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r11,-28084
	ctx.r4.s64 = ctx.r11.s64 + -28084;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d58b0
	ctx.lr = 0x825D82F0;
	sub_825D58B0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5b88
	ctx.lr = 0x825D82FC;
	sub_825D5B88(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5368
	ctx.lr = 0x825D8308;
	sub_825D5368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x825d8324
	if (ctx.cr0.eq) goto loc_825D8324;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-28020
	ctx.r4.s64 = ctx.r11.s64 + -28020;
	// bl 0x825d6380
	ctx.lr = 0x825D8320;
	sub_825D6380(ctx, base);
	// b 0x825d832c
	goto loc_825D832C;
loc_825D8324:
	// li r4,-3
	ctx.r4.s64 = -3;
	// bl 0x825d51c0
	ctx.lr = 0x825D832C;
	sub_825D51C0(ctx, base);
loc_825D832C:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5320
	ctx.lr = 0x825D8338;
	sub_825D5320(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5418
	ctx.lr = 0x825D8344;
	sub_825D5418(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825d8378
	if (ctx.cr0.eq) goto loc_825D8378;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d55b0
	ctx.lr = 0x825D8358;
	sub_825D55B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,13960(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 13960);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x825d8378
	if (!ctx.cr6.eq) goto loc_825D8378;
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d52d8
	ctx.lr = 0x825D8374;
	sub_825D52D8(ctx, base);
	// b 0x825d839c
	goto loc_825D839C;
loc_825D8378:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5f38
	ctx.lr = 0x825D8384;
	sub_825D5F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825d839c
	if (!ctx.cr0.eq) goto loc_825D839C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28076
	ctx.r4.s64 = ctx.r11.s64 + -28076;
	// bl 0x825d6380
	ctx.lr = 0x825D839C;
	sub_825D6380(ctx, base);
loc_825D839C:
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

__attribute__((alias("__imp__sub_825D83B8"))) PPC_WEAK_FUNC(sub_825D83B8);
PPC_FUNC_IMPL(__imp__sub_825D83B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d7168
	ctx.lr = 0x825D83D4;
	sub_825D7168(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d7168
	ctx.lr = 0x825D83E0;
	sub_825D7168(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d54f8
	ctx.lr = 0x825D83F0;
	sub_825D54F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5ae0
	ctx.lr = 0x825D83FC;
	sub_825D5AE0(ctx, base);
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

__attribute__((alias("__imp__sub_825D8418"))) PPC_WEAK_FUNC(sub_825D8418);
PPC_FUNC_IMPL(__imp__sub_825D8418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d7120
	ctx.lr = 0x825D8438;
	sub_825D7120(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d7168
	ctx.lr = 0x825D8444;
	sub_825D7168(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5b88
	ctx.lr = 0x825D8450;
	sub_825D5B88(ctx, base);
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

__attribute__((alias("__imp__sub_825D8468"))) PPC_WEAK_FUNC(sub_825D8468);
PPC_FUNC_IMPL(__imp__sub_825D8468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d7120
	ctx.lr = 0x825D8488;
	sub_825D7120(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d7168
	ctx.lr = 0x825D8494;
	sub_825D7168(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d7168
	ctx.lr = 0x825D84A0;
	sub_825D7168(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5de8
	ctx.lr = 0x825D84AC;
	sub_825D5DE8(ctx, base);
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

__attribute__((alias("__imp__sub_825D84C8"))) PPC_WEAK_FUNC(sub_825D84C8);
PPC_FUNC_IMPL(__imp__sub_825D84C8) {
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
	// bl 0x825d60e8
	ctx.lr = 0x825D84E0;
	sub_825D60E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// bl 0x825d5890
	ctx.lr = 0x825D84FC;
	sub_825D5890(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d60d8
	ctx.lr = 0x825D8504;
	sub_825D60D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// bl 0x825d5890
	ctx.lr = 0x825D8520;
	sub_825D5890(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
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

__attribute__((alias("__imp__sub_825D8538"))) PPC_WEAK_FUNC(sub_825D8538);
PPC_FUNC_IMPL(__imp__sub_825D8538) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfd f1,13960(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 13960);
	// bl 0x825d7338
	ctx.lr = 0x825D855C;
	sub_825D7338(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825d60f8
	ctx.lr = 0x825D8574;
	sub_825D60F8(ctx, base);
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

__attribute__((alias("__imp__sub_825D8590"))) PPC_WEAK_FUNC(sub_825D8590);
PPC_FUNC_IMPL(__imp__sub_825D8590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d7168
	ctx.lr = 0x825D85AC;
	sub_825D7168(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5368
	ctx.lr = 0x825D85B8;
	sub_825D5368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d53a0
	ctx.lr = 0x825D85C4;
	sub_825D53A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5918
	ctx.lr = 0x825D85D0;
	sub_825D5918(ctx, base);
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

__attribute__((alias("__imp__sub_825D85E8"))) PPC_WEAK_FUNC(sub_825D85E8);
PPC_FUNC_IMPL(__imp__sub_825D85E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d7120
	ctx.lr = 0x825D8608;
	sub_825D7120(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d51c0
	ctx.lr = 0x825D8614;
	sub_825D51C0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6160
	ctx.lr = 0x825D8620;
	sub_825D6160(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825d8630
	if (ctx.cr0.eq) goto loc_825D8630;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x825d863c
	goto loc_825D863C;
loc_825D8630:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5870
	ctx.lr = 0x825D8638;
	sub_825D5870(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_825D863C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D8650"))) PPC_WEAK_FUNC(sub_825D8650);
PPC_FUNC_IMPL(__imp__sub_825D8650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d7120
	ctx.lr = 0x825D8670;
	sub_825D7120(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,7268
	ctx.r4.s64 = ctx.r11.s64 + 7268;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d58b0
	ctx.lr = 0x825D8684;
	sub_825D58B0(ctx, base);
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5b88
	ctx.lr = 0x825D8690;
	sub_825D5B88(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5320
	ctx.lr = 0x825D869C;
	sub_825D5320(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5870
	ctx.lr = 0x825D86A4;
	sub_825D5870(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D86C0"))) PPC_WEAK_FUNC(sub_825D86C0);
PPC_FUNC_IMPL(__imp__sub_825D86C0) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d55b0
	ctx.lr = 0x825D86E4;
	sub_825D55B0(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d7120
	ctx.lr = 0x825D86F8;
	sub_825D7120(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f30,13960(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 13960);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bne cr6,0x825d875c
	if (!ctx.cr6.eq) goto loc_825D875C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5368
	ctx.lr = 0x825D8714;
	sub_825D5368(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x825d875c
	if (!ctx.cr6.eq) goto loc_825D875C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r11,-28652
	ctx.r4.s64 = ctx.r11.s64 + -28652;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d58b0
	ctx.lr = 0x825D8730;
	sub_825D58B0(ctx, base);
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5b88
	ctx.lr = 0x825D873C;
	sub_825D5B88(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5320
	ctx.lr = 0x825D8748;
	sub_825D5320(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x825d5890
	ctx.lr = 0x825D8754;
	sub_825D5890(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x825d87a8
	goto loc_825D87A8;
loc_825D875C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f0,4080(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4080);
	// fadd f31,f31,f0
	ctx.f31.f64 = ctx.f31.f64 + ctx.f0.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825d5890
	ctx.lr = 0x825D8774;
	sub_825D5890(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f31.f64));
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825d5bd8
	ctx.lr = 0x825D8790;
	sub_825D5BD8(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5368
	ctx.lr = 0x825D879C;
	sub_825D5368(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r3,r11,0,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
loc_825D87A8:
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

__attribute__((alias("__imp__sub_825D87C8"))) PPC_WEAK_FUNC(sub_825D87C8);
PPC_FUNC_IMPL(__imp__sub_825D87C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d71c0
	ctx.lr = 0x825D87EC;
	sub_825D71C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x825d7228
	ctx.lr = 0x825D8804;
	sub_825D7228(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6fb8
	ctx.lr = 0x825D8818;
	sub_825D6FB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825d8828
	if (!ctx.cr0.eq) goto loc_825D8828;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d8840
	goto loc_825D8840;
loc_825D8828:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5870
	ctx.lr = 0x825D8830;
	sub_825D5870(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5278
	ctx.lr = 0x825D883C;
	sub_825D5278(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
loc_825D8840:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D8858"))) PPC_WEAK_FUNC(sub_825D8858);
PPC_FUNC_IMPL(__imp__sub_825D8858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d7228
	ctx.lr = 0x825D887C;
	sub_825D7228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6e38
	ctx.lr = 0x825D8888;
	sub_825D6E38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825d8898
	if (!ctx.cr0.eq) goto loc_825D8898;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d88b0
	goto loc_825D88B0;
loc_825D8898:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5870
	ctx.lr = 0x825D88A0;
	sub_825D5870(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5278
	ctx.lr = 0x825D88AC;
	sub_825D5278(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
loc_825D88B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D88C8"))) PPC_WEAK_FUNC(sub_825D88C8);
PPC_FUNC_IMPL(__imp__sub_825D88C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d7228
	ctx.lr = 0x825D88EC;
	sub_825D7228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6e38
	ctx.lr = 0x825D88F8;
	sub_825D6E38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825d8908
	if (ctx.cr0.eq) goto loc_825D8908;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6138
	ctx.lr = 0x825D8908;
	sub_825D6138(ctx, base);
loc_825D8908:
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5fb8
	ctx.lr = 0x825D8918;
	sub_825D5FB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d51a8
	ctx.lr = 0x825D8920;
	sub_825D51A8(ctx, base);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D8938"))) PPC_WEAK_FUNC(sub_825D8938);
PPC_FUNC_IMPL(__imp__sub_825D8938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d7168
	ctx.lr = 0x825D8954;
	sub_825D7168(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5608
	ctx.lr = 0x825D8960;
	sub_825D5608(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x825d8998
	if (!ctx.cr0.eq) goto loc_825D8998;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27968
	ctx.r5.s64 = ctx.r11.s64 + -27968;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x825d7228
	ctx.lr = 0x825D8980;
	sub_825D7228(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-27972
	ctx.r4.s64 = ctx.r11.s64 + -27972;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6380
	ctx.lr = 0x825D8994;
	sub_825D6380(ctx, base);
	// b 0x825d89a4
	goto loc_825D89A4;
loc_825D8998:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825d51c0
	ctx.lr = 0x825D89A0;
	sub_825D51C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_825D89A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D89B8"))) PPC_WEAK_FUNC(sub_825D89B8);
PPC_FUNC_IMPL(__imp__sub_825D89B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825D89C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d7120
	ctx.lr = 0x825D89D4;
	sub_825D7120(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d69f8
	ctx.lr = 0x825D89E0;
	sub_825D69F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-27948
	ctx.r5.s64 = ctx.r11.s64 + -27948;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825d65a8
	ctx.lr = 0x825D89F8;
	sub_825D65A8(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// blt cr6,0x825d8a20
	if (ctx.cr6.lt) goto loc_825D8A20;
loc_825D8A04:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5bd8
	ctx.lr = 0x825D8A14;
	sub_825D5BD8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x825d8a04
	if (!ctx.cr6.gt) goto loc_825D8A04;
loc_825D8A20:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D8A30"))) PPC_WEAK_FUNC(sub_825D8A30);
PPC_FUNC_IMPL(__imp__sub_825D8A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d7168
	ctx.lr = 0x825D8A4C;
	sub_825D7168(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d51a8
	ctx.lr = 0x825D8A54;
	sub_825D51A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x825d5fe0
	ctx.lr = 0x825D8A6C;
	sub_825D5FE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x825d5ae0
	ctx.lr = 0x825D8A80;
	sub_825D5AE0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5278
	ctx.lr = 0x825D8A8C;
	sub_825D5278(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d51a8
	ctx.lr = 0x825D8A94;
	sub_825D51A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D8AA8"))) PPC_WEAK_FUNC(sub_825D8AA8);
PPC_FUNC_IMPL(__imp__sub_825D8AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d7168
	ctx.lr = 0x825D8AC4;
	sub_825D7168(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d51c0
	ctx.lr = 0x825D8AD0;
	sub_825D51C0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5278
	ctx.lr = 0x825D8ADC;
	sub_825D5278(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5fe0
	ctx.lr = 0x825D8AF0;
	sub_825D5FE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x825d5ae0
	ctx.lr = 0x825D8B04;
	sub_825D5AE0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d52d8
	ctx.lr = 0x825D8B10;
	sub_825D52D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d51a8
	ctx.lr = 0x825D8B18;
	sub_825D51A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D8B30"))) PPC_WEAK_FUNC(sub_825D8B30);
PPC_FUNC_IMPL(__imp__sub_825D8B30) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d7168
	ctx.lr = 0x825D8B4C;
	sub_825D7168(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-20652
	ctx.r5.s64 = ctx.r11.s64 + -20652;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6690
	ctx.lr = 0x825D8B60;
	sub_825D6690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825d8c20
	if (!ctx.cr0.eq) goto loc_825D8C20;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5368
	ctx.lr = 0x825D8B74;
	sub_825D5368(ctx, base);
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// bgt cr6,0x825d8c14
	if (ctx.cr6.gt) goto loc_825D8C14;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,-28336
	ctx.r12.s64 = ctx.r12.s64 + -28336;
	// lbzx r0,r12,r3
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r3.u32);
	// lis r12,-32162
	ctx.r12.s64 = -2107768832;
	// addi r12,r12,-29788
	ctx.r12.s64 = ctx.r12.s64 + -29788;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_825D8C80;
	case 1:
		goto loc_825D8BC8;
	case 2:
		goto loc_825D8C50;
	case 3:
		goto loc_825D8BA4;
	case 4:
		goto loc_825D8BB8;
	case 5:
		goto loc_825D8BF4;
	case 6:
		goto loc_825D8C38;
	case 7:
		goto loc_825D8C50;
	case 8:
		goto loc_825D8C68;
	default:
		__builtin_unreachable();
	}
loc_825D8BA4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5660
	ctx.lr = 0x825D8BB0;
	sub_825D5660(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x825d8c18
	goto loc_825D8C18;
loc_825D8BB8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5320
	ctx.lr = 0x825D8BC4;
	sub_825D5320(ctx, base);
	// b 0x825d8c20
	goto loc_825D8C20;
loc_825D8BC8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5608
	ctx.lr = 0x825D8BD4;
	sub_825D5608(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825d8be8
	if (ctx.cr0.eq) goto loc_825D8BE8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-16008
	ctx.r4.s64 = ctx.r11.s64 + -16008;
	// b 0x825d8c18
	goto loc_825D8C18;
loc_825D8BE8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-16016
	ctx.r4.s64 = ctx.r11.s64 + -16016;
	// b 0x825d8c18
	goto loc_825D8C18;
loc_825D8BF4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5800
	ctx.lr = 0x825D8C00;
	sub_825D5800(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-27876
	ctx.r4.s64 = ctx.r11.s64 + -27876;
loc_825D8C08:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826e0998
	ctx.lr = 0x825D8C14;
	sub_826E0998(ctx, base);
loc_825D8C14:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_825D8C18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5918
	ctx.lr = 0x825D8C20;
	sub_825D5918(ctx, base);
loc_825D8C20:
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_825D8C38:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5800
	ctx.lr = 0x825D8C44;
	sub_825D5800(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-27892
	ctx.r4.s64 = ctx.r11.s64 + -27892;
	// b 0x825d8c08
	goto loc_825D8C08;
loc_825D8C50:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5768
	ctx.lr = 0x825D8C5C;
	sub_825D5768(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-27908
	ctx.r4.s64 = ctx.r11.s64 + -27908;
	// b 0x825d8c08
	goto loc_825D8C08;
loc_825D8C68:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d57c0
	ctx.lr = 0x825D8C74;
	sub_825D57C0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-27920
	ctx.r4.s64 = ctx.r11.s64 + -27920;
	// b 0x825d8c08
	goto loc_825D8C08;
loc_825D8C80:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,-27924
	ctx.r4.s64 = ctx.r11.s64 + -27924;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d58b0
	ctx.lr = 0x825D8C94;
	sub_825D58B0(ctx, base);
	// b 0x825d8c20
	goto loc_825D8C20;
}

__attribute__((alias("__imp__sub_825D8C98"))) PPC_WEAK_FUNC(sub_825D8C98);
PPC_FUNC_IMPL(__imp__sub_825D8C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d51c0
	ctx.lr = 0x825D8CB8;
	sub_825D51C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6278
	ctx.lr = 0x825D8CC4;
	sub_825D6278(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5608
	ctx.lr = 0x825D8CD0;
	sub_825D5608(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825d8d88
	if (ctx.cr0.eq) goto loc_825D8D88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5368
	ctx.lr = 0x825D8CE4;
	sub_825D5368(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x825d8d1c
	if (!ctx.cr6.eq) goto loc_825D8D1C;
	// bl 0x825d5c30
	ctx.lr = 0x825D8CF4;
	sub_825D5C30(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5320
	ctx.lr = 0x825D8D00;
	sub_825D5320(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5ae0
	ctx.lr = 0x825D8D0C;
	sub_825D5AE0(ctx, base);
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5de8
	ctx.lr = 0x825D8D18;
	sub_825D5DE8(ctx, base);
	// b 0x825d8d7c
	goto loc_825D8D7C;
loc_825D8D1C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825d5ca8
	ctx.lr = 0x825D8D24;
	sub_825D5CA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825d8d5c
	if (ctx.cr0.eq) goto loc_825D8D5C;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5b88
	ctx.lr = 0x825D8D38;
	sub_825D5B88(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5608
	ctx.lr = 0x825D8D44;
	sub_825D5608(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d51c0
	ctx.lr = 0x825D8D54;
	sub_825D51C0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x825d8d70
	if (!ctx.cr6.eq) goto loc_825D8D70;
loc_825D8D5C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-27864
	ctx.r5.s64 = ctx.r11.s64 + -27864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6ff8
	ctx.lr = 0x825D8D70;
	sub_825D6FF8(ctx, base);
loc_825D8D70:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5ca8
	ctx.lr = 0x825D8D7C;
	sub_825D5CA8(ctx, base);
loc_825D8D7C:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5eb8
	ctx.lr = 0x825D8D88;
	sub_825D5EB8(ctx, base);
loc_825D8D88:
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

__attribute__((alias("__imp__sub_825D8DA8"))) PPC_WEAK_FUNC(sub_825D8DA8);
PPC_FUNC_IMPL(__imp__sub_825D8DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b8
	ctx.lr = 0x825D8DB0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,2
	ctx.r28.s64 = 2;
	// bl 0x825d71c0
	ctx.lr = 0x825D8DC8;
	sub_825D71C0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d51c0
	ctx.lr = 0x825D8DD4;
	sub_825D51C0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27660
	ctx.r4.s64 = ctx.r11.s64 + -27660;
	// bl 0x825d5918
	ctx.lr = 0x825D8DE4;
	sub_825D5918(ctx, base);
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5b30
	ctx.lr = 0x825D8DF0;
	sub_825D5B30(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5368
	ctx.lr = 0x825D8DFC;
	sub_825D5368(ctx, base);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x825d8e18
	if (ctx.cr6.eq) goto loc_825D8E18;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-27688
	ctx.r4.s64 = ctx.r11.s64 + -27688;
	// bl 0x825d6380
	ctx.lr = 0x825D8E14;
	sub_825D6380(ctx, base);
	// b 0x825d9144
	goto loc_825D9144;
loc_825D8E18:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r25,r11,-27828
	ctx.r25.s64 = ctx.r11.s64 + -27828;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x825d5918
	ctx.lr = 0x825D8E28;
	sub_825D5918(ctx, base);
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5b30
	ctx.lr = 0x825D8E34;
	sub_825D5B30(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5660
	ctx.lr = 0x825D8E40;
	sub_825D5660(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d51c0
	ctx.lr = 0x825D8E50;
	sub_825D51C0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r24,r11,-27836
	ctx.r24.s64 = ctx.r11.s64 + -27836;
	// bne cr6,0x825d8e64
	if (!ctx.cr6.eq) goto loc_825D8E64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_825D8E64:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// bl 0x825d5320
	ctx.lr = 0x825D8E74;
	sub_825D5320(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5b88
	ctx.lr = 0x825D8E80;
	sub_825D5B88(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5608
	ctx.lr = 0x825D8E8C;
	sub_825D5608(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825d9140
	if (!ctx.cr0.eq) goto loc_825D9140;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r26,r11,-27816
	ctx.r26.s64 = ctx.r11.s64 + -27816;
loc_825D8E9C:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d51c0
	ctx.lr = 0x825D8EA8;
	sub_825D51C0(ctx, base);
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825d8ec0
	if (!ctx.cr0.eq) goto loc_825D8EC0;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x825d8f18
	goto loc_825D8F18;
loc_825D8EC0:
	// cmpwi cr6,r11,59
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 59, ctx.xer);
	// bne cr6,0x825d8ecc
	if (!ctx.cr6.eq) goto loc_825D8ECC;
	// addi r30,r27,1
	ctx.r30.s64 = ctx.r27.s64 + 1;
loc_825D8ECC:
	// li r4,59
	ctx.r4.s64 = 59;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826e49d0
	ctx.lr = 0x825D8ED8;
	sub_826E49D0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x825d8f08
	if (!ctx.cr0.eq) goto loc_825D8F08;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_825D8EE8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825d8ee8
	if (!ctx.cr6.eq) goto loc_825D8EE8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_825D8F08:
	// subf r5,r30,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d58b0
	ctx.lr = 0x825D8F18;
	sub_825D58B0(ctx, base);
loc_825D8F18:
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825d8fbc
	if (ctx.cr6.eq) goto loc_825D8FBC;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5660
	ctx.lr = 0x825D8F30;
	sub_825D5660(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x825d8f6c
	goto loc_825D8F6C;
loc_825D8F3C:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x825d65a8
	ctx.lr = 0x825D8F48;
	sub_825D65A8(ctx, base);
	// subf r5,r30,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d58b0
	ctx.lr = 0x825D8F58;
	sub_825D58B0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5320
	ctx.lr = 0x825D8F64;
	sub_825D5320(ctx, base);
	// addi r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
loc_825D8F6C:
	// li r4,63
	ctx.r4.s64 = 63;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826e49d0
	ctx.lr = 0x825D8F78;
	sub_826E49D0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x825d8f3c
	if (!ctx.cr0.eq) goto loc_825D8F3C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825d5918
	ctx.lr = 0x825D8F8C;
	sub_825D5918(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d61c0
	ctx.lr = 0x825D8F98;
	sub_825D61C0(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5660
	ctx.lr = 0x825D8FA4;
	sub_825D5660(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6e38
	ctx.lr = 0x825D8FB0;
	sub_825D6E38(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// beq cr6,0x825d8e9c
	if (ctx.cr6.eq) goto loc_825D8E9C;
loc_825D8FBC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x825d9058
	if (ctx.cr6.eq) goto loc_825D9058;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// beq cr6,0x825d8ff4
	if (ctx.cr6.eq) goto loc_825D8FF4;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x825d5660
	ctx.lr = 0x825D8FD8;
	sub_825D5660(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5660
	ctx.lr = 0x825D8FE8;
	sub_825D5660(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-27720
	ctx.r4.s64 = ctx.r11.s64 + -27720;
	// b 0x825d9044
	goto loc_825D9044;
loc_825D8FF4:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x825d5918
	ctx.lr = 0x825D8FFC;
	sub_825D5918(ctx, base);
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5b30
	ctx.lr = 0x825D9008;
	sub_825D5B30(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5660
	ctx.lr = 0x825D9014;
	sub_825D5660(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d51c0
	ctx.lr = 0x825D9024;
	sub_825D51C0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825d9030
	if (!ctx.cr6.eq) goto loc_825D9030;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_825D9030:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5660
	ctx.lr = 0x825D903C;
	sub_825D5660(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-27764
	ctx.r4.s64 = ctx.r11.s64 + -27764;
loc_825D9044:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6380
	ctx.lr = 0x825D9054;
	sub_825D6380(ctx, base);
	// b 0x825d9144
	goto loc_825D9144;
loc_825D9058:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r30,r11,-27780
	ctx.r30.s64 = ctx.r11.s64 + -27780;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825d5918
	ctx.lr = 0x825D9068;
	sub_825D5918(ctx, base);
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5b30
	ctx.lr = 0x825D9074;
	sub_825D5B30(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5278
	ctx.lr = 0x825D9080;
	sub_825D5278(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5320
	ctx.lr = 0x825D908C;
	sub_825D5320(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825d5918
	ctx.lr = 0x825D9098;
	sub_825D5918(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5278
	ctx.lr = 0x825D90A4;
	sub_825D5278(ctx, base);
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5d98
	ctx.lr = 0x825D90B0;
	sub_825D5D98(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5fb8
	ctx.lr = 0x825D90C0;
	sub_825D5FB8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5278
	ctx.lr = 0x825D90CC;
	sub_825D5278(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825d5918
	ctx.lr = 0x825D90D8;
	sub_825D5918(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5278
	ctx.lr = 0x825D90E4;
	sub_825D5278(ctx, base);
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5d98
	ctx.lr = 0x825D90F0;
	sub_825D5D98(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5368
	ctx.lr = 0x825D90FC;
	sub_825D5368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825d911c
	if (!ctx.cr0.eq) goto loc_825D911C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5ae0
	ctx.lr = 0x825D9110;
	sub_825D5AE0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d52d8
	ctx.lr = 0x825D911C;
	sub_825D52D8(ctx, base);
loc_825D911C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5320
	ctx.lr = 0x825D9128;
	sub_825D5320(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5320
	ctx.lr = 0x825D9134;
	sub_825D5320(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5de8
	ctx.lr = 0x825D9140;
	sub_825D5DE8(ctx, base);
loc_825D9140:
	// li r3,1
	ctx.r3.s64 = 1;
loc_825D9144:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D9150"))) PPC_WEAK_FUNC(sub_825D9150);
PPC_FUNC_IMPL(__imp__sub_825D9150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825D9158;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d5048
	ctx.lr = 0x825D9174;
	sub_825D5048(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825d918c
	if (!ctx.cr0.eq) goto loc_825D918C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27624
	ctx.r4.s64 = ctx.r11.s64 + -27624;
	// bl 0x825d6380
	ctx.lr = 0x825D918C;
	sub_825D6380(ctx, base);
loc_825D918C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d50d8
	ctx.lr = 0x825D919C;
	sub_825D50D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825da488
	ctx.lr = 0x825D91A8;
	sub_825DA488(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne 0x825d91f8
	if (!ctx.cr0.eq) goto loc_825D91F8;
	// bl 0x825d51a8
	ctx.lr = 0x825D91B8;
	sub_825D51A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x825d5048
	ctx.lr = 0x825D91C8;
	sub_825D5048(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825d91e0
	if (!ctx.cr0.eq) goto loc_825D91E0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27652
	ctx.r4.s64 = ctx.r11.s64 + -27652;
	// bl 0x825d6380
	ctx.lr = 0x825D91E0;
	sub_825D6380(ctx, base);
loc_825D91E0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d50d8
	ctx.lr = 0x825D91F0;
	sub_825D50D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x825d9208
	goto loc_825D9208;
loc_825D91F8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825d50d8
	ctx.lr = 0x825D9204;
	sub_825D50D8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_825D9208:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D9210"))) PPC_WEAK_FUNC(sub_825D9210);
PPC_FUNC_IMPL(__imp__sub_825D9210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d57c0
	ctx.lr = 0x825D9230;
	sub_825D57C0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x825d924c
	if (!ctx.cr0.eq) goto loc_825D924C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-27592
	ctx.r5.s64 = ctx.r11.s64 + -27592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6ff8
	ctx.lr = 0x825D924C;
	sub_825D6FF8(ctx, base);
loc_825D924C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d51a8
	ctx.lr = 0x825D9254;
	sub_825D51A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bl 0x825d9150
	ctx.lr = 0x825D9268;
	sub_825D9150(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bge 0x825d9290
	if (!ctx.cr0.lt) goto loc_825D9290;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825d5ae0
	ctx.lr = 0x825D927C;
	sub_825D5AE0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5278
	ctx.lr = 0x825D9288;
	sub_825D5278(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x825d92a8
	goto loc_825D92A8;
loc_825D9290:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825d5ae0
	ctx.lr = 0x825D9298;
	sub_825D5AE0(ctx, base);
	// subfic r4,r30,-1
	ctx.xer.ca = ctx.r30.u32 <= 4294967295;
	ctx.r4.s64 = -1 - ctx.r30.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5278
	ctx.lr = 0x825D92A4;
	sub_825D5278(ctx, base);
	// addi r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 1;
loc_825D92A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D92C0"))) PPC_WEAK_FUNC(sub_825D92C0);
PPC_FUNC_IMPL(__imp__sub_825D92C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d57c0
	ctx.lr = 0x825D92E0;
	sub_825D57C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d51a8
	ctx.lr = 0x825D92EC;
	sub_825D51A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d9150
	ctx.lr = 0x825D92FC;
	sub_825D9150(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x825d9344
	if (!ctx.cr0.lt) goto loc_825D9344;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5468
	ctx.lr = 0x825D9310;
	sub_825D5468(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825d933c
	if (ctx.cr0.eq) goto loc_825D933C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d62f8
	ctx.lr = 0x825D9324;
	sub_825D62F8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5278
	ctx.lr = 0x825D9330;
	sub_825D5278(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d61c0
	ctx.lr = 0x825D933C;
	sub_825D61C0(ctx, base);
loc_825D933C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6138
	ctx.lr = 0x825D9344;
	sub_825D6138(ctx, base);
loc_825D9344:
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

__attribute__((alias("__imp__sub_825D9360"))) PPC_WEAK_FUNC(sub_825D9360);
PPC_FUNC_IMPL(__imp__sub_825D9360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x825d5140
	ctx.lr = 0x825D937C;
	sub_825D5140(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5368
	ctx.lr = 0x825D938C;
	sub_825D5368(ctx, base);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bne cr6,0x825d93a8
	if (!ctx.cr6.eq) goto loc_825D93A8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d53c8
	ctx.lr = 0x825D93A0;
	sub_825D53C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825d93bc
	if (ctx.cr0.eq) goto loc_825D93BC;
loc_825D93A8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-27572
	ctx.r5.s64 = ctx.r11.s64 + -27572;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6ff8
	ctx.lr = 0x825D93BC;
	sub_825D6FF8(ctx, base);
loc_825D93BC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5320
	ctx.lr = 0x825D93C8;
	sub_825D5320(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d50d8
	ctx.lr = 0x825D93D8;
	sub_825D50D8(ctx, base);
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

__attribute__((alias("__imp__sub_825D93F8"))) PPC_WEAK_FUNC(sub_825D93F8);
PPC_FUNC_IMPL(__imp__sub_825D93F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x825d9360
	ctx.lr = 0x825D9410;
	sub_825D9360(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-27968
	ctx.r4.s64 = ctx.r11.s64 + -27968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5a30
	ctx.lr = 0x825D9424;
	sub_825D5A30(ctx, base);
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

__attribute__((alias("__imp__sub_825D9440"))) PPC_WEAK_FUNC(sub_825D9440);
PPC_FUNC_IMPL(__imp__sub_825D9440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x825d51a8
	ctx.lr = 0x825D9458;
	sub_825D51A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825da240
	ctx.lr = 0x825D9464;
	sub_825DA240(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D9478"))) PPC_WEAK_FUNC(sub_825D9478);
PPC_FUNC_IMPL(__imp__sub_825D9478) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d57c0
	ctx.lr = 0x825D9498;
	sub_825D57C0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x825d94b4
	if (!ctx.cr0.eq) goto loc_825D94B4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-27592
	ctx.r5.s64 = ctx.r11.s64 + -27592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6ff8
	ctx.lr = 0x825D94B4;
	sub_825D6FF8(ctx, base);
loc_825D94B4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x825d94cc
	if (!ctx.cr6.eq) goto loc_825D94CC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,-27536
	ctx.r4.s64 = ctx.r11.s64 + -27536;
	// b 0x825d9510
	goto loc_825D9510;
loc_825D94CC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825dfdb8
	ctx.lr = 0x825D94DC;
	sub_825DFDB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825d9504
	if (!ctx.cr0.eq) goto loc_825D9504;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d51a8
	ctx.lr = 0x825D94EC;
	sub_825D51A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825d9504
	if (!ctx.cr0.eq) goto loc_825D9504;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,31632
	ctx.r4.s64 = ctx.r11.s64 + 31632;
	// b 0x825d9510
	goto loc_825D9510;
loc_825D9504:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r11,-27548
	ctx.r4.s64 = ctx.r11.s64 + -27548;
loc_825D9510:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d58b0
	ctx.lr = 0x825D9518;
	sub_825D58B0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_825D9538"))) PPC_WEAK_FUNC(sub_825D9538);
PPC_FUNC_IMPL(__imp__sub_825D9538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,-27504
	ctx.r4.s64 = ctx.r11.s64 + -27504;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d58b0
	ctx.lr = 0x825D955C;
	sub_825D58B0(ctx, base);
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5320
	ctx.lr = 0x825D9568;
	sub_825D5320(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28592
	ctx.r5.s64 = ctx.r11.s64 + -28592;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6700
	ctx.lr = 0x825D9580;
	sub_825D6700(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,-27516
	ctx.r4.s64 = ctx.r11.s64 + -27516;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d58b0
	ctx.lr = 0x825D9594;
	sub_825D58B0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,-29252
	ctx.r4.s64 = ctx.r11.s64 + -29252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d58b0
	ctx.lr = 0x825D95A8;
	sub_825D58B0(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5de8
	ctx.lr = 0x825D95B4;
	sub_825D5DE8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,-27528
	ctx.r4.s64 = ctx.r11.s64 + -27528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d58b0
	ctx.lr = 0x825D95C8;
	sub_825D58B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5c30
	ctx.lr = 0x825D95D0;
	sub_825D5C30(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5320
	ctx.lr = 0x825D95DC;
	sub_825D5320(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5eb8
	ctx.lr = 0x825D95E8;
	sub_825D5EB8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r11,-29208
	ctx.r4.s64 = ctx.r11.s64 + -29208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d58b0
	ctx.lr = 0x825D95FC;
	sub_825D58B0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-29212
	ctx.r4.s64 = ctx.r11.s64 + -29212;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d58b0
	ctx.lr = 0x825D9610;
	sub_825D58B0(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5de8
	ctx.lr = 0x825D961C;
	sub_825D5DE8(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-29544
	ctx.r4.s64 = ctx.r11.s64 + -29544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5a30
	ctx.lr = 0x825D9630;
	sub_825D5A30(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5de8
	ctx.lr = 0x825D963C;
	sub_825D5DE8(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5de8
	ctx.lr = 0x825D9648;
	sub_825D5DE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D9660"))) PPC_WEAK_FUNC(sub_825D9660);
PPC_FUNC_IMPL(__imp__sub_825D9660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x825d9538
	ctx.lr = 0x825D9678;
	sub_825D9538(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-28384
	ctx.r5.s64 = ctx.r11.s64 + -28384;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27500
	ctx.r4.s64 = ctx.r11.s64 + -27500;
	// bl 0x825d6700
	ctx.lr = 0x825D9694;
	sub_825D6700(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5c30
	ctx.lr = 0x825D969C;
	sub_825D5C30(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27660
	ctx.r4.s64 = ctx.r11.s64 + -27660;
	// bl 0x825d5918
	ctx.lr = 0x825D96AC;
	sub_825D5918(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5278
	ctx.lr = 0x825D96B8;
	sub_825D5278(ctx, base);
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5d98
	ctx.lr = 0x825D96C4;
	sub_825D5D98(ctx, base);
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

__attribute__((alias("__imp__sub_825D96E0"))) PPC_WEAK_FUNC(sub_825D96E0);
PPC_FUNC_IMPL(__imp__sub_825D96E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x825d9750
	if (ctx.cr6.eq) goto loc_825D9750;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x825d9750
	if (ctx.cr6.eq) goto loc_825D9750;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x825d972c
	if (ctx.cr6.eq) goto loc_825D972C;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x825d9764
	if (!ctx.cr6.eq) goto loc_825D9764;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,23
	ctx.r5.s64 = 23;
	// addi r4,r11,-27468
	ctx.r4.s64 = ctx.r11.s64 + -27468;
	// b 0x825d9738
	goto loc_825D9738;
loc_825D972C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r4,r11,-27488
	ctx.r4.s64 = ctx.r11.s64 + -27488;
loc_825D9738:
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x825de870
	ctx.lr = 0x825D9748;
	sub_825DE870(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// b 0x825d9764
	goto loc_825D9764;
loc_825D9750:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// ld r11,-8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -8);
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
loc_825D9764:
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D9788"))) PPC_WEAK_FUNC(sub_825D9788);
PPC_FUNC_IMPL(__imp__sub_825D9788) {
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
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825d97b8
	if (ctx.cr0.eq) goto loc_825D97B8;
	// stw r10,336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 336, ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x826e4f10
	ctx.lr = 0x825D97B8;
	longjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32), ctx.r4.s32);
loc_825D97B8:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D97C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826e2798
	ctx.lr = 0x825D97D0;
	sub_826E2798(ctx, base);
}

__attribute__((alias("__imp__sub_825D97D0"))) PPC_WEAK_FUNC(sub_825D97D0);
PPC_FUNC_IMPL(__imp__sub_825D97D0) {
	PPC_FUNC_PROLOGUE();
	PPCContext env{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r4.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r5,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r5.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r10.u32);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// stw r11,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r11.u32);
	// stw r9,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r9.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826e5030
	ctx.lr = 0x825D9810;
	env = ctx;
	temp.s64 = setjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32));
	if (temp.s64 != 0) ctx = env;
	ctx.r3 = temp;
	// lwz r31,468(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825d9830
	if (!ctx.cr0.eq) goto loc_825D9830;
	// lwz r11,476(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,484(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D9830;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D9830:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D9850"))) PPC_WEAK_FUNC(sub_825D9850);
PPC_FUNC_IMPL(__imp__sub_825D9850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825D9858;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm r6,r29,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r30,28(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x825e0bc8
	ctx.lr = 0x825D987C;
	sub_825E0BC8(ctx, base);
	// addi r10,r29,-6
	ctx.r10.s64 = ctx.r29.s64 + -6;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r30.s64;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// srawi r10,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 4;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x825d98d8
	goto loc_825D98D8;
loc_825D98B4:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r30.s64;
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_825D98D8:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825d98b4
	if (!ctx.cr0.eq) goto loc_825D98B4;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// b 0x825d9924
	goto loc_825D9924;
loc_825D98E8:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r30.s64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
loc_825D9924:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825d98e8
	if (!ctx.cr6.gt) goto loc_825D98E8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D9948"))) PPC_WEAK_FUNC(sub_825D9948);
PPC_FUNC_IMPL(__imp__sub_825D9948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825D9950;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mulli r6,r30,24
	ctx.r6.s64 = ctx.r30.s64 * 24;
	// lwz r29,40(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lhz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 44);
	// mulli r5,r11,24
	ctx.r5.s64 = ctx.r11.s64 * 24;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x825e0bc8
	ctx.lr = 0x825D9974;
	sub_825E0BC8(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// subf r7,r29,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r29.s64;
	// li r9,24
	ctx.r9.s64 = 24;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// divw r9,r7,r9
	ctx.r9.s32 = ctx.r7.s32 / ctx.r9.s32;
	// mulli r10,r8,24
	ctx.r10.s64 = ctx.r8.s64 * 24;
	// sth r11,44(r31)
	PPC_STORE_U16(ctx.r31.u32 + 44, ctx.r11.u16);
	// mulli r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 * 24;
	// add r11,r9,r3
	ctx.r11.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D99B8"))) PPC_WEAK_FUNC(sub_825D99B8);
PPC_FUNC_IMPL(__imp__sub_825D99B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x825d99cc
	if (ctx.cr6.gt) goto loc_825D99CC;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x825d9850
	sub_825D9850(ctx, base);
	return;
loc_825D99CC:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r4,r11,5
	ctx.r4.s64 = ctx.r11.s64 + 5;
	// b 0x825d9850
	sub_825D9850(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D99D8"))) PPC_WEAK_FUNC(sub_825D99D8);
PPC_FUNC_IMPL(__imp__sub_825D99D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x825D99E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r27,60(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi r27,0
	ctx.cr0.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq 0x825d9abc
	if (ctx.cr0.eq) goto loc_825D9ABC;
	// lbz r11,49(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 49);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825d9abc
	if (ctx.cr0.eq) goto loc_825D9ABC;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r30,r11,r9
	ctx.r30.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// subf r29,r11,r8
	ctx.r29.s64 = ctx.r8.s64 - ctx.r11.s64;
	// bne cr6,0x825d9a34
	if (!ctx.cr6.eq) goto loc_825D9A34;
	// stw r28,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r28.u32);
	// b 0x825d9a48
	goto loc_825D9A48;
loc_825D9A34:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r8,24
	ctx.r8.s64 = 24;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r11,r11,r8
	ctx.r11.s32 = ctx.r11.s32 / ctx.r8.s32;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
loc_825D9A48:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmpwi cr6,r11,320
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 320, ctx.xer);
	// bgt cr6,0x825d9a74
	if (ctx.cr6.gt) goto loc_825D9A74;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bge cr6,0x825d9a70
	if (!ctx.cr6.lt) goto loc_825D9A70;
	// addi r4,r11,25
	ctx.r4.s64 = ctx.r11.s64 + 25;
loc_825D9A70:
	// bl 0x825d9850
	ctx.lr = 0x825D9A74;
	sub_825D9850(ctx, base);
loc_825D9A74:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stb r28,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r28.u8);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x825D9A98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stb r10,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r10.u8);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_825D9ABC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D9AC8"))) PPC_WEAK_FUNC(sub_825D9AC8);
PPC_FUNC_IMPL(__imp__sub_825D9AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x825D9AD0;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r5,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r5.s64;
	// srawi r29,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r10.s32 >> 4;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x825d9b50
	if (!ctx.cr6.lt) goto loc_825D9B50;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subf r30,r29,r28
	ctx.r30.s64 = ctx.r28.s64 - ctx.r29.s64;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x825d9b28
	if (ctx.cr6.gt) goto loc_825D9B28;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x825d9b1c
	if (ctx.cr6.gt) goto loc_825D9B1C;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x825d9b24
	goto loc_825D9B24;
loc_825D9B1C:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,5
	ctx.r4.s64 = ctx.r11.s64 + 5;
loc_825D9B24:
	// bl 0x825d9850
	ctx.lr = 0x825D9B28;
	sub_825D9850(ctx, base);
loc_825D9B28:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_825D9B30:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bne 0x825d9b30
	if (!ctx.cr0.eq) goto loc_825D9B30;
loc_825D9B50:
	// subf r30,r28,r29
	ctx.r30.s64 = ctx.r29.s64 - ctx.r28.s64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825df230
	ctx.lr = 0x825D9B64;
	sub_825DF230(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x825d9bb8
	if (!ctx.cr6.gt) goto loc_825D9BB8;
	// neg r10,r30
	ctx.r10.s64 = -ctx.r30.s64;
	// rlwinm r29,r10,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
loc_825D9B7C:
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r26,r29,r11
	ctx.r26.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x825dfaf0
	ctx.lr = 0x825D9B98;
	sub_825DFAF0(ctx, base);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// ld r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// std r10,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// blt cr6,0x825d9b7c
	if (ctx.cr6.lt) goto loc_825D9B7C;
loc_825D9BB8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-29200
	ctx.r4.s64 = ctx.r11.s64 + -29200;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x825de870
	ctx.lr = 0x825D9BD4;
	sub_825DE870(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825df578
	ctx.lr = 0x825D9BE8;
	sub_825DF578(ctx, base);
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r9,r30,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// li r8,5
	ctx.r8.s64 = 5;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.f0.u64);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x825d9c50
	if (ctx.cr6.gt) goto loc_825D9C50;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bge cr6,0x825d9c4c
	if (!ctx.cr6.lt) goto loc_825D9C4C;
	// addi r4,r11,6
	ctx.r4.s64 = ctx.r11.s64 + 6;
loc_825D9C4C:
	// bl 0x825d9850
	ctx.lr = 0x825D9C50;
	sub_825D9850(ctx, base);
loc_825D9C50:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D9C68"))) PPC_WEAK_FUNC(sub_825D9C68);
PPC_FUNC_IMPL(__imp__sub_825D9C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825D9C70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,14
	ctx.r5.s64 = 14;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825dc448
	ctx.lr = 0x825D9C84;
	sub_825DC448(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r28,r10,r30
	ctx.r28.s64 = ctx.r30.s64 - ctx.r10.s64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x825d9cb0
	if (ctx.cr6.eq) goto loc_825D9CB0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-27428
	ctx.r5.s64 = ctx.r11.s64 + -27428;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0988
	ctx.lr = 0x825D9CB0;
	sub_825E0988(ctx, base);
loc_825D9CB0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x825d9cd0
	goto loc_825D9CD0;
loc_825D9CB8:
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// ld r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + -8);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_825D9CD0:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x825d9cb8
	if (ctx.cr6.gt) goto loc_825D9CB8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x825d9d08
	if (ctx.cr6.gt) goto loc_825D9D08;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bge cr6,0x825d9d04
	if (!ctx.cr6.lt) goto loc_825D9D04;
	// addi r4,r11,6
	ctx.r4.s64 = ctx.r11.s64 + 6;
loc_825D9D04:
	// bl 0x825d9850
	ctx.lr = 0x825D9D08;
	sub_825D9850(ctx, base);
loc_825D9D08:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// add r3,r28,r10
	ctx.r3.u64 = ctx.r28.u64 + ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// ld r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D9D38"))) PPC_WEAK_FUNC(sub_825D9D38);
PPC_FUNC_IMPL(__imp__sub_825D9D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825D9D40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r28,r11,r29
	ctx.r28.s64 = ctx.r29.s64 - ctx.r11.s64;
	// beq cr6,0x825d9d68
	if (ctx.cr6.eq) goto loc_825D9D68;
	// bl 0x825d9c68
	ctx.lr = 0x825D9D64;
	sub_825D9C68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_825D9D68:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825d9db8
	if (!ctx.cr6.eq) goto loc_825D9DB8;
	// lhz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// ble cr6,0x825d9d94
	if (!ctx.cr6.gt) goto loc_825D9D94;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x825d9788
	ctx.lr = 0x825D9D94;
	sub_825D9788(ctx, base);
loc_825D9D94:
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x825d9948
	ctx.lr = 0x825D9D9C;
	sub_825D9948(ctx, base);
	// lhz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// ble cr6,0x825d9db8
	if (!ctx.cr6.gt) goto loc_825D9DB8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27444
	ctx.r4.s64 = ctx.r11.s64 + -27444;
	// bl 0x825e04f8
	ctx.lr = 0x825D9DB8;
	sub_825E04F8(ctx, base);
loc_825D9DB8:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825d9eb0
	if (!ctx.cr0.eq) goto loc_825D9EB0;
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lbz r11,70(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 70);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825d9de8
	if (ctx.cr0.eq) goto loc_825D9DE8;
	// addi r5,r29,16
	ctx.r5.s64 = ctx.r29.s64 + 16;
	// lbz r4,69(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 69);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d9ac8
	ctx.lr = 0x825D9DE8;
	sub_825D9AC8(ctx, base);
loc_825D9DE8:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lbz r11,71(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 71);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rotlwi r9,r11,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x825d9e28
	if (ctx.cr6.gt) goto loc_825D9E28;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x825d9e1c
	if (ctx.cr6.gt) goto loc_825D9E1C;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x825d9e24
	goto loc_825D9E24;
loc_825D9E1C:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,5
	ctx.r4.s64 = ctx.r11.s64 + 5;
loc_825D9E24:
	// bl 0x825d9850
	ctx.lr = 0x825D9E28;
	sub_825D9850(ctx, base);
loc_825D9E28:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r7,8
	ctx.r7.s64 = 8;
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lbz r9,71(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 71);
	// rotlwi r9,r9,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x825d9e90
	goto loc_825D9E90;
loc_825D9E7C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_825D9E90:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x825d9e7c
	if (ctx.cr6.lt) goto loc_825D9E7C;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x825d9f5c
	goto loc_825D9F5C;
loc_825D9EB0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,320
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 320, ctx.xer);
	// bgt cr6,0x825d9ee0
	if (ctx.cr6.gt) goto loc_825D9EE0;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bge cr6,0x825d9edc
	if (!ctx.cr6.lt) goto loc_825D9EDC;
	// addi r4,r11,25
	ctx.r4.s64 = ctx.r11.s64 + 25;
loc_825D9EDC:
	// bl 0x825d9850
	ctx.lr = 0x825D9EE0;
	sub_825D9850(ctx, base);
loc_825D9EE0:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,320
	ctx.r10.s64 = ctx.r10.s64 + 320;
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lbz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d9f38
	if (ctx.cr0.eq) goto loc_825D9F38;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d99d8
	ctx.lr = 0x825D9F38;
	sub_825D99D8(ctx, base);
loc_825D9F38:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D9F50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_825D9F5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D9F68"))) PPC_WEAK_FUNC(sub_825D9F68);
PPC_FUNC_IMPL(__imp__sub_825D9F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825D9F70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lbz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d9fec
	if (ctx.cr0.eq) goto loc_825D9FEC;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// subf r29,r11,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x825d99d8
	ctx.lr = 0x825D9FA0;
	sub_825D99D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825d9fe4
	if (!ctx.cr0.eq) goto loc_825D9FE4;
	// b 0x825d9fc8
	goto loc_825D9FC8;
loc_825D9FB4:
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d99d8
	ctx.lr = 0x825D9FC4;
	sub_825D99D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_825D9FC8:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// bne cr6,0x825d9fb4
	if (!ctx.cr6.eq) goto loc_825D9FB4;
loc_825D9FE4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
loc_825D9FEC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r11,-24
	ctx.r9.s64 = ctx.r11.s64 + -24;
	// addi r11,r8,-16
	ctx.r11.s64 = ctx.r8.s64 + -16;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// beq cr6,0x825da060
	if (ctx.cr6.eq) goto loc_825DA060;
loc_825DA010:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x825da044
	if (!ctx.cr6.lt) goto loc_825DA044;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r9,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r9.u64);
	// bne 0x825da010
	if (!ctx.cr0.eq) goto loc_825DA010;
loc_825DA044:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x825da060
	if (!ctx.cr6.gt) goto loc_825DA060;
loc_825DA04C:
	// li r10,0
	ctx.r10.s64 = 0;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bgt 0x825da04c
	if (ctx.cr0.gt) goto loc_825DA04C;
loc_825DA060:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DA070"))) PPC_WEAK_FUNC(sub_825DA070);
PPC_FUNC_IMPL(__imp__sub_825DA070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825DA078;
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
	// lhz r11,46(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,200
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 200, ctx.xer);
	// sth r11,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r11.u16);
	// blt cr6,0x825da0b8
	if (ctx.cr6.lt) goto loc_825DA0B8;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,200
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 200, ctx.xer);
	// bne cr6,0x825da118
	if (!ctx.cr6.eq) goto loc_825DA118;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-27420
	ctx.r4.s64 = ctx.r11.s64 + -27420;
	// bl 0x825e04f8
	ctx.lr = 0x825DA0B8;
	sub_825E04F8(ctx, base);
loc_825DA0B8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d9d38
	ctx.lr = 0x825DA0C4;
	sub_825D9D38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825da0d4
	if (!ctx.cr0.eq) goto loc_825DA0D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825dd238
	ctx.lr = 0x825DA0D4;
	sub_825DD238(ctx, base);
loc_825DA0D4:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d9f68
	ctx.lr = 0x825DA0E4;
	sub_825D9F68(ctx, base);
	// lhz r10,46(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sth r10,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r10.u16);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825da110
	if (ctx.cr6.lt) goto loc_825DA110;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825dc270
	ctx.lr = 0x825DA110;
	sub_825DC270(ctx, base);
loc_825DA110:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_825DA118:
	// lhz r11,46(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// cmplwi cr6,r11,225
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 225, ctx.xer);
	// blt cr6,0x825da0b8
	if (ctx.cr6.lt) goto loc_825DA0B8;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d9788
	ctx.lr = 0x825DA130;
	sub_825D9788(ctx, base);
}

__attribute__((alias("__imp__sub_825DA130"))) PPC_WEAK_FUNC(sub_825DA130);
PPC_FUNC_IMPL(__imp__sub_825DA130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825da19c
	if (!ctx.cr6.eq) goto loc_825DA19C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825da180
	if (ctx.cr6.lt) goto loc_825DA180;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-27360
	ctx.r4.s64 = ctx.r11.s64 + -27360;
	// bl 0x825e04f8
	ctx.lr = 0x825DA180;
	sub_825E04F8(ctx, base);
loc_825DA180:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x825d9d38
	ctx.lr = 0x825DA198;
	sub_825D9D38(ctx, base);
	// b 0x825da20c
	goto loc_825DA20C;
loc_825DA19C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825da1fc
	if (ctx.cr0.eq) goto loc_825DA1FC;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825da1f0
	if (ctx.cr0.eq) goto loc_825DA1F0;
	// lwz r11,-12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// rlwinm r11,r11,26,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1FF;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r5,r10,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825d9f68
	ctx.lr = 0x825DA1D8;
	sub_825D9F68(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x825da20c
	if (ctx.cr6.lt) goto loc_825DA20C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x825da20c
	goto loc_825DA20C;
loc_825DA1F0:
	// rlwinm r10,r10,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x825da20c
	goto loc_825DA20C;
loc_825DA1FC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27400
	ctx.r4.s64 = ctx.r11.s64 + -27400;
	// bl 0x825e04f8
	ctx.lr = 0x825DA20C;
	sub_825E04F8(ctx, base);
loc_825DA20C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825dd238
	ctx.lr = 0x825DA214;
	sub_825DD238(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x825da228
	if (ctx.cr0.eq) goto loc_825DA228;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d9f68
	ctx.lr = 0x825DA228;
	sub_825D9F68(ctx, base);
loc_825DA228:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DA240"))) PPC_WEAK_FUNC(sub_825DA240);
PPC_FUNC_IMPL(__imp__sub_825DA240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825DA248;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lhz r11,46(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// lwz r29,20(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825da270
	if (ctx.cr0.eq) goto loc_825DA270;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-27300
	ctx.r4.s64 = ctx.r11.s64 + -27300;
	// bl 0x825e04f8
	ctx.lr = 0x825DA270;
	sub_825E04F8(ctx, base);
loc_825DA270:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825da304
	if (ctx.cr0.eq) goto loc_825DA304;
	// lwz r11,-16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825da298
	if (ctx.cr0.eq) goto loc_825DA298;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27328
	ctx.r4.s64 = ctx.r11.s64 + -27328;
	// bl 0x825e04f8
	ctx.lr = 0x825DA298;
	sub_825E04F8(ctx, base);
loc_825DA298:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r6,r30,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825da304
	if (!ctx.cr6.gt) goto loc_825DA304;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x825da2f8
	if (!ctx.cr6.gt) goto loc_825DA2F8;
	// neg r9,r30
	ctx.r9.s64 = -ctx.r30.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
loc_825DA2C8:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r8,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r8.u64);
	// bne 0x825da2c8
	if (!ctx.cr0.eq) goto loc_825DA2C8;
loc_825DA2F8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_825DA304:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r3,-1
	ctx.r3.s64 = -1;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DA320"))) PPC_WEAK_FUNC(sub_825DA320);
PPC_FUNC_IMPL(__imp__sub_825DA320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825da354
	if (ctx.cr6.lt) goto loc_825DA354;
	// bl 0x825dc270
	ctx.lr = 0x825DA354;
	sub_825DC270(ctx, base);
loc_825DA354:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 4;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825da374
	if (ctx.cr6.eq) goto loc_825DA374;
	// bl 0x825e3d80
	ctx.lr = 0x825DA370;
	sub_825E3D80(ctx, base);
	// b 0x825da378
	goto loc_825DA378;
loc_825DA374:
	// bl 0x825e33b8
	ctx.lr = 0x825DA378;
	sub_825E33B8(ctx, base);
loc_825DA378:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r31,64
	ctx.r5.s64 = ctx.r31.s64 + 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825deac8
	ctx.lr = 0x825DA38C;
	sub_825DEAC8(ctx, base);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x825da3d0
	if (ctx.cr6.gt) goto loc_825DA3D0;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bge cr6,0x825da3cc
	if (!ctx.cr6.lt) goto loc_825DA3CC;
	// addi r4,r11,6
	ctx.r4.s64 = ctx.r11.s64 + 6;
loc_825DA3CC:
	// bl 0x825d9850
	ctx.lr = 0x825DA3D0;
	sub_825D9850(ctx, base);
loc_825DA3D0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DA3F8"))) PPC_WEAK_FUNC(sub_825DA3F8);
PPC_FUNC_IMPL(__imp__sub_825DA3F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825DA400;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r9,-32162
	ctx.r9.s64 = -2107768832;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r9,-23776
	ctx.r4.s64 = ctx.r9.s64 + -23776;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// subf r28,r11,r8
	ctx.r28.s64 = ctx.r8.s64 - ctx.r11.s64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// bl 0x825d97d0
	ctx.lr = 0x825DA440;
	sub_825D97D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0bc8
	ctx.lr = 0x825DA458;
	sub_825E0BC8(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x825da47c
	if (ctx.cr6.eq) goto loc_825DA47C;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r5,r28,r11
	ctx.r5.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x825d96e0
	ctx.lr = 0x825DA47C;
	sub_825D96E0(ctx, base);
loc_825DA47C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DA488"))) PPC_WEAK_FUNC(sub_825DA488);
PPC_FUNC_IMPL(__imp__sub_825DA488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825DA490;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r4,r11,-24272
	ctx.r4.s64 = ctx.r11.s64 + -24272;
	// lbz r29,49(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 49);
	// bl 0x825d97d0
	ctx.lr = 0x825DA4B0;
	sub_825D97D0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x825da540
	if (ctx.cr0.eq) goto loc_825DA540;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// sth r10,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r10.u16);
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x825debd0
	ctx.lr = 0x825DA4DC;
	sub_825DEBD0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d96e0
	ctx.lr = 0x825DA4EC;
	sub_825D96E0(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lhz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 44);
	// stb r29,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r29.u8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r9,4096
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4096, ctx.xer);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// ble cr6,0x825da540
	if (!ctx.cr6.gt) goto loc_825DA540;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,24
	ctx.r9.s64 = 24;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r11,r9
	ctx.r11.s32 = ctx.r11.s32 / ctx.r9.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// bge cr6,0x825da540
	if (!ctx.cr6.lt) goto loc_825DA540;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d9948
	ctx.lr = 0x825DA540;
	sub_825D9948(ctx, base);
loc_825DA540:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DA550"))) PPC_WEAK_FUNC(sub_825DA550);
PPC_FUNC_IMPL(__imp__sub_825DA550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x825DA558;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r25,92(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lhz r28,46(r31)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// subf r27,r11,r10
	ctx.r27.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lbz r26,49(r31)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r31.u32 + 49);
	// stw r7,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// bl 0x825d97d0
	ctx.lr = 0x825DA584;
	sub_825D97D0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x825da614
	if (ctx.cr0.eq) goto loc_825DA614;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825debd0
	ctx.lr = 0x825DA5A0;
	sub_825DEBD0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d96e0
	ctx.lr = 0x825DA5B0;
	sub_825D96E0(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lhz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 44);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r28,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r28.u16);
	// cmplwi cr6,r8,4096
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4096, ctx.xer);
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// add r11,r10,r27
	ctx.r11.u64 = ctx.r10.u64 + ctx.r27.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r26,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r26.u8);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// ble cr6,0x825da614
	if (!ctx.cr6.gt) goto loc_825DA614;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r10,24
	ctx.r10.s64 = 24;
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// bge cr6,0x825da614
	if (!ctx.cr6.lt) goto loc_825DA614;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d9948
	ctx.lr = 0x825DA614;
	sub_825D9948(ctx, base);
loc_825DA614:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r25,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r25.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DA628"))) PPC_WEAK_FUNC(sub_825DA628);
PPC_FUNC_IMPL(__imp__sub_825DA628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r6,720
	ctx.r6.s64 = 720;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e0bc8
	ctx.lr = 0x825DA658;
	sub_825E0BC8(ctx, base);
	// li r10,45
	ctx.r10.s64 = 45;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// addi r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 + 624;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x825e0bc8
	ctx.lr = 0x825DA688;
	sub_825E0BC8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,320
	ctx.r10.s64 = ctx.r10.s64 + 320;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// sth r9,44(r31)
	PPC_STORE_U16(ctx.r31.u32 + 44, ctx.r9.u16);
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DA700"))) PPC_WEAK_FUNC(sub_825DA700);
PPC_FUNC_IMPL(__imp__sub_825DA700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825DA708;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825e0bc8
	ctx.lr = 0x825DA724;
	sub_825E0BC8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x825da738
	if (!ctx.cr0.eq) goto loc_825DA738;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d9788
	ctx.lr = 0x825DA738;
	sub_825D9788(ctx, base);
loc_825DA738:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r31,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r31.u32);
	// lis r10,-32083
	ctx.r10.s64 = -2102591488;
	// li r9,288
	ctx.r9.s64 = 288;
	// addi r10,r10,1792
	ctx.r10.s64 = ctx.r10.s64 + 1792;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,64(r8)
	PPC_STORE_U32(ctx.r8.u32 + 64, ctx.r11.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,48(r8)
	PPC_STORE_U32(ctx.r8.u32 + 48, ctx.r11.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// stw r10,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r10.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r11,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r11.u32);
	// stw r11,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r11.u32);
	// stw r11,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r11.u32);
	// stw r9,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r9.u32);
	// bl 0x825da628
	ctx.lr = 0x825DA7A4;
	sub_825DA628(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r29,5
	ctx.r29.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r29.u32);
	// lwz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r29,64(r28)
	PPC_STORE_U32(ctx.r28.u32 + 64, ctx.r29.u32);
	// bl 0x825df230
	ctx.lr = 0x825DA7C8;
	sub_825DF230(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,72(r28)
	PPC_STORE_U32(ctx.r28.u32 + 72, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// bl 0x825df230
	ctx.lr = 0x825DA7F0;
	sub_825DF230(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r29,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r29.u32);
	// bl 0x825df230
	ctx.lr = 0x825DA810;
	sub_825DF230(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,56(r28)
	PPC_STORE_U32(ctx.r28.u32 + 56, ctx.r11.u32);
	// bl 0x825de788
	ctx.lr = 0x825DA824;
	sub_825DE788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825dc368
	ctx.lr = 0x825DA82C;
	sub_825DC368(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e3e00
	ctx.lr = 0x825DA834;
	sub_825E3E00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r4,r11,-27488
	ctx.r4.s64 = ctx.r11.s64 + -27488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825de870
	ctx.lr = 0x825DA848;
	sub_825DE870(ctx, base);
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DA870"))) PPC_WEAK_FUNC(sub_825DA870);
PPC_FUNC_IMPL(__imp__sub_825DA870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x825debd0
	ctx.lr = 0x825DA88C;
	sub_825DEBD0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825da8d8
	if (ctx.cr6.eq) goto loc_825DA8D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825dc078
	ctx.lr = 0x825DA8A4;
	sub_825DC078(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825de770
	ctx.lr = 0x825DA8AC;
	sub_825DE770(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x825e0bc8
	ctx.lr = 0x825DA8C4;
	sub_825E0BC8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r3.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
loc_825DA8D8:
	// lhz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mulli r5,r11,24
	ctx.r5.s64 = ctx.r11.s64 * 24;
	// bl 0x825e0bc8
	ctx.lr = 0x825DA8F0;
	sub_825E0BC8(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0bc8
	ctx.lr = 0x825DA908;
	sub_825E0BC8(ctx, base);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x825da924
	if (ctx.cr0.eq) goto loc_825DA924;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825e0bc8
	ctx.lr = 0x825DA924;
	sub_825E0BC8(ctx, base);
loc_825DA924:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,96
	ctx.r5.s64 = 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825e0bc8
	ctx.lr = 0x825DA938;
	sub_825E0BC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DA950"))) PPC_WEAK_FUNC(sub_825DA950);
PPC_FUNC_IMPL(__imp__sub_825DA950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x825e0bc8
	ctx.lr = 0x825DA978;
	sub_825E0BC8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825dc340
	ctx.lr = 0x825DA98C;
	sub_825DC340(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stb r11,50(r31)
	PPC_STORE_U8(ctx.r31.u32 + 50, ctx.r11.u8);
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stb r10,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r10.u8);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// sth r11,44(r31)
	PPC_STORE_U16(ctx.r31.u32 + 44, ctx.r11.u16);
	// sth r11,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r11.u16);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x825da628
	ctx.lr = 0x825DA9E8;
	sub_825DA628(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// ld r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 72);
	// std r11,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r11.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DAA18"))) PPC_WEAK_FUNC(sub_825DAA18);
PPC_FUNC_IMPL(__imp__sub_825DAA18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x825debd0
	ctx.lr = 0x825DAA40;
	sub_825DEBD0(ctx, base);
	// lhz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mulli r5,r11,24
	ctx.r5.s64 = ctx.r11.s64 * 24;
	// bl 0x825e0bc8
	ctx.lr = 0x825DAA58;
	sub_825E0BC8(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e0bc8
	ctx.lr = 0x825DAA70;
	sub_825E0BC8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,96
	ctx.r5.s64 = 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e0bc8
	ctx.lr = 0x825DAA84;
	sub_825E0BC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DAAA0"))) PPC_WEAK_FUNC(sub_825DAAA0);
PPC_FUNC_IMPL(__imp__sub_825DAAA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825e0bc8
	ctx.lr = 0x825DAAC8;
	sub_825E0BC8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825dab58
	if (ctx.cr6.eq) goto loc_825DAB58;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r30,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r30.u8);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stb r11,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r11.u8);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r4,r11,-22784
	ctx.r4.s64 = ctx.r11.s64 + -22784;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stb r30,50(r31)
	PPC_STORE_U8(ctx.r31.u32 + 50, ctx.r30.u8);
	// stb r30,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r30.u8);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// sth r30,44(r31)
	PPC_STORE_U16(ctx.r31.u32 + 44, ctx.r30.u16);
	// sth r30,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r30.u16);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// bl 0x825d97d0
	ctx.lr = 0x825DAB44;
	sub_825D97D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825dab58
	if (ctx.cr0.eq) goto loc_825DAB58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825da870
	ctx.lr = 0x825DAB54;
	sub_825DA870(ctx, base);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_825DAB58:
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

__attribute__((alias("__imp__sub_825DAB78"))) PPC_WEAK_FUNC(sub_825DAB78);
PPC_FUNC_IMPL(__imp__sub_825DAB78) {
	PPC_FUNC_PROLOGUE();
	// b 0x825dbf70
	sub_825DBF70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DAB80"))) PPC_WEAK_FUNC(sub_825DAB80);
PPC_FUNC_IMPL(__imp__sub_825DAB80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r31,80(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x825debd0
	ctx.lr = 0x825DABA8;
	sub_825DEBD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825db5d0
	ctx.lr = 0x825DABB0;
	sub_825DB5D0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
loc_825DABB8:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-21640
	ctx.r4.s64 = ctx.r10.s64 + -21640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// sth r30,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r30.u16);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x825d97d0
	ctx.lr = 0x825DABE4;
	sub_825D97D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825dabb8
	if (!ctx.cr0.eq) goto loc_825DABB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825da870
	ctx.lr = 0x825DABF4;
	sub_825DA870(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DAC10"))) PPC_WEAK_FUNC(sub_825DAC10);
PPC_FUNC_IMPL(__imp__sub_825DAC10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d72b0
	ctx.lr = 0x825DAC2C;
	sub_825D72B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fabs f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// bl 0x825d5890
	ctx.lr = 0x825DAC38;
	sub_825D5890(ctx, base);
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

__attribute__((alias("__imp__sub_825DAC50"))) PPC_WEAK_FUNC(sub_825DAC50);
PPC_FUNC_IMPL(__imp__sub_825DAC50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d72b0
	ctx.lr = 0x825DAC6C;
	sub_825D72B0(ctx, base);
	// bl 0x826e0590
	ctx.lr = 0x825DAC70;
	sub_826E0590(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5890
	ctx.lr = 0x825DAC78;
	sub_825D5890(ctx, base);
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

__attribute__((alias("__imp__sub_825DAC90"))) PPC_WEAK_FUNC(sub_825DAC90);
PPC_FUNC_IMPL(__imp__sub_825DAC90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d72b0
	ctx.lr = 0x825DACAC;
	sub_825D72B0(ctx, base);
	// bl 0x826e0668
	ctx.lr = 0x825DACB0;
	sub_826E0668(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5890
	ctx.lr = 0x825DACB8;
	sub_825D5890(ctx, base);
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

__attribute__((alias("__imp__sub_825DACD0"))) PPC_WEAK_FUNC(sub_825DACD0);
PPC_FUNC_IMPL(__imp__sub_825DACD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d72b0
	ctx.lr = 0x825DACEC;
	sub_825D72B0(ctx, base);
	// bl 0x826e0ad0
	ctx.lr = 0x825DACF0;
	sub_826E0AD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5890
	ctx.lr = 0x825DACF8;
	sub_825D5890(ctx, base);
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

__attribute__((alias("__imp__sub_825DAD10"))) PPC_WEAK_FUNC(sub_825DAD10);
PPC_FUNC_IMPL(__imp__sub_825DAD10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d72b0
	ctx.lr = 0x825DAD2C;
	sub_825D72B0(ctx, base);
	// bl 0x826e02a8
	ctx.lr = 0x825DAD30;
	sub_826E02A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5890
	ctx.lr = 0x825DAD38;
	sub_825D5890(ctx, base);
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

__attribute__((alias("__imp__sub_825DAD50"))) PPC_WEAK_FUNC(sub_825DAD50);
PPC_FUNC_IMPL(__imp__sub_825DAD50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d72b0
	ctx.lr = 0x825DAD6C;
	sub_825D72B0(ctx, base);
	// bl 0x826e0370
	ctx.lr = 0x825DAD70;
	sub_826E0370(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5890
	ctx.lr = 0x825DAD78;
	sub_825D5890(ctx, base);
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

__attribute__((alias("__imp__sub_825DAD90"))) PPC_WEAK_FUNC(sub_825DAD90);
PPC_FUNC_IMPL(__imp__sub_825DAD90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d72b0
	ctx.lr = 0x825DADAC;
	sub_825D72B0(ctx, base);
	// bl 0x826e0378
	ctx.lr = 0x825DADB0;
	sub_826E0378(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5890
	ctx.lr = 0x825DADB8;
	sub_825D5890(ctx, base);
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

__attribute__((alias("__imp__sub_825DADD0"))) PPC_WEAK_FUNC(sub_825DADD0);
PPC_FUNC_IMPL(__imp__sub_825DADD0) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d72b0
	ctx.lr = 0x825DADF0;
	sub_825D72B0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x825d72b0
	ctx.lr = 0x825DAE00;
	sub_825D72B0(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x826e0460
	ctx.lr = 0x825DAE08;
	sub_826E0460(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5890
	ctx.lr = 0x825DAE10;
	sub_825D5890(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_825DAE30"))) PPC_WEAK_FUNC(sub_825DAE30);
PPC_FUNC_IMPL(__imp__sub_825DAE30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d72b0
	ctx.lr = 0x825DAE4C;
	sub_825D72B0(ctx, base);
	// bl 0x826e22f8
	ctx.lr = 0x825DAE50;
	sub_826E22F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5890
	ctx.lr = 0x825DAE58;
	sub_825D5890(ctx, base);
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

__attribute__((alias("__imp__sub_825DAE70"))) PPC_WEAK_FUNC(sub_825DAE70);
PPC_FUNC_IMPL(__imp__sub_825DAE70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d72b0
	ctx.lr = 0x825DAE8C;
	sub_825D72B0(ctx, base);
	// bl 0x826e5100
	ctx.lr = 0x825DAE90;
	sub_826E5100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5890
	ctx.lr = 0x825DAE98;
	sub_825D5890(ctx, base);
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

__attribute__((alias("__imp__sub_825DAEB0"))) PPC_WEAK_FUNC(sub_825DAEB0);
PPC_FUNC_IMPL(__imp__sub_825DAEB0) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d72b0
	ctx.lr = 0x825DAED0;
	sub_825D72B0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x825d72b0
	ctx.lr = 0x825DAEE0;
	sub_825D72B0(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x826e4738
	ctx.lr = 0x825DAEE8;
	sub_826E4738(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5890
	ctx.lr = 0x825DAEF0;
	sub_825D5890(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_825DAF10"))) PPC_WEAK_FUNC(sub_825DAF10);
PPC_FUNC_IMPL(__imp__sub_825DAF10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d72b0
	ctx.lr = 0x825DAF2C;
	sub_825D72B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fsqrt f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = sqrt(ctx.f1.f64);
	// bl 0x825d5890
	ctx.lr = 0x825DAF38;
	sub_825D5890(ctx, base);
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

__attribute__((alias("__imp__sub_825DAF50"))) PPC_WEAK_FUNC(sub_825DAF50);
PPC_FUNC_IMPL(__imp__sub_825DAF50) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d72b0
	ctx.lr = 0x825DAF70;
	sub_825D72B0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x825d72b0
	ctx.lr = 0x825DAF80;
	sub_825D72B0(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x826e14c0
	ctx.lr = 0x825DAF88;
	sub_826E14C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5890
	ctx.lr = 0x825DAF90;
	sub_825D5890(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_825DAFB0"))) PPC_WEAK_FUNC(sub_825DAFB0);
PPC_FUNC_IMPL(__imp__sub_825DAFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d72b0
	ctx.lr = 0x825DAFCC;
	sub_825D72B0(ctx, base);
	// bl 0x826e1b38
	ctx.lr = 0x825DAFD0;
	sub_826E1B38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5890
	ctx.lr = 0x825DAFD8;
	sub_825D5890(ctx, base);
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

__attribute__((alias("__imp__sub_825DAFF0"))) PPC_WEAK_FUNC(sub_825DAFF0);
PPC_FUNC_IMPL(__imp__sub_825DAFF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d72b0
	ctx.lr = 0x825DB00C;
	sub_825D72B0(ctx, base);
	// bl 0x826e1cb8
	ctx.lr = 0x825DB010;
	sub_826E1CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5890
	ctx.lr = 0x825DB018;
	sub_825D5890(ctx, base);
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

__attribute__((alias("__imp__sub_825DB030"))) PPC_WEAK_FUNC(sub_825DB030);
PPC_FUNC_IMPL(__imp__sub_825DB030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d72b0
	ctx.lr = 0x825DB04C;
	sub_825D72B0(ctx, base);
	// bl 0x826e5140
	ctx.lr = 0x825DB050;
	sub_826E5140(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5890
	ctx.lr = 0x825DB058;
	sub_825D5890(ctx, base);
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

__attribute__((alias("__imp__sub_825DB070"))) PPC_WEAK_FUNC(sub_825DB070);
PPC_FUNC_IMPL(__imp__sub_825DB070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d72b0
	ctx.lr = 0x825DB08C;
	sub_825D72B0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f0,-26896(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -26896);
	// fmul f1,f1,f0
	ctx.f1.f64 = ctx.f1.f64 * ctx.f0.f64;
	// bl 0x825d5890
	ctx.lr = 0x825DB0A0;
	sub_825D5890(ctx, base);
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

__attribute__((alias("__imp__sub_825DB0B8"))) PPC_WEAK_FUNC(sub_825DB0B8);
PPC_FUNC_IMPL(__imp__sub_825DB0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d72b0
	ctx.lr = 0x825DB0D4;
	sub_825D72B0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f0,-26888(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -26888);
	// fmul f1,f1,f0
	ctx.f1.f64 = ctx.f1.f64 * ctx.f0.f64;
	// bl 0x825d5890
	ctx.lr = 0x825DB0E8;
	sub_825D5890(ctx, base);
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

__attribute__((alias("__imp__sub_825DB100"))) PPC_WEAK_FUNC(sub_825DB100);
PPC_FUNC_IMPL(__imp__sub_825DB100) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d72b0
	ctx.lr = 0x825DB11C;
	sub_825D72B0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826e52f0
	ctx.lr = 0x825DB124;
	sub_826E52F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5890
	ctx.lr = 0x825DB12C;
	sub_825D5890(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwa r11,80(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 80));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// bl 0x825d5890
	ctx.lr = 0x825DB144;
	sub_825D5890(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
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

__attribute__((alias("__imp__sub_825DB160"))) PPC_WEAK_FUNC(sub_825DB160);
PPC_FUNC_IMPL(__imp__sub_825DB160) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d72b0
	ctx.lr = 0x825DB180;
	sub_825D72B0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x825d72b0
	ctx.lr = 0x825DB190;
	sub_825D72B0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f31.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826e30a8
	ctx.lr = 0x825DB1A4;
	sub_826E30A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5890
	ctx.lr = 0x825DB1AC;
	sub_825D5890(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_825DB1C8"))) PPC_WEAK_FUNC(sub_825DB1C8);
PPC_FUNC_IMPL(__imp__sub_825DB1C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825DB1D0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x825d51a8
	ctx.lr = 0x825DB1E0;
	sub_825D51A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d72b0
	ctx.lr = 0x825DB1F0;
	sub_825D72B0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r31,2
	ctx.r31.s64 = 2;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x825db224
	if (ctx.cr6.lt) goto loc_825DB224;
loc_825DB200:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d72b0
	ctx.lr = 0x825DB20C;
	sub_825D72B0(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x825db218
	if (!ctx.cr6.lt) goto loc_825DB218;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
loc_825DB218:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x825db200
	if (!ctx.cr6.gt) goto loc_825DB200;
loc_825DB224:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825d5890
	ctx.lr = 0x825DB230;
	sub_825D5890(ctx, base);
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
}

__attribute__((alias("__imp__sub_825DB240"))) PPC_WEAK_FUNC(sub_825DB240);
PPC_FUNC_IMPL(__imp__sub_825DB240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825DB248;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x825d51a8
	ctx.lr = 0x825DB258;
	sub_825D51A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d72b0
	ctx.lr = 0x825DB268;
	sub_825D72B0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r31,2
	ctx.r31.s64 = 2;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x825db29c
	if (ctx.cr6.lt) goto loc_825DB29C;
loc_825DB278:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d72b0
	ctx.lr = 0x825DB284;
	sub_825D72B0(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x825db290
	if (!ctx.cr6.gt) goto loc_825DB290;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
loc_825DB290:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x825db278
	if (!ctx.cr6.gt) goto loc_825DB278;
loc_825DB29C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825d5890
	ctx.lr = 0x825DB2A8;
	sub_825D5890(ctx, base);
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
}

__attribute__((alias("__imp__sub_825DB2B8"))) PPC_WEAK_FUNC(sub_825DB2B8);
PPC_FUNC_IMPL(__imp__sub_825DB2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825DB2C0;
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
	// bl 0x826e0d50
	ctx.lr = 0x825DB2D0;
	sub_826E0D50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// divw r10,r11,r10
	ctx.r10.s32 = ctx.r11.s32 / ctx.r10.s32;
	// mulli r10,r10,32767
	ctx.r10.s64 = ctx.r10.s64 * 32767;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,20632(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 20632);
	// fmul f31,f13,f0
	ctx.f31.f64 = ctx.f13.f64 * ctx.f0.f64;
	// bl 0x825d51a8
	ctx.lr = 0x825DB308;
	sub_825D51A8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x825db43c
	if (ctx.cr6.lt) goto loc_825DB43C;
	// beq cr6,0x825db3c8
	if (ctx.cr6.eq) goto loc_825DB3C8;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt cr6,0x825db330
	if (ctx.cr6.lt) goto loc_825DB330;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-26860
	ctx.r4.s64 = ctx.r11.s64 + -26860;
	// bl 0x825d6380
	ctx.lr = 0x825DB32C;
	sub_825D6380(ctx, base);
	// b 0x825db44c
	goto loc_825DB44C;
loc_825DB330:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825d72b0
	ctx.lr = 0x825DB338;
	sub_825D72B0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// bl 0x825d72b0
	ctx.lr = 0x825DB350;
	sub_825D72B0(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x825db380
	if (!ctx.cr6.gt) goto loc_825DB380;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,-26880
	ctx.r5.s64 = ctx.r11.s64 + -26880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6ff8
	ctx.lr = 0x825DB380;
	sub_825D6FF8(ctx, base);
loc_825DB380:
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fmul f1,f0,f31
	ctx.f1.f64 = ctx.f0.f64 * ctx.f31.f64;
	// bl 0x826e5100
	ctx.lr = 0x825DB3A0;
	sub_826E5100(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
loc_825DB3C0:
	// fcfid f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(ctx.f0.s64);
	// b 0x825db440
	goto loc_825DB440;
loc_825DB3C8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d72b0
	ctx.lr = 0x825DB3D4;
	sub_825D72B0(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bge cr6,0x825db400
	if (!ctx.cr6.lt) goto loc_825DB400;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-26880
	ctx.r5.s64 = ctx.r11.s64 + -26880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6ff8
	ctx.lr = 0x825DB400;
	sub_825D6FF8(ctx, base);
loc_825DB400:
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fmul f1,f0,f31
	ctx.f1.f64 = ctx.f0.f64 * ctx.f31.f64;
	// bl 0x826e5100
	ctx.lr = 0x825DB418;
	sub_826E5100(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x825db3c0
	goto loc_825DB3C0;
loc_825DB43C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_825DB440:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5890
	ctx.lr = 0x825DB448;
	sub_825D5890(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_825DB44C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DB458"))) PPC_WEAK_FUNC(sub_825DB458);
PPC_FUNC_IMPL(__imp__sub_825DB458) {
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
	// bl 0x825d72b0
	ctx.lr = 0x825DB46C;
	sub_825D72B0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826e0d20
	ctx.lr = 0x825DB480;
	sub_826E0D20(ctx, base);
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

__attribute__((alias("__imp__sub_825DB498"))) PPC_WEAK_FUNC(sub_825DB498);
PPC_FUNC_IMPL(__imp__sub_825DB498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27096
	ctx.r5.s64 = ctx.r11.s64 + -27096;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-26812
	ctx.r4.s64 = ctx.r11.s64 + -26812;
	// bl 0x825d6700
	ctx.lr = 0x825DB4C4;
	sub_825D6700(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,-26816
	ctx.r4.s64 = ctx.r11.s64 + -26816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d58b0
	ctx.lr = 0x825DB4D8;
	sub_825D58B0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f1,-26824(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -26824);
	// bl 0x825d5890
	ctx.lr = 0x825DB4E8;
	sub_825D5890(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5d98
	ctx.lr = 0x825DB4F4;
	sub_825D5D98(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r11,-26832
	ctx.r4.s64 = ctx.r11.s64 + -26832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d58b0
	ctx.lr = 0x825DB508;
	sub_825D58B0(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-20656
	ctx.r4.s64 = ctx.r11.s64 + -20656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5a30
	ctx.lr = 0x825DB51C;
	sub_825D5A30(ctx, base);
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d5d98
	ctx.lr = 0x825DB528;
	sub_825D5D98(ctx, base);
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

__attribute__((alias("__imp__sub_825DB540"))) PPC_WEAK_FUNC(sub_825DB540);
PPC_FUNC_IMPL(__imp__sub_825DB540) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,5(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stb r10,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r10.u8);
	// b 0x825db580
	goto loc_825DB580;
loc_825DB550:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x825db5c4
	if (ctx.cr6.eq) goto loc_825DB5C4;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x825db59c
	if (!ctx.cr6.eq) goto loc_825DB59C;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// andi. r11,r11,17
	ctx.r11.u64 = ctx.r11.u64 & 17;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r11.u8);
loc_825DB580:
	// lbz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x825db550
	if (!ctx.cr6.eq) goto loc_825DB550;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
loc_825DB594:
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
loc_825DB59C:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x825db5b8
	if (ctx.cr6.eq) goto loc_825DB5B8;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,64(r4)
	PPC_STORE_U32(ctx.r4.u32 + 64, ctx.r11.u32);
	// b 0x825db594
	goto loc_825DB594;
loc_825DB5B8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,84(r4)
	PPC_STORE_U32(ctx.r4.u32 + 84, ctx.r11.u32);
	// b 0x825db594
	goto loc_825DB594;
loc_825DB5C4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// b 0x825db594
	goto loc_825DB594;
}

__attribute__((alias("__imp__sub_825DB5D0"))) PPC_WEAK_FUNC(sub_825DB5D0);
PPC_FUNC_IMPL(__imp__sub_825DB5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x825DB5D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
	// b 0x825db648
	goto loc_825DB648;
loc_825DB5F8:
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// andi. r10,r11,17
	ctx.r10.u64 = ctx.r11.u64 & 17;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825db644
	if (!ctx.cr0.eq) goto loc_825DB644;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825db644
	if (ctx.cr0.eq) goto loc_825DB644;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825db638
	if (!ctx.cr0.eq) goto loc_825DB638;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,136(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// bl 0x825dc3e8
	ctx.lr = 0x825DB630;
	sub_825DC3E8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825db674
	if (!ctx.cr0.eq) goto loc_825DB674;
loc_825DB638:
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// andi. r11,r11,253
	ctx.r11.u64 = ctx.r11.u64 & 253;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
loc_825DB644:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_825DB648:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x825db5f8
	if (!ctx.cr0.eq) goto loc_825DB5F8;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_825DB674:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// b 0x825db648
	goto loc_825DB648;
}

__attribute__((alias("__imp__sub_825DB690"))) PPC_WEAK_FUNC(sub_825DB690);
PPC_FUNC_IMPL(__imp__sub_825DB690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x825DB698;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// andi. r11,r11,17
	ctx.r11.u64 = ctx.r11.u64 & 17;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825db6c4
	if (!ctx.cr0.eq) goto loc_825DB6C4;
	// bl 0x825db540
	ctx.lr = 0x825DB6C4;
	sub_825DB540(ctx, base);
loc_825DB6C4:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lbz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825db798
	if (!ctx.cr0.eq) goto loc_825DB798;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r5,140(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// bl 0x825dc3e8
	ctx.lr = 0x825DB6E4;
	sub_825DC3E8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825db798
	if (ctx.cr0.eq) goto loc_825DB798;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x825db798
	if (!ctx.cr6.eq) goto loc_825DB798;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,107
	ctx.r4.s64 = 107;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x826e49d0
	ctx.lr = 0x825DB708;
	sub_826E49D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,118
	ctx.r4.s64 = 118;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r28,r11,1
	ctx.r28.u64 = ctx.r11.u64 ^ 1;
	// bl 0x826e49d0
	ctx.lr = 0x825DB728;
	sub_826E49D0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r27,r11,1
	ctx.r27.u64 = ctx.r11.u64 ^ 1;
	// bne cr6,0x825db744
	if (!ctx.cr6.eq) goto loc_825DB744;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x825db798
	if (ctx.cr6.eq) goto loc_825DB798;
loc_825DB744:
	// lbz r10,5(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | ctx.r28.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// andi. r10,r10,249
	ctx.r10.u64 = ctx.r10.u64 & 249;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stb r11,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// beq cr6,0x825db780
	if (ctx.cr6.eq) goto loc_825DB780;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x825db778
	if (ctx.cr6.eq) goto loc_825DB778;
	// addi r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 + 12;
	// b 0x825db784
	goto loc_825DB784;
loc_825DB778:
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// b 0x825db784
	goto loc_825DB784;
loc_825DB780:
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
loc_825DB784:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// bne cr6,0x825db7e8
	if (!ctx.cr6.eq) goto loc_825DB7E8;
loc_825DB798:
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825db7e8
	if (ctx.cr0.eq) goto loc_825DB7E8;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
loc_825DB7A8:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r8,r8,-16
	ctx.r8.s64 = ctx.r8.s64 + -16;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x825db7e0
	if (ctx.cr6.lt) goto loc_825DB7E0;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// andi. r11,r11,17
	ctx.r11.u64 = ctx.r11.u64 & 17;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825db7e0
	if (!ctx.cr0.eq) goto loc_825DB7E0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825db540
	ctx.lr = 0x825DB7E0;
	sub_825DB540(ctx, base);
loc_825DB7E0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x825db7a8
	if (!ctx.cr6.eq) goto loc_825DB7A8;
loc_825DB7E8:
	// lbz r11,7(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw. r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x825db880
	if (ctx.cr0.eq) goto loc_825DB880;
	// mulli r7,r8,40
	ctx.r7.s64 = ctx.r8.s64 * 40;
loc_825DB7FC:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r7,r7,-40
	ctx.r7.s64 = ctx.r7.s64 + -40;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825db878
	if (ctx.cr6.eq) goto loc_825DB878;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x825db848
	if (ctx.cr6.lt) goto loc_825DB848;
	// lwz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// andi. r11,r11,17
	ctx.r11.u64 = ctx.r11.u64 & 17;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825db848
	if (!ctx.cr0.eq) goto loc_825DB848;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x825db848
	if (!ctx.cr6.eq) goto loc_825DB848;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825db540
	ctx.lr = 0x825DB848;
	sub_825DB540(ctx, base);
loc_825DB848:
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x825db878
	if (ctx.cr6.lt) goto loc_825DB878;
	// lwz r4,24(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// andi. r11,r11,17
	ctx.r11.u64 = ctx.r11.u64 & 17;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825db878
	if (!ctx.cr0.eq) goto loc_825DB878;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x825db878
	if (!ctx.cr6.eq) goto loc_825DB878;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825db540
	ctx.lr = 0x825DB878;
	sub_825DB540(ctx, base);
loc_825DB878:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x825db7fc
	if (!ctx.cr6.eq) goto loc_825DB7FC;
loc_825DB880:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DB888"))) PPC_WEAK_FUNC(sub_825DB888);
PPC_FUNC_IMPL(__imp__sub_825DB888) {
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
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,32(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stb r10,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
	// lwz r11,40(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825db8f8
	if (!ctx.cr6.gt) goto loc_825DB8F8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825DB8BC:
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x825db8e4
	if (!ctx.cr6.eq) goto loc_825DB8E4;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r7,5(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
	// stb r7,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r7.u8);
loc_825DB8E4:
	// lwz r10,40(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x825db8bc
	if (ctx.cr6.lt) goto loc_825DB8BC;
loc_825DB8F8:
	// lwz r11,36(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825db934
	if (!ctx.cr6.gt) goto loc_825DB934;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825DB90C:
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r8,r11,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lbz r7,5(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 5);
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
	// stb r7,5(r8)
	PPC_STORE_U8(ctx.r8.u32 + 5, ctx.r7.u8);
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x825db90c
	if (ctx.cr6.lt) goto loc_825DB90C;
loc_825DB934:
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825db978
	if (!ctx.cr6.gt) goto loc_825DB978;
	// li r8,0
	ctx.r8.s64 = 0;
loc_825DB948:
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwzx r4,r8,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// andi. r11,r11,17
	ctx.r11.u64 = ctx.r11.u64 & 17;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825db964
	if (!ctx.cr0.eq) goto loc_825DB964;
	// bl 0x825db540
	ctx.lr = 0x825DB964;
	sub_825DB540(ctx, base);
loc_825DB964:
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825db948
	if (ctx.cr6.lt) goto loc_825DB948;
loc_825DB978:
	// lwz r11,56(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825db9bc
	if (!ctx.cr6.gt) goto loc_825DB9BC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825DB98C:
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lbz r7,5(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 5);
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
	// stb r7,5(r8)
	PPC_STORE_U8(ctx.r8.u32 + 5, ctx.r7.u8);
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x825db98c
	if (ctx.cr6.lt) goto loc_825DB98C;
loc_825DB9BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DB9D0"))) PPC_WEAK_FUNC(sub_825DB9D0);
PPC_FUNC_IMPL(__imp__sub_825DB9D0) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// lbz r11,6(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 6);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825dba3c
	if (ctx.cr0.eq) goto loc_825DBA3C;
	// lbz r11,7(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 7);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825dbad0
	if (ctx.cr0.eq) goto loc_825DBAD0;
	// addi r9,r8,24
	ctx.r9.s64 = ctx.r8.s64 + 24;
loc_825DBA00:
	// lwz r11,-8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x825dba24
	if (ctx.cr6.lt) goto loc_825DBA24;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// andi. r11,r11,17
	ctx.r11.u64 = ctx.r11.u64 & 17;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825dba24
	if (!ctx.cr0.eq) goto loc_825DBA24;
	// bl 0x825db540
	ctx.lr = 0x825DBA24;
	sub_825DB540(ctx, base);
loc_825DBA24:
	// lbz r11,7(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 7);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825dba00
	if (ctx.cr6.lt) goto loc_825DBA00;
	// b 0x825dbad0
	goto loc_825DBAD0;
loc_825DBA3C:
	// lwz r4,24(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// andi. r11,r11,17
	ctx.r11.u64 = ctx.r11.u64 & 17;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825dba54
	if (!ctx.cr0.eq) goto loc_825DBA54;
	// bl 0x825db540
	ctx.lr = 0x825DBA54;
	sub_825DB540(ctx, base);
loc_825DBA54:
	// lwz r4,12(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// andi. r11,r11,17
	ctx.r11.u64 = ctx.r11.u64 & 17;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825dba6c
	if (!ctx.cr0.eq) goto loc_825DBA6C;
	// bl 0x825db540
	ctx.lr = 0x825DBA6C;
	sub_825DB540(ctx, base);
loc_825DBA6C:
	// lbz r11,7(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 7);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825dbad0
	if (ctx.cr0.eq) goto loc_825DBAD0;
	// addi r7,r8,32
	ctx.r7.s64 = ctx.r8.s64 + 32;
loc_825DBA80:
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lbz r11,5(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825dbabc
	if (!ctx.cr0.eq) goto loc_825DBABC;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x825dbab4
	if (ctx.cr6.lt) goto loc_825DBAB4;
	// lwz r4,24(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// andi. r11,r11,17
	ctx.r11.u64 = ctx.r11.u64 & 17;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825dbab4
	if (!ctx.cr0.eq) goto loc_825DBAB4;
	// bl 0x825db540
	ctx.lr = 0x825DBAB4;
	sub_825DB540(ctx, base);
loc_825DBAB4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,5(r9)
	PPC_STORE_U8(ctx.r9.u32 + 5, ctx.r11.u8);
loc_825DBABC:
	// lbz r11,7(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 7);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825dba80
	if (ctx.cr6.lt) goto loc_825DBA80;
loc_825DBAD0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DBAE0"))) PPC_WEAK_FUNC(sub_825DBAE0);
PPC_FUNC_IMPL(__imp__sub_825DBAE0) {
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
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x825dbb1c
	if (ctx.cr6.lt) goto loc_825DBB1C;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// andi. r11,r11,17
	ctx.r11.u64 = ctx.r11.u64 & 17;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825dbb1c
	if (!ctx.cr0.eq) goto loc_825DBB1C;
	// bl 0x825db540
	ctx.lr = 0x825DBB1C;
	sub_825DB540(ctx, base);
loc_825DBB1C:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// b 0x825dbb50
	goto loc_825DBB50;
loc_825DBB30:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825dbb4c
	if (!ctx.cr0.eq) goto loc_825DBB4C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825dbb4c
	if (!ctx.cr6.lt) goto loc_825DBB4C;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_825DBB4C:
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
loc_825DBB50:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x825dbb30
	if (!ctx.cr6.gt) goto loc_825DBB30;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x825dbba8
	if (!ctx.cr6.lt) goto loc_825DBBA8;
loc_825DBB64:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x825dbb88
	if (ctx.cr6.lt) goto loc_825DBB88;
	// lwz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// andi. r11,r11,17
	ctx.r11.u64 = ctx.r11.u64 & 17;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825dbb88
	if (!ctx.cr0.eq) goto loc_825DBB88;
	// bl 0x825db540
	ctx.lr = 0x825DBB88;
	sub_825DB540(ctx, base);
loc_825DBB88:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825dbb64
	if (ctx.cr6.lt) goto loc_825DBB64;
	// b 0x825dbba8
	goto loc_825DBBA8;
loc_825DBB9C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
loc_825DBBA8:
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x825dbb9c
	if (!ctx.cr6.gt) goto loc_825DBB9C;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,24
	ctx.r10.s64 = 24;
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lhz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 44);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divw r10,r9,r10
	ctx.r10.s32 = ctx.r9.s32 / ctx.r10.s32;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x825dbbe8
	if (!ctx.cr6.lt) goto loc_825DBBE8;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// ble cr6,0x825dbbe8
	if (!ctx.cr6.gt) goto loc_825DBBE8;
	// rlwinm r4,r11,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d9948
	ctx.lr = 0x825DBBE8;
	sub_825D9948(ctx, base);
loc_825DBBE8:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r10,r10,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r10.s64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x825dbc1c
	if (!ctx.cr6.lt) goto loc_825DBC1C;
	// cmpwi cr6,r11,90
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 90, ctx.xer);
	// ble cr6,0x825dbc1c
	if (!ctx.cr6.gt) goto loc_825DBC1C;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addze r4,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r4.s64 = temp.s64;
	// bl 0x825d9850
	ctx.lr = 0x825DBC1C;
	sub_825D9850(ctx, base);
loc_825DBC1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DBC38"))) PPC_WEAK_FUNC(sub_825DBC38);
PPC_FUNC_IMPL(__imp__sub_825DBC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// b 0x825dbcc4
	goto loc_825DBCC4;
loc_825DBC50:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x825dbcb4
	if (ctx.cr6.eq) goto loc_825DBCB4;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x825dbca0
	if (ctx.cr6.eq) goto loc_825DBCA0;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x825dbc8c
	if (ctx.cr6.eq) goto loc_825DBC8C;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x825dbcc4
	if (!ctx.cr6.eq) goto loc_825DBCC4;
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x825db888
	ctx.lr = 0x825DBC88;
	sub_825DB888(ctx, base);
	// b 0x825dbcc4
	goto loc_825DBCC4;
loc_825DBC8C:
	// lwz r11,84(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x825dbae0
	ctx.lr = 0x825DBC9C;
	sub_825DBAE0(ctx, base);
	// b 0x825dbcc4
	goto loc_825DBCC4;
loc_825DBCA0:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x825db9d0
	ctx.lr = 0x825DBCB0;
	sub_825DB9D0(ctx, base);
	// b 0x825dbcc4
	goto loc_825DBCC4;
loc_825DBCB4:
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x825db690
	ctx.lr = 0x825DBCC4;
	sub_825DB690(ctx, base);
loc_825DBCC4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825dbc50
	if (!ctx.cr6.eq) goto loc_825DBC50;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DBCE8"))) PPC_WEAK_FUNC(sub_825DBCE8);
PPC_FUNC_IMPL(__imp__sub_825DBCE8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_825DBCF0:
	// lbz r11,7(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw. r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825dbd64
	if (ctx.cr0.eq) goto loc_825DBD64;
	// mulli r9,r10,40
	ctx.r9.s64 = ctx.r10.s64 * 40;
loc_825DBD04:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r9,-40
	ctx.r9.s64 = ctx.r9.s64 + -40;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// bne cr6,0x825dbd30
	if (!ctx.cr6.eq) goto loc_825DBD30;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r7,5(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 5);
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
	// stb r7,5(r8)
	PPC_STORE_U8(ctx.r8.u32 + 5, ctx.r7.u8);
loc_825DBD30:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x825dbd5c
	if (ctx.cr6.lt) goto loc_825DBD5C;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,5(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 5);
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x825dbd5c
	if (!ctx.cr0.eq) goto loc_825DBD5C;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
loc_825DBD5C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825dbd04
	if (!ctx.cr6.eq) goto loc_825DBD04;
loc_825DBD64:
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825dbcf0
	if (!ctx.cr0.eq) goto loc_825DBCF0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DBD78"))) PPC_WEAK_FUNC(sub_825DBD78);
PPC_FUNC_IMPL(__imp__sub_825DBD78) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r7,0
	ctx.r7.s64 = 0;
loc_825DBD84:
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825dbde8
	if (ctx.cr0.eq) goto loc_825DBDE8;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
loc_825DBD94:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// bne cr6,0x825dbdc0
	if (!ctx.cr6.eq) goto loc_825DBDC0;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r6,5(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 5);
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// stb r6,5(r8)
	PPC_STORE_U8(ctx.r8.u32 + 5, ctx.r6.u8);
loc_825DBDC0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x825dbde0
	if (ctx.cr6.lt) goto loc_825DBDE0;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,5(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 5);
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x825dbde0
	if (!ctx.cr0.eq) goto loc_825DBDE0;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
loc_825DBDE0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825dbd94
	if (!ctx.cr6.eq) goto loc_825DBD94;
loc_825DBDE8:
	// lbz r11,7(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw. r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825dbe64
	if (ctx.cr0.eq) goto loc_825DBE64;
	// mulli r9,r10,40
	ctx.r9.s64 = ctx.r10.s64 * 40;
loc_825DBDFC:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r9,-40
	ctx.r9.s64 = ctx.r9.s64 + -40;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// bne cr6,0x825dbe28
	if (!ctx.cr6.eq) goto loc_825DBE28;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lbz r6,5(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 5);
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// stb r6,5(r8)
	PPC_STORE_U8(ctx.r8.u32 + 5, ctx.r6.u8);
loc_825DBE28:
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x825dbe5c
	if (ctx.cr6.lt) goto loc_825DBE5C;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lbz r8,5(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 5);
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x825dbe5c
	if (!ctx.cr0.eq) goto loc_825DBE5C;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x825dbe5c
	if (ctx.cr6.lt) goto loc_825DBE5C;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_825DBE5C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825dbdfc
	if (!ctx.cr6.eq) goto loc_825DBDFC;
loc_825DBE64:
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825dbd84
	if (!ctx.cr0.eq) goto loc_825DBD84;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DBE78"))) PPC_WEAK_FUNC(sub_825DBE78);
PPC_FUNC_IMPL(__imp__sub_825DBE78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825DBE80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x825dbf54
	goto loc_825DBF54;
loc_825DBE98:
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x825dbeb4
	if (!ctx.cr6.gt) goto loc_825DBEB4;
	// rlwinm r11,r11,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFE;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r11.u8);
	// b 0x825dbf54
	goto loc_825DBF54;
loc_825DBEB4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lbz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x825dbf40
	if (ctx.cr6.eq) goto loc_825DBF40;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x825dbf34
	if (ctx.cr6.eq) goto loc_825DBF34;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x825dbf28
	if (ctx.cr6.eq) goto loc_825DBF28;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x825dbf1c
	if (ctx.cr6.eq) goto loc_825DBF1C;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x825dbf10
	if (ctx.cr6.eq) goto loc_825DBF10;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x825dbf04
	if (ctx.cr6.eq) goto loc_825DBF04;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x825dbf54
	if (!ctx.cr6.eq) goto loc_825DBF54;
	// li r5,32
	ctx.r5.s64 = 32;
	// b 0x825dbf48
	goto loc_825DBF48;
loc_825DBF04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825decf8
	ctx.lr = 0x825DBF0C;
	sub_825DECF8(ctx, base);
	// b 0x825dbf54
	goto loc_825DBF54;
loc_825DBF10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825daa18
	ctx.lr = 0x825DBF18;
	sub_825DAA18(ctx, base);
	// b 0x825dbf54
	goto loc_825DBF54;
loc_825DBF1C:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// b 0x825dbf48
	goto loc_825DBF48;
loc_825DBF28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825dedd0
	ctx.lr = 0x825DBF30;
	sub_825DEDD0(ctx, base);
	// b 0x825dbf54
	goto loc_825DBF54;
loc_825DBF34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825df2f8
	ctx.lr = 0x825DBF3C;
	sub_825DF2F8(ctx, base);
	// b 0x825dbf54
	goto loc_825DBF54;
loc_825DBF40:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r5,r11,17
	ctx.r5.s64 = ctx.r11.s64 + 17;
loc_825DBF48:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0bc8
	ctx.lr = 0x825DBF54;
	sub_825E0BC8(ctx, base);
loc_825DBF54:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne 0x825dbe98
	if (!ctx.cr0.eq) goto loc_825DBE98;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DBF70"))) PPC_WEAK_FUNC(sub_825DBF70);
PPC_FUNC_IMPL(__imp__sub_825DBF70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825DBF78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lbz r28,49(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 49);
	// stb r10,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r10.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825dc05c
	if (ctx.cr6.eq) goto loc_825DC05C;
	// li r29,7
	ctx.r29.s64 = 7;
loc_825DBFAC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r30,20(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r29.u32);
	// stw r30,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r30.u32);
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stb r11,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// lbz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825dc04c
	if (!ctx.cr0.eq) goto loc_825DC04C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,136(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// bl 0x825dc3e8
	ctx.lr = 0x825DC008;
	sub_825DC3E8(ctx, base);
	// mr. r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825dc04c
	if (ctx.cr0.eq) goto loc_825DC04C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x825da070
	ctx.lr = 0x825DC04C;
	sub_825DA070(ctx, base);
loc_825DC04C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825dbfac
	if (!ctx.cr6.eq) goto loc_825DBFAC;
loc_825DC05C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r28,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r28.u8);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DC078"))) PPC_WEAK_FUNC(sub_825DC078);
PPC_FUNC_IMPL(__imp__sub_825DC078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825DC080;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x825dc098
	if (ctx.cr6.eq) goto loc_825DC098;
	// li r28,256
	ctx.r28.s64 = 256;
loc_825DC098:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x825dbe78
	ctx.lr = 0x825DC0AC;
	sub_825DBE78(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x825dc100
	if (!ctx.cr6.gt) goto loc_825DC100;
	// li r29,0
	ctx.r29.s64 = 0;
loc_825DC0C4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825dbe78
	ctx.lr = 0x825DC0D8;
	sub_825DBE78(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x825dc0c4
	if (ctx.cr6.lt) goto loc_825DC0C4;
loc_825DC100:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x825dbe78
	ctx.lr = 0x825DC114;
	sub_825DBE78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DC120"))) PPC_WEAK_FUNC(sub_825DC120);
PPC_FUNC_IMPL(__imp__sub_825DC120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825DC128;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x825dc17c
	if (ctx.cr6.lt) goto loc_825DC17C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r4,72(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// andi. r11,r11,17
	ctx.r11.u64 = ctx.r11.u64 & 17;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825dc17c
	if (!ctx.cr0.eq) goto loc_825DC17C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825db540
	ctx.lr = 0x825DC17C;
	sub_825DB540(ctx, base);
loc_825DC17C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x825dc1a8
	if (ctx.cr6.lt) goto loc_825DC1A8;
	// lwz r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// andi. r11,r11,17
	ctx.r11.u64 = ctx.r11.u64 & 17;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825dc1a8
	if (!ctx.cr0.eq) goto loc_825DC1A8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825db540
	ctx.lr = 0x825DC1A8;
	sub_825DB540(ctx, base);
loc_825DC1A8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,80(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// bl 0x825dbae0
	ctx.lr = 0x825DC1B4;
	sub_825DBAE0(ctx, base);
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825dc1dc
	if (ctx.cr6.eq) goto loc_825DC1DC;
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// andi. r11,r11,17
	ctx.r11.u64 = ctx.r11.u64 & 17;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825dc1dc
	if (!ctx.cr0.eq) goto loc_825DC1DC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825db540
	ctx.lr = 0x825DC1DC;
	sub_825DB540(ctx, base);
loc_825DC1DC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825dbc38
	ctx.lr = 0x825DC1E4;
	sub_825DBC38(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x825dbd78
	ctx.lr = 0x825DC1EC;
	sub_825DBD78(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x825dbd78
	ctx.lr = 0x825DC1F4;
	sub_825DBD78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// bl 0x825db5d0
	ctx.lr = 0x825DC208;
	sub_825DB5D0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x825dc22c
	goto loc_825DC22C;
loc_825DC214:
	// lbz r11,5(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r11,5(r9)
	PPC_STORE_U8(ctx.r9.u32 + 5, ctx.r11.u8);
	// bl 0x825db540
	ctx.lr = 0x825DC228;
	sub_825DB540(ctx, base);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_825DC22C:
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bne 0x825dc214
	if (!ctx.cr0.eq) goto loc_825DC214;
	// bl 0x825dbc38
	ctx.lr = 0x825DC23C;
	sub_825DBC38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825dbce8
	ctx.lr = 0x825DC244;
	sub_825DBCE8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x825dbce8
	ctx.lr = 0x825DC24C;
	sub_825DBCE8(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x825dbd78
	ctx.lr = 0x825DC254;
	sub_825DBD78(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x825dbce8
	ctx.lr = 0x825DC25C;
	sub_825DBCE8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x825dbd78
	ctx.lr = 0x825DC264;
	sub_825DBD78(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DC270"))) PPC_WEAK_FUNC(sub_825DC270);
PPC_FUNC_IMPL(__imp__sub_825DC270) {
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
	// bl 0x825dc120
	ctx.lr = 0x825DC28C;
	sub_825DC120(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825dc078
	ctx.lr = 0x825DC298;
	sub_825DC078(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x825dc2d4
	if (!ctx.cr6.lt) goto loc_825DC2D4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// ble cr6,0x825dc2d4
	if (!ctx.cr6.gt) goto loc_825DC2D4;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addze r4,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r4.s64 = temp.s64;
	// bl 0x825de788
	ctx.lr = 0x825DC2D4;
	sub_825DE788(ctx, base);
loc_825DC2D4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// ble cr6,0x825dc310
	if (!ctx.cr6.gt) goto loc_825DC310;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r30,r5,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x825e0bc8
	ctx.lr = 0x825DC300;
	sub_825E0BC8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r3,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r3.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r30.u32);
loc_825DC310:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// bl 0x825dbf70
	ctx.lr = 0x825DC328;
	sub_825DBF70(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DC340"))) PPC_WEAK_FUNC(sub_825DC340);
PPC_FUNC_IMPL(__imp__sub_825DC340) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r4,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r4.u32);
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r11.u8);
	// stb r5,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DC368"))) PPC_WEAK_FUNC(sub_825DC368);
PPC_FUNC_IMPL(__imp__sub_825DC368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825DC370;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-26624
	ctx.r11.s64 = ctx.r11.s64 + -26624;
	// li r31,128
	ctx.r31.s64 = 128;
	// addi r29,r11,-128
	ctx.r29.s64 = ctx.r11.s64 + -128;
loc_825DC388:
	// lwzx r4,r29,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_825DC394:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825dc394
	if (!ctx.cr6.eq) goto loc_825DC394;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825de870
	ctx.lr = 0x825DC3B8;
	sub_825DE870(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stwx r3,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r31,188
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 188, ctx.xer);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
	// stb r10,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
	// blt cr6,0x825dc388
	if (ctx.cr6.lt) goto loc_825DC388;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DC3E8"))) PPC_WEAK_FUNC(sub_825DC3E8);
PPC_FUNC_IMPL(__imp__sub_825DC3E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x825df450
	ctx.lr = 0x825DC40C;
	sub_825DF450(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825dc430
	if (!ctx.cr6.eq) goto loc_825DC430;
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// li r3,0
	ctx.r3.s64 = 0;
	// slw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stb r11,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r11.u8);
loc_825DC430:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DC448"))) PPC_WEAK_FUNC(sub_825DC448);
PPC_FUNC_IMPL(__imp__sub_825DC448) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r5,32
	ctx.r9.s64 = ctx.r5.s64 + 32;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// beq cr6,0x825dc488
	if (ctx.cr6.eq) goto loc_825DC488;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x825dc47c
	if (ctx.cr6.eq) goto loc_825DC47C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-26264
	ctx.r3.s64 = ctx.r11.s64 + -26264;
	// blr 
	return;
loc_825DC47C:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x825df450
	sub_825DF450(ctx, base);
	return;
loc_825DC488:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x825df450
	sub_825DF450(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DC498"))) PPC_WEAK_FUNC(sub_825DC498);
PPC_FUNC_IMPL(__imp__sub_825DC498) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x825dc4f4
	if (ctx.cr6.eq) goto loc_825DC4F4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x825dc4f0
	if (!ctx.cr6.eq) goto loc_825DC4F0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x825de228
	ctx.lr = 0x825DC4D0;
	sub_825DE228(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825dc4f0
	if (ctx.cr0.eq) goto loc_825DC4F0;
	// li r11,3
	ctx.r11.s64 = 3;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stfd f0,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.f0.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x825dc4f4
	goto loc_825DC4F4;
loc_825DC4F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825DC4F4:
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

__attribute__((alias("__imp__sub_825DC508"))) PPC_WEAK_FUNC(sub_825DC508);
PPC_FUNC_IMPL(__imp__sub_825DC508) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x825dc538
	if (ctx.cr6.eq) goto loc_825DC538;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825dc598
	goto loc_825DC598;
loc_825DC538:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfd f1,8(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// addi r4,r11,-26564
	ctx.r4.s64 = ctx.r11.s64 + -26564;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x826e0998
	ctx.lr = 0x825DC554;
	sub_826E0998(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_825DC564:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825dc564
	if (!ctx.cr6.eq) goto loc_825DC564;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825de870
	ctx.lr = 0x825DC58C;
	sub_825DE870(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_825DC598:
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

__attribute__((alias("__imp__sub_825DC5B0"))) PPC_WEAK_FUNC(sub_825DC5B0);
PPC_FUNC_IMPL(__imp__sub_825DC5B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lbz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x825dc5f4
	if (!ctx.cr6.gt) goto loc_825DC5F4;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825dc5f4
	if (!ctx.cr6.eq) goto loc_825DC5F4;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x825d99d8
	ctx.lr = 0x825DC5F0;
	sub_825D99D8(ctx, base);
	// b 0x825dc6dc
	goto loc_825DC6DC;
loc_825DC5F4:
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825dc6dc
	if (ctx.cr0.eq) goto loc_825DC6DC;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,-8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825dc63c
	if (ctx.cr0.eq) goto loc_825DC63C;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r5,-4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// b 0x825dc640
	goto loc_825DC640;
loc_825DC63C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_825DC640:
	// lbz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825dc658
	if (!ctx.cr0.eq) goto loc_825DC658;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825dfd70
	ctx.lr = 0x825DC654;
	sub_825DFD70(ctx, base);
	// b 0x825dc6dc
	goto loc_825DC6DC;
loc_825DC658:
	// lwz r10,16(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x825dc67c
	if (!ctx.cr0.eq) goto loc_825DC67C;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r8.u32);
loc_825DC67C:
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x825dc6c0
	if (!ctx.cr6.gt) goto loc_825DC6C0;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825dc6b4
	if (ctx.cr0.eq) goto loc_825DC6B4;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x825dc6b8
	goto loc_825DC6B8;
loc_825DC6B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825DC6B8:
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x825dc6d0
	if (ctx.cr6.eq) goto loc_825DC6D0;
loc_825DC6C0:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d99d8
	ctx.lr = 0x825DC6CC;
	sub_825D99D8(ctx, base);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_825DC6D0:
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
loc_825DC6DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DC6F0"))) PPC_WEAK_FUNC(sub_825DC6F0);
PPC_FUNC_IMPL(__imp__sub_825DC6F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// ld r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// ld r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// std r10,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r10.u64);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// ld r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bgt cr6,0x825dc75c
	if (ctx.cr6.gt) goto loc_825DC75C;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x825d99b8
	ctx.lr = 0x825DC75C;
	sub_825D99B8(ctx, base);
loc_825DC75C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x825da070
	ctx.lr = 0x825DC778;
	sub_825DA070(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DC798"))) PPC_WEAK_FUNC(sub_825DC798);
PPC_FUNC_IMPL(__imp__sub_825DC798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x825DC7A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x825dc448
	ctx.lr = 0x825DC7BC;
	sub_825DC448(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825dc7e0
	if (!ctx.cr6.eq) goto loc_825DC7E0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-26556
	ctx.r5.s64 = ctx.r11.s64 + -26556;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0988
	ctx.lr = 0x825DC7E0;
	sub_825E0988(ctx, base);
loc_825DC7E0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x825dc808
	if (!ctx.cr6.eq) goto loc_825DC808;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x825dc6f0
	ctx.lr = 0x825DC800;
	sub_825DC6F0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x825dc814
	goto loc_825DC814;
loc_825DC808:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x825dc820
	ctx.lr = 0x825DC814;
	sub_825DC820(ctx, base);
loc_825DC814:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DC820"))) PPC_WEAK_FUNC(sub_825DC820);
PPC_FUNC_IMPL(__imp__sub_825DC820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825DC828;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r28,100
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 100, ctx.xer);
	// ble cr6,0x825dc850
	if (!ctx.cr6.gt) goto loc_825DC850;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-26548
	ctx.r4.s64 = ctx.r11.s64 + -26548;
	// bl 0x825e04f8
	ctx.lr = 0x825DC850;
	sub_825E04F8(ctx, base);
loc_825DC850:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x825dc88c
	if (!ctx.cr6.eq) goto loc_825DC88C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825df4b0
	ctx.lr = 0x825DC868;
	sub_825DF4B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825dc8a0
	if (!ctx.cr6.eq) goto loc_825DC8A0;
	// addi r6,r28,1
	ctx.r6.s64 = ctx.r28.s64 + 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825dd1a8
	ctx.lr = 0x825DC888;
	sub_825DD1A8(ctx, base);
	// b 0x825dc8a0
	goto loc_825DC8A0;
loc_825DC88C:
	// addi r6,r28,1
	ctx.r6.s64 = ctx.r28.s64 + 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825dc798
	ctx.lr = 0x825DC8A0;
	sub_825DC798(ctx, base);
loc_825DC8A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DC8A8"))) PPC_WEAK_FUNC(sub_825DC8A8);
PPC_FUNC_IMPL(__imp__sub_825DC8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b8
	ctx.lr = 0x825DC8B0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r24,r11,-26556
	ctx.r24.s64 = ctx.r11.s64 + -26556;
loc_825DC8D0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x825dc93c
	if (!ctx.cr6.eq) goto loc_825DC93C;
	// lwz r30,8(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825df578
	ctx.lr = 0x825DC8F0;
	sub_825DF578(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825dc928
	if (!ctx.cr6.eq) goto loc_825DC928;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lbz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825dc928
	if (!ctx.cr0.eq) goto loc_825DC928;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,132(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x825dc3e8
	ctx.lr = 0x825DC920;
	sub_825DC3E8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x825dc968
	if (!ctx.cr0.eq) goto loc_825DC968;
loc_825DC928:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// ld r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// std r11,8(r27)
	PPC_STORE_U64(ctx.r27.u32 + 8, ctx.r11.u64);
	// b 0x825dc994
	goto loc_825DC994;
loc_825DC93C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x825dc448
	ctx.lr = 0x825DC948;
	sub_825DC448(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825dc968
	if (!ctx.cr6.eq) goto loc_825DC968;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0988
	ctx.lr = 0x825DC968;
	sub_825E0988(ctx, base);
loc_825DC968:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x825dc99c
	if (ctx.cr6.eq) goto loc_825DC99C;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmpwi cr6,r25,100
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 100, ctx.xer);
	// ble cr6,0x825dc8d0
	if (!ctx.cr6.gt) goto loc_825DC8D0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-26528
	ctx.r4.s64 = ctx.r11.s64 + -26528;
	// bl 0x825e04f8
	ctx.lr = 0x825DC994;
	sub_825E04F8(ctx, base);
loc_825DC994:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
loc_825DC99C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// ld r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// ld r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// std r10,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r10.u64);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// ld r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// ld r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// std r10,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r10.u64);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// bgt cr6,0x825dca0c
	if (ctx.cr6.gt) goto loc_825DCA0C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d99b8
	ctx.lr = 0x825DCA0C;
	sub_825D99B8(ctx, base);
loc_825DCA0C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// addi r4,r11,-64
	ctx.r4.s64 = ctx.r11.s64 + -64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x825da070
	ctx.lr = 0x825DCA28;
	sub_825DA070(ctx, base);
	// b 0x825dc994
	goto loc_825DC994;
}

__attribute__((alias("__imp__sub_825DCA30"))) PPC_WEAK_FUNC(sub_825DCA30);
PPC_FUNC_IMPL(__imp__sub_825DCA30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x825DCA38;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r27,r11,r6
	ctx.r27.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x825dc448
	ctx.lr = 0x825DCA5C;
	sub_825DC448(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825dca78
	if (!ctx.cr6.eq) goto loc_825DCA78;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825dc448
	ctx.lr = 0x825DCA78;
	sub_825DC448(ctx, base);
loc_825DCA78:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x825dca8c
	if (ctx.cr6.eq) goto loc_825DCA8C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825dcac0
	goto loc_825DCAC0;
loc_825DCA8C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825dc6f0
	ctx.lr = 0x825DCAA0;
	sub_825DC6F0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
loc_825DCAC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DCAC8"))) PPC_WEAK_FUNC(sub_825DCAC8);
PPC_FUNC_IMPL(__imp__sub_825DCAC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x825DCAD0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lbz r10,6(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// slw r25,r11,r31
	ctx.r25.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// and. r11,r10,r25
	ctx.r11.u64 = ctx.r10.u64 & ctx.r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825dcb68
	if (!ctx.cr0.eq) goto loc_825DCB68;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r5,r11,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x825dc3e8
	ctx.lr = 0x825DCB14;
	sub_825DC3E8(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x825dcb68
	if (ctx.cr0.eq) goto loc_825DCB68;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x825dcb2c
	if (!ctx.cr6.eq) goto loc_825DCB2C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x825dcb6c
	goto loc_825DCB6C;
loc_825DCB2C:
	// lbz r11,6(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 6);
	// and. r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 & ctx.r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825dcb68
	if (!ctx.cr0.eq) goto loc_825DCB68;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r5,r11,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x825dc3e8
	ctx.lr = 0x825DCB4C;
	sub_825DC3E8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x825dcb68
	if (ctx.cr0.eq) goto loc_825DCB68;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825de1c0
	ctx.lr = 0x825DCB5C;
	sub_825DE1C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bne 0x825dcb6c
	if (!ctx.cr0.eq) goto loc_825DCB6C;
loc_825DCB68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825DCB6C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DCB78"))) PPC_WEAK_FUNC(sub_825DCB78);
PPC_FUNC_IMPL(__imp__sub_825DCB78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x825DCB80;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x825dc448
	ctx.lr = 0x825DCB9C;
	sub_825DC448(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825dcbb4
	if (!ctx.cr6.eq) goto loc_825DCBB4;
loc_825DCBAC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x825dcc1c
	goto loc_825DCC1C;
loc_825DCBB4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825dc448
	ctx.lr = 0x825DCBC4;
	sub_825DC448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825de1c0
	ctx.lr = 0x825DCBD0;
	sub_825DE1C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825dcbac
	if (ctx.cr0.eq) goto loc_825DCBAC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825dc6f0
	ctx.lr = 0x825DCBEC;
	sub_825DC6F0(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825dcc18
	if (ctx.cr0.eq) goto loc_825DCC18;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825dcc10
	if (!ctx.cr6.eq) goto loc_825DCC10;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825dcc18
	if (ctx.cr6.eq) goto loc_825DCC18;
loc_825DCC10:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825dcc1c
	goto loc_825DCC1C;
loc_825DCC18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825DCC1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DCC28"))) PPC_WEAK_FUNC(sub_825DCC28);
PPC_FUNC_IMPL(__imp__sub_825DCC28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825DCC30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,12(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// lwz r29,12(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r30,r4,16
	ctx.r30.s64 = ctx.r4.s64 + 16;
	// b 0x825dcc90
	goto loc_825DCC90;
loc_825DCC48:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_825DCC50:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825dcc50
	if (!ctx.cr6.eq) goto loc_825DCC50;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x825dcca8
	if (ctx.cr6.eq) goto loc_825DCCA8;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x825dccbc
	if (ctx.cr6.eq) goto loc_825DCCBC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subf r28,r11,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r11.s64;
	// subf r29,r11,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r11.s64;
loc_825DCC90:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826e54b0
	ctx.lr = 0x825DCC9C;
	sub_826E54B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825dcc48
	if (ctx.cr0.eq) goto loc_825DCC48;
	// b 0x825dccc0
	goto loc_825DCCC0;
loc_825DCCA8:
	// subf r11,r11,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// b 0x825dccc0
	goto loc_825DCCC0;
loc_825DCCBC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_825DCCC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DCCC8"))) PPC_WEAK_FUNC(sub_825DCCC8);
PPC_FUNC_IMPL(__imp__sub_825DCCC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825DCCD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825dcd54
	if (!ctx.cr6.eq) goto loc_825DCD54;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825dcd14
	if (!ctx.cr6.eq) goto loc_825DCD14;
	// lfd f0,8(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfd f13,8(r30)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x825dcd64
	if (ctx.cr6.lt) goto loc_825DCD64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825dcd64
	goto loc_825DCD64;
loc_825DCD14:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x825dcd38
	if (!ctx.cr6.eq) goto loc_825DCD38;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825dcc28
	ctx.lr = 0x825DCD28;
	sub_825DCC28(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x825dcd64
	goto loc_825DCD64;
loc_825DCD38:
	// li r6,11
	ctx.r6.s64 = 11;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825dcb78
	ctx.lr = 0x825DCD4C;
	sub_825DCB78(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x825dcd64
	if (!ctx.cr6.eq) goto loc_825DCD64;
loc_825DCD54:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825e0aa8
	ctx.lr = 0x825DCD64;
	sub_825E0AA8(ctx, base);
loc_825DCD64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DCD70"))) PPC_WEAK_FUNC(sub_825DCD70);
PPC_FUNC_IMPL(__imp__sub_825DCD70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825DCD78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825dce20
	if (ctx.cr6.lt) goto loc_825DCE20;
	// beq cr6,0x825dce48
	if (ctx.cr6.eq) goto loc_825DCE48;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x825dce48
	if (ctx.cr6.lt) goto loc_825DCE48;
	// beq cr6,0x825dce2c
	if (ctx.cr6.eq) goto loc_825DCE2C;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x825dcdc0
	if (ctx.cr6.eq) goto loc_825DCDC0;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bne cr6,0x825dce50
	if (!ctx.cr6.eq) goto loc_825DCE50;
	// b 0x825dcdc4
	goto loc_825DCDC4;
loc_825DCDC0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_825DCDC4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825dce20
	if (ctx.cr6.eq) goto loc_825DCE20;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x825dcac8
	ctx.lr = 0x825DCDE0;
	sub_825DCAC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825dce40
	if (ctx.cr6.eq) goto loc_825DCE40;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825dc6f0
	ctx.lr = 0x825DCDFC;
	sub_825DC6F0(ctx, base);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825dce40
	if (ctx.cr0.eq) goto loc_825DCE40;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825dce20
	if (!ctx.cr6.eq) goto loc_825DCE20;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825dce40
	if (ctx.cr6.eq) goto loc_825DCE40;
loc_825DCE20:
	// li r3,1
	ctx.r3.s64 = 1;
loc_825DCE24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_825DCE2C:
	// lfd f0,8(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfd f13,8(r30)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x825dce24
	if (ctx.cr6.eq) goto loc_825DCE24;
loc_825DCE40:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825dce24
	goto loc_825DCE24;
loc_825DCE48:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_825DCE50:
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x825dce24
	goto loc_825DCE24;
}

__attribute__((alias("__imp__sub_825DCE60"))) PPC_WEAK_FUNC(sub_825DCE60);
PPC_FUNC_IMPL(__imp__sub_825DCE60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8ac
	ctx.lr = 0x825DCE68;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// addi r21,r11,-26508
	ctx.r21.s64 = ctx.r11.s64 + -26508;
loc_825DCE80:
	// addi r11,r22,1
	ctx.r11.s64 = ctx.r22.s64 + 1;
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// li r28,2
	ctx.r28.s64 = 2;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r24,r11,r10
	ctx.r24.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r24,-32
	ctx.r31.s64 = ctx.r24.s64 + -32;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x825dceb8
	if (ctx.cr6.eq) goto loc_825DCEB8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x825dc508
	ctx.lr = 0x825DCEB0;
	sub_825DC508(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825dced8
	if (ctx.cr0.eq) goto loc_825DCED8;
loc_825DCEB8:
	// addi r4,r24,-16
	ctx.r4.s64 = ctx.r24.s64 + -16;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x825dcf10
	if (ctx.cr6.eq) goto loc_825DCF10;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x825dc508
	ctx.lr = 0x825DCED0;
	sub_825DC508(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825dcf10
	if (!ctx.cr0.eq) goto loc_825DCF10;
loc_825DCED8:
	// addi r30,r24,-16
	ctx.r30.s64 = ctx.r24.s64 + -16;
	// li r7,13
	ctx.r7.s64 = 13;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x825dca30
	ctx.lr = 0x825DCEF4;
	sub_825DCA30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825dd00c
	if (!ctx.cr0.eq) goto loc_825DD00C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x825e0a38
	ctx.lr = 0x825DCF0C;
	sub_825E0A38(ctx, base);
	// b 0x825dd00c
	goto loc_825DD00C;
loc_825DCF10:
	// lwz r11,-8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825dd00c
	if (ctx.cr0.eq) goto loc_825DD00C;
	// lwz r11,-24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24);
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 2, ctx.xer);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x825dcf74
	if (!ctx.cr6.gt) goto loc_825DCF74;
	// addi r31,r24,-48
	ctx.r31.s64 = ctx.r24.s64 + -48;
loc_825DCF38:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x825dcf58
	if (ctx.cr6.eq) goto loc_825DCF58;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x825dc508
	ctx.lr = 0x825DCF50;
	sub_825DC508(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825dcf74
	if (ctx.cr0.eq) goto loc_825DCF74;
loc_825DCF58:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// cmpw cr6,r28,r23
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r23.s32, ctx.xer);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt cr6,0x825dcf38
	if (ctx.cr6.lt) goto loc_825DCF38;
loc_825DCF74:
	// li r11,-3
	ctx.r11.s64 = -3;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x825dcf8c
	if (!ctx.cr6.gt) goto loc_825DCF8C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x825e04f8
	ctx.lr = 0x825DCF8C;
	sub_825E04F8(ctx, base);
loc_825DCF8C:
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// bl 0x825dfd08
	ctx.lr = 0x825DCFA0;
	sub_825DFD08(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x825dcfe8
	if (!ctx.cr6.gt) goto loc_825DCFE8;
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r11,r24
	ctx.r11.s64 = ctx.r24.s64 - ctx.r11.s64;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
loc_825DCFC0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r3,r26,r31
	ctx.r3.u64 = ctx.r26.u64 + ctx.r31.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// lwz r27,12(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x826df680
	ctx.lr = 0x825DCFD8;
	sub_826DF680(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r31,r27,r31
	ctx.r31.u64 = ctx.r27.u64 + ctx.r31.u64;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bgt 0x825dcfc0
	if (ctx.cr0.gt) goto loc_825DCFC0;
loc_825DCFE8:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// li r10,4
	ctx.r10.s64 = 4;
	// subf r30,r11,r24
	ctx.r30.s64 = ctx.r24.s64 - ctx.r11.s64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x825de870
	ctx.lr = 0x825DD008;
	sub_825DE870(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
loc_825DD00C:
	// subf r11,r28,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r28.s64;
	// subf r10,r28,r22
	ctx.r10.s64 = ctx.r22.s64 - ctx.r28.s64;
	// addi r23,r11,1
	ctx.r23.s64 = ctx.r11.s64 + 1;
	// addi r22,r10,1
	ctx.r22.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// bgt cr6,0x825dce80
	if (ctx.cr6.gt) goto loc_825DCE80;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de8fc
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DD030"))) PPC_WEAK_FUNC(sub_825DD030);
PPC_FUNC_IMPL(__imp__sub_825DD030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x825DD038;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x825dc498
	ctx.lr = 0x825DD05C;
	sub_825DC498(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x825dd170
	if (ctx.cr0.eq) goto loc_825DD170;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825dc498
	ctx.lr = 0x825DD070;
	sub_825DC498(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x825dd170
	if (ctx.cr0.eq) goto loc_825DD170;
	// cmpwi cr6,r26,5
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 5, ctx.xer);
	// beq cr6,0x825dd154
	if (ctx.cr6.eq) goto loc_825DD154;
	// cmpwi cr6,r26,6
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 6, ctx.xer);
	// beq cr6,0x825dd13c
	if (ctx.cr6.eq) goto loc_825DD13C;
	// cmpwi cr6,r26,7
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 7, ctx.xer);
	// beq cr6,0x825dd124
	if (ctx.cr6.eq) goto loc_825DD124;
	// cmpwi cr6,r26,8
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 8, ctx.xer);
	// beq cr6,0x825dd10c
	if (ctx.cr6.eq) goto loc_825DD10C;
	// cmpwi cr6,r26,9
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 9, ctx.xer);
	// bne cr6,0x825dd1a0
	if (!ctx.cr6.eq) goto loc_825DD1A0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r4,164(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// bl 0x825df450
	ctx.lr = 0x825DD0B0;
	sub_825DF450(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r30,r10,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r10.s64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x825dd0d8
	if (ctx.cr6.eq) goto loc_825DD0D8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-26484
	ctx.r4.s64 = ctx.r11.s64 + -26484;
	// bl 0x825e04f8
	ctx.lr = 0x825DD0D8;
	sub_825E04F8(ctx, base);
loc_825DD0D8:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825dc6f0
	ctx.lr = 0x825DD0EC;
	sub_825DC6F0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// b 0x825dd1a0
	goto loc_825DD1A0;
loc_825DD10C:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lfd f0,8(r28)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// lfd f13,8(r25)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r25.u32 + 8);
	// fdiv f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 / ctx.f13.f64;
	// b 0x825dd168
	goto loc_825DD168;
loc_825DD124:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lfd f0,8(r25)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r25.u32 + 8);
	// lfd f13,8(r28)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// b 0x825dd168
	goto loc_825DD168;
loc_825DD13C:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lfd f0,8(r28)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// lfd f13,8(r25)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r25.u32 + 8);
	// fsub f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 - ctx.f13.f64;
	// b 0x825dd168
	goto loc_825DD168;
loc_825DD154:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lfd f0,8(r25)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r25.u32 + 8);
	// lfd f13,8(r28)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// fadd f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 + ctx.f13.f64;
loc_825DD168:
	// stfd f0,8(r30)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.f0.u64);
	// b 0x825dd1a0
	goto loc_825DD1A0;
loc_825DD170:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825dca30
	ctx.lr = 0x825DD188;
	sub_825DCA30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825dd1a0
	if (!ctx.cr0.eq) goto loc_825DD1A0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0a58
	ctx.lr = 0x825DD1A0;
	sub_825E0A58(ctx, base);
loc_825DD1A0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DD1A8"))) PPC_WEAK_FUNC(sub_825DD1A8);
PPC_FUNC_IMPL(__imp__sub_825DD1A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825DD1B0;
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
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825dd1f0
	if (!ctx.cr0.eq) goto loc_825DD1F0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,128(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// bl 0x825dc3e8
	ctx.lr = 0x825DD1E8;
	sub_825DC3E8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x825dd1fc
	if (!ctx.cr0.eq) goto loc_825DD1FC;
loc_825DD1F0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-26264
	ctx.r3.s64 = ctx.r11.s64 + -26264;
	// b 0x825dd22c
	goto loc_825DD22C;
loc_825DD1FC:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x825dd220
	if (!ctx.cr6.eq) goto loc_825DD220;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x825dc6f0
	ctx.lr = 0x825DD218;
	sub_825DC6F0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x825dd22c
	goto loc_825DD22C;
loc_825DD220:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x825dc820
	ctx.lr = 0x825DD22C;
	sub_825DC820(ctx, base);
loc_825DD22C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DD238"))) PPC_WEAK_FUNC(sub_825DD238);
PPC_FUNC_IMPL(__imp__sub_825DD238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de890
	ctx.lr = 0x825DD240;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r18,r11,7268
	ctx.r18.s64 = ctx.r11.s64 + 7268;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r14,r11,-26296
	ctx.r14.s64 = ctx.r11.s64 + -26296;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfd f31,13960(r10)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 13960);
	// li r15,1
	ctx.r15.s64 = 1;
	// addi r11,r11,-26328
	ctx.r11.s64 = ctx.r11.s64 + -26328;
	// li r19,0
	ctx.r19.s64 = 0;
	// li r16,5
	ctx.r16.s64 = 5;
	// li r21,3
	ctx.r21.s64 = 3;
	// li r17,8
	ctx.r17.s64 = 8;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-26368
	ctx.r11.s64 = ctx.r11.s64 + -26368;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r20,r11,65535
	ctx.r20.u64 = ctx.r11.u64 | 65535;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r22,r11,65534
	ctx.r22.u64 = ctx.r11.u64 | 65534;
loc_825DD2A0:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lbz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 48);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825dd2c8
	if (ctx.cr0.eq) goto loc_825DD2C8;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825d99d8
	ctx.lr = 0x825DD2C8;
	sub_825D99D8(ctx, base);
loc_825DD2C8:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r23,-8(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// lwz r24,8(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_825DD2F0:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 48);
	// lwz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// rlwinm. r10,r11,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825dd33c
	if (ctx.cr0.eq) goto loc_825DD33C;
	// lwz r10,56(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,56(r28)
	PPC_STORE_U32(ctx.r28.u32 + 56, ctx.r10.u32);
	// beq 0x825dd324
	if (ctx.cr0.eq) goto loc_825DD324;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825dd33c
	if (ctx.cr0.eq) goto loc_825DD33C;
loc_825DD324:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825dc5b0
	ctx.lr = 0x825DD32C;
	sub_825DC5B0(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825de0b4
	if (!ctx.cr0.eq) goto loc_825DE0B4;
loc_825DD33C:
	// rlwinm r25,r30,8,24,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFF;
	// lwz r29,12(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// clrlwi r11,r30,26
	ctx.r11.u64 = ctx.r30.u32 & 0x3F;
	// rlwinm r26,r25,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// add r31,r26,r29
	ctx.r31.u64 = ctx.r26.u64 + ctx.r29.u64;
	// bgt cr6,0x825dd2f0
	if (ctx.cr6.gt) goto loc_825DD2F0;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,-26440
	ctx.r12.s64 = ctx.r12.s64 + -26440;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32162
	ctx.r12.s64 = -2107768832;
	// addi r12,r12,-11536
	ctx.r12.s64 = ctx.r12.s64 + -11536;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_825DD380;
	case 1:
		goto loc_825DD39C;
	case 2:
		goto loc_825DD3A8;
	case 3:
		goto loc_825DD3CC;
	case 4:
		goto loc_825DD3E8;
	case 5:
		goto loc_825DD400;
	case 6:
		goto loc_825DD45C;
	case 7:
		goto loc_825DD4C4;
	case 8:
		goto loc_825DD4E0;
	case 9:
		goto loc_825DD504;
	case 10:
		goto loc_825DD554;
	case 11:
		goto loc_825DD57C;
	case 12:
		goto loc_825DD5EC;
	case 13:
		goto loc_825DD674;
	case 14:
		goto loc_825DD6F0;
	case 15:
		goto loc_825DD76C;
	case 16:
		goto loc_825DD7E8;
	case 17:
		goto loc_825DD838;
	case 18:
		goto loc_825DD8AC;
	case 19:
		goto loc_825DD8EC;
	case 20:
		goto loc_825DD928;
	case 21:
		goto loc_825DD940;
	case 22:
		goto loc_825DDA0C;
	case 23:
		goto loc_825DDA80;
	case 24:
		goto loc_825DDB80;
	case 25:
		goto loc_825DDBD0;
	case 26:
		goto loc_825DDBD0;
	case 27:
		goto loc_825DDF44;
	case 28:
		goto loc_825DDC30;
	case 29:
		goto loc_825DDCF0;
	case 30:
		goto loc_825DDDA8;
	case 31:
		goto loc_825DDDF0;
	case 32:
		goto loc_825DDDF0;
	case 33:
		goto loc_825DDE78;
	case 34:
		goto loc_825DDE88;
	default:
		__builtin_unreachable();
	}
loc_825DD380:
	// rlwinm r11,r30,21,19,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 21) & 0x1FF0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_825DD388:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
loc_825DD394:
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// b 0x825dd2f0
	goto loc_825DD2F0;
loc_825DD39C:
	// rlwinm r11,r30,30,10,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3FFFF0;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// b 0x825dd388
	goto loc_825DD388;
loc_825DD3A8:
	// rlwinm r11,r30,17,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 17) & 0x1FF;
	// stw r15,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r15.u32);
	// rlwinm. r10,r30,0,17,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x7FC0;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq 0x825dd2f0
	if (ctx.cr0.eq) goto loc_825DD2F0;
loc_825DD3BC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825DD3C4:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x825dd2f0
	goto loc_825DD2F0;
loc_825DD3CC:
	// rlwinm r11,r30,21,19,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 21) & 0x1FF0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_825DD3D4:
	// stw r19,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r19.u32);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x825dd3d4
	if (!ctx.cr6.lt) goto loc_825DD3D4;
	// b 0x825dd2f0
	goto loc_825DD2F0;
loc_825DD3E8:
	// rlwinm r11,r30,17,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 17) & 0x1FF;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r23
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x825dd388
	goto loc_825DD388;
loc_825DD400:
	// rlwinm r11,r30,30,10,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3FFFF0;
	// lwz r3,24(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// add r30,r11,r24
	ctx.r30.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x825df450
	ctx.lr = 0x825DD414;
	sub_825DF450(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825dd42c
	if (ctx.cr0.eq) goto loc_825DD42C;
loc_825DD420:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// b 0x825dd394
	goto loc_825DD394;
loc_825DD42C:
	// addi r4,r23,16
	ctx.r4.s64 = ctx.r23.s64 + 16;
loc_825DD430:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825dd1a8
	ctx.lr = 0x825DD440;
	sub_825DD1A8(ctx, base);
loc_825DD440:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// ld r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
loc_825DD454:
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// b 0x825dd2f0
	goto loc_825DD2F0;
loc_825DD45C:
	// rlwinm r11,r30,26,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x1FF;
	// rlwinm r10,r30,21,19,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 21) & 0x1FF0;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// add r27,r10,r29
	ctx.r27.u64 = ctx.r10.u64 + ctx.r29.u64;
	// bge cr6,0x825dd47c
	if (!ctx.cr6.lt) goto loc_825DD47C;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x825dd488
	goto loc_825DD488;
loc_825DD47C:
	// addi r11,r11,-250
	ctx.r11.s64 = ctx.r11.s64 + -250;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r24
	ctx.r30.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_825DD488:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x825dd4ac
	if (!ctx.cr6.eq) goto loc_825DD4AC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x825df4b0
	ctx.lr = 0x825DD4A0;
	sub_825DF4B0(ctx, base);
	// b 0x825dd5dc
	goto loc_825DD5DC;
loc_825DD4A4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// b 0x825dd430
	goto loc_825DD430;
loc_825DD4AC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825dc798
	ctx.lr = 0x825DD4C0;
	sub_825DC798(ctx, base);
	// b 0x825dd440
	goto loc_825DD440;
loc_825DD4C4:
	// rlwinm r11,r30,30,10,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3FFFF0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + ctx.r24.u64;
	// addi r4,r23,16
	ctx.r4.s64 = ctx.r23.s64 + 16;
loc_825DD4D4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825dc8a8
	ctx.lr = 0x825DD4DC;
	sub_825DC8A8(ctx, base);
	// b 0x825dd2f0
	goto loc_825DD2F0;
loc_825DD4E0:
	// rlwinm r11,r30,17,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 17) & 0x1FF;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r23
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// b 0x825dd454
	goto loc_825DD454;
loc_825DD504:
	// rlwinm r11,r30,26,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x1FF;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// bge cr6,0x825dd51c
	if (!ctx.cr6.lt) goto loc_825DD51C;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x825dd528
	goto loc_825DD528;
loc_825DD51C:
	// addi r11,r11,-250
	ctx.r11.s64 = ctx.r11.s64 + -250;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r24
	ctx.r6.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_825DD528:
	// rlwinm r11,r30,17,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 17) & 0x1FF;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// bge cr6,0x825dd540
	if (!ctx.cr6.lt) goto loc_825DD540;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x825dd54c
	goto loc_825DD54C;
loc_825DD540:
	// addi r11,r11,-250
	ctx.r11.s64 = ctx.r11.s64 + -250;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_825DD54C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x825dd4d4
	goto loc_825DD4D4;
loc_825DD554:
	// rlwinm r11,r30,17,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 17) & 0x1FF;
	// stw r16,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r16.u32);
	// rlwinm r5,r30,26,23,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x1FF;
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// slw r4,r10,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// bl 0x825df230
	ctx.lr = 0x825DD574;
	sub_825DF230(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// b 0x825ddf24
	goto loc_825DDF24;
loc_825DD57C:
	// rlwinm r11,r30,26,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x1FF;
	// rlwinm r10,r30,21,19,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 21) & 0x1FF0;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// add r27,r10,r29
	ctx.r27.u64 = ctx.r10.u64 + ctx.r29.u64;
	// bge cr6,0x825dd59c
	if (!ctx.cr6.lt) goto loc_825DD59C;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x825dd5a8
	goto loc_825DD5A8;
loc_825DD59C:
	// addi r11,r11,-250
	ctx.r11.s64 = ctx.r11.s64 + -250;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r24
	ctx.r30.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_825DD5A8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x825de0d0
	if (!ctx.cr6.eq) goto loc_825DE0D0;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// ld r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 8);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x825dd4ac
	if (!ctx.cr6.eq) goto loc_825DD4AC;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x825df450
	ctx.lr = 0x825DD5DC;
	sub_825DF450(ctx, base);
loc_825DD5DC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825dd4a4
	if (ctx.cr0.eq) goto loc_825DD4A4;
	// b 0x825dd420
	goto loc_825DD420;
loc_825DD5EC:
	// rlwinm r11,r30,17,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 17) & 0x1FF;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// bge cr6,0x825dd604
	if (!ctx.cr6.lt) goto loc_825DD604;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x825dd610
	goto loc_825DD610;
loc_825DD604:
	// addi r11,r11,-250
	ctx.r11.s64 = ctx.r11.s64 + -250;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_825DD610:
	// rlwinm r11,r30,26,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x1FF;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// bge cr6,0x825dd628
	if (!ctx.cr6.lt) goto loc_825DD628;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x825dd634
	goto loc_825DD634;
loc_825DD628:
	// addi r11,r11,-250
	ctx.r11.s64 = ctx.r11.s64 + -250;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r24
	ctx.r6.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_825DD634:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825dd660
	if (!ctx.cr6.eq) goto loc_825DD660;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825dd660
	if (!ctx.cr6.eq) goto loc_825DD660;
	// stw r21,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r21.u32);
	// lfd f0,8(r6)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// lfd f13,8(r5)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// fadd f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 + ctx.f13.f64;
	// b 0x825dd8a4
	goto loc_825DD8A4;
loc_825DD660:
	// li r7,5
	ctx.r7.s64 = 5;
loc_825DD664:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825dd030
	ctx.lr = 0x825DD670;
	sub_825DD030(ctx, base);
	// b 0x825dd2f0
	goto loc_825DD2F0;
loc_825DD674:
	// rlwinm r11,r30,17,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 17) & 0x1FF;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// bge cr6,0x825dd68c
	if (!ctx.cr6.lt) goto loc_825DD68C;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x825dd698
	goto loc_825DD698;
loc_825DD68C:
	// addi r11,r11,-250
	ctx.r11.s64 = ctx.r11.s64 + -250;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_825DD698:
	// rlwinm r11,r30,26,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x1FF;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// bge cr6,0x825dd6b0
	if (!ctx.cr6.lt) goto loc_825DD6B0;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x825dd6bc
	goto loc_825DD6BC;
loc_825DD6B0:
	// addi r11,r11,-250
	ctx.r11.s64 = ctx.r11.s64 + -250;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r24
	ctx.r6.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_825DD6BC:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825dd6e8
	if (!ctx.cr6.eq) goto loc_825DD6E8;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825dd6e8
	if (!ctx.cr6.eq) goto loc_825DD6E8;
	// stw r21,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r21.u32);
	// lfd f0,8(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// lfd f13,8(r6)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// fsub f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 - ctx.f13.f64;
	// b 0x825dd8a4
	goto loc_825DD8A4;
loc_825DD6E8:
	// li r7,6
	ctx.r7.s64 = 6;
	// b 0x825dd664
	goto loc_825DD664;
loc_825DD6F0:
	// rlwinm r11,r30,17,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 17) & 0x1FF;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// bge cr6,0x825dd708
	if (!ctx.cr6.lt) goto loc_825DD708;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x825dd714
	goto loc_825DD714;
loc_825DD708:
	// addi r11,r11,-250
	ctx.r11.s64 = ctx.r11.s64 + -250;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_825DD714:
	// rlwinm r11,r30,26,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x1FF;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// bge cr6,0x825dd72c
	if (!ctx.cr6.lt) goto loc_825DD72C;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x825dd738
	goto loc_825DD738;
loc_825DD72C:
	// addi r11,r11,-250
	ctx.r11.s64 = ctx.r11.s64 + -250;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r24
	ctx.r6.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_825DD738:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825dd764
	if (!ctx.cr6.eq) goto loc_825DD764;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825dd764
	if (!ctx.cr6.eq) goto loc_825DD764;
	// stw r21,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r21.u32);
	// lfd f0,8(r6)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// lfd f13,8(r5)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// b 0x825dd8a4
	goto loc_825DD8A4;
loc_825DD764:
	// li r7,7
	ctx.r7.s64 = 7;
	// b 0x825dd664
	goto loc_825DD664;
loc_825DD76C:
	// rlwinm r11,r30,17,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 17) & 0x1FF;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// bge cr6,0x825dd784
	if (!ctx.cr6.lt) goto loc_825DD784;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x825dd790
	goto loc_825DD790;
loc_825DD784:
	// addi r11,r11,-250
	ctx.r11.s64 = ctx.r11.s64 + -250;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_825DD790:
	// rlwinm r11,r30,26,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x1FF;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// bge cr6,0x825dd7a8
	if (!ctx.cr6.lt) goto loc_825DD7A8;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x825dd7b4
	goto loc_825DD7B4;
loc_825DD7A8:
	// addi r11,r11,-250
	ctx.r11.s64 = ctx.r11.s64 + -250;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r24
	ctx.r6.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_825DD7B4:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825dd7e0
	if (!ctx.cr6.eq) goto loc_825DD7E0;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825dd7e0
	if (!ctx.cr6.eq) goto loc_825DD7E0;
	// stw r21,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r21.u32);
	// lfd f0,8(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// lfd f13,8(r6)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// fdiv f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 / ctx.f13.f64;
	// b 0x825dd8a4
	goto loc_825DD8A4;
loc_825DD7E0:
	// li r7,8
	ctx.r7.s64 = 8;
	// b 0x825dd664
	goto loc_825DD664;
loc_825DD7E8:
	// rlwinm r11,r30,26,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x1FF;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// bge cr6,0x825dd800
	if (!ctx.cr6.lt) goto loc_825DD800;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x825dd80c
	goto loc_825DD80C;
loc_825DD800:
	// addi r11,r11,-250
	ctx.r11.s64 = ctx.r11.s64 + -250;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r24
	ctx.r6.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_825DD80C:
	// rlwinm r11,r30,17,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 17) & 0x1FF;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// bge cr6,0x825dd824
	if (!ctx.cr6.lt) goto loc_825DD824;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x825dd830
	goto loc_825DD830;
loc_825DD824:
	// addi r11,r11,-250
	ctx.r11.s64 = ctx.r11.s64 + -250;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_825DD830:
	// li r7,9
	ctx.r7.s64 = 9;
	// b 0x825dd664
	goto loc_825DD664;
loc_825DD838:
	// rlwinm r11,r30,21,19,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 21) & 0x1FF0;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x825dd898
	if (ctx.cr6.eq) goto loc_825DD898;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825dc498
	ctx.lr = 0x825DD858;
	sub_825DC498(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825dd898
	if (!ctx.cr0.eq) goto loc_825DD898;
	// li r7,10
	ctx.r7.s64 = 10;
	// stw r19,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825dca30
	ctx.lr = 0x825DD87C;
	sub_825DCA30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825dd2f0
	if (!ctx.cr0.eq) goto loc_825DD2F0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825e0a58
	ctx.lr = 0x825DD894;
	sub_825E0A58(ctx, base);
	// b 0x825dd2f0
	goto loc_825DD2F0;
loc_825DD898:
	// stw r21,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r21.u32);
	// lfd f0,8(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_825DD8A4:
	// stfd f0,8(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.f0.u64);
	// b 0x825dd2f0
	goto loc_825DD2F0;
loc_825DD8AC:
	// rlwinm r11,r30,21,19,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 21) & 0x1FF0;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825dd8dc
	if (ctx.cr0.eq) goto loc_825DD8DC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825dd8d4
	if (!ctx.cr6.eq) goto loc_825DD8D4;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825dd8dc
	if (ctx.cr6.eq) goto loc_825DD8DC;
loc_825DD8D4:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x825dd8e0
	goto loc_825DD8E0;
loc_825DD8DC:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_825DD8E0:
	// stw r15,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r15.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x825dd2f0
	goto loc_825DD2F0;
loc_825DD8EC:
	// rlwinm r5,r30,26,23,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x1FF;
	// rlwinm r31,r30,17,23,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 17) & 0x1FF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// subf r11,r31,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r31.s64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x825dce60
	ctx.lr = 0x825DD904;
	sub_825DCE60(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// b 0x825ddf24
	goto loc_825DDF24;
loc_825DD928:
	// rlwinm r11,r30,26,14,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x3FFFF;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r20,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r20.s64;
loc_825DD934:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x825dd3c4
	goto loc_825DD3C4;
loc_825DD940:
	// rlwinm r8,r30,17,23,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 17) & 0x1FF;
	// cmpwi cr6,r8,250
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 250, ctx.xer);
	// bge cr6,0x825dd958
	if (!ctx.cr6.lt) goto loc_825DD958;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x825dd964
	goto loc_825DD964;
loc_825DD958:
	// addi r11,r8,-250
	ctx.r11.s64 = ctx.r8.s64 + -250;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r24
	ctx.r9.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_825DD964:
	// rlwinm r11,r30,26,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x1FF;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// bge cr6,0x825dd97c
	if (!ctx.cr6.lt) goto loc_825DD97C;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// b 0x825dd988
	goto loc_825DD988;
loc_825DD97C:
	// addi r10,r11,-250
	ctx.r10.s64 = ctx.r11.s64 + -250;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
loc_825DD988:
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825dd9ec
	if (!ctx.cr6.eq) goto loc_825DD9EC;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// bge cr6,0x825dd9ac
	if (!ctx.cr6.lt) goto loc_825DD9AC;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x825dd9b8
	goto loc_825DD9B8;
loc_825DD9AC:
	// addi r11,r11,-250
	ctx.r11.s64 = ctx.r11.s64 + -250;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_825DD9B8:
	// cmpwi cr6,r8,250
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 250, ctx.xer);
	// bge cr6,0x825dd9cc
	if (!ctx.cr6.lt) goto loc_825DD9CC;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x825dd9d8
	goto loc_825DD9D8;
loc_825DD9CC:
	// addi r11,r8,-250
	ctx.r11.s64 = ctx.r8.s64 + -250;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_825DD9D8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825dcd70
	ctx.lr = 0x825DD9E0;
	sub_825DCD70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// bne 0x825dd9f0
	if (!ctx.cr0.eq) goto loc_825DD9F0;
loc_825DD9EC:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_825DD9F0:
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x825dd3bc
	if (!ctx.cr6.eq) goto loc_825DD3BC;
loc_825DD9F8:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,26,14,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFF;
	// subf r11,r22,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r22.s64;
	// b 0x825dd934
	goto loc_825DD934;
loc_825DDA0C:
	// rlwinm r11,r30,26,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x1FF;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// bge cr6,0x825dda24
	if (!ctx.cr6.lt) goto loc_825DDA24;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x825dda30
	goto loc_825DDA30;
loc_825DDA24:
	// addi r11,r11,-250
	ctx.r11.s64 = ctx.r11.s64 + -250;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_825DDA30:
	// rlwinm r11,r30,17,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 17) & 0x1FF;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// bge cr6,0x825dda48
	if (!ctx.cr6.lt) goto loc_825DDA48;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x825dda54
	goto loc_825DDA54;
loc_825DDA48:
	// addi r11,r11,-250
	ctx.r11.s64 = ctx.r11.s64 + -250;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_825DDA54:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825dccc8
	ctx.lr = 0x825DDA5C;
	sub_825DCCC8(ctx, base);
	// cmpw cr6,r3,r25
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x825dd3bc
	if (!ctx.cr6.eq) goto loc_825DD3BC;
loc_825DDA64:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,26,14,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFF;
	// subf r10,r22,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r22.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x825dd3c4
	goto loc_825DD3C4;
loc_825DDA80:
	// rlwinm r11,r30,26,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x1FF;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// bge cr6,0x825dda98
	if (!ctx.cr6.lt) goto loc_825DDA98;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r27,r11,r29
	ctx.r27.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x825ddaa4
	goto loc_825DDAA4;
loc_825DDA98:
	// addi r11,r11,-250
	ctx.r11.s64 = ctx.r11.s64 + -250;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r27,r11,r24
	ctx.r27.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_825DDAA4:
	// rlwinm r11,r30,17,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 17) & 0x1FF;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// bge cr6,0x825ddabc
	if (!ctx.cr6.lt) goto loc_825DDABC;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x825ddac8
	goto loc_825DDAC8;
loc_825DDABC:
	// addi r11,r11,-250
	ctx.r11.s64 = ctx.r11.s64 + -250;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r24
	ctx.r31.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_825DDAC8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825ddb64
	if (!ctx.cr6.eq) goto loc_825DDB64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825ddb00
	if (!ctx.cr6.eq) goto loc_825DDB00;
	// lfd f0,8(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// lfd f13,8(r27)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r27.u32 + 8);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x825ddaf8
	if (ctx.cr6.gt) goto loc_825DDAF8;
loc_825DDAF0:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// b 0x825ddb74
	goto loc_825DDB74;
loc_825DDAF8:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// b 0x825ddb74
	goto loc_825DDB74;
loc_825DDB00:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x825ddb20
	if (!ctx.cr6.eq) goto loc_825DDB20;
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825dcc28
	ctx.lr = 0x825DDB14;
	sub_825DCC28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x825ddaf8
	if (ctx.cr0.gt) goto loc_825DDAF8;
	// b 0x825ddaf0
	goto loc_825DDAF0;
loc_825DDB20:
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825dcb78
	ctx.lr = 0x825DDB34;
	sub_825DCB78(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x825ddb74
	if (!ctx.cr6.eq) goto loc_825DDB74;
	// li r6,11
	ctx.r6.s64 = 11;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825dcb78
	ctx.lr = 0x825DDB50;
	sub_825DCB78(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x825ddb64
	if (ctx.cr6.eq) goto loc_825DDB64;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x825ddb74
	goto loc_825DDB74;
loc_825DDB64:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825e0aa8
	ctx.lr = 0x825DDB74;
	sub_825E0AA8(ctx, base);
loc_825DDB74:
	// cmpw cr6,r3,r25
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x825dd9f8
	if (ctx.cr6.eq) goto loc_825DD9F8;
	// b 0x825dd3bc
	goto loc_825DD3BC;
loc_825DDB80:
	// rlwinm r11,r30,21,19,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 21) & 0x1FF0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825ddbb0
	if (ctx.cr0.eq) goto loc_825DDBB0;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x825ddba8
	if (!ctx.cr6.eq) goto loc_825DDBA8;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x825ddbb0
	if (ctx.cr6.eq) goto loc_825DDBB0;
loc_825DDBA8:
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// b 0x825ddbb4
	goto loc_825DDBB4;
loc_825DDBB0:
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
loc_825DDBB4:
	// rlwinm r8,r30,26,23,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x1FF;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x825dd3bc
	if (ctx.cr6.eq) goto loc_825DD3BC;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// b 0x825dda64
	goto loc_825DDA64;
loc_825DDBD0:
	// rlwinm. r11,r30,17,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 17) & 0x1FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ddbe4
	if (ctx.cr0.eq) goto loc_825DDBE4;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
loc_825DDBE4:
	// rlwinm r11,r30,26,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x1FF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// bl 0x825d9d38
	ctx.lr = 0x825DDBF8;
	sub_825D9D38(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x825ddfd0
	if (ctx.cr0.eq) goto loc_825DDFD0;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x825de0e0
	if (ctx.cr6.gt) goto loc_825DE0E0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825d9f68
	ctx.lr = 0x825DDC18;
	sub_825D9F68(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x825dd2f0
	if (ctx.cr6.lt) goto loc_825DD2F0;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// b 0x825dd2f0
	goto loc_825DD2F0;
loc_825DDC30:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// addi r27,r31,32
	ctx.r27.s64 = ctx.r31.s64 + 32;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x825ddc50
	if (ctx.cr6.eq) goto loc_825DDC50;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x825e04f8
	ctx.lr = 0x825DDC50;
	sub_825E04F8(ctx, base);
loc_825DDC50:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x825ddc7c
	if (ctx.cr6.eq) goto loc_825DDC7C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825dc498
	ctx.lr = 0x825DDC68;
	sub_825DC498(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x825ddc7c
	if (!ctx.cr0.eq) goto loc_825DDC7C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x825e04f8
	ctx.lr = 0x825DDC7C;
	sub_825E04F8(ctx, base);
loc_825DDC7C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x825ddca8
	if (ctx.cr6.eq) goto loc_825DDCA8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825dc498
	ctx.lr = 0x825DDC94;
	sub_825DC498(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x825ddca8
	if (!ctx.cr0.eq) goto loc_825DDCA8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x825e04f8
	ctx.lr = 0x825DDCA8;
	sub_825E04F8(ctx, base);
loc_825DDCA8:
	// lfd f0,8(r27)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r27.u32 + 8);
	// lfd f12,8(r31)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// lfd f13,8(r29)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// fadd f0,f0,f12
	ctx.f0.f64 = ctx.f0.f64 + ctx.f12.f64;
	// ble cr6,0x825ddccc
	if (!ctx.cr6.gt) goto loc_825DDCCC;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x825dd2f0
	if (ctx.cr6.gt) goto loc_825DD2F0;
	// b 0x825ddcd4
	goto loc_825DDCD4;
loc_825DDCCC:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x825dd2f0
	if (ctx.cr6.lt) goto loc_825DD2F0;
loc_825DDCD4:
	// rlwinm r11,r30,26,14,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x3FFFF;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r20,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r20.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x825dd8a4
	goto loc_825DD8A4;
loc_825DDCF0:
	// rlwinm r11,r30,26,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x1FF;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r11.u64);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// std r11,24(r4)
	PPC_STORE_U64(ctx.r4.u32 + 24, ctx.r11.u64);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r11.u32);
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// std r11,40(r4)
	PPC_STORE_U64(ctx.r4.u32 + 40, ctx.r11.u64);
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// bl 0x825da070
	ctx.lr = 0x825DDD48;
	sub_825DA070(ctx, base);
	// addi r11,r25,2
	ctx.r11.s64 = ctx.r25.s64 + 2;
	// lwz r8,20(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_825DDD78:
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// addi r8,r8,-16
	ctx.r8.s64 = ctx.r8.s64 + -16;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,-8(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8, ctx.r7.u32);
	// ldx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r8.u32);
	// std r7,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// bgt 0x825ddd78
	if (ctx.cr0.gt) goto loc_825DDD78;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825dda64
	if (!ctx.cr6.eq) goto loc_825DDA64;
	// b 0x825dd3bc
	goto loc_825DD3BC;
loc_825DDDA8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x825dd928
	if (!ctx.cr6.eq) goto loc_825DD928;
	// stw r16,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r16.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// bl 0x825de870
	ctx.lr = 0x825DDDD0;
	sub_825DE870(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,72(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// bl 0x825df450
	ctx.lr = 0x825DDDDC;
	sub_825DF450(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// b 0x825dd928
	goto loc_825DD928;
loc_825DDDF0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x825de0d0
	if (!ctx.cr6.eq) goto loc_825DE0D0;
	// lwz r27,8(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r30,26,14,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x3FFFF;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bne cr6,0x825dde18
	if (!ctx.cr6.eq) goto loc_825DDE18;
	// clrlwi r11,r10,27
	ctx.r11.u64 = ctx.r10.u32 & 0x1F;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// b 0x825dde34
	goto loc_825DDE34;
loc_825DDE18:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// subf r11,r31,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r31.s64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
loc_825DDE34:
	// rlwinm r29,r10,0,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x825dd2f0
	if (!ctx.cr6.gt) goto loc_825DD2F0;
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_825DDE48:
	// add r5,r30,r29
	ctx.r5.u64 = ctx.r30.u64 + ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825dfaf0
	ctx.lr = 0x825DDE58;
	sub_825DFAF0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// bgt 0x825dde48
	if (ctx.cr0.gt) goto loc_825DDE48;
	// b 0x825dd2f0
	goto loc_825DD2F0;
loc_825DDE78:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825debd0
	ctx.lr = 0x825DDE84;
	sub_825DEBD0(ctx, base);
	// b 0x825dd2f0
	goto loc_825DD2F0;
loc_825DDE88:
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// rlwinm r10,r30,28,12,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFFC;
	// addi r5,r23,16
	ctx.r5.s64 = ctx.r23.s64 + 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r27,r10,r11
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lbz r30,68(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 68);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825deac8
	ctx.lr = 0x825DDEAC;
	sub_825DEAC8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r27,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r27.u32);
	// ble cr6,0x825ddf18
	if (!ctx.cr6.gt) goto loc_825DDF18;
	// addi r27,r26,32
	ctx.r27.s64 = ctx.r26.s64 + 32;
loc_825DDEC0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x825ddeec
	if (!ctx.cr6.eq) goto loc_825DDEEC;
	// rlwinm r11,r11,17,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1FF;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r23
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x825ddf00
	goto loc_825DDF00;
loc_825DDEEC:
	// rlwinm r11,r11,21,19,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1FF0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825deb38
	ctx.lr = 0x825DDEFC;
	sub_825DEB38(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
loc_825DDF00:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne 0x825ddec0
	if (!ctx.cr0.eq) goto loc_825DDEC0;
loc_825DDF18:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_825DDF24:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825dd2f0
	if (ctx.cr6.lt) goto loc_825DD2F0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825dc270
	ctx.lr = 0x825DDF40;
	sub_825DC270(ctx, base);
	// b 0x825dd2f0
	goto loc_825DD2F0;
loc_825DDF44:
	// rlwinm. r11,r30,17,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 17) & 0x1FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r30,20(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// beq 0x825ddf60
	if (ctx.cr0.eq) goto loc_825DDF60;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
loc_825DDF60:
	// lwz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ddf78
	if (ctx.cr6.eq) goto loc_825DDF78;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825debd0
	ctx.lr = 0x825DDF78;
	sub_825DEBD0(ctx, base);
loc_825DDF78:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// stw r17,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r17.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,-16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825de0f8
	if (ctx.cr0.eq) goto loc_825DE0F8;
	// lwz r11,-12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// rlwinm r11,r11,26,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1FF;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825d9f68
	ctx.lr = 0x825DDFB8;
	sub_825D9F68(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x825dd2c8
	if (ctx.cr6.lt) goto loc_825DD2C8;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// b 0x825dd2c8
	goto loc_825DD2C8;
loc_825DDFD0:
	// clrlwi r11,r30,26
	ctx.r11.u64 = ctx.r30.u32 & 0x3F;
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// bne cr6,0x825ddff8
	if (!ctx.cr6.eq) goto loc_825DDFF8;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r10.u32);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// stw r9,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r9.u32);
	// b 0x825dd2a0
	goto loc_825DD2A0;
loc_825DDFF8:
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r11,r30,12,20,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xFF0;
	// lwz r9,80(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r31,-24(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24);
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq cr6,0x825de020
	if (ctx.cr6.eq) goto loc_825DE020;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825debd0
	ctx.lr = 0x825DE020;
	sub_825DEBD0(ctx, base);
loc_825DE020:
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825de064
	if (!ctx.cr6.lt) goto loc_825DE064;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
loc_825DE038:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r7,-16(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16, ctx.r7.u32);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r10,-8(r8)
	PPC_STORE_U64(ctx.r8.u32 + -8, ctx.r10.u64);
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + ctx.r30.u64;
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x825de038
	if (ctx.cr6.lt) goto loc_825DE038;
loc_825DE064:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// stw r11,-20(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20, ctx.r11.u32);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r10.u32);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// stw r17,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r17.u32);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// b 0x825dd2a0
	goto loc_825DD2A0;
loc_825DE0B4:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,24
	ctx.r9.s64 = 24;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_825DE0D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825DE0D4:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826de8e0
	__restgprlr_14(ctx, base);
	return;
loc_825DE0E0:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r10.u32);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// stw r17,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r17.u32);
	// b 0x825de0d0
	goto loc_825DE0D0;
loc_825DE0F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x825de0d4
	goto loc_825DE0D4;
}

__attribute__((alias("__imp__sub_825DE100"))) PPC_WEAK_FUNC(sub_825DE100);
PPC_FUNC_IMPL(__imp__sub_825DE100) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825de114
	goto loc_825DE114;
loc_825DE108:
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r3,r10,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
loc_825DE114:
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// bge cr6,0x825de108
	if (!ctx.cr6.lt) goto loc_825DE108;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// or r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 | ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE128"))) PPC_WEAK_FUNC(sub_825DE128);
PPC_FUNC_IMPL(__imp__sub_825DE128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,1
	ctx.r11.s64 = 65536;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825de170
	if (ctx.cr6.lt) goto loc_825DE170;
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-26248
	ctx.r11.s64 = ctx.r11.s64 + -26248;
	// blt cr6,0x825de15c
	if (ctx.cr6.lt) goto loc_825DE15C;
	// rlwinm r10,r3,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// blr 
	return;
loc_825DE15C:
	// rlwinm r10,r3,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// blr 
	return;
loc_825DE170:
	// cmplwi cr6,r3,256
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 256, ctx.xer);
	// blt cr6,0x825de194
	if (ctx.cr6.lt) goto loc_825DE194;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r3,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// addi r11,r11,-26248
	ctx.r11.s64 = ctx.r11.s64 + -26248;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// blr 
	return;
loc_825DE194:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825de1b4
	if (ctx.cr6.eq) goto loc_825DE1B4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,-26248
	ctx.r11.s64 = ctx.r11.s64 + -26248;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r3,-1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// blr 
	return;
loc_825DE1B4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE1C0"))) PPC_WEAK_FUNC(sub_825DE1C0);
PPC_FUNC_IMPL(__imp__sub_825DE1C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825de1d8
	if (ctx.cr6.eq) goto loc_825DE1D8;
loc_825DE1D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825DE1D8:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825de220
	if (ctx.cr6.lt) goto loc_825DE220;
	// beq cr6,0x825de208
	if (ctx.cr6.eq) goto loc_825DE208;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x825de208
	if (ctx.cr6.lt) goto loc_825DE208;
	// bne cr6,0x825de208
	if (!ctx.cr6.eq) goto loc_825DE208;
	// lfd f0,8(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfd f13,8(r4)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x825de1d0
	goto loc_825DE1D0;
loc_825DE208:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_825DE220:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE228"))) PPC_WEAK_FUNC(sub_825DE228);
PPC_FUNC_IMPL(__imp__sub_825DE228) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826e1f48
	ctx.lr = 0x825DE250;
	sub_826E1F48(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825de270
	if (!ctx.cr6.eq) goto loc_825DE270;
loc_825DE260:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825de2a0
	goto loc_825DE2A0;
loc_825DE268:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_825DE270:
	// bl 0x826e42f8
	ctx.lr = 0x825DE274;
	sub_826E42F8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lhzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825de268
	if (!ctx.cr0.eq) goto loc_825DE268;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825de260
	if (!ctx.cr6.eq) goto loc_825DE260;
	// stfd f31,0(r30)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.f31.u64);
	// li r3,1
	ctx.r3.s64 = 1;
loc_825DE2A0:
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

__attribute__((alias("__imp__sub_825DE2C0"))) PPC_WEAK_FUNC(sub_825DE2C0);
PPC_FUNC_IMPL(__imp__sub_825DE2C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
loc_825DE2EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825de2ec
	if (!ctx.cr6.eq) goto loc_825DE2EC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825de870
	ctx.lr = 0x825DE310;
	sub_825DE870(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x825de334
	if (ctx.cr6.gt) goto loc_825DE334;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d99b8
	ctx.lr = 0x825DE334;
	sub_825D99B8(ctx, base);
loc_825DE334:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE358"))) PPC_WEAK_FUNC(sub_825DE358);
PPC_FUNC_IMPL(__imp__sub_825DE358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b8
	ctx.lr = 0x825DE360;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,5020
	ctx.r4.s64 = ctx.r11.s64 + 5020;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// bl 0x825de2c0
	ctx.lr = 0x825DE380;
	sub_825DE2C0(ctx, base);
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826e49d0
	ctx.lr = 0x825DE38C;
	sub_826E49D0(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x825de4e8
	if (ctx.cr0.eq) goto loc_825DE4E8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r25,3
	ctx.r25.s64 = 3;
	// addi r24,r11,-25992
	ctx.r24.s64 = ctx.r11.s64 + -25992;
loc_825DE3A0:
	// lwz r28,8(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,4
	ctx.r11.s64 = 4;
	// subf r5,r30,r27
	ctx.r5.s64 = ctx.r27.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x825de870
	ctx.lr = 0x825DE3BC;
	sub_825DE870(ctx, base);
	// stw r3,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r3.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x825de3e0
	if (ctx.cr6.gt) goto loc_825DE3E0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d99b8
	ctx.lr = 0x825DE3E0;
	sub_825D99B8(ctx, base);
loc_825DE3E0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lbz r10,1(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,37
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 37, ctx.xer);
	// beq cr6,0x825de4c0
	if (ctx.cr6.eq) goto loc_825DE4C0;
	// cmpwi cr6,r10,99
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 99, ctx.xer);
	// beq cr6,0x825de49c
	if (ctx.cr6.eq) goto loc_825DE49C;
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// beq cr6,0x825de448
	if (ctx.cr6.eq) goto loc_825DE448;
	// cmpwi cr6,r10,102
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 102, ctx.xer);
	// beq cr6,0x825de430
	if (ctx.cr6.eq) goto loc_825DE430;
	// cmpwi cr6,r10,115
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 115, ctx.xer);
	// bne cr6,0x825de4cc
	if (!ctx.cr6.eq) goto loc_825DE4CC;
	// addi r11,r29,7
	ctx.r11.s64 = ctx.r29.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// lwz r4,-4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// b 0x825de4c4
	goto loc_825DE4C4;
loc_825DE430:
	// addi r10,r29,7
	ctx.r10.s64 = ctx.r29.s64 + 7;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r29,r10,8
	ctx.r29.s64 = ctx.r10.s64 + 8;
	// lfd f0,-8(r29)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r29.u32 + -8);
	// b 0x825de468
	goto loc_825DE468;
loc_825DE448:
	// addi r10,r29,7
	ctx.r10.s64 = ctx.r29.s64 + 7;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r29,r10,8
	ctx.r29.s64 = ctx.r10.s64 + 8;
	// lwa r10,-4(r29)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r29.u32 + -4));
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
loc_825DE468:
	// stfd f0,8(r11)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.f0.u64);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x825de48c
	if (ctx.cr6.gt) goto loc_825DE48C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d99b8
	ctx.lr = 0x825DE48C;
	sub_825D99B8(ctx, base);
loc_825DE48C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x825de4cc
	goto loc_825DE4CC;
loc_825DE49C:
	// addi r11,r29,7
	ctx.r11.s64 = ctx.r29.s64 + 7;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// b 0x825de4c4
	goto loc_825DE4C4;
loc_825DE4C0:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_825DE4C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825de2c0
	ctx.lr = 0x825DE4CC;
	sub_825DE2C0(ctx, base);
loc_825DE4CC:
	// addi r30,r27,2
	ctx.r30.s64 = ctx.r27.s64 + 2;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// bl 0x826e49d0
	ctx.lr = 0x825DE4E0;
	sub_826E49D0(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x825de3a0
	if (!ctx.cr0.eq) goto loc_825DE3A0;
loc_825DE4E8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825de2c0
	ctx.lr = 0x825DE4F4;
	sub_825DE2C0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r26,1
	ctx.r4.s64 = ctx.r26.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bl 0x825dce60
	ctx.lr = 0x825DE514;
	sub_825DCE60(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r26,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,-8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DE538"))) PPC_WEAK_FUNC(sub_825DE538);
PPC_FUNC_IMPL(__imp__sub_825DE538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825de358
	ctx.lr = 0x825DE570;
	sub_825DE358(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DE580"))) PPC_WEAK_FUNC(sub_825DE580);
PPC_FUNC_IMPL(__imp__sub_825DE580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825DE588;
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
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,61
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 61, ctx.xer);
	// bne cr6,0x825de5c0
	if (!ctx.cr6.eq) goto loc_825DE5C0;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// bl 0x826dfce0
	ctx.lr = 0x825DE5B0;
	sub_826DFCE0(ctx, base);
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
	// b 0x825de768
	goto loc_825DE768;
loc_825DE5C0:
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// bne cr6,0x825de674
	if (!ctx.cr6.eq) goto loc_825DE674;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// addi r9,r28,-8
	ctx.r9.s64 = ctx.r28.s64 + -8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_825DE5D8:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x825de5d8
	if (!ctx.cr6.eq) goto loc_825DE5D8;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stb r8,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r8.u8);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x825de644
	if (!ctx.cr6.gt) goto loc_825DE644;
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r10,r10,-25972
	ctx.r10.s64 = ctx.r10.s64 + -25972;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_825DE618:
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x825de618
	if (!ctx.cr6.eq) goto loc_825DE618;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_825DE62C:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x825de62c
	if (!ctx.cr0.eq) goto loc_825DE62C;
loc_825DE644:
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825de644
	if (!ctx.cr6.eq) goto loc_825DE644;
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
loc_825DE658:
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
	// bne 0x825de658
	if (!ctx.cr0.eq) goto loc_825DE658;
	// b 0x825de768
	goto loc_825DE768;
loc_825DE674:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-15828
	ctx.r4.s64 = ctx.r11.s64 + -15828;
	// bl 0x826e1aa0
	ctx.lr = 0x825DE684;
	sub_826E1AA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r28,-17
	ctx.r11.s64 = ctx.r28.s64 + -17;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x825de698
	if (!ctx.cr6.gt) goto loc_825DE698;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_825DE698:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r11,-25984
	ctx.r4.s64 = ctx.r11.s64 + -25984;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826df680
	ctx.lr = 0x825DE6AC;
	sub_826DF680(ctx, base);
	// lbzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825de704
	if (ctx.cr6.eq) goto loc_825DE704;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826e54b8
	ctx.lr = 0x825DE6C8;
	sub_826E54B8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r11,r11,-25972
	ctx.r11.s64 = ctx.r11.s64 + -25972;
loc_825DE6D4:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825de6d4
	if (!ctx.cr6.eq) goto loc_825DE6D4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_825DE6E8:
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
	// bne 0x825de6e8
	if (!ctx.cr0.eq) goto loc_825DE6E8;
	// b 0x825de734
	goto loc_825DE734;
loc_825DE704:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_825DE708:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825de708
	if (!ctx.cr6.eq) goto loc_825DE708;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_825DE71C:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x825de71c
	if (!ctx.cr0.eq) goto loc_825DE71C;
loc_825DE734:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-25988
	ctx.r11.s64 = ctx.r11.s64 + -25988;
loc_825DE73C:
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825de73c
	if (!ctx.cr6.eq) goto loc_825DE73C;
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
loc_825DE750:
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
	// bne 0x825de750
	if (!ctx.cr0.eq) goto loc_825DE750;
loc_825DE768:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DE770"))) PPC_WEAK_FUNC(sub_825DE770);
PPC_FUNC_IMPL(__imp__sub_825DE770) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x825e0bc8
	sub_825E0BC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DE788"))) PPC_WEAK_FUNC(sub_825DE788);
PPC_FUNC_IMPL(__imp__sub_825DE788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825DE790;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r6,r29,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x825e0bc8
	ctx.lr = 0x825DE7AC;
	sub_825E0BC8(ctx, base);
	// lwz r31,16(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x825de7dc
	if (!ctx.cr6.gt) goto loc_825DE7DC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq 0x825de7dc
	if (ctx.cr0.eq) goto loc_825DE7DC;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_825DE7D0:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825de7d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825DE7D0;
loc_825DE7DC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825de844
	if (!ctx.cr6.gt) goto loc_825DE844;
	// li r7,0
	ctx.r7.s64 = 0;
loc_825DE7F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825de830
	if (ctx.cr0.eq) goto loc_825DE830;
	// addi r8,r29,-1
	ctx.r8.s64 = ctx.r29.s64 + -1;
loc_825DE804:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stwx r5,r9,r30
	PPC_STORE_U32(ctx.r9.u32 + ctx.r30.u32, ctx.r5.u32);
	// bne 0x825de804
	if (!ctx.cr0.eq) goto loc_825DE804;
loc_825DE830:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825de7f0
	if (ctx.cr6.lt) goto loc_825DE7F0;
loc_825DE844:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x825e0bc8
	ctx.lr = 0x825DE85C;
	sub_825E0BC8(ctx, base);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DE870"))) PPC_WEAK_FUNC(sub_825DE870);
PPC_FUNC_IMPL(__imp__sub_825DE870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x825DE878;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r11,r30,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x7FFFFFF;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x825de8c8
	if (ctx.cr6.lt) goto loc_825DE8C8;
	// addi r6,r26,-1
	ctx.r6.s64 = ctx.r26.s64 + -1;
loc_825DE8A4:
	// lbzx r9,r6,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// rlwinm r7,r29,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r8,r29,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3FFFFFFF;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// xor r29,r9,r29
	ctx.r29.u64 = ctx.r9.u64 ^ ctx.r29.u64;
	// bge cr6,0x825de8a4
	if (!ctx.cr6.lt) goto loc_825DE8A4;
loc_825DE8C8:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 & ctx.r29.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x825de93c
	goto loc_825DE93C;
loc_825DE8EC:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x825de938
	if (!ctx.cr6.eq) goto loc_825DE938;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x825de930
	if (ctx.cr0.eq) goto loc_825DE930;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_825DE910:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825de930
	if (!ctx.cr0.eq) goto loc_825DE930;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x825de910
	if (!ctx.cr6.eq) goto loc_825DE910;
loc_825DE930:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825de9ec
	if (ctx.cr0.eq) goto loc_825DE9EC;
loc_825DE938:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_825DE93C:
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825de8ec
	if (!ctx.cr0.eq) goto loc_825DE8EC;
	// addi r6,r30,17
	ctx.r6.s64 = ctx.r30.s64 + 17;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825e0bc8
	ctx.lr = 0x825DE958;
	sub_825E0BC8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r28,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r28.u8);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// stb r28,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r28.u8);
	// bl 0x826df680
	ctx.lr = 0x825DE984;
	sub_826DF680(ctx, base);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stb r28,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r28.u8);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 & ctx.r29.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r31,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// ble cr6,0x825de9e8
	if (!ctx.cr6.gt) goto loc_825DE9E8;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// ori r11,r11,65534
	ctx.r11.u64 = ctx.r11.u64 | 65534;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x825de9e8
	if (ctx.cr6.gt) goto loc_825DE9E8;
	// rlwinm r4,r9,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825de788
	ctx.lr = 0x825DE9E8;
	sub_825DE788(ctx, base);
loc_825DE9E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825DE9EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DE9F8"))) PPC_WEAK_FUNC(sub_825DE9F8);
PPC_FUNC_IMPL(__imp__sub_825DE9F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825e0bc8
	ctx.lr = 0x825DEA24;
	sub_825E0BC8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DEA70"))) PPC_WEAK_FUNC(sub_825DEA70);
PPC_FUNC_IMPL(__imp__sub_825DEA70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825DEA78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r6,r11,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x825e0bc8
	ctx.lr = 0x825DEA98;
	sub_825E0BC8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825dc340
	ctx.lr = 0x825DEAAC;
	sub_825DC340(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r29,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r29.u8);
	// stb r11,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DEAC8"))) PPC_WEAK_FUNC(sub_825DEAC8);
PPC_FUNC_IMPL(__imp__sub_825DEAC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825DEAD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r11,r29,9
	ctx.r11.s64 = ctx.r29.s64 + 9;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x825e0bc8
	ctx.lr = 0x825DEAF4;
	sub_825E0BC8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825dc340
	ctx.lr = 0x825DEB08;
	sub_825DC340(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r10.u8);
	// ld r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// ld r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// stb r29,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r29.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DEB38"))) PPC_WEAK_FUNC(sub_825DEB38);
PPC_FUNC_IMPL(__imp__sub_825DEB38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,80
	ctx.r31.s64 = ctx.r3.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x825deb74
	goto loc_825DEB74;
loc_825DEB5C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x825deb7c
	if (ctx.cr6.lt) goto loc_825DEB7C;
	// beq cr6,0x825debc4
	if (ctx.cr6.eq) goto loc_825DEBC4;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825DEB74:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825deb5c
	if (!ctx.cr0.eq) goto loc_825DEB5C;
loc_825DEB7C:
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825e0bc8
	ctx.lr = 0x825DEB8C;
	sub_825E0BC8(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stb r10,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_825DEBAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_825DEBC4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x825debac
	goto loc_825DEBAC;
}

__attribute__((alias("__imp__sub_825DEBD0"))) PPC_WEAK_FUNC(sub_825DEBD0);
PPC_FUNC_IMPL(__imp__sub_825DEBD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// b 0x825dec28
	goto loc_825DEC28;
loc_825DEBF0:
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x825dec34
	if (ctx.cr6.lt) goto loc_825DEC34;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x825dc340
	ctx.lr = 0x825DEC28;
	sub_825DC340(ctx, base);
loc_825DEC28:
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne 0x825debf0
	if (!ctx.cr0.eq) goto loc_825DEBF0;
loc_825DEC34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DEC50"))) PPC_WEAK_FUNC(sub_825DEC50);
PPC_FUNC_IMPL(__imp__sub_825DEC50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x825e0bc8
	ctx.lr = 0x825DEC78;
	sub_825E0BC8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825dc340
	ctx.lr = 0x825DEC8C;
	sub_825DC340(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stb r11,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r11.u8);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stb r11,69(r31)
	PPC_STORE_U8(ctx.r31.u32 + 69, ctx.r11.u8);
	// stb r11,70(r31)
	PPC_STORE_U8(ctx.r31.u32 + 70, ctx.r11.u8);
	// stb r11,71(r31)
	PPC_STORE_U8(ctx.r31.u32 + 71, ctx.r11.u8);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DECF8"))) PPC_WEAK_FUNC(sub_825DECF8);
PPC_FUNC_IMPL(__imp__sub_825DECF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x825e0bc8
	ctx.lr = 0x825DED28;
	sub_825E0BC8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e0bc8
	ctx.lr = 0x825DED40;
	sub_825E0BC8(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e0bc8
	ctx.lr = 0x825DED58;
	sub_825E0BC8(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e0bc8
	ctx.lr = 0x825DED70;
	sub_825E0BC8(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mulli r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 * 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e0bc8
	ctx.lr = 0x825DED88;
	sub_825E0BC8(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e0bc8
	ctx.lr = 0x825DEDA0;
	sub_825E0BC8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e0bc8
	ctx.lr = 0x825DEDB4;
	sub_825E0BC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DEDD0"))) PPC_WEAK_FUNC(sub_825DEDD0);
PPC_FUNC_IMPL(__imp__sub_825DEDD0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,6(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lbz r11,7(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// beq 0x825dedec
	if (ctx.cr0.eq) goto loc_825DEDEC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x825dedf4
	goto loc_825DEDF4;
loc_825DEDEC:
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_825DEDF4:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x825e0bc8
	sub_825E0BC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DEE00"))) PPC_WEAK_FUNC(sub_825DEE00);
PPC_FUNC_IMPL(__imp__sub_825DEE00) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x825dee48
	if (!ctx.cr0.gt) goto loc_825DEE48;
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r8,8
	ctx.r11.s64 = ctx.r8.s64 + 8;
loc_825DEE18:
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x825dee48
	if (ctx.cr6.gt) goto loc_825DEE48;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x825dee38
	if (!ctx.cr6.lt) goto loc_825DEE38;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x825dee50
	if (ctx.cr0.eq) goto loc_825DEE50;
loc_825DEE38:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825dee18
	if (ctx.cr6.lt) goto loc_825DEE18;
loc_825DEE48:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825DEE50:
	// mulli r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 * 12;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DEE60"))) PPC_WEAK_FUNC(sub_825DEE60);
PPC_FUNC_IMPL(__imp__sub_825DEE60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x825def1c
	if (ctx.cr6.eq) goto loc_825DEF1C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x825def04
	if (ctx.cr6.eq) goto loc_825DEF04;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x825deebc
	if (ctx.cr6.eq) goto loc_825DEEBC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// lbz r11,7(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// beq cr6,0x825deeb4
	if (ctx.cr6.eq) goto loc_825DEEB4;
loc_825DEE9C:
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// divwu r9,r8,r11
	ctx.r9.u32 = ctx.r8.u32 / ctx.r11.u32;
	// twllei r11,0
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// b 0x825def34
	goto loc_825DEF34;
loc_825DEEB4:
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// b 0x825def30
	goto loc_825DEF30;
loc_825DEEBC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f13,8(r4)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// lbz r8,7(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfd f0,4080(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4080);
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// slw r9,r7,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// divwu r8,r11,r9
	ctx.r8.u32 = ctx.r11.u32 / ctx.r9.u32;
	// twllei r9,0
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// b 0x825def34
	goto loc_825DEF34;
loc_825DEF04:
	// lbz r11,7(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x825dee9c
	goto loc_825DEE9C;
loc_825DEF1C:
	// lbz r11,7(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_825DEF30:
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
loc_825DEF34:
	// mulli r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 * 40;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DEF40"))) PPC_WEAK_FUNC(sub_825DEF40);
PPC_FUNC_IMPL(__imp__sub_825DEF40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x825DEF48;
	__savegprlr_25(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,28(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r26,1
	ctx.r26.s64 = 1;
loc_825DEF70:
	// slw r10,r26,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r8.u8 & 0x3F));
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x825def88
	if (!ctx.cr6.gt) goto loc_825DEF88;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x825defe4
	if (!ctx.cr6.lt) goto loc_825DEFE4;
loc_825DEF88:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// bge cr6,0x825defd4
	if (!ctx.cr6.lt) goto loc_825DEFD4;
	// lwz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_825DEFAC:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x825defc8
	if (ctx.cr6.eq) goto loc_825DEFC8;
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
loc_825DEFC8:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bne 0x825defac
	if (!ctx.cr0.eq) goto loc_825DEFAC;
loc_825DEFD4:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpwi cr6,r8,24
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 24, ctx.xer);
	// ble cr6,0x825def70
	if (!ctx.cr6.gt) goto loc_825DEF70;
loc_825DEFE4:
	// cmpwi cr6,r8,24
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 24, ctx.xer);
	// bgt cr6,0x825df018
	if (ctx.cr6.gt) goto loc_825DF018;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r11,r8,25
	ctx.xer.ca = ctx.r8.u32 <= 25;
	ctx.r11.s64 = 25 - ctx.r8.s64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825df018
	if (ctx.cr0.eq) goto loc_825DF018;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_825DF00C:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x825df00c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825DF00C;
loc_825DF018:
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// lbz r11,7(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 7);
	// slw. r31,r26,r11
	ctx.r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r11.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825df0d4
	if (ctx.cr0.eq) goto loc_825DF0D4;
	// mulli r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 * 40;
loc_825DF02C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r30,r30,-40
	ctx.r30.s64 = ctx.r30.s64 + -40;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825df0cc
	if (ctx.cr6.eq) goto loc_825DF0CC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x825df094
	if (!ctx.cr6.eq) goto loc_825DF094;
	// lfd f0,8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f13.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x825df094
	if (!ctx.cr6.eq) goto loc_825DF094;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x825df094
	if (ctx.cr6.lt) goto loc_825DF094;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// rlwinm. r10,r10,0,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825df098
	if (ctx.cr0.eq) goto loc_825DF098;
loc_825DF094:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_825DF098:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x825df0c8
	if (ctx.cr6.lt) goto loc_825DF0C8;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// bl 0x825de128
	ctx.lr = 0x825DF0A8;
	sub_825DE128(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_825DF0C8:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_825DF0CC:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x825df02c
	if (!ctx.cr6.eq) goto loc_825DF02C;
loc_825DF0D4:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// neg r6,r9
	ctx.r6.s64 = -ctx.r9.s64;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x825df140
	if (!ctx.cr6.lt) goto loc_825DF140;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
loc_825DF100:
	// slw r9,r26,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r11.u8 & 0x3F));
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825df140
	if (ctx.cr6.lt) goto loc_825DF140;
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x825df12c
	if (!ctx.cr0.gt) goto loc_825DF12C;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825df12c
	if (ctx.cr6.lt) goto loc_825DF12C;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_825DF12C:
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825df100
	if (ctx.cr6.lt) goto loc_825DF100;
loc_825DF140:
	// subf r11,r4,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r4.s64;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x825df158
	if (ctx.cr6.eq) goto loc_825DF158;
	// slw r11,r26,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r6.u8 & 0x3F));
loc_825DF158:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DF168"))) PPC_WEAK_FUNC(sub_825DF168);
PPC_FUNC_IMPL(__imp__sub_825DF168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825DF170;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r28,24
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 24, ctx.xer);
	// slw r29,r11,r28
	ctx.r29.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r28.u8 & 0x3F));
	// ble cr6,0x825df19c
	if (!ctx.cr6.gt) goto loc_825DF19C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-25968
	ctx.r4.s64 = ctx.r11.s64 + -25968;
	// bl 0x825e04f8
	ctx.lr = 0x825DF19C;
	sub_825E04F8(ctx, base);
loc_825DF19C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x825df1b4
	if (!ctx.cr6.eq) goto loc_825DF1B4;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x825df20c
	goto loc_825DF20C;
loc_825DF1B4:
	// mulli r6,r29,40
	ctx.r6.s64 = ctx.r29.s64 * 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e0bc8
	ctx.lr = 0x825DF1C8;
	sub_825E0BC8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// ble cr6,0x825df20c
	if (!ctx.cr6.gt) goto loc_825DF20C;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_825DF1E0:
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r9,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r9.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// stw r9,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r9.u32);
	// bne 0x825df1e0
	if (!ctx.cr0.eq) goto loc_825DF1E0;
loc_825DF20C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r29,40
	ctx.r11.s64 = ctx.r29.s64 * 40;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r28,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r28.u8);
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DF230"))) PPC_WEAK_FUNC(sub_825DF230);
PPC_FUNC_IMPL(__imp__sub_825DF230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x825DF238;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x825e0bc8
	ctx.lr = 0x825DF258;
	sub_825E0BC8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825dc340
	ctx.lr = 0x825DF26C;
	sub_825DC340(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// rlwinm r6,r28,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r29.u8);
	// stb r10,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r10.u8);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// bl 0x825e0bc8
	ctx.lr = 0x825DF2A8;
	sub_825E0BC8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x825df2d4
	if (!ctx.cr6.lt) goto loc_825DF2D4;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r11,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r11.s64;
loc_825DF2C0:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r29,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r29.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x825df2c0
	if (!ctx.cr0.eq) goto loc_825DF2C0;
loc_825DF2D4:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825df168
	ctx.lr = 0x825DF2E8;
	sub_825DF168(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DF2F8"))) PPC_WEAK_FUNC(sub_825DF2F8);
PPC_FUNC_IMPL(__imp__sub_825DF2F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lbz r11,7(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825df338
	if (ctx.cr0.eq) goto loc_825DF338;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// mulli r5,r11,40
	ctx.r5.s64 = ctx.r11.s64 * 40;
	// bl 0x825e0bc8
	ctx.lr = 0x825DF338;
	sub_825E0BC8(ctx, base);
loc_825DF338:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x825e0bc8
	ctx.lr = 0x825DF350;
	sub_825E0BC8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e0bc8
	ctx.lr = 0x825DF364;
	sub_825E0BC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DF380"))) PPC_WEAK_FUNC(sub_825DF380);
PPC_FUNC_IMPL(__imp__sub_825DF380) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// blt cr6,0x825df3a8
	if (ctx.cr6.lt) goto loc_825DF3A8;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x825df3a8
	if (ctx.cr6.gt) goto loc_825DF3A8;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// blr 
	return;
loc_825DF3A8:
	// lbz r9,7(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// li r8,1
	ctx.r8.s64 = 1;
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// slw r11,r8,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ori r8,r11,1
	ctx.r8.u64 = ctx.r11.u64 | 1;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// twllei r8,0
	// lfd f13,4080(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4080);
	// fadd f13,f0,f13
	ctx.f13.f64 = ctx.f0.f64 + ctx.f13.f64;
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// divwu r9,r11,r8
	ctx.r9.u32 = ctx.r11.u32 / ctx.r8.u32;
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// mulli r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 * 40;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_825DF404:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x825df430
	if (!ctx.cr6.eq) goto loc_825DF430;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x825df448
	if (ctx.cr6.eq) goto loc_825DF448;
loc_825DF430:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825df404
	if (!ctx.cr0.eq) goto loc_825DF404;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-26264
	ctx.r3.s64 = ctx.r11.s64 + -26264;
	// blr 
	return;
loc_825DF448:
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DF450"))) PPC_WEAK_FUNC(sub_825DF450);
PPC_FUNC_IMPL(__imp__sub_825DF450) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,7(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// mulli r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 * 40;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_825DF474:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x825df48c
	if (!ctx.cr6.eq) goto loc_825DF48C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x825df4a4
	if (ctx.cr6.eq) goto loc_825DF4A4;
loc_825DF48C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825df474
	if (!ctx.cr0.eq) goto loc_825DF474;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-26264
	ctx.r3.s64 = ctx.r11.s64 + -26264;
	// blr 
	return;
loc_825DF4A4:
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DF4B0"))) PPC_WEAK_FUNC(sub_825DF4B0);
PPC_FUNC_IMPL(__imp__sub_825DF4B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x825df4e8
	if (ctx.cr6.eq) goto loc_825DF4E8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x825df51c
	if (!ctx.cr6.eq) goto loc_825DF51C;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825df450
	ctx.lr = 0x825DF4E4;
	sub_825DF450(ctx, base);
	// b 0x825df558
	goto loc_825DF558;
loc_825DF4E8:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfd f0,8(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x825df51c
	if (!ctx.cr6.eq) goto loc_825DF51C;
	// bl 0x825df380
	ctx.lr = 0x825DF518;
	sub_825DF380(ctx, base);
	// b 0x825df558
	goto loc_825DF558;
loc_825DF51C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825df550
	if (ctx.cr6.eq) goto loc_825DF550;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825dee60
	ctx.lr = 0x825DF52C;
	sub_825DEE60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_825DF530:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825de1c0
	ctx.lr = 0x825DF53C;
	sub_825DE1C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825df570
	if (!ctx.cr0.eq) goto loc_825DF570;
	// lwz r30,32(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x825df530
	if (!ctx.cr0.eq) goto loc_825DF530;
loc_825DF550:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-26264
	ctx.r3.s64 = ctx.r11.s64 + -26264;
loc_825DF558:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_825DF570:
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// b 0x825df558
	goto loc_825DF558;
}

__attribute__((alias("__imp__sub_825DF578"))) PPC_WEAK_FUNC(sub_825DF578);
PPC_FUNC_IMPL(__imp__sub_825DF578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825DF580;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825df4b0
	ctx.lr = 0x825DF59C;
	sub_825DF4B0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-26264
	ctx.r11.s64 = ctx.r11.s64 + -26264;
	// stb r10,6(r30)
	PPC_STORE_U8(ctx.r30.u32 + 6, ctx.r10.u8);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825df600
	if (!ctx.cr6.eq) goto loc_825DF600;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825df5cc
	if (!ctx.cr0.eq) goto loc_825DF5CC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-25932
	ctx.r4.s64 = ctx.r11.s64 + -25932;
	// b 0x825df5e8
	goto loc_825DF5E8;
loc_825DF5CC:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825df5f0
	if (!ctx.cr6.eq) goto loc_825DF5F0;
	// lfd f0,8(r29)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// fcmpu cr6,f0,f0
	ctx.cr6.compare(ctx.f0.f64, ctx.f0.f64);
	// beq cr6,0x825df5f0
	if (ctx.cr6.eq) goto loc_825DF5F0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-25952
	ctx.r4.s64 = ctx.r11.s64 + -25952;
loc_825DF5E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e04f8
	ctx.lr = 0x825DF5F0;
	sub_825E04F8(ctx, base);
loc_825DF5F0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825df9a8
	ctx.lr = 0x825DF600;
	sub_825DF9A8(ctx, base);
loc_825DF600:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DF608"))) PPC_WEAK_FUNC(sub_825DF608);
PPC_FUNC_IMPL(__imp__sub_825DF608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825DF610;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825df634
	if (!ctx.cr0.eq) goto loc_825DF634;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x825df6e8
	goto loc_825DF6E8;
loc_825DF634:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825df67c
	if (!ctx.cr6.eq) goto loc_825DF67C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfd f0,8(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f13.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x825df67c
	if (!ctx.cr6.eq) goto loc_825DF67C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x825df67c
	if (ctx.cr6.lt) goto loc_825DF67C;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// rlwinm. r10,r10,0,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825df680
	if (ctx.cr0.eq) goto loc_825DF680;
loc_825DF67C:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_825DF680:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x825df69c
	if (ctx.cr6.lt) goto loc_825DF69C;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x825df69c
	if (ctx.cr6.gt) goto loc_825DF69C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x825df6e8
	goto loc_825DF6E8;
loc_825DF69C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825df4b0
	ctx.lr = 0x825DF6A8;
	sub_825DF4B0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-26264
	ctx.r11.s64 = ctx.r11.s64 + -26264;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825df6cc
	if (!ctx.cr6.eq) goto loc_825DF6CC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-25912
	ctx.r4.s64 = ctx.r11.s64 + -25912;
	// bl 0x825e04f8
	ctx.lr = 0x825DF6CC;
	sub_825E04F8(ctx, base);
loc_825DF6CC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r9,40
	ctx.r9.s64 = 40;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// divwu r11,r11,r9
	ctx.r11.u32 = ctx.r11.u32 / ctx.r9.u32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_825DF6E8:
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x825df720
	if (!ctx.cr6.lt) goto loc_825DF720;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_825DF704:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x825df770
	if (!ctx.cr6.eq) goto loc_825DF770;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825df704
	if (ctx.cr6.lt) goto loc_825DF704;
loc_825DF720:
	// lbz r10,7(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// li r8,1
	ctx.r8.s64 = 1;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// slw r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x825df764
	if (!ctx.cr6.lt) goto loc_825DF764;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 * 40;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
loc_825DF748:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x825df7b4
	if (!ctx.cr6.eq) goto loc_825DF7B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,40
	ctx.r9.s64 = ctx.r9.s64 + 40;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x825df748
	if (ctx.cr6.lt) goto loc_825DF748;
loc_825DF764:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825DF768:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_825DF770:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// li r9,3
	ctx.r9.s64 = 3;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.f0.u64);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
loc_825DF7A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,24(r30)
	PPC_STORE_U64(ctx.r30.u32 + 24, ctx.r11.u64);
	// b 0x825df768
	goto loc_825DF768;
loc_825DF7B4:
	// mulli r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 * 40;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r10,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r10.u64);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// b 0x825df7a8
	goto loc_825DF7A8;
}

__attribute__((alias("__imp__sub_825DF7E8"))) PPC_WEAK_FUNC(sub_825DF7E8);
PPC_FUNC_IMPL(__imp__sub_825DF7E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b4
	ctx.lr = 0x825DF7F0;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r23,7(r31)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// lwz r25,28(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi r23,0
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq 0x825df820
	if (ctx.cr0.eq) goto loc_825DF820;
	// lwz r24,16(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// b 0x825df858
	goto loc_825DF858;
loc_825DF820:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_825DF830:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x825df830
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825DF830;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// addi r24,r1,80
	ctx.r24.s64 = ctx.r1.s64 + 80;
	// stw r29,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r29.u32);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// stw r29,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r29.u32);
loc_825DF858:
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x825df8a8
	if (!ctx.cr6.gt) goto loc_825DF8A8;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r6,r30,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x825e0bc8
	ctx.lr = 0x825DF878;
	sub_825E0BC8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x825df8a4
	if (!ctx.cr6.lt) goto loc_825DF8A4;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
loc_825DF890:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r29,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r29.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x825df890
	if (!ctx.cr0.eq) goto loc_825DF890;
loc_825DF8A4:
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_825DF8A8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825df168
	ctx.lr = 0x825DF8B8;
	sub_825DF168(ctx, base);
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x825df92c
	if (!ctx.cr6.lt) goto loc_825DF92C;
	// rlwinm r27,r30,4,0,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_825DF8D0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825df904
	if (ctx.cr6.eq) goto loc_825DF904;
	// addi r5,r29,1
	ctx.r5.s64 = ctx.r29.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825dfaf0
	ctx.lr = 0x825DF8F4;
	sub_825DFAF0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
loc_825DF904:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x825df8d0
	if (ctx.cr6.lt) goto loc_825DF8D0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r5,r25,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825e0bc8
	ctx.lr = 0x825DF928;
	sub_825E0BC8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_825DF92C:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r28,r11,r23
	ctx.r28.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r23.u8 & 0x3F));
	// addic. r29,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r29.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x825df980
	if (ctx.cr0.lt) goto loc_825DF980;
	// mulli r11,r29,40
	ctx.r11.s64 = ctx.r29.s64 * 40;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
loc_825DF948:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825df974
	if (ctx.cr6.eq) goto loc_825DF974;
	// addi r5,r30,-16
	ctx.r5.s64 = ctx.r30.s64 + -16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825df578
	ctx.lr = 0x825DF964;
	sub_825DF578(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
loc_825DF974:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,-40
	ctx.r30.s64 = ctx.r30.s64 + -40;
	// bge 0x825df948
	if (!ctx.cr0.lt) goto loc_825DF948;
loc_825DF980:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x825df99c
	if (ctx.cr6.eq) goto loc_825DF99C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mulli r5,r28,40
	ctx.r5.s64 = ctx.r28.s64 * 40;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825e0bc8
	ctx.lr = 0x825DF99C;
	sub_825E0BC8(ctx, base);
loc_825DF99C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DF9A8"))) PPC_WEAK_FUNC(sub_825DF9A8);
PPC_FUNC_IMPL(__imp__sub_825DF9A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825DF9B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825dee60
	ctx.lr = 0x825DF9CC;
	sub_825DEE60(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825dfa0c
	if (ctx.cr6.eq) goto loc_825DFA0C;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825dee60
	ctx.lr = 0x825DF9EC;
	sub_825DEE60(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r3,r6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x825dfa60
	if (!ctx.cr6.eq) goto loc_825DFA60;
	// addi r10,r6,32
	ctx.r10.s64 = ctx.r6.s64 + 32;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_825DFA0C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r11,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r11.u64);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825dfa54
	if (ctx.cr6.eq) goto loc_825DFA54;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_825DFA30:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825dfa9c
	if (ctx.cr6.eq) goto loc_825DFA9C;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825dfa30
	if (!ctx.cr6.eq) goto loc_825DFA30;
loc_825DFA54:
	// addi r3,r6,16
	ctx.r3.s64 = ctx.r6.s64 + 16;
	// b 0x825dfae8
	goto loc_825DFAE8;
loc_825DFA5C:
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
loc_825DFA60:
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x825dfa5c
	if (!ctx.cr6.eq) goto loc_825DFA5C;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_825DFA7C:
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x825dfa7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825DFA7C;
	// stw r29,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r29.u32);
	// stw r29,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r29.u32);
	// b 0x825dfa0c
	goto loc_825DFA0C;
loc_825DFA9C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// bl 0x825def40
	ctx.lr = 0x825DFAB8;
	sub_825DEF40(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825de128
	ctx.lr = 0x825DFAC0;
	sub_825DE128(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x825df7e8
	ctx.lr = 0x825DFAD8;
	sub_825DF7E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825df4b0
	ctx.lr = 0x825DFAE4;
	sub_825DF4B0(ctx, base);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
loc_825DFAE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DFAF0"))) PPC_WEAK_FUNC(sub_825DFAF0);
PPC_FUNC_IMPL(__imp__sub_825DFAF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x825df380
	ctx.lr = 0x825DFB10;
	sub_825DF380(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-26264
	ctx.r11.s64 = ctx.r11.s64 + -26264;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825dfb4c
	if (!ctx.cr6.eq) goto loc_825DFB4C;
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// bl 0x825df9a8
	ctx.lr = 0x825DFB4C;
	sub_825DF9A8(ctx, base);
loc_825DFB4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DFB60"))) PPC_WEAK_FUNC(sub_825DFB60);
PPC_FUNC_IMPL(__imp__sub_825DFB60) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DFB8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825dfbbc
	if (ctx.cr0.eq) goto loc_825DFBBC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825dfbbc
	if (ctx.cr6.eq) goto loc_825DFBBC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lbz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x825dfbc0
	goto loc_825DFBC0;
loc_825DFBBC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_825DFBC0:
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

__attribute__((alias("__imp__sub_825DFBD8"))) PPC_WEAK_FUNC(sub_825DFBD8);
PPC_FUNC_IMPL(__imp__sub_825DFBD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825dfc1c
	if (!ctx.cr6.eq) goto loc_825DFC1C;
	// bl 0x825dfb60
	ctx.lr = 0x825DFBFC;
	sub_825DFB60(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x825dfc24
	if (ctx.cr6.eq) goto loc_825DFC24;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_825DFC1C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
loc_825DFC24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DFC38"))) PPC_WEAK_FUNC(sub_825DFC38);
PPC_FUNC_IMPL(__imp__sub_825DFC38) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DFC58"))) PPC_WEAK_FUNC(sub_825DFC58);
PPC_FUNC_IMPL(__imp__sub_825DFC58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825DFC60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825dfcf0
	if (ctx.cr6.eq) goto loc_825DFCF0;
loc_825DFC78:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825dfcac
	if (!ctx.cr6.eq) goto loc_825DFCAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825dfb60
	ctx.lr = 0x825DFC8C;
	sub_825DFB60(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x825dfcfc
	if (ctx.cr6.eq) goto loc_825DFCFC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_825DFCAC:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x825dfcbc
	if (ctx.cr6.gt) goto loc_825DFCBC;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_825DFCBC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826df680
	ctx.lr = 0x825DFCCC;
	sub_826DF680(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf. r29,r30,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r28,r30,r28
	ctx.r28.u64 = ctx.r30.u64 + ctx.r28.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x825dfc78
	if (!ctx.cr0.eq) goto loc_825DFC78;
loc_825DFCF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825DFCF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_825DFCFC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x825dfcf4
	goto loc_825DFCF4;
}

__attribute__((alias("__imp__sub_825DFD08"))) PPC_WEAK_FUNC(sub_825DFD08);
PPC_FUNC_IMPL(__imp__sub_825DFD08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x825dfd50
	if (!ctx.cr6.gt) goto loc_825DFD50;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// bge cr6,0x825dfd3c
	if (!ctx.cr6.lt) goto loc_825DFD3C;
	// li r30,32
	ctx.r30.s64 = 32;
loc_825DFD3C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825e0bc8
	ctx.lr = 0x825DFD48;
	sub_825E0BC8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_825DFD50:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DFD70"))) PPC_WEAK_FUNC(sub_825DFD70);
PPC_FUNC_IMPL(__imp__sub_825DFD70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x825dfd9c
	goto loc_825DFD9C;
loc_825DFD78:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825dfd98
	if (!ctx.cr0.eq) goto loc_825DFD98;
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825dfd98
	if (ctx.cr0.eq) goto loc_825DFD98;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_825DFD98:
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
loc_825DFD9C:
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825dfd78
	if (!ctx.cr6.eq) goto loc_825DFD78;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,50(r3)
	PPC_STORE_U8(ctx.r3.u32 + 50, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DFDB8"))) PPC_WEAK_FUNC(sub_825DFDB8);
PPC_FUNC_IMPL(__imp__sub_825DFDB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x825dfdfc
	if (!ctx.cr6.gt) goto loc_825DFDFC;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
loc_825DFDC8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825dfdf4
	if (!ctx.cr6.gt) goto loc_825DFDF4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825dfde8
	if (!ctx.cr0.eq) goto loc_825DFDE8;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// subf r4,r9,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r9.s64;
loc_825DFDE8:
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bgt cr6,0x825dfdc8
	if (ctx.cr6.gt) goto loc_825DFDC8;
loc_825DFDF4:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bgt cr6,0x825dfe30
	if (ctx.cr6.gt) goto loc_825DFE30;
loc_825DFDFC:
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825dfe30
	if (ctx.cr6.eq) goto loc_825DFE30;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bge cr6,0x825dfe20
	if (!ctx.cr6.lt) goto loc_825DFE20;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825DFE18:
	// stw r11,92(r5)
	PPC_STORE_U32(ctx.r5.u32 + 92, ctx.r11.u32);
	// blr 
	return;
loc_825DFE20:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r10,24
	ctx.r10.s64 = 24;
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
	// b 0x825dfe18
	goto loc_825DFE18;
loc_825DFE30:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DFE38"))) PPC_WEAK_FUNC(sub_825DFE38);
PPC_FUNC_IMPL(__imp__sub_825DFE38) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b8
	ctx.lr = 0x825DFE40;
	__savegprlr_24(ctx, base);
	// lwz r27,44(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lbz r28,71(r3)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r3.u32 + 71);
	// addi r25,r27,-1
	ctx.r25.s64 = ctx.r27.s64 + -1;
	// cmplwi cr6,r28,250
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 250, ctx.xer);
	// bgt cr6,0x825dfe84
	if (ctx.cr6.gt) goto loc_825DFE84;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x825dfe68
	if (ctx.cr6.eq) goto loc_825DFE68;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825dfe84
	if (!ctx.cr6.eq) goto loc_825DFE84;
loc_825DFE68:
	// lwz r26,12(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// beq cr6,0x825dfe8c
	if (ctx.cr6.eq) goto loc_825DFE8C;
loc_825DFE84:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825e01c4
	goto loc_825E01C4;
loc_825DFE8C:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x825e01bc
	if (!ctx.cr6.gt) goto loc_825E01BC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r24,r11,-24064
	ctx.r24.s64 = ctx.r11.s64 + -24064;
loc_825DFEA0:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r30,r11,r26
	ctx.r30.u64 = ctx.r11.u64 + ctx.r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r8,r11,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// clrlwi r31,r11,26
	ctx.r31.u64 = ctx.r11.u32 & 0x3F;
	// cmpw cr6,r8,r28
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x825dfe84
	if (!ctx.cr6.lt) goto loc_825DFE84;
	// lbzx r7,r31,r24
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r24.u32);
	// clrlwi r9,r7,30
	ctx.r9.u64 = ctx.r7.u32 & 0x3;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x825dff08
	if (ctx.cr6.lt) goto loc_825DFF08;
	// beq cr6,0x825dfef0
	if (ctx.cr6.eq) goto loc_825DFEF0;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bge cr6,0x825dff70
	if (!ctx.cr6.lt) goto loc_825DFF70;
	// rlwinm r11,r11,26,14,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFF;
	// addis r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -131072;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x825dff70
	goto loc_825DFF70;
loc_825DFEF0:
	// rlwinm. r9,r7,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r10,r11,26,14,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFF;
	// beq 0x825dff70
	if (ctx.cr0.eq) goto loc_825DFF70;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// b 0x825dff6c
	goto loc_825DFF6C;
loc_825DFF08:
	// rlwinm. r9,r7,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r10,r11,17,23,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1FF;
	// rlwinm r6,r11,26,23,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1FF;
	// beq 0x825dff20
	if (ctx.cr0.eq) goto loc_825DFF20;
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// b 0x825dff44
	goto loc_825DFF44;
loc_825DFF20:
	// rlwinm. r11,r7,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825dff48
	if (ctx.cr0.eq) goto loc_825DFF48;
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x825dff48
	if (ctx.cr6.lt) goto loc_825DFF48;
	// cmpwi cr6,r10,250
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 250, ctx.xer);
	// blt cr6,0x825dfe84
	if (ctx.cr6.lt) goto loc_825DFE84;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r9,r10,-250
	ctx.r9.s64 = ctx.r10.s64 + -250;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
loc_825DFF44:
	// bge cr6,0x825dfe84
	if (!ctx.cr6.lt) goto loc_825DFE84;
loc_825DFF48:
	// rlwinm. r11,r7,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825dff70
	if (ctx.cr0.eq) goto loc_825DFF70;
	// cmpw cr6,r6,r28
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x825dff70
	if (ctx.cr6.lt) goto loc_825DFF70;
	// cmpwi cr6,r6,250
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 250, ctx.xer);
	// blt cr6,0x825dfe84
	if (ctx.cr6.lt) goto loc_825DFE84;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r9,r6,-250
	ctx.r9.s64 = ctx.r6.s64 + -250;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
loc_825DFF6C:
	// bge cr6,0x825dfe84
	if (!ctx.cr6.lt) goto loc_825DFE84;
loc_825DFF70:
	// rlwinm. r11,r7,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825dff84
	if (ctx.cr0.eq) goto loc_825DFF84;
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x825dff84
	if (!ctx.cr6.eq) goto loc_825DFF84;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
loc_825DFF84:
	// rlwinm. r11,r7,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825dffa8
	if (ctx.cr0.eq) goto loc_825DFFA8;
	// addi r11,r29,2
	ctx.r11.s64 = ctx.r29.s64 + 2;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x825dfe84
	if (!ctx.cr6.lt) goto loc_825DFE84;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x825dfe84
	if (!ctx.cr6.eq) goto loc_825DFE84;
loc_825DFFA8:
	// addi r11,r31,-2
	ctx.r11.s64 = ctx.r31.s64 + -2;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bgt cr6,0x825e01b0
	if (ctx.cr6.gt) goto loc_825E01B0;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,-25848
	ctx.r12.s64 = ctx.r12.s64 + -25848;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32162
	ctx.r12.s64 = -2107768832;
	// addi r12,r12,-36
	ctx.r12.s64 = ctx.r12.s64 + -36;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_825DFFDC;
	case 1:
		goto loc_825DFFF4;
	case 2:
		goto loc_825E000C;
	case 3:
		goto loc_825E0018;
	case 4:
		goto loc_825E01B0;
	case 5:
		goto loc_825E0018;
	case 6:
		goto loc_825E000C;
	case 7:
		goto loc_825E01B0;
	case 8:
		goto loc_825E01B0;
	case 9:
		goto loc_825E0030;
	case 10:
		goto loc_825E01B0;
	case 11:
		goto loc_825E01B0;
	case 12:
		goto loc_825E01B0;
	case 13:
		goto loc_825E01B0;
	case 14:
		goto loc_825E01B0;
	case 15:
		goto loc_825E01B0;
	case 16:
		goto loc_825E01B0;
	case 17:
		goto loc_825E0048;
	case 18:
		goto loc_825E0080;
	case 19:
		goto loc_825E01B0;
	case 20:
		goto loc_825E01B0;
	case 21:
		goto loc_825E01B0;
	case 22:
		goto loc_825E01B0;
	case 23:
		goto loc_825E00B4;
	case 24:
		goto loc_825E00B4;
	case 25:
		goto loc_825E012C;
	case 26:
		goto loc_825E0074;
	case 27:
		goto loc_825E0058;
	case 28:
		goto loc_825E01B0;
	case 29:
		goto loc_825E0144;
	case 30:
		goto loc_825E01B0;
	case 31:
		goto loc_825E01B0;
	case 32:
		goto loc_825E0154;
	default:
		__builtin_unreachable();
	}
loc_825DFFDC:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x825e01b0
	if (ctx.cr6.eq) goto loc_825E01B0;
	// addi r11,r29,2
	ctx.r11.s64 = ctx.r29.s64 + 2;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
loc_825DFFEC:
	// bge cr6,0x825dfe84
	if (!ctx.cr6.lt) goto loc_825DFE84;
	// b 0x825e01b0
	goto loc_825E01B0;
loc_825DFFF4:
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x825e01b0
	if (ctx.cr6.gt) goto loc_825E01B0;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x825e01b0
	if (ctx.cr6.gt) goto loc_825E01B0;
loc_825E0004:
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// b 0x825e01b0
	goto loc_825E01B0;
loc_825E000C:
	// lbz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 68);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// b 0x825dffec
	goto loc_825DFFEC;
loc_825E0018:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x825dfe84
	if (!ctx.cr6.eq) goto loc_825DFE84;
	// b 0x825e01b0
	goto loc_825E01B0;
loc_825E0030:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x825dfe84
	if (!ctx.cr6.lt) goto loc_825DFE84;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x825e01b0
	if (!ctx.cr6.eq) goto loc_825E01B0;
	// b 0x825e0004
	goto loc_825E0004;
loc_825E0048:
	// cmpwi cr6,r6,250
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 250, ctx.xer);
	// bge cr6,0x825dfe84
	if (!ctx.cr6.lt) goto loc_825DFE84;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// b 0x825dffec
	goto loc_825DFFEC;
loc_825E0058:
	// add r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x825dfe84
	if (!ctx.cr6.lt) goto loc_825DFE84;
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x825e0074
	if (ctx.cr6.lt) goto loc_825E0074;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
loc_825E0074:
	// addi r11,r8,2
	ctx.r11.s64 = ctx.r8.s64 + 2;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x825dfe84
	if (!ctx.cr6.lt) goto loc_825DFE84;
loc_825E0080:
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addic. r11,r10,1
	ctx.xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r11.s64 = ctx.r10.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x825dfe84
	if (ctx.cr0.lt) goto loc_825DFE84;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x825dfe84
	if (!ctx.cr6.lt) goto loc_825DFE84;
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// beq cr6,0x825e01b0
	if (ctx.cr6.eq) goto loc_825E01B0;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x825e01b0
	if (!ctx.cr6.lt) goto loc_825E01B0;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bgt cr6,0x825e01b0
	if (ctx.cr6.gt) goto loc_825E01B0;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// b 0x825e01b0
	goto loc_825E01B0;
loc_825E00B4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825e00cc
	if (ctx.cr6.eq) goto loc_825E00CC;
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x825dfe84
	if (!ctx.cr6.lt) goto loc_825DFE84;
loc_825E00CC:
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x825e0108
	if (!ctx.cr6.eq) goto loc_825E0108;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r11,r10,26
	ctx.r11.u64 = ctx.r10.u32 & 0x3F;
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// blt cr6,0x825dfe84
	if (ctx.cr6.lt) goto loc_825DFE84;
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// ble cr6,0x825e00fc
	if (!ctx.cr6.gt) goto loc_825E00FC;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x825dfe84
	if (!ctx.cr6.eq) goto loc_825DFE84;
	// b 0x825e0120
	goto loc_825E0120;
loc_825E00FC:
	// rlwinm. r11,r10,0,8,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825dfe84
	if (!ctx.cr0.eq) goto loc_825DFE84;
	// b 0x825e0120
	goto loc_825E0120;
loc_825E0108:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825e0120
	if (ctx.cr6.eq) goto loc_825E0120;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x825dfe84
	if (!ctx.cr6.lt) goto loc_825DFE84;
loc_825E0120:
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x825e01b0
	if (ctx.cr6.lt) goto loc_825E01B0;
	// b 0x825e0004
	goto loc_825E0004;
loc_825E012C:
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x825e01b0
	if (!ctx.cr0.gt) goto loc_825E01B0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_825E013C:
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// b 0x825dffec
	goto loc_825DFFEC;
loc_825E0144:
	// clrlwi r11,r10,27
	ctx.r11.u64 = ctx.r10.u32 & 0x1F;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x825e013c
	goto loc_825E013C;
loc_825E0154:
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x825dfe84
	if (!ctx.cr6.lt) goto loc_825DFE84;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lbz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 68);
	// add r11,r10,r29
	ctx.r11.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x825dfe84
	if (!ctx.cr6.lt) goto loc_825DFE84;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x825e01b0
	if (!ctx.cr6.gt) goto loc_825E01B0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
loc_825E018C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// beq cr6,0x825e01a4
	if (ctx.cr6.eq) goto loc_825E01A4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x825dfe84
	if (!ctx.cr6.eq) goto loc_825DFE84;
loc_825E01A4:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bgt 0x825e018c
	if (ctx.cr0.gt) goto loc_825E018C;
loc_825E01B0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x825dfea0
	if (ctx.cr6.lt) goto loc_825DFEA0;
loc_825E01BC:
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
loc_825E01C4:
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E01C8"))) PPC_WEAK_FUNC(sub_825E01C8);
PPC_FUNC_IMPL(__imp__sub_825E01C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,44(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r5,255
	ctx.r5.s64 = 255;
	// b 0x825dfe38
	sub_825DFE38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E01D8"))) PPC_WEAK_FUNC(sub_825E01D8);
PPC_FUNC_IMPL(__imp__sub_825E01D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x825E01E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e02a0
	if (!ctx.cr0.eq) goto loc_825E02A0;
loc_825E01FC:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r31,12(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825e021c
	if (ctx.cr0.eq) goto loc_825E021C;
	// li r30,-1
	ctx.r30.s64 = -1;
	// b 0x825e024c
	goto loc_825E024C;
loc_825E021C:
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825e0230
	if (ctx.cr0.eq) goto loc_825E0230;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
loc_825E0230:
	// lwz r11,-8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
loc_825E024C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r28,1
	ctx.r4.s64 = ctx.r28.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825dee00
	ctx.lr = 0x825E025C;
	sub_825DEE00(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// bne 0x825e02ac
	if (!ctx.cr0.eq) goto loc_825E02AC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825dfe38
	ctx.lr = 0x825E0278;
	sub_825DFE38(ctx, base);
	// clrlwi. r11,r3,26
	ctx.r11.u64 = ctx.r3.u32 & 0x3F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e02b8
	if (!ctx.cr0.eq) goto loc_825E02B8;
	// rlwinm r11,r3,17,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 17) & 0x1FF;
	// rlwinm r10,r3,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x825e02a0
	if (!ctx.cr6.lt) goto loc_825E02A0;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e01fc
	if (ctx.cr0.eq) goto loc_825E01FC;
loc_825E02A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825E02A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_825E02AC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-25796
	ctx.r3.s64 = ctx.r11.s64 + -25796;
	// b 0x825e02a4
	goto loc_825E02A4;
loc_825E02B8:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x825e0358
	if (ctx.cr6.eq) goto loc_825E0358;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x825e0314
	if (ctx.cr6.eq) goto loc_825E0314;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x825e02a0
	if (!ctx.cr6.eq) goto loc_825E02A0;
	// rlwinm r11,r3,26,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0x1FF;
	// addic. r11,r11,-250
	ctx.xer.ca = ctx.r11.u32 > 249;
	ctx.r11.s64 = ctx.r11.s64 + -250;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x825e0300
	if (ctx.cr0.lt) goto loc_825E0300;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x825e0300
	if (!ctx.cr6.eq) goto loc_825E0300;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// b 0x825e0308
	goto loc_825E0308;
loc_825E0300:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-29256
	ctx.r11.s64 = ctx.r11.s64 + -29256;
loc_825E0308:
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r3,r10,-29108
	ctx.r3.s64 = ctx.r10.s64 + -29108;
	// b 0x825e0374
	goto loc_825E0374;
loc_825E0314:
	// rlwinm r11,r3,26,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0x1FF;
	// addic. r11,r11,-250
	ctx.xer.ca = ctx.r11.u32 > 249;
	ctx.r11.s64 = ctx.r11.s64 + -250;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x825e0344
	if (ctx.cr0.lt) goto loc_825E0344;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x825e0344
	if (!ctx.cr6.eq) goto loc_825E0344;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// b 0x825e034c
	goto loc_825E034C;
loc_825E0344:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-29256
	ctx.r11.s64 = ctx.r11.s64 + -29256;
loc_825E034C:
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r3,r10,-25804
	ctx.r3.s64 = ctx.r10.s64 + -25804;
	// b 0x825e0374
	goto loc_825E0374;
loc_825E0358:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r3,30,10,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFF0;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r9,-25812
	ctx.r3.s64 = ctx.r9.s64 + -25812;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_825E0374:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x825e02a4
	goto loc_825E02A4;
}

__attribute__((alias("__imp__sub_825E0380"))) PPC_WEAK_FUNC(sub_825E0380);
PPC_FUNC_IMPL(__imp__sub_825E0380) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e039c
	if (!ctx.cr0.eq) goto loc_825E039C;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x825e03a8
	if (ctx.cr6.gt) goto loc_825E03A8;
loc_825E039C:
	// lwz r11,-16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e03b0
	if (ctx.cr0.eq) goto loc_825E03B0;
loc_825E03A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825E03B0:
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825e03c8
	if (ctx.cr0.eq) goto loc_825E03C8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x825e03fc
	goto loc_825E03FC;
loc_825E03C8:
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e03dc
	if (ctx.cr0.eq) goto loc_825E03DC;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_825E03DC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,-8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_825E03FC:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,-8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// cmpwi cr6,r10,25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 25, ctx.xer);
	// beq cr6,0x825e0428
	if (ctx.cr6.eq) goto loc_825E0428;
	// cmpwi cr6,r10,26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 26, ctx.xer);
	// bne cr6,0x825e03a8
	if (!ctx.cr6.eq) goto loc_825E03A8;
loc_825E0428:
	// rlwinm r4,r11,8,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// b 0x825e01d8
	sub_825E01D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E0430"))) PPC_WEAK_FUNC(sub_825E0430);
PPC_FUNC_IMPL(__imp__sub_825E0430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e04d4
	if (ctx.cr0.eq) goto loc_825E04D4;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x825e0470
	if (ctx.cr6.eq) goto loc_825E0470;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x825d9788
	ctx.lr = 0x825E0470;
	sub_825D9788(ctx, base);
loc_825E0470:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// ld r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + -8);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r10.u32);
	// ld r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r10,-8(r11)
	PPC_STORE_U64(ctx.r11.u32 + -8, ctx.r10.u64);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x825e04b8
	if (ctx.cr6.gt) goto loc_825E04B8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d99b8
	ctx.lr = 0x825E04B8;
	sub_825D99B8(ctx, base);
loc_825E04B8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x825da070
	ctx.lr = 0x825E04D4;
	sub_825DA070(ctx, base);
loc_825E04D4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d9788
	ctx.lr = 0x825E04E0;
	sub_825D9788(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E04F8"))) PPC_WEAK_FUNC(sub_825E04F8);
PPC_FUNC_IMPL(__imp__sub_825E04F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825E0500;
	__savegprlr_29(ctx, base);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825de358
	ctx.lr = 0x825E0534;
	sub_825DE358(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825e05d4
	if (!ctx.cr0.eq) goto loc_825E05D4;
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825e055c
	if (ctx.cr0.eq) goto loc_825E055C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_825E055C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,-8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x825e0588
	if (!ctx.cr0.lt) goto loc_825E0588;
	// li r31,-1
	ctx.r31.s64 = -1;
	// b 0x825e05a4
	goto loc_825E05A4;
loc_825E0588:
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x825e05a0
	if (ctx.cr0.eq) goto loc_825E05A0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// b 0x825e05a4
	goto loc_825E05A4;
loc_825E05A0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_825E05A4:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x825de580
	ctx.lr = 0x825E05B8;
	sub_825DE580(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r4,r11,-25788
	ctx.r4.s64 = ctx.r11.s64 + -25788;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825de538
	ctx.lr = 0x825E05D4;
	sub_825DE538(ctx, base);
loc_825E05D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e0430
	ctx.lr = 0x825E05DC;
	sub_825E0430(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E05E8"))) PPC_WEAK_FUNC(sub_825E05E8);
PPC_FUNC_IMPL(__imp__sub_825E05E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de898
	ctx.lr = 0x825E05F0;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lbz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 0);
	// li r16,1
	ctx.r16.s64 = 1;
	// extsb. r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825e0830
	if (ctx.cr0.eq) goto loc_825E0830;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r22,r11,-25880
	ctx.r22.s64 = ctx.r11.s64 + -25880;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r21,r11,12308
	ctx.r21.s64 = ctx.r11.s64 + 12308;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r24,r11,-16180
	ctx.r24.s64 = ctx.r11.s64 + -16180;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r23,r11,-25876
	ctx.r23.s64 = ctx.r11.s64 + -25876;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r20,r11,5020
	ctx.r20.s64 = ctx.r11.s64 + 5020;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r19,r11,-25812
	ctx.r19.s64 = ctx.r11.s64 + -25812;
loc_825E0648:
	// cmpwi cr6,r10,83
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 83, ctx.xer);
	// beq cr6,0x825e07bc
	if (ctx.cr6.eq) goto loc_825E07BC;
	// cmpwi cr6,r10,102
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 102, ctx.xer);
	// beq cr6,0x825e07a4
	if (ctx.cr6.eq) goto loc_825E07A4;
	// cmpwi cr6,r10,108
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 108, ctx.xer);
	// beq cr6,0x825e072c
	if (ctx.cr6.eq) goto loc_825E072C;
	// cmpwi cr6,r10,110
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 110, ctx.xer);
	// beq cr6,0x825e0688
	if (ctx.cr6.eq) goto loc_825E0688;
	// cmpwi cr6,r10,117
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 117, ctx.xer);
	// beq cr6,0x825e0678
	if (ctx.cr6.eq) goto loc_825E0678;
	// li r16,0
	ctx.r16.s64 = 0;
	// b 0x825e0820
	goto loc_825E0820;
loc_825E0678:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r11,7(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// stw r11,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r11.u32);
	// b 0x825e0820
	goto loc_825E0820;
loc_825E0688:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x825e06a0
	if (ctx.cr6.eq) goto loc_825E06A0;
	// addi r4,r27,4
	ctx.r4.s64 = ctx.r27.s64 + 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x825e0380
	ctx.lr = 0x825E069C;
	sub_825E0380(ctx, base);
	// b 0x825e06a4
	goto loc_825E06A4;
loc_825E06A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825E06A4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r3.u32);
	// bne cr6,0x825e0820
	if (!ctx.cr6.eq) goto loc_825E0820;
	// lwz r28,72(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 72);
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r11,7(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 7);
	// slw. r31,r10,r11
	ctx.r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825e0700
	if (ctx.cr0.eq) goto loc_825E0700;
	// mulli r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 * 40;
loc_825E06C8:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r30,r30,-40
	ctx.r30.s64 = ctx.r30.s64 + -40;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// bl 0x825de1c0
	ctx.lr = 0x825E06E4;
	sub_825DE1C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825e06f8
	if (ctx.cr0.eq) goto loc_825E06F8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x825e0718
	if (ctx.cr6.eq) goto loc_825E0718;
loc_825E06F8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x825e06c8
	if (!ctx.cr6.eq) goto loc_825E06C8;
loc_825E0700:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825E0704:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// beq cr6,0x825e0724
	if (ctx.cr6.eq) goto loc_825E0724;
	// stw r19,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r19.u32);
	// b 0x825e0820
	goto loc_825E0820;
loc_825E0718:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// b 0x825e0704
	goto loc_825E0704;
loc_825E0724:
	// stw r20,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r20.u32);
	// b 0x825e0820
	goto loc_825E0820;
loc_825E072C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x825e0798
	if (ctx.cr6.eq) goto loc_825E0798;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825e0798
	if (!ctx.cr0.eq) goto loc_825E0798;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e0754
	if (ctx.cr0.eq) goto loc_825E0754;
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r11.u32);
loc_825E0754:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// lwz r11,-8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x825e0798
	if (ctx.cr0.lt) goto loc_825E0798;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825e0790
	if (ctx.cr0.eq) goto loc_825E0790;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x825e079c
	goto loc_825E079C;
loc_825E0790:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825e079c
	goto loc_825E079C;
loc_825E0798:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_825E079C:
	// stw r11,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r11.u32);
	// b 0x825e0820
	goto loc_825E0820;
loc_825E07A4:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,8(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// ld r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// b 0x825e0820
	goto loc_825E0820;
loc_825E07BC:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825e07e0
	if (ctx.cr0.eq) goto loc_825E07E0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r24,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r24.u32);
	// stw r23,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r23.u32);
	// stw r11,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r11.u32);
	// b 0x825e0810
	goto loc_825E0810;
loc_825E07E0:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r10,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r10.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r11.u32);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// beq 0x825e080c
	if (ctx.cr0.eq) goto loc_825E080C;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_825E080C:
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
loc_825E0810:
	// li r5,60
	ctx.r5.s64 = 60;
	// lwz r4,16(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r3,r27,32
	ctx.r3.s64 = ctx.r27.s64 + 32;
	// bl 0x825de580
	ctx.lr = 0x825E0820;
	sub_825DE580(ctx, base);
loc_825E0820:
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// lbz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 0);
	// extsb. r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825e0648
	if (!ctx.cr0.eq) goto loc_825E0648;
loc_825E0830:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826de8e8
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E0840"))) PPC_WEAK_FUNC(sub_825E0840);
PPC_FUNC_IMPL(__imp__sub_825E0840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825E0848;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// bne cr6,0x825e08b4
	if (!ctx.cr6.eq) goto loc_825E08B4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r29,r11,-16
	ctx.r29.s64 = ctx.r11.s64 + -16;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x825e0888
	if (ctx.cr6.eq) goto loc_825E0888;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-25776
	ctx.r4.s64 = ctx.r11.s64 + -25776;
	// bl 0x825e04f8
	ctx.lr = 0x825E0888;
	sub_825E04F8(ctx, base);
loc_825E0888:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r28,1
	ctx.r4.s64 = ctx.r28.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e05e8
	ctx.lr = 0x825E08A0;
	sub_825E05E8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// b 0x825e093c
	goto loc_825E093C;
loc_825E08B4:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e08ec
	if (ctx.cr0.eq) goto loc_825E08EC;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r6,r11,-16
	ctx.r6.s64 = ctx.r11.s64 + -16;
	// bl 0x825e05e8
	ctx.lr = 0x825E08E4;
	sub_825E05E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x825e093c
	goto loc_825E093C;
loc_825E08EC:
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r9,-25868
	ctx.r4.s64 = ctx.r9.s64 + -25868;
	// addi r11,r11,5020
	ctx.r11.s64 = ctx.r11.s64 + 5020;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r10,7844
	ctx.r10.s64 = ctx.r10.s64 + 7844;
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// bl 0x825de580
	ctx.lr = 0x825E092C;
	sub_825DE580(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_825E093C:
	// li r4,102
	ctx.r4.s64 = 102;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826e49d0
	ctx.lr = 0x825E0948;
	sub_826E49D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825e097c
	if (ctx.cr0.eq) goto loc_825E097C;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x825e0970
	if (ctx.cr6.gt) goto loc_825E0970;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d99b8
	ctx.lr = 0x825E0970;
	sub_825D99B8(ctx, base);
loc_825E0970:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_825E097C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E0988"))) PPC_WEAK_FUNC(sub_825E0988);
PPC_FUNC_IMPL(__imp__sub_825E0988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825E0990;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-26660
	ctx.r11.s64 = ctx.r11.s64 + -26660;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwzx r29,r10,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x825e09d4
	goto loc_825E09D4;
loc_825E09C8:
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825e09e0
	if (ctx.cr6.eq) goto loc_825E09E0;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_825E09D4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x825e09c8
	if (ctx.cr6.lt) goto loc_825E09C8;
	// b 0x825e09f8
	goto loc_825E09F8;
loc_825E09E0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// srawi r4,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 4;
	// bl 0x825e01d8
	ctx.lr = 0x825E09F4;
	sub_825E01D8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_825E09F8:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x825e0a20
	if (ctx.cr6.eq) goto loc_825E0A20;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// addi r4,r11,-25704
	ctx.r4.s64 = ctx.r11.s64 + -25704;
	// bl 0x825e04f8
	ctx.lr = 0x825E0A1C;
	sub_825E04F8(ctx, base);
	// b 0x825e0a30
	goto loc_825E0A30;
loc_825E0A20:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,-25732
	ctx.r4.s64 = ctx.r11.s64 + -25732;
	// bl 0x825e04f8
	ctx.lr = 0x825E0A30;
	sub_825E04F8(ctx, base);
loc_825E0A30:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E0A38"))) PPC_WEAK_FUNC(sub_825E0A38);
PPC_FUNC_IMPL(__imp__sub_825E0A38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x825e0a48
	if (!ctx.cr6.eq) goto loc_825E0A48;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
loc_825E0A48:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-25668
	ctx.r5.s64 = ctx.r11.s64 + -25668;
	// b 0x825e0988
	sub_825E0988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E0A58"))) PPC_WEAK_FUNC(sub_825E0A58);
PPC_FUNC_IMPL(__imp__sub_825E0A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825E0A60;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x825dc498
	ctx.lr = 0x825E0A7C;
	sub_825DC498(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825e0a88
	if (!ctx.cr0.eq) goto loc_825E0A88;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_825E0A88:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,-25656
	ctx.r5.s64 = ctx.r11.s64 + -25656;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825e0988
	ctx.lr = 0x825E0A9C;
	sub_825E0988(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E0AA8"))) PPC_WEAK_FUNC(sub_825E0AA8);
PPC_FUNC_IMPL(__imp__sub_825E0AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,-26660
	ctx.r11.s64 = ctx.r11.s64 + -26660;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lbz r11,2(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// lbz r10,2(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825e0af4
	if (!ctx.cr6.eq) goto loc_825E0AF4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-25600
	ctx.r4.s64 = ctx.r11.s64 + -25600;
	// bl 0x825e04f8
	ctx.lr = 0x825E0AF0;
	sub_825E04F8(ctx, base);
	// b 0x825e0b00
	goto loc_825E0B00;
loc_825E0AF4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-25632
	ctx.r4.s64 = ctx.r11.s64 + -25632;
	// bl 0x825e04f8
	ctx.lr = 0x825E0B00;
	sub_825E04F8(ctx, base);
loc_825E0B00:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E0B18"))) PPC_WEAK_FUNC(sub_825E0B18);
PPC_FUNC_IMPL(__imp__sub_825E0B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r3,r11,-4068
	ctx.r3.s64 = ctx.r11.s64 + -4068;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E0B28"))) PPC_WEAK_FUNC(sub_825E0B28);
PPC_FUNC_IMPL(__imp__sub_825E0B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// lwz r11,-4068(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4068);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825E0B38"))) PPC_WEAK_FUNC(sub_825E0B38);
PPC_FUNC_IMPL(__imp__sub_825E0B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r11,r11,-4068
	ctx.r11.s64 = ctx.r11.s64 + -4068;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825E0B50"))) PPC_WEAK_FUNC(sub_825E0B50);
PPC_FUNC_IMPL(__imp__sub_825E0B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r11,r11,-4068
	ctx.r11.s64 = ctx.r11.s64 + -4068;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825E0B68"))) PPC_WEAK_FUNC(sub_825E0B68);
PPC_FUNC_IMPL(__imp__sub_825E0B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r11,r11,-4068
	ctx.r11.s64 = ctx.r11.s64 + -4068;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825E0B80"))) PPC_WEAK_FUNC(sub_825E0B80);
PPC_FUNC_IMPL(__imp__sub_825E0B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r11,r11,-4068
	ctx.r11.s64 = ctx.r11.s64 + -4068;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825E0B98"))) PPC_WEAK_FUNC(sub_825E0B98);
PPC_FUNC_IMPL(__imp__sub_825E0B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r11,r11,-4048
	ctx.r11.s64 = ctx.r11.s64 + -4048;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825E0BB0"))) PPC_WEAK_FUNC(sub_825E0BB0);
PPC_FUNC_IMPL(__imp__sub_825E0BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r11,r11,-4048
	ctx.r11.s64 = ctx.r11.s64 + -4048;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825E0BC8"))) PPC_WEAK_FUNC(sub_825E0BC8);
PPC_FUNC_IMPL(__imp__sub_825E0BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825E0BD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825e0c0c
	if (!ctx.cr6.eq) goto loc_825E0C0C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825e0c04
	if (ctx.cr6.eq) goto loc_825E0C04;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825e0b98
	ctx.lr = 0x825E0BFC;
	sub_825E0B98(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x825e0c54
	goto loc_825E0C54;
loc_825E0C04:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825e0c80
	goto loc_825E0C80;
loc_825E0C0C:
	// li r11,-3
	ctx.r11.s64 = -3;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825e0c2c
	if (ctx.cr6.lt) goto loc_825E0C2C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-25564
	ctx.r4.s64 = ctx.r11.s64 + -25564;
	// bl 0x825e04f8
	ctx.lr = 0x825E0C28;
	sub_825E04F8(ctx, base);
	// b 0x825e0c54
	goto loc_825E0C54;
loc_825E0C2C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825e0bb0
	ctx.lr = 0x825E0C38;
	sub_825E0BB0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x825e0c54
	if (!ctx.cr0.eq) goto loc_825E0C54;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825e0c04
	if (ctx.cr6.eq) goto loc_825E0C04;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d9788
	ctx.lr = 0x825E0C54;
	sub_825D9788(ctx, base);
loc_825E0C54:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825e0c7c
	if (ctx.cr6.eq) goto loc_825E0C7C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// subf r10,r28,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r28.s64;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
loc_825E0C7C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_825E0C80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E0C88"))) PPC_WEAK_FUNC(sub_825E0C88);
PPC_FUNC_IMPL(__imp__sub_825E0C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x825E0C90;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// bge cr6,0x825e0cbc
	if (!ctx.cr6.lt) goto loc_825E0CBC;
	// li r31,4
	ctx.r31.s64 = 4;
	// b 0x825e0cec
	goto loc_825E0CEC;
loc_825E0CBC:
	// srawi r10,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x825e0cec
	if (ctx.cr6.lt) goto loc_825E0CEC;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x825e0ce0
	if (!ctx.cr6.lt) goto loc_825E0CE0;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// b 0x825e0cec
	goto loc_825E0CEC;
loc_825E0CE0:
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825e04f8
	ctx.lr = 0x825E0CEC;
	sub_825E04F8(ctx, base);
loc_825E0CEC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mullw r6,r31,r29
	ctx.r6.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r29.s32);
	// mullw r5,r11,r29
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825e0bc8
	ctx.lr = 0x825E0D04;
	sub_825E0BC8(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E0D10"))) PPC_WEAK_FUNC(sub_825E0D10);
PPC_FUNC_IMPL(__imp__sub_825E0D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,287
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 287, ctx.xer);
	// beq cr6,0x825e0d58
	if (ctx.cr6.eq) goto loc_825E0D58;
	// ld r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// ld r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// li r10,287
	ctx.r10.s64 = 287;
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// b 0x825e0d68
	goto loc_825E0D68;
loc_825E0D58:
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e4bf0
	ctx.lr = 0x825E0D64;
	sub_825E4BF0(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_825E0D68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E0D80"))) PPC_WEAK_FUNC(sub_825E0D80);
PPC_FUNC_IMPL(__imp__sub_825E0D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x825e0da8
	if (!ctx.cr6.eq) goto loc_825E0DA8;
	// bl 0x825e0d10
	ctx.lr = 0x825E0DA4;
	sub_825E0D10(ctx, base);
	// b 0x825e0dcc
	goto loc_825E0DCC;
loc_825E0DA8:
	// bl 0x825e3ee8
	ctx.lr = 0x825E0DAC;
	sub_825E3EE8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r4,r11,-25496
	ctx.r4.s64 = ctx.r11.s64 + -25496;
	// bl 0x825de538
	ctx.lr = 0x825E0DC0;
	sub_825DE538(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e43a0
	ctx.lr = 0x825E0DCC;
	sub_825E43A0(ctx, base);
loc_825E0DCC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E0DE0"))) PPC_WEAK_FUNC(sub_825E0DE0);
PPC_FUNC_IMPL(__imp__sub_825E0DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825E0DE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x825e0e0c
	if (!ctx.cr6.eq) goto loc_825E0E0C;
	// bl 0x825e0d10
	ctx.lr = 0x825E0E08;
	sub_825E0D10(ctx, base);
	// b 0x825e0e78
	goto loc_825E0E78;
loc_825E0E0C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x825e0e38
	if (!ctx.cr6.eq) goto loc_825E0E38;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825e3ee8
	ctx.lr = 0x825E0E20;
	sub_825E3EE8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r4,r11,-25496
	ctx.r4.s64 = ctx.r11.s64 + -25496;
	// bl 0x825de538
	ctx.lr = 0x825E0E34;
	sub_825DE538(ctx, base);
	// b 0x825e0e6c
	goto loc_825E0E6C;
loc_825E0E38:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x825e3ee8
	ctx.lr = 0x825E0E40;
	sub_825E3EE8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e3ee8
	ctx.lr = 0x825E0E50;
	sub_825E3EE8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r4,r11,-25480
	ctx.r4.s64 = ctx.r11.s64 + -25480;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x825de538
	ctx.lr = 0x825E0E6C;
	sub_825DE538(ctx, base);
loc_825E0E6C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e43a0
	ctx.lr = 0x825E0E78;
	sub_825E43A0(ctx, base);
loc_825E0E78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E0E80"))) PPC_WEAK_FUNC(sub_825E0E80);
PPC_FUNC_IMPL(__imp__sub_825E0E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// cmpwi cr6,r11,278
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 278, ctx.xer);
	// beq cr6,0x825e0eac
	if (ctx.cr6.eq) goto loc_825E0EAC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-25436
	ctx.r4.s64 = ctx.r11.s64 + -25436;
	// bl 0x825e43a0
	ctx.lr = 0x825E0EAC;
	sub_825E43A0(ctx, base);
loc_825E0EAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,24(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x825e0d10
	ctx.lr = 0x825E0EB8;
	sub_825E0D10(ctx, base);
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

__attribute__((alias("__imp__sub_825E0ED0"))) PPC_WEAK_FUNC(sub_825E0ED0);
PPC_FUNC_IMPL(__imp__sub_825E0ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x825E0ED8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r6,r11,-25420
	ctx.r6.s64 = ctx.r11.s64 + -25420;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r28,48(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// li r5,200
	ctx.r5.s64 = 200;
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x825e4448
	ctx.lr = 0x825E0F08;
	sub_825E4448(ctx, base);
	// lwz r31,48(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r5,r29,56
	ctx.r5.s64 = ctx.r29.s64 + 56;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x825e0f4c
	if (!ctx.cr6.gt) goto loc_825E0F4C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lis r7,32767
	ctx.r7.s64 = 2147418112;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r8,r11,5020
	ctx.r8.s64 = ctx.r11.s64 + 5020;
	// ori r7,r7,65533
	ctx.r7.u64 = ctx.r7.u64 | 65533;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x825e0c88
	ctx.lr = 0x825E0F48;
	sub_825E0C88(ctx, base);
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
loc_825E0F4C:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// stwx r26,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r26.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lwz r10,52(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// addi r10,r10,174
	ctx.r10.s64 = ctx.r10.s64 + 174;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E0F88"))) PPC_WEAK_FUNC(sub_825E0F88);
PPC_FUNC_IMPL(__imp__sub_825E0F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_825E0FAC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825e0fac
	if (!ctx.cr6.eq) goto loc_825E0FAC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825de870
	ctx.lr = 0x825E0FD0;
	sub_825DE870(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0ed0
	ctx.lr = 0x825E0FE0;
	sub_825E0ED0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E0FF8"))) PPC_WEAK_FUNC(sub_825E0FF8);
PPC_FUNC_IMPL(__imp__sub_825E0FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825E1000;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 68);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x825e105c
	if (!ctx.cr0.gt) goto loc_825E105C;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 + 60;
loc_825E102C:
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x825e1048
	if (!ctx.cr6.eq) goto loc_825E1048;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x825e1108
	if (ctx.cr6.eq) goto loc_825E1108;
loc_825E1048:
	// lbz r8,68(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 68);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x825e102c
	if (ctx.cr6.lt) goto loc_825E102C;
loc_825E105C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r6,r11,-25404
	ctx.r6.s64 = ctx.r11.s64 + -25404;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// bl 0x825e4448
	ctx.lr = 0x825E1074;
	sub_825E4448(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 68);
	// addi r5,r11,36
	ctx.r5.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x825e10b8
	if (!ctx.cr6.gt) goto loc_825E10B8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lis r7,32767
	ctx.r7.s64 = 2147418112;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r8,r10,5020
	ctx.r8.s64 = ctx.r10.s64 + 5020;
	// ori r7,r7,65533
	ctx.r7.u64 = ctx.r7.u64 | 65533;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x825e0c88
	ctx.lr = 0x825E10B0;
	sub_825E0C88(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r3.u32);
loc_825E10B8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lbz r8,68(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 68);
	// li r11,5
	ctx.r11.s64 = 5;
	// rotlwi r8,r8,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stwx r28,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r28.u32);
	// lbz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 68);
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 + 56;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_825E10E8:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x825e10e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825E10E8;
	// lbz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 68);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stb r11,68(r30)
	PPC_STORE_U8(ctx.r30.u32 + 68, ctx.r11.u8);
loc_825E1108:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E1110"))) PPC_WEAK_FUNC(sub_825E1110);
PPC_FUNC_IMPL(__imp__sub_825E1110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825E1118;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// li r8,-1
	ctx.r8.s64 = -1;
	// bne cr6,0x825e1150
	if (!ctx.cr6.eq) goto loc_825E1150;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x825e1244
	goto loc_825E1244;
loc_825E1150:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x825e1190
	if (ctx.cr0.lt) goto loc_825E1190;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r11,174
	ctx.r10.s64 = ctx.r11.s64 + 174;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
loc_825E1170:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mulli r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 * 12;
	// lwzx r7,r7,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// cmplw cr6,r29,r7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x825e1194
	if (ctx.cr6.eq) goto loc_825E1194;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bge 0x825e1170
	if (!ctx.cr0.lt) goto loc_825E1170;
loc_825E1190:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_825E1194:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x825e11f0
	if (ctx.cr6.lt) goto loc_825E11F0;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bne cr6,0x825e1248
	if (!ctx.cr6.eq) goto loc_825E1248;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825e1248
	if (ctx.cr0.eq) goto loc_825E1248;
loc_825E11C4:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x825e11dc
	if (!ctx.cr6.gt) goto loc_825E11DC;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825e11c4
	if (!ctx.cr0.eq) goto loc_825E11C4;
loc_825E11DC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825e1248
	if (ctx.cr6.eq) goto loc_825E1248;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// b 0x825e1248
	goto loc_825E1248;
loc_825E11F0:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x825e1110
	ctx.lr = 0x825E1204;
	sub_825E1110(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x825e122c
	if (!ctx.cr6.eq) goto loc_825E122C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x825e1248
	if (ctx.cr6.eq) goto loc_825E1248;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e57a0
	ctx.lr = 0x825E1224;
	sub_825E57A0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// b 0x825e1248
	goto loc_825E1248;
loc_825E122C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e0ff8
	ctx.lr = 0x825E123C;
	sub_825E0FF8(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_825E1244:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_825E1248:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E1250"))) PPC_WEAK_FUNC(sub_825E1250);
PPC_FUNC_IMPL(__imp__sub_825E1250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825E1258;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// subf r29,r5,r4
	ctx.r29.s64 = ctx.r4.s64 - ctx.r5.s64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x825e12a4
	if (!ctx.cr6.eq) goto loc_825E12A4;
	// addic. r29,r29,1
	ctx.xer.ca = ctx.r29.u32 > 4294967294;
	ctx.r29.s64 = ctx.r29.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bgt 0x825e1284
	if (ctx.cr0.gt) goto loc_825E1284;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x825e1290
	goto loc_825E1290;
loc_825E1284:
	// addi r4,r29,-1
	ctx.r4.s64 = ctx.r29.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e5670
	ctx.lr = 0x825E1290;
	sub_825E5670(ctx, base);
loc_825E1290:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e5810
	ctx.lr = 0x825E12A0;
	sub_825E5810(ctx, base);
	// b 0x825e12e0
	goto loc_825E12E0;
loc_825E12A4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825e12b8
	if (ctx.cr6.eq) goto loc_825E12B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e5e38
	ctx.lr = 0x825E12B8;
	sub_825E5E38(ctx, base);
loc_825E12B8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x825e12e0
	if (!ctx.cr6.gt) goto loc_825E12E0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r30,36(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e5670
	ctx.lr = 0x825E12D0;
	sub_825E5670(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e59c0
	ctx.lr = 0x825E12E0;
	sub_825E59C0(ctx, base);
loc_825E12E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E12E8"))) PPC_WEAK_FUNC(sub_825E12E8);
PPC_FUNC_IMPL(__imp__sub_825E12E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x825e134c
	goto loc_825E134C;
loc_825E131C:
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r6,r10,174
	ctx.r6.s64 = ctx.r10.s64 + 174;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r8,24(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// lwzx r10,r6,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
loc_825E134C:
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x825e131c
	if (ctx.cr6.gt) goto loc_825E131C;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825e137c
	if (ctx.cr6.eq) goto loc_825E137C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e5978
	ctx.lr = 0x825E137C;
	sub_825E5978(ctx, base);
loc_825E137C:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x825e5ab8
	ctx.lr = 0x825E1390;
	sub_825E5AB8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E13A8"))) PPC_WEAK_FUNC(sub_825E13A8);
PPC_FUNC_IMPL(__imp__sub_825E13A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825E13B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x825dec50
	ctx.lr = 0x825E13C4;
	sub_825DEC50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r31,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r31.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x825df230
	ctx.lr = 0x825E1410;
	sub_825DF230(ctx, base);
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stb r11,71(r28)
	PPC_STORE_U8(ctx.r28.u32 + 71, ctx.r11.u8);
	// stw r10,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E1440"))) PPC_WEAK_FUNC(sub_825E1440);
PPC_FUNC_IMPL(__imp__sub_825E1440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825E1448;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r30,48(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// lwz r29,52(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x825e1490
	goto loc_825E1490;
loc_825E1460:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r8,r11,174
	ctx.r8.s64 = ctx.r11.s64 + 174;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwzx r11,r8,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_825E1490:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x825e1460
	if (ctx.cr6.gt) goto loc_825E1460;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e5978
	ctx.lr = 0x825E14B4;
	sub_825E5978(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x825e0bc8
	ctx.lr = 0x825E14D0;
	sub_825E0BC8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x825e0bc8
	ctx.lr = 0x825E14FC;
	sub_825E0BC8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r5,r10,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// rlwinm r6,r11,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x825e0bc8
	ctx.lr = 0x825E1528;
	sub_825E0BC8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x825e0bc8
	ctx.lr = 0x825E1554;
	sub_825E0BC8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mulli r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 * 12;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mulli r6,r11,12
	ctx.r6.s64 = ctx.r11.s64 * 12;
	// bl 0x825e0bc8
	ctx.lr = 0x825E1580;
	sub_825E0BC8(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// rotlwi r6,r11,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x825e0bc8
	ctx.lr = 0x825E15A8;
	sub_825E0BC8(ctx, base);
	// lbz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E15C8"))) PPC_WEAK_FUNC(sub_825E15C8);
PPC_FUNC_IMPL(__imp__sub_825E15C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825E15D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r29,48(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825e5ec8
	ctx.lr = 0x825E15E8;
	sub_825E5EC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0d10
	ctx.lr = 0x825E15F0;
	sub_825E0D10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0e80
	ctx.lr = 0x825E15F8;
	sub_825E0E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x825e57a0
	ctx.lr = 0x825E1604;
	sub_825E57A0(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x825e6670
	ctx.lr = 0x825E1630;
	sub_825E6670(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E1638"))) PPC_WEAK_FUNC(sub_825E1638);
PPC_FUNC_IMPL(__imp__sub_825E1638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825E1640;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r29,48(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,278
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 278, ctx.xer);
	// lwz r28,36(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// bne cr6,0x825e16b4
	if (!ctx.cr6.eq) goto loc_825E16B4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// addi r6,r11,-25352
	ctx.r6.s64 = ctx.r11.s64 + -25352;
	// ori r5,r5,65533
	ctx.r5.u64 = ctx.r5.u64 | 65533;
	// bl 0x825e4448
	ctx.lr = 0x825E1678;
	sub_825E4448(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// bl 0x825e0e80
	ctx.lr = 0x825E168C;
	sub_825E0E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x825e57a0
	ctx.lr = 0x825E1698;
	sub_825E57A0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x825e16e0
	goto loc_825E16E0;
loc_825E16B4:
	// bl 0x825e0d10
	ctx.lr = 0x825E16B8;
	sub_825E0D10(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e2170
	ctx.lr = 0x825E16C8;
	sub_825E2170(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x825e5f50
	ctx.lr = 0x825E16D4;
	sub_825E5F50(ctx, base);
	// li r4,93
	ctx.r4.s64 = 93;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0d80
	ctx.lr = 0x825E16E0;
	sub_825E0D80(ctx, base);
loc_825E16E0:
	// li r4,61
	ctx.r4.s64 = 61;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0d80
	ctx.lr = 0x825E16EC;
	sub_825E0D80(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825e5f68
	ctx.lr = 0x825E16F8;
	sub_825E5F68(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e2170
	ctx.lr = 0x825E1708;
	sub_825E2170(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825e5f68
	ctx.lr = 0x825E1714;
	sub_825E5F68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825e5f68
	ctx.lr = 0x825E1724;
	sub_825E5F68(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x825e5978
	ctx.lr = 0x825E1740;
	sub_825E5978(ctx, base);
	// stw r28,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r28.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E1750"))) PPC_WEAK_FUNC(sub_825E1750);
PPC_FUNC_IMPL(__imp__sub_825E1750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x825E1758;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r29,48(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r26,4(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825e5978
	ctx.lr = 0x825E1784;
	sub_825E5978(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r10,10
	ctx.r10.s64 = 10;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x825e5e38
	ctx.lr = 0x825E17D0;
	sub_825E5E38(ctx, base);
	// li r4,123
	ctx.r4.s64 = 123;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0d80
	ctx.lr = 0x825E17DC;
	sub_825E0D80(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r30,r11,-25352
	ctx.r30.s64 = ctx.r11.s64 + -25352;
loc_825E17E4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,59
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 59, ctx.xer);
	// bne cr6,0x825e17f8
	if (!ctx.cr6.eq) goto loc_825E17F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0d10
	ctx.lr = 0x825E17F8;
	sub_825E0D10(ctx, base);
loc_825E17F8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,125
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 125, ctx.xer);
	// beq cr6,0x825e18fc
	if (ctx.cr6.eq) goto loc_825E18FC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825e185c
	if (ctx.cr6.eq) goto loc_825E185C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825e5e38
	ctx.lr = 0x825E181C;
	sub_825E5E38(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x825e185c
	if (!ctx.cr6.eq) goto loc_825E185C;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x825e59a0
	ctx.lr = 0x825E1848;
	sub_825E59A0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r11.u32);
loc_825E185C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// beq cr6,0x825e18d4
	if (ctx.cr6.eq) goto loc_825E18D4;
	// cmpwi cr6,r11,278
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 278, ctx.xer);
	// beq cr6,0x825e18b4
	if (ctx.cr6.eq) goto loc_825E18B4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_825E1878:
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x825e2170
	ctx.lr = 0x825E1880;
	sub_825E2170(ctx, base);
	// lis r5,3
	ctx.r5.s64 = 196608;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e4448
	ctx.lr = 0x825E1898;
	sub_825E4448(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// b 0x825e18dc
	goto loc_825E18DC;
loc_825E18B4:
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// bl 0x825e4bf0
	ctx.lr = 0x825E18BC;
	sub_825E4BF0(ctx, base);
	// cmpwi cr6,r3,61
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 61, ctx.xer);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x825e18d8
	if (ctx.cr6.eq) goto loc_825E18D8;
	// b 0x825e1878
	goto loc_825E1878;
loc_825E18D4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_825E18D8:
	// bl 0x825e1638
	ctx.lr = 0x825E18DC;
	sub_825E1638(ctx, base);
loc_825E18DC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,44
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 44, ctx.xer);
	// beq cr6,0x825e18f0
	if (ctx.cr6.eq) goto loc_825E18F0;
	// cmpwi cr6,r11,59
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 59, ctx.xer);
	// bne cr6,0x825e18fc
	if (!ctx.cr6.eq) goto loc_825E18FC;
loc_825E18F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0d10
	ctx.lr = 0x825E18F8;
	sub_825E0D10(ctx, base);
	// b 0x825e17e4
	goto loc_825E17E4;
loc_825E18FC:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,123
	ctx.r5.s64 = 123;
	// li r4,125
	ctx.r4.s64 = 125;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0de0
	ctx.lr = 0x825E1910;
	sub_825E0DE0(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825e1980
	if (ctx.cr6.eq) goto loc_825E1980;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x825e1940
	if (!ctx.cr6.eq) goto loc_825E1940;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825e5810
	ctx.lr = 0x825E1938;
	sub_825E5810(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// b 0x825e1958
	goto loc_825E1958;
loc_825E1940:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825e1954
	if (ctx.cr6.eq) goto loc_825E1954;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825e5e38
	ctx.lr = 0x825E1954;
	sub_825E5E38(ctx, base);
loc_825E1954:
	// li r4,31
	ctx.r4.s64 = 31;
loc_825E1958:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x825e59a0
	ctx.lr = 0x825E1970;
	sub_825E59A0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r11.u32);
loc_825E1980:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x825de100
	ctx.lr = 0x825E1988;
	sub_825DE100(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r31,r27,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwimi r10,r3,15,8,16
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r3.u32, 15) & 0xFF8000) | (ctx.r10.u64 & 0xFFFFFFFFFF007FFF);
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x825de128
	ctx.lr = 0x825E19A8;
	sub_825DE128(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwimi r9,r10,6,17,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0x7FC0) | (ctx.r9.u64 & 0xFFFFFFFFFFFF803F);
	// stwx r9,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E19C8"))) PPC_WEAK_FUNC(sub_825E19C8);
PPC_FUNC_IMPL(__imp__sub_825E19C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825E19D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,41
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 41, ctx.xer);
	// beq cr6,0x825e1a50
	if (ctx.cr6.eq) goto loc_825E1A50;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r31,r11,-25328
	ctx.r31.s64 = ctx.r11.s64 + -25328;
loc_825E19F4:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,278
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 278, ctx.xer);
	// beq cr6,0x825e1a18
	if (ctx.cr6.eq) goto loc_825E1A18;
	// cmpwi cr6,r11,280
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 280, ctx.xer);
	// beq cr6,0x825e1a48
	if (ctx.cr6.eq) goto loc_825E1A48;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825e43a0
	ctx.lr = 0x825E1A14;
	sub_825E43A0(ctx, base);
	// b 0x825e1a30
	goto loc_825E1A30;
loc_825E1A18:
	// bl 0x825e0e80
	ctx.lr = 0x825E1A1C;
	sub_825E0E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e0ed0
	ctx.lr = 0x825E1A2C;
	sub_825E0ED0(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_825E1A30:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,44
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 44, ctx.xer);
	// bne cr6,0x825e1a50
	if (!ctx.cr6.eq) goto loc_825E1A50;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e0d10
	ctx.lr = 0x825E1A44;
	sub_825E0D10(ctx, base);
	// b 0x825e19f4
	goto loc_825E19F4;
loc_825E1A48:
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x825e0d10
	ctx.lr = 0x825E1A50;
	sub_825E0D10(ctx, base);
loc_825E1A50:
	// lwz r31,48(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// beq cr6,0x825e1aa0
	if (ctx.cr6.eq) goto loc_825E1AA0;
loc_825E1A6C:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,174
	ctx.r10.s64 = ctx.r10.s64 + 174;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// bne 0x825e1a6c
	if (!ctx.cr0.eq) goto loc_825E1A6C;
loc_825E1AA0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r6,r11,-25388
	ctx.r6.s64 = ctx.r11.s64 + -25388;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e4448
	ctx.lr = 0x825E1AB8;
	sub_825E4448(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stb r11,69(r9)
	PPC_STORE_U8(ctx.r9.u32 + 69, ctx.r11.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r28,70(r11)
	PPC_STORE_U8(ctx.r11.u32 + 70, ctx.r28.u8);
	// beq cr6,0x825e1b1c
	if (ctx.cr6.eq) goto loc_825E1B1C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-25392
	ctx.r4.s64 = ctx.r11.s64 + -25392;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e0f88
	ctx.lr = 0x825E1AE8;
	sub_825E0F88(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r7,r10,173
	ctx.r7.s64 = ctx.r10.s64 + 173;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lwzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_825E1B1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x825e5670
	ctx.lr = 0x825E1B28;
	sub_825E5670(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E1B30"))) PPC_WEAK_FUNC(sub_825E1B30);
PPC_FUNC_IMPL(__imp__sub_825E1B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825E1B38;
	__savegprlr_28(ctx, base);
	// stwu r1,-1616(r1)
	ea = -1616 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x825e13a8
	ctx.lr = 0x825E1B54;
	sub_825E13A8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r29.u32);
	// bl 0x825e0d80
	ctx.lr = 0x825E1B68;
	sub_825E0D80(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x825e1bb8
	if (ctx.cr6.eq) goto loc_825E1BB8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-25300
	ctx.r4.s64 = ctx.r11.s64 + -25300;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0f88
	ctx.lr = 0x825E1B84;
	sub_825E0F88(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r7,r10,173
	ctx.r7.s64 = ctx.r10.s64 + 173;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lwzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_825E1BB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e19c8
	ctx.lr = 0x825E1BC0;
	sub_825E19C8(ctx, base);
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0d80
	ctx.lr = 0x825E1BCC;
	sub_825E0D80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e3300
	ctx.lr = 0x825E1BD4;
	sub_825E3300(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,265
	ctx.r5.s64 = 265;
	// li r4,262
	ctx.r4.s64 = 262;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0de0
	ctx.lr = 0x825E1BE8;
	sub_825E0DE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e1440
	ctx.lr = 0x825E1BF0;
	sub_825E1440(ctx, base);
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// addi r5,r29,52
	ctx.r5.s64 = ctx.r29.s64 + 52;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x825e1c34
	if (!ctx.cr6.gt) goto loc_825E1C34;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lis r7,3
	ctx.r7.s64 = 196608;
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r8,r11,-25376
	ctx.r8.s64 = ctx.r11.s64 + -25376;
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x825e0c88
	ctx.lr = 0x825E1C30;
	sub_825E0C88(ctx, base);
	// stw r3,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r3.u32);
loc_825E1C34:
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,34
	ctx.r4.s64 = 34;
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// bl 0x825e59a0
	ctx.lr = 0x825E1C68;
	sub_825E59A0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// li r10,10
	ctx.r10.s64 = 10;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lbz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 68);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825e1cd8
	if (ctx.cr0.eq) goto loc_825E1CD8;
	// addi r29,r1,136
	ctx.r29.s64 = ctx.r1.s64 + 136;
loc_825E1C98:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,29,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x4;
	// xori r4,r11,4
	ctx.r4.u64 = ctx.r11.u64 ^ 4;
	// bl 0x825e5978
	ctx.lr = 0x825E1CC0;
	sub_825E5978(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// lbz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 68);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825e1c98
	if (ctx.cr6.lt) goto loc_825E1C98;
loc_825E1CD8:
	// addi r1,r1,1616
	ctx.r1.s64 = ctx.r1.s64 + 1616;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E1CE0"))) PPC_WEAK_FUNC(sub_825E1CE0);
PPC_FUNC_IMPL(__imp__sub_825E1CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825E1CE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x825e2170
	ctx.lr = 0x825E1D00;
	sub_825E2170(ctx, base);
loc_825E1D00:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,44
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 44, ctx.xer);
	// bne cr6,0x825e1d38
	if (!ctx.cr6.eq) goto loc_825E1D38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0d10
	ctx.lr = 0x825E1D14;
	sub_825E0D10(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x825e5e38
	ctx.lr = 0x825E1D20;
	sub_825E5E38(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e2170
	ctx.lr = 0x825E1D30;
	sub_825E2170(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x825e1d00
	goto loc_825E1D00;
loc_825E1D38:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E1D48"))) PPC_WEAK_FUNC(sub_825E1D48);
PPC_FUNC_IMPL(__imp__sub_825E1D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x825E1D50;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// beq cr6,0x825e1dd4
	if (ctx.cr6.eq) goto loc_825E1DD4;
	// cmpwi cr6,r11,123
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 123, ctx.xer);
	// beq cr6,0x825e1dc4
	if (ctx.cr6.eq) goto loc_825E1DC4;
	// cmpwi cr6,r11,286
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 286, ctx.xer);
	// beq cr6,0x825e1d94
	if (ctx.cr6.eq) goto loc_825E1D94;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-25240
	ctx.r4.s64 = ctx.r11.s64 + -25240;
	// bl 0x825e43a0
	ctx.lr = 0x825E1D90;
	sub_825E43A0(ctx, base);
	// b 0x825e1ebc
	goto loc_825E1EBC;
loc_825E1D94:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x825e57a0
	ctx.lr = 0x825E1DA0;
	sub_825E57A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x825e0d10
	ctx.lr = 0x825E1DC0;
	sub_825E0D10(ctx, base);
	// b 0x825e1e40
	goto loc_825E1E40;
loc_825E1DC4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e1750
	ctx.lr = 0x825E1DD0;
	sub_825E1750(ctx, base);
	// b 0x825e1e40
	goto loc_825E1E40;
loc_825E1DD4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x825e1df0
	if (ctx.cr6.eq) goto loc_825E1DF0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-25292
	ctx.r4.s64 = ctx.r11.s64 + -25292;
	// bl 0x825e43a0
	ctx.lr = 0x825E1DF0;
	sub_825E43A0(ctx, base);
loc_825E1DF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0d10
	ctx.lr = 0x825E1DF8;
	sub_825E0D10(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,41
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 41, ctx.xer);
	// bne cr6,0x825e1e10
	if (!ctx.cr6.eq) goto loc_825E1E10;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x825e1e2c
	goto loc_825E1E2C;
loc_825E1E10:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e1ce0
	ctx.lr = 0x825E1E1C;
	sub_825E1CE0(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e5810
	ctx.lr = 0x825E1E2C;
	sub_825E5810(ctx, base);
loc_825E1E2C:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0de0
	ctx.lr = 0x825E1E40;
	sub_825E0DE0(ctx, base);
loc_825E1E40:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x825e1e58
	if (!ctx.cr6.eq) goto loc_825E1E58;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x825e1e78
	goto loc_825E1E78;
loc_825E1E58:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825e1e6c
	if (ctx.cr6.eq) goto loc_825E1E6C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e5e38
	ctx.lr = 0x825E1E6C;
	sub_825E5E38(ctx, base);
loc_825E1E6C:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_825E1E78:
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e5978
	ctx.lr = 0x825E1E90;
	sub_825E5978(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r28,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r28.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// bl 0x825e5868
	ctx.lr = 0x825E1EB4;
	sub_825E5868(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
loc_825E1EBC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E1EC8"))) PPC_WEAK_FUNC(sub_825E1EC8);
PPC_FUNC_IMPL(__imp__sub_825E1EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825E1ED0;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r28,48(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// beq cr6,0x825e1f20
	if (ctx.cr6.eq) goto loc_825E1F20;
	// cmpwi cr6,r11,278
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 278, ctx.xer);
	// beq cr6,0x825e1f04
	if (ctx.cr6.eq) goto loc_825E1F04;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-25212
	ctx.r4.s64 = ctx.r11.s64 + -25212;
	// bl 0x825e43a0
	ctx.lr = 0x825E1F00;
	sub_825E43A0(ctx, base);
	// b 0x825e1f58
	goto loc_825E1F58;
loc_825E1F04:
	// bl 0x825e0e80
	ctx.lr = 0x825E1F08;
	sub_825E0E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x825e1110
	ctx.lr = 0x825E1F1C;
	sub_825E1110(ctx, base);
	// b 0x825e1f58
	goto loc_825E1F58;
loc_825E1F20:
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x825e0d10
	ctx.lr = 0x825E1F28;
	sub_825E0D10(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e2170
	ctx.lr = 0x825E1F38;
	sub_825E2170(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0de0
	ctx.lr = 0x825E1F4C;
	sub_825E0DE0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x825e5ad0
	ctx.lr = 0x825E1F58;
	sub_825E5AD0(ctx, base);
loc_825E1F58:
	// li r29,-1
	ctx.r29.s64 = -1;
loc_825E1F5C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// beq cr6,0x825e1f90
	if (ctx.cr6.eq) goto loc_825E1F90;
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// beq cr6,0x825e2044
	if (ctx.cr6.eq) goto loc_825E2044;
	// cmpwi cr6,r11,58
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 58, ctx.xer);
	// beq cr6,0x825e1ffc
	if (ctx.cr6.eq) goto loc_825E1FFC;
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// beq cr6,0x825e1fac
	if (ctx.cr6.eq) goto loc_825E1FAC;
	// cmpwi cr6,r11,123
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 123, ctx.xer);
	// beq cr6,0x825e1f90
	if (ctx.cr6.eq) goto loc_825E1F90;
	// cmpwi cr6,r11,286
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 286, ctx.xer);
	// bne cr6,0x825e2054
	if (!ctx.cr6.eq) goto loc_825E2054;
loc_825E1F90:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825e5e38
	ctx.lr = 0x825E1F9C;
	sub_825E5E38(ctx, base);
loc_825E1F9C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e1d48
	ctx.lr = 0x825E1FA8;
	sub_825E1D48(ctx, base);
	// b 0x825e1f5c
	goto loc_825E1F5C;
loc_825E1FAC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825e5ec8
	ctx.lr = 0x825E1FB8;
	sub_825E5EC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0d10
	ctx.lr = 0x825E1FC0;
	sub_825E0D10(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e2170
	ctx.lr = 0x825E1FD0;
	sub_825E2170(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x825e5f50
	ctx.lr = 0x825E1FDC;
	sub_825E5F50(ctx, base);
	// li r4,93
	ctx.r4.s64 = 93;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0d80
	ctx.lr = 0x825E1FE8;
	sub_825E0D80(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825e6670
	ctx.lr = 0x825E1FF8;
	sub_825E6670(ctx, base);
	// b 0x825e1f5c
	goto loc_825E1F5C;
loc_825E1FFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0d10
	ctx.lr = 0x825E2004;
	sub_825E0D10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0e80
	ctx.lr = 0x825E200C;
	sub_825E0E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x825e57a0
	ctx.lr = 0x825E2018;
	sub_825E57A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x825e6188
	ctx.lr = 0x825E2040;
	sub_825E6188(ctx, base);
	// b 0x825e1f9c
	goto loc_825E1F9C;
loc_825E2044:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e15c8
	ctx.lr = 0x825E2050;
	sub_825E15C8(ctx, base);
	// b 0x825e1f5c
	goto loc_825E1F5C;
loc_825E2054:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E2060"))) PPC_WEAK_FUNC(sub_825E2060);
PPC_FUNC_IMPL(__imp__sub_825E2060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,123
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 123, ctx.xer);
	// beq cr6,0x825e2148
	if (ctx.cr6.eq) goto loc_825E2148;
	// cmpwi cr6,r11,263
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 263, ctx.xer);
	// beq cr6,0x825e2140
	if (ctx.cr6.eq) goto loc_825E2140;
	// cmpwi cr6,r11,265
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 265, ctx.xer);
	// beq cr6,0x825e2120
	if (ctx.cr6.eq) goto loc_825E2120;
	// cmpwi cr6,r11,269
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 269, ctx.xer);
	// beq cr6,0x825e210c
	if (ctx.cr6.eq) goto loc_825E210C;
	// cmpwi cr6,r11,275
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 275, ctx.xer);
	// beq cr6,0x825e2104
	if (ctx.cr6.eq) goto loc_825E2104;
	// cmpwi cr6,r11,285
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 285, ctx.xer);
	// beq cr6,0x825e20d0
	if (ctx.cr6.eq) goto loc_825E20D0;
	// cmpwi cr6,r11,286
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 286, ctx.xer);
	// beq cr6,0x825e20c0
	if (ctx.cr6.eq) goto loc_825E20C0;
	// bl 0x825e1ec8
	ctx.lr = 0x825E20BC;
	sub_825E1EC8(ctx, base);
	// b 0x825e2154
	goto loc_825E2154;
loc_825E20C0:
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x825e57a0
	ctx.lr = 0x825E20CC;
	sub_825E57A0(ctx, base);
	// b 0x825e20dc
	goto loc_825E20DC;
loc_825E20D0:
	// lfd f1,24(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x825e57d8
	ctx.lr = 0x825E20DC;
	sub_825E57D8(ctx, base);
loc_825E20DC:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_825E20EC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x825e0d10
	ctx.lr = 0x825E2100;
	sub_825E0D10(ctx, base);
	// b 0x825e2154
	goto loc_825E2154;
loc_825E2104:
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x825e2110
	goto loc_825E2110;
loc_825E210C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_825E2110:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// b 0x825e20ec
	goto loc_825E20EC;
loc_825E2120:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e0d10
	ctx.lr = 0x825E2128;
	sub_825E0D10(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e1b30
	ctx.lr = 0x825E213C;
	sub_825E1B30(ctx, base);
	// b 0x825e2154
	goto loc_825E2154;
loc_825E2140:
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x825e2110
	goto loc_825E2110;
loc_825E2148:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e1750
	ctx.lr = 0x825E2154;
	sub_825E1750(ctx, base);
loc_825E2154:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E2170"))) PPC_WEAK_FUNC(sub_825E2170);
PPC_FUNC_IMPL(__imp__sub_825E2170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x825E2178;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// stw r11,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r11.u32);
	// ble cr6,0x825e21a8
	if (!ctx.cr6.gt) goto loc_825E21A8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-25192
	ctx.r4.s64 = ctx.r11.s64 + -25192;
	// bl 0x825e43a0
	ctx.lr = 0x825E21A8;
	sub_825E43A0(ctx, base);
loc_825E21A8:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x825e21c4
	if (ctx.cr6.eq) goto loc_825E21C4;
	// cmpwi cr6,r11,270
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 270, ctx.xer);
	// bne cr6,0x825e21f4
	if (!ctx.cr6.eq) goto loc_825E21F4;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x825e21c8
	goto loc_825E21C8;
loc_825E21C4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_825E21C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e0d10
	ctx.lr = 0x825E21D0;
	sub_825E0D10(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e2170
	ctx.lr = 0x825E21E0;
	sub_825E2170(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x825e66b0
	ctx.lr = 0x825E21F0;
	sub_825E66B0(ctx, base);
	// b 0x825e2200
	goto loc_825E2200;
loc_825E21F4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e2060
	ctx.lr = 0x825E2200;
	sub_825E2060(ctx, base);
loc_825E2200:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,257
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 257, ctx.xer);
	// bgt cr6,0x825e2288
	if (ctx.cr6.gt) goto loc_825E2288;
	// beq cr6,0x825e2280
	if (ctx.cr6.eq) goto loc_825E2280;
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// beq cr6,0x825e2278
	if (ctx.cr6.eq) goto loc_825E2278;
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x825e2270
	if (ctx.cr6.eq) goto loc_825E2270;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x825e2268
	if (ctx.cr6.eq) goto loc_825E2268;
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// beq cr6,0x825e2260
	if (ctx.cr6.eq) goto loc_825E2260;
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// beq cr6,0x825e2258
	if (ctx.cr6.eq) goto loc_825E2258;
	// cmpwi cr6,r11,62
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 62, ctx.xer);
	// beq cr6,0x825e2250
	if (ctx.cr6.eq) goto loc_825E2250;
	// cmpwi cr6,r11,94
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 94, ctx.xer);
	// bne cr6,0x825e22b8
	if (!ctx.cr6.eq) goto loc_825E22B8;
	// li r31,4
	ctx.r31.s64 = 4;
	// b 0x825e22ec
	goto loc_825E22EC;
loc_825E2250:
	// li r31,10
	ctx.r31.s64 = 10;
	// b 0x825e22ec
	goto loc_825E22EC;
loc_825E2258:
	// li r31,8
	ctx.r31.s64 = 8;
	// b 0x825e22ec
	goto loc_825E22EC;
loc_825E2260:
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x825e22ec
	goto loc_825E22EC;
loc_825E2268:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x825e22ec
	goto loc_825E22EC;
loc_825E2270:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x825e22ec
	goto loc_825E22EC;
loc_825E2278:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x825e22ec
	goto loc_825E22EC;
loc_825E2280:
	// li r31,12
	ctx.r31.s64 = 12;
	// b 0x825e22ec
	goto loc_825E22EC;
loc_825E2288:
	// cmpwi cr6,r11,271
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 271, ctx.xer);
	// beq cr6,0x825e22e8
	if (ctx.cr6.eq) goto loc_825E22E8;
	// cmpwi cr6,r11,279
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 279, ctx.xer);
	// beq cr6,0x825e22e0
	if (ctx.cr6.eq) goto loc_825E22E0;
	// cmpwi cr6,r11,281
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 281, ctx.xer);
	// beq cr6,0x825e22d8
	if (ctx.cr6.eq) goto loc_825E22D8;
	// cmpwi cr6,r11,282
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 282, ctx.xer);
	// beq cr6,0x825e22d0
	if (ctx.cr6.eq) goto loc_825E22D0;
	// cmpwi cr6,r11,283
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 283, ctx.xer);
	// beq cr6,0x825e22c8
	if (ctx.cr6.eq) goto loc_825E22C8;
	// cmpwi cr6,r11,284
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 284, ctx.xer);
	// beq cr6,0x825e22c0
	if (ctx.cr6.eq) goto loc_825E22C0;
loc_825E22B8:
	// li r31,14
	ctx.r31.s64 = 14;
	// b 0x825e22ec
	goto loc_825E22EC;
loc_825E22C0:
	// li r31,6
	ctx.r31.s64 = 6;
	// b 0x825e22ec
	goto loc_825E22EC;
loc_825E22C8:
	// li r31,9
	ctx.r31.s64 = 9;
	// b 0x825e22ec
	goto loc_825E22EC;
loc_825E22D0:
	// li r31,11
	ctx.r31.s64 = 11;
	// b 0x825e22ec
	goto loc_825E22EC;
loc_825E22D8:
	// li r31,7
	ctx.r31.s64 = 7;
	// b 0x825e22ec
	goto loc_825E22EC;
loc_825E22E0:
	// li r31,5
	ctx.r31.s64 = 5;
	// b 0x825e22ec
	goto loc_825E22EC;
loc_825E22E8:
	// li r31,13
	ctx.r31.s64 = 13;
loc_825E22EC:
	// cmpwi cr6,r31,14
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 14, ctx.xer);
	// beq cr6,0x825e2358
	if (ctx.cr6.eq) goto loc_825E2358;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r28,r11,-25524
	ctx.r28.s64 = ctx.r11.s64 + -25524;
loc_825E22FC:
	// rlwinm r29,r31,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r28.u32);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x825e2358
	if (!ctx.cr6.gt) goto loc_825E2358;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e0d10
	ctx.lr = 0x825E2314;
	sub_825E0D10(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x825e67d0
	ctx.lr = 0x825E2324;
	sub_825E67D0(ctx, base);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbzx r5,r29,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x825e2170
	ctx.lr = 0x825E2338;
	sub_825E2170(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x825e6968
	ctx.lr = 0x825E2350;
	sub_825E6968(ctx, base);
	// cmpwi cr6,r31,14
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 14, ctx.xer);
	// bne cr6,0x825e22fc
	if (!ctx.cr6.eq) goto loc_825E22FC;
loc_825E2358:
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E2370"))) PPC_WEAK_FUNC(sub_825E2370);
PPC_FUNC_IMPL(__imp__sub_825E2370) {
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// bl 0x825e3300
	ctx.lr = 0x825E23B4;
	sub_825E3300(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e12e8
	ctx.lr = 0x825E23BC;
	sub_825E12E8(ctx, base);
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

__attribute__((alias("__imp__sub_825E23D0"))) PPC_WEAK_FUNC(sub_825E23D0);
PPC_FUNC_IMPL(__imp__sub_825E23D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x825E23D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r30,4
	ctx.r27.s64 = ctx.r30.s64 + 4;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x825e2400
	if (ctx.cr6.lt) goto loc_825E2400;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x825e2410
	if (!ctx.cr6.gt) goto loc_825E2410;
loc_825E2400:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-25168
	ctx.r4.s64 = ctx.r11.s64 + -25168;
	// bl 0x825e43a0
	ctx.lr = 0x825E2410;
	sub_825E43A0(ctx, base);
loc_825E2410:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,44
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 44, ctx.xer);
	// bne cr6,0x825e24d8
	if (!ctx.cr6.eq) goto loc_825E24D8;
	// bl 0x825e0d10
	ctx.lr = 0x825E2424;
	sub_825E0D10(ctx, base);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// bl 0x825e1ec8
	ctx.lr = 0x825E2434;
	sub_825E1EC8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x825e24c4
	if (!ctx.cr6.eq) goto loc_825E24C4;
	// lwz r29,48(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,36(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
loc_825E2450:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bne cr6,0x825e248c
	if (!ctx.cr6.eq) goto loc_825E248C;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x825e2474
	if (!ctx.cr6.eq) goto loc_825E2474;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_825E2474:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x825e248c
	if (!ctx.cr6.eq) goto loc_825E248C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
loc_825E248C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825e2450
	if (!ctx.cr0.eq) goto loc_825E2450;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825e24c4
	if (ctx.cr6.eq) goto loc_825E24C4;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,36(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825e5978
	ctx.lr = 0x825E24B8;
	sub_825E5978(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825e5670
	ctx.lr = 0x825E24C4;
	sub_825E5670(ctx, base);
loc_825E24C4:
	// addi r5,r28,1
	ctx.r5.s64 = ctx.r28.s64 + 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e23d0
	ctx.lr = 0x825E24D4;
	sub_825E23D0(ctx, base);
	// b 0x825e2528
	goto loc_825E2528;
loc_825E24D8:
	// li r4,61
	ctx.r4.s64 = 61;
	// bl 0x825e0d80
	ctx.lr = 0x825E24E0;
	sub_825E0D80(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e1ce0
	ctx.lr = 0x825E24EC;
	sub_825E1CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x825e2550
	if (ctx.cr6.eq) goto loc_825E2550;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e1250
	ctx.lr = 0x825E250C;
	sub_825E1250(ctx, base);
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x825e2528
	if (!ctx.cr6.gt) goto loc_825E2528;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
loc_825E2528:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x825e2564
	goto loc_825E2564;
loc_825E2550:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825e5810
	ctx.lr = 0x825E2560;
	sub_825E5810(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
loc_825E2564:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x825e6038
	ctx.lr = 0x825E2570;
	sub_825E6038(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E2578"))) PPC_WEAK_FUNC(sub_825E2578);
PPC_FUNC_IMPL(__imp__sub_825E2578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b4
	ctx.lr = 0x825E2580;
	__savegprlr_23(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lwz r31,48(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// bl 0x825e0d10
	ctx.lr = 0x825E2594;
	sub_825E0D10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e5a50
	ctx.lr = 0x825E259C;
	sub_825E5A50(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e5400
	ctx.lr = 0x825E25A8;
	sub_825E5400(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825e2170
	ctx.lr = 0x825E25BC;
	sub_825E2170(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x825e25d0
	if (!ctx.cr6.eq) goto loc_825E25D0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_825E25D0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r24,4(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e6460
	ctx.lr = 0x825E25E0;
	sub_825E6460(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x825e55b0
	ctx.lr = 0x825E25F0;
	sub_825E55B0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r28,-1
	ctx.r28.s64 = -1;
	// subf r27,r30,r11
	ctx.r27.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cmpwi cr6,r27,100
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 100, ctx.xer);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// ble cr6,0x825e2618
	if (!ctx.cr6.gt) goto loc_825E2618;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-25152
	ctx.r4.s64 = ctx.r11.s64 + -25152;
	// bl 0x825e43a0
	ctx.lr = 0x825E2618;
	sub_825E43A0(ctx, base);
loc_825E2618:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x825e263c
	if (!ctx.cr6.gt) goto loc_825E263C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rlwinm r5,r27,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826dfaa0
	ctx.lr = 0x825E263C;
	sub_826DFAA0(ctx, base);
loc_825E263C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r4,259
	ctx.r4.s64 = 259;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x825e0d80
	ctx.lr = 0x825E2678;
	sub_825E0D80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e5400
	ctx.lr = 0x825E2680;
	sub_825E5400(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825e2370
	ctx.lr = 0x825E268C;
	sub_825E2370(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e5ab8
	ctx.lr = 0x825E2698;
	sub_825E5AB8(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x825e26b4
	if (ctx.cr6.eq) goto loc_825E26B4;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_825E26B4:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x825e26d0
	if (ctx.cr6.eq) goto loc_825E26D0;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_825E26D0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x825e26fc
	if (!ctx.cr6.gt) goto loc_825E26FC;
	// addi r28,r1,144
	ctx.r28.s64 = ctx.r1.s64 + 144;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_825E26E0:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e5888
	ctx.lr = 0x825E26F0;
	sub_825E5888(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x825e26e0
	if (!ctx.cr0.eq) goto loc_825E26E0;
loc_825E26FC:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,277
	ctx.r5.s64 = 277;
	// li r4,262
	ctx.r4.s64 = 262;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825e0de0
	ctx.lr = 0x825E2710;
	sub_825E0DE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e12e8
	ctx.lr = 0x825E2718;
	sub_825E12E8(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x825e6c00
	ctx.lr = 0x825E2728;
	sub_825E6C00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825e5ab8
	ctx.lr = 0x825E2734;
	sub_825E5AB8(ctx, base);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E2740"))) PPC_WEAK_FUNC(sub_825E2740);
PPC_FUNC_IMPL(__imp__sub_825E2740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825E2748;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e5400
	ctx.lr = 0x825E2760;
	sub_825E5400(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// bl 0x825e0d10
	ctx.lr = 0x825E279C;
	sub_825E0D10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e2370
	ctx.lr = 0x825E27A4;
	sub_825E2370(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,272
	ctx.r5.s64 = 272;
	// li r4,276
	ctx.r4.s64 = 276;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0de0
	ctx.lr = 0x825E27B8;
	sub_825E0DE0(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e2170
	ctx.lr = 0x825E27C8;
	sub_825E2170(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825e27dc
	if (!ctx.cr6.eq) goto loc_825E27DC;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_825E27DC:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x825e6370
	ctx.lr = 0x825E27E8;
	sub_825E6370(ctx, base);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x825e5ab8
	ctx.lr = 0x825E27F4;
	sub_825E5AB8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e6c00
	ctx.lr = 0x825E2804;
	sub_825E6C00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e12e8
	ctx.lr = 0x825E280C;
	sub_825E12E8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E2818"))) PPC_WEAK_FUNC(sub_825E2818);
PPC_FUNC_IMPL(__imp__sub_825E2818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x825E2820;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r31,48(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// beq cr6,0x825e2888
	if (ctx.cr6.eq) goto loc_825E2888;
loc_825E2854:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,174
	ctx.r10.s64 = ctx.r10.s64 + 174;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// bne 0x825e2854
	if (!ctx.cr0.eq) goto loc_825E2854;
loc_825E2888:
	// li r4,259
	ctx.r4.s64 = 259;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825e0d80
	ctx.lr = 0x825E2894;
	sub_825E0D80(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x825e5400
	ctx.lr = 0x825E28CC;
	sub_825E5400(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825e2370
	ctx.lr = 0x825E28D8;
	sub_825E2370(ctx, base);
	// addi r4,r26,-1
	ctx.r4.s64 = ctx.r26.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e5ab8
	ctx.lr = 0x825E28E4;
	sub_825E5AB8(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x825e2908
	if (ctx.cr6.eq) goto loc_825E2908;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// li r4,28
	ctx.r4.s64 = 28;
	// ori r6,r6,65534
	ctx.r6.u64 = ctx.r6.u64 | 65534;
	// bl 0x825e59a0
	ctx.lr = 0x825E2904;
	sub_825E59A0(ctx, base);
	// b 0x825e2918
	goto loc_825E2918;
loc_825E2908:
	// addi r7,r30,-3
	ctx.r7.s64 = ctx.r30.s64 + -3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x825e5978
	ctx.lr = 0x825E2918;
	sub_825E5978(ctx, base);
loc_825E2918:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e5868
	ctx.lr = 0x825E2928;
	sub_825E5868(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x825e2938
	if (ctx.cr6.eq) goto loc_825E2938;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x825e2944
	goto loc_825E2944;
loc_825E2938:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e5a50
	ctx.lr = 0x825E2940;
	sub_825E5A50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_825E2944:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e6c00
	ctx.lr = 0x825E2950;
	sub_825E6C00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e12e8
	ctx.lr = 0x825E2958;
	sub_825E12E8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E2960"))) PPC_WEAK_FUNC(sub_825E2960);
PPC_FUNC_IMPL(__imp__sub_825E2960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825E2968;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r28,36(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x825e0ed0
	ctx.lr = 0x825E2984;
	sub_825E0ED0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-25108
	ctx.r4.s64 = ctx.r11.s64 + -25108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0f88
	ctx.lr = 0x825E2998;
	sub_825E0F88(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,-25120
	ctx.r4.s64 = ctx.r11.s64 + -25120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0f88
	ctx.lr = 0x825E29AC;
	sub_825E0F88(ctx, base);
	// li r4,61
	ctx.r4.s64 = 61;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0d80
	ctx.lr = 0x825E29B8;
	sub_825E0D80(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e2170
	ctx.lr = 0x825E29C8;
	sub_825E2170(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x825e5e38
	ctx.lr = 0x825E29D4;
	sub_825E5E38(ctx, base);
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0d80
	ctx.lr = 0x825E29E0;
	sub_825E0D80(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e2170
	ctx.lr = 0x825E29F0;
	sub_825E2170(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x825e5e38
	ctx.lr = 0x825E29FC;
	sub_825E5E38(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,44
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 44, ctx.xer);
	// bne cr6,0x825e2a30
	if (!ctx.cr6.eq) goto loc_825E2A30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0d10
	ctx.lr = 0x825E2A10;
	sub_825E0D10(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e2170
	ctx.lr = 0x825E2A20;
	sub_825E2170(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x825e5e38
	ctx.lr = 0x825E2A2C;
	sub_825E5E38(ctx, base);
	// b 0x825e2a60
	goto loc_825E2A60;
loc_825E2A30:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfd f1,4080(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4080);
	// bl 0x825e57d8
	ctx.lr = 0x825E2A40;
	sub_825E57D8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e59a0
	ctx.lr = 0x825E2A54;
	sub_825E59A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e5670
	ctx.lr = 0x825E2A60;
	sub_825E5670(ctx, base);
loc_825E2A60:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r11,-3
	ctx.r6.s64 = ctx.r11.s64 + -3;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x825e5978
	ctx.lr = 0x825E2A7C;
	sub_825E5978(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e5a50
	ctx.lr = 0x825E2A84;
	sub_825E5A50(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e2818
	ctx.lr = 0x825E2A9C;
	sub_825E2818(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E2AA8"))) PPC_WEAK_FUNC(sub_825E2AA8);
PPC_FUNC_IMPL(__imp__sub_825E2AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x825E2AB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,-25084
	ctx.r4.s64 = ctx.r11.s64 + -25084;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r29,48(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r28,36(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// bl 0x825e0f88
	ctx.lr = 0x825E2AD4;
	sub_825E0F88(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-25096
	ctx.r4.s64 = ctx.r11.s64 + -25096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0f88
	ctx.lr = 0x825E2AE8;
	sub_825E0F88(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0ed0
	ctx.lr = 0x825E2AF8;
	sub_825E0ED0(ctx, base);
	// li r30,3
	ctx.r30.s64 = 3;
loc_825E2AFC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,44
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 44, ctx.xer);
	// bne cr6,0x825e2b30
	if (!ctx.cr6.eq) goto loc_825E2B30;
	// bl 0x825e0d10
	ctx.lr = 0x825E2B10;
	sub_825E0D10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0e80
	ctx.lr = 0x825E2B18;
	sub_825E0E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0ed0
	ctx.lr = 0x825E2B28;
	sub_825E0ED0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x825e2afc
	goto loc_825E2AFC;
loc_825E2B30:
	// li r4,267
	ctx.r4.s64 = 267;
	// bl 0x825e0d80
	ctx.lr = 0x825E2B38;
	sub_825E0D80(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x825e1ce0
	ctx.lr = 0x825E2B48;
	sub_825E1CE0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e1250
	ctx.lr = 0x825E2B5C;
	sub_825E1250(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825e5608
	ctx.lr = 0x825E2B68;
	sub_825E5608(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// ori r6,r6,65534
	ctx.r6.u64 = ctx.r6.u64 | 65534;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825e59a0
	ctx.lr = 0x825E2B80;
	sub_825E59A0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e2818
	ctx.lr = 0x825E2B98;
	sub_825E2818(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E2BA0"))) PPC_WEAK_FUNC(sub_825E2BA0);
PPC_FUNC_IMPL(__imp__sub_825E2BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825E2BA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r9,52(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// bl 0x825e0d10
	ctx.lr = 0x825E2BE8;
	sub_825E0D10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0e80
	ctx.lr = 0x825E2BF0;
	sub_825E0E80(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,44
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 44, ctx.xer);
	// beq cr6,0x825e2c34
	if (ctx.cr6.eq) goto loc_825E2C34;
	// cmpwi cr6,r11,61
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 61, ctx.xer);
	// beq cr6,0x825e2c24
	if (ctx.cr6.eq) goto loc_825E2C24;
	// cmpwi cr6,r11,267
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 267, ctx.xer);
	// beq cr6,0x825e2c34
	if (ctx.cr6.eq) goto loc_825E2C34;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-25068
	ctx.r4.s64 = ctx.r11.s64 + -25068;
	// bl 0x825e43a0
	ctx.lr = 0x825E2C20;
	sub_825E43A0(ctx, base);
	// b 0x825e2c3c
	goto loc_825E2C3C;
loc_825E2C24:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e2960
	ctx.lr = 0x825E2C30;
	sub_825E2960(ctx, base);
	// b 0x825e2c3c
	goto loc_825E2C3C;
loc_825E2C34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e2aa8
	ctx.lr = 0x825E2C3C;
	sub_825E2AA8(ctx, base);
loc_825E2C3C:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,264
	ctx.r5.s64 = 264;
	// li r4,262
	ctx.r4.s64 = 262;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0de0
	ctx.lr = 0x825E2C50;
	sub_825E0DE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e12e8
	ctx.lr = 0x825E2C58;
	sub_825E12E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E2C60"))) PPC_WEAK_FUNC(sub_825E2C60);
PPC_FUNC_IMPL(__imp__sub_825E2C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825E2C68;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825e0d10
	ctx.lr = 0x825E2C84;
	sub_825E0D10(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e2170
	ctx.lr = 0x825E2C94;
	sub_825E2170(ctx, base);
	// li r29,3
	ctx.r29.s64 = 3;
	// b 0x825e2cd4
	goto loc_825E2CD4;
loc_825E2C9C:
	// bl 0x825e5a50
	ctx.lr = 0x825E2CA0;
	sub_825E5A50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e55b0
	ctx.lr = 0x825E2CB0;
	sub_825E55B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825e5ab8
	ctx.lr = 0x825E2CBC;
	sub_825E5AB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0d10
	ctx.lr = 0x825E2CC4;
	sub_825E0D10(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e2170
	ctx.lr = 0x825E2CD4;
	sub_825E2170(ctx, base);
loc_825E2CD4:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825e2ce4
	if (!ctx.cr6.eq) goto loc_825E2CE4;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
loc_825E2CE4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x825e6370
	ctx.lr = 0x825E2CF0;
	sub_825E6370(ctx, base);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x825e5ab8
	ctx.lr = 0x825E2CFC;
	sub_825E5AB8(ctx, base);
	// li r4,274
	ctx.r4.s64 = 274;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0d80
	ctx.lr = 0x825E2D08;
	sub_825E0D80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e2370
	ctx.lr = 0x825E2D10;
	sub_825E2370(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,261
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 261, ctx.xer);
	// beq cr6,0x825e2c9c
	if (ctx.cr6.eq) goto loc_825E2C9C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r11,260
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 260, ctx.xer);
	// bne cr6,0x825e2d60
	if (!ctx.cr6.eq) goto loc_825E2D60;
	// bl 0x825e5a50
	ctx.lr = 0x825E2D30;
	sub_825E5A50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e55b0
	ctx.lr = 0x825E2D40;
	sub_825E55B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825e5ab8
	ctx.lr = 0x825E2D4C;
	sub_825E5AB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0d10
	ctx.lr = 0x825E2D54;
	sub_825E0D10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e2370
	ctx.lr = 0x825E2D5C;
	sub_825E2370(ctx, base);
	// b 0x825e2d6c
	goto loc_825E2D6C;
loc_825E2D60:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825e55b0
	ctx.lr = 0x825E2D6C;
	sub_825E55B0(ctx, base);
loc_825E2D6C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825e5ab8
	ctx.lr = 0x825E2D78;
	sub_825E5AB8(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,266
	ctx.r5.s64 = 266;
	// li r4,262
	ctx.r4.s64 = 262;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0de0
	ctx.lr = 0x825E2D8C;
	sub_825E0DE0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E2D98"))) PPC_WEAK_FUNC(sub_825E2D98);
PPC_FUNC_IMPL(__imp__sub_825E2D98) {
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
	// bl 0x825e0e80
	ctx.lr = 0x825E2DB0;
	sub_825E0E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0ed0
	ctx.lr = 0x825E2DC0;
	sub_825E0ED0(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r7,r10,173
	ctx.r7.s64 = ctx.r10.s64 + 173;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lwzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x825e1b30
	ctx.lr = 0x825E2E30;
	sub_825E1B30(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825e6038
	ctx.lr = 0x825E2E40;
	sub_825E6038(ctx, base);
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

__attribute__((alias("__imp__sub_825E2E58"))) PPC_WEAK_FUNC(sub_825E2E58);
PPC_FUNC_IMPL(__imp__sub_825E2E58) {
	PPC_FUNC_PROLOGUE();
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
	// li r31,0
	ctx.r31.s64 = 0;
loc_825E2E74:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e0e80
	ctx.lr = 0x825E2E7C;
	sub_825E0E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e0ed0
	ctx.lr = 0x825E2E8C;
	sub_825E0ED0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,44
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 44, ctx.xer);
	// bne cr6,0x825e2ea8
	if (!ctx.cr6.eq) goto loc_825E2EA8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e0d10
	ctx.lr = 0x825E2EA4;
	sub_825E0D10(ctx, base);
	// b 0x825e2e74
	goto loc_825E2E74;
loc_825E2EA8:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,61
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 61, ctx.xer);
	// bne cr6,0x825e2ed0
	if (!ctx.cr6.eq) goto loc_825E2ED0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e0d10
	ctx.lr = 0x825E2EBC;
	sub_825E0D10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e1ce0
	ctx.lr = 0x825E2EC8;
	sub_825E1CE0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x825e2edc
	goto loc_825E2EDC;
loc_825E2ED0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_825E2EDC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e1250
	ctx.lr = 0x825E2EEC;
	sub_825E1250(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// beq cr6,0x825e2f3c
	if (ctx.cr6.eq) goto loc_825E2F3C;
loc_825E2F08:
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,174
	ctx.r9.s64 = ctx.r9.s64 + 174;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,24(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// bne 0x825e2f08
	if (!ctx.cr0.eq) goto loc_825E2F08;
loc_825E2F3C:
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

__attribute__((alias("__imp__sub_825E2F58"))) PPC_WEAK_FUNC(sub_825E2F58);
PPC_FUNC_IMPL(__imp__sub_825E2F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825E2F60;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x825e0d10
	ctx.lr = 0x825E2F70;
	sub_825E0D10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x825e0e80
	ctx.lr = 0x825E2F7C;
	sub_825E0E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x825e1110
	ctx.lr = 0x825E2F90;
	sub_825E1110(ctx, base);
	// b 0x825e2fa0
	goto loc_825E2FA0;
loc_825E2F94:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e15c8
	ctx.lr = 0x825E2FA0;
	sub_825E15C8(ctx, base);
loc_825E2FA0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// beq cr6,0x825e2f94
	if (ctx.cr6.eq) goto loc_825E2F94;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r11,58
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 58, ctx.xer);
	// bne cr6,0x825e2fc8
	if (!ctx.cr6.eq) goto loc_825E2FC8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x825e15c8
	ctx.lr = 0x825E2FC8;
	sub_825E15C8(ctx, base);
loc_825E2FC8:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e1b30
	ctx.lr = 0x825E2FDC;
	sub_825E1B30(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x825e6038
	ctx.lr = 0x825E2FEC;
	sub_825E6038(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x825e5868
	ctx.lr = 0x825E2FF8;
	sub_825E5868(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E3000"))) PPC_WEAK_FUNC(sub_825E3000);
PPC_FUNC_IMPL(__imp__sub_825E3000) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x825e0d10
	ctx.lr = 0x825E3020;
	sub_825E0D10(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,260
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 260, ctx.xer);
	// blt cr6,0x825e3044
	if (ctx.cr6.lt) goto loc_825E3044;
	// cmpwi cr6,r11,262
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 262, ctx.xer);
	// ble cr6,0x825e30cc
	if (!ctx.cr6.gt) goto loc_825E30CC;
	// cmpwi cr6,r11,276
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 276, ctx.xer);
	// beq cr6,0x825e30cc
	if (ctx.cr6.eq) goto loc_825E30CC;
	// cmpwi cr6,r11,287
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 287, ctx.xer);
	// beq cr6,0x825e30cc
	if (ctx.cr6.eq) goto loc_825E30CC;
loc_825E3044:
	// cmpwi cr6,r11,59
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 59, ctx.xer);
	// beq cr6,0x825e30cc
	if (ctx.cr6.eq) goto loc_825E30CC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e1ce0
	ctx.lr = 0x825E3058;
	sub_825E1CE0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x825e30ac
	if (!ctx.cr6.eq) goto loc_825E30AC;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x825e5810
	ctx.lr = 0x825E3078;
	sub_825E5810(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x825e30a0
	if (!ctx.cr6.eq) goto loc_825E30A0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r9,13
	ctx.r9.s64 = 13;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwimi r8,r9,1,26,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 1) & 0x3F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFC0);
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
loc_825E30A0:
	// lwz r5,52(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// li r31,-1
	ctx.r31.s64 = -1;
	// b 0x825e30d4
	goto loc_825E30D4;
loc_825E30AC:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x825e30c0
	if (!ctx.cr6.eq) goto loc_825E30C0;
	// bl 0x825e5ec8
	ctx.lr = 0x825E30B8;
	sub_825E5EC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x825e30d4
	goto loc_825E30D4;
loc_825E30C0:
	// bl 0x825e5e38
	ctx.lr = 0x825E30C4;
	sub_825E5E38(ctx, base);
	// lwz r5,52(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// b 0x825e30d4
	goto loc_825E30D4;
loc_825E30CC:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
loc_825E30D4:
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 1;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e5978
	ctx.lr = 0x825E30E8;
	sub_825E5978(ctx, base);
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

__attribute__((alias("__imp__sub_825E3100"))) PPC_WEAK_FUNC(sub_825E3100);
PPC_FUNC_IMPL(__imp__sub_825E3100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825E3108;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,266
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 266, ctx.xer);
	// bgt cr6,0x825e3228
	if (ctx.cr6.gt) goto loc_825E3228;
	// beq cr6,0x825e3218
	if (ctx.cr6.eq) goto loc_825E3218;
	// cmpwi cr6,r11,258
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 258, ctx.xer);
	// beq cr6,0x825e3188
	if (ctx.cr6.eq) goto loc_825E3188;
	// cmpwi cr6,r11,259
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 259, ctx.xer);
	// beq cr6,0x825e3160
	if (ctx.cr6.eq) goto loc_825E3160;
	// cmpwi cr6,r11,264
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 264, ctx.xer);
	// beq cr6,0x825e3150
	if (ctx.cr6.eq) goto loc_825E3150;
	// cmpwi cr6,r11,265
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 265, ctx.xer);
	// bne cr6,0x825e3248
	if (!ctx.cr6.eq) goto loc_825E3248;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825e2f58
	ctx.lr = 0x825E314C;
	sub_825E2F58(ctx, base);
	// b 0x825e32f0
	goto loc_825E32F0;
loc_825E3150:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e2ba0
	ctx.lr = 0x825E315C;
	sub_825E2BA0(ctx, base);
	// b 0x825e32f0
	goto loc_825E32F0;
loc_825E3160:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0d10
	ctx.lr = 0x825E3168;
	sub_825E0D10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e2370
	ctx.lr = 0x825E3170;
	sub_825E2370(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,259
	ctx.r5.s64 = 259;
	// li r4,262
	ctx.r4.s64 = 262;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0de0
	ctx.lr = 0x825E3184;
	sub_825E0DE0(ctx, base);
	// b 0x825e32f0
	goto loc_825E32F0;
loc_825E3188:
	// lwz r29,48(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r30,20(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x825e0d10
	ctx.lr = 0x825E319C;
	sub_825E0D10(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825e31cc
	if (ctx.cr6.eq) goto loc_825E31CC;
loc_825E31A4:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825e31c4
	if (!ctx.cr6.eq) goto loc_825E31C4;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// or r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 | ctx.r28.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x825e31a4
	if (!ctx.cr0.eq) goto loc_825E31A4;
loc_825E31C4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825e31dc
	if (!ctx.cr6.eq) goto loc_825E31DC;
loc_825E31CC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-25044
	ctx.r4.s64 = ctx.r11.s64 + -25044;
	// bl 0x825e43a0
	ctx.lr = 0x825E31DC;
	sub_825E43A0(ctx, base);
loc_825E31DC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x825e31fc
	if (ctx.cr6.eq) goto loc_825E31FC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825e5978
	ctx.lr = 0x825E31FC;
	sub_825E5978(ctx, base);
loc_825E31FC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825e5a50
	ctx.lr = 0x825E3204;
	sub_825E5A50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825e55b0
	ctx.lr = 0x825E3214;
	sub_825E55B0(ctx, base);
	// b 0x825e32ac
	goto loc_825E32AC;
loc_825E3218:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e2c60
	ctx.lr = 0x825E3224;
	sub_825E2C60(ctx, base);
	// b 0x825e32f0
	goto loc_825E32F0;
loc_825E3228:
	// cmpwi cr6,r11,268
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 268, ctx.xer);
	// beq cr6,0x825e32c4
	if (ctx.cr6.eq) goto loc_825E32C4;
	// cmpwi cr6,r11,272
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 272, ctx.xer);
	// beq cr6,0x825e32b4
	if (ctx.cr6.eq) goto loc_825E32B4;
	// cmpwi cr6,r11,273
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 273, ctx.xer);
	// beq cr6,0x825e32a4
	if (ctx.cr6.eq) goto loc_825E32A4;
	// cmpwi cr6,r11,277
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 277, ctx.xer);
	// beq cr6,0x825e3294
	if (ctx.cr6.eq) goto loc_825E3294;
loc_825E3248:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e1ec8
	ctx.lr = 0x825E3258;
	sub_825E1EC8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x825e3278
	if (!ctx.cr6.eq) goto loc_825E3278;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e5810
	ctx.lr = 0x825E3274;
	sub_825E5810(ctx, base);
	// b 0x825e32f0
	goto loc_825E32F0;
loc_825E3278:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825e23d0
	ctx.lr = 0x825E3290;
	sub_825E23D0(ctx, base);
	// b 0x825e32f0
	goto loc_825E32F0;
loc_825E3294:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e2578
	ctx.lr = 0x825E32A0;
	sub_825E2578(ctx, base);
	// b 0x825e32f0
	goto loc_825E32F0;
loc_825E32A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e3000
	ctx.lr = 0x825E32AC;
	sub_825E3000(ctx, base);
loc_825E32AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825e32f4
	goto loc_825E32F4;
loc_825E32B4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e2740
	ctx.lr = 0x825E32C0;
	sub_825E2740(ctx, base);
	// b 0x825e32f0
	goto loc_825E32F0;
loc_825E32C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0d10
	ctx.lr = 0x825E32CC;
	sub_825E0D10(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,265
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 265, ctx.xer);
	// bne cr6,0x825e32ec
	if (!ctx.cr6.eq) goto loc_825E32EC;
	// bl 0x825e0d10
	ctx.lr = 0x825E32E0;
	sub_825E0D10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e2d98
	ctx.lr = 0x825E32E8;
	sub_825E2D98(ctx, base);
	// b 0x825e32f0
	goto loc_825E32F0;
loc_825E32EC:
	// bl 0x825e2e58
	ctx.lr = 0x825E32F0;
	sub_825E2E58(ctx, base);
loc_825E32F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825E32F4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E3300"))) PPC_WEAK_FUNC(sub_825E3300);
PPC_FUNC_IMPL(__imp__sub_825E3300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// ble cr6,0x825e3338
	if (!ctx.cr6.gt) goto loc_825E3338;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-25192
	ctx.r4.s64 = ctx.r11.s64 + -25192;
	// bl 0x825e43a0
	ctx.lr = 0x825E3338;
	sub_825E43A0(ctx, base);
loc_825E3338:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,260
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 260, ctx.xer);
	// blt cr6,0x825e335c
	if (ctx.cr6.lt) goto loc_825E335C;
	// cmpwi cr6,r11,262
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 262, ctx.xer);
	// ble cr6,0x825e3390
	if (!ctx.cr6.gt) goto loc_825E3390;
	// cmpwi cr6,r11,276
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 276, ctx.xer);
	// beq cr6,0x825e3390
	if (ctx.cr6.eq) goto loc_825E3390;
	// cmpwi cr6,r11,287
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 287, ctx.xer);
	// beq cr6,0x825e3390
	if (ctx.cr6.eq) goto loc_825E3390;
loc_825E335C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e3100
	ctx.lr = 0x825E3364;
	sub_825E3100(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,59
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 59, ctx.xer);
	// bne cr6,0x825e337c
	if (!ctx.cr6.eq) goto loc_825E337C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0d10
	ctx.lr = 0x825E337C;
	sub_825E0D10(ctx, base);
loc_825E337C:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// beq cr6,0x825e3338
	if (ctx.cr6.eq) goto loc_825E3338;
loc_825E3390:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E33B8"))) PPC_WEAK_FUNC(sub_825E33B8);
PPC_FUNC_IMPL(__imp__sub_825E33B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-1680(r1)
	ea = -1680 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r5,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_825E33EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825e33ec
	if (!ctx.cr6.eq) goto loc_825E33EC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825de870
	ctx.lr = 0x825E3410;
	sub_825DE870(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e3f20
	ctx.lr = 0x825E3424;
	sub_825E3F20(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825e13a8
	ctx.lr = 0x825E3430;
	sub_825E13A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825e0d10
	ctx.lr = 0x825E3438;
	sub_825E0D10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825e3300
	ctx.lr = 0x825E3440;
	sub_825E3300(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,287
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 287, ctx.xer);
	// beq cr6,0x825e345c
	if (ctx.cr6.eq) goto loc_825E345C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-25024
	ctx.r4.s64 = ctx.r11.s64 + -25024;
	// bl 0x825e43a0
	ctx.lr = 0x825E345C;
	sub_825E43A0(ctx, base);
loc_825E345C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825e1440
	ctx.lr = 0x825E3464;
	sub_825E1440(ctx, base);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r1,r1,1680
	ctx.r1.s64 = ctx.r1.s64 + 1680;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E3480"))) PPC_WEAK_FUNC(sub_825E3480);
PPC_FUNC_IMPL(__imp__sub_825E3480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq 0x825e34c8
	if (ctx.cr0.eq) goto loc_825E34C8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825e34d4
	goto loc_825E34D4;
loc_825E34C8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x825dfb60
	ctx.lr = 0x825E34D0;
	sub_825DFB60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_825E34D4:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x825e34f0
	if (!ctx.cr6.eq) goto loc_825E34F0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-25008
	ctx.r4.s64 = ctx.r11.s64 + -25008;
	// bl 0x825e04f8
	ctx.lr = 0x825E34F0;
	sub_825E04F8(ctx, base);
loc_825E34F0:
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

__attribute__((alias("__imp__sub_825E3510"))) PPC_WEAK_FUNC(sub_825E3510);
PPC_FUNC_IMPL(__imp__sub_825E3510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825E3518;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825e3560
	if (ctx.cr6.eq) goto loc_825E3560;
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// beq cr6,0x825e3584
	if (ctx.cr6.eq) goto loc_825E3584;
	// subf r11,r4,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r4.s64;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_825E3544:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825e3480
	ctx.lr = 0x825E354C;
	sub_825E3480(ctx, base);
	// stb r3,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r3.u8);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bne 0x825e3544
	if (!ctx.cr0.eq) goto loc_825E3544;
	// b 0x825e3584
	goto loc_825E3584;
loc_825E3560:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x825dfc58
	ctx.lr = 0x825E3568;
	sub_825DFC58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825e3584
	if (ctx.cr0.eq) goto loc_825E3584;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r11,-25008
	ctx.r4.s64 = ctx.r11.s64 + -25008;
	// bl 0x825e04f8
	ctx.lr = 0x825E3584;
	sub_825E04F8(ctx, base);
loc_825E3584:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E3590"))) PPC_WEAK_FUNC(sub_825E3590);
PPC_FUNC_IMPL(__imp__sub_825E3590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x825E3598;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825e3604
	if (ctx.cr6.eq) goto loc_825E3604;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x825e362c
	if (ctx.cr6.eq) goto loc_825E362C;
	// add r11,r4,r31
	ctx.r11.u64 = ctx.r4.u64 + ctx.r31.u64;
	// subfic r25,r31,1
	ctx.xer.ca = ctx.r31.u32 <= 1;
	ctx.r25.s64 = 1 - ctx.r31.s64;
	// addi r28,r11,-1
	ctx.r28.s64 = ctx.r11.s64 + -1;
loc_825E35C8:
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x825e35f4
	if (ctx.cr6.eq) goto loc_825E35F4;
	// subfic r30,r25,1
	ctx.xer.ca = ctx.r25.u32 <= 1;
	ctx.r30.s64 = 1 - ctx.r25.s64;
loc_825E35DC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825e3480
	ctx.lr = 0x825E35E4;
	sub_825E3480(ctx, base);
	// stb r3,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r3.u8);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// bne 0x825e35dc
	if (!ctx.cr0.eq) goto loc_825E35DC;
loc_825E35F4:
	// add r28,r28,r31
	ctx.r28.u64 = ctx.r28.u64 + ctx.r31.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x825e35c8
	if (!ctx.cr6.eq) goto loc_825E35C8;
	// b 0x825e362c
	goto loc_825E362C;
loc_825E3604:
	// mullw r5,r27,r31
	ctx.r5.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r31.s32);
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// bl 0x825dfc58
	ctx.lr = 0x825E3610;
	sub_825DFC58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825e362c
	if (ctx.cr0.eq) goto loc_825E362C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,16(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r11,-25008
	ctx.r4.s64 = ctx.r11.s64 + -25008;
	// bl 0x825e04f8
	ctx.lr = 0x825E362C;
	sub_825E04F8(ctx, base);
loc_825E362C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E3638"))) PPC_WEAK_FUNC(sub_825E3638);
PPC_FUNC_IMPL(__imp__sub_825E3638) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825e3510
	ctx.lr = 0x825E3658;
	sub_825E3510(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x825e3678
	if (!ctx.cr6.lt) goto loc_825E3678;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-24976
	ctx.r4.s64 = ctx.r11.s64 + -24976;
	// bl 0x825e04f8
	ctx.lr = 0x825E3678;
	sub_825E04F8(ctx, base);
loc_825E3678:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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

__attribute__((alias("__imp__sub_825E3690"))) PPC_WEAK_FUNC(sub_825E3690);
PPC_FUNC_IMPL(__imp__sub_825E3690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x825E3698;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825e3510
	ctx.lr = 0x825E36AC;
	sub_825E3510(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825e36c0
	if (!ctx.cr6.eq) goto loc_825E36C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825e3710
	goto loc_825E3710;
loc_825E36C0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825dfd08
	ctx.lr = 0x825E36D0;
	sub_825DFD08(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x825dfc58
	ctx.lr = 0x825E36E4;
	sub_825DFC58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825e3700
	if (ctx.cr0.eq) goto loc_825E3700;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-25008
	ctx.r4.s64 = ctx.r11.s64 + -25008;
	// bl 0x825e04f8
	ctx.lr = 0x825E3700;
	sub_825E04F8(ctx, base);
loc_825E3700:
	// addi r5,r30,-1
	ctx.r5.s64 = ctx.r30.s64 + -1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x825de870
	ctx.lr = 0x825E3710;
	sub_825DE870(ctx, base);
loc_825E3710:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E3718"))) PPC_WEAK_FUNC(sub_825E3718);
PPC_FUNC_IMPL(__imp__sub_825E3718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x825E3720;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x825e3638
	ctx.lr = 0x825E3730;
	sub_825E3638(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r6,r30,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x825e0bc8
	ctx.lr = 0x825E3748;
	sub_825E0BC8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r30.u32);
	// stw r3,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r3.u32);
	// ble cr6,0x825e37f0
	if (!ctx.cr6.gt) goto loc_825E37F0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r26,r11,-24912
	ctx.r26.s64 = ctx.r11.s64 + -24912;
loc_825E3764:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r29,r11,r27
	ctx.r29.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x825e3480
	ctx.lr = 0x825E3774;
	sub_825E3480(ctx, base);
	// clrlwi. r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x825e37dc
	if (ctx.cr0.eq) goto loc_825E37DC;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x825e37b8
	if (ctx.cr6.eq) goto loc_825E37B8;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// beq cr6,0x825e37a0
	if (ctx.cr6.eq) goto loc_825E37A0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825e04f8
	ctx.lr = 0x825E379C;
	sub_825E04F8(ctx, base);
	// b 0x825e37e4
	goto loc_825E37E4;
loc_825E37A0:
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x825e3690
	ctx.lr = 0x825E37B0;
	sub_825E3690(ctx, base);
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// b 0x825e37e4
	goto loc_825E37E4;
loc_825E37B8:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x825e3510
	ctx.lr = 0x825E37D0;
	sub_825E3510(ctx, base);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stfd f0,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.f0.u64);
	// b 0x825e37e4
	goto loc_825E37E4;
loc_825E37DC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_825E37E4:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// bne 0x825e3764
	if (!ctx.cr0.eq) goto loc_825E3764;
loc_825E37F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e3638
	ctx.lr = 0x825E37F8;
	sub_825E3638(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r6,r30,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x825e0bc8
	ctx.lr = 0x825E3810;
	sub_825E0BC8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,52(r28)
	PPC_STORE_U32(ctx.r28.u32 + 52, ctx.r30.u32);
	// stw r3,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r3.u32);
	// ble cr6,0x825e3844
	if (!ctx.cr6.gt) goto loc_825E3844;
	// li r29,0
	ctx.r29.s64 = 0;
loc_825E3824:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,32(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// bl 0x825e3850
	ctx.lr = 0x825E3830;
	sub_825E3850(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwx r3,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x825e3824
	if (!ctx.cr0.eq) goto loc_825E3824;
loc_825E3844:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E3850"))) PPC_WEAK_FUNC(sub_825E3850);
PPC_FUNC_IMPL(__imp__sub_825E3850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x825E3858;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825dec50
	ctx.lr = 0x825E386C;
	sub_825DEC50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e3690
	ctx.lr = 0x825E3878;
	sub_825E3690(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
	// bne 0x825e3888
	if (!ctx.cr0.eq) goto loc_825E3888;
	// stw r29,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
loc_825E3888:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e3638
	ctx.lr = 0x825E3890;
	sub_825E3638(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
	// bl 0x825e3480
	ctx.lr = 0x825E38A0;
	sub_825E3480(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,68(r30)
	PPC_STORE_U8(ctx.r30.u32 + 68, ctx.r11.u8);
	// bl 0x825e3480
	ctx.lr = 0x825E38B0;
	sub_825E3480(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,69(r30)
	PPC_STORE_U8(ctx.r30.u32 + 69, ctx.r11.u8);
	// bl 0x825e3480
	ctx.lr = 0x825E38C0;
	sub_825E3480(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,70(r30)
	PPC_STORE_U8(ctx.r30.u32 + 70, ctx.r11.u8);
	// bl 0x825e3480
	ctx.lr = 0x825E38D0;
	sub_825E3480(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,71(r30)
	PPC_STORE_U8(ctx.r30.u32 + 71, ctx.r11.u8);
	// bl 0x825e3638
	ctx.lr = 0x825E38E0;
	sub_825E3638(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r6,r29,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x825e0bc8
	ctx.lr = 0x825E38F8;
	sub_825E0BC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r29,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r29.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r4.u32);
	// bl 0x825e3590
	ctx.lr = 0x825E3914;
	sub_825E3590(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e3638
	ctx.lr = 0x825E391C;
	sub_825E3638(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r6,r29,12
	ctx.r6.s64 = ctx.r29.s64 * 12;
	// bl 0x825e0bc8
	ctx.lr = 0x825E3934;
	sub_825E0BC8(ctx, base);
	// stw r29,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r29.u32);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x825e3994
	if (!ctx.cr6.gt) goto loc_825E3994;
	// li r28,0
	ctx.r28.s64 = 0;
loc_825E3948:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e3690
	ctx.lr = 0x825E3950;
	sub_825E3690(ctx, base);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r11,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r11.u32);
	// bl 0x825e3638
	ctx.lr = 0x825E3964;
	sub_825E3638(ctx, base);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bl 0x825e3638
	ctx.lr = 0x825E397C;
	sub_825E3638(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// bne 0x825e3948
	if (!ctx.cr0.eq) goto loc_825E3948;
loc_825E3994:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e3638
	ctx.lr = 0x825E399C;
	sub_825E3638(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x825e39c8
	if (ctx.cr0.eq) goto loc_825E39C8;
	// lbz r7,68(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 68);
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x825e39c8
	if (ctx.cr6.eq) goto loc_825E39C8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-24956
	ctx.r4.s64 = ctx.r11.s64 + -24956;
	// bl 0x825e04f8
	ctx.lr = 0x825E39C8;
	sub_825E04F8(ctx, base);
loc_825E39C8:
	// rlwinm r6,r29,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825e0bc8
	ctx.lr = 0x825E39DC;
	sub_825E0BC8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r29.u32);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// ble cr6,0x825e3a0c
	if (!ctx.cr6.gt) goto loc_825E3A0C;
	// li r28,0
	ctx.r28.s64 = 0;
loc_825E39F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e3690
	ctx.lr = 0x825E39F8;
	sub_825E3690(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stwx r3,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r3.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x825e39f0
	if (!ctx.cr0.eq) goto loc_825E39F0;
loc_825E3A0C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e3718
	ctx.lr = 0x825E3A18;
	sub_825E3718(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e3638
	ctx.lr = 0x825E3A20;
	sub_825E3638(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r6,r29,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x825e0bc8
	ctx.lr = 0x825E3A38;
	sub_825E0BC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r29,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r29.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r4.u32);
	// bl 0x825e3590
	ctx.lr = 0x825E3A54;
	sub_825E3590(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e01c8
	ctx.lr = 0x825E3A5C;
	sub_825E01C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825e3a78
	if (!ctx.cr0.eq) goto loc_825E3A78;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-24880
	ctx.r4.s64 = ctx.r11.s64 + -24880;
	// bl 0x825e04f8
	ctx.lr = 0x825E3A78;
	sub_825E04F8(ctx, base);
loc_825E3A78:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

