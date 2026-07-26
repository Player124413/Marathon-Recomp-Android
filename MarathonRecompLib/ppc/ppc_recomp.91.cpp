#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82675C48"))) PPC_WEAK_FUNC(sub_82675C48);
PPC_FUNC_IMPL(__imp__sub_82675C48) {
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
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x825e6f70
	ctx.lr = 0x82675C5C;
	sub_825E6F70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82675c78
	if (ctx.cr6.eq) goto loc_82675C78;
	// bl 0x82675a60
	ctx.lr = 0x82675C68;
	sub_82675A60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82675C78:
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

__attribute__((alias("__imp__sub_82675C90"))) PPC_WEAK_FUNC(sub_82675C90);
PPC_FUNC_IMPL(__imp__sub_82675C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x828fc8d8
	ctx.lr = 0x82675CA8;
	sub_828FC8D8(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// addi r9,r10,3700
	ctx.r9.s64 = ctx.r10.s64 + 3700;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,15
	ctx.r8.s64 = 15;
	// lis r7,19794
	ctx.r7.s64 = 1297219584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r7,r7,16706
	ctx.r7.u64 = ctx.r7.u64 | 16706;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82675CF8"))) PPC_WEAK_FUNC(sub_82675CF8);
PPC_FUNC_IMPL(__imp__sub_82675CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r3,19794
	ctx.r3.s64 = 1297219584;
	// ori r3,r3,16706
	ctx.r3.u64 = ctx.r3.u64 | 16706;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82675D08"))) PPC_WEAK_FUNC(sub_82675D08);
PPC_FUNC_IMPL(__imp__sub_82675D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,3700
	ctx.r11.s64 = ctx.r11.s64 + 3700;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82675d3c
	if (ctx.cr6.eq) goto loc_82675D3C;
	// bl 0x82581e38
	ctx.lr = 0x82675D3C;
	sub_82581E38(ctx, base);
loc_82675D3C:
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82675d54
	if (ctx.cr6.lt) goto loc_82675D54;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82675D54;
	sub_82186190(ctx, base);
loc_82675D54:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// stb r11,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r11.u8);
	// bl 0x828fc928
	ctx.lr = 0x82675D70;
	sub_828FC928(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82675D88"))) PPC_WEAK_FUNC(sub_82675D88);
PPC_FUNC_IMPL(__imp__sub_82675D88) {
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
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x825e6f70
	ctx.lr = 0x82675D9C;
	sub_825E6F70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82675db8
	if (ctx.cr6.eq) goto loc_82675DB8;
	// bl 0x82675c90
	ctx.lr = 0x82675DA8;
	sub_82675C90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82675DB8:
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

__attribute__((alias("__imp__sub_82675DD0"))) PPC_WEAK_FUNC(sub_82675DD0);
PPC_FUNC_IMPL(__imp__sub_82675DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82675d08
	ctx.lr = 0x82675DF0;
	sub_82675D08(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82675e08
	if (ctx.cr6.eq) goto loc_82675E08;
	// bl 0x825e6f78
	ctx.lr = 0x82675E04;
	sub_825E6F78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82675E08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82675E20"))) PPC_WEAK_FUNC(sub_82675E20);
PPC_FUNC_IMPL(__imp__sub_82675E20) {
	PPC_FUNC_PROLOGUE();
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
	// lhz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82675f78
	if (!ctx.cr6.eq) goto loc_82675F78;
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82675f10
	if (ctx.cr6.eq) goto loc_82675F10;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82675E64:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82675e64
	if (!ctx.cr6.eq) goto loc_82675E64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82675E8C;
	sub_82161E08(ctx, base);
	// li r11,46
	ctx.r11.s64 = 46;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82169e08
	ctx.lr = 0x82675EA8;
	sub_82169E08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82675ec0
	if (ctx.cr6.eq) goto loc_82675EC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x82161648
	ctx.lr = 0x82675EC0;
	sub_82161648(ctx, base);
loc_82675EC0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82675ed4
	if (ctx.cr6.lt) goto loc_82675ED4;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82675ed8
	goto loc_82675ED8;
loc_82675ED4:
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
loc_82675ED8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821620e8
	ctx.lr = 0x82675EE0;
	sub_821620E8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82642fc8
	ctx.lr = 0x82675EEC;
	sub_82642FC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,44
	ctx.r3.s64 = ctx.r30.s64 + 44;
	// bl 0x823032b8
	ctx.lr = 0x82675EF8;
	sub_823032B8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82675f08
	if (ctx.cr6.eq) goto loc_82675F08;
	// bl 0x82581e38
	ctx.lr = 0x82675F08;
	sub_82581E38(ctx, base);
loc_82675F08:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825fc7b8
	ctx.lr = 0x82675F10;
	sub_825FC7B8(ctx, base);
loc_82675F10:
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82675f2c
	if (ctx.cr6.eq) goto loc_82675F2C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82675f80
	if (!ctx.cr6.eq) goto loc_82675F80;
loc_82675F2C:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82675f78
	if (!ctx.cr6.eq) goto loc_82675F78;
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82675f68
	if (ctx.cr6.lt) goto loc_82675F68;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x821e0968
	ctx.lr = 0x82675F60;
	sub_821E0968(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82675f84
	goto loc_82675F84;
loc_82675F68:
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x821e0968
	ctx.lr = 0x82675F78;
	sub_821E0968(ctx, base);
loc_82675F78:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82675f84
	goto loc_82675F84;
loc_82675F80:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82675F84:
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

__attribute__((alias("__imp__sub_82675FA0"))) PPC_WEAK_FUNC(sub_82675FA0);
PPC_FUNC_IMPL(__imp__sub_82675FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r3,20549
	ctx.r3.s64 = 1346699264;
	// ori r3,r3,17952
	ctx.r3.u64 = ctx.r3.u64 | 17952;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82675FB0"))) PPC_WEAK_FUNC(sub_82675FB0);
PPC_FUNC_IMPL(__imp__sub_82675FB0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r3,r11,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82675FC0"))) PPC_WEAK_FUNC(sub_82675FC0);
PPC_FUNC_IMPL(__imp__sub_82675FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x825e6f70
	ctx.lr = 0x82675FD8;
	sub_825E6F70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82676018
	if (ctx.cr6.eq) goto loc_82676018;
	// bl 0x828fc8d8
	ctx.lr = 0x82675FE8;
	sub_828FC8D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,20037
	ctx.r10.s64 = 1313144832;
	// addi r11,r11,3720
	ctx.r11.s64 = ctx.r11.s64 + 3720;
	// ori r10,r10,20545
	ctx.r10.u64 = ctx.r10.u64 | 20545;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82676018:
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

__attribute__((alias("__imp__sub_82676030"))) PPC_WEAK_FUNC(sub_82676030);
PPC_FUNC_IMPL(__imp__sub_82676030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,3720
	ctx.r11.s64 = ctx.r11.s64 + 3720;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828fc928
	ctx.lr = 0x8267605C;
	sub_828FC928(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82676074
	if (ctx.cr6.eq) goto loc_82676074;
	// bl 0x825e6f78
	ctx.lr = 0x82676070;
	sub_825E6F78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82676074:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82676090"))) PPC_WEAK_FUNC(sub_82676090);
PPC_FUNC_IMPL(__imp__sub_82676090) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826760ac
	if (ctx.cr6.eq) goto loc_826760AC;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
loc_826760AC:
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826760B8"))) PPC_WEAK_FUNC(sub_826760B8);
PPC_FUNC_IMPL(__imp__sub_826760B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826760d4
	if (ctx.cr6.eq) goto loc_826760D4;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
loc_826760D4:
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826760E0"))) PPC_WEAK_FUNC(sub_826760E0);
PPC_FUNC_IMPL(__imp__sub_826760E0) {
	PPC_FUNC_PROLOGUE();
	// lis r3,17476
	ctx.r3.s64 = 1145307136;
	// ori r3,r3,21280
	ctx.r3.u64 = ctx.r3.u64 | 21280;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826760F0"))) PPC_WEAK_FUNC(sub_826760F0);
PPC_FUNC_IMPL(__imp__sub_826760F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x825e6f70
	ctx.lr = 0x82676108;
	sub_825E6F70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8267613c
	if (ctx.cr6.eq) goto loc_8267613C;
	// bl 0x82678500
	ctx.lr = 0x82676118;
	sub_82678500(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,3740
	ctx.r11.s64 = ctx.r11.s64 + 3740;
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
loc_8267613C:
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

__attribute__((alias("__imp__sub_82676158"))) PPC_WEAK_FUNC(sub_82676158);
PPC_FUNC_IMPL(__imp__sub_82676158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82676160;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,3740
	ctx.r11.s64 = ctx.r11.s64 + 3740;
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,-15120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82676190
	if (!ctx.cr6.eq) goto loc_82676190;
	// bl 0x82642018
	ctx.lr = 0x8267618C;
	sub_82642018(ctx, base);
	// stw r3,-15120(r30)
	PPC_STORE_U32(ctx.r30.u32 + -15120, ctx.r3.u32);
loc_82676190:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8265a0c0
	ctx.lr = 0x82676198;
	sub_8265A0C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82678410
	ctx.lr = 0x826761A0;
	sub_82678410(ctx, base);
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826761b8
	if (ctx.cr6.eq) goto loc_826761B8;
	// bl 0x825e6f78
	ctx.lr = 0x826761B4;
	sub_825E6F78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826761B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826761C0"))) PPC_WEAK_FUNC(sub_826761C0);
PPC_FUNC_IMPL(__imp__sub_826761C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x826761C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r28,15
	ctx.r28.s64 = 15;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r30,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r30.u8);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
loc_826761F0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826761f0
	if (!ctx.cr6.eq) goto loc_826761F0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82676218;
	sub_82161E08(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8216f658
	ctx.lr = 0x82676224;
	sub_8216F658(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82676238
	if (ctx.cr6.lt) goto loc_82676238;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82186190
	ctx.lr = 0x82676238;
	sub_82186190(ctx, base);
loc_82676238:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r30,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r30.u8);
	// beq cr6,0x826762a0
	if (ctx.cr6.eq) goto loc_826762A0;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826762a0
	if (ctx.cr6.eq) goto loc_826762A0;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// stw r11,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r11.u32);
	// bl 0x822d9150
	ctx.lr = 0x82676274;
	sub_822D9150(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826783f8
	ctx.lr = 0x82676280;
	sub_826783F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676294
	if (ctx.cr6.eq) goto loc_82676294;
	// bl 0x82581e38
	ctx.lr = 0x82676294;
	sub_82581E38(ctx, base);
loc_82676294:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_826762A0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x821e0968
	ctx.lr = 0x826762B0;
	sub_821E0968(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826762c0
	if (ctx.cr6.eq) goto loc_826762C0;
	// bl 0x82581e38
	ctx.lr = 0x826762C0;
	sub_82581E38(ctx, base);
loc_826762C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826762D0"))) PPC_WEAK_FUNC(sub_826762D0);
PPC_FUNC_IMPL(__imp__sub_826762D0) {
	PPC_FUNC_PROLOGUE();
	// lis r3,17476
	ctx.r3.s64 = 1145307136;
	// ori r3,r3,19744
	ctx.r3.u64 = ctx.r3.u64 | 19744;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826762E0"))) PPC_WEAK_FUNC(sub_826762E0);
PPC_FUNC_IMPL(__imp__sub_826762E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x825e6f70
	ctx.lr = 0x826762F8;
	sub_825E6F70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8267632c
	if (ctx.cr6.eq) goto loc_8267632C;
	// bl 0x82678500
	ctx.lr = 0x82676308;
	sub_82678500(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,3768
	ctx.r11.s64 = ctx.r11.s64 + 3768;
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
loc_8267632C:
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

__attribute__((alias("__imp__sub_82676348"))) PPC_WEAK_FUNC(sub_82676348);
PPC_FUNC_IMPL(__imp__sub_82676348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,3768
	ctx.r11.s64 = ctx.r11.s64 + 3768;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82678410
	ctx.lr = 0x82676374;
	sub_82678410(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267638c
	if (ctx.cr6.eq) goto loc_8267638C;
	// bl 0x825e6f78
	ctx.lr = 0x82676388;
	sub_825E6F78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8267638C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826763A8"))) PPC_WEAK_FUNC(sub_826763A8);
PPC_FUNC_IMPL(__imp__sub_826763A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x826763B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-32045
	ctx.r27.s64 = -2100101120;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r4,26768(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 26768);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x826763e0
	if (!ctx.cr6.eq) goto loc_826763E0;
	// bl 0x8216d1a0
	ctx.lr = 0x826763D8;
	sub_8216D1A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,26768(r27)
	PPC_STORE_U32(ctx.r27.u32 + 26768, ctx.r4.u32);
loc_826763E0:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82582540
	ctx.lr = 0x826763F8;
	sub_82582540(ctx, base);
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,9908
	ctx.r6.s64 = ctx.r11.s64 + 9908;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,6088
	ctx.r5.s64 = ctx.r11.s64 + 6088;
	// bl 0x826df418
	ctx.lr = 0x82676418;
	sub_826DF418(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82676428
	if (ctx.cr6.eq) goto loc_82676428;
	// bl 0x82659610
	ctx.lr = 0x82676428;
	sub_82659610(ctx, base);
loc_82676428:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676438
	if (ctx.cr6.eq) goto loc_82676438;
	// bl 0x82581e38
	ctx.lr = 0x82676438;
	sub_82581E38(ctx, base);
loc_82676438:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82676448"))) PPC_WEAK_FUNC(sub_82676448);
PPC_FUNC_IMPL(__imp__sub_82676448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82676450;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r27,8(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r28,r4,16
	ctx.r28.s64 = ctx.r4.s64 + 16;
	// addi r4,r11,3792
	ctx.r4.s64 = ctx.r11.s64 + 3792;
	// rlwinm r29,r5,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// extsw r5,r28
	ctx.r5.s64 = ctx.r28.s32;
	// stwx r31,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r31.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stwx r31,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r31.u32);
	// bl 0x826e0998
	ctx.lr = 0x8267648C;
	sub_826E0998(ctx, base);
	// li r26,15
	ctx.r26.s64 = 15;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
loc_826764A4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826764a4
	if (!ctx.cr6.eq) goto loc_826764A4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x826764CC;
	sub_82161E08(ctx, base);
	// clrldi r6,r27,32
	ctx.r6.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826763a8
	ctx.lr = 0x826764E0;
	sub_826763A8(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x826764f4
	if (ctx.cr6.lt) goto loc_826764F4;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82186190
	ctx.lr = 0x826764F4;
	sub_82186190(ctx, base);
loc_826764F4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// beq cr6,0x82676520
	if (ctx.cr6.eq) goto loc_82676520;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267652c
	if (!ctx.cr6.eq) goto loc_8267652C;
	// bl 0x82581e38
	ctx.lr = 0x82676520;
	sub_82581E38(ctx, base);
loc_82676520:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_8267652C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267653C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stwx r3,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82676558;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// stwx r11,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r11.u32);
	// bl 0x822d9150
	ctx.lr = 0x82676570;
	sub_822D9150(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676580
	if (ctx.cr6.eq) goto loc_82676580;
	// bl 0x82581e38
	ctx.lr = 0x82676580;
	sub_82581E38(ctx, base);
loc_82676580:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82676590"))) PPC_WEAK_FUNC(sub_82676590);
PPC_FUNC_IMPL(__imp__sub_82676590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82676598;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r10,17476
	ctx.r10.s64 = 1145307136;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r10,r10,19744
	ctx.r10.u64 = ctx.r10.u64 | 19744;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826765c4
	if (ctx.cr6.eq) goto loc_826765C4;
loc_826765B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_826765C4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// lhz r11,10(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 10);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267662c
	if (ctx.cr6.eq) goto loc_8267662C;
	// lis r11,17491
	ctx.r11.s64 = 1146290176;
	// ori r27,r11,17227
	ctx.r27.u64 = ctx.r11.u64 | 17227;
loc_826765E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82676614
	if (!ctx.cr6.eq) goto loc_82676614;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82676448
	ctx.lr = 0x82676604;
	sub_82676448(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826765b8
	if (ctx.cr6.eq) goto loc_826765B8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82676614:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r10,10(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 10);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// blt cr6,0x826765e8
	if (ctx.cr6.lt) goto loc_826765E8;
loc_8267662C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82676638"))) PPC_WEAK_FUNC(sub_82676638);
PPC_FUNC_IMPL(__imp__sub_82676638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82676640;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r10,17476
	ctx.r10.s64 = 1145307136;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r10,19744
	ctx.r10.u64 = ctx.r10.u64 | 19744;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8267666c
	if (!ctx.cr6.eq) goto loc_8267666C;
	// lhz r30,10(r29)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r29.u32 + 10);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bge cr6,0x82676678
	if (!ctx.cr6.lt) goto loc_82676678;
loc_8267666C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82676678:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r30,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,-17740(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17740);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82676698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// beq cr6,0x8267666c
	if (ctx.cr6.eq) goto loc_8267666C;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// bl 0x82676590
	ctx.lr = 0x826766C8;
	sub_82676590(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267666c
	if (ctx.cr6.eq) goto loc_8267666C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826783f8
	ctx.lr = 0x826766E0;
	sub_826783F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826766E8"))) PPC_WEAK_FUNC(sub_826766E8);
PPC_FUNC_IMPL(__imp__sub_826766E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x826766F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,46
	ctx.r4.s64 = 46;
	// bl 0x826dfbf0
	ctx.lr = 0x826766FC;
	sub_826DFBF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82676838
	if (ctx.cr6.eq) goto loc_82676838;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x826e44b8
	ctx.lr = 0x82676714;
	sub_826E44B8(ctx, base);
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x826e44b8
	ctx.lr = 0x82676724;
	sub_826E44B8(ctx, base);
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x826e44b8
	ctx.lr = 0x82676734;
	sub_826E44B8(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | ctx.r29.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 | ctx.r3.u64;
	// addis r11,r11,-11864
	ctx.r11.s64 = ctx.r11.s64 + -777519104;
	// addi r11,r11,-20036
	ctx.r11.s64 = ctx.r11.s64 + -20036;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bgt cr6,0x82676838
	if (ctx.cr6.gt) goto loc_82676838;
	// lis r12,-32153
	ctx.r12.s64 = -2107179008;
	// addi r12,r12,26492
	ctx.r12.s64 = ctx.r12.s64 + 26492;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82676828;
	case 1:
		goto loc_82676838;
	case 2:
		goto loc_826767F8;
	case 3:
		goto loc_826767E8;
	case 4:
		goto loc_82676838;
	case 5:
		goto loc_82676818;
	case 6:
		goto loc_82676838;
	case 7:
		goto loc_82676838;
	case 8:
		goto loc_82676838;
	case 9:
		goto loc_826767D8;
	case 10:
		goto loc_82676838;
	case 11:
		goto loc_826767C8;
	case 12:
		goto loc_82676838;
	case 13:
		goto loc_82676838;
	case 14:
		goto loc_82676838;
	case 15:
		goto loc_82676838;
	case 16:
		goto loc_82676838;
	case 17:
		goto loc_82676838;
	case 18:
		goto loc_82676808;
	default:
		__builtin_unreachable();
	}
	// lwz r19,26664(r7)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r7.u32 + 26664);
	// lwz r19,26680(r7)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r7.u32 + 26680);
	// lwz r19,26616(r7)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r7.u32 + 26616);
	// lwz r19,26600(r7)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r7.u32 + 26600);
	// lwz r19,26680(r7)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r7.u32 + 26680);
	// lwz r19,26648(r7)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r7.u32 + 26648);
	// lwz r19,26680(r7)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r7.u32 + 26680);
	// lwz r19,26680(r7)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r7.u32 + 26680);
	// lwz r19,26680(r7)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r7.u32 + 26680);
	// lwz r19,26584(r7)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r7.u32 + 26584);
	// lwz r19,26680(r7)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r7.u32 + 26680);
	// lwz r19,26568(r7)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r7.u32 + 26568);
	// lwz r19,26680(r7)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r7.u32 + 26680);
	// lwz r19,26680(r7)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r7.u32 + 26680);
	// lwz r19,26680(r7)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r7.u32 + 26680);
	// lwz r19,26680(r7)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r7.u32 + 26680);
	// lwz r19,26680(r7)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r7.u32 + 26680);
	// lwz r19,26680(r7)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r7.u32 + 26680);
	// lwz r19,26632(r7)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r7.u32 + 26632);
loc_826767C8:
	// lis r3,20056
	ctx.r3.s64 = 1314390016;
	// ori r3,r3,20290
	ctx.r3.u64 = ctx.r3.u64 | 20290;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_826767D8:
	// lis r3,20056
	ctx.r3.s64 = 1314390016;
	// ori r3,r3,19791
	ctx.r3.u64 = ctx.r3.u64 | 19791;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_826767E8:
	// lis r3,20056
	ctx.r3.s64 = 1314390016;
	// ori r3,r3,19796
	ctx.r3.u64 = ctx.r3.u64 | 19796;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_826767F8:
	// lis r3,20056
	ctx.r3.s64 = 1314390016;
	// ori r3,r3,19789
	ctx.r3.u64 = ctx.r3.u64 | 19789;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82676808:
	// lis r3,20056
	ctx.r3.s64 = 1314390016;
	// ori r3,r3,19777
	ctx.r3.u64 = ctx.r3.u64 | 19777;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82676818:
	// lis r3,20056
	ctx.r3.s64 = 1314390016;
	// ori r3,r3,19788
	ctx.r3.u64 = ctx.r3.u64 | 19788;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82676828:
	// lis r3,20056
	ctx.r3.s64 = 1314390016;
	// ori r3,r3,19779
	ctx.r3.u64 = ctx.r3.u64 | 19779;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82676838:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82676848"))) PPC_WEAK_FUNC(sub_82676848);
PPC_FUNC_IMPL(__imp__sub_82676848) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826768e0
	if (ctx.cr6.eq) goto loc_826768E0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r9,20056
	ctx.r9.s64 = 1314390016;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r9,r9,18758
	ctx.r9.u64 = ctx.r9.u64 | 18758;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x826768f8
	if (!ctx.cr6.eq) goto loc_826768F8;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x826768a4
	if (!ctx.cr6.eq) goto loc_826768A4;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x826768f8
	goto loc_826768F8;
loc_826768A4:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x826768f8
	if (!ctx.cr6.gt) goto loc_826768F8;
	// lis r9,20056
	ctx.r9.s64 = 1314390016;
	// ori r7,r9,20290
	ctx.r7.u64 = ctx.r9.u64 | 20290;
loc_826768B8:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x826768f8
	if (ctx.cr6.eq) goto loc_826768F8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// blt cr6,0x826768b8
	if (ctx.cr6.lt) goto loc_826768B8;
	// b 0x826768f8
	goto loc_826768F8;
loc_826768E0:
	// rlwinm r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82676920
	if (ctx.cr6.eq) goto loc_82676920;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x826766e8
	ctx.lr = 0x826768F8;
	sub_826766E8(ctx, base);
loc_826768F8:
	// lis r11,20056
	ctx.r11.s64 = 1314390016;
	// ori r11,r11,19789
	ctx.r11.u64 = ctx.r11.u64 | 19789;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82676a00
	if (ctx.cr6.gt) goto loc_82676A00;
	// beq cr6,0x826769d8
	if (ctx.cr6.eq) goto loc_826769D8;
	// lis r11,20056
	ctx.r11.s64 = 1314390016;
	// ori r11,r11,19779
	ctx.r11.u64 = ctx.r11.u64 | 19779;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826769a4
	if (ctx.cr6.gt) goto loc_826769A4;
	// beq cr6,0x82676980
	if (ctx.cr6.eq) goto loc_82676980;
loc_82676920:
	// addis r11,r3,-20056
	ctx.r11.s64 = ctx.r3.s64 + -1314390016;
	// addic. r11,r11,-19529
	ctx.xer.ca = ctx.r11.u32 > 19528;
	ctx.r11.s64 = ctx.r11.s64 + -19529;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267695c
	if (ctx.cr0.eq) goto loc_8267695C;
	// cmplwi cr6,r11,248
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 248, ctx.xer);
	// bne cr6,0x82676a1c
	if (!ctx.cr6.eq) goto loc_82676A1C;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x825e6f70
	ctx.lr = 0x8267693C;
	sub_825E6F70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676a28
	if (ctx.cr6.eq) goto loc_82676A28;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82679048
	ctx.lr = 0x8267694C;
	sub_82679048(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8267695C:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x825e6f70
	ctx.lr = 0x82676964;
	sub_825E6F70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676a28
	if (ctx.cr6.eq) goto loc_82676A28;
	// bl 0x82678f90
	ctx.lr = 0x82676970;
	sub_82678F90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82676980:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x825e6f70
	ctx.lr = 0x82676988;
	sub_825E6F70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676a28
	if (ctx.cr6.eq) goto loc_82676A28;
	// bl 0x82678ce8
	ctx.lr = 0x82676994;
	sub_82678CE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_826769A4:
	// lis r11,20056
	ctx.r11.s64 = 1314390016;
	// ori r11,r11,19788
	ctx.r11.u64 = ctx.r11.u64 | 19788;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82676a1c
	if (!ctx.cr6.eq) goto loc_82676A1C;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x825e6f70
	ctx.lr = 0x826769BC;
	sub_825E6F70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676a28
	if (ctx.cr6.eq) goto loc_82676A28;
	// bl 0x82678aa8
	ctx.lr = 0x826769C8;
	sub_82678AA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_826769D8:
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x825e6f70
	ctx.lr = 0x826769E0;
	sub_825E6F70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676a28
	if (ctx.cr6.eq) goto loc_82676A28;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82679048
	ctx.lr = 0x826769F0;
	sub_82679048(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82676A00:
	// addis r11,r3,-20056
	ctx.r11.s64 = ctx.r3.s64 + -1314390016;
	// addic. r11,r11,-19791
	ctx.xer.ca = ctx.r11.u32 > 19790;
	ctx.r11.s64 = ctx.r11.s64 + -19791;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82676a84
	if (ctx.cr0.eq) goto loc_82676A84;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82676a60
	if (ctx.cr6.eq) goto loc_82676A60;
	// cmplwi cr6,r11,499
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 499, ctx.xer);
	// beq cr6,0x82676a3c
	if (ctx.cr6.eq) goto loc_82676A3C;
loc_82676A1C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,3800
	ctx.r3.s64 = ctx.r11.s64 + 3800;
	// bl 0x821e0968
	ctx.lr = 0x82676A28;
	sub_821E0968(ctx, base);
loc_82676A28:
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
loc_82676A3C:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x825e6f70
	ctx.lr = 0x82676A44;
	sub_825E6F70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676a28
	if (ctx.cr6.eq) goto loc_82676A28;
	// bl 0x82678770
	ctx.lr = 0x82676A50;
	sub_82678770(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82676A60:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x825e6f70
	ctx.lr = 0x82676A68;
	sub_825E6F70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676a28
	if (ctx.cr6.eq) goto loc_82676A28;
	// bl 0x82678560
	ctx.lr = 0x82676A74;
	sub_82678560(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82676A84:
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x825e6f70
	ctx.lr = 0x82676A8C;
	sub_825E6F70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676a28
	if (ctx.cr6.eq) goto loc_82676A28;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82679048
	ctx.lr = 0x82676A9C;
	sub_82679048(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82676AB0"))) PPC_WEAK_FUNC(sub_82676AB0);
PPC_FUNC_IMPL(__imp__sub_82676AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r11,r11,3820
	ctx.r11.s64 = ctx.r11.s64 + 3820;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82676ae4
	if (ctx.cr6.eq) goto loc_82676AE4;
	// bl 0x82186190
	ctx.lr = 0x82676AE0;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82676AE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82676AF8"))) PPC_WEAK_FUNC(sub_82676AF8);
PPC_FUNC_IMPL(__imp__sub_82676AF8) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x826dfb84
	ctx.lr = 0x82676B10;
	__savefpr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// bl 0x826e0590
	ctx.lr = 0x82676B28;
	sub_826E0590(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x826e0668
	ctx.lr = 0x82676B34;
	sub_826E0668(ctx, base);
	// lfs f30,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f30.f64 = double(temp.f32);
	// fmr f28,f1
	ctx.f28.f64 = ctx.f1.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x826e0590
	ctx.lr = 0x82676B44;
	sub_826E0590(ctx, base);
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x826e0668
	ctx.lr = 0x82676B50;
	sub_826E0668(ctx, base);
	// frsp f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f29.f64));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// frsp f11,f28
	ctx.f11.f64 = double(float(ctx.f28.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f12,f27
	ctx.f12.f64 = double(float(ctx.f27.f64));
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmuls f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f13,f11,f31
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x826dfbd0
	ctx.lr = 0x82676B98;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82676BB0"))) PPC_WEAK_FUNC(sub_82676BB0);
PPC_FUNC_IMPL(__imp__sub_82676BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// addi r11,r11,3840
	ctx.r11.s64 = ctx.r11.s64 + 3840;
	// lfs f13,14088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stfs f2,84(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f3,88(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stb r4,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r4.u8);
	// stfs f4,92(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stb r5,81(r3)
	PPC_STORE_U8(ctx.r3.u32 + 81, ctx.r5.u8);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f13,108(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f1,112(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82676BF8"))) PPC_WEAK_FUNC(sub_82676BF8);
PPC_FUNC_IMPL(__imp__sub_82676BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// addi r11,r11,3860
	ctx.r11.s64 = ctx.r11.s64 + 3860;
	// lfs f13,14088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stfs f2,84(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f4,88(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stb r4,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r4.u8);
	// stfs f5,92(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stb r5,81(r3)
	PPC_STORE_U8(ctx.r3.u32 + 81, ctx.r5.u8);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f13,108(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f1,112(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f3,116(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82676C48"))) PPC_WEAK_FUNC(sub_82676C48);
PPC_FUNC_IMPL(__imp__sub_82676C48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// addi r11,r11,3880
	ctx.r11.s64 = ctx.r11.s64 + 3880;
	// lfs f13,14088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stfs f2,84(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f4,88(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stb r4,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r4.u8);
	// stfs f5,92(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stb r5,81(r3)
	PPC_STORE_U8(ctx.r3.u32 + 81, ctx.r5.u8);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f13,108(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f1,112(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f3,116(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82676C98"))) PPC_WEAK_FUNC(sub_82676C98);
PPC_FUNC_IMPL(__imp__sub_82676C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f2,8(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// addi r11,r11,3900
	ctx.r11.s64 = ctx.r11.s64 + 3900;
	// stfs f3,12(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82676CB8"))) PPC_WEAK_FUNC(sub_82676CB8);
PPC_FUNC_IMPL(__imp__sub_82676CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfs f1,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f2,88(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// addi r11,r11,3920
	ctx.r11.s64 = ctx.r11.s64 + 3920;
	// stfs f3,92(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stw r4,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r4.u32);
	// lfs f0,3544(r10)
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

__attribute__((alias("__imp__sub_82676CE8"))) PPC_WEAK_FUNC(sub_82676CE8);
PPC_FUNC_IMPL(__imp__sub_82676CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfs f1,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f2,88(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// addi r11,r11,3940
	ctx.r11.s64 = ctx.r11.s64 + 3940;
	// stb r4,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r4.u8);
	// stb r5,81(r3)
	PPC_STORE_U8(ctx.r3.u32 + 81, ctx.r5.u8);
	// stb r7,82(r3)
	PPC_STORE_U8(ctx.r3.u32 + 82, ctx.r7.u8);
	// lfs f0,3544(r10)
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

__attribute__((alias("__imp__sub_82676D18"))) PPC_WEAK_FUNC(sub_82676D18);
PPC_FUNC_IMPL(__imp__sub_82676D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfs f1,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f2,88(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// addi r11,r11,3960
	ctx.r11.s64 = ctx.r11.s64 + 3960;
	// stb r4,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r4.u8);
	// stb r5,81(r3)
	PPC_STORE_U8(ctx.r3.u32 + 81, ctx.r5.u8);
	// lfs f0,3544(r10)
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

__attribute__((alias("__imp__sub_82676D48"))) PPC_WEAK_FUNC(sub_82676D48);
PPC_FUNC_IMPL(__imp__sub_82676D48) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x826dfb88
	ctx.lr = 0x82676D60;
	__savefpr_28(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,96
	ctx.r11.s64 = ctx.r4.s64 + 96;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// addi r10,r4,80
	ctx.r10.s64 = ctx.r4.s64 + 80;
	// lvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r31,32
	ctx.r9.s64 = ctx.r31.s64 + 32;
	// lvx128 v12,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lvx128 v11,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// stvx v0,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v12,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v11,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d22a0
	ctx.lr = 0x82676DC0;
	sub_825D22A0(ctx, base);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,3812(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3812);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f28,f0
	ctx.cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// ble cr6,0x82676e88
	if (!ctx.cr6.gt) goto loc_82676E88;
	// lfs f2,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826e0460
	ctx.lr = 0x82676DE0;
	sub_826E0460(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x826e0590
	ctx.lr = 0x82676DEC;
	sub_826E0590(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// frsp f31,f0
	ctx.f31.f64 = double(float(ctx.f0.f64));
	// bl 0x826e0668
	ctx.lr = 0x82676DFC;
	sub_826E0668(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// frsp f30,f0
	ctx.f30.f64 = double(float(ctx.f0.f64));
	// lfs f0,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmadds f2,f31,f13,f0
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f13.f64 + ctx.f0.f64));
	// bl 0x826e0460
	ctx.lr = 0x82676E1C;
	sub_826E0460(ctx, base);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x826e0590
	ctx.lr = 0x82676E28;
	sub_826E0590(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// frsp f29,f0
	ctx.f29.f64 = double(float(ctx.f0.f64));
	// bl 0x826e0668
	ctx.lr = 0x82676E38;
	sub_826E0668(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f0,f29,f30
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f30.f64));
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fmuls f13,f29,f31
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// fneg f10,f31
	ctx.f10.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// lfs f12,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f12.f64 = double(temp.f32);
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// fmr f4,f12
	ctx.f4.f64 = ctx.f12.f64;
	// fmr f2,f12
	ctx.f2.f64 = ctx.f12.f64;
	// fmuls f11,f1,f30
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// fneg f9,f0
	ctx.f9.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f5,f13
	ctx.f5.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmuls f7,f1,f31
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// bl 0x8218c3c0
	ctx.lr = 0x82676E7C;
	sub_8218C3C0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d2670
	ctx.lr = 0x82676E88;
	sub_825D2670(ctx, base);
loc_82676E88:
	// stfs f28,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x826dfbd4
	ctx.lr = 0x82676E98;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82676EB0"))) PPC_WEAK_FUNC(sub_82676EB0);
PPC_FUNC_IMPL(__imp__sub_82676EB0) {
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
	// addi r10,r4,96
	ctx.r10.s64 = ctx.r4.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// addi r7,r10,32
	ctx.r7.s64 = ctx.r10.s64 + 32;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// addi r9,r4,80
	ctx.r9.s64 = ctx.r4.s64 + 80;
	// lvx128 v13,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// lvx128 v12,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lvx128 v11,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stvx v12,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stvx v13,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v11,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d2aa8
	ctx.lr = 0x82676F24;
	sub_825D2AA8(ctx, base);
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_82676F48"))) PPC_WEAK_FUNC(sub_82676F48);
PPC_FUNC_IMPL(__imp__sub_82676F48) {
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
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82676fbc
	if (ctx.cr6.eq) goto loc_82676FBC;
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// lwz r3,-15116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82676f8c
	if (!ctx.cr6.eq) goto loc_82676F8C;
	// bl 0x82642090
	ctx.lr = 0x82676F88;
	sub_82642090(ctx, base);
	// stw r3,-15116(r30)
	PPC_STORE_U32(ctx.r30.u32 + -15116, ctx.r3.u32);
loc_82676F8C:
	// bl 0x8265a8a0
	ctx.lr = 0x82676F90;
	sub_8265A8A0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f13,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f31.f64));
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmadds f0,f11,f1,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_82676FBC:
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

__attribute__((alias("__imp__sub_82676FD8"))) PPC_WEAK_FUNC(sub_82676FD8);
PPC_FUNC_IMPL(__imp__sub_82676FD8) {
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
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267701c
	if (!ctx.cr6.eq) goto loc_8267701C;
	// lwz r3,-15116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82677014
	if (!ctx.cr6.eq) goto loc_82677014;
	// bl 0x82642090
	ctx.lr = 0x82677010;
	sub_82642090(ctx, base);
	// stw r3,-15116(r30)
	PPC_STORE_U32(ctx.r30.u32 + -15116, ctx.r3.u32);
loc_82677014:
	// bl 0x8265a8a0
	ctx.lr = 0x82677018;
	sub_8265A8A0(ctx, base);
	// stfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
loc_8267701C:
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// beq cr6,0x82677048
	if (ctx.cr6.eq) goto loc_82677048;
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82677070
	goto loc_82677070;
loc_82677048:
	// lwz r3,-15116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8267705c
	if (!ctx.cr6.eq) goto loc_8267705C;
	// bl 0x82642090
	ctx.lr = 0x82677058;
	sub_82642090(ctx, base);
	// stw r3,-15116(r30)
	PPC_STORE_U32(ctx.r30.u32 + -15116, ctx.r3.u32);
loc_8267705C:
	// bl 0x8265a8a0
	ctx.lr = 0x82677060;
	sub_8265A8A0(ctx, base);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmadds f0,f13,f1,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f0.f64));
loc_82677070:
	// stfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
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

__attribute__((alias("__imp__sub_82677090"))) PPC_WEAK_FUNC(sub_82677090);
PPC_FUNC_IMPL(__imp__sub_82677090) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// b 0x82676f48
	sub_82676F48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82677098"))) PPC_WEAK_FUNC(sub_82677098);
PPC_FUNC_IMPL(__imp__sub_82677098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x826770A0;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82676fd8
	ctx.lr = 0x826770C8;
	sub_82676FD8(ctx, base);
	// lfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x826e0590
	ctx.lr = 0x826770E0;
	sub_826E0590(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x826e0668
	ctx.lr = 0x826770EC;
	sub_826E0668(ctx, base);
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// lfs f0,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f29
	ctx.f12.f64 = double(float(ctx.f29.f64));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82676af8
	ctx.lr = 0x82677118;
	sub_82676AF8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// li r9,8
	ctx.r9.s64 = 8;
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8267714C:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8267714c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8267714C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vspltisw v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
	// lvx128 v10,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lvx128 v9,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// vmaddfp v12,v9,v12,v10
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// lvx128 v8,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v7,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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
	// stvx v0,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d2aa8
	ctx.lr = 0x826771E4;
	sub_825D2AA8(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
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

__attribute__((alias("__imp__sub_82677208"))) PPC_WEAK_FUNC(sub_82677208);
PPC_FUNC_IMPL(__imp__sub_82677208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82677210;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826dfb88
	ctx.lr = 0x82677218;
	__savefpr_28(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82676fd8
	ctx.lr = 0x82677234;
	sub_82676FD8(ctx, base);
	// lfs f2,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826e0460
	ctx.lr = 0x82677240;
	sub_826E0460(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// lfs f13,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f0,-12276(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12276);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fadds f29,f0,f13
	ctx.f29.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// bl 0x826e0590
	ctx.lr = 0x82677264;
	sub_826E0590(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x826e0668
	ctx.lr = 0x82677270;
	sub_826E0668(ctx, base);
	// frsp f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64));
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// frsp f12,f1
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfs f0,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,-15116(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -15116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f30,f12,f0
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bne cr6,0x8267729c
	if (!ctx.cr6.eq) goto loc_8267729C;
	// bl 0x82642090
	ctx.lr = 0x82677298;
	sub_82642090(ctx, base);
	// stw r3,-15116(r29)
	PPC_STORE_U32(ctx.r29.u32 + -15116, ctx.r3.u32);
loc_8267729C:
	// bl 0x8265a8a0
	ctx.lr = 0x826772A0;
	sub_8265A8A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82676af8
	ctx.lr = 0x826772B8;
	sub_82676AF8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// li r9,8
	ctx.r9.s64 = 8;
	// lfs f0,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f12,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f12.f64 = double(temp.f32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826772F8:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x826772f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826772F8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vspltisw v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
	// lvx128 v10,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lvx128 v9,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// vmaddfp v12,v9,v12,v10
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// lvx128 v8,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v7,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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
	// stvx v0,r0,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d2aa8
	ctx.lr = 0x82677390;
	sub_825D2AA8(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r27
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826dfbd4
	ctx.lr = 0x826773A8;
	__restfpr_28(ctx, base);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826773B0"))) PPC_WEAK_FUNC(sub_826773B0);
PPC_FUNC_IMPL(__imp__sub_826773B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x826773B8;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82676fd8
	ctx.lr = 0x826773E0;
	sub_82676FD8(ctx, base);
	// lfs f2,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826e0460
	ctx.lr = 0x826773EC;
	sub_826E0460(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// lfs f13,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f0,-12276(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12276);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fadds f29,f0,f13
	ctx.f29.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// bl 0x826e0590
	ctx.lr = 0x82677410;
	sub_826E0590(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x826e0668
	ctx.lr = 0x8267741C;
	sub_826E0668(ctx, base);
	// frsp f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64));
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// frsp f12,f1
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfs f0,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,-15116(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -15116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f30,f12,f0
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bne cr6,0x82677448
	if (!ctx.cr6.eq) goto loc_82677448;
	// bl 0x82642090
	ctx.lr = 0x82677444;
	sub_82642090(ctx, base);
	// stw r3,-15116(r29)
	PPC_STORE_U32(ctx.r29.u32 + -15116, ctx.r3.u32);
loc_82677448:
	// bl 0x8265a8a0
	ctx.lr = 0x8267744C;
	sub_8265A8A0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lfs f13,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f29,f0,f13
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x82676af8
	ctx.lr = 0x8267746C;
	sub_82676AF8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// li r9,8
	ctx.r9.s64 = 8;
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82677498:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82677498
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82677498;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vspltisw v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
	// lvx128 v10,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lvx128 v9,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// vmaddfp v12,v9,v12,v10
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// lvx128 v8,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v7,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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
	// stvx v0,r0,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d2aa8
	ctx.lr = 0x82677530;
	sub_825D2AA8(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r27
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
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

__attribute__((alias("__imp__sub_82677550"))) PPC_WEAK_FUNC(sub_82677550);
PPC_FUNC_IMPL(__imp__sub_82677550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82677558;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,-15116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15116);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bne cr6,0x826775a4
	if (!ctx.cr6.eq) goto loc_826775A4;
	// bl 0x82642090
	ctx.lr = 0x826775A0;
	sub_82642090(ctx, base);
	// stw r3,-15116(r30)
	PPC_STORE_U32(ctx.r30.u32 + -15116, ctx.r3.u32);
loc_826775A4:
	// bl 0x8265a8a0
	ctx.lr = 0x826775A8;
	sub_8265A8A0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825d2350
	ctx.lr = 0x826775B4;
	sub_825D2350(ctx, base);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826775C4:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x826775c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826775C4;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// vspltisw v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
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
	// lvx128 v8,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v11,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v13,v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x0));
	// lvx128 v10,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v7,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
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
	// stvx v0,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82677668"))) PPC_WEAK_FUNC(sub_82677668);
PPC_FUNC_IMPL(__imp__sub_82677668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82677670;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826dfb80
	ctx.lr = 0x82677678;
	__savefpr_26(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r3,-15116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -15116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826776a0
	if (!ctx.cr6.eq) goto loc_826776A0;
	// bl 0x82642090
	ctx.lr = 0x8267769C;
	sub_82642090(ctx, base);
	// stw r3,-15116(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15116, ctx.r3.u32);
loc_826776A0:
	// bl 0x8265a8a0
	ctx.lr = 0x826776A4;
	sub_8265A8A0(ctx, base);
	// lwz r3,-15116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -15116);
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f1.f64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826776bc
	if (!ctx.cr6.eq) goto loc_826776BC;
	// bl 0x82642090
	ctx.lr = 0x826776B8;
	sub_82642090(ctx, base);
	// stw r3,-15116(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15116, ctx.r3.u32);
loc_826776BC:
	// bl 0x8265a8a0
	ctx.lr = 0x826776C0;
	sub_8265A8A0(ctx, base);
	// lwz r3,-15116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -15116);
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826776d8
	if (!ctx.cr6.eq) goto loc_826776D8;
	// bl 0x82642090
	ctx.lr = 0x826776D4;
	sub_82642090(ctx, base);
	// stw r3,-15116(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15116, ctx.r3.u32);
loc_826776D8:
	// bl 0x8265a8a0
	ctx.lr = 0x826776DC;
	sub_8265A8A0(ctx, base);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lfs f30,3548(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3548);
	ctx.f30.f64 = double(temp.f32);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// lfs f31,14088(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14088);
	ctx.f31.f64 = double(temp.f32);
	// lfs f28,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f28.f64 = double(temp.f32);
	// bgt cr6,0x82677898
	if (ctx.cr6.gt) goto loc_82677898;
	// lis r12,-32153
	ctx.r12.s64 = -2107179008;
	// addi r12,r12,30496
	ctx.r12.s64 = ctx.r12.s64 + 30496;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82677884;
	case 1:
		goto loc_8267773C;
	case 2:
		goto loc_8267774C;
	case 3:
		goto loc_826777A8;
	case 4:
		goto loc_82677778;
	case 5:
		goto loc_826777B8;
	case 6:
		goto loc_826777F8;
	default:
		__builtin_unreachable();
	}
	// lwz r19,30852(r7)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r7.u32 + 30852);
	// lwz r19,30524(r7)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r7.u32 + 30524);
	// lwz r19,30540(r7)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r7.u32 + 30540);
	// lwz r19,30632(r7)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r7.u32 + 30632);
	// lwz r19,30584(r7)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r7.u32 + 30584);
	// lwz r19,30648(r7)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r7.u32 + 30648);
	// lwz r19,30712(r7)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r7.u32 + 30712);
loc_8267773C:
	// fcmpu cr6,f27,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f27.f64, ctx.f30.f64);
	// ble cr6,0x8267787c
	if (!ctx.cr6.gt) goto loc_8267787C;
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// b 0x82677898
	goto loc_82677898;
loc_8267774C:
	// lwz r3,-15116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -15116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82677760
	if (!ctx.cr6.eq) goto loc_82677760;
	// bl 0x82642090
	ctx.lr = 0x8267775C;
	sub_82642090(ctx, base);
	// stw r3,-15116(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15116, ctx.r3.u32);
loc_82677760:
	// bl 0x8265a8a0
	ctx.lr = 0x82677764;
	sub_8265A8A0(ctx, base);
	// lfs f0,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// b 0x82677864
	goto loc_82677864;
loc_82677778:
	// lwz r3,-15116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -15116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8267778c
	if (!ctx.cr6.eq) goto loc_8267778C;
	// bl 0x82642090
	ctx.lr = 0x82677788;
	sub_82642090(ctx, base);
	// stw r3,-15116(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15116, ctx.r3.u32);
loc_8267778C:
	// bl 0x8265a8a0
	ctx.lr = 0x82677790;
	sub_8265A8A0(ctx, base);
	// lfs f0,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82677884
	if (!ctx.cr6.gt) goto loc_82677884;
loc_826777A8:
	// fcmpu cr6,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// ble cr6,0x8267784c
	if (!ctx.cr6.gt) goto loc_8267784C;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// b 0x82677898
	goto loc_82677898;
loc_826777B8:
	// lwz r3,-15116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -15116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826777cc
	if (!ctx.cr6.eq) goto loc_826777CC;
	// bl 0x82642090
	ctx.lr = 0x826777C8;
	sub_82642090(ctx, base);
	// stw r3,-15116(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15116, ctx.r3.u32);
loc_826777CC:
	// bl 0x8265a8a0
	ctx.lr = 0x826777D0;
	sub_8265A8A0(ctx, base);
	// lfs f0,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8267773c
	if (!ctx.cr6.gt) goto loc_8267773C;
	// fcmpu cr6,f29,f30
	ctx.cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// ble cr6,0x8267784c
	if (!ctx.cr6.gt) goto loc_8267784C;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// b 0x82677898
	goto loc_82677898;
loc_826777F8:
	// lwz r3,-15116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -15116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8267780c
	if (!ctx.cr6.eq) goto loc_8267780C;
	// bl 0x82642090
	ctx.lr = 0x82677808;
	sub_82642090(ctx, base);
	// stw r3,-15116(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15116, ctx.r3.u32);
loc_8267780C:
	// bl 0x8265a8a0
	ctx.lr = 0x82677810;
	sub_8265A8A0(ctx, base);
	// lfs f0,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmadds f0,f11,f12,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// fmuls f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x82677854
	if (!ctx.cr6.lt) goto loc_82677854;
	// fcmpu cr6,f29,f30
	ctx.cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// ble cr6,0x8267784c
	if (!ctx.cr6.gt) goto loc_8267784C;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// b 0x82677898
	goto loc_82677898;
loc_8267784C:
	// fmr f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f28.f64;
	// b 0x82677898
	goto loc_82677898;
loc_82677854:
	// lfs f13,92(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f0,f13,f31
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f13.f64 - ctx.f31.f64)));
loc_82677864:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82677884
	if (!ctx.cr6.gt) goto loc_82677884;
	// fcmpu cr6,f27,f30
	ctx.cr6.compare(ctx.f27.f64, ctx.f30.f64);
	// ble cr6,0x8267787c
	if (!ctx.cr6.gt) goto loc_8267787C;
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// b 0x82677898
	goto loc_82677898;
loc_8267787C:
	// fmr f27,f28
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f28.f64;
	// b 0x82677898
	goto loc_82677898;
loc_82677884:
	// fcmpu cr6,f26,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f26.f64, ctx.f30.f64);
	// ble cr6,0x82677894
	if (!ctx.cr6.gt) goto loc_82677894;
	// fmr f26,f31
	ctx.f26.f64 = ctx.f31.f64;
	// b 0x82677898
	goto loc_82677898;
loc_82677894:
	// fmr f26,f28
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f28.f64;
loc_82677898:
	// fsubs f0,f26,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f26.f64 - ctx.f30.f64));
	// lfs f12,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f27,f30
	ctx.f13.f64 = double(float(ctx.f27.f64 - ctx.f30.f64));
	// lfs f10,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f29,f30
	ctx.f11.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// lfs f9,92(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f11,f9
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826778E0:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x826778e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826778E0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vspltisw v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f28,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f28,100(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
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
	// lvx128 v10,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lvx128 v9,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// vmaddfp v12,v9,v12,v10
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// lvx128 v8,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v7,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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
	// stvx v0,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x825d2aa8
	ctx.lr = 0x8267798C;
	sub_825D2AA8(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826dfbcc
	ctx.lr = 0x826779A4;
	__restfpr_26(ctx, base);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826779A8"))) PPC_WEAK_FUNC(sub_826779A8);
PPC_FUNC_IMPL(__imp__sub_826779A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x826779B0;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826dfb84
	ctx.lr = 0x826779B8;
	__savefpr_27(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lbz r11,82(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 82);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r31,r11,-15116
	ctx.r31.s64 = ctx.r11.s64 + -15116;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// beq cr6,0x82677a00
	if (ctx.cr6.eq) goto loc_82677A00;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826779f0
	if (!ctx.cr6.eq) goto loc_826779F0;
	// bl 0x82642090
	ctx.lr = 0x826779EC;
	sub_82642090(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_826779F0:
	// bl 0x8265a8a0
	ctx.lr = 0x826779F4;
	sub_8265A8A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,3808(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3808);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82677a18
	goto loc_82677A18;
loc_82677A00:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82677a10
	if (!ctx.cr6.eq) goto loc_82677A10;
	// bl 0x82642090
	ctx.lr = 0x82677A0C;
	sub_82642090(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82677A10:
	// bl 0x8265a8a0
	ctx.lr = 0x82677A14;
	sub_8265A8A0(ctx, base);
	// lfs f0,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
loc_82677A18:
	// fsqrts f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(sqrt(ctx.f1.f64)));
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82677a34
	if (!ctx.cr6.eq) goto loc_82677A34;
	// bl 0x82642090
	ctx.lr = 0x82677A30;
	sub_82642090(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82677A34:
	// bl 0x8265a8a0
	ctx.lr = 0x82677A38;
	sub_8265A8A0(ctx, base);
	// lbz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 80);
	// lfs f27,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f27.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-6412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6412);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f1,f0
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bne cr6,0x82677a74
	if (!ctx.cr6.eq) goto loc_82677A74;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82677a68
	if (!ctx.cr6.eq) goto loc_82677A68;
	// bl 0x82642090
	ctx.lr = 0x82677A64;
	sub_82642090(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82677A68:
	// bl 0x8265a8a0
	ctx.lr = 0x82677A6C;
	sub_8265A8A0(ctx, base);
	// fsqrts f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f1.f64)));
	// fmuls f27,f0,f27
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
loc_82677A74:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x826e0590
	ctx.lr = 0x82677A7C;
	sub_826E0590(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// frsp f31,f0
	ctx.f31.f64 = double(float(ctx.f0.f64));
	// bl 0x826e0668
	ctx.lr = 0x82677A8C;
	sub_826E0668(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x826e0590
	ctx.lr = 0x82677A98;
	sub_826E0590(ctx, base);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x826e0668
	ctx.lr = 0x82677AA4;
	sub_826E0668(ctx, base);
	// frsp f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// frsp f13,f29
	ctx.f13.f64 = double(float(ctx.f29.f64));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f30,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f30.f64 = double(temp.f32);
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x825d2aa8
	ctx.lr = 0x82677AE4;
	sub_825D2AA8(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825d2350
	ctx.lr = 0x82677AF4;
	sub_825D2350(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lbz r11,81(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 81);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82677b38
	if (ctx.cr6.eq) goto loc_82677B38;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82677b38
	if (!ctx.cr6.gt) goto loc_82677B38;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f13,5424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5424);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f1,f0,f27
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// bl 0x825d2330
	ctx.lr = 0x82677B38;
	sub_825D2330(ctx, base);
loc_82677B38:
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r31,48
	ctx.r9.s64 = ctx.r31.s64 + 48;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d25a8
	ctx.lr = 0x82677B84;
	sub_825D25A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825d25a8
	ctx.lr = 0x82677B98;
	sub_825D25A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825d25a8
	ctx.lr = 0x82677BAC;
	sub_825D25A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x825d2350
	ctx.lr = 0x82677BDC;
	sub_825D2350(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825d3bb0
	ctx.lr = 0x82677BEC;
	sub_825D3BB0(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826dfbd0
	ctx.lr = 0x82677C04;
	__restfpr_27(ctx, base);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82677C08"))) PPC_WEAK_FUNC(sub_82677C08);
PPC_FUNC_IMPL(__imp__sub_82677C08) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// li r4,2
	ctx.r4.s64 = 2;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stvx v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d25a8
	ctx.lr = 0x82677C80;
	sub_825D25A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825d25a8
	ctx.lr = 0x82677C94;
	sub_825D25A8(ctx, base);
	// lfs f2,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826e0460
	ctx.lr = 0x82677CA0;
	sub_826E0460(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x826e0590
	ctx.lr = 0x82677CB4;
	sub_826E0590(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x826e0668
	ctx.lr = 0x82677CC0;
	sub_826E0668(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825d25a8
	ctx.lr = 0x82677CD4;
	sub_825D25A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825d25a8
	ctx.lr = 0x82677CE8;
	sub_825D25A8(ctx, base);
	// frsp f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64));
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// frsp f12,f31
	ctx.f12.f64 = double(float(ctx.f31.f64));
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f31,f12,f13,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// bl 0x825d25a8
	ctx.lr = 0x82677D14;
	sub_825D25A8(ctx, base);
	// lfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x826e0460
	ctx.lr = 0x82677D20;
	sub_826E0460(ctx, base);
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82677d7c
	if (ctx.cr6.eq) goto loc_82677D7C;
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// lwz r3,-15116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82677d4c
	if (!ctx.cr6.eq) goto loc_82677D4C;
	// bl 0x82642090
	ctx.lr = 0x82677D48;
	sub_82642090(ctx, base);
	// stw r3,-15116(r30)
	PPC_STORE_U32(ctx.r30.u32 + -15116, ctx.r3.u32);
loc_82677D4C:
	// bl 0x8265a8a0
	ctx.lr = 0x82677D50;
	sub_8265A8A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,-29804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,5024(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5024);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,100(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lfs f13,-29804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29804);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f29.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
loc_82677D7C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_82677DA0"))) PPC_WEAK_FUNC(sub_82677DA0);
PPC_FUNC_IMPL(__imp__sub_82677DA0) {
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
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lbz r11,81(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 81);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82677de0
	if (!ctx.cr6.eq) goto loc_82677DE0;
	// lwz r3,-15116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -15116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82677ddc
	if (!ctx.cr6.eq) goto loc_82677DDC;
	// bl 0x82642090
	ctx.lr = 0x82677DD8;
	sub_82642090(ctx, base);
	// stw r3,-15116(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15116, ctx.r3.u32);
loc_82677DDC:
	// bl 0x8265a8a0
	ctx.lr = 0x82677DE0;
	sub_8265A8A0(ctx, base);
loc_82677DE0:
	// lbz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82677dfc
	if (ctx.cr6.eq) goto loc_82677DFC;
	// lfs f0,104(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82677e2c
	goto loc_82677E2C;
loc_82677DFC:
	// lwz r3,-15116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -15116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82677e10
	if (!ctx.cr6.eq) goto loc_82677E10;
	// bl 0x82642090
	ctx.lr = 0x82677E0C;
	sub_82642090(ctx, base);
	// stw r3,-15116(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15116, ctx.r3.u32);
loc_82677E10:
	// bl 0x8265a8a0
	ctx.lr = 0x82677E14;
	sub_8265A8A0(ctx, base);
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
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82677E2C:
	// stfs f0,100(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 100, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82677E48"))) PPC_WEAK_FUNC(sub_82677E48);
PPC_FUNC_IMPL(__imp__sub_82677E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,3980
	ctx.r11.s64 = ctx.r11.s64 + 3980;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82677E68"))) PPC_WEAK_FUNC(sub_82677E68);
PPC_FUNC_IMPL(__imp__sub_82677E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r11,r11,3980
	ctx.r11.s64 = ctx.r11.s64 + 3980;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82677e9c
	if (ctx.cr6.eq) goto loc_82677E9C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8265ae18
	ctx.lr = 0x82677E9C;
	sub_8265AE18(ctx, base);
loc_82677E9C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-5100
	ctx.r11.s64 = ctx.r11.s64 + -5100;
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

__attribute__((alias("__imp__sub_82677EC0"))) PPC_WEAK_FUNC(sub_82677EC0);
PPC_FUNC_IMPL(__imp__sub_82677EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,3980
	ctx.r11.s64 = ctx.r11.s64 + 3980;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82677efc
	if (ctx.cr6.eq) goto loc_82677EFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8265ae18
	ctx.lr = 0x82677EFC;
	sub_8265AE18(ctx, base);
loc_82677EFC:
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
	// beq cr6,0x82677f20
	if (ctx.cr6.eq) goto loc_82677F20;
	// bl 0x82186190
	ctx.lr = 0x82677F1C;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82677F20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82677F38"))) PPC_WEAK_FUNC(sub_82677F38);
PPC_FUNC_IMPL(__imp__sub_82677F38) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// lwz r10,-17756(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17756);
	// lwz r10,164(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	// lwz r3,36(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// bge cr6,0x82677f70
	if (!ctx.cr6.lt) goto loc_82677F70;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,3984
	ctx.r10.s64 = ctx.r10.s64 + 3984;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82677f74
	goto loc_82677F74;
loc_82677F70:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82677F74:
	// b 0x8259afe0
	sub_8259AFE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82677F78"))) PPC_WEAK_FUNC(sub_82677F78);
PPC_FUNC_IMPL(__imp__sub_82677F78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82677F80"))) PPC_WEAK_FUNC(sub_82677F80);
PPC_FUNC_IMPL(__imp__sub_82677F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82677F88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lwz r11,-17756(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17756);
	// lwz r31,164(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// beq cr6,0x82677fb4
	if (ctx.cr6.eq) goto loc_82677FB4;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82677fbc
	goto loc_82677FBC;
loc_82677FB4:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r4,r11,-18576
	ctx.r4.s64 = ctx.r11.s64 + -18576;
loc_82677FBC:
	// bl 0x8259aec8
	ctx.lr = 0x82677FC0;
	sub_8259AEC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259a7f0
	ctx.lr = 0x82677FC8;
	sub_8259A7F0(ctx, base);
	// lwz r11,-17756(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17756);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,180(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// bl 0x8259a5e0
	ctx.lr = 0x82677FE8;
	sub_8259A5E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259a608
	ctx.lr = 0x82677FF0;
	sub_8259A608(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82677FF8"))) PPC_WEAK_FUNC(sub_82677FF8);
PPC_FUNC_IMPL(__imp__sub_82677FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x82678000;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x826dfb84
	ctx.lr = 0x82678008;
	__savefpr_27(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r28,r1,112
	ctx.r28.s64 = ctx.r1.s64 + 112;
	// lwz r11,-17756(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17756);
	// li r31,3
	ctx.r31.s64 = 3;
	// lwz r26,164(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
loc_8267802C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259a550
	ctx.lr = 0x82678034;
	sub_8259A550(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r28,r28,60
	ctx.r28.s64 = ctx.r28.s64 + 60;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x8267802c
	if (!ctx.cr6.lt) goto loc_8267802C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,-17756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17756);
	// lfs f0,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x825e6cd8
	ctx.lr = 0x82678064;
	sub_825E6CD8(ctx, base);
	// lwz r11,-17756(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17756);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r4,r11,192
	ctx.r4.s64 = ctx.r11.s64 + 192;
	// bl 0x82630470
	ctx.lr = 0x82678078;
	sub_82630470(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82678090
	if (ctx.cr6.eq) goto loc_82678090;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82630470
	ctx.lr = 0x82678090;
	sub_82630470(ctx, base);
loc_82678090:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8259a7f0
	ctx.lr = 0x82678098;
	sub_8259A7F0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826781e8
	if (ctx.cr6.eq) goto loc_826781E8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r25,20
	ctx.r31.s64 = ctx.r25.s64 + 20;
	// lfs f27,3548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f27.f64 = double(temp.f32);
loc_826780AC:
	// lfs f0,-4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// fmuls f31,f0,f27
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// fmuls f30,f13,f27
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// bl 0x82630e30
	ctx.lr = 0x826780CC;
	sub_82630E30(ctx, base);
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f31,f12
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f12.f64));
	// fmuls f13,f30,f11
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f11.f64));
	// lfs f3,-12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f12,f30,f12
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f12.f64));
	// lfs f2,-16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f11,f31,f11
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f11.f64));
	// lfs f1,-20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	ctx.f1.f64 = double(temp.f32);
	// fadds f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fsubs f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f29,f12,f11
	ctx.f29.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fadds f28,f11,f12
	ctx.f28.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// bl 0x825e80a8
	ctx.lr = 0x82678108;
	sub_825E80A8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82630958
	ctx.lr = 0x82678118;
	sub_82630958(ctx, base);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f8,f0,f31
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fadds f7,f13,f29
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f29.f64));
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f6,f0,f30
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// fsubs f5,f13,f28
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f28.f64));
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// fadds f4,f0,f30
	ctx.f4.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// fadds f3,f13,f28
	ctx.f3.f64 = double(float(ctx.f13.f64 + ctx.f28.f64));
	// stw r11,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r11.u32);
	// fadds f2,f0,f31
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lwz r11,-17756(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17756);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f29.f64));
	// lfs f9,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,13
	ctx.r5.s64 = 13;
	// stfs f8,112(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// stfs f7,116(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f6,172(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f5,176(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f4,232(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f3,236(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f0,240(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f2,292(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f13,296(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stfs f0,300(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// stfs f12,140(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f11,144(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f10,204(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f9,260(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f11,264(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f9,320(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// stfs f10,324(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// lwz r8,184(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// bl 0x8259a5e0
	ctx.lr = 0x826781D8;
	sub_8259A5E0(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x826780ac
	if (!ctx.cr6.eq) goto loc_826780AC;
loc_826781E8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8259a608
	ctx.lr = 0x826781F0;
	sub_8259A608(ctx, base);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x826dfbd0
	ctx.lr = 0x826781FC;
	__restfpr_27(ctx, base);
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82678200"))) PPC_WEAK_FUNC(sub_82678200);
PPC_FUNC_IMPL(__imp__sub_82678200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82678208;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// ble cr6,0x82678258
	if (!ctx.cr6.gt) goto loc_82678258;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82678244
	if (ctx.cr6.eq) goto loc_82678244;
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82678248
	if (ctx.cr6.lt) goto loc_82678248;
loc_82678244:
	// twi 31,r0,22
loc_82678248:
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82678268
	goto loc_82678268;
loc_82678258:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_82678268:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// beq cr6,0x8267827c
	if (ctx.cr6.eq) goto loc_8267827C;
	// bl 0x82659610
	ctx.lr = 0x8267827C;
	sub_82659610(ctx, base);
loc_8267827C:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82678298
	if (ctx.cr6.eq) goto loc_82678298;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82678298
	if (ctx.cr6.eq) goto loc_82678298;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581e38
	ctx.lr = 0x82678298;
	sub_82581E38(ctx, base);
loc_82678298:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826782A8"))) PPC_WEAK_FUNC(sub_826782A8);
PPC_FUNC_IMPL(__imp__sub_826782A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// rlwinm r10,r31,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r11,-17756(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17756);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// rlwimi r4,r10,3,28,28
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 3) & 0x8) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFF7);
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x82631500
	ctx.lr = 0x826782E4;
	sub_82631500(ctx, base);
	// andi. r11,r31,80
	ctx.r11.u64 = ctx.r31.u64 & 80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x82678318
	if (ctx.cr6.eq) goto loc_82678318;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// beq cr6,0x82678310
	if (ctx.cr6.eq) goto loc_82678310;
	// cmplwi cr6,r11,80
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 80, ctx.xer);
	// beq cr6,0x82678308
	if (ctx.cr6.eq) goto loc_82678308;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8267831c
	goto loc_8267831C;
loc_82678308:
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x8267831c
	goto loc_8267831C;
loc_82678310:
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x8267831c
	goto loc_8267831C;
loc_82678318:
	// li r4,1
	ctx.r4.s64 = 1;
loc_8267831C:
	// lwz r11,-17756(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17756);
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// lwz r31,36(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259b088
	ctx.lr = 0x82678330;
	sub_8259B088(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259b040
	ctx.lr = 0x8267833C;
	sub_8259B040(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82678358"))) PPC_WEAK_FUNC(sub_82678358);
PPC_FUNC_IMPL(__imp__sub_82678358) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82678200
	ctx.lr = 0x82678378;
	sub_82678200(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826783e4
	if (ctx.cr6.eq) goto loc_826783E4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826783d8
	if (ctx.cr6.eq) goto loc_826783D8;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-17756(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17756);
	// lwz r3,164(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// lwz r31,40(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// bl 0x8259a830
	ctx.lr = 0x826783B0;
	sub_8259A830(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259acc0
	ctx.lr = 0x826783C4;
	sub_8259ACC0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259ace8
	ctx.lr = 0x826783D4;
	sub_8259ACE8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_826783D8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826783e4
	if (ctx.cr6.eq) goto loc_826783E4;
	// bl 0x82581e38
	ctx.lr = 0x826783E4;
	sub_82581E38(ctx, base);
loc_826783E4:
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

__attribute__((alias("__imp__sub_826783F8"))) PPC_WEAK_FUNC(sub_826783F8);
PPC_FUNC_IMPL(__imp__sub_826783F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,21573
	ctx.r10.s64 = 1413808128;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r10,r10,22560
	ctx.r10.u64 = ctx.r10.u64 | 22560;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82678410"))) PPC_WEAK_FUNC(sub_82678410);
PPC_FUNC_IMPL(__imp__sub_82678410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82678418;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,4020
	ctx.r11.s64 = ctx.r11.s64 + 4020;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8267845c
	if (ctx.cr6.eq) goto loc_8267845C;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-17740(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17740);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82678458;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
loc_8267845C:
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82678484
	if (ctx.cr6.eq) goto loc_82678484;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82279350
	ctx.lr = 0x8267847C;
	sub_82279350(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82678484;
	sub_82186190(ctx, base);
loc_82678484:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// bl 0x828fc928
	ctx.lr = 0x82678498;
	sub_828FC928(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826784A0"))) PPC_WEAK_FUNC(sub_826784A0);
PPC_FUNC_IMPL(__imp__sub_826784A0) {
	PPC_FUNC_PROLOGUE();
	// lis r3,18242
	ctx.r3.s64 = 1195507712;
	// ori r3,r3,18776
	ctx.r3.u64 = ctx.r3.u64 | 18776;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826784B0"))) PPC_WEAK_FUNC(sub_826784B0);
PPC_FUNC_IMPL(__imp__sub_826784B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82678410
	ctx.lr = 0x826784D0;
	sub_82678410(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826784e8
	if (ctx.cr6.eq) goto loc_826784E8;
	// bl 0x825e6f78
	ctx.lr = 0x826784E4;
	sub_825E6F78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826784E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82678500"))) PPC_WEAK_FUNC(sub_82678500);
PPC_FUNC_IMPL(__imp__sub_82678500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x828fc8d8
	ctx.lr = 0x82678518;
	sub_828FC8D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,4020
	ctx.r10.s64 = ctx.r11.s64 + 4020;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82678560"))) PPC_WEAK_FUNC(sub_82678560);
PPC_FUNC_IMPL(__imp__sub_82678560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x828fc8d8
	ctx.lr = 0x82678578;
	sub_828FC8D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,4048
	ctx.r11.s64 = ctx.r11.s64 + 4048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826785A8"))) PPC_WEAK_FUNC(sub_826785A8);
PPC_FUNC_IMPL(__imp__sub_826785A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,4048
	ctx.r11.s64 = ctx.r11.s64 + 4048;
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,-15120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826785e4
	if (!ctx.cr6.eq) goto loc_826785E4;
	// bl 0x82642018
	ctx.lr = 0x826785E0;
	sub_82642018(ctx, base);
	// stw r3,-15120(r30)
	PPC_STORE_U32(ctx.r30.u32 + -15120, ctx.r3.u32);
loc_826785E4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8265a0c0
	ctx.lr = 0x826785EC;
	sub_8265A0C0(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826785fc
	if (ctx.cr6.eq) goto loc_826785FC;
	// bl 0x82581e38
	ctx.lr = 0x826785FC;
	sub_82581E38(ctx, base);
loc_826785FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828fc928
	ctx.lr = 0x82678604;
	sub_828FC928(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82678620"))) PPC_WEAK_FUNC(sub_82678620);
PPC_FUNC_IMPL(__imp__sub_82678620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826785a8
	ctx.lr = 0x82678640;
	sub_826785A8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82678658
	if (ctx.cr6.eq) goto loc_82678658;
	// bl 0x825e6f78
	ctx.lr = 0x82678654;
	sub_825E6F78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82678658:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82678670"))) PPC_WEAK_FUNC(sub_82678670);
PPC_FUNC_IMPL(__imp__sub_82678670) {
	PPC_FUNC_PROLOGUE();
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
	// li r10,15
	ctx.r10.s64 = 15;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stb r10,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r10.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_826786A4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826786a4
	if (!ctx.cr6.eq) goto loc_826786A4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x826786C8;
	sub_82161E08(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8264fb58
	ctx.lr = 0x826786D4;
	sub_8264FB58(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826786e8
	if (ctx.cr6.eq) goto loc_826786E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x826786E8;
	sub_82659610(ctx, base);
loc_826786E8:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826786fc
	if (ctx.cr6.eq) goto loc_826786FC;
	// bl 0x82581e38
	ctx.lr = 0x826786FC;
	sub_82581E38(ctx, base);
loc_826786FC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267870c
	if (ctx.cr6.eq) goto loc_8267870C;
	// bl 0x82581e38
	ctx.lr = 0x8267870C;
	sub_82581E38(ctx, base);
loc_8267870C:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82678720
	if (ctx.cr6.lt) goto loc_82678720;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82186190
	ctx.lr = 0x82678720;
	sub_82186190(ctx, base);
loc_82678720:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267873c
	if (ctx.cr6.eq) goto loc_8267873C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82678744
	if (!ctx.cr6.eq) goto loc_82678744;
loc_8267873C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82678754
	goto loc_82678754;
loc_82678744:
	// lis r11,20056
	ctx.r11.s64 = 1314390016;
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r11,r11,19796
	ctx.r11.u64 = ctx.r11.u64 | 19796;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82678754:
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

__attribute__((alias("__imp__sub_82678770"))) PPC_WEAK_FUNC(sub_82678770);
PPC_FUNC_IMPL(__imp__sub_82678770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x828fc8d8
	ctx.lr = 0x82678788;
	sub_828FC8D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,20056
	ctx.r9.s64 = 1314390016;
	// addi r11,r11,4068
	ctx.r11.s64 = ctx.r11.s64 + 4068;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r9,20290
	ctx.r9.u64 = ctx.r9.u64 | 20290;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826787C8"))) PPC_WEAK_FUNC(sub_826787C8);
PPC_FUNC_IMPL(__imp__sub_826787C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,4068
	ctx.r11.s64 = ctx.r11.s64 + 4068;
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,-15120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82678804
	if (!ctx.cr6.eq) goto loc_82678804;
	// bl 0x82642018
	ctx.lr = 0x82678800;
	sub_82642018(ctx, base);
	// stw r3,-15120(r30)
	PPC_STORE_U32(ctx.r30.u32 + -15120, ctx.r3.u32);
loc_82678804:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8265a0c0
	ctx.lr = 0x8267880C;
	sub_8265A0C0(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267881c
	if (ctx.cr6.eq) goto loc_8267881C;
	// bl 0x821601b8
	ctx.lr = 0x8267881C;
	sub_821601B8(ctx, base);
loc_8267881C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828fc928
	ctx.lr = 0x82678824;
	sub_828FC928(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82678840"))) PPC_WEAK_FUNC(sub_82678840);
PPC_FUNC_IMPL(__imp__sub_82678840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82678848;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826788a4
	if (!ctx.cr6.eq) goto loc_826788A4;
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826788a4
	if (ctx.cr6.eq) goto loc_826788A4;
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r30,r11,r4
	ctx.r30.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r3,-15120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -15120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8267888c
	if (!ctx.cr6.eq) goto loc_8267888C;
	// bl 0x82642018
	ctx.lr = 0x82678888;
	sub_82642018(ctx, base);
	// stw r3,-15120(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15120, ctx.r3.u32);
loc_8267888C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8265a2b8
	ctx.lr = 0x82678898;
	sub_8265A2B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_826788A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826788B0"))) PPC_WEAK_FUNC(sub_826788B0);
PPC_FUNC_IMPL(__imp__sub_826788B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826787c8
	ctx.lr = 0x826788D0;
	sub_826787C8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826788e8
	if (ctx.cr6.eq) goto loc_826788E8;
	// bl 0x825e6f78
	ctx.lr = 0x826788E4;
	sub_825E6F78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826788E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82678900"))) PPC_WEAK_FUNC(sub_82678900);
PPC_FUNC_IMPL(__imp__sub_82678900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82678908;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,15
	ctx.r29.s64 = 15;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r28,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r28.u8);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
loc_82678930:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82678930
	if (!ctx.cr6.eq) goto loc_82678930;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82678958;
	sub_82161E08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,-1
	ctx.r31.s64 = -1;
	// addi r4,r11,5788
	ctx.r4.s64 = ctx.r11.s64 + 5788;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82169e08
	ctx.lr = 0x82678974;
	sub_82169E08(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x826789d0
	if (ctx.cr6.eq) goto loc_826789D0;
	// addi r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 1;
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r28,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r28.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82161d10
	ctx.lr = 0x8267899C;
	sub_82161D10(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82161d10
	ctx.lr = 0x826789B0;
	sub_82161D10(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x826789c4
	if (ctx.cr6.lt) goto loc_826789C4;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82186190
	ctx.lr = 0x826789C4;
	sub_82186190(ctx, base);
loc_826789C4:
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stb r28,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r28.u8);
loc_826789D0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-7140
	ctx.r4.s64 = ctx.r11.s64 + -7140;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82169e08
	ctx.lr = 0x826789E8;
	sub_82169E08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82678a00
	if (ctx.cr6.eq) goto loc_82678A00;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82161648
	ctx.lr = 0x82678A00;
	sub_82161648(ctx, base);
loc_82678A00:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-17756(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17756);
	// bl 0x82667d48
	ctx.lr = 0x82678A18;
	sub_82667D48(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r27,16
	ctx.r31.s64 = ctx.r27.s64 + 16;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82678a38
	if (ctx.cr6.eq) goto loc_82678A38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82160140
	ctx.lr = 0x82678A38;
	sub_82160140(ctx, base);
loc_82678A38:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82678a48
	if (ctx.cr6.eq) goto loc_82678A48;
	// bl 0x821601b8
	ctx.lr = 0x82678A48;
	sub_821601B8(ctx, base);
loc_82678A48:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82678a5c
	if (ctx.cr6.eq) goto loc_82678A5C;
	// bl 0x821601b8
	ctx.lr = 0x82678A5C;
	sub_821601B8(ctx, base);
loc_82678A5C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82678a70
	if (!ctx.cr6.eq) goto loc_82678A70;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82678a78
	goto loc_82678A78;
loc_82678A70:
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
loc_82678A78:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// xori r31,r11,1
	ctx.r31.u64 = ctx.r11.u64 ^ 1;
	// blt cr6,0x82678a98
	if (ctx.cr6.lt) goto loc_82678A98;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82186190
	ctx.lr = 0x82678A98;
	sub_82186190(ctx, base);
loc_82678A98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82678AA8"))) PPC_WEAK_FUNC(sub_82678AA8);
PPC_FUNC_IMPL(__imp__sub_82678AA8) {
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
	// bl 0x828fc8d8
	ctx.lr = 0x82678AC0;
	sub_828FC8D8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,4088
	ctx.r11.s64 = ctx.r11.s64 + 4088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,20056
	ctx.r10.s64 = 1314390016;
	// ori r10,r10,19529
	ctx.r10.u64 = ctx.r10.u64 | 19529;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82678B08"))) PPC_WEAK_FUNC(sub_82678B08);
PPC_FUNC_IMPL(__imp__sub_82678B08) {
	PPC_FUNC_PROLOGUE();
	// lis r3,20056
	ctx.r3.s64 = 1314390016;
	// ori r3,r3,19529
	ctx.r3.u64 = ctx.r3.u64 | 19529;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82678B18"))) PPC_WEAK_FUNC(sub_82678B18);
PPC_FUNC_IMPL(__imp__sub_82678B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,4088
	ctx.r11.s64 = ctx.r11.s64 + 4088;
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,-15120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82678b54
	if (!ctx.cr6.eq) goto loc_82678B54;
	// bl 0x82642018
	ctx.lr = 0x82678B50;
	sub_82642018(ctx, base);
	// stw r3,-15120(r30)
	PPC_STORE_U32(ctx.r30.u32 + -15120, ctx.r3.u32);
loc_82678B54:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8265a0c0
	ctx.lr = 0x82678B5C;
	sub_8265A0C0(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82678b6c
	if (ctx.cr6.eq) goto loc_82678B6C;
	// bl 0x82581e38
	ctx.lr = 0x82678B6C;
	sub_82581E38(ctx, base);
loc_82678B6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828fc928
	ctx.lr = 0x82678B74;
	sub_828FC928(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82678B90"))) PPC_WEAK_FUNC(sub_82678B90);
PPC_FUNC_IMPL(__imp__sub_82678B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82678b18
	ctx.lr = 0x82678BB0;
	sub_82678B18(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82678bc8
	if (ctx.cr6.eq) goto loc_82678BC8;
	// bl 0x825e6f78
	ctx.lr = 0x82678BC4;
	sub_825E6F78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82678BC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82678BE0"))) PPC_WEAK_FUNC(sub_82678BE0);
PPC_FUNC_IMPL(__imp__sub_82678BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82678BE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stb r29,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r29.u8);
loc_82678C0C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82678c0c
	if (!ctx.cr6.eq) goto loc_82678C0C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82678C30;
	sub_82161E08(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82296100
	ctx.lr = 0x82678C3C;
	sub_82296100(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82678c50
	if (ctx.cr6.eq) goto loc_82678C50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x82678C50;
	sub_82659610(ctx, base);
loc_82678C50:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82678c64
	if (ctx.cr6.eq) goto loc_82678C64;
	// bl 0x82581e38
	ctx.lr = 0x82678C64;
	sub_82581E38(ctx, base);
loc_82678C64:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82678c74
	if (ctx.cr6.eq) goto loc_82678C74;
	// bl 0x82581e38
	ctx.lr = 0x82678C74;
	sub_82581E38(ctx, base);
loc_82678C74:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82678c88
	if (ctx.cr6.lt) goto loc_82678C88;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82186190
	ctx.lr = 0x82678C88;
	sub_82186190(ctx, base);
loc_82678C88:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r29,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r29.u8);
	// beq cr6,0x82678cb0
	if (ctx.cr6.eq) goto loc_82678CB0;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82678cbc
	if (!ctx.cr6.eq) goto loc_82678CBC;
loc_82678CB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82678CBC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82678CCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-3408(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3408);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,20(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82678CE8"))) PPC_WEAK_FUNC(sub_82678CE8);
PPC_FUNC_IMPL(__imp__sub_82678CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x828fc8d8
	ctx.lr = 0x82678D00;
	sub_828FC8D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,20056
	ctx.r9.s64 = 1314390016;
	// addi r11,r11,4108
	ctx.r11.s64 = ctx.r11.s64 + 4108;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r9,19779
	ctx.r9.u64 = ctx.r9.u64 | 19779;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82678D38"))) PPC_WEAK_FUNC(sub_82678D38);
PPC_FUNC_IMPL(__imp__sub_82678D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,4108
	ctx.r11.s64 = ctx.r11.s64 + 4108;
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,-15120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82678d74
	if (!ctx.cr6.eq) goto loc_82678D74;
	// bl 0x82642018
	ctx.lr = 0x82678D70;
	sub_82642018(ctx, base);
	// stw r3,-15120(r30)
	PPC_STORE_U32(ctx.r30.u32 + -15120, ctx.r3.u32);
loc_82678D74:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8265a0c0
	ctx.lr = 0x82678D7C;
	sub_8265A0C0(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82678d8c
	if (ctx.cr6.eq) goto loc_82678D8C;
	// bl 0x82581e38
	ctx.lr = 0x82678D8C;
	sub_82581E38(ctx, base);
loc_82678D8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828fc928
	ctx.lr = 0x82678D94;
	sub_828FC928(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82678DB0"))) PPC_WEAK_FUNC(sub_82678DB0);
PPC_FUNC_IMPL(__imp__sub_82678DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82678DB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82678e28
	if (ctx.cr6.eq) goto loc_82678E28;
	// lhz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82678e28
	if (!ctx.cr6.eq) goto loc_82678E28;
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82678e28
	if (ctx.cr6.eq) goto loc_82678E28;
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r30,r11,r4
	ctx.r30.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r3,-15120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -15120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82678e04
	if (!ctx.cr6.eq) goto loc_82678E04;
	// bl 0x82642018
	ctx.lr = 0x82678E00;
	sub_82642018(ctx, base);
	// stw r3,-15120(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15120, ctx.r3.u32);
loc_82678E04:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8265a2b8
	ctx.lr = 0x82678E10;
	sub_8265A2B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 20, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82678E28:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82678E38"))) PPC_WEAK_FUNC(sub_82678E38);
PPC_FUNC_IMPL(__imp__sub_82678E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82678d38
	ctx.lr = 0x82678E58;
	sub_82678D38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82678e70
	if (ctx.cr6.eq) goto loc_82678E70;
	// bl 0x825e6f78
	ctx.lr = 0x82678E6C;
	sub_825E6F78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82678E70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82678E88"))) PPC_WEAK_FUNC(sub_82678E88);
PPC_FUNC_IMPL(__imp__sub_82678E88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82678E90;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stb r29,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r29.u8);
loc_82678EB4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82678eb4
	if (!ctx.cr6.eq) goto loc_82678EB4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82678ED8;
	sub_82161E08(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8264fc88
	ctx.lr = 0x82678EE4;
	sub_8264FC88(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82678ef8
	if (ctx.cr6.eq) goto loc_82678EF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x82678EF8;
	sub_82659610(ctx, base);
loc_82678EF8:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82678f0c
	if (ctx.cr6.eq) goto loc_82678F0C;
	// bl 0x82581e38
	ctx.lr = 0x82678F0C;
	sub_82581E38(ctx, base);
loc_82678F0C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82678f1c
	if (ctx.cr6.eq) goto loc_82678F1C;
	// bl 0x82581e38
	ctx.lr = 0x82678F1C;
	sub_82581E38(ctx, base);
loc_82678F1C:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82678f30
	if (ctx.cr6.lt) goto loc_82678F30;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82186190
	ctx.lr = 0x82678F30;
	sub_82186190(ctx, base);
loc_82678F30:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r29,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r29.u8);
	// beq cr6,0x82678f58
	if (ctx.cr6.eq) goto loc_82678F58;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82678f64
	if (!ctx.cr6.eq) goto loc_82678F64;
loc_82678F58:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82678F64:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82678F74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-3408(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3408);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,20(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82678F90"))) PPC_WEAK_FUNC(sub_82678F90);
PPC_FUNC_IMPL(__imp__sub_82678F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x828fc8d8
	ctx.lr = 0x82678FA8;
	sub_828FC8D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,4128
	ctx.r11.s64 = ctx.r11.s64 + 4128;
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

__attribute__((alias("__imp__sub_82678FD0"))) PPC_WEAK_FUNC(sub_82678FD0);
PPC_FUNC_IMPL(__imp__sub_82678FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,20056
	ctx.r10.s64 = 1314390016;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r10,r10,19524
	ctx.r10.u64 = ctx.r10.u64 | 19524;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82678FE8"))) PPC_WEAK_FUNC(sub_82678FE8);
PPC_FUNC_IMPL(__imp__sub_82678FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,4128
	ctx.r11.s64 = ctx.r11.s64 + 4128;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828fc928
	ctx.lr = 0x82679014;
	sub_828FC928(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267902c
	if (ctx.cr6.eq) goto loc_8267902C;
	// bl 0x825e6f78
	ctx.lr = 0x82679028;
	sub_825E6F78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8267902C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82679048"))) PPC_WEAK_FUNC(sub_82679048);
PPC_FUNC_IMPL(__imp__sub_82679048) {
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
	// bl 0x828fc8d8
	ctx.lr = 0x82679068;
	sub_828FC8D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r11,4148
	ctx.r10.s64 = ctx.r11.s64 + 4148;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3544(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826790B0"))) PPC_WEAK_FUNC(sub_826790B0);
PPC_FUNC_IMPL(__imp__sub_826790B0) {
	PPC_FUNC_PROLOGUE();
	// lis r3,20056
	ctx.r3.s64 = 1314390016;
	// ori r3,r3,18758
	ctx.r3.u64 = ctx.r3.u64 | 18758;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826790C0"))) PPC_WEAK_FUNC(sub_826790C0);
PPC_FUNC_IMPL(__imp__sub_826790C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,4148
	ctx.r11.s64 = ctx.r11.s64 + 4148;
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,-15120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826790fc
	if (!ctx.cr6.eq) goto loc_826790FC;
	// bl 0x82642018
	ctx.lr = 0x826790F8;
	sub_82642018(ctx, base);
	// stw r3,-15120(r30)
	PPC_STORE_U32(ctx.r30.u32 + -15120, ctx.r3.u32);
loc_826790FC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8265a0c0
	ctx.lr = 0x82679104;
	sub_8265A0C0(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82679114
	if (ctx.cr6.eq) goto loc_82679114;
	// bl 0x82581e38
	ctx.lr = 0x82679114;
	sub_82581E38(ctx, base);
loc_82679114:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82679124
	if (ctx.cr6.eq) goto loc_82679124;
	// bl 0x82581e38
	ctx.lr = 0x82679124;
	sub_82581E38(ctx, base);
loc_82679124:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82679134
	if (ctx.cr6.eq) goto loc_82679134;
	// bl 0x82581e38
	ctx.lr = 0x82679134;
	sub_82581E38(ctx, base);
loc_82679134:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828fc928
	ctx.lr = 0x8267913C;
	sub_828FC928(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82679158"))) PPC_WEAK_FUNC(sub_82679158);
PPC_FUNC_IMPL(__imp__sub_82679158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82679160;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lhz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826791d4
	if (!ctx.cr6.eq) goto loc_826791D4;
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826791d4
	if (ctx.cr6.eq) goto loc_826791D4;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// add r29,r10,r4
	ctx.r29.u64 = ctx.r10.u64 + ctx.r4.u64;
	// bge cr6,0x826791d4
	if (!ctx.cr6.lt) goto loc_826791D4;
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// lwz r3,-15120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826791bc
	if (!ctx.cr6.eq) goto loc_826791BC;
	// bl 0x82642018
	ctx.lr = 0x826791B8;
	sub_82642018(ctx, base);
	// stw r3,-15120(r30)
	PPC_STORE_U32(ctx.r30.u32 + -15120, ctx.r3.u32);
loc_826791BC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8265a2b8
	ctx.lr = 0x826791C8;
	sub_8265A2B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_826791D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826791E0"))) PPC_WEAK_FUNC(sub_826791E0);
PPC_FUNC_IMPL(__imp__sub_826791E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826790c0
	ctx.lr = 0x82679200;
	sub_826790C0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82679218
	if (ctx.cr6.eq) goto loc_82679218;
	// bl 0x825e6f78
	ctx.lr = 0x82679214;
	sub_825E6F78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82679218:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82679230"))) PPC_WEAK_FUNC(sub_82679230);
PPC_FUNC_IMPL(__imp__sub_82679230) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82679358
	if (ctx.cr6.lt) goto loc_82679358;
	// beq cr6,0x826792ec
	if (ctx.cr6.eq) goto loc_826792EC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x826793e4
	if (!ctx.cr6.lt) goto loc_826793E4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821620e8
	ctx.lr = 0x82679268;
	sub_821620E8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822de680
	ctx.lr = 0x82679274;
	sub_822DE680(ctx, base);
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823032b8
	ctx.lr = 0x82679284;
	sub_823032B8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82679294
	if (ctx.cr6.eq) goto loc_82679294;
	// bl 0x82581e38
	ctx.lr = 0x82679294;
	sub_82581E38(ctx, base);
loc_82679294:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825fc7b8
	ctx.lr = 0x8267929C;
	sub_825FC7B8(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826793e4
	if (ctx.cr6.eq) goto loc_826793E4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826793e4
	if (ctx.cr6.eq) goto loc_826793E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826792C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,20056
	ctx.r11.s64 = 1314390016;
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r11,r11,19791
	ctx.r11.u64 = ctx.r11.u64 | 19791;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-3408(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3408);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// b 0x826793e8
	goto loc_826793E8;
loc_826792EC:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821620e8
	ctx.lr = 0x826792F4;
	sub_821620E8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8264fbf0
	ctx.lr = 0x82679300;
	sub_8264FBF0(ctx, base);
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823032b8
	ctx.lr = 0x82679310;
	sub_823032B8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82679320
	if (ctx.cr6.eq) goto loc_82679320;
	// bl 0x82581e38
	ctx.lr = 0x82679320;
	sub_82581E38(ctx, base);
loc_82679320:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825fc7b8
	ctx.lr = 0x82679328;
	sub_825FC7B8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826793e4
	if (ctx.cr6.eq) goto loc_826793E4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826793e4
	if (ctx.cr6.eq) goto loc_826793E4;
	// lis r11,20056
	ctx.r11.s64 = 1314390016;
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r11,r11,19791
	ctx.r11.u64 = ctx.r11.u64 | 19791;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x826793e8
	goto loc_826793E8;
loc_82679358:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821620e8
	ctx.lr = 0x82679360;
	sub_821620E8(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822de5e8
	ctx.lr = 0x8267936C;
	sub_822DE5E8(ctx, base);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823032b8
	ctx.lr = 0x8267937C;
	sub_823032B8(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267938c
	if (ctx.cr6.eq) goto loc_8267938C;
	// bl 0x82581e38
	ctx.lr = 0x8267938C;
	sub_82581E38(ctx, base);
loc_8267938C:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825fc7b8
	ctx.lr = 0x82679394;
	sub_825FC7B8(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826793e4
	if (ctx.cr6.eq) goto loc_826793E4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826793e4
	if (ctx.cr6.eq) goto loc_826793E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826793C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,20056
	ctx.r11.s64 = 1314390016;
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r11,r11,19791
	ctx.r11.u64 = ctx.r11.u64 | 19791;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-3408(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3408);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// b 0x826793e8
	goto loc_826793E8;
loc_826793E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826793E8:
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

__attribute__((alias("__imp__sub_82679400"))) PPC_WEAK_FUNC(sub_82679400);
PPC_FUNC_IMPL(__imp__sub_82679400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3400(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3400);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82679430;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,-3388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3388);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82679454
	if (ctx.cr6.eq) goto loc_82679454;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82679454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82679454:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82679468"))) PPC_WEAK_FUNC(sub_82679468);
PPC_FUNC_IMPL(__imp__sub_82679468) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
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
	// lwz r11,128(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// lwz r11,132(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// lwz r11,136(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 136);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// lwz r11,120(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// lwz r11,124(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82679580"))) PPC_WEAK_FUNC(sub_82679580);
PPC_FUNC_IMPL(__imp__sub_82679580) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-11908
	ctx.r10.s64 = ctx.r11.s64 + -11908;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82679468
	ctx.lr = 0x826795AC;
	sub_82679468(ctx, base);
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,-14428(r30)
	PPC_STORE_U32(ctx.r30.u32 + -14428, ctx.r10.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82688518
	ctx.lr = 0x826795C4;
	sub_82688518(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-14408
	ctx.r3.s64 = ctx.r11.s64 + -14408;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r3,-3396(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3396, ctx.r3.u32);
	// lwz r11,-14428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14428);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82694620
	ctx.lr = 0x82679690;
	sub_82694620(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82693368
	ctx.lr = 0x82679698;
	sub_82693368(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x826796cc
	if (!ctx.cr6.eq) goto loc_826796CC;
	// li r31,1
	ctx.r31.s64 = 1;
loc_826796A8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0968
	ctx.lr = 0x826796B0;
	sub_821E0968(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
loc_826796CC:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x826796a8
	goto loc_826796A8;
}

__attribute__((alias("__imp__sub_826796D8"))) PPC_WEAK_FUNC(sub_826796D8);
PPC_FUNC_IMPL(__imp__sub_826796D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-14408
	ctx.r30.s64 = ctx.r11.s64 + -14408;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82694160
	ctx.lr = 0x82679704;
	sub_82694160(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r10,-3388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3388);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82679728
	if (ctx.cr6.eq) goto loc_82679728;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82679728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82679728:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82679740"))) PPC_WEAK_FUNC(sub_82679740);
PPC_FUNC_IMPL(__imp__sub_82679740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82693370
	ctx.lr = 0x82679754;
	sub_82693370(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r31,-32071
	ctx.r31.s64 = -2101805056;
	// addi r3,r11,-14408
	ctx.r3.s64 = ctx.r11.s64 + -14408;
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,-26920
	ctx.r11.s64 = ctx.r11.s64 + -26920;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,-11212(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11212, ctx.r11.u32);
	// bl 0x82694620
	ctx.lr = 0x8267977C;
	sub_82694620(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// lis r10,-32152
	ctx.r10.s64 = -2107113472;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-14428(r9)
	PPC_STORE_U32(ctx.r9.u32 + -14428, ctx.r11.u32);
	// addi r11,r10,-27648
	ctx.r11.s64 = ctx.r10.s64 + -27648;
	// stw r11,-11212(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11212, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826797B0"))) PPC_WEAK_FUNC(sub_826797B0);
PPC_FUNC_IMPL(__imp__sub_826797B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// lwz r3,-10868(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10868);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826797C0"))) PPC_WEAK_FUNC(sub_826797C0);
PPC_FUNC_IMPL(__imp__sub_826797C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x826797C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82679820
	if (ctx.cr6.eq) goto loc_82679820;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8251c658
	ctx.lr = 0x826797E4;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// beq 0x82679804
	if (ctx.cr0.eq) goto loc_82679804;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,-3396(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3396);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826946b0
	ctx.lr = 0x82679800;
	sub_826946B0(ctx, base);
	// b 0x82679808
	goto loc_82679808;
loc_82679804:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82679808:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,-14424
	ctx.r11.s64 = ctx.r11.s64 + -14424;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82679820
	if (ctx.cr6.eq) goto loc_82679820;
	// stw r3,-3396(r29)
	PPC_STORE_U32(ctx.r29.u32 + -3396, ctx.r3.u32);
loc_82679820:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82679828"))) PPC_WEAK_FUNC(sub_82679828);
PPC_FUNC_IMPL(__imp__sub_82679828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-14424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82679880
	if (ctx.cr6.eq) goto loc_82679880;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r10,-3396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3396);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82679864
	if (!ctx.cr6.eq) goto loc_82679864;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r10,r10,-14408
	ctx.r10.s64 = ctx.r10.s64 + -14408;
	// stw r10,-3396(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3396, ctx.r10.u32);
loc_82679864:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82679878;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-14424(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14424, ctx.r11.u32);
loc_82679880:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82679898"))) PPC_WEAK_FUNC(sub_82679898);
PPC_FUNC_IMPL(__imp__sub_82679898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,-14424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14424);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826798d0
	if (!ctx.cr6.eq) goto loc_826798D0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826798d0
	if (ctx.cr6.eq) goto loc_826798D0;
	// li r4,100
	ctx.r4.s64 = 100;
	// bl 0x826797c0
	ctx.lr = 0x826798D0;
	sub_826797C0(ctx, base);
loc_826798D0:
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// addi r11,r11,-11908
	ctx.r11.s64 = ctx.r11.s64 + -11908;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826798E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82693378
	ctx.lr = 0x826798F0;
	sub_82693378(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82679908"))) PPC_WEAK_FUNC(sub_82679908);
PPC_FUNC_IMPL(__imp__sub_82679908) {
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
	// bl 0x826934a8
	ctx.lr = 0x82679918;
	sub_826934A8(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,-14428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82679940
	if (ctx.cr6.eq) goto loc_82679940;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82679940
	if (ctx.cr6.eq) goto loc_82679940;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82679940;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82679940:
	// bl 0x82679828
	ctx.lr = 0x82679944;
	sub_82679828(ctx, base);
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

__attribute__((alias("__imp__sub_82679958"))) PPC_WEAK_FUNC(sub_82679958);
PPC_FUNC_IMPL(__imp__sub_82679958) {
	PPC_FUNC_PROLOGUE();
	// b 0x82693510
	sub_82693510(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82679960"))) PPC_WEAK_FUNC(sub_82679960);
PPC_FUNC_IMPL(__imp__sub_82679960) {
	PPC_FUNC_PROLOGUE();
	// b 0x82693520
	sub_82693520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82679968"))) PPC_WEAK_FUNC(sub_82679968);
PPC_FUNC_IMPL(__imp__sub_82679968) {
	PPC_FUNC_PROLOGUE();
	// b 0x82693550
	sub_82693550(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82679970"))) PPC_WEAK_FUNC(sub_82679970);
PPC_FUNC_IMPL(__imp__sub_82679970) {
	PPC_FUNC_PROLOGUE();
	// b 0x82693ab8
	sub_82693AB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82679978"))) PPC_WEAK_FUNC(sub_82679978);
PPC_FUNC_IMPL(__imp__sub_82679978) {
	PPC_FUNC_PROLOGUE();
	// b 0x826937f8
	sub_826937F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82679980"))) PPC_WEAK_FUNC(sub_82679980);
PPC_FUNC_IMPL(__imp__sub_82679980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8251c658
	ctx.lr = 0x826799A0;
	sub_8251C658(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826799c0
	if (ctx.cr0.eq) goto loc_826799C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826900c8
	ctx.lr = 0x826799B0;
	sub_826900C8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,4200
	ctx.r11.s64 = ctx.r11.s64 + 4200;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x826799c4
	goto loc_826799C4;
loc_826799C0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_826799C4:
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// addi r11,r11,-11908
	ctx.r11.s64 = ctx.r11.s64 + -11908;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826799D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826799F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82679A10"))) PPC_WEAK_FUNC(sub_82679A10);
PPC_FUNC_IMPL(__imp__sub_82679A10) {
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
	ctx.lr = 0x82679A28;
	sub_82692DB0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,4208
	ctx.r11.s64 = ctx.r11.s64 + 4208;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82679A68"))) PPC_WEAK_FUNC(sub_82679A68);
PPC_FUNC_IMPL(__imp__sub_82679A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-14384
	ctx.r3.s64 = ctx.r11.s64 + -14384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82679A78"))) PPC_WEAK_FUNC(sub_82679A78);
PPC_FUNC_IMPL(__imp__sub_82679A78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82679A80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r11,-11348
	ctx.r4.s64 = ctx.r11.s64 + -11348;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82689fd0
	ctx.lr = 0x82679AA0;
	sub_82689FD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// beq 0x82679ab4
	if (ctx.cr0.eq) goto loc_82679AB4;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82679ad0
	goto loc_82679AD0;
loc_82679AB4:
	// lwz r11,-3384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82679ac8
	if (ctx.cr6.eq) goto loc_82679AC8;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82679ad0
	goto loc_82679AD0;
loc_82679AC8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
loc_82679AD0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82692ef0
	ctx.lr = 0x82679AE0;
	sub_82692EF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82679af0
	if (!ctx.cr0.eq) goto loc_82679AF0;
loc_82679AE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82679b50
	goto loc_82679B50;
loc_82679AF0:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8832
	ctx.r4.s64 = ctx.r11.s64 + 8832;
	// bl 0x8268b0b8
	ctx.lr = 0x82679B00;
	sub_8268B0B8(ctx, base);
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// addi r4,r11,-816
	ctx.r4.s64 = ctx.r11.s64 + -816;
	// lwz r3,-3384(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3384);
	// bl 0x82688fa8
	ctx.lr = 0x82679B14;
	sub_82688FA8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82679B30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82679ae8
	if (ctx.cr0.eq) goto loc_82679AE8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82679B4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82679B50:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82679B58"))) PPC_WEAK_FUNC(sub_82679B58);
PPC_FUNC_IMPL(__imp__sub_82679B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,9108
	ctx.r11.s64 = ctx.r11.s64 + 9108;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82679B80"))) PPC_WEAK_FUNC(sub_82679B80);
PPC_FUNC_IMPL(__imp__sub_82679B80) {
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
	// bl 0x82692e58
	ctx.lr = 0x82679B9C;
	sub_82692E58(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82679BB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82679BD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82679cc0
	if (ctx.cr0.eq) goto loc_82679CC0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
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
	ctx.lr = 0x82679BF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82679cb8
	if (ctx.cr6.eq) goto loc_82679CB8;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82679C14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82679cb8
	if (!ctx.cr0.eq) goto loc_82679CB8;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,-3384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3384);
	// lfs f1,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82679c3c
	if (ctx.cr6.eq) goto loc_82679C3C;
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82679c40
	goto loc_82679C40;
loc_82679C3C:
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
loc_82679C40:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82679c50
	if (ctx.cr6.eq) goto loc_82679C50;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82679c54
	goto loc_82679C54;
loc_82679C50:
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
loc_82679C54:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82679cb8
	if (ctx.cr0.eq) goto loc_82679CB8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fmuls f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,14096(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14096);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f10,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82679cb8
	if (!ctx.cr6.lt) goto loc_82679CB8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x826d87d0
	ctx.lr = 0x82679CB8;
	sub_826D87D0(ctx, base);
loc_82679CB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82679ce4
	goto loc_82679CE4;
loc_82679CC0:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82679CD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_82679CE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82679D00"))) PPC_WEAK_FUNC(sub_82679D00);
PPC_FUNC_IMPL(__imp__sub_82679D00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82679D18"))) PPC_WEAK_FUNC(sub_82679D18);
PPC_FUNC_IMPL(__imp__sub_82679D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82679D38"))) PPC_WEAK_FUNC(sub_82679D38);
PPC_FUNC_IMPL(__imp__sub_82679D38) {
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
	// ble cr6,0x82679d98
	if (!ctx.cr6.gt) goto loc_82679D98;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r4,r11,-11348
	ctx.r4.s64 = ctx.r11.s64 + -11348;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82689fd0
	ctx.lr = 0x82679D78;
	sub_82689FD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82679d94
	if (ctx.cr0.eq) goto loc_82679D94;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82679d94
	if (!ctx.cr6.gt) goto loc_82679D94;
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// b 0x82679d98
	goto loc_82679D98;
loc_82679D94:
	// stfs f31,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
loc_82679D98:
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

__attribute__((alias("__imp__sub_82679DB0"))) PPC_WEAK_FUNC(sub_82679DB0);
PPC_FUNC_IMPL(__imp__sub_82679DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8251c658
	ctx.lr = 0x82679DCC;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82679de0
	if (ctx.cr0.eq) goto loc_82679DE0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82679a10
	ctx.lr = 0x82679DDC;
	sub_82679A10(ctx, base);
	// b 0x82679de4
	goto loc_82679DE4;
loc_82679DE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82679DE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82679DF8"))) PPC_WEAK_FUNC(sub_82679DF8);
PPC_FUNC_IMPL(__imp__sub_82679DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,4208
	ctx.r11.s64 = ctx.r11.s64 + 4208;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82692dd0
	ctx.lr = 0x82679E24;
	sub_82692DD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82679e40
	if (ctx.cr0.eq) goto loc_82679E40;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-11212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82679E40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82679E40:
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

__attribute__((alias("__imp__sub_82679E60"))) PPC_WEAK_FUNC(sub_82679E60);
PPC_FUNC_IMPL(__imp__sub_82679E60) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82679e8c
	if (!ctx.cr6.eq) goto loc_82679E8C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82679f00
	goto loc_82679F00;
loc_82679E8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a947a0
	ctx.lr = 0x82679E94;
	sub_82A947A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,4252
	ctx.r4.s64 = ctx.r11.s64 + 4252;
	// bl 0x826e6bb0
	ctx.lr = 0x82679EA0;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82679ef4
	if (!ctx.cr0.eq) goto loc_82679EF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a94798
	ctx.lr = 0x82679EB0;
	sub_82A94798(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82679ef4
	if (ctx.cr0.eq) goto loc_82679EF4;
	// bl 0x826e2438
	ctx.lr = 0x82679EBC;
	sub_826E2438(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,-3384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82679ed4
	if (ctx.cr6.eq) goto loc_82679ED4;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82679edc
	goto loc_82679EDC;
loc_82679ED4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
loc_82679EDC:
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82679d38
	ctx.lr = 0x82679EEC;
	sub_82679D38(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82679f00
	goto loc_82679F00;
loc_82679EF4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82526588
	ctx.lr = 0x82679F00;
	sub_82526588(ctx, base);
loc_82679F00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82679F18"))) PPC_WEAK_FUNC(sub_82679F18);
PPC_FUNC_IMPL(__imp__sub_82679F18) {
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
	ctx.lr = 0x82679F30;
	sub_82692DB0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r11,4280
	ctx.r10.s64 = ctx.r11.s64 + 4280;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3544(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
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
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stb r10,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r10.u8);
	// stb r10,77(r31)
	PPC_STORE_U8(ctx.r31.u32 + 77, ctx.r10.u8);
	// stb r11,78(r31)
	PPC_STORE_U8(ctx.r31.u32 + 78, ctx.r11.u8);
	// stb r11,79(r31)
	PPC_STORE_U8(ctx.r31.u32 + 79, ctx.r11.u8);
	// stb r11,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82679FC8"))) PPC_WEAK_FUNC(sub_82679FC8);
PPC_FUNC_IMPL(__imp__sub_82679FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-14108
	ctx.r3.s64 = ctx.r11.s64 + -14108;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82679FD8"))) PPC_WEAK_FUNC(sub_82679FD8);
PPC_FUNC_IMPL(__imp__sub_82679FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,4280
	ctx.r11.s64 = ctx.r11.s64 + 4280;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82692dd0
	sub_82692DD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82679FE8"))) PPC_WEAK_FUNC(sub_82679FE8);
PPC_FUNC_IMPL(__imp__sub_82679FE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82679ffc
	if (!ctx.cr0.eq) goto loc_82679FFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82679FFC:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267A010"))) PPC_WEAK_FUNC(sub_8267A010);
PPC_FUNC_IMPL(__imp__sub_8267A010) {
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
	// bl 0x82692e58
	ctx.lr = 0x8267A028;
	sub_82692E58(ctx, base);
	// lbz r11,77(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 77);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8267a374
	if (!ctx.cr0.eq) goto loc_8267A374;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8267a050
	if (!ctx.cr6.gt) goto loc_8267A050;
loc_8267A048:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8267a378
	goto loc_8267A378;
loc_8267A050:
	// lbz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8267a110
	if (ctx.cr0.eq) goto loc_8267A110;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267A070;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267a374
	if (ctx.cr0.eq) goto loc_8267A374;
	// lbz r11,78(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 78);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// beq 0x8267a0d0
	if (ctx.cr0.eq) goto loc_8267A0D0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stb r10,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r10.u8);
	// bne cr6,0x8267a374
	if (!ctx.cr6.eq) goto loc_8267A374;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8267a0bc
	if (ctx.cr0.eq) goto loc_8267A0BC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8267a0c8
	goto loc_8267A0C8;
loc_8267A0BC:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,77(r31)
	PPC_STORE_U8(ctx.r31.u32 + 77, ctx.r10.u8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_8267A0C8:
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// b 0x8267a374
	goto loc_8267A374;
loc_8267A0D0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stb r9,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r9.u8);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8267a374
	if (ctx.cr6.lt) goto loc_8267A374;
	// lbz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267a104
	if (ctx.cr0.eq) goto loc_8267A104;
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// b 0x8267a374
	goto loc_8267A374;
loc_8267A104:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,77(r31)
	PPC_STORE_U8(ctx.r31.u32 + 77, ctx.r11.u8);
	// b 0x8267a374
	goto loc_8267A374;
loc_8267A110:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267a048
	if (ctx.cr0.eq) goto loc_8267A048;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r11,r4,88
	ctx.r11.s64 = ctx.r4.s64 * 88;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,12716
	ctx.r10.s64 = ctx.r10.s64 + 12716;
loc_8267A134:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8267a158
	if (ctx.cr0.eq) goto loc_8267A158;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8267a134
	if (ctx.cr6.eq) goto loc_8267A134;
loc_8267A158:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8267a174
	if (!ctx.cr0.eq) goto loc_8267A174;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267A174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8267A174:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r10,r11,12752
	ctx.r10.s64 = ctx.r11.s64 + 12752;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_8267A194:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8267a1b8
	if (ctx.cr0.eq) goto loc_8267A1B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8267a194
	if (ctx.cr6.eq) goto loc_8267A194;
loc_8267A1B8:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8267a1d8
	if (!ctx.cr0.eq) goto loc_8267A1D8;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f1,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267A1D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8267A1D8:
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// beq 0x8267a228
	if (ctx.cr0.eq) goto loc_8267A228;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f1,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x826d87d0
	ctx.lr = 0x8267A228;
	sub_826D87D0(ctx, base);
loc_8267A228:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267A240;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267a354
	if (ctx.cr0.eq) goto loc_8267A354;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
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
	ctx.lr = 0x8267A264;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267A278;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267a28c
	if (ctx.cr0.eq) goto loc_8267A28C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r11.u8);
	// b 0x8267a374
	goto loc_8267A374;
loc_8267A28C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r10,r11,4332
	ctx.r10.s64 = ctx.r11.s64 + 4332;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_8267A2AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8267a2d0
	if (ctx.cr0.eq) goto loc_8267A2D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8267a2ac
	if (ctx.cr6.eq) goto loc_8267A2AC;
loc_8267A2D0:
	// li r7,1
	ctx.r7.s64 = 1;
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8267a2f0
	if (!ctx.cr0.eq) goto loc_8267A2F0;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267a2f0
	if (ctx.cr0.eq) goto loc_8267A2F0;
	// stb r7,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r7.u8);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
loc_8267A2F0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r10,r11,12772
	ctx.r10.s64 = ctx.r11.s64 + 12772;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_8267A310:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8267a334
	if (ctx.cr0.eq) goto loc_8267A334;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8267a310
	if (ctx.cr6.eq) goto loc_8267A310;
loc_8267A334:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8267a374
	if (!ctx.cr0.eq) goto loc_8267A374;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267a374
	if (ctx.cr0.eq) goto loc_8267A374;
	// stb r7,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r7.u8);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// b 0x8267a374
	goto loc_8267A374;
loc_8267A354:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267A368;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8267a378
	if (ctx.cr6.eq) goto loc_8267A378;
loc_8267A374:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8267A378:
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

__attribute__((alias("__imp__sub_8267A390"))) PPC_WEAK_FUNC(sub_8267A390);
PPC_FUNC_IMPL(__imp__sub_8267A390) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8267a3a4
	if (!ctx.cr6.eq) goto loc_8267A3A4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267A3A4:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8267a3b4
	if (!ctx.cr6.eq) goto loc_8267A3B4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267A3B4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267A3C0"))) PPC_WEAK_FUNC(sub_8267A3C0);
PPC_FUNC_IMPL(__imp__sub_8267A3C0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8267a3e4
	if (!ctx.cr0.eq) goto loc_8267A3E4;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8267a3e4
	if (!ctx.cr6.eq) goto loc_8267A3E4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267A3E4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267a3fc
	if (ctx.cr6.eq) goto loc_8267A3FC;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267a3fc
	if (ctx.cr6.eq) goto loc_8267A3FC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267A3FC:
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8267a418
	if (!ctx.cr0.eq) goto loc_8267A418;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8267a418
	if (!ctx.cr6.eq) goto loc_8267A418;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267A418:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267A438"))) PPC_WEAK_FUNC(sub_8267A438);
PPC_FUNC_IMPL(__imp__sub_8267A438) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mulli r10,r4,88
	ctx.r10.s64 = ctx.r4.s64 * 88;
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r4,r11,4348
	ctx.r4.s64 = ctx.r11.s64 + 4348;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x826e2518
	ctx.lr = 0x8267A474;
	sub_826E2518(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bge cr6,0x8267a484
	if (!ctx.cr6.lt) goto loc_8267A484;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267a9c0
	goto loc_8267A9C0;
loc_8267A484:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826e2438
	ctx.lr = 0x8267A48C;
	sub_826E2438(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// addi r9,r11,-29792
	ctx.r9.s64 = ctx.r11.s64 + -29792;
loc_8267A49C:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// beq 0x8267a4c0
	if (ctx.cr0.eq) goto loc_8267A4C0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8267a49c
	if (ctx.cr6.eq) goto loc_8267A49C;
loc_8267A4C0:
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f7,25488(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 25488);
	ctx.f7.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f6,3544(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3544);
	ctx.f6.f64 = double(temp.f32);
	// lis r5,-32044
	ctx.r5.s64 = -2100035584;
	// lfs f4,14088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,5424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5424);
	ctx.f3.f64 = double(temp.f32);
	// bne 0x8267a5c4
	if (!ctx.cr0.eq) goto loc_8267A5C4;
	// lbz r11,79(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 79);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// bne 0x8267a514
	if (!ctx.cr0.eq) goto loc_8267A514;
	// lfs f0,5160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5160);
	ctx.f0.f64 = double(temp.f32);
	// stb r6,79(r31)
	PPC_STORE_U8(ctx.r31.u32 + 79, ctx.r6.u8);
	// fadds f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
loc_8267A514:
	// lbz r10,79(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 79);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8267a5c4
	if (ctx.cr0.eq) goto loc_8267A5C4;
	// lfs f13,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5160);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8267a5c0
	if (!ctx.cr6.gt) goto loc_8267A5C0;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267a544
	if (ctx.cr0.eq) goto loc_8267A544;
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stb r6,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
loc_8267A544:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267a5c4
	if (ctx.cr0.eq) goto loc_8267A5C4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,-3384(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + -3384);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lfs f13,84(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x8267a570
	if (ctx.cr6.eq) goto loc_8267A570;
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8267a574
	goto loc_8267A574;
loc_8267A570:
	// fmr f0,f6
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f6.f64;
loc_8267A574:
	// fmuls f0,f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8267a58c
	if (!ctx.cr6.gt) goto loc_8267A58C;
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stb r6,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// b 0x8267a5c4
	goto loc_8267A5C4;
loc_8267A58C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267a59c
	if (ctx.cr6.eq) goto loc_8267A59C;
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8267a5a0
	goto loc_8267A5A0;
loc_8267A59C:
	// fmr f0,f6
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f6.f64;
loc_8267A5A0:
	// fmuls f0,f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// stb r6,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8267a5b8
	if (!ctx.cr6.lt) goto loc_8267A5B8;
	// stfs f4,8(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x8267a5c4
	goto loc_8267A5C4;
loc_8267A5B8:
	// stfs f6,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x8267a5c4
	goto loc_8267A5C4;
loc_8267A5C0:
	// stb r4,79(r31)
	PPC_STORE_U8(ctx.r31.u32 + 79, ctx.r4.u8);
loc_8267A5C4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,32700
	ctx.r10.s64 = ctx.r11.s64 + 32700;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8267A5D0:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// beq 0x8267a5f4
	if (ctx.cr0.eq) goto loc_8267A5F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8267a5d0
	if (ctx.cr6.eq) goto loc_8267A5D0;
loc_8267A5F4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f12,2128(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2128);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,7856(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7856);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,-12556(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12556);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,4276(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4276);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,-24552(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24552);
	ctx.f5.f64 = double(temp.f32);
	// bne 0x8267a7c4
	if (!ctx.cr0.eq) goto loc_8267A7C4;
	// lbz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 84);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8267a678
	if (!ctx.cr0.eq) goto loc_8267A678;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f0,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
loc_8267A640:
	// stfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x8267a654
	if (ctx.cr6.lt) goto loc_8267A654;
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x8267a674
	if (!ctx.cr6.gt) goto loc_8267A674;
loc_8267A654:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x8267a664
	if (!ctx.cr6.gt) goto loc_8267A664;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// b 0x8267a640
	goto loc_8267A640;
loc_8267A664:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x8267a640
	if (!ctx.cr6.lt) goto loc_8267A640;
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// b 0x8267a640
	goto loc_8267A640;
loc_8267A674:
	// stb r6,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r6.u8);
loc_8267A678:
	// lbz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 84);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267a7c4
	if (ctx.cr0.eq) goto loc_8267A7C4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f13,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_8267A698:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x8267a6a8
	if (ctx.cr6.lt) goto loc_8267A6A8;
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x8267a6c8
	if (!ctx.cr6.gt) goto loc_8267A6C8;
loc_8267A6A8:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x8267a6b8
	if (!ctx.cr6.gt) goto loc_8267A6B8;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// b 0x8267a698
	goto loc_8267A698;
loc_8267A6B8:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x8267a698
	if (!ctx.cr6.lt) goto loc_8267A698;
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// b 0x8267a698
	goto loc_8267A698;
loc_8267A6C8:
	// fabs f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// ble cr6,0x8267a7c0
	if (!ctx.cr6.gt) goto loc_8267A7C0;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267a6e8
	if (ctx.cr0.eq) goto loc_8267A6E8;
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stb r6,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
loc_8267A6E8:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267a75c
	if (ctx.cr0.eq) goto loc_8267A75C;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,-3384(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + -3384);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lfs f13,84(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x8267a714
	if (ctx.cr6.eq) goto loc_8267A714;
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8267a718
	goto loc_8267A718;
loc_8267A714:
	// fmr f0,f6
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f6.f64;
loc_8267A718:
	// fmuls f0,f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8267a72c
	if (!ctx.cr6.gt) goto loc_8267A72C;
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x8267a758
	goto loc_8267A758;
loc_8267A72C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267a73c
	if (ctx.cr6.eq) goto loc_8267A73C;
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8267a740
	goto loc_8267A740;
loc_8267A73C:
	// fmr f0,f6
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f6.f64;
loc_8267A740:
	// fmuls f0,f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8267a754
	if (!ctx.cr6.lt) goto loc_8267A754;
	// stfs f4,8(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x8267a758
	goto loc_8267A758;
loc_8267A754:
	// stfs f6,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_8267A758:
	// stb r6,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
loc_8267A75C:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267a774
	if (ctx.cr0.eq) goto loc_8267A774;
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stb r6,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_8267A774:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267a7c4
	if (ctx.cr0.eq) goto loc_8267A7C4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lfs f13,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// stb r6,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// ble cr6,0x8267a7a8
	if (!ctx.cr6.gt) goto loc_8267A7A8;
	// stfs f4,8(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x8267a7c4
	goto loc_8267A7C4;
loc_8267A7A8:
	// fcmpu cr6,f0,f5
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f5.f64);
	// bge cr6,0x8267a7b8
	if (!ctx.cr6.lt) goto loc_8267A7B8;
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x8267a7c4
	goto loc_8267A7C4;
loc_8267A7B8:
	// stfs f6,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x8267a7c4
	goto loc_8267A7C4;
loc_8267A7C0:
	// stb r4,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r4.u8);
loc_8267A7C4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,4340
	ctx.r10.s64 = ctx.r11.s64 + 4340;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8267A7D0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8267a7f4
	if (ctx.cr0.eq) goto loc_8267A7F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8267a7d0
	if (ctx.cr6.eq) goto loc_8267A7D0;
loc_8267A7F4:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8267a994
	if (!ctx.cr0.eq) goto loc_8267A994;
	// lbz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8267a848
	if (!ctx.cr0.eq) goto loc_8267A848;
	// stfs f9,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
loc_8267A80C:
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x8267a820
	if (ctx.cr6.lt) goto loc_8267A820;
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x8267a844
	if (!ctx.cr6.gt) goto loc_8267A844;
loc_8267A820:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x8267a830
	if (!ctx.cr6.gt) goto loc_8267A830;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// b 0x8267a83c
	goto loc_8267A83C;
loc_8267A830:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x8267a83c
	if (!ctx.cr6.lt) goto loc_8267A83C;
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
loc_8267A83C:
	// stfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// b 0x8267a80c
	goto loc_8267A80C;
loc_8267A844:
	// stb r6,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r6.u8);
loc_8267A848:
	// lbz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267a994
	if (ctx.cr0.eq) goto loc_8267A994;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f13,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_8267A868:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x8267a878
	if (ctx.cr6.lt) goto loc_8267A878;
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x8267a898
	if (!ctx.cr6.gt) goto loc_8267A898;
loc_8267A878:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x8267a888
	if (!ctx.cr6.gt) goto loc_8267A888;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// b 0x8267a868
	goto loc_8267A868;
loc_8267A888:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x8267a868
	if (!ctx.cr6.lt) goto loc_8267A868;
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// b 0x8267a868
	goto loc_8267A868;
loc_8267A898:
	// fabs f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// ble cr6,0x8267a990
	if (!ctx.cr6.gt) goto loc_8267A990;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267a8b8
	if (ctx.cr0.eq) goto loc_8267A8B8;
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stb r6,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
loc_8267A8B8:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267a92c
	if (ctx.cr0.eq) goto loc_8267A92C;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,-3384(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + -3384);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lfs f13,84(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x8267a8e4
	if (ctx.cr6.eq) goto loc_8267A8E4;
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8267a8e8
	goto loc_8267A8E8;
loc_8267A8E4:
	// fmr f0,f6
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f6.f64;
loc_8267A8E8:
	// fmuls f0,f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8267a8fc
	if (!ctx.cr6.gt) goto loc_8267A8FC;
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x8267a928
	goto loc_8267A928;
loc_8267A8FC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267a90c
	if (ctx.cr6.eq) goto loc_8267A90C;
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8267a910
	goto loc_8267A910;
loc_8267A90C:
	// fmr f0,f6
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f6.f64;
loc_8267A910:
	// fmuls f0,f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8267a924
	if (!ctx.cr6.lt) goto loc_8267A924;
	// stfs f4,8(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x8267a928
	goto loc_8267A928;
loc_8267A924:
	// stfs f6,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_8267A928:
	// stb r6,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
loc_8267A92C:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267a944
	if (ctx.cr0.eq) goto loc_8267A944;
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stb r6,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_8267A944:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267a994
	if (ctx.cr0.eq) goto loc_8267A994;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lfs f13,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// stb r6,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// ble cr6,0x8267a978
	if (!ctx.cr6.gt) goto loc_8267A978;
	// stfs f4,8(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x8267a994
	goto loc_8267A994;
loc_8267A978:
	// fcmpu cr6,f0,f5
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f5.f64);
	// bge cr6,0x8267a988
	if (!ctx.cr6.lt) goto loc_8267A988;
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x8267a994
	goto loc_8267A994;
loc_8267A988:
	// stfs f6,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x8267a994
	goto loc_8267A994;
loc_8267A990:
	// stb r4,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r4.u8);
loc_8267A994:
	// lbz r11,79(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 79);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8267a9bc
	if (!ctx.cr0.eq) goto loc_8267A9BC;
	// lbz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 84);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8267a9bc
	if (!ctx.cr0.eq) goto loc_8267A9BC;
	// lbz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267a9c0
	if (ctx.cr0.eq) goto loc_8267A9C0;
loc_8267A9BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267A9C0:
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

__attribute__((alias("__imp__sub_8267A9D8"))) PPC_WEAK_FUNC(sub_8267A9D8);
PPC_FUNC_IMPL(__imp__sub_8267A9D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267a9f8
	if (ctx.cr0.eq) goto loc_8267A9F8;
	// lwz r9,68(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8267aa1c
	if (ctx.cr6.lt) goto loc_8267AA1C;
loc_8267A9F8:
	// lbz r11,78(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 78);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267aa18
	if (ctx.cr0.eq) goto loc_8267AA18;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// b 0x8267aa1c
	goto loc_8267AA1C;
loc_8267AA18:
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
loc_8267AA1C:
	// stb r10,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, ctx.r10.u8);
	// stb r10,77(r3)
	PPC_STORE_U8(ctx.r3.u32 + 77, ctx.r10.u8);
	// stb r10,79(r3)
	PPC_STORE_U8(ctx.r3.u32 + 79, ctx.r10.u8);
	// stb r10,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, ctx.r10.u8);
	// stb r10,92(r3)
	PPC_STORE_U8(ctx.r3.u32 + 92, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267AA38"))) PPC_WEAK_FUNC(sub_8267AA38);
PPC_FUNC_IMPL(__imp__sub_8267AA38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r4,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r4.u32);
	// b 0x8267a9d8
	sub_8267A9D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267AA4C"))) PPC_WEAK_FUNC(sub_8267AA4C);
PPC_FUNC_IMPL(__imp__sub_8267AA4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267AA50"))) PPC_WEAK_FUNC(sub_8267AA50);
PPC_FUNC_IMPL(__imp__sub_8267AA50) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8267aa70
	if (!ctx.cr6.lt) goto loc_8267AA70;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r4.u32);
	// blr 
	return;
loc_8267AA70:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267AA78"))) PPC_WEAK_FUNC(sub_8267AA78);
PPC_FUNC_IMPL(__imp__sub_8267AA78) {
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
	// ble cr6,0x8267aad8
	if (!ctx.cr6.gt) goto loc_8267AAD8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r4,r11,-11348
	ctx.r4.s64 = ctx.r11.s64 + -11348;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82689fd0
	ctx.lr = 0x8267AAB8;
	sub_82689FD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267aad4
	if (ctx.cr0.eq) goto loc_8267AAD4;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x8267aad4
	if (!ctx.cr6.gt) goto loc_8267AAD4;
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// b 0x8267aad8
	goto loc_8267AAD8;
loc_8267AAD4:
	// stfs f31,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
loc_8267AAD8:
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

__attribute__((alias("__imp__sub_8267AAF0"))) PPC_WEAK_FUNC(sub_8267AAF0);
PPC_FUNC_IMPL(__imp__sub_8267AAF0) {
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
	// ble cr6,0x8267ab50
	if (!ctx.cr6.gt) goto loc_8267AB50;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r4,r11,-11348
	ctx.r4.s64 = ctx.r11.s64 + -11348;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82689fd0
	ctx.lr = 0x8267AB30;
	sub_82689FD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267ab4c
	if (ctx.cr0.eq) goto loc_8267AB4C;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x8267ab4c
	if (!ctx.cr6.gt) goto loc_8267AB4C;
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// b 0x8267ab50
	goto loc_8267AB50;
loc_8267AB4C:
	// stfs f31,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
loc_8267AB50:
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

__attribute__((alias("__imp__sub_8267AB68"))) PPC_WEAK_FUNC(sub_8267AB68);
PPC_FUNC_IMPL(__imp__sub_8267AB68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x8251c658
	ctx.lr = 0x8267AB84;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267ab98
	if (ctx.cr0.eq) goto loc_8267AB98;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82679f18
	ctx.lr = 0x8267AB94;
	sub_82679F18(ctx, base);
	// b 0x8267ab9c
	goto loc_8267AB9C;
loc_8267AB98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267AB9C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267ABB0"))) PPC_WEAK_FUNC(sub_8267ABB0);
PPC_FUNC_IMPL(__imp__sub_8267ABB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,4280
	ctx.r11.s64 = ctx.r11.s64 + 4280;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82692dd0
	ctx.lr = 0x8267ABDC;
	sub_82692DD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267abf8
	if (ctx.cr0.eq) goto loc_8267ABF8;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-11212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267ABF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8267ABF8:
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

__attribute__((alias("__imp__sub_8267AC18"))) PPC_WEAK_FUNC(sub_8267AC18);
PPC_FUNC_IMPL(__imp__sub_8267AC18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8267AC20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stb r11,79(r31)
	PPC_STORE_U8(ctx.r31.u32 + 79, ctx.r11.u8);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stb r11,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r11.u8);
	// stb r11,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r11.u8);
	// stb r11,78(r31)
	PPC_STORE_U8(ctx.r31.u32 + 78, ctx.r11.u8);
	// bne cr6,0x8267ac64
	if (!ctx.cr6.eq) goto loc_8267AC64;
loc_8267AC5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8267ae0c
	goto loc_8267AE0C;
loc_8267AC64:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8832
	ctx.r4.s64 = ctx.r11.s64 + 8832;
	// bl 0x8268b0b8
	ctx.lr = 0x8267AC74;
	sub_8268B0B8(ctx, base);
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// addi r4,r11,-5276
	ctx.r4.s64 = ctx.r11.s64 + -5276;
	// lwz r3,-3384(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3384);
	// bl 0x82688fa8
	ctx.lr = 0x8267AC8C;
	sub_82688FA8(ctx, base);
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lwz r3,-3384(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3384);
	// addi r4,r11,-816
	ctx.r4.s64 = ctx.r11.s64 + -816;
	// bl 0x82688fa8
	ctx.lr = 0x8267ACA0;
	sub_82688FA8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8267ACBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267ac5c
	if (ctx.cr0.eq) goto loc_8267AC5C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r4,r11,-11348
	ctx.r4.s64 = ctx.r11.s64 + -11348;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82689fd0
	ctx.lr = 0x8267ACD8;
	sub_82689FD0(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// beq 0x8267acf0
	if (ctx.cr0.eq) goto loc_8267ACF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8267aa78
	ctx.lr = 0x8267ACF0;
	sub_8267AA78(ctx, base);
loc_8267ACF0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267ad08
	if (ctx.cr0.eq) goto loc_8267AD08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8267aaf0
	ctx.lr = 0x8267AD08;
	sub_8267AAF0(ctx, base);
loc_8267AD08:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82692ef0
	ctx.lr = 0x8267AD14;
	sub_82692EF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267ac5c
	if (ctx.cr0.eq) goto loc_8267AC5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8267a9d8
	ctx.lr = 0x8267AD24;
	sub_8267A9D8(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r11,-9692
	ctx.r30.s64 = ctx.r11.s64 + -9692;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82691a40
	ctx.lr = 0x8267AD3C;
	sub_82691A40(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// addi r29,r11,-11072
	ctx.r29.s64 = ctx.r11.s64 + -11072;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82691a40
	ctx.lr = 0x8267AD58;
	sub_82691A40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x82691a40
	ctx.lr = 0x8267AD6C;
	sub_82691A40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x82691a40
	ctx.lr = 0x8267AD80;
	sub_82691A40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r4,r10,-9416
	ctx.r4.s64 = ctx.r10.s64 + -9416;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x82691a40
	ctx.lr = 0x8267AD98;
	sub_82691A40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r4,r10,-10796
	ctx.r4.s64 = ctx.r10.s64 + -10796;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bl 0x82691a40
	ctx.lr = 0x8267ADB0;
	sub_82691A40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r4,r10,-8312
	ctx.r4.s64 = ctx.r10.s64 + -8312;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82691a40
	ctx.lr = 0x8267ADC8;
	sub_82691A40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r4,r10,-8588
	ctx.r4.s64 = ctx.r10.s64 + -8588;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x82691a40
	ctx.lr = 0x8267ADE0;
	sub_82691A40(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8267ADFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_8267AE0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267AE18"))) PPC_WEAK_FUNC(sub_8267AE18);
PPC_FUNC_IMPL(__imp__sub_8267AE18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8267AE20;
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
	// bne cr6,0x8267ae3c
	if (!ctx.cr6.eq) goto loc_8267AE3C;
loc_8267AE34:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8267af9c
	goto loc_8267AF9C;
loc_8267AE3C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a947a0
	ctx.lr = 0x8267AE44;
	sub_82A947A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,4400
	ctx.r4.s64 = ctx.r11.s64 + 4400;
	// bl 0x826e6bb0
	ctx.lr = 0x8267AE54;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8267ae94
	if (!ctx.cr0.eq) goto loc_8267AE94;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a94798
	ctx.lr = 0x8267AE64;
	sub_82A94798(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8267ae34
	if (ctx.cr0.eq) goto loc_8267AE34;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267ae34
	if (ctx.cr0.eq) goto loc_8267AE34;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82687ef0
	ctx.lr = 0x8267AE80;
	sub_82687EF0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r3,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// b 0x8267af9c
	goto loc_8267AF9C;
loc_8267AE94:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4380
	ctx.r4.s64 = ctx.r11.s64 + 4380;
	// bl 0x826e6bb0
	ctx.lr = 0x8267AEA4;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8267aecc
	if (!ctx.cr0.eq) goto loc_8267AECC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a94798
	ctx.lr = 0x8267AEB4;
	sub_82A94798(ctx, base);
	// bl 0x826e2440
	ctx.lr = 0x8267AEB8;
	sub_826E2440(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8267af90
	if (ctx.cr0.lt) goto loc_8267AF90;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r11.u32);
	// b 0x8267af9c
	goto loc_8267AF9C;
loc_8267AECC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4368
	ctx.r4.s64 = ctx.r11.s64 + 4368;
	// bl 0x826e6bb0
	ctx.lr = 0x8267AEDC;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8267af30
	if (!ctx.cr0.eq) goto loc_8267AF30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a94798
	ctx.lr = 0x8267AEEC;
	sub_82A94798(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267af28
	if (ctx.cr0.eq) goto loc_8267AF28;
	// bl 0x826e2438
	ctx.lr = 0x8267AEF8;
	sub_826E2438(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,-3384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267af10
	if (ctx.cr6.eq) goto loc_8267AF10;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8267af18
	goto loc_8267AF18;
loc_8267AF10:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
loc_8267AF18:
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x8267aaf0
	ctx.lr = 0x8267AF28;
	sub_8267AAF0(ctx, base);
loc_8267AF28:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267af9c
	goto loc_8267AF9C;
loc_8267AF30:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4356
	ctx.r4.s64 = ctx.r11.s64 + 4356;
	// bl 0x826e6bb0
	ctx.lr = 0x8267AF40;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8267af90
	if (!ctx.cr0.eq) goto loc_8267AF90;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a94798
	ctx.lr = 0x8267AF50;
	sub_82A94798(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267af28
	if (ctx.cr0.eq) goto loc_8267AF28;
	// bl 0x826e2438
	ctx.lr = 0x8267AF5C;
	sub_826E2438(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,-3384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267af74
	if (ctx.cr6.eq) goto loc_8267AF74;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8267af7c
	goto loc_8267AF7C;
loc_8267AF74:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
loc_8267AF7C:
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x8267aa78
	ctx.lr = 0x8267AF8C;
	sub_8267AA78(ctx, base);
	// b 0x8267af28
	goto loc_8267AF28;
loc_8267AF90:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82526588
	ctx.lr = 0x8267AF9C;
	sub_82526588(ctx, base);
loc_8267AF9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267AFA8"))) PPC_WEAK_FUNC(sub_8267AFA8);
PPC_FUNC_IMPL(__imp__sub_8267AFA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8267a9d8
	sub_8267A9D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267AFB0"))) PPC_WEAK_FUNC(sub_8267AFB0);
PPC_FUNC_IMPL(__imp__sub_8267AFB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// subf r8,r3,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r3.s64;
	// addi r9,r11,-9356
	ctx.r9.s64 = ctx.r11.s64 + -9356;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
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
	// lbz r9,88(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 88);
	// stb r9,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r9.u8);
loc_8267AFE8:
	// lwzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x8267afe8
	if (!ctx.cr0.eq) goto loc_8267AFE8;
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// lwz r11,84(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// lbz r11,88(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 88);
	// stb r11,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267B018"))) PPC_WEAK_FUNC(sub_8267B018);
PPC_FUNC_IMPL(__imp__sub_8267B018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,26744
	ctx.r3.s64 = ctx.r11.s64 + 26744;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267B028"))) PPC_WEAK_FUNC(sub_8267B028);
PPC_FUNC_IMPL(__imp__sub_8267B028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-13832
	ctx.r3.s64 = ctx.r11.s64 + -13832;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267B038"))) PPC_WEAK_FUNC(sub_8267B038);
PPC_FUNC_IMPL(__imp__sub_8267B038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267b04c
	if (!ctx.cr6.eq) goto loc_8267B04C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8267B04C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267B070"))) PPC_WEAK_FUNC(sub_8267B070);
PPC_FUNC_IMPL(__imp__sub_8267B070) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267B088"))) PPC_WEAK_FUNC(sub_8267B088);
PPC_FUNC_IMPL(__imp__sub_8267B088) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267B0A0"))) PPC_WEAK_FUNC(sub_8267B0A0);
PPC_FUNC_IMPL(__imp__sub_8267B0A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stfs f1,16(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267B0B8"))) PPC_WEAK_FUNC(sub_8267B0B8);
PPC_FUNC_IMPL(__imp__sub_8267B0B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stfs f1,20(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267B0D0"))) PPC_WEAK_FUNC(sub_8267B0D0);
PPC_FUNC_IMPL(__imp__sub_8267B0D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267B0E8"))) PPC_WEAK_FUNC(sub_8267B0E8);
PPC_FUNC_IMPL(__imp__sub_8267B0E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267b134
	if (ctx.cr0.eq) goto loc_8267B134;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lfs f11,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f10,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f11,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
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
	// blr 
	return;
loc_8267B134:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267B140"))) PPC_WEAK_FUNC(sub_8267B140);
PPC_FUNC_IMPL(__imp__sub_8267B140) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267b1ec
	if (ctx.cr0.eq) goto loc_8267B1EC;
	// lfs f0,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82692178
	ctx.lr = 0x8267B1A4;
	sub_82692178(ctx, base);
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f11,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// lfs f11,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// b 0x8267b20c
	goto loc_8267B20C;
loc_8267B1EC:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_8267B20C:
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

__attribute__((alias("__imp__sub_8267B228"))) PPC_WEAK_FUNC(sub_8267B228);
PPC_FUNC_IMPL(__imp__sub_8267B228) {
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
	// ble cr6,0x8267b288
	if (!ctx.cr6.gt) goto loc_8267B288;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r4,r11,-11348
	ctx.r4.s64 = ctx.r11.s64 + -11348;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82689fd0
	ctx.lr = 0x8267B268;
	sub_82689FD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267b284
	if (ctx.cr0.eq) goto loc_8267B284;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x8267b284
	if (!ctx.cr6.gt) goto loc_8267B284;
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// b 0x8267b288
	goto loc_8267B288;
loc_8267B284:
	// stfs f31,172(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
loc_8267B288:
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

__attribute__((alias("__imp__sub_8267B2A0"))) PPC_WEAK_FUNC(sub_8267B2A0);
PPC_FUNC_IMPL(__imp__sub_8267B2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8267B2A8;
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
	// bl 0x8268ed68
	ctx.lr = 0x8267B2BC;
	sub_8268ED68(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268eb60
	ctx.lr = 0x8267B2CC;
	sub_8268EB60(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x8267b2fc
	if (ctx.cr0.eq) goto loc_8267B2FC;
	// bl 0x8268ee10
	ctx.lr = 0x8267B2E4;
	sub_8268EE10(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8268ee98
	ctx.lr = 0x8267B2F4;
	sub_8268EE98(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267b304
	goto loc_8267B304;
loc_8267B2FC:
	// bl 0x8268eff0
	ctx.lr = 0x8267B300;
	sub_8268EFF0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267B304:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267B310"))) PPC_WEAK_FUNC(sub_8267B310);
PPC_FUNC_IMPL(__imp__sub_8267B310) {
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
	ctx.lr = 0x8267B328;
	sub_82692DB0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 + 68;
	// addi r8,r8,-9356
	ctx.r8.s64 = ctx.r8.s64 + -9356;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r10,4456
	ctx.r9.s64 = ctx.r10.s64 + 4456;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
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
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8267B38C:
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x8267b38c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8267B38C;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stb r10,88(r11)
	PPC_STORE_U8(ctx.r11.u32 + 88, ctx.r10.u8);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r10,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
	// addi r9,r9,4444
	ctx.r9.s64 = ctx.r9.s64 + 4444;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r8.u32);
	// stw r9,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r9.u32);
	// stb r7,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r7.u8);
	// stb r10,178(r31)
	PPC_STORE_U8(ctx.r31.u32 + 178, ctx.r10.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267B3D8"))) PPC_WEAK_FUNC(sub_8267B3D8);
PPC_FUNC_IMPL(__imp__sub_8267B3D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,4456
	ctx.r10.s64 = ctx.r11.s64 + 4456;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-16924
	ctx.r11.s64 = ctx.r11.s64 + -16924;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// bl 0x82692dd0
	ctx.lr = 0x8267B414;
	sub_82692DD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267b430
	if (ctx.cr0.eq) goto loc_8267B430;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-11212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267B430;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8267B430:
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

__attribute__((alias("__imp__sub_8267B450"))) PPC_WEAK_FUNC(sub_8267B450);
PPC_FUNC_IMPL(__imp__sub_8267B450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8267B458;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x8268f898
	ctx.lr = 0x8267B46C;
	sub_8268F898(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,4508
	ctx.r4.s64 = ctx.r11.s64 + 4508;
	// bl 0x8268e318
	ctx.lr = 0x8267B478;
	sub_8268E318(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,36(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lwz r11,-3384(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267b4a0
	if (ctx.cr6.eq) goto loc_8267B4A0;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8267b4a4
	goto loc_8267B4A4;
loc_8267B4A0:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_8267B4A4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-9356
	ctx.r11.s64 = ctx.r11.s64 + -9356;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8267B4E8:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8267b4e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8267B4E8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r30.u8);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x8262e400
	ctx.lr = 0x8267B504;
	sub_8262E400(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r30,177(r31)
	PPC_STORE_U8(ctx.r31.u32 + 177, ctx.r30.u8);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// lfs f0,7856(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7856);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f13,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stfs f13,180(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// addi r4,r11,8832
	ctx.r4.s64 = ctx.r11.s64 + 8832;
	// bl 0x8268b0b8
	ctx.lr = 0x8267B534;
	sub_8268B0B8(ctx, base);
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// addi r4,r11,-816
	ctx.r4.s64 = ctx.r11.s64 + -816;
	// lwz r3,-3384(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3384);
	// bl 0x82688fa8
	ctx.lr = 0x8267B548;
	sub_82688FA8(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stfs f31,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f31,20(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r4,r11,-11348
	ctx.r4.s64 = ctx.r11.s64 + -11348;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82689fd0
	ctx.lr = 0x8267B56C;
	sub_82689FD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267b57c
	if (ctx.cr0.eq) goto loc_8267B57C;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8267b594
	goto loc_8267B594;
loc_8267B57C:
	// lwz r11,-3384(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267b590
	if (ctx.cr6.eq) goto loc_8267B590;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8267b594
	goto loc_8267B594;
loc_8267B590:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_8267B594:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stfs f0,172(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82692ef0
	ctx.lr = 0x8267B5A4;
	sub_82692EF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267b65c
	if (ctx.cr0.eq) goto loc_8267B65C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267B5C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267b65c
	if (ctx.cr0.eq) goto loc_8267B65C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267B5DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267b65c
	if (ctx.cr0.eq) goto loc_8267B65C;
	// lfs f0,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x8267b65c
	if (ctx.cr6.lt) goto loc_8267B65C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r4,r11,-10244
	ctx.r4.s64 = ctx.r11.s64 + -10244;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82689fd0
	ctx.lr = 0x8267B604;
	sub_82689FD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267b620
	if (ctx.cr0.eq) goto loc_8267B620;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x8267b63c
	goto loc_8267B63C;
loc_8267B620:
	// lwz r11,-3384(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267b630
	if (ctx.cr6.eq) goto loc_8267B630;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
loc_8267B630:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
loc_8267B63C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267B654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267b660
	goto loc_8267B660;
loc_8267B65C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267B660:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267B670"))) PPC_WEAK_FUNC(sub_8267B670);
PPC_FUNC_IMPL(__imp__sub_8267B670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8267B678;
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
	// bne cr6,0x8267b694
	if (!ctx.cr6.eq) goto loc_8267B694;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8267b84c
	goto loc_8267B84C;
loc_8267B694:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a947a0
	ctx.lr = 0x8267B69C;
	sub_82A947A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,4604
	ctx.r4.s64 = ctx.r11.s64 + 4604;
	// bl 0x826e6bb0
	ctx.lr = 0x8267B6AC;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8267b6fc
	if (!ctx.cr0.eq) goto loc_8267B6FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a94798
	ctx.lr = 0x8267B6BC;
	sub_82A94798(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267b840
	if (ctx.cr0.eq) goto loc_8267B840;
	// bl 0x826e2438
	ctx.lr = 0x8267B6C8;
	sub_826E2438(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,-3384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267b6e0
	if (ctx.cr6.eq) goto loc_8267B6E0;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8267b6e8
	goto loc_8267B6E8;
loc_8267B6E0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
loc_8267B6E8:
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,16(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 16, temp.u32);
	// b 0x8267b84c
	goto loc_8267B84C;
loc_8267B6FC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4588
	ctx.r4.s64 = ctx.r11.s64 + 4588;
	// bl 0x826e6bb0
	ctx.lr = 0x8267B70C;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8267b738
	if (!ctx.cr0.eq) goto loc_8267B738;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a94798
	ctx.lr = 0x8267B71C;
	sub_82A94798(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267b840
	if (ctx.cr0.eq) goto loc_8267B840;
	// bl 0x826e2438
	ctx.lr = 0x8267B728;
	sub_826E2438(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,20(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 20, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267b84c
	goto loc_8267B84C;
loc_8267B738:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4572
	ctx.r4.s64 = ctx.r11.s64 + 4572;
	// bl 0x826e6bb0
	ctx.lr = 0x8267B748;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8267b77c
	if (!ctx.cr0.eq) goto loc_8267B77C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a94798
	ctx.lr = 0x8267B758;
	sub_82A94798(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8267b840
	if (ctx.cr0.eq) goto loc_8267B840;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-3384(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3384);
	// bl 0x82689588
	ctx.lr = 0x8267B76C;
	sub_82689588(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// b 0x8267b84c
	goto loc_8267B84C;
loc_8267B77C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4548
	ctx.r4.s64 = ctx.r11.s64 + 4548;
	// bl 0x826e6bb0
	ctx.lr = 0x8267B78C;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8267b7dc
	if (!ctx.cr0.eq) goto loc_8267B7DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a94798
	ctx.lr = 0x8267B79C;
	sub_82A94798(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267b840
	if (ctx.cr0.eq) goto loc_8267B840;
	// bl 0x826e2438
	ctx.lr = 0x8267B7A8;
	sub_826E2438(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,-3384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267b7c0
	if (ctx.cr6.eq) goto loc_8267B7C0;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8267b7c8
	goto loc_8267B7C8;
loc_8267B7C0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
loc_8267B7C8:
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,180(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 180, temp.u32);
	// b 0x8267b84c
	goto loc_8267B84C;
loc_8267B7DC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4252
	ctx.r4.s64 = ctx.r11.s64 + 4252;
	// bl 0x826e6bb0
	ctx.lr = 0x8267B7EC;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8267b840
	if (!ctx.cr0.eq) goto loc_8267B840;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a94798
	ctx.lr = 0x8267B7FC;
	sub_82A94798(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267b840
	if (ctx.cr0.eq) goto loc_8267B840;
	// bl 0x826e2438
	ctx.lr = 0x8267B808;
	sub_826E2438(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,-3384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267b820
	if (ctx.cr6.eq) goto loc_8267B820;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8267b828
	goto loc_8267B828;
loc_8267B820:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
loc_8267B828:
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x8267b228
	ctx.lr = 0x8267B838;
	sub_8267B228(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267b84c
	goto loc_8267B84C;
loc_8267B840:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82526588
	ctx.lr = 0x8267B84C;
	sub_82526588(ctx, base);
loc_8267B84C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267B858"))) PPC_WEAK_FUNC(sub_8267B858);
PPC_FUNC_IMPL(__imp__sub_8267B858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8267B860;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-9356
	ctx.r11.s64 = ctx.r11.s64 + -9356;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stb r10,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r10.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,20(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8267B8B0:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8267b8b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8267B8B0;
	// addi r29,r31,68
	ctx.r29.s64 = ctx.r31.s64 + 68;
	// stb r30,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8262e400
	ctx.lr = 0x8267B8D0;
	sub_8262E400(ctx, base);
	// addi r4,r31,160
	ctx.r4.s64 = ctx.r31.s64 + 160;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r30.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bl 0x826947e0
	ctx.lr = 0x8267B8E8;
	sub_826947E0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r30,177(r31)
	PPC_STORE_U8(ctx.r31.u32 + 177, ctx.r30.u8);
	// stb r30,178(r31)
	PPC_STORE_U8(ctx.r31.u32 + 178, ctx.r30.u8);
	// stb r30,179(r31)
	PPC_STORE_U8(ctx.r31.u32 + 179, ctx.r30.u8);
	// lfs f0,5424(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5424);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267B908"))) PPC_WEAK_FUNC(sub_8267B908);
PPC_FUNC_IMPL(__imp__sub_8267B908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8267B910;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8267ba94
	if (ctx.cr6.eq) goto loc_8267BA94;
	// addi r29,r31,72
	ctx.r29.s64 = ctx.r31.s64 + 72;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8267b140
	ctx.lr = 0x8267B958;
	sub_8267B140(ctx, base);
	// addi r30,r31,68
	ctx.r30.s64 = ctx.r31.s64 + 68;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r10,r11,-9356
	ctx.r10.s64 = ctx.r11.s64 + -9356;
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stb r28,88(r30)
	PPC_STORE_U8(ctx.r30.u32 + 88, ctx.r28.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lfs f0,48(r11)
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
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8267B9B8:
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x8267b9b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8267B9B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r28,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r28.u8);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8267afb0
	ctx.lr = 0x8267B9D4;
	sub_8267AFB0(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267B9F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bne 0x8267ba44
	if (!ctx.cr0.eq) goto loc_8267BA44;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267ba14
	if (ctx.cr0.eq) goto loc_8267BA14;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x826d7ad0
	ctx.lr = 0x8267BA14;
	sub_826D7AD0(ctx, base);
loc_8267BA14:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r31,160
	ctx.r4.s64 = ctx.r31.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stb r28,88(r30)
	PPC_STORE_U8(ctx.r30.u32 + 88, ctx.r28.u8);
	// bl 0x826947e0
	ctx.lr = 0x8267BA40;
	sub_826947E0(ctx, base);
	// b 0x8267baec
	goto loc_8267BAEC;
loc_8267BA44:
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267baf4
	if (ctx.cr0.eq) goto loc_8267BAF4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x826d7ad0
	ctx.lr = 0x8267BA5C;
	sub_826D7AD0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f1,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x826d89f8
	ctx.lr = 0x8267BA6C;
	sub_826D89F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8267ba14
	if (!ctx.cr0.eq) goto loc_8267BA14;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x826d87d0
	ctx.lr = 0x8267BA8C;
	sub_826D87D0(ctx, base);
	// stb r28,178(r31)
	PPC_STORE_U8(ctx.r31.u32 + 178, ctx.r28.u8);
	// b 0x8267baf4
	goto loc_8267BAF4;
loc_8267BA94:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r10,-9356
	ctx.r10.s64 = ctx.r10.s64 + -9356;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
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
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,220(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8267BAD0:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8267bad0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8267BAD0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// stb r28,296(r1)
	PPC_STORE_U8(ctx.r1.u32 + 296, ctx.r28.u8);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x8262e400
	ctx.lr = 0x8267BAEC;
	sub_8262E400(ctx, base);
loc_8267BAEC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,178(r31)
	PPC_STORE_U8(ctx.r31.u32 + 178, ctx.r11.u8);
loc_8267BAF4:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267BB00"))) PPC_WEAK_FUNC(sub_8267BB00);
PPC_FUNC_IMPL(__imp__sub_8267BB00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8267BB08;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8267bdd8
	if (ctx.cr0.eq) goto loc_8267BDD8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stb r30,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r30.u8);
	// addi r11,r11,-9356
	ctx.r11.s64 = ctx.r11.s64 + -9356;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8267BB58:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8267bb58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8267BB58;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r30,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r30.u8);
	// addi r4,r8,48
	ctx.r4.s64 = ctx.r8.s64 + 48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267BB84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8267bbc8
	if (!ctx.cr0.eq) goto loc_8267BBC8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// addi r4,r31,160
	ctx.r4.s64 = ctx.r31.s64 + 160;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stb r30,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r30.u8);
	// stw r30,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r30.u32);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// b 0x8267bdd4
	goto loc_8267BDD4;
loc_8267BBC8:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,26744
	ctx.r4.s64 = ctx.r11.s64 + 26744;
	// bl 0x826947c8
	ctx.lr = 0x8267BBD8;
	sub_826947C8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r5,r10,48
	ctx.r5.s64 = ctx.r10.s64 + 48;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267BC00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8267bc64
	if (!ctx.cr0.eq) goto loc_8267BC64;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r31,160
	ctx.r4.s64 = ctx.r31.s64 + 160;
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stb r30,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r30.u8);
	// beq cr6,0x8267bc48
	if (ctx.cr6.eq) goto loc_8267BC48;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// b 0x8267bc54
	goto loc_8267BC54;
loc_8267BC48:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r30.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
loc_8267BC54:
	// bl 0x826947e0
	ctx.lr = 0x8267BC58;
	sub_826947E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,179(r31)
	PPC_STORE_U8(ctx.r31.u32 + 179, ctx.r11.u8);
	// b 0x8267bdd8
	goto loc_8267BDD8;
loc_8267BC64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8267b0e8
	ctx.lr = 0x8267BC6C;
	sub_8267B0E8(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lfs f13,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5160);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8267bc98
	if (ctx.cr6.lt) goto loc_8267BC98;
	// lbz r11,177(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 177);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8267bc98
	if (!ctx.cr0.eq) goto loc_8267BC98;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,-16480(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16480);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8267bcd0
	goto loc_8267BCD0;
loc_8267BC98:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f11,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f12,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
loc_8267BCD0:
	// lbz r10,179(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 179);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8267bce8
	if (!ctx.cr6.eq) goto loc_8267BCE8;
	// stb r11,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r11.u8);
	// stb r30,179(r31)
	PPC_STORE_U8(ctx.r31.u32 + 179, ctx.r30.u8);
loc_8267BCE8:
	// lbz r10,177(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 177);
	// lfs f12,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8267bd24
	if (!ctx.cr6.eq) goto loc_8267BD24;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lfs f0,4436(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4436);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8267bd14
	if (!ctx.cr6.gt) goto loc_8267BD14;
	// stb r30,177(r31)
	PPC_STORE_U8(ctx.r31.u32 + 177, ctx.r30.u8);
	// b 0x8267bd5c
	goto loc_8267BD5C;
loc_8267BD14:
	// clrlwi. r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8267bd5c
	if (!ctx.cr0.eq) goto loc_8267BD5C;
	// lfs f0,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8267bd54
	goto loc_8267BD54;
loc_8267BD24:
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lfs f0,4432(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4432);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8267bd40
	if (!ctx.cr6.lt) goto loc_8267BD40;
	// stb r11,177(r31)
	PPC_STORE_U8(ctx.r31.u32 + 177, ctx.r11.u8);
	// b 0x8267bd5c
	goto loc_8267BD5C;
loc_8267BD40:
	// clrlwi. r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8267bd5c
	if (!ctx.cr0.eq) goto loc_8267BD5C;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lfs f0,4440(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4440);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
loc_8267BD54:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8267bd60
	if (!ctx.cr6.gt) goto loc_8267BD60;
loc_8267BD5C:
	// stb r11,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r11.u8);
loc_8267BD60:
	// lbz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 176);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8267bdd8
	if (!ctx.cr6.eq) goto loc_8267BDD8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r4,r31,160
	ctx.r4.s64 = ctx.r31.s64 + 160;
	// lfs f0,72(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f0,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f0,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// beq cr6,0x8267bdc4
	if (ctx.cr6.eq) goto loc_8267BDC4;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// b 0x8267bdd0
	goto loc_8267BDD0;
loc_8267BDC4:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r30.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
loc_8267BDD0:
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
loc_8267BDD4:
	// bl 0x826947e0
	ctx.lr = 0x8267BDD8;
	sub_826947E0(ctx, base);
loc_8267BDD8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267BDE0"))) PPC_WEAK_FUNC(sub_8267BDE0);
PPC_FUNC_IMPL(__imp__sub_8267BDE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8251c658
	ctx.lr = 0x8267BDFC;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267be10
	if (ctx.cr0.eq) goto loc_8267BE10;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8267b310
	ctx.lr = 0x8267BE0C;
	sub_8267B310(ctx, base);
	// b 0x8267be14
	goto loc_8267BE14;
loc_8267BE10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267BE14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267BE28"))) PPC_WEAK_FUNC(sub_8267BE28);
PPC_FUNC_IMPL(__imp__sub_8267BE28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8267BE30;
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
	// bl 0x82692e58
	ctx.lr = 0x8267BE44;
	sub_82692E58(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,5160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5160);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x8267bf68
	if (!ctx.cr6.lt) goto loc_8267BF68;
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r28,1
	ctx.r28.s64 = 1;
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8267be74
	if (ctx.cr6.gt) goto loc_8267BE74;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8267BE74:
	// bl 0x8268f898
	ctx.lr = 0x8267BE78;
	sub_8268F898(ctx, base);
	// clrlwi r29,r28,24
	ctx.r29.u64 = ctx.r28.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// beq cr6,0x8267beac
	if (ctx.cr6.eq) goto loc_8267BEAC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8267b2a0
	ctx.lr = 0x8267BE98;
	sub_8267B2A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8267bf68
	if (!ctx.cr6.eq) goto loc_8267BF68;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// bne cr6,0x8267bec0
	if (!ctx.cr6.eq) goto loc_8267BEC0;
loc_8267BEAC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8268ee98
	ctx.lr = 0x8267BEC0;
	sub_8268EE98(ctx, base);
loc_8267BEC0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8267bb00
	ctx.lr = 0x8267BECC;
	sub_8267BB00(ctx, base);
	// lbz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 176);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8267bf30
	if (!ctx.cr6.eq) goto loc_8267BF30;
	// lbz r11,177(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 177);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8267befc
	if (!ctx.cr6.eq) goto loc_8267BEFC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267BEF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8267bf30
	goto loc_8267BF30;
loc_8267BEFC:
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r31,160
	ctx.r4.s64 = ctx.r31.s64 + 160;
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stb r11,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r11.u8);
	// bl 0x826947e0
	ctx.lr = 0x8267BF28;
	sub_826947E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,178(r31)
	PPC_STORE_U8(ctx.r31.u32 + 178, ctx.r11.u8);
loc_8267BF30:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8268f098
	ctx.lr = 0x8267BF44;
	sub_8268F098(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8268ee10
	ctx.lr = 0x8267BF58;
	sub_8268EE10(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
loc_8267BF68:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// lbz r11,178(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 178);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267bfa8
	if (ctx.cr0.eq) goto loc_8267BFA8;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lfs f2,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f31,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f30.f64 = double(temp.f32);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267BFA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8267bfc8
	goto loc_8267BFC8;
loc_8267BFA8:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267bfc8
	if (ctx.cr0.eq) goto loc_8267BFC8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r31,72
	ctx.r5.s64 = ctx.r31.s64 + 72;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x826d87d0
	ctx.lr = 0x8267BFC8;
	sub_826D87D0(ctx, base);
loc_8267BFC8:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lfs f1,172(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267BFE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r4,r31,68
	ctx.r4.s64 = ctx.r31.s64 + 68;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267BFF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267c01c
	if (ctx.cr0.eq) goto loc_8267C01C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
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
	ctx.lr = 0x8267C01C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8267C01C:
	// lbz r11,178(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 178);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267c044
	if (ctx.cr0.eq) goto loc_8267C044;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
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
	ctx.lr = 0x8267C044;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8267C044:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267C058;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8267C078"))) PPC_WEAK_FUNC(sub_8267C078);
PPC_FUNC_IMPL(__imp__sub_8267C078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8267C090;
	sub_82692DB0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r8,-32150
	ctx.r8.s64 = -2106982400;
	// addi r10,r11,4640
	ctx.r10.s64 = ctx.r11.s64 + 4640;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r7,r8,21040
	ctx.r7.s64 = ctx.r8.s64 + 21040;
	// addi r6,r11,21328
	ctx.r6.s64 = ctx.r11.s64 + 21328;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r8,r11,4444
	ctx.r8.s64 = ctx.r11.s64 + 4444;
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,20(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
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
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stb r11,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C130"))) PPC_WEAK_FUNC(sub_8267C130);
PPC_FUNC_IMPL(__imp__sub_8267C130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-13556
	ctx.r3.s64 = ctx.r11.s64 + -13556;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C140"))) PPC_WEAK_FUNC(sub_8267C140);
PPC_FUNC_IMPL(__imp__sub_8267C140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,4640
	ctx.r11.s64 = ctx.r11.s64 + 4640;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x8267c180
	if (ctx.cr0.eq) goto loc_8267C180;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267c180
	if (ctx.cr0.eq) goto loc_8267C180;
	// bl 0x82699258
	ctx.lr = 0x8267C180;
	sub_82699258(ctx, base);
loc_8267C180:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lis r30,-32071
	ctx.r30.s64 = -2101805056;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267c19c
	if (ctx.cr0.eq) goto loc_8267C19C;
	// lwz r11,-11212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267C19C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8267C19C:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267c1c4
	if (ctx.cr0.eq) goto loc_8267C1C4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267c1c4
	if (ctx.cr6.eq) goto loc_8267C1C4;
	// lwz r11,-11212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267C1BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_8267C1C4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-16924
	ctx.r11.s64 = ctx.r11.s64 + -16924;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82692dd0
	ctx.lr = 0x8267C1D8;
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

__attribute__((alias("__imp__sub_8267C1F0"))) PPC_WEAK_FUNC(sub_8267C1F0);
PPC_FUNC_IMPL(__imp__sub_8267C1F0) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lfs f0,5424(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5424);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stb r30,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r30.u8);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x8267c240
	if (ctx.cr0.eq) goto loc_8267C240;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267c240
	if (ctx.cr0.eq) goto loc_8267C240;
	// bl 0x82699258
	ctx.lr = 0x8267C23C;
	sub_82699258(ctx, base);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_8267C240:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C258"))) PPC_WEAK_FUNC(sub_8267C258);
PPC_FUNC_IMPL(__imp__sub_8267C258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8267c294
	if (!ctx.cr0.eq) goto loc_8267C294;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267c294
	if (ctx.cr0.eq) goto loc_8267C294;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x8267c294
	if (ctx.cr0.eq) goto loc_8267C294;
	// bl 0x82699258
	ctx.lr = 0x8267C294;
	sub_82699258(ctx, base);
loc_8267C294:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C2B0"))) PPC_WEAK_FUNC(sub_8267C2B0);
PPC_FUNC_IMPL(__imp__sub_8267C2B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8267c2c4
	if (!ctx.cr6.eq) goto loc_8267C2C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8267C2C4:
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C2D8"))) PPC_WEAK_FUNC(sub_8267C2D8);
PPC_FUNC_IMPL(__imp__sub_8267C2D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8267c2ec
	if (!ctx.cr6.eq) goto loc_8267C2EC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267C2EC:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8267c2fc
	if (!ctx.cr6.eq) goto loc_8267C2FC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267C2FC:
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8267c30c
	if (!ctx.cr6.eq) goto loc_8267C30C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267C30C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C318"))) PPC_WEAK_FUNC(sub_8267C318);
PPC_FUNC_IMPL(__imp__sub_8267C318) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C330"))) PPC_WEAK_FUNC(sub_8267C330);
PPC_FUNC_IMPL(__imp__sub_8267C330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8267c344
	if (ctx.cr6.lt) goto loc_8267C344;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8267C344:
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mulli r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 * 12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C370"))) PPC_WEAK_FUNC(sub_8267C370);
PPC_FUNC_IMPL(__imp__sub_8267C370) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C380"))) PPC_WEAK_FUNC(sub_8267C380);
PPC_FUNC_IMPL(__imp__sub_8267C380) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8267c39c
	if (!ctx.cr6.eq) goto loc_8267C39C;
loc_8267C394:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8267C39C:
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8267c394
	if (!ctx.cr6.lt) goto loc_8267C394;
	// lwz r9,68(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r4,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u32);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C3D0"))) PPC_WEAK_FUNC(sub_8267C3D0);
PPC_FUNC_IMPL(__imp__sub_8267C3D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8267c3e4
	if (ctx.cr6.lt) goto loc_8267C3E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8267C3E4:
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C400"))) PPC_WEAK_FUNC(sub_8267C400);
PPC_FUNC_IMPL(__imp__sub_8267C400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8267C408;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 108);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267c42c
	if (ctx.cr0.eq) goto loc_8267C42C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r28,r11,48
	ctx.r28.s64 = ctx.r11.s64 + 48;
	// b 0x8267c434
	goto loc_8267C434;
loc_8267C42C:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
loc_8267C434:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8267c480
	if (!ctx.cr6.gt) goto loc_8267C480;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8267C448:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8267C464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8267c4d8
	if (!ctx.cr0.eq) goto loc_8267C4D8;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8267c448
	if (ctx.cr6.lt) goto loc_8267C448;
loc_8267C480:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8267c4cc
	if (!ctx.cr6.gt) goto loc_8267C4CC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8267C494:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8267C4B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8267c4d8
	if (!ctx.cr0.eq) goto loc_8267C4D8;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8267c494
	if (ctx.cr6.lt) goto loc_8267C494;
loc_8267C4CC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8267C4D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_8267C4D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8267c4d0
	goto loc_8267C4D0;
}

__attribute__((alias("__imp__sub_8267C4E0"))) PPC_WEAK_FUNC(sub_8267C4E0);
PPC_FUNC_IMPL(__imp__sub_8267C4E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// stw r4,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r4.u32);
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r5,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r5.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x8267c520
	if (ctx.cr0.eq) goto loc_8267C520;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82699258
	ctx.lr = 0x8267C51C;
	sub_82699258(ctx, base);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_8267C520:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C538"))) PPC_WEAK_FUNC(sub_8267C538);
PPC_FUNC_IMPL(__imp__sub_8267C538) {
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
	// ble cr6,0x8267c598
	if (!ctx.cr6.gt) goto loc_8267C598;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r4,r11,-11348
	ctx.r4.s64 = ctx.r11.s64 + -11348;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82689fd0
	ctx.lr = 0x8267C578;
	sub_82689FD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267c594
	if (ctx.cr0.eq) goto loc_8267C594;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x8267c594
	if (!ctx.cr6.gt) goto loc_8267C594;
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// b 0x8267c598
	goto loc_8267C598;
loc_8267C594:
	// stfs f31,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
loc_8267C598:
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

__attribute__((alias("__imp__sub_8267C5B0"))) PPC_WEAK_FUNC(sub_8267C5B0);
PPC_FUNC_IMPL(__imp__sub_8267C5B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x8251c658
	ctx.lr = 0x8267C5CC;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267c5e0
	if (ctx.cr0.eq) goto loc_8267C5E0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8267c078
	ctx.lr = 0x8267C5DC;
	sub_8267C078(ctx, base);
	// b 0x8267c5e4
	goto loc_8267C5E4;
loc_8267C5E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267C5E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C5F8"))) PPC_WEAK_FUNC(sub_8267C5F8);
PPC_FUNC_IMPL(__imp__sub_8267C5F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8267c140
	ctx.lr = 0x8267C618;
	sub_8267C140(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267c634
	if (ctx.cr0.eq) goto loc_8267C634;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-11212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267C634;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8267C634:
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

__attribute__((alias("__imp__sub_8267C650"))) PPC_WEAK_FUNC(sub_8267C650);
PPC_FUNC_IMPL(__imp__sub_8267C650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8267C658;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82692e58
	ctx.lr = 0x8267C670;
	sub_82692E58(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r28,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r28.u8);
	// bne cr6,0x8267c6a8
	if (!ctx.cr6.eq) goto loc_8267C6A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267C698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8267c6a8
	if (!ctx.cr0.eq) goto loc_8267C6A8;
loc_8267C6A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8267c8e8
	goto loc_8267C8E8;
loc_8267C6A8:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267c8e4
	if (ctx.cr6.eq) goto loc_8267C8E4;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// bl 0x8268f898
	ctx.lr = 0x8267C6C0;
	sub_8268F898(ctx, base);
	// lbz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8267c718
	if (!ctx.cr0.eq) goto loc_8267C718;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,5160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5160);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lfs f0,3548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8267c718
	if (!ctx.cr6.gt) goto loc_8267C718;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267C700;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8267c714
	if (!ctx.cr0.eq) goto loc_8267C714;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// b 0x8267c718
	goto loc_8267C718;
loc_8267C714:
	// stfs f31,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
loc_8267C718:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267c8e0
	if (ctx.cr6.eq) goto loc_8267C8E0;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,-3384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3384);
	// lfs f30,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267c750
	if (ctx.cr6.eq) goto loc_8267C750;
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8267c754
	goto loc_8267C754;
loc_8267C750:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64;
loc_8267C754:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267c764
	if (ctx.cr6.eq) goto loc_8267C764;
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8267c768
	goto loc_8267C768;
loc_8267C764:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_8267C768:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,28580(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28580);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267C784;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r10,r10,-9356
	ctx.r10.s64 = ctx.r10.s64 + -9356;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8267C7BC:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8267c7bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8267C7BC;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r29,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r29.u8);
	// addi r10,r10,4444
	ctx.r10.s64 = ctx.r10.s64 + 4444;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826947e0
	ctx.lr = 0x8267C7F0;
	sub_826947E0(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lfs f1,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267C808;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267C820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267c844
	if (ctx.cr0.eq) goto loc_8267C844;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
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
	ctx.lr = 0x8267C844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8267C844:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267C858;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267c864
	if (ctx.cr0.eq) goto loc_8267C864;
	// stb r28,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r28.u8);
loc_8267C864:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267C880;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267C894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8267c6a0
	if (ctx.cr6.eq) goto loc_8267C6A0;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267c8e4
	if (ctx.cr0.eq) goto loc_8267C8E4;
	// lbz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 108);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267c8c8
	if (ctx.cr0.eq) goto loc_8267C8C8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r5,r4,48
	ctx.r5.s64 = ctx.r4.s64 + 48;
	// b 0x8267c8d8
	goto loc_8267C8D8;
loc_8267C8C8:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lwz r4,20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
loc_8267C8D8:
	// bl 0x826d87d0
	ctx.lr = 0x8267C8DC;
	sub_826D87D0(ctx, base);
	// b 0x8267c8e4
	goto loc_8267C8E4;
loc_8267C8E0:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_8267C8E4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8267C8E8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
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

__attribute__((alias("__imp__sub_8267C900"))) PPC_WEAK_FUNC(sub_8267C900);
PPC_FUNC_IMPL(__imp__sub_8267C900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8267C908;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8267c924
	if (!ctx.cr0.eq) goto loc_8267C924;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8267c9cc
	if (!ctx.cr6.gt) goto loc_8267C9CC;
loc_8267C924:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r4,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r4.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267c954
	if (ctx.cr0.eq) goto loc_8267C954;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267c954
	if (ctx.cr6.eq) goto loc_8267C954;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// lwz r11,-11212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267C950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
loc_8267C954:
	// lwz r30,64(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x8267c968
	if (!ctx.cr0.eq) goto loc_8267C968;
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// b 0x8267c9c8
	goto loc_8267C9C8;
loc_8267C968:
	// lis r11,5461
	ctx.r11.s64 = 357892096;
	// mulli r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 * 12;
	// ori r11,r11,21845
	ctx.r11.u64 = ctx.r11.u64 | 21845;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8267c980
	if (!ctx.cr6.gt) goto loc_8267C980;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8267C980:
	// bl 0x8251c658
	ctx.lr = 0x8267C984;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267c9c0
	if (ctx.cr0.eq) goto loc_8267C9C0;
	// addic. r10,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r10.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x8267c9b8
	if (ctx.cr0.lt) goto loc_8267C9B8;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lfs f0,3544(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
loc_8267C9A0:
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bge 0x8267c9a0
	if (!ctx.cr0.lt) goto loc_8267C9A0;
loc_8267C9B8:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8267c9c4
	goto loc_8267C9C4;
loc_8267C9C0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8267C9C4:
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_8267C9C8:
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
loc_8267C9CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267C9D8"))) PPC_WEAK_FUNC(sub_8267C9D8);
PPC_FUNC_IMPL(__imp__sub_8267C9D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8267C9E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r28,-32044
	ctx.r28.s64 = -2100035584;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5160(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 5160);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,3548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8267ccfc
	if (ctx.cr6.lt) goto loc_8267CCFC;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267cc78
	if (!ctx.cr6.eq) goto loc_8267CC78;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x826991d0
	ctx.lr = 0x8267CA24;
	sub_826991D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267cc78
	if (ctx.cr0.eq) goto loc_8267CC78;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// stb r29,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r29.u8);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-9356
	ctx.r11.s64 = ctx.r11.s64 + -9356;
	// stb r29,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r29.u8);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
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
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8267CA68:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8267ca68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8267CA68;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stb r29,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r29.u8);
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r11,r11,4444
	ctx.r11.s64 = ctx.r11.s64 + 4444;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x826947e0
	ctx.lr = 0x8267CA9C;
	sub_826947E0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267CAC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8267cbb8
	if (!ctx.cr6.eq) goto loc_8267CBB8;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267caf0
	if (ctx.cr6.eq) goto loc_8267CAF0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8267caf0
	if (!ctx.cr6.eq) goto loc_8267CAF0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x8267cbb0
	goto loc_8267CBB0;
loc_8267CAF0:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267cb90
	if (ctx.cr0.eq) goto loc_8267CB90;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267CB1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8267cb90
	if (!ctx.cr6.eq) goto loc_8267CB90;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267CB48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8267cb90
	if (!ctx.cr6.eq) goto loc_8267CB90;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8267cb80
	if (!ctx.cr6.lt) goto loc_8267CB80;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8267cb84
	if (!ctx.cr6.eq) goto loc_8267CB84;
loc_8267CB80:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8267CB84:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267cbf0
	if (!ctx.cr6.eq) goto loc_8267CBF0;
loc_8267CB90:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r5,104(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82680238
	ctx.lr = 0x8267CBAC;
	sub_82680238(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8267CBB0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8267cbf0
	if (!ctx.cr6.eq) goto loc_8267CBF0;
loc_8267CBB8:
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82699258
	ctx.lr = 0x8267CBC4;
	sub_82699258(ctx, base);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// lfs f0,5160(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 5160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// bl 0x8268f898
	ctx.lr = 0x8267CBD8;
	sub_8268F898(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8268ee10
	ctx.lr = 0x8267CBE8;
	sub_8268EE10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8267cd00
	goto loc_8267CD00;
loc_8267CBF0:
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x826314f8
	ctx.lr = 0x8267CBFC;
	sub_826314F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82696be0
	ctx.lr = 0x8267CC08;
	sub_82696BE0(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267CC20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// stw r9,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r9.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8267f920
	ctx.lr = 0x8267CC54;
	sub_8267F920(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267CC68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-16924
	ctx.r11.s64 = ctx.r11.s64 + -16924;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_8267CC78:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267cce8
	if (ctx.cr0.eq) goto loc_8267CCE8;
	// bl 0x8267fc08
	ctx.lr = 0x8267CC88;
	sub_8267FC08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8267ccfc
	if (!ctx.cr6.eq) goto loc_8267CCFC;
	// addi r30,r31,84
	ctx.r30.s64 = ctx.r31.s64 + 84;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8267f928
	ctx.lr = 0x8267CCA4;
	sub_8267F928(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8267ccb0
	if (!ctx.cr0.eq) goto loc_8267CCB0;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_8267CCB0:
	// lfs f0,5160(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 5160);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// bl 0x82699258
	ctx.lr = 0x8267CCC4;
	sub_82699258(ctx, base);
	// bl 0x8268f898
	ctx.lr = 0x8267CCC8;
	sub_8268F898(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8268ee10
	ctx.lr = 0x8267CCD8;
	sub_8268EE10(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// b 0x8267ccfc
	goto loc_8267CCFC;
loc_8267CCE8:
	// bl 0x8268f898
	ctx.lr = 0x8267CCEC;
	sub_8268F898(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8268eff0
	ctx.lr = 0x8267CCFC;
	sub_8268EFF0(ctx, base);
loc_8267CCFC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8267CD00:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267CD08"))) PPC_WEAK_FUNC(sub_8267CD08);
PPC_FUNC_IMPL(__imp__sub_8267CD08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8267CD10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r11,8832
	ctx.r4.s64 = ctx.r11.s64 + 8832;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8268b0b8
	ctx.lr = 0x8267CD2C;
	sub_8268B0B8(ctx, base);
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r4,r11,22672
	ctx.r4.s64 = ctx.r11.s64 + 22672;
	// lwz r3,-3384(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3384);
	// bl 0x82688fa8
	ctx.lr = 0x8267CD44;
	sub_82688FA8(ctx, base);
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lwz r3,-3384(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3384);
	// addi r4,r11,-816
	ctx.r4.s64 = ctx.r11.s64 + -816;
	// bl 0x82688fa8
	ctx.lr = 0x8267CD58;
	sub_82688FA8(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// addi r4,r11,-3968
	ctx.r4.s64 = ctx.r11.s64 + -3968;
	// lwz r3,-3384(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3384);
	// bl 0x82688fa8
	ctx.lr = 0x8267CD6C;
	sub_82688FA8(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// beq cr6,0x8267ce80
	if (ctx.cr6.eq) goto loc_8267CE80;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267ce80
	if (ctx.cr6.eq) goto loc_8267CE80;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r4,r11,-11348
	ctx.r4.s64 = ctx.r11.s64 + -11348;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82689fd0
	ctx.lr = 0x8267CDA4;
	sub_82689FD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267cdb4
	if (ctx.cr0.eq) goto loc_8267CDB4;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8267cdd0
	goto loc_8267CDD0;
loc_8267CDB4:
	// lwz r11,-3384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267cdc8
	if (ctx.cr6.eq) goto loc_8267CDC8;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8267cdd0
	goto loc_8267CDD0;
loc_8267CDC8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
loc_8267CDD0:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bl 0x82692ef0
	ctx.lr = 0x8267CDE8;
	sub_82692EF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267ce80
	if (ctx.cr0.eq) goto loc_8267CE80;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8267ce0c
	if (!ctx.cr6.eq) goto loc_8267CE0C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8267d7a0
	ctx.lr = 0x8267CE0C;
	sub_8267D7A0(ctx, base);
loc_8267CE0C:
	// bl 0x8268f898
	ctx.lr = 0x8267CE10;
	sub_8268F898(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,4700
	ctx.r4.s64 = ctx.r11.s64 + 4700;
	// bl 0x8268e318
	ctx.lr = 0x8267CE1C;
	sub_8268E318(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267CE40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267ce80
	if (ctx.cr0.eq) goto loc_8267CE80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267CE5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267ce80
	if (ctx.cr0.eq) goto loc_8267CE80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267CE78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267ce84
	goto loc_8267CE84;
loc_8267CE80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267CE84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267CE90"))) PPC_WEAK_FUNC(sub_8267CE90);
PPC_FUNC_IMPL(__imp__sub_8267CE90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8267CE98;
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
	// bne cr6,0x8267ceb4
	if (!ctx.cr6.eq) goto loc_8267CEB4;
loc_8267CEAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8267d07c
	goto loc_8267D07C;
loc_8267CEB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a947a0
	ctx.lr = 0x8267CEBC;
	sub_82A947A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,4784
	ctx.r4.s64 = ctx.r11.s64 + 4784;
	// bl 0x826e6bb0
	ctx.lr = 0x8267CEC8;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8267cf10
	if (!ctx.cr0.eq) goto loc_8267CF10;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r4,r11,22672
	ctx.r4.s64 = ctx.r11.s64 + 22672;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-3384(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3384);
	// bl 0x82688fa8
	ctx.lr = 0x8267CEE4;
	sub_82688FA8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8267ceac
	if (ctx.cr0.eq) goto loc_8267CEAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a94798
	ctx.lr = 0x8267CEF4;
	sub_82A94798(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82698f90
	ctx.lr = 0x8267CF00;
	sub_82698F90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r11.u32);
	// b 0x8267d07c
	goto loc_8267D07C;
loc_8267CF10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a947a0
	ctx.lr = 0x8267CF18;
	sub_82A947A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,4776
	ctx.r4.s64 = ctx.r11.s64 + 4776;
	// bl 0x826e6bb0
	ctx.lr = 0x8267CF24;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8267cf90
	if (!ctx.cr0.eq) goto loc_8267CF90;
	// bl 0x82a94798
	ctx.lr = 0x8267CF34;
	sub_82A94798(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8267d070
	if (ctx.cr0.eq) goto loc_8267D070;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267ceac
	if (ctx.cr0.eq) goto loc_8267CEAC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82687ef0
	ctx.lr = 0x8267CF50;
	sub_82687EF0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8267ceac
	if (ctx.cr0.eq) goto loc_8267CEAC;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,27024
	ctx.r5.s64 = ctx.r11.s64 + 27024;
	// bl 0x82698e68
	ctx.lr = 0x8267CF6C;
	sub_82698E68(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267CF88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8267CF88:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267d07c
	goto loc_8267D07C;
loc_8267CF90:
	// bl 0x82a947a0
	ctx.lr = 0x8267CF94;
	sub_82A947A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,4756
	ctx.r4.s64 = ctx.r11.s64 + 4756;
	// bl 0x826e6bb0
	ctx.lr = 0x8267CFA0;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8267cfd0
	if (!ctx.cr0.eq) goto loc_8267CFD0;
	// bl 0x82a94798
	ctx.lr = 0x8267CFB0;
	sub_82A94798(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267d070
	if (ctx.cr0.eq) goto loc_8267D070;
	// bl 0x826e2440
	ctx.lr = 0x8267CFBC;
	sub_826E2440(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8267c900
	ctx.lr = 0x8267CFCC;
	sub_8267C900(ctx, base);
	// b 0x8267cf88
	goto loc_8267CF88;
loc_8267CFD0:
	// bl 0x82a947a0
	ctx.lr = 0x8267CFD4;
	sub_82A947A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,4732
	ctx.r4.s64 = ctx.r11.s64 + 4732;
	// bl 0x826e6bb0
	ctx.lr = 0x8267CFE0;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8267d010
	if (!ctx.cr0.eq) goto loc_8267D010;
	// bl 0x82a94798
	ctx.lr = 0x8267CFF0;
	sub_82A94798(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267d070
	if (ctx.cr0.eq) goto loc_8267D070;
	// bl 0x826e2440
	ctx.lr = 0x8267CFFC;
	sub_826E2440(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8267d7a0
	ctx.lr = 0x8267D00C;
	sub_8267D7A0(ctx, base);
	// b 0x8267cf88
	goto loc_8267CF88;
loc_8267D010:
	// bl 0x82a947a0
	ctx.lr = 0x8267D014;
	sub_82A947A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,4252
	ctx.r4.s64 = ctx.r11.s64 + 4252;
	// bl 0x826e6bb0
	ctx.lr = 0x8267D020;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8267d070
	if (!ctx.cr0.eq) goto loc_8267D070;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a94798
	ctx.lr = 0x8267D030;
	sub_82A94798(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267d070
	if (ctx.cr0.eq) goto loc_8267D070;
	// bl 0x826e2438
	ctx.lr = 0x8267D03C;
	sub_826E2438(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,-3384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267d054
	if (ctx.cr6.eq) goto loc_8267D054;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8267d05c
	goto loc_8267D05C;
loc_8267D054:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
loc_8267D05C:
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x8267c538
	ctx.lr = 0x8267D06C;
	sub_8267C538(ctx, base);
	// b 0x8267cf88
	goto loc_8267CF88;
loc_8267D070:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82526588
	ctx.lr = 0x8267D07C;
	sub_82526588(ctx, base);
loc_8267D07C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267D088"))) PPC_WEAK_FUNC(sub_8267D088);
PPC_FUNC_IMPL(__imp__sub_8267D088) {
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
	ctx.lr = 0x8267D0A0;
	sub_82692DB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,13952(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13952);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// addi r10,r11,4816
	ctx.r10.s64 = ctx.r11.s64 + 4816;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r9,r11,4444
	ctx.r9.s64 = ctx.r11.s64 + 4444;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
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
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267D140"))) PPC_WEAK_FUNC(sub_8267D140);
PPC_FUNC_IMPL(__imp__sub_8267D140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-13280
	ctx.r3.s64 = ctx.r11.s64 + -13280;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267D150"))) PPC_WEAK_FUNC(sub_8267D150);
PPC_FUNC_IMPL(__imp__sub_8267D150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8267D158;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x8267d190
	if (ctx.cr0.eq) goto loc_8267D190;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267d190
	if (ctx.cr0.eq) goto loc_8267D190;
	// bl 0x82699258
	ctx.lr = 0x8267D18C;
	sub_82699258(ctx, base);
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
loc_8267D190:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lis r30,-32071
	ctx.r30.s64 = -2101805056;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267d1b8
	if (ctx.cr0.eq) goto loc_8267D1B8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267d1b8
	if (ctx.cr6.eq) goto loc_8267D1B8;
	// lwz r11,-11212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267D1B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
loc_8267D1B8:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267d1d0
	if (ctx.cr0.eq) goto loc_8267D1D0;
	// lwz r11,-11212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267D1D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8267D1D0:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267d1e8
	if (ctx.cr0.eq) goto loc_8267D1E8;
	// lwz r11,-11212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267D1E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8267D1E8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-16924
	ctx.r11.s64 = ctx.r11.s64 + -16924;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// bl 0x82692dd0
	ctx.lr = 0x8267D1FC;
	sub_82692DD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267D208"))) PPC_WEAK_FUNC(sub_8267D208);
PPC_FUNC_IMPL(__imp__sub_8267D208) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stb r30,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r30.u8);
	// lfs f0,5424(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5424);
	ctx.f0.f64 = double(temp.f32);
	// stb r30,137(r31)
	PPC_STORE_U8(ctx.r31.u32 + 137, ctx.r30.u8);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lfs f13,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,92(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lfs f13,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,96(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lfs f13,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,100(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stb r30,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r30.u8);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x8267d284
	if (ctx.cr0.eq) goto loc_8267D284;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267d284
	if (ctx.cr0.eq) goto loc_8267D284;
	// bl 0x82699258
	ctx.lr = 0x8267D280;
	sub_82699258(ctx, base);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
loc_8267D284:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267D2A0"))) PPC_WEAK_FUNC(sub_8267D2A0);
PPC_FUNC_IMPL(__imp__sub_8267D2A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267d2b4
	if (!ctx.cr6.eq) goto loc_8267D2B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8267D2B4:
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267d2d0
	if (!ctx.cr6.eq) goto loc_8267D2D0;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8267D2D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267D2D8"))) PPC_WEAK_FUNC(sub_8267D2D8);
PPC_FUNC_IMPL(__imp__sub_8267D2D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8267d2ec
	if (!ctx.cr6.eq) goto loc_8267D2EC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267D2EC:
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8267d2fc
	if (!ctx.cr6.eq) goto loc_8267D2FC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267D2FC:
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8267d30c
	if (!ctx.cr6.eq) goto loc_8267D30C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267D30C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267D318"))) PPC_WEAK_FUNC(sub_8267D318);
PPC_FUNC_IMPL(__imp__sub_8267D318) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8267d32c
	if (!ctx.cr6.eq) goto loc_8267D32C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267D32C:
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8267d33c
	if (!ctx.cr6.eq) goto loc_8267D33C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267D33C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267D348"))) PPC_WEAK_FUNC(sub_8267D348);
PPC_FUNC_IMPL(__imp__sub_8267D348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,60(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8267d360
	if (ctx.cr6.lt) goto loc_8267D360;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8267D360:
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mulli r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 * 12;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lfsx f0,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267D3A0"))) PPC_WEAK_FUNC(sub_8267D3A0);
PPC_FUNC_IMPL(__imp__sub_8267D3A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r4.u32);
	// stw r5,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r5.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// beq cr6,0x8267d3d4
	if (ctx.cr6.eq) goto loc_8267D3D4;
	// stb r30,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r30.u8);
loc_8267D3D4:
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x8267d3ec
	if (ctx.cr0.eq) goto loc_8267D3EC;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82699258
	ctx.lr = 0x8267D3E8;
	sub_82699258(ctx, base);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
loc_8267D3EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267D408"))) PPC_WEAK_FUNC(sub_8267D408);
PPC_FUNC_IMPL(__imp__sub_8267D408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x8267d438
	if (ctx.cr0.eq) goto loc_8267D438;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82699258
	ctx.lr = 0x8267D438;
	sub_82699258(ctx, base);
loc_8267D438:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8267d454
	if (!ctx.cr0.eq) goto loc_8267D454;
	// bl 0x8268f898
	ctx.lr = 0x8267D444;
	sub_8268F898(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8268ee10
	ctx.lr = 0x8267D454;
	sub_8268EE10(ctx, base);
loc_8267D454:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267D478"))) PPC_WEAK_FUNC(sub_8267D478);
PPC_FUNC_IMPL(__imp__sub_8267D478) {
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
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stfs f1,16(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267D490"))) PPC_WEAK_FUNC(sub_8267D490);
PPC_FUNC_IMPL(__imp__sub_8267D490) {
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
	// ble cr6,0x8267d4f0
	if (!ctx.cr6.gt) goto loc_8267D4F0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r4,r11,-11348
	ctx.r4.s64 = ctx.r11.s64 + -11348;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82689fd0
	ctx.lr = 0x8267D4D0;
	sub_82689FD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267d4ec
	if (ctx.cr0.eq) goto loc_8267D4EC;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x8267d4ec
	if (!ctx.cr6.gt) goto loc_8267D4EC;
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// b 0x8267d4f0
	goto loc_8267D4F0;
loc_8267D4EC:
	// stfs f31,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
loc_8267D4F0:
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

__attribute__((alias("__imp__sub_8267D508"))) PPC_WEAK_FUNC(sub_8267D508);
PPC_FUNC_IMPL(__imp__sub_8267D508) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,96(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8267d554
	if (!ctx.cr6.eq) goto loc_8267D554;
	// lwz r8,96(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 96);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8267d554
	if (ctx.cr0.eq) goto loc_8267D554;
	// lwz r9,120(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8267d554
	if (ctx.cr0.eq) goto loc_8267D554;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
loc_8267D538:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8267d55c
	if (ctx.cr6.eq) goto loc_8267D55C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8267d538
	if (ctx.cr6.lt) goto loc_8267D538;
loc_8267D554:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8267D55C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267D568"))) PPC_WEAK_FUNC(sub_8267D568);
PPC_FUNC_IMPL(__imp__sub_8267D568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,11192
	ctx.r3.s64 = ctx.r11.s64 + 11192;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267D578"))) PPC_WEAK_FUNC(sub_8267D578);
PPC_FUNC_IMPL(__imp__sub_8267D578) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267D588"))) PPC_WEAK_FUNC(sub_8267D588);
PPC_FUNC_IMPL(__imp__sub_8267D588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,156
	ctx.r3.s64 = 156;
	// bl 0x8251c658
	ctx.lr = 0x8267D5A4;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267d5b8
	if (ctx.cr0.eq) goto loc_8267D5B8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8267d088
	ctx.lr = 0x8267D5B4;
	sub_8267D088(ctx, base);
	// b 0x8267d5bc
	goto loc_8267D5BC;
loc_8267D5B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267D5BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267D5D0"))) PPC_WEAK_FUNC(sub_8267D5D0);
PPC_FUNC_IMPL(__imp__sub_8267D5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8267d150
	ctx.lr = 0x8267D5F0;
	sub_8267D150(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267d60c
	if (ctx.cr0.eq) goto loc_8267D60C;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-11212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267D60C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8267D60C:
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

__attribute__((alias("__imp__sub_8267D628"))) PPC_WEAK_FUNC(sub_8267D628);
PPC_FUNC_IMPL(__imp__sub_8267D628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8267d668
	if (!ctx.cr0.eq) goto loc_8267D668;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267d668
	if (ctx.cr6.eq) goto loc_8267D668;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267d668
	if (ctx.cr6.eq) goto loc_8267D668;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8267d408
	ctx.lr = 0x8267D668;
	sub_8267D408(ctx, base);
loc_8267D668:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267D688"))) PPC_WEAK_FUNC(sub_8267D688);
PPC_FUNC_IMPL(__imp__sub_8267D688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8267D690;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8267d6ac
	if (!ctx.cr0.eq) goto loc_8267D6AC;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8267d794
	if (!ctx.cr6.gt) goto loc_8267D794;
loc_8267D6AC:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r4,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r4.u32);
	// lis r30,-32071
	ctx.r30.s64 = -2101805056;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267d6dc
	if (ctx.cr0.eq) goto loc_8267D6DC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267d6dc
	if (ctx.cr6.eq) goto loc_8267D6DC;
	// lwz r11,-11212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267D6D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
loc_8267D6DC:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267d6f4
	if (ctx.cr0.eq) goto loc_8267D6F4;
	// lwz r11,-11212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267D6F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8267D6F4:
	// lwz r30,64(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x8267d70c
	if (!ctx.cr0.eq) goto loc_8267D70C;
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// stw r28,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r28.u32);
	// b 0x8267d790
	goto loc_8267D790;
loc_8267D70C:
	// lis r11,5461
	ctx.r11.s64 = 357892096;
	// li r29,-1
	ctx.r29.s64 = -1;
	// ori r11,r11,21845
	ctx.r11.u64 = ctx.r11.u64 | 21845;
	// mulli r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 * 12;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8267d728
	if (!ctx.cr6.gt) goto loc_8267D728;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8267D728:
	// bl 0x8251c658
	ctx.lr = 0x8267D72C;
	sub_8251C658(ctx, base);
	// mr. r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8267d764
	if (ctx.cr0.eq) goto loc_8267D764;
	// addic. r9,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r9.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x8267d768
	if (ctx.cr0.lt) goto loc_8267D768;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lfs f0,3544(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
loc_8267D748:
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bge 0x8267d748
	if (!ctx.cr0.lt) goto loc_8267D748;
	// b 0x8267d768
	goto loc_8267D768;
loc_8267D764:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_8267D768:
	// lis r9,16383
	ctx.r9.s64 = 1073676288;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8267d788
	if (!ctx.cr6.gt) goto loc_8267D788;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8267D788:
	// bl 0x8251c658
	ctx.lr = 0x8267D78C;
	sub_8251C658(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
loc_8267D790:
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
loc_8267D794:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267D7A0"))) PPC_WEAK_FUNC(sub_8267D7A0);
PPC_FUNC_IMPL(__imp__sub_8267D7A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8267d7cc
	if (!ctx.cr0.eq) goto loc_8267D7CC;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8267d828
	if (!ctx.cr6.gt) goto loc_8267D828;
loc_8267D7CC:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r4,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r4.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267d7ec
	if (ctx.cr0.eq) goto loc_8267D7EC;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// lwz r11,-11212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267D7EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8267D7EC:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8267d804
	if (!ctx.cr0.eq) goto loc_8267D804;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// b 0x8267d824
	goto loc_8267D824;
loc_8267D804:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8267d81c
	if (!ctx.cr6.gt) goto loc_8267D81C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8267D81C:
	// bl 0x8251c658
	ctx.lr = 0x8267D820;
	sub_8251C658(ctx, base);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
loc_8267D824:
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
loc_8267D828:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267D840"))) PPC_WEAK_FUNC(sub_8267D840);
PPC_FUNC_IMPL(__imp__sub_8267D840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8267D848;
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lfs f0,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,5160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5160);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8267db68
	if (ctx.cr6.gt) goto loc_8267DB68;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267d87c
	if (!ctx.cr6.eq) goto loc_8267D87C;
loc_8267D874:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8267db6c
	goto loc_8267DB6C;
loc_8267D87C:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267db18
	if (!ctx.cr6.eq) goto loc_8267DB18;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x826991d0
	ctx.lr = 0x8267D898;
	sub_826991D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267db04
	if (ctx.cr0.eq) goto loc_8267DB04;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r10,r11,-9356
	ctx.r10.s64 = ctx.r11.s64 + -9356;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
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
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8267D8F4:
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x8267d8f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8267D8F4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stb r29,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r29.u8);
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r11,r11,4444
	ctx.r11.s64 = ctx.r11.s64 + 4444;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x826947e0
	ctx.lr = 0x8267D928;
	sub_826947E0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r29,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r29.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267D950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8267da44
	if (!ctx.cr6.eq) goto loc_8267DA44;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267d980
	if (ctx.cr6.eq) goto loc_8267D980;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,148(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8267d980
	if (!ctx.cr6.eq) goto loc_8267D980;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// b 0x8267da44
	goto loc_8267DA44;
loc_8267D980:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267da18
	if (ctx.cr0.eq) goto loc_8267DA18;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267D9AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8267da18
	if (!ctx.cr6.eq) goto loc_8267DA18;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267D9D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8267da18
	if (!ctx.cr6.eq) goto loc_8267DA18;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8267da10
	if (!ctx.cr6.lt) goto loc_8267DA10;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8267da14
	if (!ctx.cr6.eq) goto loc_8267DA14;
loc_8267DA10:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8267DA14:
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
loc_8267DA18:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267da44
	if (!ctx.cr6.eq) goto loc_8267DA44;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r5,152(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82680238
	ctx.lr = 0x8267DA40;
	sub_82680238(ctx, base);
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
loc_8267DA44:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267da60
	if (!ctx.cr6.eq) goto loc_8267DA60;
loc_8267DA50:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8267d408
	ctx.lr = 0x8267DA5C;
	sub_8267D408(ctx, base);
	// b 0x8267d874
	goto loc_8267D874;
loc_8267DA60:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267DA78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82696be0
	ctx.lr = 0x8267DA84;
	sub_82696BE0(ctx, base);
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x826314f8
	ctx.lr = 0x8267DA90;
	sub_826314F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82206388
	ctx.lr = 0x8267DA9C;
	sub_82206388(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5024);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8267dac4
	if (!ctx.cr6.lt) goto loc_8267DAC4;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_8267DAC4:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82696b90
	ctx.lr = 0x8267DACC;
	sub_82696B90(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x826816c0
	ctx.lr = 0x8267DAD4;
	sub_826816C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267da50
	if (ctx.cr0.eq) goto loc_8267DA50;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267DAF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-16924
	ctx.r11.s64 = ctx.r11.s64 + -16924;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// b 0x8267db18
	goto loc_8267DB18;
loc_8267DB04:
	// bl 0x8268f898
	ctx.lr = 0x8267DB08;
	sub_8268F898(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8268eff0
	ctx.lr = 0x8267DB18;
	sub_8268EFF0(ctx, base);
loc_8267DB18:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267db68
	if (ctx.cr0.eq) goto loc_8267DB68;
	// bl 0x82680fe0
	ctx.lr = 0x8267DB28;
	sub_82680FE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8267db68
	if (!ctx.cr6.eq) goto loc_8267DB68;
	// lfs f0,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// bl 0x826811b8
	ctx.lr = 0x8267DB48;
	sub_826811B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r29,137(r31)
	PPC_STORE_U8(ctx.r31.u32 + 137, ctx.r29.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stb r10,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r10.u8);
	// bl 0x8267d408
	ctx.lr = 0x8267DB68;
	sub_8267D408(ctx, base);
loc_8267DB68:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8267DB6C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267DB78"))) PPC_WEAK_FUNC(sub_8267DB78);
PPC_FUNC_IMPL(__imp__sub_8267DB78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267dbfc
	if (ctx.cr0.eq) goto loc_8267DBFC;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r10,r10,-9356
	ctx.r10.s64 = ctx.r10.s64 + -9356;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8267DBCC:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8267dbcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8267DBCC;
	// addi r4,r4,104
	ctx.r4.s64 = ctx.r4.s64 + 104;
	// stb r8,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r8.u8);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// bl 0x826947e0
	ctx.lr = 0x8267DBF4;
	sub_826947E0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x8267dc48
	goto loc_8267DC48;
loc_8267DBFC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-9356
	ctx.r11.s64 = ctx.r11.s64 + -9356;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// lwz r11,20(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8267DC34:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8267dc34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8267DC34;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stb r8,264(r1)
	PPC_STORE_U8(ctx.r1.u32 + 264, ctx.r8.u8);
loc_8267DC48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8267afb0
	ctx.lr = 0x8267DC50;
	sub_8267AFB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267DC68"))) PPC_WEAK_FUNC(sub_8267DC68);
PPC_FUNC_IMPL(__imp__sub_8267DC68) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,96(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8267dcc4
	if (!ctx.cr6.eq) goto loc_8267DCC4;
	// lwz r9,120(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,96(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 96);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8267dcc4
	if (ctx.cr0.eq) goto loc_8267DCC4;
	// lwz r6,112(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
loc_8267DC98:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8267dcb4
	if (ctx.cr0.eq) goto loc_8267DCB4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8267dcd0
	if (ctx.cr6.eq) goto loc_8267DCD0;
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_8267DCB4:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8267dc98
	if (ctx.cr6.lt) goto loc_8267DC98;
loc_8267DCC4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8267DCC8:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8267DCD0:
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r9,20
	ctx.r9.s64 = 20;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,104(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 104);
	// lwz r10,104(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// lwz r5,104(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// lwz r7,4(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// divwu r11,r11,r9
	ctx.r11.u32 = ctx.r11.u32 / ctx.r9.u32;
	// divwu r10,r10,r9
	ctx.r10.u32 = ctx.r10.u32 / ctx.r9.u32;
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x8267dcc8
	goto loc_8267DCC8;
}

__attribute__((alias("__imp__sub_8267DD10"))) PPC_WEAK_FUNC(sub_8267DD10);
PPC_FUNC_IMPL(__imp__sub_8267DD10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x8267DD18;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82690b68
	ctx.lr = 0x8267DD38;
	sub_82690B68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8268bd20
	ctx.lr = 0x8267DD44;
	sub_8268BD20(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lfs f0,-16480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16480);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x8267dd6c
	if (ctx.cr6.eq) goto loc_8267DD6C;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lfs f0,5160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5160);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
loc_8267DD6C:
	// lfs f13,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8267dd80
	if (!ctx.cr6.lt) goto loc_8267DD80;
	// li r28,2
	ctx.r28.s64 = 2;
	// b 0x8267dda8
	goto loc_8267DDA8;
loc_8267DD80:
	// lfs f13,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8267dd9c
	if (!ctx.cr6.lt) goto loc_8267DD9C;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x8267dda8
	if (!ctx.cr6.eq) goto loc_8267DDA8;
	// b 0x8267dda4
	goto loc_8267DDA4;
loc_8267DD9C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8267dda8
	if (!ctx.cr6.gt) goto loc_8267DDA8;
loc_8267DDA4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8267DDA8:
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8267de48
	if (!ctx.cr0.eq) goto loc_8267DE48;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x8267de08
	if (!ctx.cr6.eq) goto loc_8267DE08;
	// bl 0x8268f898
	ctx.lr = 0x8267DDBC;
	sub_8268F898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8267ddf0
	goto loc_8267DDF0;
loc_8267DDC4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267DDE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8267de3c
	if (!ctx.cr0.eq) goto loc_8267DE3C;
loc_8267DDF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8268e930
	ctx.lr = 0x8267DDF8;
	sub_8268E930(ctx, base);
	// lbz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8267ddc4
	if (!ctx.cr6.eq) goto loc_8267DDC4;
	// b 0x8267de48
	goto loc_8267DE48;
loc_8267DE08:
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// bne cr6,0x8267de48
	if (!ctx.cr6.eq) goto loc_8267DE48;
loc_8267DE10:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267DE30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267de10
	if (ctx.cr0.eq) goto loc_8267DE10;
loc_8267DE3C:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267de48
	if (ctx.cr0.eq) goto loc_8267DE48;
	// li r28,2
	ctx.r28.s64 = 2;
loc_8267DE48:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267DE68"))) PPC_WEAK_FUNC(sub_8267DE68);
PPC_FUNC_IMPL(__imp__sub_8267DE68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8267DE70;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r4,r10,8832
	ctx.r4.s64 = ctx.r10.s64 + 8832;
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stb r11,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r11.u8);
	// stb r11,137(r31)
	PPC_STORE_U8(ctx.r31.u32 + 137, ctx.r11.u8);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lfs f13,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,92(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lfs f13,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,96(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lfs f13,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,100(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stb r9,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r9.u8);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// bl 0x8268b0b8
	ctx.lr = 0x8267DEE4;
	sub_8268B0B8(ctx, base);
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r4,r11,-3968
	ctx.r4.s64 = ctx.r11.s64 + -3968;
	// lwz r3,-3384(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3384);
	// bl 0x82688fa8
	ctx.lr = 0x8267DEFC;
	sub_82688FA8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267df24
	if (ctx.cr0.eq) goto loc_8267DF24;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// addi r4,r11,-1092
	ctx.r4.s64 = ctx.r11.s64 + -1092;
	// bl 0x8268c388
	ctx.lr = 0x8267DF20;
	sub_8268C388(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
loc_8267DF24:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-3384(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3384);
	// addi r4,r11,22672
	ctx.r4.s64 = ctx.r11.s64 + 22672;
	// bl 0x82688fa8
	ctx.lr = 0x8267DF34;
	sub_82688FA8(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// bl 0x8268f898
	ctx.lr = 0x8267DF3C;
	sub_8268F898(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,4920
	ctx.r4.s64 = ctx.r11.s64 + 4920;
	// bl 0x8268e380
	ctx.lr = 0x8267DF4C;
	sub_8268E380(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,4888
	ctx.r4.s64 = ctx.r10.s64 + 4888;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// bl 0x8268e318
	ctx.lr = 0x8267DF64;
	sub_8268E318(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// addi r4,r11,-11348
	ctx.r4.s64 = ctx.r11.s64 + -11348;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82689fd0
	ctx.lr = 0x8267DF88;
	sub_82689FD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267df98
	if (ctx.cr0.eq) goto loc_8267DF98;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8267dfb0
	goto loc_8267DFB0;
loc_8267DF98:
	// lwz r11,-3384(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267dfac
	if (ctx.cr6.eq) goto loc_8267DFAC;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8267dfb0
	goto loc_8267DFB0;
loc_8267DFAC:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_8267DFB0:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stfs f0,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bl 0x82692ef0
	ctx.lr = 0x8267DFC8;
	sub_82692EF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267e040
	if (ctx.cr0.eq) goto loc_8267E040;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8267dfec
	if (!ctx.cr6.eq) goto loc_8267DFEC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8267d7a0
	ctx.lr = 0x8267DFEC;
	sub_8267D7A0(ctx, base);
loc_8267DFEC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267E000;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267e040
	if (ctx.cr0.eq) goto loc_8267E040;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267E01C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267e040
	if (ctx.cr0.eq) goto loc_8267E040;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267E038;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267e044
	goto loc_8267E044;
loc_8267E040:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267E044:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267E050"))) PPC_WEAK_FUNC(sub_8267E050);
PPC_FUNC_IMPL(__imp__sub_8267E050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8267E058;
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
	// bne cr6,0x8267e074
	if (!ctx.cr6.eq) goto loc_8267E074;
loc_8267E06C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8267e360
	goto loc_8267E360;
loc_8267E074:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a947a0
	ctx.lr = 0x8267E07C;
	sub_82A947A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,4784
	ctx.r4.s64 = ctx.r11.s64 + 4784;
	// bl 0x826e6bb0
	ctx.lr = 0x8267E088;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8267e0d0
	if (!ctx.cr0.eq) goto loc_8267E0D0;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r4,r11,22672
	ctx.r4.s64 = ctx.r11.s64 + 22672;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-3384(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3384);
	// bl 0x82688fa8
	ctx.lr = 0x8267E0A4;
	sub_82688FA8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8267e06c
	if (ctx.cr0.eq) goto loc_8267E06C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a94798
	ctx.lr = 0x8267E0B4;
	sub_82A94798(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82698f90
	ctx.lr = 0x8267E0C0;
	sub_82698F90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
	// b 0x8267e360
	goto loc_8267E360;
loc_8267E0D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a947a0
	ctx.lr = 0x8267E0D8;
	sub_82A947A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,4776
	ctx.r4.s64 = ctx.r11.s64 + 4776;
	// bl 0x826e6bb0
	ctx.lr = 0x8267E0E4;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8267e150
	if (!ctx.cr0.eq) goto loc_8267E150;
	// bl 0x82a94798
	ctx.lr = 0x8267E0F4;
	sub_82A94798(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8267e354
	if (ctx.cr0.eq) goto loc_8267E354;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267e06c
	if (ctx.cr0.eq) goto loc_8267E06C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82687ef0
	ctx.lr = 0x8267E110;
	sub_82687EF0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8267e06c
	if (ctx.cr0.eq) goto loc_8267E06C;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,27024
	ctx.r5.s64 = ctx.r11.s64 + 27024;
	// bl 0x82698e68
	ctx.lr = 0x8267E12C;
	sub_82698E68(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267E148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8267E148:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267e360
	goto loc_8267E360;
loc_8267E150:
	// bl 0x82a947a0
	ctx.lr = 0x8267E154;
	sub_82A947A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,4756
	ctx.r4.s64 = ctx.r11.s64 + 4756;
	// bl 0x826e6bb0
	ctx.lr = 0x8267E160;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8267e190
	if (!ctx.cr0.eq) goto loc_8267E190;
	// bl 0x82a94798
	ctx.lr = 0x8267E170;
	sub_82A94798(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267e354
	if (ctx.cr0.eq) goto loc_8267E354;
	// bl 0x826e2440
	ctx.lr = 0x8267E17C;
	sub_826E2440(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8267d688
	ctx.lr = 0x8267E18C;
	sub_8267D688(ctx, base);
	// b 0x8267e148
	goto loc_8267E148;
loc_8267E190:
	// bl 0x82a947a0
	ctx.lr = 0x8267E194;
	sub_82A947A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,4732
	ctx.r4.s64 = ctx.r11.s64 + 4732;
	// bl 0x826e6bb0
	ctx.lr = 0x8267E1A0;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8267e1d0
	if (!ctx.cr0.eq) goto loc_8267E1D0;
	// bl 0x82a94798
	ctx.lr = 0x8267E1B0;
	sub_82A94798(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267e354
	if (ctx.cr0.eq) goto loc_8267E354;
	// bl 0x826e2440
	ctx.lr = 0x8267E1BC;
	sub_826E2440(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8267d7a0
	ctx.lr = 0x8267E1CC;
	sub_8267D7A0(ctx, base);
	// b 0x8267e148
	goto loc_8267E148;
loc_8267E1D0:
	// bl 0x82a947a0
	ctx.lr = 0x8267E1D4;
	sub_82A947A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,4996
	ctx.r4.s64 = ctx.r11.s64 + 4996;
	// bl 0x826e6bb0
	ctx.lr = 0x8267E1E0;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8267e238
	if (!ctx.cr0.eq) goto loc_8267E238;
	// bl 0x82a94798
	ctx.lr = 0x8267E1F0;
	sub_82A94798(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267e354
	if (ctx.cr0.eq) goto loc_8267E354;
	// bl 0x826e2438
	ctx.lr = 0x8267E1FC;
	sub_826E2438(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,-3384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3384);
	// lfs f13,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267e21c
	if (ctx.cr6.eq) goto loc_8267E21C;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8267e220
	goto loc_8267E220;
loc_8267E21C:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_8267E220:
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8267e148
	if (!ctx.cr6.gt) goto loc_8267E148;
	// stfs f0,16(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 16, temp.u32);
	// b 0x8267e148
	goto loc_8267E148;
loc_8267E238:
	// bl 0x82a947a0
	ctx.lr = 0x8267E23C;
	sub_82A947A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,4976
	ctx.r4.s64 = ctx.r11.s64 + 4976;
	// bl 0x826e6bb0
	ctx.lr = 0x8267E248;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8267e274
	if (!ctx.cr0.eq) goto loc_8267E274;
	// bl 0x82a94798
	ctx.lr = 0x8267E258;
	sub_82A94798(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267e354
	if (ctx.cr0.eq) goto loc_8267E354;
	// bl 0x826e2438
	ctx.lr = 0x8267E264;
	sub_826E2438(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,124(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 124, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267e360
	goto loc_8267E360;
loc_8267E274:
	// bl 0x82a947a0
	ctx.lr = 0x8267E278;
	sub_82A947A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,4960
	ctx.r4.s64 = ctx.r11.s64 + 4960;
	// bl 0x826e6bb0
	ctx.lr = 0x8267E284;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8267e2f4
	if (!ctx.cr0.eq) goto loc_8267E2F4;
	// bl 0x82a94798
	ctx.lr = 0x8267E294;
	sub_82A94798(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8267e354
	if (ctx.cr0.eq) goto loc_8267E354;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,4956
	ctx.r4.s64 = ctx.r11.s64 + 4956;
	// bl 0x826e6bb0
	ctx.lr = 0x8267E2AC;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8267e2e8
	if (ctx.cr0.eq) goto loc_8267E2E8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-12616
	ctx.r4.s64 = ctx.r11.s64 + -12616;
	// bl 0x826e6bb0
	ctx.lr = 0x8267E2C4;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8267e2e8
	if (ctx.cr0.eq) goto loc_8267E2E8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,4952
	ctx.r4.s64 = ctx.r11.s64 + 4952;
	// bl 0x826e6bb0
	ctx.lr = 0x8267E2DC;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne 0x8267e2ec
	if (!ctx.cr0.eq) goto loc_8267E2EC;
loc_8267E2E8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8267E2EC:
	// stb r11,12(r29)
	PPC_STORE_U8(ctx.r29.u32 + 12, ctx.r11.u8);
	// b 0x8267e148
	goto loc_8267E148;
loc_8267E2F4:
	// bl 0x82a947a0
	ctx.lr = 0x8267E2F8;
	sub_82A947A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,4252
	ctx.r4.s64 = ctx.r11.s64 + 4252;
	// bl 0x826e6bb0
	ctx.lr = 0x8267E304;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8267e354
	if (!ctx.cr0.eq) goto loc_8267E354;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a94798
	ctx.lr = 0x8267E314;
	sub_82A94798(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267e354
	if (ctx.cr0.eq) goto loc_8267E354;
	// bl 0x826e2438
	ctx.lr = 0x8267E320;
	sub_826E2438(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,-3384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267e338
	if (ctx.cr6.eq) goto loc_8267E338;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8267e340
	goto loc_8267E340;
loc_8267E338:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
loc_8267E340:
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x8267d490
	ctx.lr = 0x8267E350;
	sub_8267D490(ctx, base);
	// b 0x8267e148
	goto loc_8267E148;
loc_8267E354:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82526588
	ctx.lr = 0x8267E360;
	sub_82526588(ctx, base);
loc_8267E360:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267E368"))) PPC_WEAK_FUNC(sub_8267E368);
PPC_FUNC_IMPL(__imp__sub_8267E368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x8267E370;
	__savegprlr_25(ctx, base);
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
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8267e39c
	if (!ctx.cr6.eq) goto loc_8267E39C;
loc_8267E394:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8267e46c
	goto loc_8267E46C;
loc_8267E39C:
	// lbz r25,68(r31)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// cmplwi r25,0
	ctx.cr0.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne 0x8267e3f4
	if (!ctx.cr0.eq) goto loc_8267E3F4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8267d508
	ctx.lr = 0x8267E3B8;
	sub_8267D508(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267e3f4
	if (ctx.cr0.eq) goto loc_8267E3F4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8267dc68
	ctx.lr = 0x8267E3D0;
	sub_8267DC68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8267e394
	if (ctx.cr6.eq) goto loc_8267E394;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8267dd10
	ctx.lr = 0x8267E3F0;
	sub_8267DD10(ctx, base);
	// b 0x8267e46c
	goto loc_8267E46C;
loc_8267E3F4:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// beq cr6,0x8267e474
	if (ctx.cr6.eq) goto loc_8267E474;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8267e40c
	if (ctx.cr6.eq) goto loc_8267E40C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8267e474
	if (ctx.cr6.eq) goto loc_8267E474;
loc_8267E40C:
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// bne cr6,0x8267e394
	if (!ctx.cr6.eq) goto loc_8267E394;
loc_8267E414:
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826911d8
	ctx.lr = 0x8267E424;
	sub_826911D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267E450;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267e414
	if (ctx.cr0.eq) goto loc_8267E414;
loc_8267E45C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r3,r11,0,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
loc_8267E46C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_8267E474:
	// bl 0x8268f898
	ctx.lr = 0x8267E478;
	sub_8268F898(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x8267e4c8
	goto loc_8267E4C8;
loc_8267E480:
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826911d8
	ctx.lr = 0x8267E490;
	sub_826911D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267E4BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8267e45c
	if (!ctx.cr0.eq) goto loc_8267E45C;
loc_8267E4C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8268e930
	ctx.lr = 0x8267E4D0;
	sub_8268E930(ctx, base);
	// lbz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8267e480
	if (!ctx.cr6.eq) goto loc_8267E480;
	// b 0x8267e394
	goto loc_8267E394;
}

__attribute__((alias("__imp__sub_8267E4E0"))) PPC_WEAK_FUNC(sub_8267E4E0);
PPC_FUNC_IMPL(__imp__sub_8267E4E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8267E4E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r3,36(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267e534
	if (ctx.cr0.eq) goto loc_8267E534;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82522360
	ctx.lr = 0x8267E524;
	sub_82522360(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8267e534
	if (ctx.cr0.eq) goto loc_8267E534;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// b 0x8267e640
	goto loc_8267E640;
loc_8267E534:
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// addi r30,r11,-9356
	ctx.r30.s64 = ctx.r11.s64 + -9356;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
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
loc_8267E570:
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x8267e570
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8267E570;
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
	// addi r29,r10,4868
	ctx.r29.s64 = ctx.r10.s64 + 4868;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// bl 0x826947e0
	ctx.lr = 0x8267E5A0;
	sub_826947E0(ctx, base);
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// lfs f0,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// lfs f0,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8267E5CC:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8267e5cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8267E5CC;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stb r28,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r28.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x826947e0
	ctx.lr = 0x8267E5F0;
	sub_826947E0(ctx, base);
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r11,r11,-11200
	ctx.r11.s64 = ctx.r11.s64 + -11200;
	// lwz r7,20(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8267e614
	if (!ctx.cr6.eq) goto loc_8267E614;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x8267e634
	goto loc_8267E634;
loc_8267E614:
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
	ctx.lr = 0x8267E634;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8267E634:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8267E640:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267E648"))) PPC_WEAK_FUNC(sub_8267E648);
PPC_FUNC_IMPL(__imp__sub_8267E648) {
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
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267e6a8
	if (ctx.cr0.eq) goto loc_8267E6A8;
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
	ctx.lr = 0x8267E698;
	sub_8267E368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8267e6a8
	if (ctx.cr0.eq) goto loc_8267E6A8;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8267e6e4
	goto loc_8267E6E4;
loc_8267E6A8:
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
loc_8267E6E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267E700"))) PPC_WEAK_FUNC(sub_8267E700);
PPC_FUNC_IMPL(__imp__sub_8267E700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x8267E708;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r30,r11,-9356
	ctx.r30.s64 = ctx.r11.s64 + -9356;
	// li r25,1
	ctx.r25.s64 = 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8267E758:
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x8267e758
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8267E758;
	// stb r26,280(r1)
	PPC_STORE_U8(ctx.r1.u32 + 280, ctx.r26.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r10,r10,4868
	ctx.r10.s64 = ctx.r10.s64 + 4868;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826947e0
	ctx.lr = 0x8267E788;
	sub_826947E0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lfs f31,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8267E7B0:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8267e7b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8267E7B0;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// stb r26,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r26.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8267e8a4
	if (!ctx.cr6.gt) goto loc_8267E8A4;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r28,r11,-11200
	ctx.r28.s64 = ctx.r11.s64 + -11200;
loc_8267E7E0:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lfs f12,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f10.f64 = double(temp.f32);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lfsx f11,r30,r10
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f12,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x8267e884
	if (!ctx.cr6.lt) goto loc_8267E884;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r9,36(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stb r26,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r26.u8);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bne cr6,0x8267e860
	if (!ctx.cr6.eq) goto loc_8267E860;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x8267e87c
	goto loc_8267E87C;
loc_8267E860:
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267E87C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8267E87C:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8267e8a0
	if (!ctx.cr0.eq) goto loc_8267E8A0;
loc_8267E884:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8267e7e0
	if (ctx.cr6.lt) goto loc_8267E7E0;
	// b 0x8267e8a4
	goto loc_8267E8A4;
loc_8267E8A0:
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
loc_8267E8A4:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8267e8b4
	if (!ctx.cr0.eq) goto loc_8267E8B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8267e91c
	goto loc_8267E91C;
loc_8267E8B4:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8267e918
	if (!ctx.cr6.gt) goto loc_8267E918;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_8267E8C8:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x8267e648
	ctx.lr = 0x8267E8D8;
	sub_8267E648(ctx, base);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8267e8fc
	if (!ctx.cr6.lt) goto loc_8267E8FC;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x8267e4e0
	ctx.lr = 0x8267E8F4;
	sub_8267E4E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8267e914
	if (!ctx.cr0.eq) goto loc_8267E914;
loc_8267E8FC:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8267e8c8
	if (ctx.cr6.lt) goto loc_8267E8C8;
	// b 0x8267e918
	goto loc_8267E918;
loc_8267E914:
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
loc_8267E918:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_8267E91C:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267E928"))) PPC_WEAK_FUNC(sub_8267E928);
PPC_FUNC_IMPL(__imp__sub_8267E928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8267E930;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82692e58
	ctx.lr = 0x8267E944;
	sub_82692E58(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r29,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r29.u8);
	// beq 0x8267e98c
	if (ctx.cr0.eq) goto loc_8267E98C;
	// bl 0x8268f898
	ctx.lr = 0x8267E960;
	sub_8268F898(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8268ea30
	ctx.lr = 0x8267E970;
	sub_8268EA30(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267e98c
	if (ctx.cr0.eq) goto loc_8267E98C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8267e700
	ctx.lr = 0x8267E980;
	sub_8267E700(ctx, base);
	// stb r3,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r3.u8);
	// lfs f0,5160(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
loc_8267E98C:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267e9c8
	if (ctx.cr0.eq) goto loc_8267E9C8;
	// lbz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 136);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267e9c8
	if (ctx.cr0.eq) goto loc_8267E9C8;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267e9d0
	if (ctx.cr6.eq) goto loc_8267E9D0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8267d408
	ctx.lr = 0x8267E9BC;
	sub_8267D408(ctx, base);
	// lfs f0,5160(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// b 0x8267e9d0
	goto loc_8267E9D0;
loc_8267E9C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8267d840
	ctx.lr = 0x8267E9D0;
	sub_8267D840(ctx, base);
loc_8267E9D0:
	// lbz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 88);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267eb20
	if (ctx.cr0.eq) goto loc_8267EB20;
	// lbz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 136);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8267eb20
	if (!ctx.cr0.eq) goto loc_8267EB20;
	// lbz r11,137(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 137);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8267eb20
	if (!ctx.cr0.eq) goto loc_8267EB20;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f1,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267EA0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,-3384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3384);
	// lfs f31,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f30.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f1,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// beq cr6,0x8267ea38
	if (ctx.cr6.eq) goto loc_8267EA38;
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8267ea3c
	goto loc_8267EA3C;
loc_8267EA38:
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
loc_8267EA3C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267ea48
	if (ctx.cr6.eq) goto loc_8267EA48;
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
loc_8267EA48:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,5024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5024);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267EA64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8267db78
	ctx.lr = 0x8267EA70;
	sub_8267DB78(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267EA8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-16924
	ctx.r11.s64 = ctx.r11.s64 + -16924;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267eae4
	if (ctx.cr0.eq) goto loc_8267EAE4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
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
	ctx.lr = 0x8267EABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267EAD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267eae4
	if (ctx.cr0.eq) goto loc_8267EAE4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r29,137(r31)
	PPC_STORE_U8(ctx.r31.u32 + 137, ctx.r29.u8);
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
loc_8267EAE4:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
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
	ctx.lr = 0x8267EB00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267EB14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8267eb24
	if (ctx.cr6.eq) goto loc_8267EB24;
loc_8267EB20:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8267EB24:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267EB38"))) PPC_WEAK_FUNC(sub_8267EB38);
PPC_FUNC_IMPL(__imp__sub_8267EB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-13004
	ctx.r3.s64 = ctx.r11.s64 + -13004;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267EB48"))) PPC_WEAK_FUNC(sub_8267EB48);
PPC_FUNC_IMPL(__imp__sub_8267EB48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8267EB50;
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r11,8832
	ctx.r4.s64 = ctx.r11.s64 + 8832;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8268b0b8
	ctx.lr = 0x8267EB70;
	sub_8268B0B8(ctx, base);
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// addi r4,r11,-816
	ctx.r4.s64 = ctx.r11.s64 + -816;
	// lwz r3,-3384(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3384);
	// bl 0x82688fa8
	ctx.lr = 0x8267EB88;
	sub_82688FA8(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r10,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r10.u8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,-3384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3384);
	// lfs f31,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267ebbc
	if (ctx.cr6.eq) goto loc_8267EBBC;
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8267ebc0
	goto loc_8267EBC0;
loc_8267EBBC:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64;
loc_8267EBC0:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-11348
	ctx.r4.s64 = ctx.r11.s64 + -11348;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,6456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6456);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stfs f13,140(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82689fd0
	ctx.lr = 0x8267EBE8;
	sub_82689FD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267ebf8
	if (ctx.cr0.eq) goto loc_8267EBF8;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8267ec1c
	goto loc_8267EC1C;
loc_8267EBF8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// lwz r11,-3384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267ec18
	if (ctx.cr6.eq) goto loc_8267EC18;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8267ec1c
	goto loc_8267EC1C;
loc_8267EC18:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_8267EC1C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82692ef0
	ctx.lr = 0x8267EC2C;
	sub_82692EF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8267ec3c
	if (!ctx.cr0.eq) goto loc_8267EC3C;
loc_8267EC34:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8267ec70
	goto loc_8267EC70;
loc_8267EC3C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267EC50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267ec34
	if (ctx.cr0.eq) goto loc_8267EC34;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267EC6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8267EC70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267EC80"))) PPC_WEAK_FUNC(sub_8267EC80);
PPC_FUNC_IMPL(__imp__sub_8267EC80) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stb r30,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r30.u8);
	// stw r30,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r30.u32);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// bl 0x826947e0
	ctx.lr = 0x8267ECD8;
	sub_826947E0(ctx, base);
	// stb r30,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r30.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267ECF8"))) PPC_WEAK_FUNC(sub_8267ECF8);
PPC_FUNC_IMPL(__imp__sub_8267ECF8) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267ed18
	if (!ctx.cr6.eq) goto loc_8267ED18;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8267ed38
	goto loc_8267ED38;
loc_8267ED18:
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267ed34
	if (!ctx.cr6.eq) goto loc_8267ED34;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267ED34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8267ED34:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8267ED38:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267ED48"))) PPC_WEAK_FUNC(sub_8267ED48);
PPC_FUNC_IMPL(__imp__sub_8267ED48) {
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
	// bl 0x82692e58
	ctx.lr = 0x8267ED60;
	sub_82692E58(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267ed74
	if (!ctx.cr6.eq) goto loc_8267ED74;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8267eebc
	goto loc_8267EEBC;
loc_8267ED74:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f1,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267ED8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267edf0
	if (ctx.cr0.eq) goto loc_8267EDF0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r31,32
	ctx.r5.s64 = ctx.r31.s64 + 32;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f10,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f11,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f13,f12,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// lfs f0,14096(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14096);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8267edf0
	if (!ctx.cr6.lt) goto loc_8267EDF0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826d87d0
	ctx.lr = 0x8267EDF0;
	sub_826D87D0(ctx, base);
loc_8267EDF0:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267EE08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267ee80
	if (ctx.cr0.eq) goto loc_8267EE80;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
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
	ctx.lr = 0x8267EE2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267EE40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r3,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r3.u8);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267eeb8
	if (ctx.cr0.eq) goto loc_8267EEB8;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267ee68
	if (ctx.cr0.eq) goto loc_8267EE68;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r31,32
	ctx.r5.s64 = ctx.r31.s64 + 32;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x826d7ad0
	ctx.lr = 0x8267EE68;
	sub_826D7AD0(ctx, base);
loc_8267EE68:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267EE7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8267eeb8
	goto loc_8267EEB8;
loc_8267EE80:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267EE94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8267eeb8
	if (!ctx.cr6.eq) goto loc_8267EEB8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267EEB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r11.u8);
loc_8267EEB8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8267EEBC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267EED0"))) PPC_WEAK_FUNC(sub_8267EED0);
PPC_FUNC_IMPL(__imp__sub_8267EED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// beq cr6,0x8267eef0
	if (ctx.cr6.eq) goto loc_8267EEF0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8267EEF0:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r3,120
	ctx.r4.s64 = ctx.r3.s64 + 120;
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f0,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stb r9,88(r11)
	PPC_STORE_U8(ctx.r11.u32 + 88, ctx.r9.u8);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// b 0x826947e0
	sub_826947E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267EF38"))) PPC_WEAK_FUNC(sub_8267EF38);
PPC_FUNC_IMPL(__imp__sub_8267EF38) {
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
	// ble cr6,0x8267ef98
	if (!ctx.cr6.gt) goto loc_8267EF98;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r4,r11,-11348
	ctx.r4.s64 = ctx.r11.s64 + -11348;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82689fd0
	ctx.lr = 0x8267EF78;
	sub_82689FD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267ef94
	if (ctx.cr0.eq) goto loc_8267EF94;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x8267ef94
	if (!ctx.cr6.gt) goto loc_8267EF94;
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// b 0x8267ef98
	goto loc_8267EF98;
loc_8267EF94:
	// stfs f31,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
loc_8267EF98:
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

__attribute__((alias("__imp__sub_8267EFB0"))) PPC_WEAK_FUNC(sub_8267EFB0);
PPC_FUNC_IMPL(__imp__sub_8267EFB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f0,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// lfs f12,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f12.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x8267effc
	if (!ctx.cr6.eq) goto loc_8267EFFC;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,9108
	ctx.r11.s64 = ctx.r11.s64 + 9108;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// b 0x8267f024
	goto loc_8267F024;
loc_8267EFFC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f11,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
loc_8267F024:
	// stfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267F030"))) PPC_WEAK_FUNC(sub_8267F030);
PPC_FUNC_IMPL(__imp__sub_8267F030) {
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
	ctx.lr = 0x8267F048;
	sub_82692DB0(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// addi r9,r10,5028
	ctx.r9.s64 = ctx.r10.s64 + 5028;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// lfs f0,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r8,r10,-9356
	ctx.r8.s64 = ctx.r10.s64 + -9356;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8267F090:
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x8267f090
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8267F090;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stb r10,88(r11)
	PPC_STORE_U8(ctx.r11.u32 + 88, ctx.r10.u8);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// addi r9,r9,4444
	ctx.r9.s64 = ctx.r9.s64 + 4444;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r8.u32);
	// stw r9,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267F0D0"))) PPC_WEAK_FUNC(sub_8267F0D0);
PPC_FUNC_IMPL(__imp__sub_8267F0D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,5028
	ctx.r10.s64 = ctx.r11.s64 + 5028;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-16924
	ctx.r11.s64 = ctx.r11.s64 + -16924;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x82692dd0
	ctx.lr = 0x8267F10C;
	sub_82692DD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267f128
	if (ctx.cr0.eq) goto loc_8267F128;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-11212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267F128;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8267F128:
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

__attribute__((alias("__imp__sub_8267F148"))) PPC_WEAK_FUNC(sub_8267F148);
PPC_FUNC_IMPL(__imp__sub_8267F148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8267F150;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8267f16c
	if (!ctx.cr6.eq) goto loc_8267F16C;
loc_8267F164:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8267f36c
	goto loc_8267F36C;
loc_8267F16C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a947a0
	ctx.lr = 0x8267F174;
	sub_82A947A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,4776
	ctx.r4.s64 = ctx.r11.s64 + 4776;
	// bl 0x826e6bb0
	ctx.lr = 0x8267F184;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8267f1f8
	if (!ctx.cr0.eq) goto loc_8267F1F8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a94798
	ctx.lr = 0x8267F194;
	sub_82A94798(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8267f360
	if (ctx.cr0.eq) goto loc_8267F360;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r4,r11,22672
	ctx.r4.s64 = ctx.r11.s64 + 22672;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-3384(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3384);
	// bl 0x82688fa8
	ctx.lr = 0x8267F1B0;
	sub_82688FA8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8267f164
	if (ctx.cr0.eq) goto loc_8267F164;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82687ef0
	ctx.lr = 0x8267F1C4;
	sub_82687EF0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8267f164
	if (ctx.cr0.eq) goto loc_8267F164;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,27024
	ctx.r5.s64 = ctx.r11.s64 + 27024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82698e68
	ctx.lr = 0x8267F1E0;
	sub_82698E68(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8267eed0
	ctx.lr = 0x8267F1F0;
	sub_8267EED0(ctx, base);
loc_8267F1F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267f36c
	goto loc_8267F36C;
loc_8267F1F8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4252
	ctx.r4.s64 = ctx.r11.s64 + 4252;
	// bl 0x826e6bb0
	ctx.lr = 0x8267F208;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8267f258
	if (!ctx.cr0.eq) goto loc_8267F258;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a94798
	ctx.lr = 0x8267F218;
	sub_82A94798(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267f1f0
	if (ctx.cr0.eq) goto loc_8267F1F0;
	// bl 0x826e2438
	ctx.lr = 0x8267F224;
	sub_826E2438(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,-3384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267f23c
	if (ctx.cr6.eq) goto loc_8267F23C;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8267f244
	goto loc_8267F244;
loc_8267F23C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
loc_8267F244:
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x8267ef38
	ctx.lr = 0x8267F254;
	sub_8267EF38(ctx, base);
	// b 0x8267f1f0
	goto loc_8267F1F0;
loc_8267F258:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5116
	ctx.r4.s64 = ctx.r11.s64 + 5116;
	// bl 0x826e6bb0
	ctx.lr = 0x8267F268;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8267f2c8
	if (!ctx.cr0.eq) goto loc_8267F2C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a94798
	ctx.lr = 0x8267F278;
	sub_82A94798(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267f1f0
	if (ctx.cr0.eq) goto loc_8267F1F0;
	// bl 0x826e2438
	ctx.lr = 0x8267F284;
	sub_826E2438(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,-3384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3384);
	// lfs f13,3544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267f2a4
	if (ctx.cr6.eq) goto loc_8267F2A4;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8267f2a8
	goto loc_8267F2A8;
loc_8267F2A4:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_8267F2A8:
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8267f2c0
	if (!ctx.cr6.lt) goto loc_8267F2C0;
	// stfs f13,140(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 140, temp.u32);
	// b 0x8267f1f0
	goto loc_8267F1F0;
loc_8267F2C0:
	// stfs f0,140(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 140, temp.u32);
	// b 0x8267f1f0
	goto loc_8267F1F0;
loc_8267F2C8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5096
	ctx.r4.s64 = ctx.r11.s64 + 5096;
	// bl 0x826e6bb0
	ctx.lr = 0x8267F2D8;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8267f2fc
	if (!ctx.cr0.eq) goto loc_8267F2FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a94798
	ctx.lr = 0x8267F2E8;
	sub_82A94798(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267f1f0
	if (ctx.cr0.eq) goto loc_8267F1F0;
	// bl 0x826e2440
	ctx.lr = 0x8267F2F4;
	sub_826E2440(ctx, base);
	// stb r3,144(r28)
	PPC_STORE_U8(ctx.r28.u32 + 144, ctx.r3.u8);
	// b 0x8267f1f0
	goto loc_8267F1F0;
loc_8267F2FC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5080
	ctx.r4.s64 = ctx.r11.s64 + 5080;
	// bl 0x826e6bb0
	ctx.lr = 0x8267F30C;
	sub_826E6BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8267f360
	if (!ctx.cr0.eq) goto loc_8267F360;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a94798
	ctx.lr = 0x8267F31C;
	sub_82A94798(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267f1f0
	if (ctx.cr0.eq) goto loc_8267F1F0;
	// bl 0x826e2438
	ctx.lr = 0x8267F328;
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
	// blt cr6,0x8267f1f0
	if (ctx.cr6.lt) goto loc_8267F1F0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,7856(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7856);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8267f1f0
	if (ctx.cr6.gt) goto loc_8267F1F0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8160);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,148(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 148, temp.u32);
	// b 0x8267f1f0
	goto loc_8267F1F0;
loc_8267F360:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82526588
	ctx.lr = 0x8267F36C;
	sub_82526588(ctx, base);
loc_8267F36C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267F378"))) PPC_WEAK_FUNC(sub_8267F378);
PPC_FUNC_IMPL(__imp__sub_8267F378) {
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
	// bl 0x826dfb84
	ctx.lr = 0x8267F38C;
	__savefpr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8267efb0
	ctx.lr = 0x8267F3A0;
	sub_8267EFB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8267efb0
	ctx.lr = 0x8267F3AC;
	sub_8267EFB0(ctx, base);
	// lfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmuls f12,f31,f30
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f29,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmadds f1,f29,f28,f0
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f28.f64 + ctx.f0.f64));
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f27,5424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5424);
	ctx.f27.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8267f3f0
	if (!ctx.cr6.gt) goto loc_8267F3F0;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// b 0x8267f3fc
	goto loc_8267F3FC;
loc_8267F3F0:
	// fcmpu cr6,f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f27.f64);
	// bge cr6,0x8267f3fc
	if (!ctx.cr6.lt) goto loc_8267F3FC;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
loc_8267F3FC:
	// bl 0x826e0370
	ctx.lr = 0x8267F400;
	sub_826E0370(ctx, base);
	// fmuls f0,f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f28.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// lfs f13,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f0,f29,f31,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f31.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8267f434
	if (!ctx.cr6.lt) goto loc_8267F434;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-840(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -840);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8267f434
	if (!ctx.cr6.gt) goto loc_8267F434;
	// fmuls f1,f1,f27
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f27.f64));
loc_8267F434:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x826dfbd0
	ctx.lr = 0x8267F440;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267F450"))) PPC_WEAK_FUNC(sub_8267F450);
PPC_FUNC_IMPL(__imp__sub_8267F450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x8251c658
	ctx.lr = 0x8267F46C;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267f480
	if (ctx.cr0.eq) goto loc_8267F480;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8267f030
	ctx.lr = 0x8267F47C;
	sub_8267F030(ctx, base);
	// b 0x8267f484
	goto loc_8267F484;
loc_8267F480:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267F484:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267F498"))) PPC_WEAK_FUNC(sub_8267F498);
PPC_FUNC_IMPL(__imp__sub_8267F498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8ac
	ctx.lr = 0x8267F4A0;
	__savegprlr_21(ctx, base);
	// stfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f29.u64);
	// stfd f30,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r21,-1
	ctx.r21.s64 = -1;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267f704
	if (ctx.cr0.eq) goto loc_8267F704;
	// lbz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267f704
	if (ctx.cr0.eq) goto loc_8267F704;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f1,140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x8269c880
	ctx.lr = 0x8267F508;
	sub_8269C880(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// ble cr6,0x8267f704
	if (!ctx.cr6.gt) goto loc_8267F704;
	// lbz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8267f524
	if (ctx.cr6.gt) goto loc_8267F524;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_8267F524:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f29,2372(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2372);
	ctx.f29.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f30.f64 = double(temp.f32);
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stfs f30,116(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f0,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// beq cr6,0x8267f698
	if (ctx.cr6.eq) goto loc_8267F698;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// addi r25,r11,-16924
	ctx.r25.s64 = ctx.r11.s64 + -16924;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r28,r11,-9356
	ctx.r28.s64 = ctx.r11.s64 + -9356;
loc_8267F57C:
	// bl 0x826e0d50
	ctx.lr = 0x8267F580;
	sub_826E0D50(ctx, base);
	// divwu r10,r3,r27
	ctx.r10.u32 = ctx.r3.u32 / ctx.r27.u32;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// twllei r27,0
	// mullw r10,r10,r27
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r27.s32);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r8
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8267f690
	if (!ctx.cr6.lt) goto loc_8267F690;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mulli r10,r29,20
	ctx.r10.s64 = ctx.r29.s64 * 20;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8267f690
	if (ctx.cr6.eq) goto loc_8267F690;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267f690
	if (ctx.cr0.eq) goto loc_8267F690;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f30,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8267f378
	ctx.lr = 0x8267F608;
	sub_8267F378(ctx, base);
	// fabs f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lfs f0,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x8267f61c
	if (!ctx.cr6.lt) goto loc_8267F61C;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_8267F61C:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// bge cr6,0x8267f690
	if (!ctx.cr6.lt) goto loc_8267F690;
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// stfs f30,140(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8267F644:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8267f644
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8267F644;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stb r22,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r22.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267F670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8267f68c
	if (!ctx.cr6.eq) goto loc_8267F68C;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// fmr f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f31.f64;
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// ori r26,r11,1
	ctx.r26.u64 = ctx.r11.u64 | 1;
loc_8267F68C:
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
loc_8267F690:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x8267f57c
	if (!ctx.cr0.eq) goto loc_8267F57C;
loc_8267F698:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267f704
	if (ctx.cr0.eq) goto loc_8267F704;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r23,r10
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8267f6c8
	if (!ctx.cr6.lt) goto loc_8267F6C8;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mulli r10,r23,20
	ctx.r10.s64 = ctx.r23.s64 * 20;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8267f6cc
	if (!ctx.cr6.eq) goto loc_8267F6CC;
loc_8267F6C8:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_8267F6CC:
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stb r22,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r22.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r23,r10
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8267f790
	if (!ctx.cr6.lt) goto loc_8267F790;
	// mulli r10,r23,20
	ctx.r10.s64 = ctx.r23.s64 * 20;
	// b 0x8267f77c
	goto loc_8267F77C;
loc_8267F704:
	// bl 0x826e0d50
	ctx.lr = 0x8267F708;
	sub_826E0D50(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// divwu r9,r3,r10
	ctx.r9.u32 = ctx.r3.u32 / ctx.r10.u32;
	// twllei r10,0
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8267f744
	if (!ctx.cr6.lt) goto loc_8267F744;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mulli r9,r10,20
	ctx.r9.s64 = ctx.r10.s64 * 20;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x8267f748
	if (!ctx.cr6.eq) goto loc_8267F748;
loc_8267F744:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_8267F748:
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stb r22,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r22.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8267f790
	if (!ctx.cr6.lt) goto loc_8267F790;
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
loc_8267F77C:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8267f794
	if (!ctx.cr6.eq) goto loc_8267F794;
loc_8267F790:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_8267F794:
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r21,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r21.u32);
	// bl 0x826947e0
	ctx.lr = 0x8267F7A4;
	sub_826947E0(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x826de8fc
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267F7B8"))) PPC_WEAK_FUNC(sub_8267F7B8);
PPC_FUNC_IMPL(__imp__sub_8267F7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-13280
	ctx.r11.s64 = ctx.r11.s64 + -13280;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8267f870
	if (ctx.cr6.eq) goto loc_8267F870;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-13832
	ctx.r11.s64 = ctx.r11.s64 + -13832;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8267f870
	if (ctx.cr6.eq) goto loc_8267F870;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-14384
	ctx.r11.s64 = ctx.r11.s64 + -14384;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8267f870
	if (ctx.cr6.eq) goto loc_8267F870;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-13556
	ctx.r11.s64 = ctx.r11.s64 + -13556;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8267f870
	if (ctx.cr6.eq) goto loc_8267F870;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-14108
	ctx.r11.s64 = ctx.r11.s64 + -14108;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8267f870
	if (ctx.cr6.eq) goto loc_8267F870;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-12176
	ctx.r11.s64 = ctx.r11.s64 + -12176;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8267f870
	if (ctx.cr6.eq) goto loc_8267F870;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-13004
	ctx.r11.s64 = ctx.r11.s64 + -13004;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8267f870
	if (ctx.cr6.eq) goto loc_8267F870;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-12728
	ctx.r11.s64 = ctx.r11.s64 + -12728;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8267f870
	if (ctx.cr6.eq) goto loc_8267F870;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-12452
	ctx.r11.s64 = ctx.r11.s64 + -12452;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8267F870:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267F878"))) PPC_WEAK_FUNC(sub_8267F878);
PPC_FUNC_IMPL(__imp__sub_8267F878) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8267F890"))) PPC_WEAK_FUNC(sub_8267F890);
PPC_FUNC_IMPL(__imp__sub_8267F890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,23984
	ctx.r3.s64 = ctx.r11.s64 + 23984;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267F8A0"))) PPC_WEAK_FUNC(sub_8267F8A0);
PPC_FUNC_IMPL(__imp__sub_8267F8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-12728
	ctx.r3.s64 = ctx.r11.s64 + -12728;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267F8B0"))) PPC_WEAK_FUNC(sub_8267F8B0);
PPC_FUNC_IMPL(__imp__sub_8267F8B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82696750
	ctx.lr = 0x8267F8C8;
	sub_82696750(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8267f8d8
	if (!ctx.cr0.eq) goto loc_8267F8D8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8267f90c
	goto loc_8267F90C;
loc_8267F8D8:
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// addi r4,r11,-816
	ctx.r4.s64 = ctx.r11.s64 + -816;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-3384(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3384);
	// bl 0x82688fa8
	ctx.lr = 0x8267F8EC;
	sub_82688FA8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267f908
	if (!ctx.cr6.eq) goto loc_8267F908;
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82696ab8
	ctx.lr = 0x8267F908;
	sub_82696AB8(ctx, base);
loc_8267F908:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8267F90C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267F920"))) PPC_WEAK_FUNC(sub_8267F920);
PPC_FUNC_IMPL(__imp__sub_8267F920) {
	PPC_FUNC_PROLOGUE();
	// stw r4,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267F928"))) PPC_WEAK_FUNC(sub_8267F928);
PPC_FUNC_IMPL(__imp__sub_8267F928) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8267f93c
	if (!ctx.cr6.eq) goto loc_8267F93C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8267F93C:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8267f964
	if (!ctx.cr6.lt) goto loc_8267F964;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8267f968
	if (!ctx.cr6.eq) goto loc_8267F968;
loc_8267F964:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267F968:
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267F980"))) PPC_WEAK_FUNC(sub_8267F980);
PPC_FUNC_IMPL(__imp__sub_8267F980) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,60(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r9,60(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8267F9B0"))) PPC_WEAK_FUNC(sub_8267F9B0);
PPC_FUNC_IMPL(__imp__sub_8267F9B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x8267F9B8;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8267fbe4
	if (!ctx.cr6.eq) goto loc_8267FBE4;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267faec
	if (ctx.cr6.eq) goto loc_8267FAEC;
	// lis r27,-32044
	ctx.r27.s64 = -2100035584;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,-3384(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3384);
	// lfs f29,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f29.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267fa08
	if (ctx.cr6.eq) goto loc_8267FA08;
	// lfs f30,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// b 0x8267fa0c
	goto loc_8267FA0C;
loc_8267FA08:
	// fmr f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f29.f64;
loc_8267FA0C:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r28,r11,-10244
	ctx.r28.s64 = ctx.r11.s64 + -10244;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82689fd0
	ctx.lr = 0x8267FA28;
	sub_82689FD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267fa34
	if (ctx.cr0.eq) goto loc_8267FA34;
	// lfs f30,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
loc_8267FA34:
	// fmuls f13,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r26,4
	ctx.r29.s64 = ctx.r26.s64 + 4;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f0,-13184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13184);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x826d89f8
	ctx.lr = 0x8267FA54;
	sub_826D89F8(ctx, base);
	// b 0x8267fae4
	goto loc_8267FAE4;
loc_8267FA58:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8267fadc
	if (ctx.cr6.eq) goto loc_8267FADC;
	// lwz r11,-3384(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267fa84
	if (ctx.cr6.eq) goto loc_8267FA84;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// b 0x8267fa88
	goto loc_8267FA88;
loc_8267FA84:
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f29.f64;
loc_8267FA88:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82689fd0
	ctx.lr = 0x8267FA90;
	sub_82689FD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267fa9c
	if (ctx.cr0.eq) goto loc_8267FA9C;
	// lfs f31,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
loc_8267FA9C:
	// fadds f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x8267fbfc
	if (ctx.cr6.lt) goto loc_8267FBFC;
loc_8267FADC:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x826d7fa8
	ctx.lr = 0x8267FAE4;
	sub_826D7FA8(ctx, base);
loc_8267FAE4:
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8267fa58
	if (!ctx.cr0.eq) goto loc_8267FA58;
loc_8267FAEC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267fb58
	if (ctx.cr0.eq) goto loc_8267FB58;
loc_8267FB08:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8267c3d0
	ctx.lr = 0x8267FB18;
	sub_8267C3D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8267fb44
	if (!ctx.cr6.eq) goto loc_8267FB44;
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r4,r26,4
	ctx.r4.s64 = ctx.r26.s64 + 4;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267FB3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8267fbfc
	if (!ctx.cr0.eq) goto loc_8267FBFC;
loc_8267FB44:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8267fb08
	if (ctx.cr6.lt) goto loc_8267FB08;
loc_8267FB58:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,9108
	ctx.r11.s64 = ctx.r11.s64 + 9108;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,60(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267fbdc
	if (ctx.cr0.eq) goto loc_8267FBDC;
loc_8267FB8C:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8267c330
	ctx.lr = 0x8267FB9C;
	sub_8267C330(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8267fbc8
	if (!ctx.cr6.eq) goto loc_8267FBC8;
	// lwz r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r4,r26,4
	ctx.r4.s64 = ctx.r26.s64 + 4;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267FBC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8267fbfc
	if (!ctx.cr0.eq) goto loc_8267FBFC;
loc_8267FBC8:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8267fb8c
	if (ctx.cr6.lt) goto loc_8267FB8C;
loc_8267FBDC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_8267FBE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267FBE8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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
loc_8267FBFC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267fbe8
	goto loc_8267FBE8;
}

__attribute__((alias("__imp__sub_8267FC08"))) PPC_WEAK_FUNC(sub_8267FC08);
PPC_FUNC_IMPL(__imp__sub_8267FC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8267FC38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8267fc4c
	if (ctx.cr6.eq) goto loc_8267FC4C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
loc_8267FC4C:
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

__attribute__((alias("__imp__sub_8267FC68"))) PPC_WEAK_FUNC(sub_8267FC68);
PPC_FUNC_IMPL(__imp__sub_8267FC68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82696ba0
	ctx.lr = 0x8267FC80;
	sub_82696BA0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267FCA0"))) PPC_WEAK_FUNC(sub_8267FCA0);
PPC_FUNC_IMPL(__imp__sub_8267FCA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8267FCA8;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r11,5156
	ctx.r11.s64 = ctx.r11.s64 + 5156;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267fd30
	if (ctx.cr0.eq) goto loc_8267FD30;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267fd30
	if (ctx.cr0.eq) goto loc_8267FD30;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8267FD20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8267fd30
	if (!ctx.cr0.eq) goto loc_8267FD30;
loc_8267FD28:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8267ffc4
	goto loc_8267FFC4;
loc_8267FD30:
	// lbz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 80);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne 0x8267fd50
	if (!ctx.cr0.eq) goto loc_8267FD50;
	// bl 0x82696c50
	ctx.lr = 0x8267FD4C;
	sub_82696C50(ctx, base);
	// b 0x8267ffc4
	goto loc_8267FFC4;
loc_8267FD50:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,60(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lwzx r11,r7,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwzx r10,r6,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,3548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f13,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82696c50
	ctx.lr = 0x8267FDCC;
	sub_82696C50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267fd28
	if (ctx.cr0.eq) goto loc_8267FD28;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// lis r28,-32044
	ctx.r28.s64 = -2100035584;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lfs f31,7004(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7004);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f30.f64 = double(temp.f32);
	// beq 0x8267fec8
	if (ctx.cr0.eq) goto loc_8267FEC8;
loc_8267FE00:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8267c3d0
	ctx.lr = 0x8267FE0C;
	sub_8267C3D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8267feb4
	if (!ctx.cr6.eq) goto loc_8267FEB4;
	// lwz r5,76(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267FE30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267feb4
	if (ctx.cr0.eq) goto loc_8267FEB4;
	// lwz r11,-3384(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267fe4c
	if (ctx.cr6.eq) goto loc_8267FE4C;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8267fe50
	goto loc_8267FE50;
loc_8267FE4C:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_8267FE50:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmuls f11,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
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
	// ble cr6,0x8267fe9c
	if (!ctx.cr6.gt) goto loc_8267FE9C;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x8267fea8
	goto loc_8267FEA8;
loc_8267FE9C:
	// fsubs f0,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f13,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_8267FEA8:
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_8267FEB4:
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8267fe00
	if (ctx.cr6.lt) goto loc_8267FE00;
loc_8267FEC8:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// addi r11,r11,9108
	ctx.r11.s64 = ctx.r11.s64 + 9108;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267ffc0
	if (ctx.cr0.eq) goto loc_8267FFC0;
loc_8267FEFC:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8267c330
	ctx.lr = 0x8267FF08;
	sub_8267C330(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8267ffac
	if (!ctx.cr6.eq) goto loc_8267FFAC;
	// lwz r5,72(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267FF2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267ffac
	if (ctx.cr0.eq) goto loc_8267FFAC;
	// lwz r11,-3384(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267ff48
	if (ctx.cr6.eq) goto loc_8267FF48;
	// lfs f11,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// b 0x8267ff4c
	goto loc_8267FF4C;
loc_8267FF48:
	// fmr f11,f30
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f30.f64;
loc_8267FF4C:
	// lfs f13,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f10,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x8267ff94
	if (!ctx.cr6.gt) goto loc_8267FF94;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x8267ffa0
	goto loc_8267FFA0;
loc_8267FF94:
	// fsubs f0,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f13,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_8267FFA0:
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_8267FFAC:
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8267fefc
	if (ctx.cr6.lt) goto loc_8267FEFC;
loc_8267FFC0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8267FFC4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267FFD8"))) PPC_WEAK_FUNC(sub_8267FFD8);
PPC_FUNC_IMPL(__imp__sub_8267FFD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,5184
	ctx.r11.s64 = ctx.r11.s64 + 5184;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82696a20
	ctx.lr = 0x82680004;
	sub_82696A20(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82680020
	if (ctx.cr0.eq) goto loc_82680020;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-11212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82680020;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82680020:
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

__attribute__((alias("__imp__sub_82680040"))) PPC_WEAK_FUNC(sub_82680040);
PPC_FUNC_IMPL(__imp__sub_82680040) {
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
	// bl 0x82696fb0
	ctx.lr = 0x82680058;
	sub_82696FB0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r8,-32150
	ctx.r8.s64 = -2106982400;
	// addi r10,r11,5184
	ctx.r10.s64 = ctx.r11.s64 + 5184;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32150
	ctx.r9.s64 = -2106982400;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r8,r8,21040
	ctx.r8.s64 = ctx.r8.s64 + 21040;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r9,r9,21328
	ctx.r9.s64 = ctx.r9.s64 + 21328;
	// lfs f0,7004(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7004);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stw r7,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// stw r9,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stb r10,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r10.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826800C0"))) PPC_WEAK_FUNC(sub_826800C0);
PPC_FUNC_IMPL(__imp__sub_826800C0) {
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
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x8251c658
	ctx.lr = 0x826800D4;
	sub_8251C658(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826800e4
	if (ctx.cr0.eq) goto loc_826800E4;
	// bl 0x82680040
	ctx.lr = 0x826800E0;
	sub_82680040(ctx, base);
	// b 0x826800e8
	goto loc_826800E8;
loc_826800E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826800E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826800F8"))) PPC_WEAK_FUNC(sub_826800F8);
PPC_FUNC_IMPL(__imp__sub_826800F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x826dfb74
	ctx.lr = 0x82680108;
	__savefpr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f0,f3
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f3.f64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// fadds f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// fcmpu cr6,f30,f13
	ctx.cr6.compare(ctx.f30.f64, ctx.f13.f64);
	// ble cr6,0x8268012c
	if (!ctx.cr6.gt) goto loc_8268012C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82680220
	goto loc_82680220;
loc_8268012C:
	// fadds f13,f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
	// fcmpu cr6,f2,f13
	ctx.cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// ble cr6,0x8268014c
	if (!ctx.cr6.gt) goto loc_8268014C;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
loc_8268013C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,5276(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5276);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82680220
	goto loc_82680220;
loc_8268014C:
	// fadds f13,f30,f2
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 + ctx.f2.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82680160
	if (!ctx.cr6.gt) goto loc_82680160;
	// fmuls f13,f2,f2
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// b 0x8268013c
	goto loc_8268013C;
loc_82680160:
	// fcmpu cr6,f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// ble cr6,0x82680170
	if (!ctx.cr6.gt) goto loc_82680170;
	// fmr f13,f2
	ctx.f13.f64 = ctx.f2.f64;
	// b 0x82680174
	goto loc_82680174;
loc_82680170:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82680174:
	// fcmpu cr6,f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bge cr6,0x82680180
	if (!ctx.cr6.lt) goto loc_82680180;
	// fmr f0,f2
	ctx.f0.f64 = ctx.f2.f64;
loc_82680180:
	// fmuls f26,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f29,f13,f13
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f28,5024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5024);
	ctx.f28.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmuls f0,f30,f28
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f28.f64));
	// fsubs f13,f29,f26
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f26.f64));
	// fmadds f13,f30,f30,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f13.f64));
	// fdivs f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fnmsubs f0,f31,f31,f29
	ctx.f0.f64 = double(float(-(ctx.f31.f64 * ctx.f31.f64 - ctx.f29.f64)));
	// fsqrts f27,f0
	ctx.f27.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f25,f0,f27
	ctx.f25.f64 = double(float(ctx.f0.f64 / ctx.f27.f64));
	// fmuls f1,f25,f31
	ctx.f1.f64 = double(float(ctx.f25.f64 * ctx.f31.f64));
	// bl 0x826e0378
	ctx.lr = 0x826801BC;
	sub_826E0378(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmuls f13,f27,f31
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f31.f64));
	// fsubs f24,f30,f31
	ctx.f24.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lfs f23,-5344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -5344);
	ctx.f23.f64 = double(temp.f32);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fmuls f1,f25,f24
	ctx.f1.f64 = double(float(ctx.f25.f64 * ctx.f24.f64));
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fmsubs f29,f0,f23,f13
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f23.f64 - ctx.f13.f64));
	// bl 0x826e0378
	ctx.lr = 0x826801E8;
	sub_826E0378(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f24,f27
	ctx.f13.f64 = double(float(ctx.f24.f64 * ctx.f27.f64));
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fmuls f0,f26,f0
	ctx.f0.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// fmsubs f0,f0,f23,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f23.f64 - ctx.f13.f64));
	// blt cr6,0x82680210
	if (ctx.cr6.lt) goto loc_82680210;
	// fadds f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// b 0x82680220
	goto loc_82680220;
loc_82680210:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f13,5276(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5276);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f26,f13,f29
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f13.f64 + ctx.f29.f64));
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_82680220:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x826dfbc0
	ctx.lr = 0x8268022C;
	__restfpr_23(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82680238"))) PPC_WEAK_FUNC(sub_82680238);
PPC_FUNC_IMPL(__imp__sub_82680238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x82680240;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,-3384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82680274
	if (ctx.cr6.eq) goto loc_82680274;
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8268027c
	goto loc_8268027C;
loc_82680274:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
loc_8268027C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lfs f0,13952(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13952);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x8269c700
	ctx.lr = 0x82680298;
	sub_8269C700(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x826802a8
	if (!ctx.cr6.eq) goto loc_826802A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8268036c
	goto loc_8268036C;
loc_826802A8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lfs f30,-16480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16480);
	ctx.f30.f64 = double(temp.f32);
	// ble cr6,0x82680368
	if (!ctx.cr6.gt) goto loc_82680368;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_826802C0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x826802f4
	if (!ctx.cr6.lt) goto loc_826802F4;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x826802f4
	if (ctx.cr6.eq) goto loc_826802F4;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_826802F4:
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f31,f12,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bge cr6,0x8268035c
	if (!ctx.cr6.lt) goto loc_8268035C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82680348;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8268035c
	if (!ctx.cr6.eq) goto loc_8268035C;
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
loc_8268035C:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x826802c0
	if (!ctx.cr0.eq) goto loc_826802C0;
loc_82680368:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_8268036C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82680380"))) PPC_WEAK_FUNC(sub_82680380);
PPC_FUNC_IMPL(__imp__sub_82680380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f0,f0
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f1,f12,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f5,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f7,f12,f12
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f4,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f6,f13,f13
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f0,f5,f11
	ctx.f0.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// lfs f3,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f13,f4,f10
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// fsubs f12,f3,f9
	ctx.f12.f64 = double(float(ctx.f3.f64 - ctx.f9.f64));
	// fneg f5,f2
	ctx.f5.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fneg f4,f1
	ctx.f4.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fneg f3,f31
	ctx.f3.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// fadds f2,f8,f7
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// fadds f7,f6,f7
	ctx.f7.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// fadds f8,f8,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// fmuls f6,f5,f13
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f1,f4,f12
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmadds f7,f7,f0,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmadds f6,f2,f13,f1
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fmadds f8,f8,f12,f4
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fmadds f13,f3,f12,f7
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fmadds f12,f5,f0,f6
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmadds f0,f3,f0,f8
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82680428"))) PPC_WEAK_FUNC(sub_82680428);
PPC_FUNC_IMPL(__imp__sub_82680428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f6,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fsubs f6,f9,f6
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// lfs f10,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fsubs f5,f8,f10
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsubs f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fmuls f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmadds f6,f5,f13,f6
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmadds f11,f11,f0,f6
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// lfs f12,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x826804f8
	if (ctx.cr6.lt) goto loc_826804F8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f12,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x826804f8
	if (ctx.cr6.gt) goto loc_826804F8;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f6,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f5,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fsubs f10,f6,f12
	ctx.f10.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// fsubs f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f8,f1,f1
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// fsubs f10,f5,f11
	ctx.f10.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// fsubs f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fsubs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_826804F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82680500"))) PPC_WEAK_FUNC(sub_82680500);
PPC_FUNC_IMPL(__imp__sub_82680500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f10,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fsubs f10,f7,f9
	ctx.f10.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// fsubs f9,f6,f9
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f9.f64));
	// fmuls f8,f8,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmadds f0,f0,f11,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fmadds f0,f9,f10,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f0.f64));
	// lfs f9,3544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x82680564
	if (!ctx.cr6.lt) goto loc_82680564;
loc_8268055C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82680564:
	// fmuls f8,f10,f10
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f8,f12,f12,f8
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmadds f8,f11,f11,f8
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fsqrts f8,f8
	ctx.f8.f64 = double(float(sqrt(ctx.f8.f64)));
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// bne cr6,0x826805b8
	if (!ctx.cr6.eq) goto loc_826805B8;
	// stfs f13,0(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// b 0x8268060c
	goto loc_8268060C;
loc_826805B8:
	// fmuls f9,f8,f8
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bgt cr6,0x8268055c
	if (ctx.cr6.gt) goto loc_8268055C;
	// fdivs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fadds f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fadds f12,f8,f11
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f12,8(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// fadds f13,f10,f9
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
loc_8268060C:
	// fmuls f0,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82680628"))) PPC_WEAK_FUNC(sub_82680628);
PPC_FUNC_IMPL(__imp__sub_82680628) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f5,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f2,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fsubs f11,f10,f13
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fsubs f11,f9,f12
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fsubs f11,f8,f0
	ctx.f11.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f11,f7,f13
	ctx.f11.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f11,f6,f12
	ctx.f11.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f11,f5,f0
	ctx.f11.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// lfs f4,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// lfs f1,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f11,f4,f13
	ctx.f11.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f0,f1,f13
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// lfs f3,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f31,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f11,f3,f12
	ctx.f11.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsubs f0,f31,f12
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x8267f378
	ctx.lr = 0x826806F0;
	sub_8267F378(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8267f378
	ctx.lr = 0x82680700;
	sub_8267F378(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x8267f378
	ctx.lr = 0x82680710;
	sub_8267F378(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x8267f378
	ctx.lr = 0x82680720;
	sub_8267F378(ctx, base);
	// fadds f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82680744
	if (ctx.cr6.eq) goto loc_82680744;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82680744:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_82680760"))) PPC_WEAK_FUNC(sub_82680760);
PPC_FUNC_IMPL(__imp__sub_82680760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82680768;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826dfb6c
	ctx.lr = 0x82680770;
	__savefpr_21(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// fmr f21,f1
	ctx.fpscr.disableFlushMode();
	ctx.f21.f64 = ctx.f1.f64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// fmr f22,f2
	ctx.f22.f64 = ctx.f2.f64;
	// addi r4,r11,-9968
	ctx.r4.s64 = ctx.r11.s64 + -9968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82689fd0
	ctx.lr = 0x82680794;
	sub_82689FD0(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,-10244
	ctx.r4.s64 = ctx.r11.s64 + -10244;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82689fd0
	ctx.lr = 0x826807A8;
	sub_82689FD0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x826807cc
	if (!ctx.cr6.eq) goto loc_826807CC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826807c4
	if (!ctx.cr6.eq) goto loc_826807C4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f30,2844(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2844);
	ctx.f30.f64 = double(temp.f32);
	// b 0x826807f0
	goto loc_826807F0;
loc_826807C4:
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// b 0x826807d0
	goto loc_826807D0;
loc_826807CC:
	// lfs f13,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
loc_826807D0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,3548
	ctx.r11.s64 = ctx.r11.s64 + 3548;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bne cr6,0x82680804
	if (!ctx.cr6.eq) goto loc_82680804;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x826807fc
	if (!ctx.cr6.eq) goto loc_826807FC;
loc_826807F0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,-13180(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13180);
	ctx.f31.f64 = double(temp.f32);
	// b 0x8268080c
	goto loc_8268080C;
loc_826807FC:
	// lfs f13,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82680808
	goto loc_82680808;
loc_82680804:
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
loc_82680808:
	// fmuls f31,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_8268080C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r30,r31,72
	ctx.r30.s64 = ctx.r31.s64 + 72;
	// lfs f29,-14636(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14636);
	ctx.f29.f64 = double(temp.f32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f0,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82692178
	ctx.lr = 0x82680840;
	sub_82692178(ctx, base);
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f0,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82692178
	ctx.lr = 0x82680868;
	sub_82692178(ctx, base);
	// lfs f3,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f3.f64 = double(temp.f32);
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// fmuls f0,f3,f31
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// lfs f2,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f2,f31
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// fmuls f12,f1,f30
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// lfs f24,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f24.f64 = double(temp.f32);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f24,f31
	ctx.f7.f64 = double(float(ctx.f24.f64 * ctx.f31.f64));
	// lfs f4,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f11,f31
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f28,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f25,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f8,f25,f30
	ctx.f8.f64 = double(float(ctx.f25.f64 * ctx.f30.f64));
	// lfs f23,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f23.f64 = double(temp.f32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f6,f23,f30
	ctx.f6.f64 = double(float(ctx.f23.f64 * ctx.f30.f64));
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// lfs f29,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f13,f28,f13
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f13.f64));
	// lfs f28,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f4,f10,f31
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// lfs f27,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f26.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f12,f28,f7
	ctx.f12.f64 = double(float(ctx.f28.f64 - ctx.f7.f64));
	// lfs f28,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// fmuls f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fsubs f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// fsubs f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fsubs f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// fsubs f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// fsubs f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fsubs f13,f27,f13
	ctx.f13.f64 = double(float(ctx.f27.f64 - ctx.f13.f64));
	// fmuls f8,f0,f0
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fsubs f12,f26,f12
	ctx.f12.f64 = double(float(ctx.f26.f64 - ctx.f12.f64));
	// fmadds f8,f13,f13,f8
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f8,f12,f12,f8
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fsqrts f8,f8
	ctx.f8.f64 = double(float(sqrt(ctx.f8.f64)));
	// fcmpu cr6,f8,f28
	ctx.cr6.compare(ctx.f8.f64, ctx.f28.f64);
	// beq cr6,0x82680f08
	if (ctx.cr6.eq) goto loc_82680F08;
	// fmuls f8,f24,f12
	ctx.f8.f64 = double(float(ctx.f24.f64 * ctx.f12.f64));
	// fmuls f7,f23,f12
	ctx.f7.f64 = double(float(ctx.f23.f64 * ctx.f12.f64));
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmadds f9,f3,f0,f8
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f8,f1,f0,f7
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fmadds f11,f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f0,f2,f13,f9
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f12,f25,f13,f8
	ctx.f12.f64 = double(float(ctx.f25.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f13,f10,f13,f11
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// blt cr6,0x82680980
	if (ctx.cr6.lt) goto loc_82680980;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,5024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5024);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f31,f11
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f11.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bgt cr6,0x82680980
	if (ctx.cr6.gt) goto loc_82680980;
	// fcmpu cr6,f12,f28
	ctx.cr6.compare(ctx.f12.f64, ctx.f28.f64);
	// blt cr6,0x82680980
	if (ctx.cr6.lt) goto loc_82680980;
	// fmuls f0,f30,f11
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f11.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x82680980
	if (ctx.cr6.gt) goto loc_82680980;
	// fcmpu cr6,f13,f28
	ctx.cr6.compare(ctx.f13.f64, ctx.f28.f64);
	// blt cr6,0x82680980
	if (ctx.cr6.lt) goto loc_82680980;
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// ble cr6,0x82680f08
	if (!ctx.cr6.gt) goto loc_82680F08;
loc_82680980:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stfs f28,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f28,84(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f28,88(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8267efb0
	ctx.lr = 0x82680998;
	sub_8267EFB0(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f22
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f22.f64));
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f22
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f22.f64));
	// fmuls f12,f12,f22
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f22.f64));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fadds f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f0,f27,f13
	ctx.f0.f64 = double(float(ctx.f27.f64 + ctx.f13.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f0,f26,f12
	ctx.f0.f64 = double(float(ctx.f26.f64 + ctx.f12.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82680500
	ctx.lr = 0x826809E0;
	sub_82680500(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826809f0
	if (!ctx.cr0.eq) goto loc_826809F0;
loc_826809E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82680f0c
	goto loc_82680F0C;
loc_826809F0:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// ble cr6,0x82680a00
	if (!ctx.cr6.gt) goto loc_82680A00;
	// fmr f27,f30
	ctx.f27.f64 = ctx.f30.f64;
	// b 0x82680a04
	goto loc_82680A04;
loc_82680A00:
	// fmr f27,f31
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f31.f64;
loc_82680A04:
	// fmr f1,f21
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f21.f64;
	// bl 0x82692148
	ctx.lr = 0x82680A0C;
	sub_82692148(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// fmr f1,f21
	ctx.f1.f64 = ctx.f21.f64;
	// bl 0x82692118
	ctx.lr = 0x82680A18;
	sub_82692118(ctx, base);
	// lfs f25,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f25.f64 = double(temp.f32);
	// fdivs f8,f29,f1
	ctx.f8.f64 = double(float(ctx.f29.f64 / ctx.f1.f64));
	// lfs f0,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f25.f64));
	// lfs f24,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f24.f64 = double(temp.f32);
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f24
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f24.f64));
	// lfs f23,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f23.f64 = double(temp.f32);
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f23
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f23.f64));
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f25
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f25.f64));
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f23
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f23.f64));
	// fmuls f9,f0,f0
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f24.f64));
	// fmadds f13,f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fmuls f29,f13,f8
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmuls f13,f11,f11
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fadds f13,f29,f27
	ctx.f13.f64 = double(float(ctx.f29.f64 + ctx.f27.f64));
	// fmadds f0,f10,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x826809e8
	if (ctx.cr6.gt) goto loc_826809E8;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r1,216
	ctx.r11.s64 = ctx.r1.s64 + 216;
loc_82680A90:
	// stfs f28,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f28,-4(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f28,0(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bge 0x82680a90
	if (!ctx.cr0.lt) goto loc_82680A90;
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// lfs f5,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f5
	ctx.f2.f64 = ctx.f5.f64;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f11,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// lfs f9,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f30
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// lfs f3,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f9,f9,f30
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// fmr f26,f3
	ctx.f26.f64 = ctx.f3.f64;
	// lfs f4,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmr f30,f3
	ctx.f30.f64 = ctx.f3.f64;
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// lfs f6,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f8,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f3,f3,f12
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// lfs f7,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f6,f31
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fadds f2,f0,f2
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// fmr f27,f4
	ctx.f27.f64 = ctx.f4.f64;
	// fmuls f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmr f28,f5
	ctx.f28.f64 = ctx.f5.f64;
	// fmuls f7,f7,f31
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fadds f30,f30,f12
	ctx.f30.f64 = double(float(ctx.f30.f64 + ctx.f12.f64));
	// fsubs f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// fadds f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// fsubs f3,f3,f9
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f9.f64));
	// fsubs f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// fsubs f2,f2,f11
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f11.f64));
	// fadds f28,f28,f0
	ctx.f28.f64 = double(float(ctx.f28.f64 + ctx.f0.f64));
	// fsubs f30,f30,f9
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f9.f64));
	// fsubs f5,f5,f11
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// fsubs f1,f1,f10
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f10.f64));
	// fadds f3,f3,f6
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// stfs f3,216(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// fadds f3,f27,f13
	ctx.f3.f64 = double(float(ctx.f27.f64 + ctx.f13.f64));
	// fadds f2,f2,f8
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// stfs f2,220(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// fadds f2,f26,f12
	ctx.f2.f64 = double(float(ctx.f26.f64 + ctx.f12.f64));
	// fsubs f4,f4,f10
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// fadds f30,f30,f6
	ctx.f30.f64 = double(float(ctx.f30.f64 + ctx.f6.f64));
	// stfs f30,228(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// fmr f30,f26
	ctx.f30.f64 = ctx.f26.f64;
	// fadds f1,f1,f7
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f7.f64));
	// stfs f1,224(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// fadds f1,f28,f11
	ctx.f1.f64 = double(float(ctx.f28.f64 + ctx.f11.f64));
	// lfs f28,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// fadds f3,f3,f10
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f10.f64));
	// fadds f5,f5,f8
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// stfs f5,208(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fadds f2,f2,f9
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f9.f64));
	// lfs f5,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f4,f7
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// stfs f4,212(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// lfs f4,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f31
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fmuls f4,f4,f31
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// fsubs f30,f30,f12
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f12.f64));
	// fadds f1,f1,f8
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f8.f64));
	// stfs f1,232(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// fadds f7,f3,f7
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// stfs f7,236(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// lfs f7,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmr f3,f26
	ctx.f3.f64 = ctx.f26.f64;
	// fadds f6,f2,f6
	ctx.f6.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// stfs f6,240(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// fmr f6,f27
	ctx.f6.f64 = ctx.f27.f64;
	// lfs f2,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// fsubs f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// fsubs f3,f3,f12
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// fsubs f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fadds f7,f7,f11
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// fsubs f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fsubs f2,f2,f11
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f11.f64));
	// fadds f27,f27,f13
	ctx.f27.f64 = double(float(ctx.f27.f64 + ctx.f13.f64));
	// fadds f3,f3,f9
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// fsubs f1,f1,f10
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f10.f64));
	// fadds f28,f0,f28
	ctx.f28.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
	// fadds f26,f26,f12
	ctx.f26.f64 = double(float(ctx.f26.f64 + ctx.f12.f64));
	// fadds f6,f6,f10
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// fsubs f30,f30,f9
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f9.f64));
	// fadds f7,f7,f8
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f7,244(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// lfs f7,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f2,f2,f8
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f8.f64));
	// stfs f2,256(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// fsubs f2,f27,f10
	ctx.f2.f64 = double(float(ctx.f27.f64 - ctx.f10.f64));
	// fadds f3,f3,f4
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// stfs f3,252(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// fsubs f1,f1,f5
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f5.f64));
	// stfs f1,260(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// fsubs f3,f28,f11
	ctx.f3.f64 = double(float(ctx.f28.f64 - ctx.f11.f64));
	// fsubs f1,f26,f9
	ctx.f1.f64 = double(float(ctx.f26.f64 - ctx.f9.f64));
	// fadds f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// stfs f6,248(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// fsubs f30,f30,f4
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f4.f64));
	// lfs f6,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f7,f31
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// stfs f30,264(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// fmuls f6,f6,f31
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// li r30,0
	ctx.r30.s64 = 0;
	// fmuls f31,f29,f29
	ctx.f31.f64 = double(float(ctx.f29.f64 * ctx.f29.f64));
	// fsubs f5,f2,f5
	ctx.f5.f64 = double(float(ctx.f2.f64 - ctx.f5.f64));
	// stfs f5,272(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// lfs f5,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f2,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fadds f5,f0,f5
	ctx.f5.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// fsubs f3,f3,f8
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f8.f64));
	// stfs f3,268(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// fsubs f4,f1,f4
	ctx.f4.f64 = double(float(ctx.f1.f64 - ctx.f4.f64));
	// stfs f4,276(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// lfs f4,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// lfs f3,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fadds f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f3,f3,f12
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fsubs f12,f2,f12
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f12.f64));
	// fadds f5,f5,f11
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fadds f4,f4,f10
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// fadds f3,f3,f9
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// fsubs f11,f5,f8
	ctx.f11.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
	// stfs f11,280(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// fsubs f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// stfs f0,292(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// fsubs f10,f4,f7
	ctx.f10.f64 = double(float(ctx.f4.f64 - ctx.f7.f64));
	// stfs f10,284(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// fsubs f9,f3,f6
	ctx.f9.f64 = double(float(ctx.f3.f64 - ctx.f6.f64));
	// stfs f9,288(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// fsubs f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// stfs f13,296(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// fsubs f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// stfs f12,300(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
loc_82680CF0:
	// mulli r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 * 12;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82680380
	ctx.lr = 0x82680D0C;
	sub_82680380(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f0,f25,f0
	ctx.f0.f64 = double(float(ctx.f25.f64 - ctx.f0.f64));
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsubs f13,f24,f13
	ctx.f13.f64 = double(float(ctx.f24.f64 - ctx.f13.f64));
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fsubs f12,f23,f12
	ctx.f12.f64 = double(float(ctx.f23.f64 - ctx.f12.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82680f08
	if (ctx.cr6.lt) goto loc_82680F08;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r30,8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8, ctx.xer);
	// blt cr6,0x82680cf0
	if (ctx.cr6.lt) goto loc_82680CF0;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r11,-11668
	ctx.r30.s64 = ctx.r11.s64 + -11668;
loc_82680D60:
	// rlwinm r31,r28,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// lbzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82680380
	ctx.lr = 0x82680D84;
	sub_82680380(ctx, base);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbzx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x82680380
	ctx.lr = 0x82680DC4;
	sub_82680380(ctx, base);
	// addi r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 2;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbzx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x82680380
	ctx.lr = 0x82680E04;
	sub_82680380(ctx, base);
	// addi r10,r30,3
	ctx.r10.s64 = ctx.r30.s64 + 3;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbzx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x82680380
	ctx.lr = 0x82680E44;
	sub_82680380(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82680628
	ctx.lr = 0x82680E78;
	sub_82680628(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82680f08
	if (ctx.cr6.eq) goto loc_82680F08;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82680428
	ctx.lr = 0x82680E98;
	sub_82680428(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82680f08
	if (!ctx.cr0.eq) goto loc_82680F08;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82680428
	ctx.lr = 0x82680EB4;
	sub_82680428(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82680f08
	if (!ctx.cr0.eq) goto loc_82680F08;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82680428
	ctx.lr = 0x82680ED0;
	sub_82680428(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82680f08
	if (!ctx.cr0.eq) goto loc_82680F08;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82680428
	ctx.lr = 0x82680EEC;
	sub_82680428(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82680f08
	if (!ctx.cr0.eq) goto loc_82680F08;
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r28,6
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 6, ctx.xer);
	// blt cr6,0x82680d60
	if (ctx.cr6.lt) goto loc_82680D60;
	// b 0x826809e8
	goto loc_826809E8;
loc_82680F08:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82680F0C:
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826dfbb8
	ctx.lr = 0x82680F18;
	__restfpr_21(ctx, base);
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82680F20"))) PPC_WEAK_FUNC(sub_82680F20);
PPC_FUNC_IMPL(__imp__sub_82680F20) {
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
	// bl 0x82696fb0
	ctx.lr = 0x82680F38;
	sub_82696FB0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r10,r11,5288
	ctx.r10.s64 = ctx.r11.s64 + 5288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-16480(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -16480);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stb r11,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r11.u8);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82680F78"))) PPC_WEAK_FUNC(sub_82680F78);
PPC_FUNC_IMPL(__imp__sub_82680F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-12452
	ctx.r3.s64 = ctx.r11.s64 + -12452;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82680F88"))) PPC_WEAK_FUNC(sub_82680F88);
PPC_FUNC_IMPL(__imp__sub_82680F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82696750
	ctx.lr = 0x82680FA0;
	sub_82696750(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82680fb0
	if (!ctx.cr0.eq) goto loc_82680FB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82680fcc
	goto loc_82680FCC;
loc_82680FB0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82680fc8
	if (!ctx.cr6.eq) goto loc_82680FC8;
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82696ab8
	ctx.lr = 0x82680FC8;
	sub_82696AB8(ctx, base);
loc_82680FC8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82680FCC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82680FE0"))) PPC_WEAK_FUNC(sub_82680FE0);
PPC_FUNC_IMPL(__imp__sub_82680FE0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8268103c
	if (!ctx.cr6.eq) goto loc_8268103C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// bl 0x8268f898
	ctx.lr = 0x82681020;
	sub_8268F898(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,128(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x8268ee10
	ctx.lr = 0x82681034;
	sub_8268EE10(ctx, base);
loc_82681034:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826810c0
	goto loc_826810C0;
loc_8268103C:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8268105C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x826810bc
	if (!ctx.cr6.eq) goto loc_826810BC;
	// lfs f0,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82681090
	if (ctx.cr6.gt) goto loc_82681090;
	// lfs f12,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x82681090
	if (ctx.cr6.gt) goto loc_82681090;
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x826810b4
	goto loc_826810B4;
loc_82681090:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x826810b0
	if (!ctx.cr6.lt) goto loc_826810B0;
	// lfs f0,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x826810b0
	if (ctx.cr6.gt) goto loc_826810B0;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stfs f13,64(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// b 0x826810b4
	goto loc_826810B4;
loc_826810B0:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_826810B4:
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// b 0x82681034
	goto loc_82681034;
loc_826810BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826810C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826810D8"))) PPC_WEAK_FUNC(sub_826810D8);
PPC_FUNC_IMPL(__imp__sub_826810D8) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,5156
	ctx.r10.s64 = ctx.r10.s64 + 5156;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268114c
	if (ctx.cr0.eq) goto loc_8268114C;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268114c
	if (ctx.cr0.eq) goto loc_8268114C;
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,32(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82681148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82681168
	goto loc_82681168;
loc_8268114C:
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8269a168
	ctx.lr = 0x82681168;
	sub_8269A168(ctx, base);
loc_82681168:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82681178"))) PPC_WEAK_FUNC(sub_82681178);
PPC_FUNC_IMPL(__imp__sub_82681178) {
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
	// bl 0x82696ba0
	ctx.lr = 0x82681190;
	sub_82696BA0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,-16480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16480);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826811B8"))) PPC_WEAK_FUNC(sub_826811B8);
PPC_FUNC_IMPL(__imp__sub_826811B8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x826811cc
	if (!ctx.cr0.eq) goto loc_826811CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_826811CC:
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826811D8"))) PPC_WEAK_FUNC(sub_826811D8);
PPC_FUNC_IMPL(__imp__sub_826811D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x826811E0;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-32044
	ctx.r27.s64 = -2100035584;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r10,-3384(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3384);
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8268121c
	if (ctx.cr6.eq) goto loc_8268121C;
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82681220
	goto loc_82681220;
loc_8268121C:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64;
loc_82681220:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,22004(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22004);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// fmuls f29,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmr f30,f29
	ctx.f30.f64 = ctx.f29.f64;
	// beq 0x826812c8
	if (ctx.cr0.eq) goto loc_826812C8;
loc_8268125C:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8267c3d0
	ctx.lr = 0x82681268;
	sub_8267C3D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x826812b0
	if (!ctx.cr6.eq) goto loc_826812B0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 + 48;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82680500
	ctx.lr = 0x82681290;
	sub_82680500(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826812b0
	if (ctx.cr0.eq) goto loc_826812B0;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x826812b0
	if (!ctx.cr6.lt) goto loc_826812B0;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x826812b0
	if (!ctx.cr6.lt) goto loc_826812B0;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_826812B0:
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268125c
	if (ctx.cr6.lt) goto loc_8268125C;
	// lwz r10,-3384(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3384);
loc_826812C8:
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8268135c
	if (ctx.cr0.eq) goto loc_8268135C;
loc_826812E8:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8267d348
	ctx.lr = 0x826812F8;
	sub_8267D348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82681344
	if (!ctx.cr6.eq) goto loc_82681344;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82680500
	ctx.lr = 0x8268131C;
	sub_82680500(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82681344
	if (ctx.cr0.eq) goto loc_82681344;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82681344
	if (!ctx.cr6.lt) goto loc_82681344;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82681344
	if (!ctx.cr6.lt) goto loc_82681344;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_82681344:
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826812e8
	if (ctx.cr6.lt) goto loc_826812E8;
	// lwz r10,-3384(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3384);
loc_8268135C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82681368
	if (ctx.cr6.eq) goto loc_82681368;
	// lfs f31,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
loc_82681368:
	// fdivs f13,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 / ctx.f31.f64));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-72(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

