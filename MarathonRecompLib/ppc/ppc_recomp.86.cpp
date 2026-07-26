#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8263D7B0"))) PPC_WEAK_FUNC(sub_8263D7B0);
PPC_FUNC_IMPL(__imp__sub_8263D7B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8263D7B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82649d38
	ctx.lr = 0x8263D7D0;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// addi r9,r31,60
	ctx.r9.s64 = ctx.r31.s64 + 60;
	// addi r10,r11,-6576
	ctx.r10.s64 = ctx.r11.s64 + -6576;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// lbz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// stb r10,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// lbz r10,3(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// stb r10,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263D818"))) PPC_WEAK_FUNC(sub_8263D818);
PPC_FUNC_IMPL(__imp__sub_8263D818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r5,r11,60
	ctx.r5.s64 = ctx.r11.s64 + 60;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lfs f1,14088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f1.f64 = double(temp.f32);
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

__attribute__((alias("__imp__sub_8263D848"))) PPC_WEAK_FUNC(sub_8263D848);
PPC_FUNC_IMPL(__imp__sub_8263D848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8263D86C;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// addi r11,r11,-6556
	ctx.r11.s64 = ctx.r11.s64 + -6556;
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

__attribute__((alias("__imp__sub_8263D898"))) PPC_WEAK_FUNC(sub_8263D898);
PPC_FUNC_IMPL(__imp__sub_8263D898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8263D8BC;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r9,r31,56
	ctx.r9.s64 = ctx.r31.s64 + 56;
	// addi r10,r11,-6536
	ctx.r10.s64 = ctx.r11.s64 + -6536;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263D910"))) PPC_WEAK_FUNC(sub_8263D910);
PPC_FUNC_IMPL(__imp__sub_8263D910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82649d38
	ctx.lr = 0x8263D92C;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-6516
	ctx.r11.s64 = ctx.r11.s64 + -6516;
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

__attribute__((alias("__imp__sub_8263D950"))) PPC_WEAK_FUNC(sub_8263D950);
PPC_FUNC_IMPL(__imp__sub_8263D950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8263D974;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r30.u8);
	// addi r11,r11,-6496
	ctx.r11.s64 = ctx.r11.s64 + -6496;
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

__attribute__((alias("__imp__sub_8263D9A0"))) PPC_WEAK_FUNC(sub_8263D9A0);
PPC_FUNC_IMPL(__imp__sub_8263D9A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8263D9C4;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r9,r31,56
	ctx.r9.s64 = ctx.r31.s64 + 56;
	// addi r10,r11,-6476
	ctx.r10.s64 = ctx.r11.s64 + -6476;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263DA18"))) PPC_WEAK_FUNC(sub_8263DA18);
PPC_FUNC_IMPL(__imp__sub_8263DA18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82649d38
	ctx.lr = 0x8263DA34;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-6456
	ctx.r11.s64 = ctx.r11.s64 + -6456;
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

__attribute__((alias("__imp__sub_8263DA58"))) PPC_WEAK_FUNC(sub_8263DA58);
PPC_FUNC_IMPL(__imp__sub_8263DA58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8263DA7C;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// addi r11,r11,-6436
	ctx.r11.s64 = ctx.r11.s64 + -6436;
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

__attribute__((alias("__imp__sub_8263DAA8"))) PPC_WEAK_FUNC(sub_8263DAA8);
PPC_FUNC_IMPL(__imp__sub_8263DAA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8263DACC;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r30.u8);
	// addi r11,r11,-6416
	ctx.r11.s64 = ctx.r11.s64 + -6416;
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

__attribute__((alias("__imp__sub_8263DAF8"))) PPC_WEAK_FUNC(sub_8263DAF8);
PPC_FUNC_IMPL(__imp__sub_8263DAF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8263DB1C;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// addi r11,r11,-6396
	ctx.r11.s64 = ctx.r11.s64 + -6396;
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

__attribute__((alias("__imp__sub_8263DB48"))) PPC_WEAK_FUNC(sub_8263DB48);
PPC_FUNC_IMPL(__imp__sub_8263DB48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8263DB6C;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r30.u8);
	// addi r11,r11,-6376
	ctx.r11.s64 = ctx.r11.s64 + -6376;
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

__attribute__((alias("__imp__sub_8263DB98"))) PPC_WEAK_FUNC(sub_8263DB98);
PPC_FUNC_IMPL(__imp__sub_8263DB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8263DBBC;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// addi r11,r11,-6356
	ctx.r11.s64 = ctx.r11.s64 + -6356;
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

__attribute__((alias("__imp__sub_8263DBE8"))) PPC_WEAK_FUNC(sub_8263DBE8);
PPC_FUNC_IMPL(__imp__sub_8263DBE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8263DC0C;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r30.u8);
	// addi r11,r11,-6336
	ctx.r11.s64 = ctx.r11.s64 + -6336;
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

__attribute__((alias("__imp__sub_8263DC38"))) PPC_WEAK_FUNC(sub_8263DC38);
PPC_FUNC_IMPL(__imp__sub_8263DC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8263DC40;
	__savegprlr_29(ctx, base);
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
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82649d38
	ctx.lr = 0x8263DC58;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stb r30,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r29,57(r31)
	PPC_STORE_U8(ctx.r31.u32 + 57, ctx.r29.u8);
	// addi r11,r11,-6316
	ctx.r11.s64 = ctx.r11.s64 + -6316;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263DC78"))) PPC_WEAK_FUNC(sub_8263DC78);
PPC_FUNC_IMPL(__imp__sub_8263DC78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8263DC80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// bl 0x82649d38
	ctx.lr = 0x8263DC9C;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// addi r11,r11,-6296
	ctx.r11.s64 = ctx.r11.s64 + -6296;
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263DCC0"))) PPC_WEAK_FUNC(sub_8263DCC0);
PPC_FUNC_IMPL(__imp__sub_8263DCC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8263DCC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// bl 0x82649d38
	ctx.lr = 0x8263DCE4;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// addi r11,r11,-6276
	ctx.r11.s64 = ctx.r11.s64 + -6276;
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263DD08"))) PPC_WEAK_FUNC(sub_8263DD08);
PPC_FUNC_IMPL(__imp__sub_8263DD08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8263DD10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// bl 0x82649d38
	ctx.lr = 0x8263DD2C;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// addi r11,r11,-6256
	ctx.r11.s64 = ctx.r11.s64 + -6256;
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263DD50"))) PPC_WEAK_FUNC(sub_8263DD50);
PPC_FUNC_IMPL(__imp__sub_8263DD50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8263DD74;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// addi r11,r11,-6236
	ctx.r11.s64 = ctx.r11.s64 + -6236;
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

__attribute__((alias("__imp__sub_8263DDA0"))) PPC_WEAK_FUNC(sub_8263DDA0);
PPC_FUNC_IMPL(__imp__sub_8263DDA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82649d38
	ctx.lr = 0x8263DDBC;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-6216
	ctx.r11.s64 = ctx.r11.s64 + -6216;
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

__attribute__((alias("__imp__sub_8263DDE0"))) PPC_WEAK_FUNC(sub_8263DDE0);
PPC_FUNC_IMPL(__imp__sub_8263DDE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// b 0x8259a6d0
	sub_8259A6D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263DDE8"))) PPC_WEAK_FUNC(sub_8263DDE8);
PPC_FUNC_IMPL(__imp__sub_8263DDE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82649d38
	ctx.lr = 0x8263DE04;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-6196
	ctx.r11.s64 = ctx.r11.s64 + -6196;
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

__attribute__((alias("__imp__sub_8263DE28"))) PPC_WEAK_FUNC(sub_8263DE28);
PPC_FUNC_IMPL(__imp__sub_8263DE28) {
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
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263DE48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x825f6618
	ctx.lr = 0x8263DE4C;
	sub_825F6618(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263DE60"))) PPC_WEAK_FUNC(sub_8263DE60);
PPC_FUNC_IMPL(__imp__sub_8263DE60) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82649d38
	ctx.lr = 0x8263DE84;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-6176
	ctx.r11.s64 = ctx.r11.s64 + -6176;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263DED0"))) PPC_WEAK_FUNC(sub_8263DED0);
PPC_FUNC_IMPL(__imp__sub_8263DED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8263DEF4;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r30.u8);
	// addi r11,r11,-6156
	ctx.r11.s64 = ctx.r11.s64 + -6156;
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

__attribute__((alias("__imp__sub_8263DF20"))) PPC_WEAK_FUNC(sub_8263DF20);
PPC_FUNC_IMPL(__imp__sub_8263DF20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8263DF28;
	__savegprlr_29(ctx, base);
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
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82649d38
	ctx.lr = 0x8263DF40;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// addi r11,r11,-6136
	ctx.r11.s64 = ctx.r11.s64 + -6136;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263DF60"))) PPC_WEAK_FUNC(sub_8263DF60);
PPC_FUNC_IMPL(__imp__sub_8263DF60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r11,-16776
	ctx.r6.s64 = ctx.r11.s64 + -16776;
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-16820
	ctx.r5.s64 = ctx.r11.s64 + -16820;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x826df418
	ctx.lr = 0x8263DF94;
	sub_826DF418(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,340(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// bl 0x82547278
	ctx.lr = 0x8263DFA8;
	sub_82547278(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263DFC0"))) PPC_WEAK_FUNC(sub_8263DFC0);
PPC_FUNC_IMPL(__imp__sub_8263DFC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r31,36(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259b088
	ctx.lr = 0x8263DFE4;
	sub_8259B088(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259afe0
	ctx.lr = 0x8263DFF0;
	sub_8259AFE0(ctx, base);
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259afc0
	ctx.lr = 0x8263E004;
	sub_8259AFC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263E018"))) PPC_WEAK_FUNC(sub_8263E018);
PPC_FUNC_IMPL(__imp__sub_8263E018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8263E020;
	__savegprlr_29(ctx, base);
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
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82649d38
	ctx.lr = 0x8263E038;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-6116
	ctx.r11.s64 = ctx.r11.s64 + -6116;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// beq cr6,0x8263e058
	if (ctx.cr6.eq) goto loc_8263E058;
	// bl 0x82659610
	ctx.lr = 0x8263E058;
	sub_82659610(ctx, base);
loc_8263E058:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stb r29,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r29.u8);
	// stb r11,65(r31)
	PPC_STORE_U8(ctx.r31.u32 + 65, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263E078"))) PPC_WEAK_FUNC(sub_8263E078);
PPC_FUNC_IMPL(__imp__sub_8263E078) {
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
	// lbz r11,65(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 65);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263e11c
	if (ctx.cr6.eq) goto loc_8263E11C;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263E0AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826298f8
	ctx.lr = 0x8263E0B8;
	sub_826298F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263E0D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x825bae48
	ctx.lr = 0x8263E0E8;
	sub_825BAE48(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263e0f8
	if (ctx.cr6.eq) goto loc_8263E0F8;
	// bl 0x82581e38
	ctx.lr = 0x8263E0F8;
	sub_82581E38(ctx, base);
loc_8263E0F8:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263e108
	if (ctx.cr6.eq) goto loc_8263E108;
	// bl 0x82581e38
	ctx.lr = 0x8263E108;
	sub_82581E38(ctx, base);
loc_8263E108:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263E11C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8263E11C:
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x8259abe8
	ctx.lr = 0x8263E128;
	sub_8259ABE8(ctx, base);
	// lbz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263e13c
	if (ctx.cr6.eq) goto loc_8263E13C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82591be0
	ctx.lr = 0x8263E13C;
	sub_82591BE0(ctx, base);
loc_8263E13C:
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

__attribute__((alias("__imp__sub_8263E150"))) PPC_WEAK_FUNC(sub_8263E150);
PPC_FUNC_IMPL(__imp__sub_8263E150) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r4,56(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x82631500
	sub_82631500(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263E160"))) PPC_WEAK_FUNC(sub_8263E160);
PPC_FUNC_IMPL(__imp__sub_8263E160) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,56
	ctx.r11.s64 = ctx.r3.s64 + 56;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r10,r9,132
	ctx.r10.s64 = ctx.r9.s64 + 132;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263E1A0"))) PPC_WEAK_FUNC(sub_8263E1A0);
PPC_FUNC_IMPL(__imp__sub_8263E1A0) {
	PPC_FUNC_PROLOGUE();
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
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r31,52(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// bl 0x825bb010
	ctx.lr = 0x8263E1D4;
	sub_825BB010(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r10,r31,132
	ctx.r10.s64 = ctx.r31.s64 + 132;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
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
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8263E238"))) PPC_WEAK_FUNC(sub_8263E238);
PPC_FUNC_IMPL(__imp__sub_8263E238) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lbz r4,56(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 56);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x8259b028
	sub_8259B028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263E248"))) PPC_WEAK_FUNC(sub_8263E248);
PPC_FUNC_IMPL(__imp__sub_8263E248) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,56
	ctx.r11.s64 = ctx.r3.s64 + 56;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r10,r9,148
	ctx.r10.s64 = ctx.r9.s64 + 148;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263E288"))) PPC_WEAK_FUNC(sub_8263E288);
PPC_FUNC_IMPL(__imp__sub_8263E288) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r4,56(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x8259b040
	sub_8259B040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263E298"))) PPC_WEAK_FUNC(sub_8263E298);
PPC_FUNC_IMPL(__imp__sub_8263E298) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lbz r4,56(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 56);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x8259b068
	sub_8259B068(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263E2A8"))) PPC_WEAK_FUNC(sub_8263E2A8);
PPC_FUNC_IMPL(__imp__sub_8263E2A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r4,56(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x8259b088
	sub_8259B088(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263E2B8"))) PPC_WEAK_FUNC(sub_8263E2B8);
PPC_FUNC_IMPL(__imp__sub_8263E2B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lbz r4,56(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 56);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x8259b0b0
	sub_8259B0B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263E2C8"))) PPC_WEAK_FUNC(sub_8263E2C8);
PPC_FUNC_IMPL(__imp__sub_8263E2C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r4,56(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x8259afe0
	sub_8259AFE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263E2D8"))) PPC_WEAK_FUNC(sub_8263E2D8);
PPC_FUNC_IMPL(__imp__sub_8263E2D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lbz r4,56(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 56);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x8259b008
	sub_8259B008(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263E2E8"))) PPC_WEAK_FUNC(sub_8263E2E8);
PPC_FUNC_IMPL(__imp__sub_8263E2E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lbz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// lwz r30,36(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259b0b8
	ctx.lr = 0x8263E314;
	sub_8259B0B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,57(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 57);
	// bl 0x8259b148
	ctx.lr = 0x8263E320;
	sub_8259B148(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263E338"))) PPC_WEAK_FUNC(sub_8263E338);
PPC_FUNC_IMPL(__imp__sub_8263E338) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r6,64(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r5,60(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r4,56(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x8259b0d0
	sub_8259B0D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263E350"))) PPC_WEAK_FUNC(sub_8263E350);
PPC_FUNC_IMPL(__imp__sub_8263E350) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r6,64(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r5,60(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r4,56(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x8259b0f0
	sub_8259B0F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263E368"))) PPC_WEAK_FUNC(sub_8263E368);
PPC_FUNC_IMPL(__imp__sub_8263E368) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r6,64(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r5,60(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r4,56(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x8259b110
	sub_8259B110(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263E380"))) PPC_WEAK_FUNC(sub_8263E380);
PPC_FUNC_IMPL(__imp__sub_8263E380) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r4,56(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x8259b130
	sub_8259B130(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263E390"))) PPC_WEAK_FUNC(sub_8263E390);
PPC_FUNC_IMPL(__imp__sub_8263E390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8263E398;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// bl 0x82649d38
	ctx.lr = 0x8263E3B4;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-6096
	ctx.r11.s64 = ctx.r11.s64 + -6096;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r1,172
	ctx.r11.s64 = ctx.r1.s64 + 172;
	// bgt cr6,0x8263e3d8
	if (ctx.cr6.gt) goto loc_8263E3D8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8263E3D8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// beq cr6,0x8263e3f4
	if (ctx.cr6.eq) goto loc_8263E3F4;
	// bl 0x82659610
	ctx.lr = 0x8263E3F4;
	sub_82659610(ctx, base);
loc_8263E3F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263E408"))) PPC_WEAK_FUNC(sub_8263E408);
PPC_FUNC_IMPL(__imp__sub_8263E408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8263E410;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// lbz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// lwz r31,52(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263e468
	if (ctx.cr6.eq) goto loc_8263E468;
	// lwz r30,40(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259ace8
	ctx.lr = 0x8263E43C;
	sub_8259ACE8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259acc0
	ctx.lr = 0x8263E450;
	sub_8259ACC0(ctx, base);
	// addi r5,r29,60
	ctx.r5.s64 = ctx.r29.s64 + 60;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259a830
	ctx.lr = 0x8263E460;
	sub_8259A830(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_8263E468:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8259a830
	ctx.lr = 0x8263E47C;
	sub_8259A830(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263e48c
	if (ctx.cr6.eq) goto loc_8263E48C;
	// bl 0x82581e38
	ctx.lr = 0x8263E48C;
	sub_82581E38(ctx, base);
loc_8263E48C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263E498"))) PPC_WEAK_FUNC(sub_8263E498);
PPC_FUNC_IMPL(__imp__sub_8263E498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8263E4A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r30,52(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r29,40(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// beq cr6,0x8263e4f8
	if (ctx.cr6.eq) goto loc_8263E4F8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259ace8
	ctx.lr = 0x8263E4CC;
	sub_8259ACE8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259acc0
	ctx.lr = 0x8263E4E0;
	sub_8259ACC0(ctx, base);
	// addi r5,r31,60
	ctx.r5.s64 = ctx.r31.s64 + 60;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259a830
	ctx.lr = 0x8263E4F0;
	sub_8259A830(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_8263E4F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8259a830
	ctx.lr = 0x8263E50C;
	sub_8259A830(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263e51c
	if (ctx.cr6.eq) goto loc_8263E51C;
	// bl 0x82581e38
	ctx.lr = 0x8263E51C;
	sub_82581E38(ctx, base);
loc_8263E51C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263E528"))) PPC_WEAK_FUNC(sub_8263E528);
PPC_FUNC_IMPL(__imp__sub_8263E528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8263E530;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r29,36(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263E554;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82632a58
	ctx.lr = 0x8263E55C;
	sub_82632A58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259b088
	ctx.lr = 0x8263E56C;
	sub_8259B088(ctx, base);
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259afc0
	ctx.lr = 0x8263E580;
	sub_8259AFC0(ctx, base);
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82652600
	ctx.lr = 0x8263E58C;
	sub_82652600(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263E5A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263E5A8"))) PPC_WEAK_FUNC(sub_8263E5A8);
PPC_FUNC_IMPL(__imp__sub_8263E5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8263E5B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263E5CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r30,36(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259afe0
	ctx.lr = 0x8263E5E4;
	sub_8259AFE0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259b088
	ctx.lr = 0x8263E5F0;
	sub_8259B088(ctx, base);
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259afc0
	ctx.lr = 0x8263E604;
	sub_8259AFC0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82632a58
	ctx.lr = 0x8263E610;
	sub_82632A58(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
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
	// stb r29,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r29.u8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82652de8
	ctx.lr = 0x8263E64C;
	sub_82652DE8(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263e65c
	if (ctx.cr6.eq) goto loc_8263E65C;
	// bl 0x82581e38
	ctx.lr = 0x8263E65C;
	sub_82581E38(ctx, base);
loc_8263E65C:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263e66c
	if (ctx.cr6.eq) goto loc_8263E66C;
	// bl 0x82581e38
	ctx.lr = 0x8263E66C;
	sub_82581E38(ctx, base);
loc_8263E66C:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263e67c
	if (ctx.cr6.eq) goto loc_8263E67C;
	// bl 0x82581e38
	ctx.lr = 0x8263E67C;
	sub_82581E38(ctx, base);
loc_8263E67C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259afe0
	ctx.lr = 0x8263E688;
	sub_8259AFE0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263E690"))) PPC_WEAK_FUNC(sub_8263E690);
PPC_FUNC_IMPL(__imp__sub_8263E690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8263E6B4;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-6096
	ctx.r11.s64 = ctx.r11.s64 + -6096;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// beq cr6,0x8263e6dc
	if (ctx.cr6.eq) goto loc_8263E6DC;
	// bl 0x82659610
	ctx.lr = 0x8263E6DC;
	sub_82659610(ctx, base);
loc_8263E6DC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-6076
	ctx.r11.s64 = ctx.r11.s64 + -6076;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_8263E710"))) PPC_WEAK_FUNC(sub_8263E710);
PPC_FUNC_IMPL(__imp__sub_8263E710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8263E718;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// bl 0x82649d38
	ctx.lr = 0x8263E738;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-6056
	ctx.r11.s64 = ctx.r11.s64 + -6056;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// beq cr6,0x8263e758
	if (ctx.cr6.eq) goto loc_8263E758;
	// bl 0x82659610
	ctx.lr = 0x8263E758;
	sub_82659610(ctx, base);
loc_8263E758:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r1,180
	ctx.r11.s64 = ctx.r1.s64 + 180;
	// bgt cr6,0x8263e774
	if (ctx.cr6.gt) goto loc_8263E774;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8263E774:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stb r10,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263E790"))) PPC_WEAK_FUNC(sub_8263E790);
PPC_FUNC_IMPL(__imp__sub_8263E790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8263E798;
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r31,52(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lfs f30,14088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// lwz r27,36(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
loc_8263E7C8:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263e7e0
	if (ctx.cr6.eq) goto loc_8263E7E0;
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_8263E7E0:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8263e8dc
	if (ctx.cr6.eq) goto loc_8263E8DC;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263e808
	if (ctx.cr6.eq) goto loc_8263E808;
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8263e80c
	if (ctx.cr6.lt) goto loc_8263E80C;
loc_8263E808:
	// twi 31,r0,22
loc_8263E80C:
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259abe8
	ctx.lr = 0x8263E818;
	sub_8259ABE8(ctx, base);
	// addi r5,r30,72
	ctx.r5.s64 = ctx.r30.s64 + 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259a830
	ctx.lr = 0x8263E828;
	sub_8259A830(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259afe0
	ctx.lr = 0x8263E834;
	sub_8259AFE0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259b088
	ctx.lr = 0x8263E840;
	sub_8259B088(ctx, base);
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259afc0
	ctx.lr = 0x8263E854;
	sub_8259AFC0(ctx, base);
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,210
	ctx.r4.s64 = 210;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263E884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,210
	ctx.r4.s64 = 210;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263E8A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r4,76(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f30,120(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f30,124(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x8259a628
	ctx.lr = 0x8263E8D0;
	sub_8259A628(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// b 0x8263e7c8
	goto loc_8263E7C8;
loc_8263E8DC:
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

__attribute__((alias("__imp__sub_8263E8F0"))) PPC_WEAK_FUNC(sub_8263E8F0);
PPC_FUNC_IMPL(__imp__sub_8263E8F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263e91c
	if (ctx.cr6.eq) goto loc_8263E91C;
	// bl 0x82581e38
	ctx.lr = 0x8263E91C;
	sub_82581E38(ctx, base);
loc_8263E91C:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263e92c
	if (ctx.cr6.eq) goto loc_8263E92C;
	// bl 0x82581e38
	ctx.lr = 0x8263E92C;
	sub_82581E38(ctx, base);
loc_8263E92C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82649c08
	ctx.lr = 0x8263E934;
	sub_82649C08(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263e94c
	if (ctx.cr6.eq) goto loc_8263E94C;
	// bl 0x82186190
	ctx.lr = 0x8263E948;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8263E94C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263E968"))) PPC_WEAK_FUNC(sub_8263E968);
PPC_FUNC_IMPL(__imp__sub_8263E968) {
	PPC_FUNC_PROLOGUE();
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
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r31,52(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// bl 0x825bb010
	ctx.lr = 0x8263E99C;
	sub_825BB010(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r10,r31,148
	ctx.r10.s64 = ctx.r31.s64 + 148;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
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
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8263EA00"))) PPC_WEAK_FUNC(sub_8263EA00);
PPC_FUNC_IMPL(__imp__sub_8263EA00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x8263EA08;
	__savegprlr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,48(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263EA28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lbz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 64);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r26,36(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// beq cr6,0x8263eacc
	if (ctx.cr6.eq) goto loc_8263EACC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263EA54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826298f8
	ctx.lr = 0x8263EA64;
	sub_826298F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r29,r30,60
	ctx.r29.s64 = ctx.r30.s64 + 60;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// xori r28,r11,1
	ctx.r28.u64 = ctx.r11.u64 ^ 1;
	// beq cr6,0x8263ea98
	if (ctx.cr6.eq) goto loc_8263EA98;
	// bl 0x82581e38
	ctx.lr = 0x8263EA98;
	sub_82581E38(ctx, base);
loc_8263EA98:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263eacc
	if (ctx.cr6.eq) goto loc_8263EACC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x826298f8
	ctx.lr = 0x8263EAB0;
	sub_826298F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823032b8
	ctx.lr = 0x8263EABC;
	sub_823032B8(ctx, base);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263eacc
	if (ctx.cr6.eq) goto loc_8263EACC;
	// bl 0x82581e38
	ctx.lr = 0x8263EACC;
	sub_82581E38(ctx, base);
loc_8263EACC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8259afe0
	ctx.lr = 0x8263EAD8;
	sub_8259AFE0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8259b088
	ctx.lr = 0x8263EAE4;
	sub_8259B088(ctx, base);
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8259afc0
	ctx.lr = 0x8263EAF8;
	sub_8259AFC0(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8263eb74
	if (!ctx.cr6.eq) goto loc_8263EB74;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82632a58
	ctx.lr = 0x8263EB10;
	sub_82632A58(ctx, base);
	// li r31,1
	ctx.r31.s64 = 1;
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
	// stb r31,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r31.u8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82652de8
	ctx.lr = 0x8263EB4C;
	sub_82652DE8(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263eb5c
	if (ctx.cr6.eq) goto loc_8263EB5C;
	// bl 0x82581e38
	ctx.lr = 0x8263EB5C;
	sub_82581E38(ctx, base);
loc_8263EB5C:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263eb6c
	if (ctx.cr6.eq) goto loc_8263EB6C;
	// bl 0x82581e38
	ctx.lr = 0x8263EB6C;
	sub_82581E38(ctx, base);
loc_8263EB6C:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x8263ee6c
	goto loc_8263EE6C;
loc_8263EB74:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8263ebe8
	if (!ctx.cr6.eq) goto loc_8263EBE8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82632a58
	ctx.lr = 0x8263EB88;
	sub_82632A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x82652de8
	ctx.lr = 0x8263EBC0;
	sub_82652DE8(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263ebd0
	if (ctx.cr6.eq) goto loc_8263EBD0;
	// bl 0x82581e38
	ctx.lr = 0x8263EBD0;
	sub_82581E38(ctx, base);
loc_8263EBD0:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263ebe0
	if (ctx.cr6.eq) goto loc_8263EBE0;
	// bl 0x82581e38
	ctx.lr = 0x8263EBE0;
	sub_82581E38(ctx, base);
loc_8263EBE0:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x8263ee6c
	goto loc_8263EE6C;
loc_8263EBE8:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x8263ece8
	if (!ctx.cr6.eq) goto loc_8263ECE8;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r11,-15300(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -15300);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263ec70
	if (ctx.cr6.eq) goto loc_8263EC70;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82632a58
	ctx.lr = 0x8263EC0C;
	sub_82632A58(ctx, base);
	// li r31,1
	ctx.r31.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r31,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r31.u8);
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x82652de8
	ctx.lr = 0x8263EC48;
	sub_82652DE8(ctx, base);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263ec58
	if (ctx.cr6.eq) goto loc_8263EC58;
	// bl 0x82581e38
	ctx.lr = 0x8263EC58;
	sub_82581E38(ctx, base);
loc_8263EC58:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263ec68
	if (ctx.cr6.eq) goto loc_8263EC68;
	// bl 0x82581e38
	ctx.lr = 0x8263EC68;
	sub_82581E38(ctx, base);
loc_8263EC68:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// b 0x8263ee6c
	goto loc_8263EE6C;
loc_8263EC70:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,6
	ctx.r4.s64 = 6;
	// lfs f0,5424(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5424);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lfs f13,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f13,188(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// bl 0x82632a58
	ctx.lr = 0x8263ECA8;
	sub_82632A58(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826314f8
	ctx.lr = 0x8263ECB4;
	sub_826314F8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82652628
	ctx.lr = 0x8263ECC4;
	sub_82652628(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263ECE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_8263ECE8:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bne cr6,0x8263ee00
	if (!ctx.cr6.eq) goto loc_8263EE00;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lwz r11,-15304(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15304);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// addi r31,r9,-15432
	ctx.r31.s64 = ctx.r9.s64 + -15432;
	// bne cr6,0x8263edb4
	if (!ctx.cr6.eq) goto loc_8263EDB4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-15304(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15304, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,-24552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24552);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f13,5424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5424);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f12,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f11,5524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5524);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,24(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f12,48(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f11,56(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f12,68(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f13,72(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f12,76(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f12,80(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f12,84(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stfs f11,88(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f12,92(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f11,100(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f13,104(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f11,108(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stfs f12,112(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stfs f11,116(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f11,120(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stfs f11,124(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
loc_8263EDB4:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82632a58
	ctx.lr = 0x8263EDC0;
	sub_82632A58(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x826314f8
	ctx.lr = 0x8263EDCC;
	sub_826314F8(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82652628
	ctx.lr = 0x8263EDDC;
	sub_82652628(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263EDF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_8263EE00:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82632a58
	ctx.lr = 0x8263EE0C;
	sub_82632A58(ctx, base);
	// li r31,1
	ctx.r31.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,136
	ctx.r8.s64 = ctx.r1.s64 + 136;
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r31,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r31.u8);
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// bl 0x82652de8
	ctx.lr = 0x8263EE48;
	sub_82652DE8(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263ee58
	if (ctx.cr6.eq) goto loc_8263EE58;
	// bl 0x82581e38
	ctx.lr = 0x8263EE58;
	sub_82581E38(ctx, base);
loc_8263EE58:
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263ee68
	if (ctx.cr6.eq) goto loc_8263EE68;
	// bl 0x82581e38
	ctx.lr = 0x8263EE68;
	sub_82581E38(ctx, base);
loc_8263EE68:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
loc_8263EE6C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263ee78
	if (ctx.cr6.eq) goto loc_8263EE78;
	// bl 0x82581e38
	ctx.lr = 0x8263EE78;
	sub_82581E38(ctx, base);
loc_8263EE78:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263EE80"))) PPC_WEAK_FUNC(sub_8263EE80);
PPC_FUNC_IMPL(__imp__sub_8263EE80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x8263EE88;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r27,52(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r3,192(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 192);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// beq cr6,0x8263eea8
	if (ctx.cr6.eq) goto loc_8263EEA8;
	// bl 0x82659610
	ctx.lr = 0x8263EEA8;
	sub_82659610(ctx, base);
loc_8263EEA8:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x8259a830
	ctx.lr = 0x8263EEC0;
	sub_8259A830(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263eed0
	if (ctx.cr6.eq) goto loc_8263EED0;
	// bl 0x82581e38
	ctx.lr = 0x8263EED0;
	sub_82581E38(ctx, base);
loc_8263EED0:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259a830
	ctx.lr = 0x8263EEE4;
	sub_8259A830(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263eef4
	if (ctx.cr6.eq) goto loc_8263EEF4;
	// bl 0x82581e38
	ctx.lr = 0x8263EEF4;
	sub_82581E38(ctx, base);
loc_8263EEF4:
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259a830
	ctx.lr = 0x8263EF08;
	sub_8259A830(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263ef18
	if (ctx.cr6.eq) goto loc_8263EF18;
	// bl 0x82581e38
	ctx.lr = 0x8263EF18;
	sub_82581E38(ctx, base);
loc_8263EF18:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259a830
	ctx.lr = 0x8263EF2C;
	sub_8259A830(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263ef3c
	if (ctx.cr6.eq) goto loc_8263EF3C;
	// bl 0x82581e38
	ctx.lr = 0x8263EF3C;
	sub_82581E38(ctx, base);
loc_8263EF3C:
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259a830
	ctx.lr = 0x8263EF50;
	sub_8259A830(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263ef60
	if (ctx.cr6.eq) goto loc_8263EF60;
	// bl 0x82581e38
	ctx.lr = 0x8263EF60;
	sub_82581E38(ctx, base);
loc_8263EF60:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x824c2118
	ctx.lr = 0x8263EF6C;
	sub_824C2118(ctx, base);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r6,r11,17936
	ctx.r6.s64 = ctx.r11.s64 + 17936;
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-8300
	ctx.r5.s64 = ctx.r11.s64 + -8300;
	// bl 0x826df418
	ctx.lr = 0x8263EF8C;
	sub_826DF418(ctx, base);
	// bl 0x828b4938
	ctx.lr = 0x8263EF90;
	sub_828B4938(ctx, base);
	// lwz r26,60(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8263efa4
	if (ctx.cr6.eq) goto loc_8263EFA4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82659610
	ctx.lr = 0x8263EFA4;
	sub_82659610(ctx, base);
loc_8263EFA4:
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x8259abe8
	ctx.lr = 0x8263EFB8;
	sub_8259ABE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8263ea00
	ctx.lr = 0x8263EFC0;
	sub_8263EA00(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8263f02c
	if (!ctx.cr6.gt) goto loc_8263F02C;
	// addi r30,r31,88
	ctx.r30.s64 = ctx.r31.s64 + 88;
loc_8263EFDC:
	// lwz r29,-20(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8263eff0
	if (ctx.cr6.eq) goto loc_8263EFF0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82659610
	ctx.lr = 0x8263EFF0;
	sub_82659610(ctx, base);
loc_8263EFF0:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263f004
	if (ctx.cr6.eq) goto loc_8263F004;
	// bl 0x82581e38
	ctx.lr = 0x8263F004;
	sub_82581E38(ctx, base);
loc_8263F004:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259abe8
	ctx.lr = 0x8263F010;
	sub_8259ABE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8263ea00
	ctx.lr = 0x8263F018;
	sub_8263EA00(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8263efdc
	if (ctx.cr6.lt) goto loc_8263EFDC;
loc_8263F02C:
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x824c2118
	ctx.lr = 0x8263F038;
	sub_824C2118(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259abe8
	ctx.lr = 0x8263F044;
	sub_8259ABE8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x824c2118
	ctx.lr = 0x8263F050;
	sub_824C2118(ctx, base);
	// addi r5,r31,68
	ctx.r5.s64 = ctx.r31.s64 + 68;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259a830
	ctx.lr = 0x8263F060;
	sub_8259A830(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r3,40(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// bl 0x8259ace8
	ctx.lr = 0x8263F070;
	sub_8259ACE8(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8263f080
	if (ctx.cr6.eq) goto loc_8263F080;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82659610
	ctx.lr = 0x8263F080;
	sub_82659610(ctx, base);
loc_8263F080:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r26,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r26.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263f094
	if (ctx.cr6.eq) goto loc_8263F094;
	// bl 0x82581e38
	ctx.lr = 0x8263F094;
	sub_82581E38(ctx, base);
loc_8263F094:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8263f0a4
	if (ctx.cr6.eq) goto loc_8263F0A4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82581e38
	ctx.lr = 0x8263F0A4;
	sub_82581E38(ctx, base);
loc_8263F0A4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263f0b4
	if (ctx.cr6.eq) goto loc_8263F0B4;
	// bl 0x82581e38
	ctx.lr = 0x8263F0B4;
	sub_82581E38(ctx, base);
loc_8263F0B4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263F0C0"))) PPC_WEAK_FUNC(sub_8263F0C0);
PPC_FUNC_IMPL(__imp__sub_8263F0C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8263F0C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// bl 0x82649d38
	ctx.lr = 0x8263F0E8;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-6036
	ctx.r11.s64 = ctx.r11.s64 + -6036;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// beq cr6,0x8263f108
	if (ctx.cr6.eq) goto loc_8263F108;
	// bl 0x82659610
	ctx.lr = 0x8263F108;
	sub_82659610(ctx, base);
loc_8263F108:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// beq cr6,0x8263f11c
	if (ctx.cr6.eq) goto loc_8263F11C;
	// bl 0x82659610
	ctx.lr = 0x8263F11C;
	sub_82659610(ctx, base);
loc_8263F11C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// bl 0x825bac20
	ctx.lr = 0x8263F128;
	sub_825BAC20(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8263f13c
	if (ctx.cr6.eq) goto loc_8263F13C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x8263F13C;
	sub_82659610(ctx, base);
loc_8263F13C:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263f150
	if (ctx.cr6.eq) goto loc_8263F150;
	// bl 0x82581e38
	ctx.lr = 0x8263F150;
	sub_82581E38(ctx, base);
loc_8263F150:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263f160
	if (ctx.cr6.eq) goto loc_8263F160;
	// bl 0x82581e38
	ctx.lr = 0x8263F160;
	sub_82581E38(ctx, base);
loc_8263F160:
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8263f1a0
	if (ctx.cr6.eq) goto loc_8263F1A0;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263f1a0
	if (ctx.cr6.eq) goto loc_8263F1A0;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F194;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x8263f1ac
	goto loc_8263F1AC;
loc_8263F1A0:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r30,2
	ctx.r30.s64 = 2;
loc_8263F1AC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x825bae48
	ctx.lr = 0x8263F1B8;
	sub_825BAE48(ctx, base);
	// rlwinm r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263f1d8
	if (ctx.cr6.eq) goto loc_8263F1D8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263f1d8
	if (ctx.cr6.eq) goto loc_8263F1D8;
	// bl 0x82581e38
	ctx.lr = 0x8263F1D8;
	sub_82581E38(ctx, base);
loc_8263F1D8:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263f1f8
	if (ctx.cr6.eq) goto loc_8263F1F8;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r30,r30,0,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263f1f8
	if (ctx.cr6.eq) goto loc_8263F1F8;
	// bl 0x82581e38
	ctx.lr = 0x8263F1F8;
	sub_82581E38(ctx, base);
loc_8263F1F8:
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8263f238
	if (ctx.cr6.eq) goto loc_8263F238;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263f238
	if (ctx.cr6.eq) goto loc_8263F238;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F22C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ori r30,r30,4
	ctx.r30.u64 = ctx.r30.u64 | 4;
	// b 0x8263f244
	goto loc_8263F244;
loc_8263F238:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// ori r30,r30,8
	ctx.r30.u64 = ctx.r30.u64 | 8;
loc_8263F244:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x825baeb8
	ctx.lr = 0x8263F24C;
	sub_825BAEB8(ctx, base);
	// rlwinm r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263f26c
	if (ctx.cr6.eq) goto loc_8263F26C;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r30,r30,0,29,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263f26c
	if (ctx.cr6.eq) goto loc_8263F26C;
	// bl 0x82581e38
	ctx.lr = 0x8263F26C;
	sub_82581E38(ctx, base);
loc_8263F26C:
	// rlwinm r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263f288
	if (ctx.cr6.eq) goto loc_8263F288;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263f288
	if (ctx.cr6.eq) goto loc_8263F288;
	// bl 0x82581e38
	ctx.lr = 0x8263F288;
	sub_82581E38(ctx, base);
loc_8263F288:
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-4548
	ctx.r5.s64 = ctx.r11.s64 + -4548;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,14088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825babe0
	ctx.lr = 0x8263F2A8;
	sub_825BABE0(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F2BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263F2C8"))) PPC_WEAK_FUNC(sub_8263F2C8);
PPC_FUNC_IMPL(__imp__sub_8263F2C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263f2f4
	if (ctx.cr6.eq) goto loc_8263F2F4;
	// bl 0x82581e38
	ctx.lr = 0x8263F2F4;
	sub_82581E38(ctx, base);
loc_8263F2F4:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263f304
	if (ctx.cr6.eq) goto loc_8263F304;
	// bl 0x82581e38
	ctx.lr = 0x8263F304;
	sub_82581E38(ctx, base);
loc_8263F304:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263f314
	if (ctx.cr6.eq) goto loc_8263F314;
	// bl 0x82581e38
	ctx.lr = 0x8263F314;
	sub_82581E38(ctx, base);
loc_8263F314:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82649c08
	ctx.lr = 0x8263F31C;
	sub_82649C08(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263f334
	if (ctx.cr6.eq) goto loc_8263F334;
	// bl 0x82186190
	ctx.lr = 0x8263F330;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8263F334:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263F350"))) PPC_WEAK_FUNC(sub_8263F350);
PPC_FUNC_IMPL(__imp__sub_8263F350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r11,17936
	ctx.r6.s64 = ctx.r11.s64 + 17936;
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-8300
	ctx.r5.s64 = ctx.r11.s64 + -8300;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x826df418
	ctx.lr = 0x8263F384;
	sub_826DF418(ctx, base);
	// bl 0x828b4938
	ctx.lr = 0x8263F388;
	sub_828B4938(ctx, base);
	// addi r5,r31,56
	ctx.r5.s64 = ctx.r31.s64 + 56;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263f3e0
	if (ctx.cr6.eq) goto loc_8263F3E0;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263f3e0
	if (ctx.cr6.eq) goto loc_8263F3E0;
	// lwz r31,52(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259a830
	ctx.lr = 0x8263F3B8;
	sub_8259A830(ctx, base);
	// lwz r31,40(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259ace8
	ctx.lr = 0x8263F3CC;
	sub_8259ACE8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259acc0
	ctx.lr = 0x8263F3E0;
	sub_8259ACC0(ctx, base);
loc_8263F3E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263F3F8"))) PPC_WEAK_FUNC(sub_8263F3F8);
PPC_FUNC_IMPL(__imp__sub_8263F3F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8263F400;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r31,60
	ctx.r29.s64 = ctx.r31.s64 + 60;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263f464
	if (ctx.cr6.eq) goto loc_8263F464;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263f464
	if (ctx.cr6.eq) goto loc_8263F464;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r6,68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r30,40(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259acc0
	ctx.lr = 0x8263F444;
	sub_8259ACC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8259ace8
	ctx.lr = 0x8263F454;
	sub_8259ACE8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x8259a830
	ctx.lr = 0x8263F464;
	sub_8259A830(ctx, base);
loc_8263F464:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263F470"))) PPC_WEAK_FUNC(sub_8263F470);
PPC_FUNC_IMPL(__imp__sub_8263F470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8263F478;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r28,52(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r29,40(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// beq cr6,0x8263f594
	if (ctx.cr6.eq) goto loc_8263F594;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259ace8
	ctx.lr = 0x8263F4A8;
	sub_8259ACE8(ctx, base);
	// addi r5,r31,60
	ctx.r5.s64 = ctx.r31.s64 + 60;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259a830
	ctx.lr = 0x8263F4B8;
	sub_8259A830(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259acc0
	ctx.lr = 0x8263F4CC;
	sub_8259ACC0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F4E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263f5b8
	if (ctx.cr6.eq) goto loc_8263F5B8;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// ori r11,r11,36868
	ctx.r11.u64 = ctx.r11.u64 | 36868;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-18400
	ctx.r11.s64 = ctx.r11.s64 + -18400;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lwz r10,-15444(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15444);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v0,r10,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v0,r10,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,48
	ctx.r10.s64 = 48;
	// lvx128 v0,r10,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F560;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263f5b8
	if (ctx.cr6.eq) goto loc_8263F5B8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,92
	ctx.r4.s64 = 92;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F58C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_8263F594:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8259a830
	ctx.lr = 0x8263F5A8;
	sub_8259A830(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263f5b8
	if (ctx.cr6.eq) goto loc_8263F5B8;
	// bl 0x82581e38
	ctx.lr = 0x8263F5B8;
	sub_82581E38(ctx, base);
loc_8263F5B8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263F5C0"))) PPC_WEAK_FUNC(sub_8263F5C0);
PPC_FUNC_IMPL(__imp__sub_8263F5C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r31,36(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259afe0
	ctx.lr = 0x8263F5EC;
	sub_8259AFE0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259b088
	ctx.lr = 0x8263F5F8;
	sub_8259B088(ctx, base);
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259afc0
	ctx.lr = 0x8263F60C;
	sub_8259AFC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8263ea00
	ctx.lr = 0x8263F614;
	sub_8263EA00(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263F630"))) PPC_WEAK_FUNC(sub_8263F630);
PPC_FUNC_IMPL(__imp__sub_8263F630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x8263F638;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,48(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F658;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lbz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 68);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r27,36(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// beq cr6,0x8263f6fc
	if (ctx.cr6.eq) goto loc_8263F6FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F684;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x826298f8
	ctx.lr = 0x8263F694;
	sub_826298F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r28,r30,56
	ctx.r28.s64 = ctx.r30.s64 + 56;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// xori r26,r11,1
	ctx.r26.u64 = ctx.r11.u64 ^ 1;
	// beq cr6,0x8263f6c8
	if (ctx.cr6.eq) goto loc_8263F6C8;
	// bl 0x82581e38
	ctx.lr = 0x8263F6C8;
	sub_82581E38(ctx, base);
loc_8263F6C8:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263f6fc
	if (ctx.cr6.eq) goto loc_8263F6FC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826298f8
	ctx.lr = 0x8263F6E0;
	sub_826298F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823032b8
	ctx.lr = 0x8263F6EC;
	sub_823032B8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263f6fc
	if (ctx.cr6.eq) goto loc_8263F6FC;
	// bl 0x82581e38
	ctx.lr = 0x8263F6FC;
	sub_82581E38(ctx, base);
loc_8263F6FC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259afe0
	ctx.lr = 0x8263F708;
	sub_8259AFE0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259b088
	ctx.lr = 0x8263F714;
	sub_8259B088(ctx, base);
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259afc0
	ctx.lr = 0x8263F728;
	sub_8259AFC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F73C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,36867
	ctx.r11.u64 = ctx.r11.u64 | 36867;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-18448
	ctx.r11.s64 = ctx.r11.s64 + -18448;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F780;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82632a58
	ctx.lr = 0x8263F78C;
	sub_82632A58(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r30,56
	ctx.r4.s64 = ctx.r30.s64 + 56;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,1
	ctx.r11.s64 = 1;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F7BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263F7C8"))) PPC_WEAK_FUNC(sub_8263F7C8);
PPC_FUNC_IMPL(__imp__sub_8263F7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8263F7D0;
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
	// bl 0x82649d38
	ctx.lr = 0x8263F7EC;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-6016
	ctx.r11.s64 = ctx.r11.s64 + -6016;
	// li r3,68
	ctx.r3.s64 = 68;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// bl 0x82186158
	ctx.lr = 0x8263F808;
	sub_82186158(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8263f87c
	if (ctx.cr6.eq) goto loc_8263F87C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F828;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x8264db38
	ctx.lr = 0x8263F838;
	sub_8264DB38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8263f87c
	if (ctx.cr6.eq) goto loc_8263F87C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8264dbd8
	ctx.lr = 0x8263F850;
	sub_8264DBD8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x8263F858;
	sub_82659610(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x8263F860;
	sub_82659610(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263f874
	if (ctx.cr6.eq) goto loc_8263F874;
	// bl 0x82581e38
	ctx.lr = 0x8263F874;
	sub_82581E38(ctx, base);
loc_8263F874:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82581e38
	ctx.lr = 0x8263F87C;
	sub_82581E38(ctx, base);
loc_8263F87C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263F888"))) PPC_WEAK_FUNC(sub_8263F888);
PPC_FUNC_IMPL(__imp__sub_8263F888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263f8cc
	if (ctx.cr6.eq) goto loc_8263F8CC;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263f8cc
	if (ctx.cr6.eq) goto loc_8263F8CC;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x8264cf60
	ctx.lr = 0x8263F8C0;
	sub_8264CF60(ctx, base);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8264cf88
	ctx.lr = 0x8263F8CC;
	sub_8264CF88(ctx, base);
loc_8263F8CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263F8E0"))) PPC_WEAK_FUNC(sub_8263F8E0);
PPC_FUNC_IMPL(__imp__sub_8263F8E0) {
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
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8263f95c
	if (ctx.cr6.eq) goto loc_8263F95C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F91C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263f94c
	if (ctx.cr6.eq) goto loc_8263F94C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263f94c
	if (ctx.cr6.eq) goto loc_8263F94C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F94C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8263F94C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263f95c
	if (ctx.cr6.eq) goto loc_8263F95C;
	// bl 0x821601b8
	ctx.lr = 0x8263F95C;
	sub_821601B8(ctx, base);
loc_8263F95C:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lbz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// lbz r10,-15440(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -15440);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8263f9a0
	if (ctx.cr6.eq) goto loc_8263F9A0;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// stb r10,-15440(r11)
	PPC_STORE_U8(ctx.r11.u32 + -15440, ctx.r10.u8);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq cr6,0x8263f994
	if (ctx.cr6.eq) goto loc_8263F994;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// b 0x8263f998
	goto loc_8263F998;
loc_8263F994:
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
loc_8263F998:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263F9A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8263F9A0:
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

__attribute__((alias("__imp__sub_8263F9B8"))) PPC_WEAK_FUNC(sub_8263F9B8);
PPC_FUNC_IMPL(__imp__sub_8263F9B8) {
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
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// lwz r4,48(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r10,132
	ctx.r10.s64 = ctx.r10.s64 + 132;
	// lwz r5,56(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r6,-15444(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15444);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r31,8(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8263FA50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263fa90
	if (ctx.cr6.eq) goto loc_8263FA90;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263fa90
	if (ctx.cr6.eq) goto loc_8263FA90;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263FA90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8263FA90:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263faa0
	if (ctx.cr6.eq) goto loc_8263FAA0;
	// bl 0x821601b8
	ctx.lr = 0x8263FAA0;
	sub_821601B8(ctx, base);
loc_8263FAA0:
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

__attribute__((alias("__imp__sub_8263FAB8"))) PPC_WEAK_FUNC(sub_8263FAB8);
PPC_FUNC_IMPL(__imp__sub_8263FAB8) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r6,-15444(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15444);
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263FAF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263fb54
	if (ctx.cr6.eq) goto loc_8263FB54;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263fb54
	if (ctx.cr6.eq) goto loc_8263FB54;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x8263fb38
	if (ctx.cr6.lt) goto loc_8263FB38;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263FB34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8263FB38:
	// lfs f1,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x8263fb54
	if (ctx.cr6.lt) goto loc_8263FB54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263FB54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8263FB54:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263fb64
	if (ctx.cr6.eq) goto loc_8263FB64;
	// bl 0x821601b8
	ctx.lr = 0x8263FB64;
	sub_821601B8(ctx, base);
loc_8263FB64:
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

__attribute__((alias("__imp__sub_8263FB80"))) PPC_WEAK_FUNC(sub_8263FB80);
PPC_FUNC_IMPL(__imp__sub_8263FB80) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r6,-15444(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15444);
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263FBB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263fbf8
	if (ctx.cr6.eq) goto loc_8263FBF8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263fbf8
	if (ctx.cr6.eq) goto loc_8263FBF8;
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263FBF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8263FBF8:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263fc08
	if (ctx.cr6.eq) goto loc_8263FC08;
	// bl 0x821601b8
	ctx.lr = 0x8263FC08;
	sub_821601B8(ctx, base);
loc_8263FC08:
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

__attribute__((alias("__imp__sub_8263FC20"))) PPC_WEAK_FUNC(sub_8263FC20);
PPC_FUNC_IMPL(__imp__sub_8263FC20) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r6,-15444(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15444);
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263FC58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263fc88
	if (ctx.cr6.eq) goto loc_8263FC88;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263fc88
	if (ctx.cr6.eq) goto loc_8263FC88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263FC88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8263FC88:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263fc98
	if (ctx.cr6.eq) goto loc_8263FC98;
	// bl 0x821601b8
	ctx.lr = 0x8263FC98;
	sub_821601B8(ctx, base);
loc_8263FC98:
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

__attribute__((alias("__imp__sub_8263FCB0"))) PPC_WEAK_FUNC(sub_8263FCB0);
PPC_FUNC_IMPL(__imp__sub_8263FCB0) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r6,-15444(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15444);
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263FCE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263fd18
	if (ctx.cr6.eq) goto loc_8263FD18;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263fd18
	if (ctx.cr6.eq) goto loc_8263FD18;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263FD18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8263FD18:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263fd28
	if (ctx.cr6.eq) goto loc_8263FD28;
	// bl 0x821601b8
	ctx.lr = 0x8263FD28;
	sub_821601B8(ctx, base);
loc_8263FD28:
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

__attribute__((alias("__imp__sub_8263FD40"))) PPC_WEAK_FUNC(sub_8263FD40);
PPC_FUNC_IMPL(__imp__sub_8263FD40) {
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
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263FD70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8263fe38
	if (ctx.cr6.eq) goto loc_8263FE38;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263fe38
	if (ctx.cr6.eq) goto loc_8263FE38;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263FDA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263fdd0
	if (ctx.cr6.eq) goto loc_8263FDD0;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263fdd0
	if (ctx.cr6.eq) goto loc_8263FDD0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,60
	ctx.r4.s64 = ctx.r31.s64 + 60;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263FDD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8263FDD0:
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263FDE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263fe28
	if (ctx.cr6.eq) goto loc_8263FE28;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263fe1c
	if (ctx.cr6.eq) goto loc_8263FE1C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,60
	ctx.r4.s64 = ctx.r31.s64 + 60;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8263FE18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8263FE1C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263fe28
	if (ctx.cr6.eq) goto loc_8263FE28;
	// bl 0x82581e38
	ctx.lr = 0x8263FE28;
	sub_82581E38(ctx, base);
loc_8263FE28:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263fe38
	if (ctx.cr6.eq) goto loc_8263FE38;
	// bl 0x82581e38
	ctx.lr = 0x8263FE38;
	sub_82581E38(ctx, base);
loc_8263FE38:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263fe48
	if (ctx.cr6.eq) goto loc_8263FE48;
	// bl 0x821601b8
	ctx.lr = 0x8263FE48;
	sub_821601B8(ctx, base);
loc_8263FE48:
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

__attribute__((alias("__imp__sub_8263FE60"))) PPC_WEAK_FUNC(sub_8263FE60);
PPC_FUNC_IMPL(__imp__sub_8263FE60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8ac
	ctx.lr = 0x8263FE68;
	__savegprlr_21(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r11,r11,12308
	ctx.r11.s64 = ctx.r11.s64 + 12308;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r31,-32251
	ctx.r31.s64 = -2113601536;
	// lis r30,-32251
	ctx.r30.s64 = -2113601536;
	// lis r29,-32251
	ctx.r29.s64 = -2113601536;
	// lis r28,-32251
	ctx.r28.s64 = -2113601536;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r27,-32251
	ctx.r27.s64 = -2113601536;
	// lis r26,-32255
	ctx.r26.s64 = -2113863680;
	// addi r10,r10,-5880
	ctx.r10.s64 = ctx.r10.s64 + -5880;
	// addi r9,r9,-5888
	ctx.r9.s64 = ctx.r9.s64 + -5888;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r8,r8,-5896
	ctx.r8.s64 = ctx.r8.s64 + -5896;
	// addi r7,r7,-5904
	ctx.r7.s64 = ctx.r7.s64 + -5904;
	// addi r6,r6,-5916
	ctx.r6.s64 = ctx.r6.s64 + -5916;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r5,r5,-5928
	ctx.r5.s64 = ctx.r5.s64 + -5928;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r4,r4,28112
	ctx.r4.s64 = ctx.r4.s64 + 28112;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// addi r3,r3,-5936
	ctx.r3.s64 = ctx.r3.s64 + -5936;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r31,r31,-5944
	ctx.r31.s64 = ctx.r31.s64 + -5944;
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// addi r30,r30,-5952
	ctx.r30.s64 = ctx.r30.s64 + -5952;
	// stw r5,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r5.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r29,r29,-5960
	ctx.r29.s64 = ctx.r29.s64 + -5960;
	// stw r4,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r4.u32);
	// addi r28,r28,-8300
	ctx.r28.s64 = ctx.r28.s64 + -8300;
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// addi r27,r27,-5976
	ctx.r27.s64 = ctx.r27.s64 + -5976;
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// addi r26,r26,2380
	ctx.r26.s64 = ctx.r26.s64 + 2380;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// lis r25,-32251
	ctx.r25.s64 = -2113601536;
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r29.u32);
	// lis r24,-32251
	ctx.r24.s64 = -2113601536;
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r28.u32);
	// lis r23,-32254
	ctx.r23.s64 = -2113798144;
	// stw r27,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r27.u32);
	// lis r22,-32251
	ctx.r22.s64 = -2113601536;
	// stw r26,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r26.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r25,r25,-5988
	ctx.r25.s64 = ctx.r25.s64 + -5988;
	// addi r24,r24,-6000
	ctx.r24.s64 = ctx.r24.s64 + -6000;
	// addi r23,r23,11372
	ctx.r23.s64 = ctx.r23.s64 + 11372;
	// addi r22,r22,-13584
	ctx.r22.s64 = ctx.r22.s64 + -13584;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r25,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r25.u32);
	// stw r24,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r24.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r23,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r23.u32);
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// stw r22,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r22.u32);
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
loc_8263FFF0:
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8263FFFC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8263fffc
	if (!ctx.cr6.eq) goto loc_8263FFFC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r5,20(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8216a080
	ctx.lr = 0x82640028;
	sub_8216A080(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82640054
	if (!ctx.cr6.eq) goto loc_82640054;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r30,19
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 19, ctx.xer);
	// bne cr6,0x8263fff0
	if (!ctx.cr6.eq) goto loc_8263FFF0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826de8fc
	__restgprlr_21(ctx, base);
	return;
loc_82640054:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826de8fc
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82640068"))) PPC_WEAK_FUNC(sub_82640068);
PPC_FUNC_IMPL(__imp__sub_82640068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8264008C;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-5868
	ctx.r11.s64 = ctx.r11.s64 + -5868;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8263fe60
	ctx.lr = 0x826400A0;
	sub_8263FE60(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826400C8"))) PPC_WEAK_FUNC(sub_826400C8);
PPC_FUNC_IMPL(__imp__sub_826400C8) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82649d38
	ctx.lr = 0x826400FC;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f31,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// addi r11,r11,-5848
	ctx.r11.s64 = ctx.r11.s64 + -5848;
	// stfs f30,64(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8263fe60
	ctx.lr = 0x82640118;
	sub_8263FE60(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82640148"))) PPC_WEAK_FUNC(sub_82640148);
PPC_FUNC_IMPL(__imp__sub_82640148) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82649d38
	ctx.lr = 0x8264017C;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f31,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// addi r11,r11,-5828
	ctx.r11.s64 = ctx.r11.s64 + -5828;
	// stfs f30,64(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8263fe60
	ctx.lr = 0x82640198;
	sub_8263FE60(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_826401C8"))) PPC_WEAK_FUNC(sub_826401C8);
PPC_FUNC_IMPL(__imp__sub_826401C8) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82649d38
	ctx.lr = 0x826401F4;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f31,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// addi r11,r11,-5808
	ctx.r11.s64 = ctx.r11.s64 + -5808;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8263fe60
	ctx.lr = 0x8264020C;
	sub_8263FE60(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82640238"))) PPC_WEAK_FUNC(sub_82640238);
PPC_FUNC_IMPL(__imp__sub_82640238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82640240;
	__savegprlr_29(ctx, base);
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
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82649d38
	ctx.lr = 0x82640258;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-5788
	ctx.r11.s64 = ctx.r11.s64 + -5788;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8263fe60
	ctx.lr = 0x82640270;
	sub_8263FE60(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82640288"))) PPC_WEAK_FUNC(sub_82640288);
PPC_FUNC_IMPL(__imp__sub_82640288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82640290;
	__savegprlr_29(ctx, base);
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
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82649d38
	ctx.lr = 0x826402A8;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-5768
	ctx.r11.s64 = ctx.r11.s64 + -5768;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8263fe60
	ctx.lr = 0x826402BC;
	sub_8263FE60(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// beq cr6,0x826402d4
	if (ctx.cr6.eq) goto loc_826402D4;
	// bl 0x82659610
	ctx.lr = 0x826402D4;
	sub_82659610(ctx, base);
loc_826402D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826402E0"))) PPC_WEAK_FUNC(sub_826402E0);
PPC_FUNC_IMPL(__imp__sub_826402E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x826402E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	ctx.lr = 0x8264030C;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-5748
	ctx.r11.s64 = ctx.r11.s64 + -5748;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
	// stw r26,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r26.u32);
	// bl 0x8216f658
	ctx.lr = 0x8264033C;
	sub_8216F658(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82640350
	if (ctx.cr6.eq) goto loc_82640350;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x82640350;
	sub_82659610(ctx, base);
loc_82640350:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82640364
	if (ctx.cr6.eq) goto loc_82640364;
	// bl 0x82581e38
	ctx.lr = 0x82640364;
	sub_82581E38(ctx, base);
loc_82640364:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82640374
	if (ctx.cr6.eq) goto loc_82640374;
	// bl 0x82581e38
	ctx.lr = 0x82640374;
	sub_82581E38(ctx, base);
loc_82640374:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82640380"))) PPC_WEAK_FUNC(sub_82640380);
PPC_FUNC_IMPL(__imp__sub_82640380) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826403AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826403d0
	if (ctx.cr6.eq) goto loc_826403D0;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x826403d4
	if (ctx.cr6.lt) goto loc_826403D4;
loc_826403D0:
	// twi 31,r0,22
loc_826403D4:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8262b468
	ctx.lr = 0x826403E4;
	sub_8262B468(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82640444
	if (ctx.cr6.eq) goto loc_82640444;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82640444
	if (ctx.cr6.eq) goto loc_82640444;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82640444
	if (ctx.cr6.eq) goto loc_82640444;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82640444
	if (ctx.cr6.eq) goto loc_82640444;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82640430;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82640444;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82640444:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82640454
	if (ctx.cr6.eq) goto loc_82640454;
	// bl 0x821601b8
	ctx.lr = 0x82640454;
	sub_821601B8(ctx, base);
loc_82640454:
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

__attribute__((alias("__imp__sub_82640468"))) PPC_WEAK_FUNC(sub_82640468);
PPC_FUNC_IMPL(__imp__sub_82640468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b0
	ctx.lr = 0x82640470;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r27,684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 684, ctx.r27.u32);
	// bl 0x82649d38
	ctx.lr = 0x82640494;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-6096
	ctx.r11.s64 = ctx.r11.s64 + -6096;
	// stw r10,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r10.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r3.u32);
	// beq cr6,0x826404bc
	if (ctx.cr6.eq) goto loc_826404BC;
	// bl 0x82659610
	ctx.lr = 0x826404BC;
	sub_82659610(ctx, base);
loc_826404BC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,-5692
	ctx.r11.s64 = ctx.r11.s64 + -5692;
	// addi r30,r29,84
	ctx.r30.s64 = ctx.r29.s64 + 84;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// stb r31,64(r29)
	PPC_STORE_U8(ctx.r29.u32 + 64, ctx.r31.u8);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r31,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r31.u32);
	// stw r31,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r31.u32);
	// stw r31,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r31.u32);
	// stw r31,80(r29)
	PPC_STORE_U32(ctx.r29.u32 + 80, ctx.r31.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// bgt cr6,0x8264050c
	if (ctx.cr6.gt) goto loc_8264050C;
	// addi r11,r1,684
	ctx.r11.s64 = ctx.r1.s64 + 684;
loc_8264050C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 100, ctx.r11.u32);
	// stw r31,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r31.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264052C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r27,4
	ctx.r27.s64 = 4;
	// lfs f31,14088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f31.f64 = double(temp.f32);
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// li r26,15
	ctx.r26.s64 = 15;
	// addi r22,r11,-4548
	ctx.r22.s64 = ctx.r11.s64 + -4548;
	// ble cr6,0x82640700
	if (!ctx.cr6.gt) goto loc_82640700;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r23,r11,-5716
	ctx.r23.s64 = ctx.r11.s64 + -5716;
loc_82640560:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x826e0998
	ctx.lr = 0x82640570;
	sub_826E0998(ctx, base);
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// stw r26,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r26.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
loc_82640584:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82640584
	if (!ctx.cr6.eq) goto loc_82640584;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x826405AC;
	sub_82161E08(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82619650
	ctx.lr = 0x826405BC;
	sub_82619650(ctx, base);
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x826405d0
	if (ctx.cr6.eq) goto loc_826405D0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82659610
	ctx.lr = 0x826405D0;
	sub_82659610(ctx, base);
loc_826405D0:
	// lwz r3,-16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// stw r28,-16(r30)
	PPC_STORE_U32(ctx.r30.u32 + -16, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826405e4
	if (ctx.cr6.eq) goto loc_826405E4;
	// bl 0x82581e38
	ctx.lr = 0x826405E4;
	sub_82581E38(ctx, base);
loc_826405E4:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826405f4
	if (ctx.cr6.eq) goto loc_826405F4;
	// bl 0x82581e38
	ctx.lr = 0x826405F4;
	sub_82581E38(ctx, base);
loc_826405F4:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82640608
	if (ctx.cr6.lt) goto loc_82640608;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82186190
	ctx.lr = 0x82640608;
	sub_82186190(ctx, base);
loc_82640608:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// stw r26,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r26.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
	// bl 0x825bac20
	ctx.lr = 0x8264061C;
	sub_825BAC20(ctx, base);
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82640630
	if (ctx.cr6.eq) goto loc_82640630;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82659610
	ctx.lr = 0x82640630;
	sub_82659610(ctx, base);
loc_82640630:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82640644
	if (ctx.cr6.eq) goto loc_82640644;
	// bl 0x82581e38
	ctx.lr = 0x82640644;
	sub_82581E38(ctx, base);
loc_82640644:
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82640654
	if (ctx.cr6.eq) goto loc_82640654;
	// bl 0x82581e38
	ctx.lr = 0x82640654;
	sub_82581E38(ctx, base);
loc_82640654:
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82640670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825bae48
	ctx.lr = 0x82640680;
	sub_825BAE48(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82640690
	if (ctx.cr6.eq) goto loc_82640690;
	// bl 0x82581e38
	ctx.lr = 0x82640690;
	sub_82581E38(ctx, base);
loc_82640690:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x825baeb8
	ctx.lr = 0x826406A0;
	sub_825BAEB8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826406b0
	if (ctx.cr6.eq) goto loc_826406B0;
	// bl 0x82581e38
	ctx.lr = 0x826406B0;
	sub_82581E38(ctx, base);
loc_826406B0:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825babe0
	ctx.lr = 0x826406C8;
	sub_825BABE0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x824c2118
	ctx.lr = 0x826406D4;
	sub_824C2118(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826406E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwinm r27,r27,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82640560
	if (ctx.cr6.lt) goto loc_82640560;
loc_82640700:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r26,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r26.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// addi r4,r11,-11012
	ctx.r4.s64 = ctx.r11.s64 + -11012;
	// stb r31,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82161e08
	ctx.lr = 0x82640720;
	sub_82161E08(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82619650
	ctx.lr = 0x82640730;
	sub_82619650(ctx, base);
	// lwz r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82640744
	if (ctx.cr6.lt) goto loc_82640744;
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x82186190
	ctx.lr = 0x82640744;
	sub_82186190(ctx, base);
loc_82640744:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r26,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r26.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// addi r28,r11,-5732
	ctx.r28.s64 = ctx.r11.s64 + -5732;
	// stb r31,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r31.u8);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r26,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r26.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r31.u32);
	// stb r31,260(r1)
	PPC_STORE_U8(ctx.r1.u32 + 260, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82640774;
	sub_82161E08(ctx, base);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82619650
	ctx.lr = 0x82640784;
	sub_82619650(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82640798
	if (ctx.cr6.eq) goto loc_82640798;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x82640798;
	sub_82659610(ctx, base);
loc_82640798:
	// lwz r3,60(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// stw r30,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826407ac
	if (ctx.cr6.eq) goto loc_826407AC;
	// bl 0x82581e38
	ctx.lr = 0x826407AC;
	sub_82581E38(ctx, base);
loc_826407AC:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826407bc
	if (ctx.cr6.eq) goto loc_826407BC;
	// bl 0x82581e38
	ctx.lr = 0x826407BC;
	sub_82581E38(ctx, base);
loc_826407BC:
	// lwz r11,280(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x826407d0
	if (ctx.cr6.lt) goto loc_826407D0;
	// lwz r3,260(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// bl 0x82186190
	ctx.lr = 0x826407D0;
	sub_82186190(ctx, base);
loc_826407D0:
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// stw r26,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r26.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r31.u32);
	// stb r31,260(r1)
	PPC_STORE_U8(ctx.r1.u32 + 260, ctx.r31.u8);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82640908
	if (ctx.cr6.eq) goto loc_82640908;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82640804;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82640820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,15
	ctx.r5.s64 = 15;
	// stw r26,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r26.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stb r31,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x82640840;
	sub_82161E08(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82619d00
	ctx.lr = 0x82640864;
	sub_82619D00(ctx, base);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82640878
	if (ctx.cr6.lt) goto loc_82640878;
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x82186190
	ctx.lr = 0x82640878;
	sub_82186190(ctx, base);
loc_82640878:
	// li r5,15
	ctx.r5.s64 = 15;
	// stw r26,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r26.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stb r31,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r31.u8);
	// stw r26,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r26.u32);
	// stw r31,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r31.u32);
	// stb r31,228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 228, ctx.r31.u8);
	// bl 0x82161e08
	ctx.lr = 0x826408A0;
	sub_82161E08(ctx, base);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82619650
	ctx.lr = 0x826408B0;
	sub_82619650(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826408c4
	if (ctx.cr6.eq) goto loc_826408C4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x826408C4;
	sub_82659610(ctx, base);
loc_826408C4:
	// lwz r3,60(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// stw r30,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826408d8
	if (ctx.cr6.eq) goto loc_826408D8;
	// bl 0x82581e38
	ctx.lr = 0x826408D8;
	sub_82581E38(ctx, base);
loc_826408D8:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826408e8
	if (ctx.cr6.eq) goto loc_826408E8;
	// bl 0x82581e38
	ctx.lr = 0x826408E8;
	sub_82581E38(ctx, base);
loc_826408E8:
	// lwz r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x826408fc
	if (ctx.cr6.lt) goto loc_826408FC;
	// lwz r3,228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// bl 0x82186190
	ctx.lr = 0x826408FC;
	sub_82186190(ctx, base);
loc_826408FC:
	// stw r26,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r26.u32);
	// stw r31,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r31.u32);
	// stb r31,228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 228, ctx.r31.u8);
loc_82640908:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825bac20
	ctx.lr = 0x82640910;
	sub_825BAC20(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82640924
	if (ctx.cr6.eq) goto loc_82640924;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x82640924;
	sub_82659610(ctx, base);
loc_82640924:
	// lwz r3,104(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// stw r30,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82640938
	if (ctx.cr6.eq) goto loc_82640938;
	// bl 0x82581e38
	ctx.lr = 0x82640938;
	sub_82581E38(ctx, base);
loc_82640938:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82640948
	if (ctx.cr6.eq) goto loc_82640948;
	// bl 0x82581e38
	ctx.lr = 0x82640948;
	sub_82581E38(ctx, base);
loc_82640948:
	// lwz r4,60(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82640964;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,104(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// bl 0x825bae48
	ctx.lr = 0x82640974;
	sub_825BAE48(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82640984
	if (ctx.cr6.eq) goto loc_82640984;
	// bl 0x82581e38
	ctx.lr = 0x82640984;
	sub_82581E38(ctx, base);
loc_82640984:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,104(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// bl 0x825baeb8
	ctx.lr = 0x82640994;
	sub_825BAEB8(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826409a4
	if (ctx.cr6.eq) goto loc_826409A4;
	// bl 0x82581e38
	ctx.lr = 0x826409A4;
	sub_82581E38(ctx, base);
loc_826409A4:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,104(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825babe0
	ctx.lr = 0x826409BC;
	sub_825BABE0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,104(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// bl 0x824c2118
	ctx.lr = 0x826409C8;
	sub_824C2118(ctx, base);
	// lwz r3,104(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826409DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826409ec
	if (ctx.cr6.eq) goto loc_826409EC;
	// bl 0x82581e38
	ctx.lr = 0x826409EC;
	sub_82581E38(ctx, base);
loc_826409EC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826de900
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82640A00"))) PPC_WEAK_FUNC(sub_82640A00);
PPC_FUNC_IMPL(__imp__sub_82640A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82640A08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,104(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82640a20
	if (ctx.cr6.eq) goto loc_82640A20;
	// bl 0x82581e38
	ctx.lr = 0x82640A20;
	sub_82581E38(ctx, base);
loc_82640A20:
	// addi r31,r29,100
	ctx.r31.s64 = ctx.r29.s64 + 100;
	// li r30,3
	ctx.r30.s64 = 3;
loc_82640A28:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82640a3c
	if (ctx.cr6.eq) goto loc_82640A3C;
	// bl 0x82581e38
	ctx.lr = 0x82640A3C;
	sub_82581E38(ctx, base);
loc_82640A3C:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82640a28
	if (!ctx.cr6.lt) goto loc_82640A28;
	// addi r31,r29,84
	ctx.r31.s64 = ctx.r29.s64 + 84;
	// li r30,3
	ctx.r30.s64 = 3;
loc_82640A50:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82640a64
	if (ctx.cr6.eq) goto loc_82640A64;
	// bl 0x82581e38
	ctx.lr = 0x82640A64;
	sub_82581E38(ctx, base);
loc_82640A64:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82640a50
	if (!ctx.cr6.lt) goto loc_82640A50;
	// lwz r3,60(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82640a80
	if (ctx.cr6.eq) goto loc_82640A80;
	// bl 0x82581e38
	ctx.lr = 0x82640A80;
	sub_82581E38(ctx, base);
loc_82640A80:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82649c08
	ctx.lr = 0x82640A88;
	sub_82649C08(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82640A90"))) PPC_WEAK_FUNC(sub_82640A90);
PPC_FUNC_IMPL(__imp__sub_82640A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82640a00
	ctx.lr = 0x82640AB0;
	sub_82640A00(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82640ac8
	if (ctx.cr6.eq) goto loc_82640AC8;
	// bl 0x82186190
	ctx.lr = 0x82640AC4;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82640AC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82640AE0"))) PPC_WEAK_FUNC(sub_82640AE0);
PPC_FUNC_IMPL(__imp__sub_82640AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82640AE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82649d38
	ctx.lr = 0x82640B00;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stb r29,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r29.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-5656
	ctx.r11.s64 = ctx.r11.s64 + -5656;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82640B2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82640ba8
	if (ctx.cr6.eq) goto loc_82640BA8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-5676
	ctx.r4.s64 = ctx.r11.s64 + -5676;
	// bl 0x821620e8
	ctx.lr = 0x82640B4C;
	sub_821620E8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82619650
	ctx.lr = 0x82640B5C;
	sub_82619650(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82640b70
	if (ctx.cr6.eq) goto loc_82640B70;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x82640B70;
	sub_82659610(ctx, base);
loc_82640B70:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82640b84
	if (ctx.cr6.eq) goto loc_82640B84;
	// bl 0x82581e38
	ctx.lr = 0x82640B84;
	sub_82581E38(ctx, base);
loc_82640B84:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82640b94
	if (ctx.cr6.eq) goto loc_82640B94;
	// bl 0x82581e38
	ctx.lr = 0x82640B94;
	sub_82581E38(ctx, base);
loc_82640B94:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82640ba8
	if (ctx.cr6.lt) goto loc_82640BA8;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82186190
	ctx.lr = 0x82640BA8;
	sub_82186190(ctx, base);
loc_82640BA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82640BB8"))) PPC_WEAK_FUNC(sub_82640BB8);
PPC_FUNC_IMPL(__imp__sub_82640BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82640be4
	if (ctx.cr6.eq) goto loc_82640BE4;
	// bl 0x82581e38
	ctx.lr = 0x82640BE4;
	sub_82581E38(ctx, base);
loc_82640BE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82649c08
	ctx.lr = 0x82640BEC;
	sub_82649C08(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82640c04
	if (ctx.cr6.eq) goto loc_82640C04;
	// bl 0x82186190
	ctx.lr = 0x82640C00;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82640C04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82640C20"))) PPC_WEAK_FUNC(sub_82640C20);
PPC_FUNC_IMPL(__imp__sub_82640C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82640C28;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// bl 0x82649d38
	ctx.lr = 0x82640C40;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stb r28,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r28.u8);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-5632
	ctx.r11.s64 = ctx.r11.s64 + -5632;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82640C70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addi r4,r11,-5640
	ctx.r4.s64 = ctx.r11.s64 + -5640;
	// stb r29,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r29.u8);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x82161e08
	ctx.lr = 0x82640C98;
	sub_82161E08(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82619650
	ctx.lr = 0x82640CA8;
	sub_82619650(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82640cbc
	if (ctx.cr6.eq) goto loc_82640CBC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x82640CBC;
	sub_82659610(ctx, base);
loc_82640CBC:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82640cd0
	if (ctx.cr6.eq) goto loc_82640CD0;
	// bl 0x82581e38
	ctx.lr = 0x82640CD0;
	sub_82581E38(ctx, base);
loc_82640CD0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82640ce0
	if (ctx.cr6.eq) goto loc_82640CE0;
	// bl 0x82581e38
	ctx.lr = 0x82640CE0;
	sub_82581E38(ctx, base);
loc_82640CE0:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82640cf4
	if (ctx.cr6.lt) goto loc_82640CF4;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82186190
	ctx.lr = 0x82640CF4;
	sub_82186190(ctx, base);
loc_82640CF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82640D00"))) PPC_WEAK_FUNC(sub_82640D00);
PPC_FUNC_IMPL(__imp__sub_82640D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82640d2c
	if (ctx.cr6.eq) goto loc_82640D2C;
	// bl 0x82581e38
	ctx.lr = 0x82640D2C;
	sub_82581E38(ctx, base);
loc_82640D2C:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82640d3c
	if (ctx.cr6.eq) goto loc_82640D3C;
	// bl 0x82581e38
	ctx.lr = 0x82640D3C;
	sub_82581E38(ctx, base);
loc_82640D3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82649c08
	ctx.lr = 0x82640D44;
	sub_82649C08(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82640d5c
	if (ctx.cr6.eq) goto loc_82640D5C;
	// bl 0x82186190
	ctx.lr = 0x82640D58;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82640D5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82640D78"))) PPC_WEAK_FUNC(sub_82640D78);
PPC_FUNC_IMPL(__imp__sub_82640D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82640D80;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// bl 0x82649d38
	ctx.lr = 0x82640D98;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stb r28,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r28.u8);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-5612
	ctx.r11.s64 = ctx.r11.s64 + -5612;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82640DC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addi r4,r11,-8300
	ctx.r4.s64 = ctx.r11.s64 + -8300;
	// stb r29,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r29.u8);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x82161e08
	ctx.lr = 0x82640DEC;
	sub_82161E08(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82619650
	ctx.lr = 0x82640DFC;
	sub_82619650(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82640e10
	if (ctx.cr6.eq) goto loc_82640E10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x82640E10;
	sub_82659610(ctx, base);
loc_82640E10:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82640e24
	if (ctx.cr6.eq) goto loc_82640E24;
	// bl 0x82581e38
	ctx.lr = 0x82640E24;
	sub_82581E38(ctx, base);
loc_82640E24:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82640e34
	if (ctx.cr6.eq) goto loc_82640E34;
	// bl 0x82581e38
	ctx.lr = 0x82640E34;
	sub_82581E38(ctx, base);
loc_82640E34:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82640e48
	if (ctx.cr6.lt) goto loc_82640E48;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82186190
	ctx.lr = 0x82640E48;
	sub_82186190(ctx, base);
loc_82640E48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82640E58"))) PPC_WEAK_FUNC(sub_82640E58);
PPC_FUNC_IMPL(__imp__sub_82640E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8a0
	ctx.lr = 0x82640E60;
	__savegprlr_18(ctx, base);
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82649d38
	ctx.lr = 0x82640E74;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r11,r11,-5572
	ctx.r11.s64 = ctx.r11.s64 + -5572;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r24,4
	ctx.r24.s64 = 4;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// lis r23,-32045
	ctx.r23.s64 = -2100101120;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// stw r27,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r27.u32);
	// lfs f31,14088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f31.f64 = double(temp.f32);
	// addi r22,r11,6088
	ctx.r22.s64 = ctx.r11.s64 + 6088;
	// stw r27,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
	// addi r21,r11,9908
	ctx.r21.s64 = ctx.r11.s64 + 9908;
	// stw r27,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r27.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r27,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r27.u32);
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// li r25,15
	ctx.r25.s64 = 15;
	// addi r19,r11,-5596
	ctx.r19.s64 = ctx.r11.s64 + -5596;
	// stw r27,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r27.u32);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// stw r27,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// stw r27,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r27.u32);
	// addi r20,r11,-4548
	ctx.r20.s64 = ctx.r11.s64 + -4548;
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r27,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r27.u32);
	// stw r27,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r27.u32);
	// addi r18,r11,-5716
	ctx.r18.s64 = ctx.r11.s64 + -5716;
loc_82640EF8:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826e0998
	ctx.lr = 0x82640F08;
	sub_826E0998(ctx, base);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r25.u32);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r27,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r27.u8);
loc_82640F1C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82640f1c
	if (!ctx.cr6.eq) goto loc_82640F1C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82640F44;
	sub_82161E08(ctx, base);
	// lwz r4,26768(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 26768);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82640f5c
	if (!ctx.cr6.eq) goto loc_82640F5C;
	// bl 0x8216d1a0
	ctx.lr = 0x82640F54;
	sub_8216D1A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,26768(r23)
	PPC_STORE_U32(ctx.r23.u32 + 26768, ctx.r4.u32);
loc_82640F5C:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82582148
	ctx.lr = 0x82640F68;
	sub_82582148(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826df418
	ctx.lr = 0x82640F80;
	sub_826DF418(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82640f90
	if (ctx.cr6.eq) goto loc_82640F90;
	// bl 0x82659610
	ctx.lr = 0x82640F90;
	sub_82659610(ctx, base);
loc_82640F90:
	// addi r11,r26,14
	ctx.r11.s64 = ctx.r26.s64 + 14;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x82640fa8
	if (ctx.cr6.eq) goto loc_82640FA8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x82640FA8;
	sub_82659610(ctx, base);
loc_82640FA8:
	// lwzx r3,r29,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// stwx r30,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82640fbc
	if (ctx.cr6.eq) goto loc_82640FBC;
	// bl 0x82581e38
	ctx.lr = 0x82640FBC;
	sub_82581E38(ctx, base);
loc_82640FBC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82640fcc
	if (ctx.cr6.eq) goto loc_82640FCC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82581e38
	ctx.lr = 0x82640FCC;
	sub_82581E38(ctx, base);
loc_82640FCC:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82640fdc
	if (ctx.cr6.eq) goto loc_82640FDC;
	// bl 0x82581e38
	ctx.lr = 0x82640FDC;
	sub_82581E38(ctx, base);
loc_82640FDC:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82640ff0
	if (ctx.cr6.lt) goto loc_82640FF0;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82186190
	ctx.lr = 0x82640FF0;
	sub_82186190(ctx, base);
loc_82640FF0:
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r25.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stb r27,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r27.u8);
	// bne cr6,0x826410cc
	if (!ctx.cr6.eq) goto loc_826410CC;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825bac20
	ctx.lr = 0x8264100C;
	sub_825BAC20(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82641020
	if (ctx.cr6.eq) goto loc_82641020;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x82641020;
	sub_82659610(ctx, base);
loc_82641020:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82641034
	if (ctx.cr6.eq) goto loc_82641034;
	// bl 0x82581e38
	ctx.lr = 0x82641034;
	sub_82581E38(ctx, base);
loc_82641034:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82641044
	if (ctx.cr6.eq) goto loc_82641044;
	// bl 0x82581e38
	ctx.lr = 0x82641044;
	sub_82581E38(ctx, base);
loc_82641044:
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82641060;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x825bae48
	ctx.lr = 0x82641070;
	sub_825BAE48(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82641080
	if (ctx.cr6.eq) goto loc_82641080;
	// bl 0x82581e38
	ctx.lr = 0x82641080;
	sub_82581E38(ctx, base);
loc_82641080:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x825baeb8
	ctx.lr = 0x82641090;
	sub_825BAEB8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826410a0
	if (ctx.cr6.eq) goto loc_826410A0;
	// bl 0x82581e38
	ctx.lr = 0x826410A0;
	sub_82581E38(ctx, base);
loc_826410A0:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825babe0
	ctx.lr = 0x826410B8;
	sub_825BABE0(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826410CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826410CC:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826e0998
	ctx.lr = 0x826410DC;
	sub_826E0998(ctx, base);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// stw r25,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r25.u32);
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r27,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r27.u8);
loc_826410F0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826410f0
	if (!ctx.cr6.eq) goto loc_826410F0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82641118;
	sub_82161E08(ctx, base);
	// lwz r4,26768(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 26768);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82641130
	if (!ctx.cr6.eq) goto loc_82641130;
	// bl 0x8216d1a0
	ctx.lr = 0x82641128;
	sub_8216D1A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,26768(r23)
	PPC_STORE_U32(ctx.r23.u32 + 26768, ctx.r4.u32);
loc_82641130:
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82582148
	ctx.lr = 0x8264113C;
	sub_82582148(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826df418
	ctx.lr = 0x82641154;
	sub_826DF418(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82641164
	if (ctx.cr6.eq) goto loc_82641164;
	// bl 0x82659610
	ctx.lr = 0x82641164;
	sub_82659610(ctx, base);
loc_82641164:
	// addi r11,r26,18
	ctx.r11.s64 = ctx.r26.s64 + 18;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x8264117c
	if (ctx.cr6.eq) goto loc_8264117C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x8264117C;
	sub_82659610(ctx, base);
loc_8264117C:
	// lwzx r3,r28,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// stwx r30,r28,r31
	PPC_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82641190
	if (ctx.cr6.eq) goto loc_82641190;
	// bl 0x82581e38
	ctx.lr = 0x82641190;
	sub_82581E38(ctx, base);
loc_82641190:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826411a0
	if (ctx.cr6.eq) goto loc_826411A0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82581e38
	ctx.lr = 0x826411A0;
	sub_82581E38(ctx, base);
loc_826411A0:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826411b0
	if (ctx.cr6.eq) goto loc_826411B0;
	// bl 0x82581e38
	ctx.lr = 0x826411B0;
	sub_82581E38(ctx, base);
loc_826411B0:
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x826411c4
	if (ctx.cr6.lt) goto loc_826411C4;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82186190
	ctx.lr = 0x826411C4;
	sub_82186190(ctx, base);
loc_826411C4:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r25,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r25.u32);
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// stb r27,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r27.u8);
	// bl 0x825bac20
	ctx.lr = 0x826411D8;
	sub_825BAC20(ctx, base);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r26,22
	ctx.r11.s64 = ctx.r26.s64 + 22;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826411f4
	if (ctx.cr6.eq) goto loc_826411F4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82659610
	ctx.lr = 0x826411F4;
	sub_82659610(ctx, base);
loc_826411F4:
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// stwx r29,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82641208
	if (ctx.cr6.eq) goto loc_82641208;
	// bl 0x82581e38
	ctx.lr = 0x82641208;
	sub_82581E38(ctx, base);
loc_82641208:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82641218
	if (ctx.cr6.eq) goto loc_82641218;
	// bl 0x82581e38
	ctx.lr = 0x82641218;
	sub_82581E38(ctx, base);
loc_82641218:
	// lwzx r4,r28,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82641234;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// bl 0x825bae48
	ctx.lr = 0x82641244;
	sub_825BAE48(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82641254
	if (ctx.cr6.eq) goto loc_82641254;
	// bl 0x82581e38
	ctx.lr = 0x82641254;
	sub_82581E38(ctx, base);
loc_82641254:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x825baeb8
	ctx.lr = 0x82641264;
	sub_825BAEB8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82641274
	if (ctx.cr6.eq) goto loc_82641274;
	// bl 0x82581e38
	ctx.lr = 0x82641274;
	sub_82581E38(ctx, base);
loc_82641274:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825babe0
	ctx.lr = 0x8264128C;
	sub_825BABE0(ctx, base);
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826412A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// rlwinm r24,r24,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// blt cr6,0x82640ef8
	if (ctx.cr6.lt) goto loc_82640EF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x826de8f0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826412C0"))) PPC_WEAK_FUNC(sub_826412C0);
PPC_FUNC_IMPL(__imp__sub_826412C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x826412C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r29,104
	ctx.r31.s64 = ctx.r29.s64 + 104;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826412e4
	if (ctx.cr6.eq) goto loc_826412E4;
	// bl 0x82581e38
	ctx.lr = 0x826412E4;
	sub_82581E38(ctx, base);
loc_826412E4:
	// li r30,3
	ctx.r30.s64 = 3;
loc_826412E8:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826412fc
	if (ctx.cr6.eq) goto loc_826412FC;
	// bl 0x82581e38
	ctx.lr = 0x826412FC;
	sub_82581E38(ctx, base);
loc_826412FC:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x826412e8
	if (!ctx.cr6.lt) goto loc_826412E8;
	// addi r31,r29,88
	ctx.r31.s64 = ctx.r29.s64 + 88;
	// li r30,3
	ctx.r30.s64 = 3;
loc_82641310:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82641324
	if (ctx.cr6.eq) goto loc_82641324;
	// bl 0x82581e38
	ctx.lr = 0x82641324;
	sub_82581E38(ctx, base);
loc_82641324:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82641310
	if (!ctx.cr6.lt) goto loc_82641310;
	// addi r31,r29,72
	ctx.r31.s64 = ctx.r29.s64 + 72;
	// li r30,3
	ctx.r30.s64 = 3;
loc_82641338:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264134c
	if (ctx.cr6.eq) goto loc_8264134C;
	// bl 0x82581e38
	ctx.lr = 0x8264134C;
	sub_82581E38(ctx, base);
loc_8264134C:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82641338
	if (!ctx.cr6.lt) goto loc_82641338;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82649c08
	ctx.lr = 0x82641360;
	sub_82649C08(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82641368"))) PPC_WEAK_FUNC(sub_82641368);
PPC_FUNC_IMPL(__imp__sub_82641368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826412c0
	ctx.lr = 0x82641388;
	sub_826412C0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826413a0
	if (ctx.cr6.eq) goto loc_826413A0;
	// bl 0x82186190
	ctx.lr = 0x8264139C;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826413A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826413B8"))) PPC_WEAK_FUNC(sub_826413B8);
PPC_FUNC_IMPL(__imp__sub_826413B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b0
	ctx.lr = 0x826413C0;
	__savegprlr_22(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r31,48(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826413E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r26,52(r23)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r23.u32 + 52);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r4,r11,2152
	ctx.r4.s64 = ctx.r11.s64 + 2152;
	// lwz r25,36(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// stb r30,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r30.u8);
	// bl 0x82161e08
	ctx.lr = 0x82641414;
	sub_82161E08(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82641428;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x825f7420
	ctx.lr = 0x82641430;
	sub_825F7420(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82641448
	if (ctx.cr6.lt) goto loc_82641448;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82186190
	ctx.lr = 0x82641448;
	sub_82186190(ctx, base);
loc_82641448:
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stb r30,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r30.u8);
	// lwz r3,192(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 192);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// beq cr6,0x8264148c
	if (ctx.cr6.eq) goto loc_8264148C;
	// bl 0x82659610
	ctx.lr = 0x82641468;
	sub_82659610(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264148c
	if (ctx.cr6.eq) goto loc_8264148C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264148c
	if (ctx.cr6.eq) goto loc_8264148C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x824c2118
	ctx.lr = 0x8264148C;
	sub_824C2118(ctx, base);
loc_8264148C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8259afe0
	ctx.lr = 0x82641498;
	sub_8259AFE0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8259b088
	ctx.lr = 0x826414A4;
	sub_8259B088(ctx, base);
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8259afc0
	ctx.lr = 0x826414B8;
	sub_8259AFC0(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82632a58
	ctx.lr = 0x826414C4;
	sub_82632A58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r23,88
	ctx.r31.s64 = ctx.r23.s64 + 88;
	// li r29,4
	ctx.r29.s64 = 4;
	// lis r24,-32072
	ctx.r24.s64 = -2101870592;
	// stb r30,20(r28)
	PPC_STORE_U8(ctx.r28.u32 + 20, ctx.r30.u8);
loc_826414D8:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824c2118
	ctx.lr = 0x826414E4;
	sub_824C2118(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8259abe8
	ctx.lr = 0x826414F0;
	sub_8259ABE8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f3,28(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f4,32492(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 32492);
	ctx.f4.f64 = double(temp.f32);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lfs f2,24(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f1,20(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264151C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x826414d8
	if (!ctx.cr6.eq) goto loc_826414D8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8259afe0
	ctx.lr = 0x82641538;
	sub_8259AFE0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82632a58
	ctx.lr = 0x82641544;
	sub_82632A58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r28,3
	ctx.r28.s64 = 3;
	// addi r31,r23,96
	ctx.r31.s64 = ctx.r23.s64 + 96;
	// stb r11,20(r29)
	PPC_STORE_U8(ctx.r29.u32 + 20, ctx.r11.u8);
loc_82641558:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824c2118
	ctx.lr = 0x82641564;
	sub_824C2118(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8259abe8
	ctx.lr = 0x82641570;
	sub_8259ABE8(ctx, base);
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82652de8
	ctx.lr = 0x826415A4;
	sub_82652DE8(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826415b4
	if (ctx.cr6.eq) goto loc_826415B4;
	// bl 0x82581e38
	ctx.lr = 0x826415B4;
	sub_82581E38(ctx, base);
loc_826415B4:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826415c4
	if (ctx.cr6.eq) goto loc_826415C4;
	// bl 0x82581e38
	ctx.lr = 0x826415C4;
	sub_82581E38(ctx, base);
loc_826415C4:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826415d4
	if (ctx.cr6.eq) goto loc_826415D4;
	// bl 0x82581e38
	ctx.lr = 0x826415D4;
	sub_82581E38(ctx, base);
loc_826415D4:
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82641558
	if (!ctx.cr6.eq) goto loc_82641558;
	// addi r4,r23,104
	ctx.r4.s64 = ctx.r23.s64 + 104;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8259abe8
	ctx.lr = 0x826415F0;
	sub_8259ABE8(ctx, base);
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r23,72
	ctx.r4.s64 = ctx.r23.s64 + 72;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82652de8
	ctx.lr = 0x82641624;
	sub_82652DE8(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82641634
	if (ctx.cr6.eq) goto loc_82641634;
	// bl 0x82581e38
	ctx.lr = 0x82641634;
	sub_82581E38(ctx, base);
loc_82641634:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82641644
	if (ctx.cr6.eq) goto loc_82641644;
	// bl 0x82581e38
	ctx.lr = 0x82641644;
	sub_82581E38(ctx, base);
loc_82641644:
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82641654
	if (ctx.cr6.eq) goto loc_82641654;
	// bl 0x82581e38
	ctx.lr = 0x82641654;
	sub_82581E38(ctx, base);
loc_82641654:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82641694
	if (ctx.cr6.eq) goto loc_82641694;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82641694
	if (ctx.cr6.eq) goto loc_82641694;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x824c2118
	ctx.lr = 0x82641678;
	sub_824C2118(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8259abe8
	ctx.lr = 0x82641684;
	sub_8259ABE8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x824c2118
	ctx.lr = 0x82641690;
	sub_824C2118(ctx, base);
	// b 0x826416b4
	goto loc_826416B4;
loc_82641694:
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8259abe8
	ctx.lr = 0x826416A4;
	sub_8259ABE8(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826416b4
	if (ctx.cr6.eq) goto loc_826416B4;
	// bl 0x82581e38
	ctx.lr = 0x826416B4;
	sub_82581E38(ctx, base);
loc_826416B4:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826416c4
	if (ctx.cr6.eq) goto loc_826416C4;
	// bl 0x82581e38
	ctx.lr = 0x826416C4;
	sub_82581E38(ctx, base);
loc_826416C4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826de900
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826416D0"))) PPC_WEAK_FUNC(sub_826416D0);
PPC_FUNC_IMPL(__imp__sub_826416D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x826416D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82649d38
	ctx.lr = 0x826416EC;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-5552
	ctx.r11.s64 = ctx.r11.s64 + -5552;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r30,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82641714;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stb r30,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r30.u8);
	// lwz r4,32496(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32496);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82641734:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82641734
	if (!ctx.cr6.eq) goto loc_82641734;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82641758;
	sub_82161E08(ctx, base);
	// lis r31,-32045
	ctx.r31.s64 = -2100101120;
	// lwz r4,26768(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26768);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82641774
	if (!ctx.cr6.eq) goto loc_82641774;
	// bl 0x8216d1a0
	ctx.lr = 0x8264176C;
	sub_8216D1A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,26768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26768, ctx.r4.u32);
loc_82641774:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82582148
	ctx.lr = 0x82641780;
	sub_82582148(ctx, base);
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
	ctx.lr = 0x826417A0;
	sub_826DF418(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826417c0
	if (ctx.cr6.eq) goto loc_826417C0;
	// bl 0x82659610
	ctx.lr = 0x826417B0;
	sub_82659610(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826417c0
	if (ctx.cr6.eq) goto loc_826417C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x826417C0;
	sub_82659610(ctx, base);
loc_826417C0:
	// lwz r3,56(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// stw r31,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826417d4
	if (ctx.cr6.eq) goto loc_826417D4;
	// bl 0x82581e38
	ctx.lr = 0x826417D4;
	sub_82581E38(ctx, base);
loc_826417D4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826417e4
	if (ctx.cr6.eq) goto loc_826417E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581e38
	ctx.lr = 0x826417E4;
	sub_82581E38(ctx, base);
loc_826417E4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826417f4
	if (ctx.cr6.eq) goto loc_826417F4;
	// bl 0x82581e38
	ctx.lr = 0x826417F4;
	sub_82581E38(ctx, base);
loc_826417F4:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82641808
	if (ctx.cr6.lt) goto loc_82641808;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82186190
	ctx.lr = 0x82641808;
	sub_82186190(ctx, base);
loc_82641808:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82641818"))) PPC_WEAK_FUNC(sub_82641818);
PPC_FUNC_IMPL(__imp__sub_82641818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82641844
	if (ctx.cr6.eq) goto loc_82641844;
	// bl 0x82581e38
	ctx.lr = 0x82641844;
	sub_82581E38(ctx, base);
loc_82641844:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82649c08
	ctx.lr = 0x8264184C;
	sub_82649C08(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82641864
	if (ctx.cr6.eq) goto loc_82641864;
	// bl 0x82186190
	ctx.lr = 0x82641860;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82641864:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82641880"))) PPC_WEAK_FUNC(sub_82641880);
PPC_FUNC_IMPL(__imp__sub_82641880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82641888;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826419f4
	if (!ctx.cr6.eq) goto loc_826419F4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-13636
	ctx.r4.s64 = ctx.r11.s64 + -13636;
	// bl 0x82232238
	ctx.lr = 0x826418C4;
	sub_82232238(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826419f4
	if (ctx.cr6.eq) goto loc_826419F4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-5536
	ctx.r4.s64 = ctx.r11.s64 + -5536;
	// bl 0x821620e8
	ctx.lr = 0x826418E0;
	sub_821620E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82164140
	ctx.lr = 0x826418F0;
	sub_82164140(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825fc7b8
	ctx.lr = 0x826418F8;
	sub_825FC7B8(ctx, base);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// lwz r3,28564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28564);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82641910;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// beq cr6,0x82641924
	if (ctx.cr6.eq) goto loc_82641924;
	// bl 0x82659610
	ctx.lr = 0x82641924;
	sub_82659610(ctx, base);
loc_82641924:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823032b8
	ctx.lr = 0x82641930;
	sub_823032B8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82641940
	if (ctx.cr6.eq) goto loc_82641940;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581e38
	ctx.lr = 0x82641940;
	sub_82581E38(ctx, base);
loc_82641940:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82633d90
	ctx.lr = 0x82641950;
	sub_82633D90(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826419d4
	if (ctx.cr6.eq) goto loc_826419D4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826419c4
	if (ctx.cr6.eq) goto loc_826419C4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82160c88
	ctx.lr = 0x82641974;
	sub_82160C88(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82641990;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826419B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826419c0
	if (ctx.cr6.eq) goto loc_826419C0;
	// bl 0x82581e38
	ctx.lr = 0x826419C0;
	sub_82581E38(ctx, base);
loc_826419C0:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_826419C4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826419d4
	if (ctx.cr6.eq) goto loc_826419D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581e38
	ctx.lr = 0x826419D4;
	sub_82581E38(ctx, base);
loc_826419D4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// bne cr6,0x82641940
	if (!ctx.cr6.eq) goto loc_82641940;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x826419f4
	if (ctx.cr6.lt) goto loc_826419F4;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82186190
	ctx.lr = 0x826419F4;
	sub_82186190(ctx, base);
loc_826419F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82641A00"))) PPC_WEAK_FUNC(sub_82641A00);
PPC_FUNC_IMPL(__imp__sub_82641A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82641A08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// bl 0x82649d38
	ctx.lr = 0x82641A24;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-5528
	ctx.r11.s64 = ctx.r11.s64 + -5528;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// bl 0x82641880
	ctx.lr = 0x82641A4C;
	sub_82641880(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82641a60
	if (ctx.cr6.eq) goto loc_82641A60;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x82641A60;
	sub_82659610(ctx, base);
loc_82641A60:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82641a74
	if (ctx.cr6.eq) goto loc_82641A74;
	// bl 0x82581e38
	ctx.lr = 0x82641A74;
	sub_82581E38(ctx, base);
loc_82641A74:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82641a84
	if (ctx.cr6.eq) goto loc_82641A84;
	// bl 0x82581e38
	ctx.lr = 0x82641A84;
	sub_82581E38(ctx, base);
loc_82641A84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82641A90"))) PPC_WEAK_FUNC(sub_82641A90);
PPC_FUNC_IMPL(__imp__sub_82641A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b0
	ctx.lr = 0x82641A98;
	__savegprlr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x82649d38
	ctx.lr = 0x82641AB8;
	sub_82649D38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r11,r11,-5468
	ctx.r11.s64 = ctx.r11.s64 + -5468;
	// addi r31,r25,56
	ctx.r31.s64 = ctx.r25.s64 + 56;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// bl 0x8251fa78
	ctx.lr = 0x82641ADC;
	sub_8251FA78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82641b0c
	if (ctx.cr6.eq) goto loc_82641B0C;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828b36b0
	ctx.lr = 0x82641B00;
	sub_828B36B0(ctx, base);
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82641B0C:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,72(r25)
	PPC_STORE_U32(ctx.r25.u32 + 72, ctx.r3.u32);
	// beq cr6,0x82641b20
	if (ctx.cr6.eq) goto loc_82641B20;
	// bl 0x82659610
	ctx.lr = 0x82641B20;
	sub_82659610(ctx, base);
loc_82641B20:
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// stw r22,76(r25)
	PPC_STORE_U32(ctx.r25.u32 + 76, ctx.r22.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82641c74
	if (ctx.cr6.eq) goto loc_82641C74;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
loc_82641B34:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825bac20
	ctx.lr = 0x82641B3C;
	sub_825BAC20(ctx, base);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82641b5c
	if (ctx.cr6.eq) goto loc_82641B5C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82641b60
	if (ctx.cr6.lt) goto loc_82641B60;
loc_82641B5C:
	// twi 31,r0,22
loc_82641B60:
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82641b74
	if (ctx.cr6.eq) goto loc_82641B74;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82659610
	ctx.lr = 0x82641B74;
	sub_82659610(ctx, base);
loc_82641B74:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// lwzx r3,r27,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stwx r11,r27,r30
	PPC_STORE_U32(ctx.r27.u32 + ctx.r30.u32, ctx.r11.u32);
	// beq cr6,0x82641b8c
	if (ctx.cr6.eq) goto loc_82641B8C;
	// bl 0x82581e38
	ctx.lr = 0x82641B8C;
	sub_82581E38(ctx, base);
loc_82641B8C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82641b9c
	if (ctx.cr6.eq) goto loc_82641B9C;
	// bl 0x82581e38
	ctx.lr = 0x82641B9C;
	sub_82581E38(ctx, base);
loc_82641B9C:
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82641BB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82641bdc
	if (ctx.cr6.eq) goto loc_82641BDC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82641be0
	if (ctx.cr6.lt) goto loc_82641BE0;
loc_82641BDC:
	// twi 31,r0,22
loc_82641BE0:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r27,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// bl 0x825bae48
	ctx.lr = 0x82641BEC;
	sub_825BAE48(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82641bfc
	if (ctx.cr6.eq) goto loc_82641BFC;
	// bl 0x82581e38
	ctx.lr = 0x82641BFC;
	sub_82581E38(ctx, base);
loc_82641BFC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82641c1c
	if (ctx.cr6.eq) goto loc_82641C1C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82641c20
	if (ctx.cr6.lt) goto loc_82641C20;
loc_82641C1C:
	// twi 31,r0,22
loc_82641C20:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwzx r3,r27,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// bl 0x825baeb8
	ctx.lr = 0x82641C2C;
	sub_825BAEB8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82641c4c
	if (ctx.cr6.eq) goto loc_82641C4C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82641c50
	if (ctx.cr6.lt) goto loc_82641C50;
loc_82641C4C:
	// twi 31,r0,22
loc_82641C50:
	// lwzx r3,r27,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82641C64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82641b34
	if (!ctx.cr6.eq) goto loc_82641B34;
loc_82641C74:
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r22,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stb r22,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r22.u8);
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r4,r11,-5512
	ctx.r4.s64 = ctx.r11.s64 + -5512;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// bl 0x82161e08
	ctx.lr = 0x82641C98;
	sub_82161E08(ctx, base);
	// lis r31,-32045
	ctx.r31.s64 = -2100101120;
	// lwz r4,28784(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28784);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82641cb4
	if (!ctx.cr6.eq) goto loc_82641CB4;
	// bl 0x82370230
	ctx.lr = 0x82641CAC;
	sub_82370230(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,28784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28784, ctx.r4.u32);
loc_82641CB4:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82582648
	ctx.lr = 0x82641CCC;
	sub_82582648(ctx, base);
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,2412
	ctx.r6.s64 = ctx.r11.s64 + 2412;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,6088
	ctx.r5.s64 = ctx.r11.s64 + 6088;
	// bl 0x826df418
	ctx.lr = 0x82641CEC;
	sub_826DF418(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82641cfc
	if (ctx.cr6.eq) goto loc_82641CFC;
	// bl 0x82659610
	ctx.lr = 0x82641CFC;
	sub_82659610(ctx, base);
loc_82641CFC:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82641d0c
	if (ctx.cr6.eq) goto loc_82641D0C;
	// bl 0x82581e38
	ctx.lr = 0x82641D0C;
	sub_82581E38(ctx, base);
loc_82641D0C:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82641d20
	if (ctx.cr6.lt) goto loc_82641D20;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82186190
	ctx.lr = 0x82641D20;
	sub_82186190(ctx, base);
loc_82641D20:
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r22,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// stb r22,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r22.u8);
	// beq cr6,0x82641da4
	if (ctx.cr6.eq) goto loc_82641DA4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82641d9c
	if (ctx.cr6.eq) goto loc_82641D9C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,-16384
	ctx.r5.s64 = ctx.r11.s64 + -16384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82641D64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82641d78
	if (ctx.cr6.eq) goto loc_82641D78;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x82641D78;
	sub_82659610(ctx, base);
loc_82641D78:
	// lwz r3,76(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 76);
	// stw r30,76(r25)
	PPC_STORE_U32(ctx.r25.u32 + 76, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82641d8c
	if (ctx.cr6.eq) goto loc_82641D8C;
	// bl 0x82581e38
	ctx.lr = 0x82641D8C;
	sub_82581E38(ctx, base);
loc_82641D8C:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82641d9c
	if (ctx.cr6.eq) goto loc_82641D9C;
	// bl 0x82581e38
	ctx.lr = 0x82641D9C;
	sub_82581E38(ctx, base);
loc_82641D9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581e38
	ctx.lr = 0x82641DA4;
	sub_82581E38(ctx, base);
loc_82641DA4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826de900
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82641DB0"))) PPC_WEAK_FUNC(sub_82641DB0);
PPC_FUNC_IMPL(__imp__sub_82641DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82641dd8
	if (ctx.cr6.eq) goto loc_82641DD8;
	// bl 0x82581e38
	ctx.lr = 0x82641DD8;
	sub_82581E38(ctx, base);
loc_82641DD8:
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82641de8
	if (ctx.cr6.eq) goto loc_82641DE8;
	// bl 0x82581e38
	ctx.lr = 0x82641DE8;
	sub_82581E38(ctx, base);
loc_82641DE8:
	// addi r31,r30,56
	ctx.r31.s64 = ctx.r30.s64 + 56;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82641e10
	if (ctx.cr6.eq) goto loc_82641E10;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82279350
	ctx.lr = 0x82641E08;
	sub_82279350(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82641E10;
	sub_82186190(ctx, base);
loc_82641E10:
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
	// bl 0x82649c08
	ctx.lr = 0x82641E28;
	sub_82649C08(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82641E40"))) PPC_WEAK_FUNC(sub_82641E40);
PPC_FUNC_IMPL(__imp__sub_82641E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82641db0
	ctx.lr = 0x82641E60;
	sub_82641DB0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82641e78
	if (ctx.cr6.eq) goto loc_82641E78;
	// bl 0x82186190
	ctx.lr = 0x82641E74;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82641E78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82641E90"))) PPC_WEAK_FUNC(sub_82641E90);
PPC_FUNC_IMPL(__imp__sub_82641E90) {
	PPC_FUNC_PROLOGUE();
	// stw r4,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82641E98"))) PPC_WEAK_FUNC(sub_82641E98);
PPC_FUNC_IMPL(__imp__sub_82641E98) {
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
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x82186158
	ctx.lr = 0x82641EAC;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82641ec8
	if (ctx.cr6.eq) goto loc_82641EC8;
	// bl 0x82659620
	ctx.lr = 0x82641EB8;
	sub_82659620(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82641EC8:
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

__attribute__((alias("__imp__sub_82641EE0"))) PPC_WEAK_FUNC(sub_82641EE0);
PPC_FUNC_IMPL(__imp__sub_82641EE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// std r6,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r6.u64);
	// std r7,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r7.u64);
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// lwz r30,52(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 52);
	// lwz r31,48(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 48);
	// addze r7,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r7.s64 = temp.s64;
	// bge cr6,0x82641fc4
	if (!ctx.cr6.lt) goto loc_82641FC4;
loc_82641F0C:
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82641f38
	if (ctx.cr6.eq) goto loc_82641F38;
	// subfc r11,r31,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r31.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// b 0x82641f74
	goto loc_82641F74;
loc_82641F38:
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82641F40:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r6,r6,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x82641f64
	if (ctx.cr6.eq) goto loc_82641F64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82641f40
	if (ctx.cr6.eq) goto loc_82641F40;
loc_82641F64:
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82641F74:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82641fc4
	if (ctx.cr6.eq) goto loc_82641FC4;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// addze r7,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blt cr6,0x82641f0c
	if (ctx.cr6.lt) goto loc_82641F0C;
loc_82641FC4:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,56(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 56);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82641FF0"))) PPC_WEAK_FUNC(sub_82641FF0);
PPC_FUNC_IMPL(__imp__sub_82641FF0) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,152(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 152);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82642010
	if (!ctx.cr6.lt) goto loc_82642010;
	// lwz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_82642010:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82642018"))) PPC_WEAK_FUNC(sub_82642018);
PPC_FUNC_IMPL(__imp__sub_82642018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r10,-15256(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15256);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// bne cr6,0x82642078
	if (!ctx.cr6.eq) goto loc_82642078;
	// addi r31,r11,-15288
	ctx.r31.s64 = ctx.r11.s64 + -15288;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-15256(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15256, ctx.r11.u32);
	// bl 0x8265a550
	ctx.lr = 0x82642054;
	sub_8265A550(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28944
	ctx.r3.s64 = ctx.r11.s64 + -28944;
	// bl 0x826ded00
	ctx.lr = 0x82642060;
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
loc_82642078:
	// addi r3,r11,-15288
	ctx.r3.s64 = ctx.r11.s64 + -15288;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82642090"))) PPC_WEAK_FUNC(sub_82642090);
PPC_FUNC_IMPL(__imp__sub_82642090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r10,-15124(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15124);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// bne cr6,0x826420f0
	if (!ctx.cr6.eq) goto loc_826420F0;
	// addi r31,r11,-15252
	ctx.r31.s64 = ctx.r11.s64 + -15252;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-15124(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15124, ctx.r11.u32);
	// bl 0x8265cda8
	ctx.lr = 0x826420CC;
	sub_8265CDA8(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28960
	ctx.r3.s64 = ctx.r11.s64 + -28960;
	// bl 0x826ded00
	ctx.lr = 0x826420D8;
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
loc_826420F0:
	// addi r3,r11,-15252
	ctx.r3.s64 = ctx.r11.s64 + -15252;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82642108"))) PPC_WEAK_FUNC(sub_82642108);
PPC_FUNC_IMPL(__imp__sub_82642108) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r8,10922
	ctx.r8.s64 = 715784192;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// ori r8,r8,43691
	ctx.r8.u64 = ctx.r8.u64 | 43691;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mulhw r9,r9,r8
	ctx.r9.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32)) >> 32;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r9,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r9.s64;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
loc_82642148:
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r8.u32);
	// bne cr6,0x82642148
	if (!ctx.cr6.eq) goto loc_82642148;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82642178"))) PPC_WEAK_FUNC(sub_82642178);
PPC_FUNC_IMPL(__imp__sub_82642178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82642198
	if (ctx.cr6.eq) goto loc_82642198;
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// b 0x826421d4
	goto loc_826421D4;
loc_82642198:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
loc_826421A0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x826421c4
	if (ctx.cr6.eq) goto loc_826421C4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x826421a0
	if (ctx.cr6.eq) goto loc_826421A0;
loc_826421C4:
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_826421D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82642210
	if (ctx.cr6.eq) goto loc_82642210;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
loc_82642210:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82642230
	if (ctx.cr6.eq) goto loc_82642230;
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// b 0x8264226c
	goto loc_8264226C;
loc_82642230:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
loc_82642238:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8264225c
	if (ctx.cr6.eq) goto loc_8264225C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82642238
	if (ctx.cr6.eq) goto loc_82642238;
loc_8264225C:
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8264226C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826422a8
	if (ctx.cr6.eq) goto loc_826422A8;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r8,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r8.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
loc_826422A8:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826422c8
	if (ctx.cr6.eq) goto loc_826422C8;
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// b 0x82642304
	goto loc_82642304;
loc_826422C8:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
loc_826422D0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x826422f4
	if (ctx.cr6.eq) goto loc_826422F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x826422d0
	if (ctx.cr6.eq) goto loc_826422D0;
loc_826422F4:
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82642304:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82642348"))) PPC_WEAK_FUNC(sub_82642348);
PPC_FUNC_IMPL(__imp__sub_82642348) {
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
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82642444
	if (!ctx.cr6.lt) goto loc_82642444;
loc_82642370:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r9,-12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x826423a0
	if (ctx.cr6.eq) goto loc_826423A0;
	// subfc r10,r9,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r8.s64 - ctx.r9.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// b 0x826423dc
	goto loc_826423DC;
loc_826423A0:
	// lwz r8,-8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_826423A8:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r7,r7,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r7.s64;
	// beq cr6,0x826423cc
	if (ctx.cr6.eq) goto loc_826423CC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x826423a8
	if (ctx.cr6.eq) goto loc_826423A8;
loc_826423CC:
	// cntlzw r10,r7
	ctx.r10.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_826423DC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826423ec
	if (ctx.cr6.eq) goto loc_826423EC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_826423EC:
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// blt cr6,0x82642370
	if (ctx.cr6.lt) goto loc_82642370;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
loc_82642444:
	// bne cr6,0x8264248c
	if (!ctx.cr6.eq) goto loc_8264248C;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-12
	ctx.r10.s64 = ctx.r10.s64 + -12;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r4,r5,-1
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8264248C:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82641ee0
	ctx.lr = 0x8264249C;
	sub_82641EE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826424B0"))) PPC_WEAK_FUNC(sub_826424B0);
PPC_FUNC_IMPL(__imp__sub_826424B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x826424B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82186158
	ctx.lr = 0x826424E0;
	sub_82186158(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82186190
	ctx.lr = 0x826424F0;
	sub_82186190(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82642504
	if (ctx.cr6.lt) goto loc_82642504;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82642508
	goto loc_82642508;
loc_82642504:
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
loc_82642508:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x826dfce0
	ctx.lr = 0x82642514;
	sub_826DFCE0(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// ble cr6,0x82642588
	if (!ctx.cr6.gt) goto loc_82642588;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82186158
	ctx.lr = 0x8264252C;
	sub_82186158(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82186190
	ctx.lr = 0x8264253C;
	sub_82186190(ctx, base);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82642568
	if (ctx.cr6.lt) goto loc_82642568;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x826dfce0
	ctx.lr = 0x82642558;
	sub_826DFCE0(ctx, base);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// stb r26,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r26.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_82642568:
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x826dfce0
	ctx.lr = 0x82642578;
	sub_826DFCE0(ctx, base);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// stb r26,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r26.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_82642588:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82186190
	ctx.lr = 0x82642598;
	sub_82186190(ctx, base);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// stb r26,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r26.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826425A8"))) PPC_WEAK_FUNC(sub_826425A8);
PPC_FUNC_IMPL(__imp__sub_826425A8) {
	PPC_FUNC_PROLOGUE();
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826425c0
	if (!ctx.cr6.eq) goto loc_826425C0;
	// twi 31,r0,22
loc_826425C0:
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x826425ec
	if (ctx.cr6.gt) goto loc_826425EC;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x826425f0
	if (!ctx.cr6.lt) goto loc_826425F0;
loc_826425EC:
	// twi 31,r0,22
loc_826425F0:
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// ld r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82642600"))) PPC_WEAK_FUNC(sub_82642600);
PPC_FUNC_IMPL(__imp__sub_82642600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r10,-15096(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15096);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// bne cr6,0x8264266c
	if (!ctx.cr6.eq) goto loc_8264266C;
	// addi r31,r11,-15112
	ctx.r31.s64 = ctx.r11.s64 + -15112;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-15096(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15096, ctx.r11.u32);
	// bl 0x82581e70
	ctx.lr = 0x8264263C;
	sub_82581E70(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32081
	ctx.r10.s64 = -2102460416;
	// addi r11,r11,-5448
	ctx.r11.s64 = ctx.r11.s64 + -5448;
	// addi r3,r10,-28896
	ctx.r3.s64 = ctx.r10.s64 + -28896;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x82642654;
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
loc_8264266C:
	// addi r3,r11,-15112
	ctx.r3.s64 = ctx.r11.s64 + -15112;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82642688"))) PPC_WEAK_FUNC(sub_82642688);
PPC_FUNC_IMPL(__imp__sub_82642688) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,10922
	ctx.r9.s64 = 715784192;
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// ori r9,r9,43691
	ctx.r9.u64 = ctx.r9.u64 | 43691;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// mulhw r10,r10,r9
	ctx.r10.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r5
	ctx.r3.u64 = ctx.r10.u64 + ctx.r5.u64;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
loc_826426C4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// bne cr6,0x826426c4
	if (!ctx.cr6.eq) goto loc_826426C4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826426F0"))) PPC_WEAK_FUNC(sub_826426F0);
PPC_FUNC_IMPL(__imp__sub_826426F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x826426F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lis r10,10922
	ctx.r10.s64 = 715784192;
	// subf r11,r3,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r3.s64;
	// ori r10,r10,43691
	ctx.r10.u64 = ctx.r10.u64 | 43691;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mulhw r11,r11,r10
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32)) >> 32;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// ble cr6,0x82642798
	if (!ctx.cr6.gt) goto loc_82642798;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r9,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r27,r31,r3
	ctx.r27.u64 = ctx.r31.u64 + ctx.r3.u64;
	// rlwinm r28,r11,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r5,r28,r3
	ctx.r5.u64 = ctx.r28.u64 + ctx.r3.u64;
	// bl 0x82642178
	ctx.lr = 0x8264275C;
	sub_82642178(ctx, base);
	// add r5,r31,r30
	ctx.r5.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// subf r3,r31,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r31.s64;
	// bl 0x82642178
	ctx.lr = 0x8264276C;
	sub_82642178(ctx, base);
	// subf r31,r31,r29
	ctx.r31.s64 = ctx.r29.s64 - ctx.r31.s64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// subf r3,r28,r29
	ctx.r3.s64 = ctx.r29.s64 - ctx.r28.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82642178
	ctx.lr = 0x82642780;
	sub_82642178(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82642178
	ctx.lr = 0x82642790;
	sub_82642178(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_82642798:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82642178
	ctx.lr = 0x826427A4;
	sub_82642178(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826427B0"))) PPC_WEAK_FUNC(sub_826427B0);
PPC_FUNC_IMPL(__imp__sub_826427B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x826427B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r10,10922
	ctx.r10.s64 = 715784192;
	// subf r11,r29,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r29.s64;
	// ori r10,r10,43691
	ctx.r10.u64 = ctx.r10.u64 | 43691;
	// mulhw r11,r11,r10
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32)) >> 32;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 1;
	// addze r31,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r31.s64 = temp.s64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x8264282c
	if (!ctx.cr6.gt) goto loc_8264282C;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_826427FC:
	// addi r30,r30,-12
	ctx.r30.s64 = ctx.r30.s64 + -12;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82642348
	ctx.lr = 0x82642824;
	sub_82642348(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x826427fc
	if (ctx.cr6.gt) goto loc_826427FC;
loc_8264282C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82642838"))) PPC_WEAK_FUNC(sub_82642838);
PPC_FUNC_IMPL(__imp__sub_82642838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82642840;
	__savegprlr_29(ctx, base);
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x826429b0
	if (ctx.cr6.eq) goto loc_826429B0;
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x826429b0
	if (ctx.cr6.eq) goto loc_826429B0;
loc_82642854:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82642880
	if (ctx.cr6.eq) goto loc_82642880;
	// subfc r11,r11,r6
	ctx.xer.ca = ctx.r6.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// b 0x826428bc
	goto loc_826428BC;
loc_82642880:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82642888:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x826428ac
	if (ctx.cr6.eq) goto loc_826428AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82642888
	if (ctx.cr6.eq) goto loc_82642888;
loc_826428AC:
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_826428BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264290c
	if (ctx.cr6.eq) goto loc_8264290C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x826428fc
	if (ctx.cr6.eq) goto loc_826428FC;
loc_826428D4:
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// bne cr6,0x826428d4
	if (!ctx.cr6.eq) goto loc_826428D4;
loc_826428FC:
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// b 0x826429a4
	goto loc_826429A4;
loc_8264290C:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_82642910:
	// addi r7,r7,-12
	ctx.r7.s64 = ctx.r7.s64 + -12;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82642930
	if (ctx.cr6.eq) goto loc_82642930;
	// subfc r11,r11,r6
	ctx.xer.ca = ctx.r6.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// b 0x8264296c
	goto loc_8264296C;
loc_82642930:
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82642938:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8264295c
	if (ctx.cr6.eq) goto loc_8264295C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82642938
	if (ctx.cr6.eq) goto loc_82642938;
loc_8264295C:
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8264296C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82642998
	if (ctx.cr6.eq) goto loc_82642998;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// b 0x82642910
	goto loc_82642910;
loc_82642998:
	// stw r6,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r6.u32);
	// stw r30,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r30.u32);
	// stw r29,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r29.u32);
loc_826429A4:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82642854
	if (!ctx.cr6.eq) goto loc_82642854;
loc_826429B0:
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826429B8"))) PPC_WEAK_FUNC(sub_826429B8);
PPC_FUNC_IMPL(__imp__sub_826429B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x826429C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82642a10
	if (ctx.cr6.eq) goto loc_82642A10;
	// addi r29,r3,-4
	ctx.r29.s64 = ctx.r3.s64 + -4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// add r30,r10,r3
	ctx.r30.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82642a08
	if (ctx.cr6.lt) goto loc_82642A08;
loc_826429E8:
	// addi r30,r30,-16
	ctx.r30.s64 = ctx.r30.s64 + -16;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x826429F4;
	sub_82186190(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82186190
	ctx.lr = 0x826429FC;
	sub_82186190(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x826429e8
	if (!ctx.cr6.lt) goto loc_826429E8;
loc_82642A08:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82186190
	ctx.lr = 0x82642A10;
	sub_82186190(ctx, base);
loc_82642A10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82642A18"))) PPC_WEAK_FUNC(sub_82642A18);
PPC_FUNC_IMPL(__imp__sub_82642A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82642A20;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lis r10,10922
	ctx.r10.s64 = 715784192;
	// subf r11,r29,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r29.s64;
	// ori r10,r10,43691
	ctx.r10.u64 = ctx.r10.u64 | 43691;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mulhw r11,r11,r10
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32)) >> 32;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addi r5,r28,-12
	ctx.r5.s64 = ctx.r28.s64 + -12;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826426f0
	ctx.lr = 0x82642A74;
	sub_826426F0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82642b58
	if (!ctx.cr6.lt) goto loc_82642B58;
loc_82642A84:
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r6,-12(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82642aa4
	if (ctx.cr6.eq) goto loc_82642AA4;
	// subfc r11,r7,r6
	ctx.xer.ca = ctx.r6.u32 >= ctx.r7.u32;
	ctx.r11.s64 = ctx.r6.s64 - ctx.r7.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// b 0x82642ae0
	goto loc_82642AE0;
loc_82642AA4:
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r10,-8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + -8);
loc_82642AAC:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r8,r8,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r8.s64;
	// beq cr6,0x82642ad0
	if (ctx.cr6.eq) goto loc_82642AD0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82642aac
	if (ctx.cr6.eq) goto loc_82642AAC;
loc_82642AD0:
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82642AE0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82642b58
	if (!ctx.cr6.eq) goto loc_82642B58;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82642b04
	if (ctx.cr6.eq) goto loc_82642B04;
	// subfc r11,r6,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r6.u32;
	ctx.r11.s64 = ctx.r7.s64 - ctx.r6.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// b 0x82642b40
	goto loc_82642B40;
loc_82642B04:
	// lwz r9,-8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + -8);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
loc_82642B0C:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r8,r8,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r8.s64;
	// beq cr6,0x82642b30
	if (ctx.cr6.eq) goto loc_82642B30;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82642b0c
	if (ctx.cr6.eq) goto loc_82642B0C;
loc_82642B30:
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82642B40:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82642b58
	if (!ctx.cr6.eq) goto loc_82642B58;
	// addi r5,r5,-12
	ctx.r5.s64 = ctx.r5.s64 + -12;
	// cmplw cr6,r29,r5
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82642a84
	if (ctx.cr6.lt) goto loc_82642A84;
loc_82642B58:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82642c34
	if (!ctx.cr6.lt) goto loc_82642C34;
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_82642B64:
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82642b80
	if (ctx.cr6.eq) goto loc_82642B80;
	// subfc r11,r6,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r6.u32;
	ctx.r11.s64 = ctx.r7.s64 - ctx.r6.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// b 0x82642bbc
	goto loc_82642BBC;
loc_82642B80:
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82642B88:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82642bac
	if (ctx.cr6.eq) goto loc_82642BAC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82642b88
	if (ctx.cr6.eq) goto loc_82642B88;
loc_82642BAC:
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82642BBC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82642c34
	if (!ctx.cr6.eq) goto loc_82642C34;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82642be0
	if (ctx.cr6.eq) goto loc_82642BE0;
	// subfc r11,r7,r6
	ctx.xer.ca = ctx.r6.u32 >= ctx.r7.u32;
	ctx.r11.s64 = ctx.r6.s64 - ctx.r7.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// b 0x82642c1c
	goto loc_82642C1C;
loc_82642BE0:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
loc_82642BE8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82642c0c
	if (ctx.cr6.eq) goto loc_82642C0C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82642be8
	if (ctx.cr6.eq) goto loc_82642BE8;
loc_82642C0C:
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82642C1C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82642c34
	if (!ctx.cr6.eq) goto loc_82642C34;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82642b64
	if (ctx.cr6.lt) goto loc_82642B64;
loc_82642C34:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
loc_82642C3C:
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82642d50
	if (!ctx.cr6.lt) goto loc_82642D50;
loc_82642C44:
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82642c64
	if (ctx.cr6.eq) goto loc_82642C64;
	// subfc r11,r6,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r6.u32;
	ctx.r11.s64 = ctx.r7.s64 - ctx.r6.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// b 0x82642ca0
	goto loc_82642CA0;
loc_82642C64:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
loc_82642C6C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82642c90
	if (ctx.cr6.eq) goto loc_82642C90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82642c6c
	if (ctx.cr6.eq) goto loc_82642C6C;
loc_82642C90:
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82642CA0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82642d44
	if (!ctx.cr6.eq) goto loc_82642D44;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82642cc4
	if (ctx.cr6.eq) goto loc_82642CC4;
	// subfc r11,r7,r6
	ctx.xer.ca = ctx.r6.u32 >= ctx.r7.u32;
	ctx.r11.s64 = ctx.r6.s64 - ctx.r7.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// b 0x82642d00
	goto loc_82642D00;
loc_82642CC4:
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82642CCC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82642cf0
	if (ctx.cr6.eq) goto loc_82642CF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82642ccc
	if (ctx.cr6.eq) goto loc_82642CCC;
loc_82642CF0:
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82642D00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82642d50
	if (!ctx.cr6.eq) goto loc_82642D50;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
loc_82642D44:
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82642c44
	if (ctx.cr6.lt) goto loc_82642C44;
loc_82642D50:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82642e6c
	if (!ctx.cr6.gt) goto loc_82642E6C;
	// addi r7,r31,-12
	ctx.r7.s64 = ctx.r31.s64 + -12;
loc_82642D5C:
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82642d7c
	if (ctx.cr6.eq) goto loc_82642D7C;
	// subfc r11,r4,r6
	ctx.xer.ca = ctx.r6.u32 >= ctx.r4.u32;
	ctx.r11.s64 = ctx.r6.s64 - ctx.r4.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// b 0x82642db8
	goto loc_82642DB8;
loc_82642D7C:
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
loc_82642D84:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82642da8
	if (ctx.cr6.eq) goto loc_82642DA8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82642d84
	if (ctx.cr6.eq) goto loc_82642D84;
loc_82642DA8:
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82642DB8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82642e58
	if (!ctx.cr6.eq) goto loc_82642E58;
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82642ddc
	if (ctx.cr6.eq) goto loc_82642DDC;
	// subfc r11,r6,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r6.u32;
	ctx.r11.s64 = ctx.r4.s64 - ctx.r6.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// b 0x82642e18
	goto loc_82642E18;
loc_82642DDC:
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
loc_82642DE4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82642e08
	if (ctx.cr6.eq) goto loc_82642E08;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82642de4
	if (ctx.cr6.eq) goto loc_82642DE4;
loc_82642E08:
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82642E18:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82642e68
	if (!ctx.cr6.eq) goto loc_82642E68;
	// addi r5,r5,-12
	ctx.r5.s64 = ctx.r5.s64 + -12;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r8,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r8.u32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
loc_82642E58:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// addi r7,r7,-12
	ctx.r7.s64 = ctx.r7.s64 + -12;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82642d5c
	if (ctx.cr6.lt) goto loc_82642D5C;
loc_82642E68:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
loc_82642E6C:
	// bne cr6,0x82642ef8
	if (!ctx.cr6.eq) goto loc_82642EF8;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82642fb0
	if (ctx.cr6.eq) goto loc_82642FB0;
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82642eb0
	if (ctx.cr6.eq) goto loc_82642EB0;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r8,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r8.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
loc_82642EB0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// addi r5,r5,12
	ctx.r5.s64 = ctx.r5.s64 + 12;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// b 0x82642c3c
	goto loc_82642C3C;
loc_82642EF8:
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// bne cr6,0x82642f78
	if (!ctx.cr6.eq) goto loc_82642F78;
	// addi r5,r5,-12
	ctx.r5.s64 = ctx.r5.s64 + -12;
	// cmplw cr6,r31,r5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82642f40
	if (ctx.cr6.eq) goto loc_82642F40;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
loc_82642F40:
	// addi r30,r30,-12
	ctx.r30.s64 = ctx.r30.s64 + -12;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r8,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r8.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// b 0x82642c3c
	goto loc_82642C3C;
loc_82642F78:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x82642c3c
	goto loc_82642C3C;
loc_82642FB0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r5,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r5.u32);
	// stw r30,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82642FC8"))) PPC_WEAK_FUNC(sub_82642FC8);
PPC_FUNC_IMPL(__imp__sub_82642FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82642FD0;
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
	// lwz r4,-15052(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -15052);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82642ff8
	if (!ctx.cr6.eq) goto loc_82642FF8;
	// bl 0x82642600
	ctx.lr = 0x82642FF0;
	sub_82642600(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,-15052(r29)
	PPC_STORE_U32(ctx.r29.u32 + -15052, ctx.r4.u32);
loc_82642FF8:
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
	ctx.lr = 0x82643010;
	sub_82582648(ctx, base);
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,-32156
	ctx.r6.s64 = ctx.r11.s64 + -32156;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,6088
	ctx.r5.s64 = ctx.r11.s64 + 6088;
	// bl 0x826df418
	ctx.lr = 0x82643030;
	sub_826DF418(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82643040
	if (ctx.cr6.eq) goto loc_82643040;
	// bl 0x82659610
	ctx.lr = 0x82643040;
	sub_82659610(ctx, base);
loc_82643040:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82643050
	if (ctx.cr6.eq) goto loc_82643050;
	// bl 0x82581e38
	ctx.lr = 0x82643050;
	sub_82581E38(ctx, base);
loc_82643050:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82643060"))) PPC_WEAK_FUNC(sub_82643060);
PPC_FUNC_IMPL(__imp__sub_82643060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82643068;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,10922
	ctx.r11.s64 = 715784192;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r29,r11,43691
	ctx.r29.u64 = ctx.r11.u64 | 43691;
	// subf r30,r31,r4
	ctx.r30.s64 = ctx.r4.s64 - ctx.r31.s64;
	// mulhw r11,r30,r29
	ctx.r11.s64 = (int64_t(ctx.r30.s32) * int64_t(ctx.r29.s32)) >> 32;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8264310c
	if (!ctx.cr6.gt) goto loc_8264310C;
	// addi r28,r31,-12
	ctx.r28.s64 = ctx.r31.s64 + -12;
loc_82643098:
	// add r11,r28,r30
	ctx.r11.u64 = ctx.r28.u64 + ctx.r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r30,-12
	ctx.r10.s64 = ctx.r30.s64 + -12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mulhw r10,r10,r29
	ctx.r10.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32)) >> 32;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82642348
	ctx.lr = 0x826430F0;
	sub_82642348(ctx, base);
	// addi r30,r30,-12
	ctx.r30.s64 = ctx.r30.s64 + -12;
	// mulhw r11,r30,r29
	ctx.r11.s64 = (int64_t(ctx.r30.s32) * int64_t(ctx.r29.s32)) >> 32;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82643098
	if (ctx.cr6.gt) goto loc_82643098;
loc_8264310C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82643118"))) PPC_WEAK_FUNC(sub_82643118);
PPC_FUNC_IMPL(__imp__sub_82643118) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82643158
	if (ctx.cr6.eq) goto loc_82643158;
loc_82643128:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82643148
	if (ctx.cr6.eq) goto loc_82643148;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_82643148:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82643128
	if (!ctx.cr6.eq) goto loc_82643128;
loc_82643158:
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82643170"))) PPC_WEAK_FUNC(sub_82643170);
PPC_FUNC_IMPL(__imp__sub_82643170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82643178;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// std r6,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r6.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r29,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r29.u64);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826431a8
	if (ctx.cr6.eq) goto loc_826431A8;
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826431ac
	if (ctx.cr6.eq) goto loc_826431AC;
loc_826431A8:
	// twi 31,r0,22
loc_826431AC:
	// lwz r5,148(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
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
	// beq cr6,0x826431dc
	if (ctx.cr6.eq) goto loc_826431DC;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82642688
	ctx.lr = 0x826431D8;
	sub_82642688(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_826431DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r29,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r29.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826431F0"))) PPC_WEAK_FUNC(sub_826431F0);
PPC_FUNC_IMPL(__imp__sub_826431F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x826431F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,10922
	ctx.r10.s64 = 715784192;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ori r31,r10,43691
	ctx.r31.u64 = ctx.r10.u64 | 43691;
	// subf r11,r29,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r29.s64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mulhw r11,r11,r31
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32)) >> 32;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x826432d4
	if (!ctx.cr6.gt) goto loc_826432D4;
loc_8264322C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x826432f4
	if (!ctx.cr6.gt) goto loc_826432F4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82642a18
	ctx.lr = 0x82643244;
	sub_82642A18(ctx, base);
	// srawi r11,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 1;
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// subf r10,r27,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r27.s64;
	// subf r9,r29,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r29.s64;
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// mulhw r10,r10,r31
	ctx.r10.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32)) >> 32;
	// mulhw r9,r9,r31
	ctx.r9.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32)) >> 32;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// add r28,r8,r11
	ctx.r28.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x826432a8
	if (!ctx.cr6.lt) goto loc_826432A8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826431f0
	ctx.lr = 0x826432A0;
	sub_826431F0(ctx, base);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// b 0x826432b8
	goto loc_826432B8;
loc_826432A8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826431f0
	ctx.lr = 0x826432B4;
	sub_826431F0(ctx, base);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_826432B8:
	// subf r11,r29,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r29.s64;
	// mulhw r11,r11,r31
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32)) >> 32;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bgt cr6,0x8264322c
	if (ctx.cr6.gt) goto loc_8264322C;
loc_826432D4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x826432ec
	if (!ctx.cr6.gt) goto loc_826432EC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82642838
	ctx.lr = 0x826432EC;
	sub_82642838(ctx, base);
loc_826432EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_826432F4:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x826432d4
	if (!ctx.cr6.gt) goto loc_826432D4;
	// subf r11,r29,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r29.s64;
	// mulhw r11,r11,r31
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32)) >> 32;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8264332c
	if (!ctx.cr6.gt) goto loc_8264332C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826427b0
	ctx.lr = 0x8264332C;
	sub_826427B0(ctx, base);
loc_8264332C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82643060
	ctx.lr = 0x82643338;
	sub_82643060(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82643340"))) PPC_WEAK_FUNC(sub_82643340);
PPC_FUNC_IMPL(__imp__sub_82643340) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82643410
	if (ctx.cr6.eq) goto loc_82643410;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821620e8
	ctx.lr = 0x82643364;
	sub_821620E8(ctx, base);
	// addi r31,r31,136
	ctx.r31.s64 = ctx.r31.s64 + 136;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823a1aa8
	ctx.lr = 0x82643378;
	sub_823A1AA8(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8264338c
	if (ctx.cr6.lt) goto loc_8264338C;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82186190
	ctx.lr = 0x8264338C;
	sub_82186190(ctx, base);
loc_8264338C:
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826433b8
	if (ctx.cr6.eq) goto loc_826433B8;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x826433bc
	if (ctx.cr6.eq) goto loc_826433BC;
loc_826433B8:
	// twi 31,r0,22
loc_826433BC:
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
	// beq cr6,0x82643410
	if (ctx.cr6.eq) goto loc_82643410;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826433e8
	if (!ctx.cr6.eq) goto loc_826433E8;
	// twi 31,r0,22
loc_826433E8:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826433f8
	if (!ctx.cr6.eq) goto loc_826433F8;
	// twi 31,r0,22
loc_826433F8:
	// lhz r3,40(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 40);
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
loc_82643410:
	// li r3,-1
	ctx.r3.s64 = -1;
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

__attribute__((alias("__imp__sub_82643428"))) PPC_WEAK_FUNC(sub_82643428);
PPC_FUNC_IMPL(__imp__sub_82643428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b8
	ctx.lr = 0x82643430;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r27,0(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r25,4(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lis r10,10922
	ctx.r10.s64 = 715784192;
	// lwz r24,8(r6)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// std r4,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r4.u64);
	// ori r28,r10,43691
	ctx.r28.u64 = ctx.r10.u64 | 43691;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// bne cr6,0x82643474
	if (!ctx.cr6.eq) goto loc_82643474;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x8264348c
	goto loc_8264348C;
loc_82643474:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mulhw r10,r10,r28
	ctx.r10.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32)) >> 32;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8264348C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8264380c
	if (ctx.cr6.eq) goto loc_8264380C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826434a4
	if (!ctx.cr6.eq) goto loc_826434A4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x826434bc
	goto loc_826434BC;
loc_826434A4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mulhw r10,r10,r28
	ctx.r10.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32)) >> 32;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_826434BC:
	// lis r9,5461
	ctx.r9.s64 = 357892096;
	// ori r8,r9,21845
	ctx.r8.u64 = ctx.r9.u64 | 21845;
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x826434dc
	if (!ctx.cr6.lt) goto loc_826434DC;
	// bl 0x8231c3a8
	ctx.lr = 0x826434D4;
	sub_8231C3A8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
loc_826434DC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826434ec
	if (!ctx.cr6.eq) goto loc_826434EC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82643504
	goto loc_82643504;
loc_826434EC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mulhw r10,r10,r28
	ctx.r10.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32)) >> 32;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82643504:
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8264369c
	if (!ctx.cr6.lt) goto loc_8264369C;
	// rlwinm r10,r7,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// li r27,0
	ctx.r27.s64 = 0;
	// subf r9,r10,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82643528
	if (ctx.cr6.lt) goto loc_82643528;
	// add r27,r10,r7
	ctx.r27.u64 = ctx.r10.u64 + ctx.r7.u64;
loc_82643528:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82643538
	if (!ctx.cr6.eq) goto loc_82643538;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82643550
	goto loc_82643550;
loc_82643538:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mulhw r10,r10,r28
	ctx.r10.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32)) >> 32;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82643550:
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82643580
	if (!ctx.cr6.lt) goto loc_82643580;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264357c
	if (ctx.cr6.eq) goto loc_8264357C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mulhw r11,r11,r28
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32)) >> 32;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8264357C:
	// add r27,r11,r26
	ctx.r27.u64 = ctx.r11.u64 + ctx.r26.u64;
loc_82643580:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8265a8b8
	ctx.lr = 0x8264358C;
	sub_8265A8B8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,204(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// beq cr6,0x826435d4
	if (ctx.cr6.eq) goto loc_826435D4;
loc_826435A4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826435c4
	if (ctx.cr6.eq) goto loc_826435C4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
loc_826435C4:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x826435a4
	if (!ctx.cr6.eq) goto loc_826435A4;
loc_826435D4:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82643118
	ctx.lr = 0x826435E4;
	sub_82643118(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8264362c
	if (ctx.cr6.eq) goto loc_8264362C;
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
loc_826435F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264361c
	if (ctx.cr6.eq) goto loc_8264361C;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
loc_8264361C:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x826435f8
	if (!ctx.cr6.eq) goto loc_826435F8;
loc_8264362C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82643640
	if (!ctx.cr6.eq) goto loc_82643640;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82643658
	goto loc_82643658;
loc_82643640:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// mulhw r11,r11,r28
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32)) >> 32;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82643658:
	// add r30,r11,r26
	ctx.r30.u64 = ctx.r11.u64 + ctx.r26.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82643668
	if (ctx.cr6.eq) goto loc_82643668;
	// bl 0x82186190
	ctx.lr = 0x82643668;
	sub_82186190(ctx, base);
loc_82643668:
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
loc_8264369C:
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,204(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// subf r11,r30,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r30.s64;
	// mulhw r11,r11,r28
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32)) >> 32;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82643770
	if (!ctx.cr6.lt) goto loc_82643770;
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// beq cr6,0x8264370c
	if (ctx.cr6.eq) goto loc_8264370C;
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
loc_826436DC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826436fc
	if (ctx.cr6.eq) goto loc_826436FC;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_826436FC:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x826436dc
	if (!ctx.cr6.eq) goto loc_826436DC;
loc_8264370C:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r30,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r30.s64;
	// mulhw r11,r11,r28
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32)) >> 32;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r5,r11,r26
	ctx.r5.s64 = ctx.r26.s64 - ctx.r11.s64;
	// bl 0x82643118
	ctx.lr = 0x82643734;
	sub_82643118(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// subf r9,r29,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r29.s64;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// beq cr6,0x8264380c
	if (ctx.cr6.eq) goto loc_8264380C;
loc_82643750:
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// stw r24,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r24.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82643750
	if (!ctx.cr6.eq) goto loc_82643750;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
loc_82643770:
	// rlwinm r10,r26,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r26,r10
	ctx.r10.u64 = ctx.r26.u64 + ctx.r10.u64;
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r4,r29,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r29.s64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x826437c0
	if (ctx.cr6.eq) goto loc_826437C0;
loc_82643790:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826437b0
	if (ctx.cr6.eq) goto loc_826437B0;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_826437B0:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82643790
	if (!ctx.cr6.eq) goto loc_82643790;
loc_826437C0:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82642108
	ctx.lr = 0x826437E4;
	sub_82642108(ctx, base);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8264380c
	if (ctx.cr6.eq) goto loc_8264380C;
loc_826437F4:
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// stw r24,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r24.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826437f4
	if (!ctx.cr6.eq) goto loc_826437F4;
loc_8264380C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82643818"))) PPC_WEAK_FUNC(sub_82643818);
PPC_FUNC_IMPL(__imp__sub_82643818) {
	PPC_FUNC_PROLOGUE();
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
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// lis r10,10922
	ctx.r10.s64 = 715784192;
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// ori r10,r10,43691
	ctx.r10.u64 = ctx.r10.u64 | 43691;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82643854
	if (!ctx.cr6.eq) goto loc_82643854;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8264386c
	goto loc_8264386C;
loc_82643854:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// mulhw r9,r9,r10
	ctx.r9.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32)) >> 32;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_8264386C:
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x826438d4
	if (!ctx.cr6.lt) goto loc_826438D4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82643884
	if (!ctx.cr6.eq) goto loc_82643884;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x826438a0
	goto loc_826438A0;
loc_82643884:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// mulhw r10,r10,r8
	ctx.r10.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32)) >> 32;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_826438A0:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x826438b0
	if (!ctx.cr6.gt) goto loc_826438B0;
	// twi 31,r0,22
loc_826438B0:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// subf r5,r9,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r9.s64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82643428
	ctx.lr = 0x826438D0;
	sub_82643428(ctx, base);
	// b 0x82643954
	goto loc_82643954;
loc_826438D4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82643954
	if (ctx.cr6.eq) goto loc_82643954;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// mulhw r10,r10,r8
	ctx.r10.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32)) >> 32;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82643954
	if (!ctx.cr6.lt) goto loc_82643954;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8264390c
	if (!ctx.cr6.gt) goto loc_8264390C;
	// twi 31,r0,22
loc_8264390C:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82643924
	if (!ctx.cr6.gt) goto loc_82643924;
	// twi 31,r0,22
loc_82643924:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826425a8
	ctx.lr = 0x8264393C;
	sub_826425A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ld r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82643170
	ctx.lr = 0x82643954;
	sub_82643170(ctx, base);
loc_82643954:
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

__attribute__((alias("__imp__sub_82643970"))) PPC_WEAK_FUNC(sub_82643970);
PPC_FUNC_IMPL(__imp__sub_82643970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de890
	ctx.lr = 0x82643978;
	__savegprlr_14(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// lhz r30,152(r26)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r26.u32 + 152);
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// bge cr6,0x826439a4
	if (!ctx.cr6.lt) goto loc_826439A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x826de8e0
	__restgprlr_14(ctx, base);
	return;
loc_826439A4:
	// addi r11,r1,152
	ctx.r11.s64 = ctx.r1.s64 + 152;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// ble cr6,0x826439f0
	if (!ctx.cr6.gt) goto loc_826439F0;
	// lwz r10,148(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 148);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_826439C8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r1,152
	ctx.r8.s64 = ctx.r1.s64 + 152;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwx r7,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
	// bne cr6,0x826439c8
	if (!ctx.cr6.eq) goto loc_826439C8;
loc_826439F0:
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82643a0c
	if (!ctx.cr6.gt) goto loc_82643A0C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r3,r26,156
	ctx.r3.s64 = ctx.r26.s64 + 156;
	// bl 0x8264b2e0
	ctx.lr = 0x82643A0C;
	sub_8264B2E0(ctx, base);
loc_82643A0C:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r31,160(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r11,-17756(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17756);
	// lbz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 168);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// ble cr6,0x82643a58
	if (!ctx.cr6.gt) goto loc_82643A58;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r26,172
	ctx.r3.s64 = ctx.r26.s64 + 172;
	// bl 0x8264b2e0
	ctx.lr = 0x82643A44;
	sub_8264B2E0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r3,r26,188
	ctx.r3.s64 = ctx.r26.s64 + 188;
	// bl 0x8264b2e0
	ctx.lr = 0x82643A58;
	sub_8264B2E0(ctx, base);
loc_82643A58:
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r29,r11,-15252
	ctx.r29.s64 = ctx.r11.s64 + -15252;
	// lwz r3,-15116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -15116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bne cr6,0x82643aac
	if (!ctx.cr6.eq) goto loc_82643AAC;
	// lwz r11,-15124(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15124);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82643aa4
	if (!ctx.cr6.eq) goto loc_82643AA4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,-15124(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15124, ctx.r11.u32);
	// bl 0x8265cda8
	ctx.lr = 0x82643A98;
	sub_8265CDA8(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28960
	ctx.r3.s64 = ctx.r11.s64 + -28960;
	// bl 0x826ded00
	ctx.lr = 0x82643AA4;
	sub_826DED00(ctx, base);
loc_82643AA4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r3,-15116(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15116, ctx.r3.u32);
loc_82643AAC:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8265a660
	ctx.lr = 0x82643AB4;
	sub_8265A660(ctx, base);
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// addi r11,r1,152
	ctx.r11.s64 = ctx.r1.s64 + 152;
	// stw r23,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r23.u32);
	// stw r23,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r23.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r23,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r23.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// rldicr r6,r9,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// stw r23,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r23.u32);
	// bl 0x82643818
	ctx.lr = 0x82643AF8;
	sub_82643818(ctx, base);
	// lis r10,10922
	ctx.r10.s64 = 715784192;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// ori r31,r10,43691
	ctx.r31.u64 = ctx.r10.u64 | 43691;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82643b7c
	if (!ctx.cr6.gt) goto loc_82643B7C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
loc_82643B14:
	// lwz r10,148(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 148);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// beq cr6,0x82643b54
	if (ctx.cr6.eq) goto loc_82643B54;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// mulhw r10,r10,r31
	ctx.r10.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32)) >> 32;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82643b58
	if (ctx.cr6.lt) goto loc_82643B58;
loc_82643B54:
	// twi 31,r0,22
loc_82643B58:
	// add r10,r3,r9
	ctx.r10.u64 = ctx.r3.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// blt cr6,0x82643b14
	if (ctx.cr6.lt) goto loc_82643B14;
loc_82643B7C:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x82643b94
	if (!ctx.cr6.gt) goto loc_82643B94;
	// twi 31,r0,22
	// twi 31,r0,22
loc_82643B94:
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mulhw r11,r11,r31
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32)) >> 32;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826431f0
	ctx.lr = 0x82643BAC;
	sub_826431F0(ctx, base);
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82644304
	if (!ctx.cr6.gt) goto loc_82644304;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// lis r14,-32044
	ctx.r14.s64 = -2100035584;
	// addi r11,r11,-32060
	ctx.r11.s64 = ctx.r11.s64 + -32060;
	// lis r15,-32044
	ctx.r15.s64 = -2100035584;
	// li r16,15
	ctx.r16.s64 = 15;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-5400
	ctx.r11.s64 = ctx.r11.s64 + -5400;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r19,r11,-15072
	ctx.r19.s64 = ctx.r11.s64 + -15072;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// addi r11,r11,-32108
	ctx.r11.s64 = ctx.r11.s64 + -32108;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-5424
	ctx.r11.s64 = ctx.r11.s64 + -5424;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r18,r11,-15092
	ctx.r18.s64 = ctx.r11.s64 + -15092;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// addi r20,r11,6088
	ctx.r20.s64 = ctx.r11.s64 + 6088;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// addi r11,r11,-32156
	ctx.r11.s64 = ctx.r11.s64 + -32156;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-5448
	ctx.r11.s64 = ctx.r11.s64 + -5448;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r17,r11,-15112
	ctx.r17.s64 = ctx.r11.s64 + -15112;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-5228
	ctx.r11.s64 = ctx.r11.s64 + -5228;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-5256
	ctx.r11.s64 = ctx.r11.s64 + -5256;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// b 0x82643c58
	goto loc_82643C58;
loc_82643C50:
	// lis r11,10922
	ctx.r11.s64 = 715784192;
	// ori r31,r11,43691
	ctx.r31.u64 = ctx.r11.u64 | 43691;
loc_82643C58:
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82643c84
	if (ctx.cr6.eq) goto loc_82643C84;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// mulhw r11,r11,r31
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32)) >> 32;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82643c88
	if (ctx.cr6.lt) goto loc_82643C88;
loc_82643C84:
	// twi 31,r0,22
loc_82643C88:
	// rlwinm r11,r21,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,148(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 148);
	// addi r24,r1,152
	ctx.r24.s64 = ctx.r1.s64 + 152;
	// add r11,r21,r11
	ctx.r11.u64 = ctx.r21.u64 + ctx.r11.u64;
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r25,r11,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82644124
	if (ctx.cr6.eq) goto loc_82644124;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82643cd0
	if (ctx.cr6.eq) goto loc_82643CD0;
	// li r22,1
	ctx.r22.s64 = 1;
	// b 0x826442e0
	goto loc_826442E0;
loc_82643CD0:
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r16,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r16.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r23,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r23.u32);
	// stb r23,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r23.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82643CE8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82643ce8
	if (!ctx.cr6.eq) goto loc_82643CE8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82643D0C;
	sub_82161E08(ctx, base);
	// lwz r4,-15048(r14)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r14.u32 + -15048);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82643d58
	if (!ctx.cr6.eq) goto loc_82643D58;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lwz r11,-15076(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15076);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82643d50
	if (!ctx.cr6.eq) goto loc_82643D50;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// stw r11,-15076(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15076, ctx.r11.u32);
	// bl 0x82581e70
	ctx.lr = 0x82643D3C;
	sub_82581E70(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28912
	ctx.r3.s64 = ctx.r11.s64 + -28912;
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// stw r11,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x82643D50;
	sub_826DED00(ctx, base);
loc_82643D50:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// stw r4,-15048(r14)
	PPC_STORE_U32(ctx.r14.u32 + -15048, ctx.r4.u32);
loc_82643D58:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82582648
	ctx.lr = 0x82643D70;
	sub_82582648(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// lwz r6,180(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826df418
	ctx.lr = 0x82643D88;
	sub_826DF418(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82643d98
	if (ctx.cr6.eq) goto loc_82643D98;
	// bl 0x82659610
	ctx.lr = 0x82643D98;
	sub_82659610(ctx, base);
loc_82643D98:
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82643da8
	if (ctx.cr6.eq) goto loc_82643DA8;
	// bl 0x82581e38
	ctx.lr = 0x82643DA8;
	sub_82581E38(ctx, base);
loc_82643DA8:
	// lwz r31,192(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 192);
	// lwzx r28,r25,r24
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r24.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82643dcc
	if (ctx.cr6.eq) goto loc_82643DCC;
	// lwz r11,196(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 196);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82643dd0
	if (ctx.cr6.lt) goto loc_82643DD0;
loc_82643DCC:
	// twi 31,r0,22
loc_82643DD0:
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82643de4
	if (ctx.cr6.eq) goto loc_82643DE4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82659610
	ctx.lr = 0x82643DE4;
	sub_82659610(ctx, base);
loc_82643DE4:
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// stwx r29,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82643df8
	if (ctx.cr6.eq) goto loc_82643DF8;
	// bl 0x82581e38
	ctx.lr = 0x82643DF8;
	sub_82581E38(ctx, base);
loc_82643DF8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82643e08
	if (ctx.cr6.eq) goto loc_82643E08;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82581e38
	ctx.lr = 0x82643E08;
	sub_82581E38(ctx, base);
loc_82643E08:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,-15044(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15044);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82643e60
	if (!ctx.cr6.eq) goto loc_82643E60;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,-15056(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15056);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82643e54
	if (!ctx.cr6.eq) goto loc_82643E54;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stw r11,-15056(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15056, ctx.r11.u32);
	// bl 0x82581e70
	ctx.lr = 0x82643E40;
	sub_82581E70(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28928
	ctx.r3.s64 = ctx.r11.s64 + -28928;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x82643E54;
	sub_826DED00(ctx, base);
loc_82643E54:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// stw r4,-15044(r11)
	PPC_STORE_U32(ctx.r11.u32 + -15044, ctx.r4.u32);
loc_82643E60:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82582648
	ctx.lr = 0x82643E78;
	sub_82582648(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826df418
	ctx.lr = 0x82643E90;
	sub_826DF418(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82643ea0
	if (ctx.cr6.eq) goto loc_82643EA0;
	// bl 0x82659610
	ctx.lr = 0x82643EA0;
	sub_82659610(ctx, base);
loc_82643EA0:
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82643eb0
	if (ctx.cr6.eq) goto loc_82643EB0;
	// bl 0x82581e38
	ctx.lr = 0x82643EB0;
	sub_82581E38(ctx, base);
loc_82643EB0:
	// lwz r31,176(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 176);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82643ed0
	if (ctx.cr6.eq) goto loc_82643ED0;
	// lwz r11,180(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 180);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82643ed4
	if (ctx.cr6.lt) goto loc_82643ED4;
loc_82643ED0:
	// twi 31,r0,22
loc_82643ED4:
	// rlwinm r29,r28,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82643ee8
	if (ctx.cr6.eq) goto loc_82643EE8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x82643EE8;
	sub_82659610(ctx, base);
loc_82643EE8:
	// lwzx r3,r29,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// stwx r30,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82643efc
	if (ctx.cr6.eq) goto loc_82643EFC;
	// bl 0x82581e38
	ctx.lr = 0x82643EFC;
	sub_82581E38(ctx, base);
loc_82643EFC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82643f0c
	if (ctx.cr6.eq) goto loc_82643F0C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82581e38
	ctx.lr = 0x82643F0C;
	sub_82581E38(ctx, base);
loc_82643F0C:
	// lwz r11,192(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82643f2c
	if (ctx.cr6.eq) goto loc_82643F2C;
	// lwz r10,196(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 196);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82643f30
	if (ctx.cr6.lt) goto loc_82643F30;
loc_82643F2C:
	// twi 31,r0,22
loc_82643F30:
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82643f94
	if (ctx.cr6.eq) goto loc_82643F94;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82643f94
	if (ctx.cr6.eq) goto loc_82643F94;
	// lwz r11,176(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82643f70
	if (ctx.cr6.eq) goto loc_82643F70;
	// lwz r10,180(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 180);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82643f74
	if (ctx.cr6.lt) goto loc_82643F74;
loc_82643F70:
	// twi 31,r0,22
loc_82643F74:
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82643f94
	if (ctx.cr6.eq) goto loc_82643F94;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82643f98
	if (!ctx.cr6.eq) goto loc_82643F98;
loc_82643F94:
	// li r22,1
	ctx.r22.s64 = 1;
loc_82643F98:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82644078
	if (ctx.cr6.eq) goto loc_82644078;
	// lwz r11,176(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82643fc8
	if (ctx.cr6.eq) goto loc_82643FC8;
	// lwz r10,180(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 180);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82643fcc
	if (ctx.cr6.lt) goto loc_82643FCC;
loc_82643FC8:
	// twi 31,r0,22
loc_82643FCC:
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82644078
	if (ctx.cr6.eq) goto loc_82644078;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82644078
	if (ctx.cr6.eq) goto loc_82644078;
	// lwz r11,176(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264400c
	if (ctx.cr6.eq) goto loc_8264400C;
	// lwz r10,180(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 180);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82644010
	if (ctx.cr6.lt) goto loc_82644010;
loc_8264400C:
	// twi 31,r0,22
loc_82644010:
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq cr6,0x82644034
	if (ctx.cr6.eq) goto loc_82644034;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82659610
	ctx.lr = 0x82644030;
	sub_82659610(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82644034:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x82644054
	if (ctx.cr6.eq) goto loc_82644054;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82659610
	ctx.lr = 0x82644050;
	sub_82659610(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82644054:
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8264407c
	if (ctx.cr6.eq) goto loc_8264407C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264407c
	if (ctx.cr6.eq) goto loc_8264407C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82644080
	goto loc_82644080;
loc_82644078:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_8264407C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82644080:
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x826440ac
	if (ctx.cr6.eq) goto loc_826440AC;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x826440ac
	if (ctx.cr6.eq) goto loc_826440AC;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82581e38
	ctx.lr = 0x826440AC;
	sub_82581E38(ctx, base);
loc_826440AC:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826440e8
	if (ctx.cr6.eq) goto loc_826440E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x8265d0c0
	ctx.lr = 0x826440C4;
	sub_8265D0C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x826440e0
	if (!ctx.cr6.eq) goto loc_826440E0;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x821e0968
	ctx.lr = 0x826440DC;
	sub_821E0968(ctx, base);
	// b 0x826440e8
	goto loc_826440E8;
loc_826440E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8265cec8
	ctx.lr = 0x826440E8;
	sub_8265CEC8(ctx, base);
loc_826440E8:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stwx r11,r25,r24
	PPC_STORE_U32(ctx.r25.u32 + ctx.r24.u32, ctx.r11.u32);
	// beq cr6,0x82644100
	if (ctx.cr6.eq) goto loc_82644100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82581e38
	ctx.lr = 0x82644100;
	sub_82581E38(ctx, base);
loc_82644100:
	// lwz r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82644114
	if (ctx.cr6.lt) goto loc_82644114;
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x82186190
	ctx.lr = 0x82644114;
	sub_82186190(ctx, base);
loc_82644114:
	// stw r16,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r16.u32);
	// stw r23,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r23.u32);
	// stb r23,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r23.u8);
	// b 0x826442d8
	goto loc_826442D8;
loc_82644124:
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826442e0
	if (ctx.cr6.eq) goto loc_826442E0;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r16,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r16.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r23,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r23.u32);
	// stb r23,228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 228, ctx.r23.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82644148:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82644148
	if (!ctx.cr6.eq) goto loc_82644148;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x8264416C;
	sub_82161E08(ctx, base);
	// lwz r4,-15052(r15)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r15.u32 + -15052);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x826441b8
	if (!ctx.cr6.eq) goto loc_826441B8;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lwz r11,-15096(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15096);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826441b0
	if (!ctx.cr6.eq) goto loc_826441B0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r11,-15096(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15096, ctx.r11.u32);
	// bl 0x82581e70
	ctx.lr = 0x8264419C;
	sub_82581E70(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28896
	ctx.r3.s64 = ctx.r11.s64 + -28896;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r11,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x826441B0;
	sub_826DED00(ctx, base);
loc_826441B0:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// stw r4,-15052(r15)
	PPC_STORE_U32(ctx.r15.u32 + -15052, ctx.r4.u32);
loc_826441B8:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82582648
	ctx.lr = 0x826441D0;
	sub_82582648(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826df418
	ctx.lr = 0x826441E8;
	sub_826DF418(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826441f8
	if (ctx.cr6.eq) goto loc_826441F8;
	// bl 0x82659610
	ctx.lr = 0x826441F8;
	sub_82659610(ctx, base);
loc_826441F8:
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82644208
	if (ctx.cr6.eq) goto loc_82644208;
	// bl 0x82581e38
	ctx.lr = 0x82644208;
	sub_82581E38(ctx, base);
loc_82644208:
	// lwz r31,160(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 160);
	// lwzx r28,r25,r24
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r24.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8264422c
	if (ctx.cr6.eq) goto loc_8264422C;
	// lwz r11,164(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 164);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82644230
	if (ctx.cr6.lt) goto loc_82644230;
loc_8264422C:
	// twi 31,r0,22
loc_82644230:
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82644244
	if (ctx.cr6.eq) goto loc_82644244;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82659610
	ctx.lr = 0x82644244;
	sub_82659610(ctx, base);
loc_82644244:
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// stwx r29,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82644258
	if (ctx.cr6.eq) goto loc_82644258;
	// bl 0x82581e38
	ctx.lr = 0x82644258;
	sub_82581E38(ctx, base);
loc_82644258:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82644268
	if (ctx.cr6.eq) goto loc_82644268;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82581e38
	ctx.lr = 0x82644268;
	sub_82581E38(ctx, base);
loc_82644268:
	// lwz r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8264427c
	if (ctx.cr6.lt) goto loc_8264427C;
	// lwz r3,228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// bl 0x82186190
	ctx.lr = 0x8264427C;
	sub_82186190(ctx, base);
loc_8264427C:
	// lwz r11,160(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 160);
	// stw r16,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r16.u32);
	// stw r23,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r23.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r23,228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 228, ctx.r23.u8);
	// beq cr6,0x826442a8
	if (ctx.cr6.eq) goto loc_826442A8;
	// lwz r10,164(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 164);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x826442ac
	if (ctx.cr6.lt) goto loc_826442AC;
loc_826442A8:
	// twi 31,r0,22
loc_826442AC:
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826442cc
	if (ctx.cr6.eq) goto loc_826442CC;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826442d0
	if (!ctx.cr6.eq) goto loc_826442D0;
loc_826442CC:
	// li r22,1
	ctx.r22.s64 = 1;
loc_826442D0:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// stwx r11,r25,r24
	PPC_STORE_U32(ctx.r25.u32 + ctx.r24.u32, ctx.r11.u32);
loc_826442D8:
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_826442E0:
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826442f8
	if (ctx.cr6.eq) goto loc_826442F8;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x821e0968
	ctx.lr = 0x826442F8;
	sub_821E0968(ctx, base);
loc_826442F8:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// cmpw cr6,r21,r30
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82643c50
	if (ctx.cr6.lt) goto loc_82643C50;
loc_82644304:
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-15116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -15116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8264434c
	if (!ctx.cr6.eq) goto loc_8264434C;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lwz r11,-15124(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15124);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82644344
	if (!ctx.cr6.eq) goto loc_82644344;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,-15124(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15124, ctx.r11.u32);
	// bl 0x8265cda8
	ctx.lr = 0x82644338;
	sub_8265CDA8(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28960
	ctx.r3.s64 = ctx.r11.s64 + -28960;
	// bl 0x826ded00
	ctx.lr = 0x82644344;
	sub_826DED00(ctx, base);
loc_82644344:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r3,-15116(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15116, ctx.r3.u32);
loc_8264434C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-5276
	ctx.r4.s64 = ctx.r11.s64 + -5276;
	// bl 0x8265c350
	ctx.lr = 0x8264435C;
	sub_8265C350(ctx, base);
	// lwz r3,-15116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -15116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826443a0
	if (!ctx.cr6.eq) goto loc_826443A0;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lwz r11,-15124(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15124);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82644398
	if (!ctx.cr6.eq) goto loc_82644398;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,-15124(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15124, ctx.r11.u32);
	// bl 0x8265cda8
	ctx.lr = 0x8264438C;
	sub_8265CDA8(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28960
	ctx.r3.s64 = ctx.r11.s64 + -28960;
	// bl 0x826ded00
	ctx.lr = 0x82644398;
	sub_826DED00(ctx, base);
loc_82644398:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r3,-15116(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15116, ctx.r3.u32);
loc_826443A0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8265a660
	ctx.lr = 0x826443A8;
	sub_8265A660(ctx, base);
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// lwz r3,-15120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826443f8
	if (!ctx.cr6.eq) goto loc_826443F8;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lwz r11,-15256(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15256);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// addi r31,r9,-15288
	ctx.r31.s64 = ctx.r9.s64 + -15288;
	// bne cr6,0x826443f0
	if (!ctx.cr6.eq) goto loc_826443F0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-15256(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15256, ctx.r11.u32);
	// bl 0x8265a550
	ctx.lr = 0x826443E4;
	sub_8265A550(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28944
	ctx.r3.s64 = ctx.r11.s64 + -28944;
	// bl 0x826ded00
	ctx.lr = 0x826443F0;
	sub_826DED00(ctx, base);
loc_826443F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r3,-15120(r30)
	PPC_STORE_U32(ctx.r30.u32 + -15120, ctx.r3.u32);
loc_826443F8:
	// bl 0x8265a198
	ctx.lr = 0x826443FC;
	sub_8265A198(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82644414
	if (!ctx.cr6.eq) goto loc_82644414;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-5324
	ctx.r3.s64 = ctx.r11.s64 + -5324;
	// bl 0x821e0968
	ctx.lr = 0x82644414;
	sub_821E0968(ctx, base);
loc_82644414:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82644424
	if (ctx.cr6.eq) goto loc_82644424;
	// bl 0x82186190
	ctx.lr = 0x82644424;
	sub_82186190(ctx, base);
loc_82644424:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x826de8e0
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82644430"))) PPC_WEAK_FUNC(sub_82644430);
PPC_FUNC_IMPL(__imp__sub_82644430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x82644438;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// std r25,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r25.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82644478
	if (!ctx.cr6.eq) goto loc_82644478;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x825fda60
	ctx.lr = 0x8264446C;
	sub_825FDA60(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_82644478:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x82644494
	if (ctx.cr6.eq) goto loc_82644494;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82644498
	if (ctx.cr6.eq) goto loc_82644498;
loc_82644494:
	// twi 31,r0,22
loc_82644498:
	// lwz r26,196(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// subf r9,r26,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r26.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826444f0
	if (ctx.cr6.eq) goto loc_826444F0;
	// addi r5,r26,12
	ctx.r5.s64 = ctx.r26.s64 + 12;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216eb10
	ctx.lr = 0x826444C0;
	sub_8216EB10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826446b8
	if (ctx.cr6.eq) goto loc_826446B8;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825fda60
	ctx.lr = 0x826444E4;
	sub_825FDA60(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_826444F0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82644500
	if (ctx.cr6.eq) goto loc_82644500;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82644504
	if (ctx.cr6.eq) goto loc_82644504;
loc_82644500:
	// twi 31,r0,22
loc_82644504:
	// subf r10,r26,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r26.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82644560
	if (ctx.cr6.eq) goto loc_82644560;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x8216eb10
	ctx.lr = 0x8264452C;
	sub_8216EB10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826446b8
	if (ctx.cr6.eq) goto loc_826446B8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x825fda60
	ctx.lr = 0x82644554;
	sub_825FDA60(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_82644560:
	// addi r27,r26,12
	ctx.r27.s64 = ctx.r26.s64 + 12;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8216eb10
	ctx.lr = 0x82644570;
	sub_8216EB10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826445f4
	if (ctx.cr6.eq) goto loc_826445F4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r25,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r25.u64);
	// bl 0x82620e50
	ctx.lr = 0x82644588;
	sub_82620E50(ctx, base);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r28,12
	ctx.r4.s64 = ctx.r28.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216eb10
	ctx.lr = 0x8264459C;
	sub_8216EB10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826445f4
	if (ctx.cr6.eq) goto loc_826445F4;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r11,45(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826445dc
	if (ctx.cr6.eq) goto loc_826445DC;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825fda60
	ctx.lr = 0x826445D0;
	sub_825FDA60(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_826445DC:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x825fda60
	ctx.lr = 0x826445E8;
	sub_825FDA60(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_826445F4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216eb10
	ctx.lr = 0x82644604;
	sub_8216EB10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826446b8
	if (ctx.cr6.eq) goto loc_826446B8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// std r25,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r25.u64);
	// bl 0x826027a8
	ctx.lr = 0x82644620;
	sub_826027A8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82644634
	if (ctx.cr6.eq) goto loc_82644634;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82644638
	if (ctx.cr6.eq) goto loc_82644638;
loc_82644634:
	// twi 31,r0,22
loc_82644638:
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r11,r28,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r28.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264466c
	if (!ctx.cr6.eq) goto loc_8264466C;
	// addi r5,r28,12
	ctx.r5.s64 = ctx.r28.s64 + 12;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216eb10
	ctx.lr = 0x82644660;
	sub_8216EB10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826446b8
	if (ctx.cr6.eq) goto loc_826446B8;
loc_8264466C:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r11,45(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826446a0
	if (ctx.cr6.eq) goto loc_826446A0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825fda60
	ctx.lr = 0x82644694;
	sub_825FDA60(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_826446A0:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x825fda60
	ctx.lr = 0x826446AC;
	sub_825FDA60(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_826446B8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825fde80
	ctx.lr = 0x826446C8;
	sub_825FDE80(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826446E8"))) PPC_WEAK_FUNC(sub_826446E8);
PPC_FUNC_IMPL(__imp__sub_826446E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x826446F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x825bb450
	ctx.lr = 0x82644700;
	sub_825BB450(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bne cr6,0x82644714
	if (!ctx.cr6.eq) goto loc_82644714;
	// twi 31,r0,22
loc_82644714:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82644774
	if (!ctx.cr6.eq) goto loc_82644774;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8264474c
	if (ctx.cr6.lt) goto loc_8264474C;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82644750
	goto loc_82644750;
loc_8264474C:
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
loc_82644750:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216a080
	ctx.lr = 0x82644760;
	sub_8216A080(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826447e4
	if (ctx.cr6.eq) goto loc_826447E4;
loc_82644774:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// bl 0x82161d10
	ctx.lr = 0x8264479C;
	sub_82161D10(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// sth r31,124(r1)
	PPC_STORE_U16(ctx.r1.u32 + 124, ctx.r31.u16);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82644430
	ctx.lr = 0x826447B4;
	sub_82644430(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// blt cr6,0x826447d0
	if (ctx.cr6.lt) goto loc_826447D0;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82186190
	ctx.lr = 0x826447D0;
	sub_82186190(ctx, base);
loc_826447D0:
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
loc_826447E4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x826447f0
	if (!ctx.cr6.eq) goto loc_826447F0;
	// twi 31,r0,22
loc_826447F0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82644800
	if (!ctx.cr6.eq) goto loc_82644800;
	// twi 31,r0,22
loc_82644800:
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82644810"))) PPC_WEAK_FUNC(sub_82644810);
PPC_FUNC_IMPL(__imp__sub_82644810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82644818;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-5200
	ctx.r11.s64 = ctx.r11.s64 + -5200;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82644840
	if (ctx.cr6.eq) goto loc_82644840;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825fe650
	ctx.lr = 0x82644840;
	sub_825FE650(ctx, base);
loc_82644840:
	// addi r28,r30,188
	ctx.r28.s64 = ctx.r30.s64 + 188;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82644868
	if (ctx.cr6.eq) goto loc_82644868;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x82279350
	ctx.lr = 0x82644860;
	sub_82279350(ctx, base);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82644868;
	sub_82186190(ctx, base);
loc_82644868:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r30,172
	ctx.r29.s64 = ctx.r30.s64 + 172;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// stw r31,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r31.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826448a0
	if (ctx.cr6.eq) goto loc_826448A0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82279350
	ctx.lr = 0x82644898;
	sub_82279350(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x826448A0;
	sub_82186190(ctx, base);
loc_826448A0:
	// addi r28,r30,156
	ctx.r28.s64 = ctx.r30.s64 + 156;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826448d4
	if (ctx.cr6.eq) goto loc_826448D4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x82279350
	ctx.lr = 0x826448CC;
	sub_82279350(ctx, base);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x826448D4;
	sub_82186190(ctx, base);
loc_826448D4:
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// stw r31,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r31.u32);
	// lwz r3,148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// bl 0x826429b8
	ctx.lr = 0x826448E8;
	sub_826429B8(ctx, base);
	// addi r3,r30,136
	ctx.r3.s64 = ctx.r30.s64 + 136;
	// bl 0x8245ac68
	ctx.lr = 0x826448F0;
	sub_8245AC68(ctx, base);
	// addi r29,r30,108
	ctx.r29.s64 = ctx.r30.s64 + 108;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82644908
	if (ctx.cr6.lt) goto loc_82644908;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82644908;
	sub_82186190(ctx, base);
loc_82644908:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r31,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// stb r31,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r31.u8);
	// bl 0x82582070
	ctx.lr = 0x82644920;
	sub_82582070(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82644928"))) PPC_WEAK_FUNC(sub_82644928);
PPC_FUNC_IMPL(__imp__sub_82644928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8a8
	ctx.lr = 0x82644930;
	__savegprlr_20(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82186158
	ctx.lr = 0x82644944;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82644c6c
	if (ctx.cr6.eq) goto loc_82644C6C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825d4cb0
	ctx.lr = 0x82644954;
	sub_825D4CB0(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82644c6c
	if (ctx.cr6.eq) goto loc_82644C6C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82644c5c
	if (ctx.cr6.eq) goto loc_82644C5C;
	// lwz r22,20(r20)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82644cb4
	if (ctx.cr6.eq) goto loc_82644CB4;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r21,15
	ctx.r21.s64 = 15;
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stw r21,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r21.u32);
	// stb r26,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r26.u8);
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stb r26,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r26.u8);
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_826449A8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826449a8
	if (!ctx.cr6.eq) goto loc_826449A8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r27,108
	ctx.r3.s64 = ctx.r27.s64 + 108;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x826449CC;
	sub_82161E08(ctx, base);
	// lwz r31,8(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82644a54
	if (!ctx.cr6.gt) goto loc_82644A54;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826449fc
	if (ctx.cr6.gt) goto loc_826449FC;
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// li r10,-5
	ctx.r10.s64 = -5;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82644a00
	if (!ctx.cr6.gt) goto loc_82644A00;
loc_826449FC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82644A00:
	// bl 0x82186158
	ctx.lr = 0x82644A04;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82644a44
	if (ctx.cr6.eq) goto loc_82644A44;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addi r10,r31,-1
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82644a3c
	if (ctx.cr6.lt) goto loc_82644A3C;
loc_82644A24:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x82644a24
	if (!ctx.cr6.lt) goto loc_82644A24;
loc_82644A3C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82644a48
	goto loc_82644A48;
loc_82644A44:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82644A48:
	// lwz r3,148(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 148);
	// stw r11,148(r27)
	PPC_STORE_U32(ctx.r27.u32 + 148, ctx.r11.u32);
	// bl 0x826429b8
	ctx.lr = 0x82644A54;
	sub_826429B8(ctx, base);
loc_82644A54:
	// sth r26,152(r27)
	PPC_STORE_U16(ctx.r27.u32 + 152, ctx.r26.u16);
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r29,4(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82644c0c
	if (!ctx.cr6.gt) goto loc_82644C0C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r25,r11,-5180
	ctx.r25.s64 = ctx.r11.s64 + -5180;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r23,r11,5020
	ctx.r23.s64 = ctx.r11.s64 + 5020;
loc_82644A7C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82644bf8
	if (ctx.cr6.eq) goto loc_82644BF8;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82644bf8
	if (ctx.cr6.eq) goto loc_82644BF8;
	// lhz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82644bf8
	if (ctx.cr6.lt) goto loc_82644BF8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82644bf8
	if (ctx.cr6.gt) goto loc_82644BF8;
	// lhz r11,14(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 14);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82644bf8
	if (ctx.cr6.lt) goto loc_82644BF8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x82644bf8
	if (ctx.cr6.gt) goto loc_82644BF8;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82644ad4
	if (!ctx.cr6.eq) goto loc_82644AD4;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_82644AD4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82644ADC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82644adc
	if (!ctx.cr6.eq) goto loc_82644ADC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82644B00;
	sub_82161E08(ctx, base);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82644B0C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82644b0c
	if (!ctx.cr6.eq) goto loc_82644B0C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82644B30;
	sub_82161E08(ctx, base);
	// lhz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// lhz r10,14(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 14);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhz r9,152(r27)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + 152);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lwz r10,148(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 148);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rotlwi r11,r9,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 4);
	// xori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 ^ 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r6,r8,r25
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r25.u32);
	// bl 0x826424b0
	ctx.lr = 0x82644B70;
	sub_826424B0(ctx, base);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82644bb8
	if (ctx.cr6.eq) goto loc_82644BB8;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// subf r28,r31,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r31.s64;
loc_82644B8C:
	// cmpwi cr6,r30,31
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 31, ctx.xer);
	// bge cr6,0x82644bb8
	if (!ctx.cr6.lt) goto loc_82644BB8;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x826e42e0
	ctx.lr = 0x82644BA0;
	sub_826E42E0(ctx, base);
	// stbx r3,r28,r31
	PPC_STORE_U8(ctx.r28.u32 + ctx.r31.u32, ctx.r3.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82644b8c
	if (!ctx.cr6.eq) goto loc_82644B8C;
loc_82644BB8:
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stbx r26,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r26.u8);
	// bl 0x821620e8
	ctx.lr = 0x82644BCC;
	sub_821620E8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r27,136
	ctx.r3.s64 = ctx.r27.s64 + 136;
	// bl 0x826446e8
	ctx.lr = 0x82644BD8;
	sub_826446E8(ctx, base);
	// lhz r10,152(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 152);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// bl 0x825fc7b8
	ctx.lr = 0x82644BEC;
	sub_825FC7B8(ctx, base);
	// lhz r11,152(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 152);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,152(r27)
	PPC_STORE_U16(ctx.r27.u32 + 152, ctx.r11.u16);
loc_82644BF8:
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82644a7c
	if (ctx.cr6.lt) goto loc_82644A7C;
loc_82644C0C:
	// lhz r11,152(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 152);
	// lwz r10,8(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// beq cr6,0x82644c78
	if (ctx.cr6.eq) goto loc_82644C78;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82644c30
	if (ctx.cr6.lt) goto loc_82644C30;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x82644C30;
	sub_82186190(ctx, base);
loc_82644C30:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r26,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r26.u8);
	// blt cr6,0x82644c50
	if (ctx.cr6.lt) goto loc_82644C50;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82186190
	ctx.lr = 0x82644C50;
	sub_82186190(ctx, base);
loc_82644C50:
	// stw r21,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r21.u32);
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stb r26,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r26.u8);
loc_82644C5C:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x825d4eb8
	ctx.lr = 0x82644C64;
	sub_825D4EB8(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82186190
	ctx.lr = 0x82644C6C;
	sub_82186190(ctx, base);
loc_82644C6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826de8f8
	__restgprlr_20(ctx, base);
	return;
loc_82644C78:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82644c88
	if (ctx.cr6.lt) goto loc_82644C88;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x82644C88;
	sub_82186190(ctx, base);
loc_82644C88:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r26,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r26.u8);
	// blt cr6,0x82644ca8
	if (ctx.cr6.lt) goto loc_82644CA8;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82186190
	ctx.lr = 0x82644CA8;
	sub_82186190(ctx, base);
loc_82644CA8:
	// stw r21,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r21.u32);
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stb r26,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r26.u8);
loc_82644CB4:
	// lhz r11,152(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82644c5c
	if (ctx.cr6.eq) goto loc_82644C5C;
	// lwz r11,128(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 128);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82644c5c
	if (!ctx.cr6.eq) goto loc_82644C5C;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x825d4eb8
	ctx.lr = 0x82644CDC;
	sub_825D4EB8(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82186190
	ctx.lr = 0x82644CE4;
	sub_82186190(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826de8f8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82644CF0"))) PPC_WEAK_FUNC(sub_82644CF0);
PPC_FUNC_IMPL(__imp__sub_82644CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82582018
	ctx.lr = 0x82644D0C;
	sub_82582018(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r10,-5200
	ctx.r10.s64 = ctx.r10.s64 + -5200;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r31,108
	ctx.r11.s64 = ctx.r31.s64 + 108;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// sth r9,104(r31)
	PPC_STORE_U16(ctx.r31.u32 + 104, ctx.r9.u16);
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// stb r30,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r30.u8);
	// bl 0x82619550
	ctx.lr = 0x82644D44;
	sub_82619550(ctx, base);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r30,152(r31)
	PPC_STORE_U16(ctx.r31.u32 + 152, ctx.r30.u16);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82644D90"))) PPC_WEAK_FUNC(sub_82644D90);
PPC_FUNC_IMPL(__imp__sub_82644D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82644810
	ctx.lr = 0x82644DB0;
	sub_82644810(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82644dc8
	if (ctx.cr6.eq) goto loc_82644DC8;
	// bl 0x82186190
	ctx.lr = 0x82644DC4;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82644DC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82644DE0"))) PPC_WEAK_FUNC(sub_82644DE0);
PPC_FUNC_IMPL(__imp__sub_82644DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82644DE8;
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
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d4c48
	ctx.lr = 0x82644E04;
	sub_825D4C48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82644e24
	if (ctx.cr6.eq) goto loc_82644E24;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82644928
	ctx.lr = 0x82644E20;
	sub_82644928(ctx, base);
	// b 0x82644e50
	goto loc_82644E50;
loc_82644E24:
	// bl 0x82581e68
	ctx.lr = 0x82644E28;
	sub_82581E68(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82644e3c
	if (ctx.cr6.lt) goto loc_82644E3C;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82644e40
	goto loc_82644E40;
loc_82644E3C:
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
loc_82644E40:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-5380
	ctx.r3.s64 = ctx.r11.s64 + -5380;
	// bl 0x821e0968
	ctx.lr = 0x82644E4C;
	sub_821E0968(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82644E50:
	// clrlwi r31,r3,24
	ctx.r31.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82644e6c
	if (ctx.cr6.eq) goto loc_82644E6C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82643970
	ctx.lr = 0x82644E64;
	sub_82643970(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// and r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 & ctx.r31.u64;
loc_82644E6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82644E78"))) PPC_WEAK_FUNC(sub_82644E78);
PPC_FUNC_IMPL(__imp__sub_82644E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r11,r11,-5164
	ctx.r11.s64 = ctx.r11.s64 + -5164;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82644eac
	if (ctx.cr6.eq) goto loc_82644EAC;
	// bl 0x82186190
	ctx.lr = 0x82644EA8;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82644EAC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82644EC0"))) PPC_WEAK_FUNC(sub_82644EC0);
PPC_FUNC_IMPL(__imp__sub_82644EC0) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne 0x82644f04
	if (!ctx.cr0.eq) goto loc_82644F04;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82644EF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
loc_82644F04:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82644F18"))) PPC_WEAK_FUNC(sub_82644F18);
PPC_FUNC_IMPL(__imp__sub_82644F18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82644F28"))) PPC_WEAK_FUNC(sub_82644F28);
PPC_FUNC_IMPL(__imp__sub_82644F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r11,r11,-5100
	ctx.r11.s64 = ctx.r11.s64 + -5100;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82644f5c
	if (ctx.cr6.eq) goto loc_82644F5C;
	// bl 0x82186190
	ctx.lr = 0x82644F58;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82644F5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82644F70"))) PPC_WEAK_FUNC(sub_82644F70);
PPC_FUNC_IMPL(__imp__sub_82644F70) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82644F88"))) PPC_WEAK_FUNC(sub_82644F88);
PPC_FUNC_IMPL(__imp__sub_82644F88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82644FB8"))) PPC_WEAK_FUNC(sub_82644FB8);
PPC_FUNC_IMPL(__imp__sub_82644FB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82644FC0"))) PPC_WEAK_FUNC(sub_82644FC0);
PPC_FUNC_IMPL(__imp__sub_82644FC0) {
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
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82645010
	if (ctx.cr6.eq) goto loc_82645010;
	// bl 0x82581078
	ctx.lr = 0x82644FDC;
	sub_82581078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82645010
	if (ctx.cr6.eq) goto loc_82645010;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,2800
	ctx.r6.s64 = ctx.r11.s64 + 2800;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,2836
	ctx.r5.s64 = ctx.r11.s64 + 2836;
	// bl 0x826df418
	ctx.lr = 0x82645000;
	sub_826DF418(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82645010:
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

__attribute__((alias("__imp__sub_82645028"))) PPC_WEAK_FUNC(sub_82645028);
PPC_FUNC_IMPL(__imp__sub_82645028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264504C;
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

__attribute__((alias("__imp__sub_82645068"))) PPC_WEAK_FUNC(sub_82645068);
PPC_FUNC_IMPL(__imp__sub_82645068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r11,r11,-5152
	ctx.r11.s64 = ctx.r11.s64 + -5152;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8264509c
	if (ctx.cr6.eq) goto loc_8264509C;
	// bl 0x82186190
	ctx.lr = 0x82645098;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8264509C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826450B0"))) PPC_WEAK_FUNC(sub_826450B0);
PPC_FUNC_IMPL(__imp__sub_826450B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82186158
	ctx.lr = 0x826450CC;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826450f8
	if (ctx.cr6.eq) goto loc_826450F8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-5092
	ctx.r11.s64 = ctx.r11.s64 + -5092;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfd f0,13960(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 13960);
	// stfd f0,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.f0.u64);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x826450fc
	goto loc_826450FC;
loc_826450F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826450FC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x8264510c
	if (ctx.cr6.eq) goto loc_8264510C;
	// bl 0x82659610
	ctx.lr = 0x8264510C;
	sub_82659610(ctx, base);
loc_8264510C:
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

__attribute__((alias("__imp__sub_82645128"))) PPC_WEAK_FUNC(sub_82645128);
PPC_FUNC_IMPL(__imp__sub_82645128) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82645148
	sub_82645148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82645130"))) PPC_WEAK_FUNC(sub_82645130);
PPC_FUNC_IMPL(__imp__sub_82645130) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lfd f0,8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// fadd f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 + ctx.f0.f64;
	// stfd f0,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.f0.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82645148"))) PPC_WEAK_FUNC(sub_82645148);
PPC_FUNC_IMPL(__imp__sub_82645148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-4904
	ctx.r11.s64 = ctx.r11.s64 + -4904;
	// addi r10,r10,-4916
	ctx.r10.s64 = ctx.r10.s64 + -4916;
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
	// beq cr6,0x8264518c
	if (ctx.cr6.eq) goto loc_8264518C;
	// bl 0x82581e38
	ctx.lr = 0x8264518C;
	sub_82581E38(ctx, base);
loc_8264518C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581670
	ctx.lr = 0x82645194;
	sub_82581670(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826451ac
	if (ctx.cr6.eq) goto loc_826451AC;
	// bl 0x82186190
	ctx.lr = 0x826451A8;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826451AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826451C8"))) PPC_WEAK_FUNC(sub_826451C8);
PPC_FUNC_IMPL(__imp__sub_826451C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r11,r11,-5084
	ctx.r11.s64 = ctx.r11.s64 + -5084;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x826451fc
	if (ctx.cr6.eq) goto loc_826451FC;
	// bl 0x82186190
	ctx.lr = 0x826451F8;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826451FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82645210"))) PPC_WEAK_FUNC(sub_82645210);
PPC_FUNC_IMPL(__imp__sub_82645210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82645218;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x825d49e0
	ctx.lr = 0x82645238;
	sub_825D49E0(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826452a0
	if (ctx.cr6.eq) goto loc_826452A0;
loc_82645248:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r30.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82645270
	if (!ctx.cr6.eq) goto loc_82645270;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82645248
	if (!ctx.cr6.eq) goto loc_82645248;
loc_82645270:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826452a0
	if (ctx.cr6.eq) goto loc_826452A0;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// beq cr6,0x826452a8
	if (ctx.cr6.eq) goto loc_826452A8;
	// bl 0x82659610
	ctx.lr = 0x8264528C;
	sub_82659610(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82580920
	ctx.lr = 0x82645294;
	sub_82580920(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_826452A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_826452A8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82580920
	ctx.lr = 0x826452B0;
	sub_82580920(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826452C0"))) PPC_WEAK_FUNC(sub_826452C0);
PPC_FUNC_IMPL(__imp__sub_826452C0) {
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
	// bl 0x82581078
	ctx.lr = 0x826452E0;
	sub_82581078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82645300
	if (ctx.cr6.eq) goto loc_82645300;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826452F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
loc_82645300:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lfd f0,8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// fadd f0,f31,f0
	ctx.f0.f64 = ctx.f31.f64 + ctx.f0.f64;
	// stfd f0,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.f0.u64);
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

__attribute__((alias("__imp__sub_82645328"))) PPC_WEAK_FUNC(sub_82645328);
PPC_FUNC_IMPL(__imp__sub_82645328) {
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
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826453c4
	if (ctx.cr6.eq) goto loc_826453C4;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d49e0
	ctx.lr = 0x82645364;
	sub_825D49E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581078
	ctx.lr = 0x8264536C;
	sub_82581078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264538c
	if (ctx.cr6.eq) goto loc_8264538C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82645384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
loc_8264538C:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826453a4
	if (ctx.cr6.eq) goto loc_826453A4;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82661470
	ctx.lr = 0x826453A4;
	sub_82661470(ctx, base);
loc_826453A4:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826453bc
	if (ctx.cr6.eq) goto loc_826453BC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82660ae0
	ctx.lr = 0x826453BC;
	sub_82660AE0(ctx, base);
loc_826453BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82580920
	ctx.lr = 0x826453C4;
	sub_82580920(ctx, base);
loc_826453C4:
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

__attribute__((alias("__imp__sub_826453E0"))) PPC_WEAK_FUNC(sub_826453E0);
PPC_FUNC_IMPL(__imp__sub_826453E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82645428
	if (ctx.cr6.eq) goto loc_82645428;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d49e0
	ctx.lr = 0x82645414;
	sub_825D49E0(ctx, base);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x8265e718
	ctx.lr = 0x82645420;
	sub_8265E718(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82580920
	ctx.lr = 0x82645428;
	sub_82580920(ctx, base);
loc_82645428:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82645440"))) PPC_WEAK_FUNC(sub_82645440);
PPC_FUNC_IMPL(__imp__sub_82645440) {
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
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826454b0
	if (ctx.cr6.eq) goto loc_826454B0;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d49e0
	ctx.lr = 0x82645474;
	sub_825D49E0(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x8265f7a8
	ctx.lr = 0x82645480;
	sub_8265F7A8(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826454a8
	if (ctx.cr6.eq) goto loc_826454A8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826454a8
	if (ctx.cr6.eq) goto loc_826454A8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82618d60
	ctx.lr = 0x826454A8;
	sub_82618D60(ctx, base);
loc_826454A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82580920
	ctx.lr = 0x826454B0;
	sub_82580920(ctx, base);
loc_826454B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

extern void NOP();

__attribute__((alias("__imp__sub_826454C8"))) PPC_WEAK_FUNC(sub_826454C8);
PPC_FUNC_IMPL(__imp__sub_826454C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x826454D0;
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
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826455bc
	if (ctx.cr6.eq) goto loc_826455BC;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825d49e0
	ctx.lr = 0x826454F8;
	sub_825D49E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581078
	ctx.lr = 0x82645500;
	sub_82581078(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x821e0968
	ctx.lr = 0x82645510;
	sub_821E0968(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lfs f31,2952(r11)
	NOP();
	goto loc_8264551C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2952);
	ctx.f31.f64 = double(temp.f32);
loc_8264551C:
	// beq cr6,0x8264553c
	if (ctx.cr6.eq) goto loc_8264553C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82645534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
loc_8264553C:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x82661500
	ctx.lr = 0x8264554C;
	sub_82661500(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x82661700
	ctx.lr = 0x82645558;
	sub_82661700(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x8265de50
	ctx.lr = 0x82645564;
	sub_8265DE50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826455b4
	if (ctx.cr6.eq) goto loc_826455B4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82645584;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826455b4
	if (ctx.cr6.eq) goto loc_826455B4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,36872
	ctx.r11.u64 = ctx.r11.u64 | 36872;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826455B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826455B4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82580920
	ctx.lr = 0x826455BC;
	sub_82580920(ctx, base);
loc_826455BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826455C8"))) PPC_WEAK_FUNC(sub_826455C8);
PPC_FUNC_IMPL(__imp__sub_826455C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x826455D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-4792
	ctx.r11.s64 = ctx.r11.s64 + -4792;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// li r9,3
	ctx.r9.s64 = 3;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// beq cr6,0x8264562c
	if (ctx.cr6.eq) goto loc_8264562C;
	// bl 0x82659610
	ctx.lr = 0x8264562C;
	sub_82659610(ctx, base);
loc_8264562C:
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// beq cr6,0x82645664
	if (ctx.cr6.eq) goto loc_82645664;
	// addi r10,r29,48
	ctx.r10.s64 = ctx.r29.s64 + 48;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_82645664:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82645674
	if (ctx.cr6.eq) goto loc_82645674;
	// bl 0x82581e38
	ctx.lr = 0x82645674;
	sub_82581E38(ctx, base);
loc_82645674:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82645680"))) PPC_WEAK_FUNC(sub_82645680);
PPC_FUNC_IMPL(__imp__sub_82645680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82645688;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826456d8
	if (!ctx.cr6.eq) goto loc_826456D8;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826456d8
	if (ctx.cr6.eq) goto loc_826456D8;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d49e0
	ctx.lr = 0x826456C4;
	sub_825D49E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82661a08
	ctx.lr = 0x826456D0;
	sub_82661A08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82580920
	ctx.lr = 0x826456D8;
	sub_82580920(ctx, base);
loc_826456D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826456E0"))) PPC_WEAK_FUNC(sub_826456E0);
PPC_FUNC_IMPL(__imp__sub_826456E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x826456E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82645798
	if (!ctx.cr6.eq) goto loc_82645798;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825d49e0
	ctx.lr = 0x8264571C;
	sub_825D49E0(ctx, base);
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// bgt cr6,0x82645790
	if (ctx.cr6.gt) goto loc_82645790;
	// lis r12,-32156
	ctx.r12.s64 = -2107375616;
	// addi r12,r12,22332
	ctx.r12.s64 = ctx.r12.s64 + 22332;
	// rlwinm r0,r30,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r30.u64) {
	case 0:
		goto loc_82645764;
	case 1:
		goto loc_8264577C;
	case 2:
		goto loc_82645784;
	case 3:
		goto loc_8264574C;
	default:
		__builtin_unreachable();
	}
	// lwz r19,22372(r4)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r4.u32 + 22372);
	// lwz r19,22396(r4)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r4.u32 + 22396);
	// lwz r19,22404(r4)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r4.u32 + 22404);
	// lwz r19,22348(r4)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r4.u32 + 22348);
loc_8264574C:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82661d40
	ctx.lr = 0x82645754;
	sub_82661D40(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82580920
	ctx.lr = 0x8264575C;
	sub_82580920(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82645764:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82661da0
	ctx.lr = 0x8264576C;
	sub_82661DA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82580920
	ctx.lr = 0x82645774;
	sub_82580920(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_8264577C:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82645788
	goto loc_82645788;
loc_82645784:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82645788:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82661eb0
	ctx.lr = 0x82645790;
	sub_82661EB0(ctx, base);
loc_82645790:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82580920
	ctx.lr = 0x82645798;
	sub_82580920(ctx, base);
loc_82645798:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826457A0"))) PPC_WEAK_FUNC(sub_826457A0);
PPC_FUNC_IMPL(__imp__sub_826457A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-30832
	ctx.r4.s64 = ctx.r11.s64 + -30832;
	// bl 0x826de850
	ctx.lr = 0x826457C4;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826457d8
	if (!ctx.cr6.eq) goto loc_826457D8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_826457D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826457F0"))) PPC_WEAK_FUNC(sub_826457F0);
PPC_FUNC_IMPL(__imp__sub_826457F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-30608
	ctx.r4.s64 = ctx.r11.s64 + -30608;
	// bl 0x826de850
	ctx.lr = 0x82645814;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82645828
	if (!ctx.cr6.eq) goto loc_82645828;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82645828:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82645840"))) PPC_WEAK_FUNC(sub_82645840);
PPC_FUNC_IMPL(__imp__sub_82645840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,-30400
	ctx.r4.s64 = ctx.r11.s64 + -30400;
	// bl 0x826de850
	ctx.lr = 0x82645864;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82645878
	if (!ctx.cr6.eq) goto loc_82645878;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82645878:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82645890"))) PPC_WEAK_FUNC(sub_82645890);
PPC_FUNC_IMPL(__imp__sub_82645890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82581500
	ctx.lr = 0x826458AC;
	sub_82581500(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-4904
	ctx.r11.s64 = ctx.r11.s64 + -4904;
	// addi r10,r10,-4916
	ctx.r10.s64 = ctx.r10.s64 + -4916;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// bl 0x826450b0
	ctx.lr = 0x826458D4;
	sub_826450B0(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826458e8
	if (ctx.cr6.eq) goto loc_826458E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x826458E8;
	sub_82659610(ctx, base);
loc_826458E8:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826458fc
	if (ctx.cr6.eq) goto loc_826458FC;
	// bl 0x82581e38
	ctx.lr = 0x826458FC;
	sub_82581E38(ctx, base);
loc_826458FC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264590c
	if (ctx.cr6.eq) goto loc_8264590C;
	// bl 0x82581e38
	ctx.lr = 0x8264590C;
	sub_82581E38(ctx, base);
loc_8264590C:
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

__attribute__((alias("__imp__sub_82645928"))) PPC_WEAK_FUNC(sub_82645928);
PPC_FUNC_IMPL(__imp__sub_82645928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82645930;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82645950
	if (ctx.cr6.eq) goto loc_82645950;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x82645950;
	sub_82659610(ctx, base);
loc_82645950:
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82645964
	if (ctx.cr6.eq) goto loc_82645964;
	// bl 0x82581e38
	ctx.lr = 0x82645964;
	sub_82581E38(ctx, base);
loc_82645964:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82645974
	if (ctx.cr6.eq) goto loc_82645974;
	// bl 0x82581e38
	ctx.lr = 0x82645974;
	sub_82581E38(ctx, base);
loc_82645974:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82645980"))) PPC_WEAK_FUNC(sub_82645980);
PPC_FUNC_IMPL(__imp__sub_82645980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82645988;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82186158
	ctx.lr = 0x826459A0;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82645a20
	if (ctx.cr6.eq) goto loc_82645A20;
	// bl 0x82661f00
	ctx.lr = 0x826459AC;
	sub_82661F00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826459cc
	if (ctx.cr6.eq) goto loc_826459CC;
	// bl 0x82659610
	ctx.lr = 0x826459BC;
	sub_82659610(ctx, base);
loc_826459BC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826459cc
	if (ctx.cr6.eq) goto loc_826459CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x826459CC;
	sub_82659610(ctx, base);
loc_826459CC:
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// stw r31,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826459e0
	if (ctx.cr6.eq) goto loc_826459E0;
	// bl 0x82581e38
	ctx.lr = 0x826459E0;
	sub_82581E38(ctx, base);
loc_826459E0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826459f0
	if (ctx.cr6.eq) goto loc_826459F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581e38
	ctx.lr = 0x826459F0;
	sub_82581E38(ctx, base);
loc_826459F0:
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82645a28
	if (ctx.cr6.eq) goto loc_82645A28;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82645a28
	if (ctx.cr6.eq) goto loc_82645A28;
	// rotlwi r5,r28,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82661f20
	ctx.lr = 0x82645A18;
	sub_82661F20(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82645A20:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x826459bc
	goto loc_826459BC;
loc_82645A28:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82645A38"))) PPC_WEAK_FUNC(sub_82645A38);
PPC_FUNC_IMPL(__imp__sub_82645A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82186158
	ctx.lr = 0x82645A50;
	sub_82186158(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82645a8c
	if (ctx.cr6.eq) goto loc_82645A8C;
	// bl 0x82582018
	ctx.lr = 0x82645A60;
	sub_82582018(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-4864
	ctx.r11.s64 = ctx.r11.s64 + -4864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82645A8C:
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

__attribute__((alias("__imp__sub_82645AA8"))) PPC_WEAK_FUNC(sub_82645AA8);
PPC_FUNC_IMPL(__imp__sub_82645AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82186158
	ctx.lr = 0x82645AC0;
	sub_82186158(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82645afc
	if (ctx.cr6.eq) goto loc_82645AFC;
	// bl 0x82582018
	ctx.lr = 0x82645AD0;
	sub_82582018(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-4840
	ctx.r11.s64 = ctx.r11.s64 + -4840;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82645AFC:
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

__attribute__((alias("__imp__sub_82645B18"))) PPC_WEAK_FUNC(sub_82645B18);
PPC_FUNC_IMPL(__imp__sub_82645B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82645b44
	if (ctx.cr6.eq) goto loc_82645B44;
	// bl 0x82581e38
	ctx.lr = 0x82645B44;
	sub_82581E38(ctx, base);
loc_82645B44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82582070
	ctx.lr = 0x82645B4C;
	sub_82582070(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82645b64
	if (ctx.cr6.eq) goto loc_82645B64;
	// bl 0x82186190
	ctx.lr = 0x82645B60;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82645B64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82645B80"))) PPC_WEAK_FUNC(sub_82645B80);
PPC_FUNC_IMPL(__imp__sub_82645B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82186158
	ctx.lr = 0x82645B98;
	sub_82186158(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82645bd4
	if (ctx.cr6.eq) goto loc_82645BD4;
	// bl 0x82582018
	ctx.lr = 0x82645BA8;
	sub_82582018(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-4816
	ctx.r11.s64 = ctx.r11.s64 + -4816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82645BD4:
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

__attribute__((alias("__imp__sub_82645BF0"))) PPC_WEAK_FUNC(sub_82645BF0);
PPC_FUNC_IMPL(__imp__sub_82645BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x82645BF8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stw r28,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r28.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82645d14
	if (ctx.cr6.eq) goto loc_82645D14;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82645d14
	if (ctx.cr6.eq) goto loc_82645D14;
	// addi r26,r31,8
	ctx.r26.s64 = ctx.r31.s64 + 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825d49e0
	ctx.lr = 0x82645C44;
	sub_825D49E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8265d0c0
	ctx.lr = 0x82645C50;
	sub_8265D0C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// beq cr6,0x82645d0c
	if (ctx.cr6.eq) goto loc_82645D0C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bl 0x82660ec0
	ctx.lr = 0x82645C70;
	sub_82660EC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823032b8
	ctx.lr = 0x82645C7C;
	sub_823032B8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82645c8c
	if (ctx.cr6.eq) goto loc_82645C8C;
	// bl 0x82581e38
	ctx.lr = 0x82645C8C;
	sub_82581E38(ctx, base);
loc_82645C8C:
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82645d0c
	if (ctx.cr6.eq) goto loc_82645D0C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82645d04
	if (ctx.cr6.eq) goto loc_82645D04;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82186158
	ctx.lr = 0x82645CB0;
	sub_82186158(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82645d04
	if (ctx.cr6.eq) goto loc_82645D04;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bl 0x82659610
	ctx.lr = 0x82645CC8;
	sub_82659610(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826455c8
	ctx.lr = 0x82645CDC;
	sub_826455C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82645d04
	if (ctx.cr6.eq) goto loc_82645D04;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x82659610
	ctx.lr = 0x82645CF0;
	sub_82659610(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82224c78
	ctx.lr = 0x82645CFC;
	sub_82224C78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82631328
	ctx.lr = 0x82645D04;
	sub_82631328(ctx, base);
loc_82645D04:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82581e38
	ctx.lr = 0x82645D0C;
	sub_82581E38(ctx, base);
loc_82645D0C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82580920
	ctx.lr = 0x82645D14;
	sub_82580920(ctx, base);
loc_82645D14:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82645d24
	if (ctx.cr6.eq) goto loc_82645D24;
	// bl 0x82581e38
	ctx.lr = 0x82645D24;
	sub_82581E38(ctx, base);
loc_82645D24:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82645D30"))) PPC_WEAK_FUNC(sub_82645D30);
PPC_FUNC_IMPL(__imp__sub_82645D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82645D38;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825d49e0
	ctx.lr = 0x82645D54;
	sub_825D49E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82645D70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82645d84
	if (ctx.cr6.eq) goto loc_82645D84;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
loc_82645D84:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// xori r31,r11,1
	ctx.r31.u64 = ctx.r11.u64 ^ 1;
	// beq cr6,0x82645da4
	if (ctx.cr6.eq) goto loc_82645DA4;
	// bl 0x82631328
	ctx.lr = 0x82645DA4;
	sub_82631328(ctx, base);
loc_82645DA4:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82645dc4
	if (ctx.cr6.eq) goto loc_82645DC4;
	// bl 0x82580920
	ctx.lr = 0x82645DB8;
	sub_82580920(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82645DC4:
	// bl 0x82580920
	ctx.lr = 0x82645DC8;
	sub_82580920(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82645DD8"))) PPC_WEAK_FUNC(sub_82645DD8);
PPC_FUNC_IMPL(__imp__sub_82645DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82645e18
	if (ctx.cr6.eq) goto loc_82645E18;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82645E18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82645E18:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82645e3c
	if (ctx.cr6.eq) goto loc_82645E3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82645E3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82645E3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82645E58"))) PPC_WEAK_FUNC(sub_82645E58);
PPC_FUNC_IMPL(__imp__sub_82645E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82645ebc
	if (ctx.cr6.eq) goto loc_82645EBC;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82645ebc
	if (ctx.cr6.eq) goto loc_82645EBC;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d49e0
	ctx.lr = 0x82645EA0;
	sub_825D49E0(ctx, base);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x8265dff8
	ctx.lr = 0x82645EB4;
	sub_8265DFF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82580920
	ctx.lr = 0x82645EBC;
	sub_82580920(ctx, base);
loc_82645EBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82645ED8"))) PPC_WEAK_FUNC(sub_82645ED8);
PPC_FUNC_IMPL(__imp__sub_82645ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82645EE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82645f58
	if (ctx.cr6.eq) goto loc_82645F58;
	// addi r30,r31,60
	ctx.r30.s64 = ctx.r31.s64 + 60;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82645f3c
	if (ctx.cr6.eq) goto loc_82645F3C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82645f3c
	if (ctx.cr6.eq) goto loc_82645F3C;
	// lwz r3,92(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// bl 0x8265de50
	ctx.lr = 0x82645F20;
	sub_8265DE50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82645f3c
	if (ctx.cr6.eq) goto loc_82645F3C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8259a830
	ctx.lr = 0x82645F3C;
	sub_8259A830(ctx, base);
loc_82645F3C:
	// bl 0x8263d700
	ctx.lr = 0x82645F40;
	sub_8263D700(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x8265fce0
	ctx.lr = 0x82645F58;
	sub_8265FCE0(ctx, base);
loc_82645F58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82645F60"))) PPC_WEAK_FUNC(sub_82645F60);
PPC_FUNC_IMPL(__imp__sub_82645F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82645f94
	if (ctx.cr6.eq) goto loc_82645F94;
	// bl 0x82581e38
	ctx.lr = 0x82645F94;
	sub_82581E38(ctx, base);
loc_82645F94:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82645fd0
	if (ctx.cr6.eq) goto loc_82645FD0;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
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
loc_82645FD0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82645FE8"))) PPC_WEAK_FUNC(sub_82645FE8);
PPC_FUNC_IMPL(__imp__sub_82645FE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82646008
	if (ctx.cr6.eq) goto loc_82646008;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82646008
	if (ctx.cr6.eq) goto loc_82646008;
	// b 0x82661a90
	sub_82661A90(ctx, base);
	return;
loc_82646008:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82646010"))) PPC_WEAK_FUNC(sub_82646010);
PPC_FUNC_IMPL(__imp__sub_82646010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r10,-15008(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15008);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// bne cr6,0x8264607c
	if (!ctx.cr6.eq) goto loc_8264607C;
	// addi r31,r11,-15024
	ctx.r31.s64 = ctx.r11.s64 + -15024;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-15008(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15008, ctx.r11.u32);
	// bl 0x82581e70
	ctx.lr = 0x8264604C;
	sub_82581E70(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32081
	ctx.r10.s64 = -2102460416;
	// addi r11,r11,-4940
	ctx.r11.s64 = ctx.r11.s64 + -4940;
	// addi r3,r10,-28880
	ctx.r3.s64 = ctx.r10.s64 + -28880;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x82646064;
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
loc_8264607C:
	// addi r3,r11,-15024
	ctx.r3.s64 = ctx.r11.s64 + -15024;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82646098"))) PPC_WEAK_FUNC(sub_82646098);
PPC_FUNC_IMPL(__imp__sub_82646098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x826460C8;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826460f4
	if (ctx.cr6.eq) goto loc_826460F4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-4732
	ctx.r10.s64 = ctx.r11.s64 + -4732;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x826460f8
	goto loc_826460F8;
loc_826460F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826460F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x82646144
	if (!ctx.cr6.eq) goto loc_82646144;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82646124
	if (ctx.cr6.eq) goto loc_82646124;
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
	ctx.lr = 0x82646124;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82646124:
	// lis r10,-32071
	ctx.r10.s64 = -2101805056;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,-32016(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32016);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x82646144;
	sub_821E0968(ctx, base);
loc_82646144:
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

__attribute__((alias("__imp__sub_82646160"))) PPC_WEAK_FUNC(sub_82646160);
PPC_FUNC_IMPL(__imp__sub_82646160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x82646190;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826461bc
	if (ctx.cr6.eq) goto loc_826461BC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-4712
	ctx.r10.s64 = ctx.r11.s64 + -4712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x826461c0
	goto loc_826461C0;
loc_826461BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826461C0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8264620c
	if (!ctx.cr6.eq) goto loc_8264620C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826461ec
	if (ctx.cr6.eq) goto loc_826461EC;
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
	ctx.lr = 0x826461EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826461EC:
	// lis r10,-32071
	ctx.r10.s64 = -2101805056;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,-32016(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32016);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x8264620C;
	sub_821E0968(ctx, base);
loc_8264620C:
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

__attribute__((alias("__imp__sub_82646228"))) PPC_WEAK_FUNC(sub_82646228);
PPC_FUNC_IMPL(__imp__sub_82646228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82646230;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r4,r11,-4648
	ctx.r4.s64 = ctx.r11.s64 + -4648;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825867a8
	ctx.lr = 0x82646258;
	sub_825867A8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-4664
	ctx.r11.s64 = ctx.r11.s64 + -4664;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x825b4a48
	ctx.lr = 0x82646270;
	sub_825B4A48(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x825b4a48
	ctx.lr = 0x8264627C;
	sub_825B4A48(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x825b4a48
	ctx.lr = 0x82646288;
	sub_825B4A48(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x825d49b0
	ctx.lr = 0x82646290;
	sub_825D49B0(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r27.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826462bc
	if (ctx.cr6.eq) goto loc_826462BC;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826462B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
loc_826462BC:
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826462e8
	if (ctx.cr6.eq) goto loc_826462E8;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826462E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
loc_826462E8:
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// stw r27,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r27.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82646314
	if (ctx.cr6.eq) goto loc_82646314;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82646310;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
loc_82646314:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// stw r27,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82646328"))) PPC_WEAK_FUNC(sub_82646328);
PPC_FUNC_IMPL(__imp__sub_82646328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82646330;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r28,100
	ctx.r3.s64 = ctx.r28.s64 + 100;
	// bl 0x821e0968
	ctx.lr = 0x82646340;
	sub_821E0968(ctx, base);
	// addi r30,r28,88
	ctx.r30.s64 = ctx.r28.s64 + 88;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82646368
	if (ctx.cr6.eq) goto loc_82646368;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82646364;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
loc_82646368:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r28,76
	ctx.r31.s64 = ctx.r28.s64 + 76;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264639c
	if (ctx.cr6.eq) goto loc_8264639C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82646398;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_8264639C:
	// addi r30,r28,64
	ctx.r30.s64 = ctx.r28.s64 + 64;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826463cc
	if (ctx.cr6.eq) goto loc_826463CC;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826463C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
loc_826463CC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// bl 0x82586898
	ctx.lr = 0x826463DC;
	sub_82586898(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826463E8"))) PPC_WEAK_FUNC(sub_826463E8);
PPC_FUNC_IMPL(__imp__sub_826463E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82646328
	ctx.lr = 0x82646408;
	sub_82646328(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82646420
	if (ctx.cr6.eq) goto loc_82646420;
	// bl 0x82186190
	ctx.lr = 0x8264641C;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82646420:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82646438"))) PPC_WEAK_FUNC(sub_82646438);
PPC_FUNC_IMPL(__imp__sub_82646438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82646440;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r4,-15116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -15116);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8264646c
	if (!ctx.cr6.eq) goto loc_8264646C;
	// bl 0x82642090
	ctx.lr = 0x82646464;
	sub_82642090(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,-15116(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15116, ctx.r4.u32);
loc_8264646C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r11,-5276
	ctx.r7.s64 = ctx.r11.s64 + -5276;
	// rotlwi r6,r29,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8265bd88
	ctx.lr = 0x82646488;
	sub_8265BD88(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8264649c
	if (ctx.cr6.eq) goto loc_8264649C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x8264649C;
	sub_82659610(ctx, base);
loc_8264649C:
	// lwz r3,100(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// stw r31,100(r28)
	PPC_STORE_U32(ctx.r28.u32 + 100, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826464b0
	if (ctx.cr6.eq) goto loc_826464B0;
	// bl 0x82581e38
	ctx.lr = 0x826464B0;
	sub_82581E38(ctx, base);
loc_826464B0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826464c0
	if (ctx.cr6.eq) goto loc_826464C0;
	// bl 0x82581e38
	ctx.lr = 0x826464C0;
	sub_82581E38(ctx, base);
loc_826464C0:
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826464e0
	if (!ctx.cr6.eq) goto loc_826464E0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_826464E0:
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82646500"))) PPC_WEAK_FUNC(sub_82646500);
PPC_FUNC_IMPL(__imp__sub_82646500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82646508;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r4,-15116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -15116);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82646534
	if (!ctx.cr6.eq) goto loc_82646534;
	// bl 0x82642090
	ctx.lr = 0x8264652C;
	sub_82642090(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,-15116(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15116, ctx.r4.u32);
loc_82646534:
	// rotlwi r6,r29,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8265bbd8
	ctx.lr = 0x82646544;
	sub_8265BBD8(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82646558
	if (ctx.cr6.eq) goto loc_82646558;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x82646558;
	sub_82659610(ctx, base);
loc_82646558:
	// lwz r3,100(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// stw r31,100(r28)
	PPC_STORE_U32(ctx.r28.u32 + 100, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264656c
	if (ctx.cr6.eq) goto loc_8264656C;
	// bl 0x82581e38
	ctx.lr = 0x8264656C;
	sub_82581E38(ctx, base);
loc_8264656C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264657c
	if (ctx.cr6.eq) goto loc_8264657C;
	// bl 0x82581e38
	ctx.lr = 0x8264657C;
	sub_82581E38(ctx, base);
loc_8264657C:
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264659c
	if (!ctx.cr6.eq) goto loc_8264659C;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_8264659C:
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826465B8"))) PPC_WEAK_FUNC(sub_826465B8);
PPC_FUNC_IMPL(__imp__sub_826465B8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82645f60
	sub_82645F60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826465C8"))) PPC_WEAK_FUNC(sub_826465C8);
PPC_FUNC_IMPL(__imp__sub_826465C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826465D0"))) PPC_WEAK_FUNC(sub_826465D0);
PPC_FUNC_IMPL(__imp__sub_826465D0) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x826454c8
	ctx.lr = 0x826465F4;
	sub_826454C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82645328
	ctx.lr = 0x82646600;
	sub_82645328(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645440
	ctx.lr = 0x82646608;
	sub_82645440(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82645e58
	ctx.lr = 0x82646614;
	sub_82645E58(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82646644
	if (ctx.cr6.eq) goto loc_82646644;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d49e0
	ctx.lr = 0x82646630;
	sub_825D49E0(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x8265e718
	ctx.lr = 0x8264663C;
	sub_8265E718(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82580920
	ctx.lr = 0x82646644;
	sub_82580920(ctx, base);
loc_82646644:
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

__attribute__((alias("__imp__sub_82646660"))) PPC_WEAK_FUNC(sub_82646660);
PPC_FUNC_IMPL(__imp__sub_82646660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r10,-4792
	ctx.r10.s64 = ctx.r10.s64 + -4792;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x826466c8
	if (ctx.cr6.eq) goto loc_826466C8;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826466c8
	if (ctx.cr6.eq) goto loc_826466C8;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d49e0
	ctx.lr = 0x826466B8;
	sub_825D49E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645f60
	ctx.lr = 0x826466C0;
	sub_82645F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82580920
	ctx.lr = 0x826466C8;
	sub_82580920(ctx, base);
loc_826466C8:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826466dc
	if (ctx.cr6.eq) goto loc_826466DC;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_826466DC:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826466f0
	if (ctx.cr6.eq) goto loc_826466F0;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_826466F0:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82646700
	if (ctx.cr6.eq) goto loc_82646700;
	// bl 0x82581e38
	ctx.lr = 0x82646700;
	sub_82581E38(ctx, base);
loc_82646700:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-5164
	ctx.r11.s64 = ctx.r11.s64 + -5164;
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

__attribute__((alias("__imp__sub_82646728"))) PPC_WEAK_FUNC(sub_82646728);
PPC_FUNC_IMPL(__imp__sub_82646728) {
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
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8264675C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82646778"))) PPC_WEAK_FUNC(sub_82646778);
PPC_FUNC_IMPL(__imp__sub_82646778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82646780;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r28,68
	ctx.r30.s64 = ctx.r28.s64 + 68;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x826467a0
	if (ctx.cr6.lt) goto loc_826467A0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x826467A0;
	sub_82186190(ctx, base);
loc_826467A0:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// addi r29,r28,40
	ctx.r29.s64 = ctx.r28.s64 + 40;
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// stw r27,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r27.u32);
	// stb r31,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r31.u8);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x826467cc
	if (ctx.cr6.lt) goto loc_826467CC;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x826467CC;
	sub_82186190(ctx, base);
loc_826467CC:
	// addi r30,r28,12
	ctx.r30.s64 = ctx.r28.s64 + 12;
	// stw r27,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r27.u32);
	// stw r31,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r31.u32);
	// stb r31,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r31.u8);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x826467f0
	if (ctx.cr6.lt) goto loc_826467F0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x826467F0;
	sub_82186190(ctx, base);
loc_826467F0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r27,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r27.u32);
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// addi r11,r11,4952
	ctx.r11.s64 = ctx.r11.s64 + 4952;
	// stb r31,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r31.u8);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82646810"))) PPC_WEAK_FUNC(sub_82646810);
PPC_FUNC_IMPL(__imp__sub_82646810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82646660
	ctx.lr = 0x82646830;
	sub_82646660(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82646848
	if (ctx.cr6.eq) goto loc_82646848;
	// bl 0x82186190
	ctx.lr = 0x82646844;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82646848:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82646860"))) PPC_WEAK_FUNC(sub_82646860);
PPC_FUNC_IMPL(__imp__sub_82646860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82646868;
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
	// lwz r4,-15004(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -15004);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82646890
	if (!ctx.cr6.eq) goto loc_82646890;
	// bl 0x82646010
	ctx.lr = 0x82646888;
	sub_82646010(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,-15004(r29)
	PPC_STORE_U32(ctx.r29.u32 + -15004, ctx.r4.u32);
loc_82646890:
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
	ctx.lr = 0x826468A8;
	sub_82582648(ctx, base);
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,-31104
	ctx.r6.s64 = ctx.r11.s64 + -31104;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,6088
	ctx.r5.s64 = ctx.r11.s64 + 6088;
	// bl 0x826df418
	ctx.lr = 0x826468C8;
	sub_826DF418(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// beq cr6,0x826468d8
	if (ctx.cr6.eq) goto loc_826468D8;
	// bl 0x82659610
	ctx.lr = 0x826468D8;
	sub_82659610(ctx, base);
loc_826468D8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826468e8
	if (ctx.cr6.eq) goto loc_826468E8;
	// bl 0x82581e38
	ctx.lr = 0x826468E8;
	sub_82581E38(ctx, base);
loc_826468E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826468F8"))) PPC_WEAK_FUNC(sub_826468F8);
PPC_FUNC_IMPL(__imp__sub_826468F8) {
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
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8264692C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82646948"))) PPC_WEAK_FUNC(sub_82646948);
PPC_FUNC_IMPL(__imp__sub_82646948) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d49e0
	ctx.lr = 0x82646970;
	sub_825D49E0(ctx, base);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x826610a8
	ctx.lr = 0x82646978;
	sub_826610A8(ctx, base);
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,26040
	ctx.r11.s64 = ctx.r11.s64 + 26040;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
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
	ctx.lr = 0x826469B8;
	sub_82585A60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82580920
	ctx.lr = 0x826469C0;
	sub_82580920(ctx, base);
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

__attribute__((alias("__imp__sub_826469D8"))) PPC_WEAK_FUNC(sub_826469D8);
PPC_FUNC_IMPL(__imp__sub_826469D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x826469E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-4608
	ctx.r11.s64 = ctx.r11.s64 + -4608;
	// addi r30,r31,76
	ctx.r30.s64 = ctx.r31.s64 + 76;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r10,r10,-4620
	ctx.r10.s64 = ctx.r10.s64 + -4620;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// beq cr6,0x82646a54
	if (ctx.cr6.eq) goto loc_82646A54;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825d49e0
	ctx.lr = 0x82646A20;
	sub_825D49E0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82646a38
	if (!ctx.cr6.eq) goto loc_82646A38;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
loc_82646A38:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x822eb7e8
	ctx.lr = 0x82646A4C;
	sub_822EB7E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82580920
	ctx.lr = 0x82646A54;
	sub_82580920(ctx, base);
loc_82646A54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581670
	ctx.lr = 0x82646A5C;
	sub_82581670(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82646A68"))) PPC_WEAK_FUNC(sub_82646A68);
PPC_FUNC_IMPL(__imp__sub_82646A68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82646c98
	sub_82646C98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82646A70"))) PPC_WEAK_FUNC(sub_82646A70);
PPC_FUNC_IMPL(__imp__sub_82646A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-5064
	ctx.r3.s64 = ctx.r11.s64 + -5064;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82646A80"))) PPC_WEAK_FUNC(sub_82646A80);
PPC_FUNC_IMPL(__imp__sub_82646A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82646A88;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-4580
	ctx.r11.s64 = ctx.r11.s64 + -4580;
	// addi r10,r10,-4592
	ctx.r10.s64 = ctx.r10.s64 + -4592;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bl 0x82645dd8
	ctx.lr = 0x82646AAC;
	sub_82645DD8(ctx, base);
	// addi r30,r31,76
	ctx.r30.s64 = ctx.r31.s64 + 76;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82646b00
	if (ctx.cr6.eq) goto loc_82646B00;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825d49e0
	ctx.lr = 0x82646ACC;
	sub_825D49E0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82646ae4
	if (!ctx.cr6.eq) goto loc_82646AE4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82646AE4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x822eb7e8
	ctx.lr = 0x82646AF8;
	sub_822EB7E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82580920
	ctx.lr = 0x82646B00;
	sub_82580920(ctx, base);
loc_82646B00:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82646b20
	if (ctx.cr6.eq) goto loc_82646B20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82646B20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82646B20:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82646b40
	if (ctx.cr6.eq) goto loc_82646B40;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82646B40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82646B40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581670
	ctx.lr = 0x82646B48;
	sub_82581670(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82646B50"))) PPC_WEAK_FUNC(sub_82646B50);
PPC_FUNC_IMPL(__imp__sub_82646B50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82646ce8
	sub_82646CE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82646B58"))) PPC_WEAK_FUNC(sub_82646B58);
PPC_FUNC_IMPL(__imp__sub_82646B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-5020
	ctx.r3.s64 = ctx.r11.s64 + -5020;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82646B68"))) PPC_WEAK_FUNC(sub_82646B68);
PPC_FUNC_IMPL(__imp__sub_82646B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,-4560
	ctx.r11.s64 = ctx.r11.s64 + -4560;
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82646bb8
	if (ctx.cr6.eq) goto loc_82646BB8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x822eb7e8
	ctx.lr = 0x82646BAC;
	sub_822EB7E8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x8265f658
	ctx.lr = 0x82646BB8;
	sub_8265F658(ctx, base);
loc_82646BB8:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82646bc8
	if (ctx.cr6.eq) goto loc_82646BC8;
	// bl 0x82581e38
	ctx.lr = 0x82646BC8;
	sub_82581E38(ctx, base);
loc_82646BC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ba7b0
	ctx.lr = 0x82646BD0;
	sub_825BA7B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82646BE8"))) PPC_WEAK_FUNC(sub_82646BE8);
PPC_FUNC_IMPL(__imp__sub_82646BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-4984
	ctx.r3.s64 = ctx.r11.s64 + -4984;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82646BF8"))) PPC_WEAK_FUNC(sub_82646BF8);
PPC_FUNC_IMPL(__imp__sub_82646BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82646C00;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-4544
	ctx.r11.s64 = ctx.r11.s64 + -4544;
	// li r29,-1
	ctx.r29.s64 = -1;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// li r28,15
	ctx.r28.s64 = 15;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r28,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r28.u32);
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// bl 0x82161d10
	ctx.lr = 0x82646C4C;
	sub_82161D10(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r28,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r28.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// bl 0x82161d10
	ctx.lr = 0x82646C6C;
	sub_82161D10(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r28,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r28.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// bl 0x82161d10
	ctx.lr = 0x82646C8C;
	sub_82161D10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82646C98"))) PPC_WEAK_FUNC(sub_82646C98);
PPC_FUNC_IMPL(__imp__sub_82646C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826469d8
	ctx.lr = 0x82646CB8;
	sub_826469D8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82646cd0
	if (ctx.cr6.eq) goto loc_82646CD0;
	// bl 0x82186190
	ctx.lr = 0x82646CCC;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82646CD0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82646CE8"))) PPC_WEAK_FUNC(sub_82646CE8);
PPC_FUNC_IMPL(__imp__sub_82646CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82646a80
	ctx.lr = 0x82646D08;
	sub_82646A80(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82646d20
	if (ctx.cr6.eq) goto loc_82646D20;
	// bl 0x82186190
	ctx.lr = 0x82646D1C;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82646D20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82646D38"))) PPC_WEAK_FUNC(sub_82646D38);
PPC_FUNC_IMPL(__imp__sub_82646D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82646b68
	ctx.lr = 0x82646D58;
	sub_82646B68(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82646d70
	if (ctx.cr6.eq) goto loc_82646D70;
	// bl 0x82186190
	ctx.lr = 0x82646D6C;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82646D70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82646D88"))) PPC_WEAK_FUNC(sub_82646D88);
PPC_FUNC_IMPL(__imp__sub_82646D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x82646DA0;
	sub_82186158(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82646dd4
	if (ctx.cr6.eq) goto loc_82646DD4;
	// bl 0x826620c0
	ctx.lr = 0x82646DB0;
	sub_826620C0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-4520
	ctx.r11.s64 = ctx.r11.s64 + -4520;
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
loc_82646DD4:
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

__attribute__((alias("__imp__sub_82646DF0"))) PPC_WEAK_FUNC(sub_82646DF0);
PPC_FUNC_IMPL(__imp__sub_82646DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826620e0
	ctx.lr = 0x82646E10;
	sub_826620E0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82646e28
	if (ctx.cr6.eq) goto loc_82646E28;
	// bl 0x82186190
	ctx.lr = 0x82646E24;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82646E28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82646E40"))) PPC_WEAK_FUNC(sub_82646E40);
PPC_FUNC_IMPL(__imp__sub_82646E40) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82646E58"))) PPC_WEAK_FUNC(sub_82646E58);
PPC_FUNC_IMPL(__imp__sub_82646E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82646e84
	if (ctx.cr6.eq) goto loc_82646E84;
	// bl 0x82581e38
	ctx.lr = 0x82646E84;
	sub_82581E38(ctx, base);
loc_82646E84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826620e0
	ctx.lr = 0x82646E8C;
	sub_826620E0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82646ea4
	if (ctx.cr6.eq) goto loc_82646EA4;
	// bl 0x82186190
	ctx.lr = 0x82646EA0;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82646EA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82646EC0"))) PPC_WEAK_FUNC(sub_82646EC0);
PPC_FUNC_IMPL(__imp__sub_82646EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82186158
	ctx.lr = 0x82646ED8;
	sub_82186158(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82646f14
	if (ctx.cr6.eq) goto loc_82646F14;
	// bl 0x826620c0
	ctx.lr = 0x82646EE8;
	sub_826620C0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-4476
	ctx.r11.s64 = ctx.r11.s64 + -4476;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
loc_82646F14:
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

__attribute__((alias("__imp__sub_82646F30"))) PPC_WEAK_FUNC(sub_82646F30);
PPC_FUNC_IMPL(__imp__sub_82646F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82646f5c
	if (ctx.cr6.eq) goto loc_82646F5C;
	// bl 0x82581e38
	ctx.lr = 0x82646F5C;
	sub_82581E38(ctx, base);
loc_82646F5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826620e0
	ctx.lr = 0x82646F64;
	sub_826620E0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82646f7c
	if (ctx.cr6.eq) goto loc_82646F7C;
	// bl 0x82186190
	ctx.lr = 0x82646F78;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82646F7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82646F98"))) PPC_WEAK_FUNC(sub_82646F98);
PPC_FUNC_IMPL(__imp__sub_82646F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82186158
	ctx.lr = 0x82646FB0;
	sub_82186158(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82646fec
	if (ctx.cr6.eq) goto loc_82646FEC;
	// bl 0x826620c0
	ctx.lr = 0x82646FC0;
	sub_826620C0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-4432
	ctx.r11.s64 = ctx.r11.s64 + -4432;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82646FEC:
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

__attribute__((alias("__imp__sub_82647008"))) PPC_WEAK_FUNC(sub_82647008);
PPC_FUNC_IMPL(__imp__sub_82647008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x82647020;
	sub_82186158(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82647054
	if (ctx.cr6.eq) goto loc_82647054;
	// bl 0x826620c0
	ctx.lr = 0x82647030;
	sub_826620C0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-4388
	ctx.r11.s64 = ctx.r11.s64 + -4388;
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
loc_82647054:
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

__attribute__((alias("__imp__sub_82647070"))) PPC_WEAK_FUNC(sub_82647070);
PPC_FUNC_IMPL(__imp__sub_82647070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82186158
	ctx.lr = 0x82647088;
	sub_82186158(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826470c4
	if (ctx.cr6.eq) goto loc_826470C4;
	// bl 0x826620c0
	ctx.lr = 0x82647098;
	sub_826620C0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-4344
	ctx.r11.s64 = ctx.r11.s64 + -4344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
loc_826470C4:
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

__attribute__((alias("__imp__sub_826470E0"))) PPC_WEAK_FUNC(sub_826470E0);
PPC_FUNC_IMPL(__imp__sub_826470E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82186158
	ctx.lr = 0x826470F8;
	sub_82186158(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82647134
	if (ctx.cr6.eq) goto loc_82647134;
	// bl 0x826620c0
	ctx.lr = 0x82647108;
	sub_826620C0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-4300
	ctx.r11.s64 = ctx.r11.s64 + -4300;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
loc_82647134:
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

__attribute__((alias("__imp__sub_82647150"))) PPC_WEAK_FUNC(sub_82647150);
PPC_FUNC_IMPL(__imp__sub_82647150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82646778
	ctx.lr = 0x82647170;
	sub_82646778(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82647188
	if (ctx.cr6.eq) goto loc_82647188;
	// bl 0x82186190
	ctx.lr = 0x82647184;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82647188:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826471A0"))) PPC_WEAK_FUNC(sub_826471A0);
PPC_FUNC_IMPL(__imp__sub_826471A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x826471A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// std r6,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r6.u64);
	// lwz r30,180(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r29,176(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// lwz r31,156(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r27,164(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_826471D0:
	// subf r11,r31,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r31.s64;
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
	// beq cr6,0x82647204
	if (ctx.cr6.eq) goto loc_82647204;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x826471FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x826471d0
	goto loc_826471D0;
loc_82647204:
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82647220"))) PPC_WEAK_FUNC(sub_82647220);
PPC_FUNC_IMPL(__imp__sub_82647220) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-4268
	ctx.r11.s64 = ctx.r11.s64 + -4268;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82646948
	ctx.lr = 0x82647248;
	sub_82646948(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r10,-15028(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15028);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82647260
	if (!ctx.cr6.eq) goto loc_82647260;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-15028(r11)
	PPC_STORE_U32(ctx.r11.u32 + -15028, ctx.r10.u32);
loc_82647260:
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,20336
	ctx.r11.s64 = ctx.r11.s64 + 20336;
	// addi r30,r31,36
	ctx.r30.s64 = ctx.r31.s64 + 36;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// rldicl r9,r11,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ld r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// bl 0x826471a0
	ctx.lr = 0x826472C8;
	sub_826471A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82405418
	ctx.lr = 0x826472D0;
	sub_82405418(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826472e0
	if (ctx.cr6.eq) goto loc_826472E0;
	// bl 0x821601b8
	ctx.lr = 0x826472E0;
	sub_821601B8(ctx, base);
loc_826472E0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-5084
	ctx.r11.s64 = ctx.r11.s64 + -5084;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826472fc
	if (ctx.cr6.eq) goto loc_826472FC;
	// bl 0x821601b8
	ctx.lr = 0x826472FC;
	sub_821601B8(ctx, base);
loc_826472FC:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264730c
	if (ctx.cr6.eq) goto loc_8264730C;
	// bl 0x821601b8
	ctx.lr = 0x8264730C;
	sub_821601B8(ctx, base);
loc_8264730C:
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x8259d1a8
	ctx.lr = 0x82647314;
	sub_8259D1A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82405418
	ctx.lr = 0x8264731C;
	sub_82405418(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82647324;
	sub_82186190(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x821e0968
	ctx.lr = 0x82647334;
	sub_821E0968(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-5152
	ctx.r11.s64 = ctx.r11.s64 + -5152;
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

__attribute__((alias("__imp__sub_82647358"))) PPC_WEAK_FUNC(sub_82647358);
PPC_FUNC_IMPL(__imp__sub_82647358) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82647370"))) PPC_WEAK_FUNC(sub_82647370);
PPC_FUNC_IMPL(__imp__sub_82647370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b8
	ctx.lr = 0x82647378;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// stb r30,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r30.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_826473AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826473ac
	if (!ctx.cr6.eq) goto loc_826473AC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x826473D4;
	sub_82161E08(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-15044(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15044);
	// bl 0x82582148
	ctx.lr = 0x826473E8;
	sub_82582148(ctx, base);
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,-32060
	ctx.r6.s64 = ctx.r11.s64 + -32060;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,6088
	ctx.r5.s64 = ctx.r11.s64 + 6088;
	// bl 0x826df418
	ctx.lr = 0x82647408;
	sub_826DF418(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264741c
	if (ctx.cr6.eq) goto loc_8264741C;
	// bl 0x82581e38
	ctx.lr = 0x8264741C;
	sub_82581E38(ctx, base);
loc_8264741C:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82647430
	if (ctx.cr6.lt) goto loc_82647430;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82186190
	ctx.lr = 0x82647430;
	sub_82186190(ctx, base);
loc_82647430:
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stb r30,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r30.u8);
	// beq cr6,0x826474bc
	if (ctx.cr6.eq) goto loc_826474BC;
	// lwz r31,100(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82647460
	if (ctx.cr6.eq) goto loc_82647460;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x82647458;
	sub_82659610(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x82647460;
	sub_82659610(ctx, base);
loc_82647460:
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826474bc
	if (ctx.cr6.eq) goto loc_826474BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581e38
	ctx.lr = 0x82647474;
	sub_82581E38(ctx, base);
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826474bc
	if (ctx.cr6.eq) goto loc_826474BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82659610
	ctx.lr = 0x82647490;
	sub_82659610(ctx, base);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82645bf0
	ctx.lr = 0x826474A8;
	sub_82645BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581e38
	ctx.lr = 0x826474B0;
	sub_82581E38(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
loc_826474BC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// beq cr6,0x826474d0
	if (ctx.cr6.eq) goto loc_826474D0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82581e38
	ctx.lr = 0x826474D0;
	sub_82581E38(ctx, base);
loc_826474D0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826474E0"))) PPC_WEAK_FUNC(sub_826474E0);
PPC_FUNC_IMPL(__imp__sub_826474E0) {
	PPC_FUNC_PROLOGUE();
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
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r30,15
	ctx.r30.s64 = 15;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
loc_82647514:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82647514
	if (!ctx.cr6.eq) goto loc_82647514;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82647538;
	sub_82161E08(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82646860
	ctx.lr = 0x82647544;
	sub_82646860(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82647558
	if (ctx.cr6.lt) goto loc_82647558;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82186190
	ctx.lr = 0x82647558;
	sub_82186190(ctx, base);
loc_82647558:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// beq cr6,0x826475d4
	if (ctx.cr6.eq) goto loc_826475D4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826475c8
	if (ctx.cr6.eq) goto loc_826475C8;
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// beq cr6,0x82647594
	if (ctx.cr6.eq) goto loc_82647594;
	// bl 0x82659610
	ctx.lr = 0x82647594;
	sub_82659610(ctx, base);
loc_82647594:
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-15116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -15116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826475ac
	if (!ctx.cr6.eq) goto loc_826475AC;
	// bl 0x82642090
	ctx.lr = 0x826475A8;
	sub_82642090(ctx, base);
	// stw r3,-15116(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15116, ctx.r3.u32);
loc_826475AC:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8265ca30
	ctx.lr = 0x826475B4;
	sub_8265CA30(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826475c4
	if (ctx.cr6.eq) goto loc_826475C4;
	// bl 0x82581e38
	ctx.lr = 0x826475C4;
	sub_82581E38(ctx, base);
loc_826475C4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_826475C8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826475d4
	if (ctx.cr6.eq) goto loc_826475D4;
	// bl 0x82581e38
	ctx.lr = 0x826475D4;
	sub_82581E38(ctx, base);
loc_826475D4:
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

__attribute__((alias("__imp__sub_826475F0"))) PPC_WEAK_FUNC(sub_826475F0);
PPC_FUNC_IMPL(__imp__sub_826475F0) {
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
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stfs f1,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82647644
	if (ctx.cr6.eq) goto loc_82647644;
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d49e0
	ctx.lr = 0x82647634;
	sub_825D49E0(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r30,r11,31
	ctx.r30.u64 = ctx.r11.u32 & 0x1;
	// bl 0x82580920
	ctx.lr = 0x82647644;
	sub_82580920(ctx, base);
loc_82647644:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82647658
	if (ctx.cr6.eq) goto loc_82647658;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82586ac0
	ctx.lr = 0x82647658;
	sub_82586AC0(ctx, base);
loc_82647658:
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d49e0
	ctx.lr = 0x82647668;
	sub_825D49E0(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826476a4
	if (!ctx.cr6.eq) goto loc_826476A4;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826476a4
	if (!ctx.cr6.eq) goto loc_826476A4;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r11,r11,2408
	ctx.r11.s64 = ctx.r11.s64 + 2408;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826476a4
	if (ctx.cr6.eq) goto loc_826476A4;
	// bl 0x8249f618
	ctx.lr = 0x826476A4;
	sub_8249F618(ctx, base);
loc_826476A4:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// bl 0x82580920
	ctx.lr = 0x826476B8;
	sub_82580920(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826476D0"))) PPC_WEAK_FUNC(sub_826476D0);
PPC_FUNC_IMPL(__imp__sub_826476D0) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d49e0
	ctx.lr = 0x82647700;
	sub_825D49E0(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82647730
	if (ctx.cr6.eq) goto loc_82647730;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// bl 0x82619008
	ctx.lr = 0x82647724;
	sub_82619008(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
loc_82647730:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82580920
	ctx.lr = 0x82647738;
	sub_82580920(ctx, base);
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

__attribute__((alias("__imp__sub_82647758"))) PPC_WEAK_FUNC(sub_82647758);
PPC_FUNC_IMPL(__imp__sub_82647758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82647760;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r31,88
	ctx.r29.s64 = ctx.r31.s64 + 88;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826477d4
	if (!ctx.cr6.eq) goto loc_826477D4;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r11,r11,2408
	ctx.r11.s64 = ctx.r11.s64 + 2408;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826477d4
	if (ctx.cr6.eq) goto loc_826477D4;
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d49e0
	ctx.lr = 0x826477A0;
	sub_825D49E0(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826477cc
	if (ctx.cr6.eq) goto loc_826477CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82586ac0
	ctx.lr = 0x826477B8;
	sub_82586AC0(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// bl 0x8249f618
	ctx.lr = 0x826477CC;
	sub_8249F618(ctx, base);
loc_826477CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82580920
	ctx.lr = 0x826477D4;
	sub_82580920(ctx, base);
loc_826477D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826477E0"))) PPC_WEAK_FUNC(sub_826477E0);
PPC_FUNC_IMPL(__imp__sub_826477E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82647220
	ctx.lr = 0x82647800;
	sub_82647220(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82647818
	if (ctx.cr6.eq) goto loc_82647818;
	// bl 0x82186190
	ctx.lr = 0x82647814;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82647818:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82647830"))) PPC_WEAK_FUNC(sub_82647830);
PPC_FUNC_IMPL(__imp__sub_82647830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82647888
	if (ctx.cr6.eq) goto loc_82647888;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82647888
	if (ctx.cr6.eq) goto loc_82647888;
	// bl 0x826475f0
	ctx.lr = 0x82647864;
	sub_826475F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826454c8
	ctx.lr = 0x8264786C;
	sub_826454C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645440
	ctx.lr = 0x82647874;
	sub_82645440(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82647888:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826465d0
	ctx.lr = 0x82647890;
	sub_826465D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826478A8"))) PPC_WEAK_FUNC(sub_826478A8);
PPC_FUNC_IMPL(__imp__sub_826478A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x826478B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r29,172(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r28,4(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82186158
	ctx.lr = 0x826478D0;
	sub_82186158(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826478e0
	if (ctx.cr6.eq) goto loc_826478E0;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_826478E0:
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826478f0
	if (ctx.cr6.eq) goto loc_826478F0;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_826478F0:
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82647904
	if (ctx.cr6.eq) goto loc_82647904;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82647904:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8261ddf8
	ctx.lr = 0x82647910;
	sub_8261DDF8(ctx, base);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82647928"))) PPC_WEAK_FUNC(sub_82647928);
PPC_FUNC_IMPL(__imp__sub_82647928) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r11,-4220
	ctx.r5.s64 = ctx.r11.s64 + -4220;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82164090
	ctx.lr = 0x82647950;
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
	ctx.lr = 0x82647974;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82647988
	if (ctx.cr6.lt) goto loc_82647988;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x82647988;
	sub_82186190(ctx, base);
loc_82647988:
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

__attribute__((alias("__imp__sub_826479A0"))) PPC_WEAK_FUNC(sub_826479A0);
PPC_FUNC_IMPL(__imp__sub_826479A0) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r11,-4212
	ctx.r5.s64 = ctx.r11.s64 + -4212;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82164090
	ctx.lr = 0x826479C8;
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
	ctx.lr = 0x826479EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82647a00
	if (ctx.cr6.lt) goto loc_82647A00;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x82647A00;
	sub_82186190(ctx, base);
loc_82647A00:
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

__attribute__((alias("__imp__sub_82647A18"))) PPC_WEAK_FUNC(sub_82647A18);
PPC_FUNC_IMPL(__imp__sub_82647A18) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r11,-4204
	ctx.r5.s64 = ctx.r11.s64 + -4204;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82164090
	ctx.lr = 0x82647A40;
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
	ctx.lr = 0x82647A64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82647a78
	if (ctx.cr6.lt) goto loc_82647A78;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x82647A78;
	sub_82186190(ctx, base);
loc_82647A78:
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

__attribute__((alias("__imp__sub_82647A90"))) PPC_WEAK_FUNC(sub_82647A90);
PPC_FUNC_IMPL(__imp__sub_82647A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82647A98;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82645dd8
	ctx.lr = 0x82647AA4;
	sub_82645DD8(ctx, base);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82647cd4
	if (ctx.cr6.eq) goto loc_82647CD4;
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825d49e0
	ctx.lr = 0x82647AC0;
	sub_825D49E0(ctx, base);
	// li r3,132
	ctx.r3.s64 = 132;
	// bl 0x82186158
	ctx.lr = 0x82647AC8;
	sub_82186158(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82647b4c
	if (ctx.cr6.eq) goto loc_82647B4C;
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r10,r10,21288
	ctx.r10.s64 = ctx.r10.s64 + 21288;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// bl 0x8238c6d8
	ctx.lr = 0x82647B2C;
	sub_8238C6D8(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82646228
	ctx.lr = 0x82647B44;
	sub_82646228(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82647b50
	goto loc_82647B50;
loc_82647B4C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82647B50:
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82647b74
	if (ctx.cr6.eq) goto loc_82647B74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82647B74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82647B74:
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x82186158
	ctx.lr = 0x82647B7C;
	sub_82186158(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82647c20
	if (ctx.cr6.eq) goto loc_82647C20;
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// addi r10,r10,21472
	ctx.r10.s64 = ctx.r10.s64 + 21472;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82238e28
	ctx.lr = 0x82647BC4;
	sub_82238E28(ctx, base);
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r10,r10,24152
	ctx.r10.s64 = ctx.r10.s64 + 24152;
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8238c6d8
	ctx.lr = 0x82647C00;
	sub_8238C6D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r4,r11,-4196
	ctx.r4.s64 = ctx.r11.s64 + -4196;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82618e78
	ctx.lr = 0x82647C1C;
	sub_82618E78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82647C20:
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r31,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82647c44
	if (ctx.cr6.eq) goto loc_82647C44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82647C44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82647C44:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82581078
	ctx.lr = 0x82647C4C;
	sub_82581078(ctx, base);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82647c8c
	if (ctx.cr6.eq) goto loc_82647C8C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82647c8c
	if (ctx.cr6.eq) goto loc_82647C8C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82647C7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82647c8c
	if (ctx.cr6.eq) goto loc_82647C8C;
	// lwz r4,80(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// bl 0x82586c80
	ctx.lr = 0x82647C8C;
	sub_82586C80(ctx, base);
loc_82647C8C:
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82647ccc
	if (ctx.cr6.eq) goto loc_82647CCC;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82647ccc
	if (ctx.cr6.eq) goto loc_82647CCC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82647CBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82647ccc
	if (ctx.cr6.eq) goto loc_82647CCC;
	// lwz r4,84(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// bl 0x82586c80
	ctx.lr = 0x82647CCC;
	sub_82586C80(ctx, base);
loc_82647CCC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82580920
	ctx.lr = 0x82647CD4;
	sub_82580920(ctx, base);
loc_82647CD4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82647CE0"))) PPC_WEAK_FUNC(sub_82647CE0);
PPC_FUNC_IMPL(__imp__sub_82647CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82647CE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82581500
	ctx.lr = 0x82647CF8;
	sub_82581500(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-4608
	ctx.r11.s64 = ctx.r11.s64 + -4608;
	// addi r30,r31,76
	ctx.r30.s64 = ctx.r31.s64 + 76;
	// addi r10,r10,-4620
	ctx.r10.s64 = ctx.r10.s64 + -4620;
	// addi r3,r29,36
	ctx.r3.s64 = ctx.r29.s64 + 36;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// bl 0x826478a8
	ctx.lr = 0x82647D3C;
	sub_826478A8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82647D50"))) PPC_WEAK_FUNC(sub_82647D50);
PPC_FUNC_IMPL(__imp__sub_82647D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82647D58;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82581500
	ctx.lr = 0x82647D68;
	sub_82581500(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-4580
	ctx.r11.s64 = ctx.r11.s64 + -4580;
	// addi r30,r31,76
	ctx.r30.s64 = ctx.r31.s64 + 76;
	// addi r10,r10,-4592
	ctx.r10.s64 = ctx.r10.s64 + -4592;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ld r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// bl 0x826478a8
	ctx.lr = 0x82647DBC;
	sub_826478A8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82647DD0"))) PPC_WEAK_FUNC(sub_82647DD0);
PPC_FUNC_IMPL(__imp__sub_82647DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x82647DD8;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// bl 0x825ba970
	ctx.lr = 0x82647DF4;
	sub_825BA970(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// addi r11,r11,-4560
	ctx.r11.s64 = ctx.r11.s64 + -4560;
	// addi r25,r31,60
	ctx.r25.s64 = ctx.r31.s64 + 60;
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// bl 0x825ba8f8
	ctx.lr = 0x82647E28;
	sub_825BA8F8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x826478a8
	ctx.lr = 0x82647E50;
	sub_826478A8(ctx, base);
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// bne cr6,0x82647eec
	if (!ctx.cr6.eq) goto loc_82647EEC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82647E6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82647eec
	if (ctx.cr6.eq) goto loc_82647EEC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-4156
	ctx.r4.s64 = ctx.r11.s64 + -4156;
	// bl 0x821620e8
	ctx.lr = 0x82647E84;
	sub_821620E8(ctx, base);
	// lis r30,-32045
	ctx.r30.s64 = -2100101120;
	// lwz r4,26768(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26768);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82647ea0
	if (!ctx.cr6.eq) goto loc_82647EA0;
	// bl 0x8216d1a0
	ctx.lr = 0x82647E98;
	sub_8216D1A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,26768(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26768, ctx.r4.u32);
loc_82647EA0:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82582148
	ctx.lr = 0x82647EAC;
	sub_82582148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8216a210
	ctx.lr = 0x82647EB8;
	sub_8216A210(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823032b8
	ctx.lr = 0x82647EC4;
	sub_823032B8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82647ed4
	if (ctx.cr6.eq) goto loc_82647ED4;
	// bl 0x82581e38
	ctx.lr = 0x82647ED4;
	sub_82581E38(ctx, base);
loc_82647ED4:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82647ee4
	if (ctx.cr6.eq) goto loc_82647EE4;
	// bl 0x82581e38
	ctx.lr = 0x82647EE4;
	sub_82581E38(ctx, base);
loc_82647EE4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825fc7b8
	ctx.lr = 0x82647EEC;
	sub_825FC7B8(ctx, base);
loc_82647EEC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x8265f658
	ctx.lr = 0x82647EF8;
	sub_8265F658(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82647F08"))) PPC_WEAK_FUNC(sub_82647F08);
PPC_FUNC_IMPL(__imp__sub_82647F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82647F34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82647f80
	if (ctx.cr6.eq) goto loc_82647F80;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82647f70
	if (ctx.cr6.eq) goto loc_82647F70;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82647f70
	if (ctx.cr6.eq) goto loc_82647F70;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82647f80
	if (!ctx.cr6.eq) goto loc_82647F80;
	// bl 0x82645dd8
	ctx.lr = 0x82647F6C;
	sub_82645DD8(ctx, base);
	// b 0x82647f80
	goto loc_82647F80;
loc_82647F70:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82647f80
	if (ctx.cr6.eq) goto loc_82647F80;
	// bl 0x82647a90
	ctx.lr = 0x82647F80;
	sub_82647A90(ctx, base);
loc_82647F80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82647F98"))) PPC_WEAK_FUNC(sub_82647F98);
PPC_FUNC_IMPL(__imp__sub_82647F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82647FA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x82647fec
	if (ctx.cr6.lt) goto loc_82647FEC;
	// bne cr6,0x826480c4
	if (!ctx.cr6.eq) goto loc_826480C4;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82186158
	ctx.lr = 0x82647FC4;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82647fe0
	if (ctx.cr6.eq) goto loc_82647FE0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82647ce0
	ctx.lr = 0x82647FD8;
	sub_82647CE0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82647FE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82647FEC:
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x82186158
	ctx.lr = 0x82647FF4;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264806c
	if (ctx.cr6.eq) goto loc_8264806C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82647d50
	ctx.lr = 0x82648008;
	sub_82647D50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82648098
	if (ctx.cr6.eq) goto loc_82648098;
	// lwz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82648098
	if (ctx.cr6.eq) goto loc_82648098;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82648098
	if (ctx.cr6.eq) goto loc_82648098;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82186158
	ctx.lr = 0x82648038;
	sub_82186158(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82648074
	if (ctx.cr6.eq) goto loc_82648074;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82645890
	ctx.lr = 0x8264804C;
	sub_82645890(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-4680
	ctx.r11.s64 = ctx.r11.s64 + -4680;
	// addi r10,r10,-4692
	ctx.r10.s64 = ctx.r10.s64 + -4692;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// b 0x82648078
	goto loc_82648078;
loc_8264806C:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82648098
	goto loc_82648098;
loc_82648074:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82648078:
	// lwz r3,76(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// beq cr6,0x8264808c
	if (ctx.cr6.eq) goto loc_8264808C;
	// bl 0x82659610
	ctx.lr = 0x8264808C;
	sub_82659610(ctx, base);
loc_8264808C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,92(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// bl 0x82645928
	ctx.lr = 0x82648098;
	sub_82645928(ctx, base);
loc_82648098:
	// lwz r3,80(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// lwz r11,76(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x826480b4
	if (ctx.cr6.eq) goto loc_826480B4;
	// bl 0x82160140
	ctx.lr = 0x826480B4;
	sub_82160140(ctx, base);
loc_826480B4:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82663f70
	ctx.lr = 0x826480C0;
	sub_82663F70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_826480C4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826480D0"))) PPC_WEAK_FUNC(sub_826480D0);
PPC_FUNC_IMPL(__imp__sub_826480D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x826480D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,68
	ctx.r3.s64 = 68;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82186158
	ctx.lr = 0x826480FC;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82648124
	if (ctx.cr6.eq) goto loc_82648124;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82647dd0
	ctx.lr = 0x8264811C;
	sub_82647DD0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_82648124:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82648130"))) PPC_WEAK_FUNC(sub_82648130);
PPC_FUNC_IMPL(__imp__sub_82648130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82648170
	if (ctx.cr6.eq) goto loc_82648170;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82279350
	ctx.lr = 0x82648168;
	sub_82279350(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82648170;
	sub_82186190(ctx, base);
loc_82648170:
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
	// bl 0x8245ac68
	ctx.lr = 0x82648188;
	sub_8245AC68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826481A0"))) PPC_WEAK_FUNC(sub_826481A0);
PPC_FUNC_IMPL(__imp__sub_826481A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x826481cc
	if (ctx.cr6.eq) goto loc_826481CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82648130
	ctx.lr = 0x826481C4;
	sub_82648130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82186190
	ctx.lr = 0x826481CC;
	sub_82186190(ctx, base);
loc_826481CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826481E0"))) PPC_WEAK_FUNC(sub_826481E0);
PPC_FUNC_IMPL(__imp__sub_826481E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x82648210;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264823c
	if (ctx.cr6.eq) goto loc_8264823C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-4752
	ctx.r10.s64 = ctx.r11.s64 + -4752;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82648240
	goto loc_82648240;
loc_8264823C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82648240:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x82648284
	if (!ctx.cr6.eq) goto loc_82648284;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82648264
	if (ctx.cr6.eq) goto loc_82648264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82648130
	ctx.lr = 0x8264825C;
	sub_82648130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82186190
	ctx.lr = 0x82648264;
	sub_82186190(ctx, base);
loc_82648264:
	// lis r10,-32071
	ctx.r10.s64 = -2101805056;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2788
	ctx.r11.s64 = ctx.r11.s64 + 2788;
	// lwz r10,-32016(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32016);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x82648284;
	sub_821E0968(ctx, base);
loc_82648284:
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

__attribute__((alias("__imp__sub_826482A0"))) PPC_WEAK_FUNC(sub_826482A0);
PPC_FUNC_IMPL(__imp__sub_826482A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x826482A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// bl 0x82186158
	ctx.lr = 0x826482C4;
	sub_82186158(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826482e8
	if (ctx.cr6.eq) goto loc_826482E8;
	// bl 0x82619550
	ctx.lr = 0x826482D4;
	sub_82619550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r27,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r27.u32);
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stw r27,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r27.u32);
	// b 0x826482ec
	goto loc_826482EC;
loc_826482E8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_826482EC:
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
	// bl 0x826481e0
	ctx.lr = 0x82648304;
	sub_826481E0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82648988
	if (ctx.cr6.eq) goto loc_82648988;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82648988
	if (ctx.cr6.eq) goto loc_82648988;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82186158
	ctx.lr = 0x82648328;
	sub_82186158(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,-4532
	ctx.r29.s64 = ctx.r11.s64 + -4532;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r28,r11,-3812
	ctx.r28.s64 = ctx.r11.s64 + -3812;
	// beq cr6,0x82648394
	if (ctx.cr6.eq) goto loc_82648394;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,-3832
	ctx.r4.s64 = ctx.r11.s64 + -3832;
	// bl 0x821620e8
	ctx.lr = 0x82648354;
	sub_821620E8(ctx, base);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821620e8
	ctx.lr = 0x82648360;
	sub_821620E8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r11,-3844
	ctx.r4.s64 = ctx.r11.s64 + -3844;
	// bl 0x821620e8
	ctx.lr = 0x82648370;
	sub_821620E8(ctx, base);
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// addi r5,r1,512
	ctx.r5.s64 = ctx.r1.s64 + 512;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r31,7
	ctx.r31.s64 = 7;
	// bl 0x82646bf8
	ctx.lr = 0x82648388;
	sub_82646BF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// b 0x82648398
	goto loc_82648398;
loc_82648394:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82648398:
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826483a8
	if (ctx.cr6.eq) goto loc_826483A8;
	// bl 0x82659610
	ctx.lr = 0x826483A8;
	sub_82659610(ctx, base);
loc_826483A8:
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82662a48
	ctx.lr = 0x826483B4;
	sub_82662A48(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826483c4
	if (ctx.cr6.eq) goto loc_826483C4;
	// bl 0x82581e38
	ctx.lr = 0x826483C4;
	sub_82581E38(ctx, base);
loc_826483C4:
	// rlwinm r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826483dc
	if (ctx.cr6.eq) goto loc_826483DC;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// rlwinm r31,r31,0,30,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x825fc7b8
	ctx.lr = 0x826483DC;
	sub_825FC7B8(ctx, base);
loc_826483DC:
	// rlwinm r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826483f4
	if (ctx.cr6.eq) goto loc_826483F4;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// rlwinm r31,r31,0,31,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x825fc7b8
	ctx.lr = 0x826483F4;
	sub_825FC7B8(ctx, base);
loc_826483F4:
	// clrlwi r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8264840c
	if (ctx.cr6.eq) goto loc_8264840C;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// rlwinm r31,r31,0,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x825fc7b8
	ctx.lr = 0x8264840C;
	sub_825FC7B8(ctx, base);
loc_8264840C:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82186158
	ctx.lr = 0x82648414;
	sub_82186158(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82648478
	if (ctx.cr6.eq) goto loc_82648478;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// addi r4,r11,-3872
	ctx.r4.s64 = ctx.r11.s64 + -3872;
	// bl 0x821620e8
	ctx.lr = 0x82648430;
	sub_821620E8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ori r31,r31,8
	ctx.r31.u64 = ctx.r31.u64 | 8;
	// bl 0x821620e8
	ctx.lr = 0x82648440;
	sub_821620E8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// addi r4,r11,-3892
	ctx.r4.s64 = ctx.r11.s64 + -3892;
	// ori r31,r31,16
	ctx.r31.u64 = ctx.r31.u64 | 16;
	// bl 0x821620e8
	ctx.lr = 0x82648454;
	sub_821620E8(ctx, base);
	// addi r6,r1,576
	ctx.r6.s64 = ctx.r1.s64 + 576;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,768
	ctx.r4.s64 = ctx.r1.s64 + 768;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r31,r31,32
	ctx.r31.u64 = ctx.r31.u64 | 32;
	// bl 0x82646bf8
	ctx.lr = 0x8264846C;
	sub_82646BF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// b 0x8264847c
	goto loc_8264847C;
loc_82648478:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8264847C:
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264848c
	if (ctx.cr6.eq) goto loc_8264848C;
	// bl 0x82659610
	ctx.lr = 0x8264848C;
	sub_82659610(ctx, base);
loc_8264848C:
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82662a48
	ctx.lr = 0x82648498;
	sub_82662A48(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826484a8
	if (ctx.cr6.eq) goto loc_826484A8;
	// bl 0x82581e38
	ctx.lr = 0x826484A8;
	sub_82581E38(ctx, base);
loc_826484A8:
	// rlwinm r11,r31,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826484c0
	if (ctx.cr6.eq) goto loc_826484C0;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// rlwinm r31,r31,0,27,25
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// bl 0x825fc7b8
	ctx.lr = 0x826484C0;
	sub_825FC7B8(ctx, base);
loc_826484C0:
	// rlwinm r11,r31,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826484d8
	if (ctx.cr6.eq) goto loc_826484D8;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r31,r31,0,28,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x825fc7b8
	ctx.lr = 0x826484D8;
	sub_825FC7B8(ctx, base);
loc_826484D8:
	// rlwinm r11,r31,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826484f0
	if (ctx.cr6.eq) goto loc_826484F0;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// rlwinm r31,r31,0,29,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x825fc7b8
	ctx.lr = 0x826484F0;
	sub_825FC7B8(ctx, base);
loc_826484F0:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82186158
	ctx.lr = 0x826484F8;
	sub_82186158(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82648564
	if (ctx.cr6.eq) goto loc_82648564;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r4,r11,-3924
	ctx.r4.s64 = ctx.r11.s64 + -3924;
	// bl 0x821620e8
	ctx.lr = 0x82648514;
	sub_821620E8(ctx, base);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ori r31,r31,64
	ctx.r31.u64 = ctx.r31.u64 | 64;
	// bl 0x821620e8
	ctx.lr = 0x82648524;
	sub_821620E8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r4,r11,-3948
	ctx.r4.s64 = ctx.r11.s64 + -3948;
	// ori r31,r31,128
	ctx.r31.u64 = ctx.r31.u64 | 128;
	// bl 0x821620e8
	ctx.lr = 0x82648538;
	sub_821620E8(ctx, base);
	// addi r6,r1,448
	ctx.r6.s64 = ctx.r1.s64 + 448;
	// addi r5,r1,704
	ctx.r5.s64 = ctx.r1.s64 + 704;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r31,r31,256
	ctx.r31.u64 = ctx.r31.u64 | 256;
	// bl 0x82646bf8
	ctx.lr = 0x82648550;
	sub_82646BF8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-4488
	ctx.r11.s64 = ctx.r11.s64 + -4488;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82648568
	goto loc_82648568;
loc_82648564:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82648568:
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82648578
	if (ctx.cr6.eq) goto loc_82648578;
	// bl 0x82659610
	ctx.lr = 0x82648578;
	sub_82659610(ctx, base);
loc_82648578:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82662a48
	ctx.lr = 0x82648584;
	sub_82662A48(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82648594
	if (ctx.cr6.eq) goto loc_82648594;
	// bl 0x82581e38
	ctx.lr = 0x82648594;
	sub_82581E38(ctx, base);
loc_82648594:
	// rlwinm r11,r31,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826485ac
	if (ctx.cr6.eq) goto loc_826485AC;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// rlwinm r31,r31,0,24,22
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// bl 0x825fc7b8
	ctx.lr = 0x826485AC;
	sub_825FC7B8(ctx, base);
loc_826485AC:
	// rlwinm r11,r31,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826485c4
	if (ctx.cr6.eq) goto loc_826485C4;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// rlwinm r31,r31,0,25,23
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// bl 0x825fc7b8
	ctx.lr = 0x826485C4;
	sub_825FC7B8(ctx, base);
loc_826485C4:
	// rlwinm r11,r31,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826485dc
	if (ctx.cr6.eq) goto loc_826485DC;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// rlwinm r31,r31,0,26,24
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// bl 0x825fc7b8
	ctx.lr = 0x826485DC;
	sub_825FC7B8(ctx, base);
loc_826485DC:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82186158
	ctx.lr = 0x826485E4;
	sub_82186158(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82648650
	if (ctx.cr6.eq) goto loc_82648650;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,-3988
	ctx.r4.s64 = ctx.r11.s64 + -3988;
	// bl 0x821620e8
	ctx.lr = 0x82648600;
	sub_821620E8(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ori r31,r31,512
	ctx.r31.u64 = ctx.r31.u64 | 512;
	// bl 0x821620e8
	ctx.lr = 0x82648610;
	sub_821620E8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// addi r4,r11,-4008
	ctx.r4.s64 = ctx.r11.s64 + -4008;
	// ori r31,r31,1024
	ctx.r31.u64 = ctx.r31.u64 | 1024;
	// bl 0x821620e8
	ctx.lr = 0x82648624;
	sub_821620E8(ctx, base);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r31,r31,2048
	ctx.r31.u64 = ctx.r31.u64 | 2048;
	// bl 0x82646bf8
	ctx.lr = 0x8264863C;
	sub_82646BF8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-4444
	ctx.r11.s64 = ctx.r11.s64 + -4444;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82648654
	goto loc_82648654;
loc_82648650:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82648654:
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82648664
	if (ctx.cr6.eq) goto loc_82648664;
	// bl 0x82659610
	ctx.lr = 0x82648664;
	sub_82659610(ctx, base);
loc_82648664:
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82662a48
	ctx.lr = 0x82648670;
	sub_82662A48(ctx, base);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82648680
	if (ctx.cr6.eq) goto loc_82648680;
	// bl 0x82581e38
	ctx.lr = 0x82648680;
	sub_82581E38(ctx, base);
loc_82648680:
	// rlwinm r11,r31,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x800;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82648698
	if (ctx.cr6.eq) goto loc_82648698;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// rlwinm r31,r31,0,21,19
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// bl 0x825fc7b8
	ctx.lr = 0x82648698;
	sub_825FC7B8(ctx, base);
loc_82648698:
	// rlwinm r11,r31,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x400;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826486b0
	if (ctx.cr6.eq) goto loc_826486B0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// rlwinm r31,r31,0,22,20
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// bl 0x825fc7b8
	ctx.lr = 0x826486B0;
	sub_825FC7B8(ctx, base);
loc_826486B0:
	// rlwinm r11,r31,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826486c8
	if (ctx.cr6.eq) goto loc_826486C8;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r31,r31,0,23,21
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// bl 0x825fc7b8
	ctx.lr = 0x826486C8;
	sub_825FC7B8(ctx, base);
loc_826486C8:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82186158
	ctx.lr = 0x826486D0;
	sub_82186158(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8264873c
	if (ctx.cr6.eq) goto loc_8264873C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r4,r11,-4024
	ctx.r4.s64 = ctx.r11.s64 + -4024;
	// bl 0x821620e8
	ctx.lr = 0x826486EC;
	sub_821620E8(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ori r31,r31,4096
	ctx.r31.u64 = ctx.r31.u64 | 4096;
	// bl 0x821620e8
	ctx.lr = 0x826486FC;
	sub_821620E8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,-4036
	ctx.r4.s64 = ctx.r11.s64 + -4036;
	// ori r31,r31,8192
	ctx.r31.u64 = ctx.r31.u64 | 8192;
	// bl 0x821620e8
	ctx.lr = 0x82648710;
	sub_821620E8(ctx, base);
	// addi r6,r1,416
	ctx.r6.s64 = ctx.r1.s64 + 416;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r31,r31,16384
	ctx.r31.u64 = ctx.r31.u64 | 16384;
	// bl 0x82646bf8
	ctx.lr = 0x82648728;
	sub_82646BF8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-4400
	ctx.r11.s64 = ctx.r11.s64 + -4400;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82648740
	goto loc_82648740;
loc_8264873C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82648740:
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82648750
	if (ctx.cr6.eq) goto loc_82648750;
	// bl 0x82659610
	ctx.lr = 0x82648750;
	sub_82659610(ctx, base);
loc_82648750:
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82662a48
	ctx.lr = 0x8264875C;
	sub_82662A48(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264876c
	if (ctx.cr6.eq) goto loc_8264876C;
	// bl 0x82581e38
	ctx.lr = 0x8264876C;
	sub_82581E38(ctx, base);
loc_8264876C:
	// rlwinm r11,r31,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82648784
	if (ctx.cr6.eq) goto loc_82648784;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// rlwinm r31,r31,0,18,16
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// bl 0x825fc7b8
	ctx.lr = 0x82648784;
	sub_825FC7B8(ctx, base);
loc_82648784:
	// rlwinm r11,r31,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8264879c
	if (ctx.cr6.eq) goto loc_8264879C;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// rlwinm r31,r31,0,19,17
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// bl 0x825fc7b8
	ctx.lr = 0x8264879C;
	sub_825FC7B8(ctx, base);
loc_8264879C:
	// rlwinm r11,r31,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x1000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826487b4
	if (ctx.cr6.eq) goto loc_826487B4;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// rlwinm r31,r31,0,20,18
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// bl 0x825fc7b8
	ctx.lr = 0x826487B4;
	sub_825FC7B8(ctx, base);
loc_826487B4:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82186158
	ctx.lr = 0x826487BC;
	sub_82186158(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82648828
	if (ctx.cr6.eq) goto loc_82648828;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// addi r4,r11,-4068
	ctx.r4.s64 = ctx.r11.s64 + -4068;
	// bl 0x821620e8
	ctx.lr = 0x826487D8;
	sub_821620E8(ctx, base);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ori r31,r31,32768
	ctx.r31.u64 = ctx.r31.u64 | 32768;
	// bl 0x821620e8
	ctx.lr = 0x826487E8;
	sub_821620E8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// addi r4,r11,-4088
	ctx.r4.s64 = ctx.r11.s64 + -4088;
	// oris r31,r31,1
	ctx.r31.u64 = ctx.r31.u64 | 65536;
	// bl 0x821620e8
	ctx.lr = 0x826487FC;
	sub_821620E8(ctx, base);
	// addi r6,r1,608
	ctx.r6.s64 = ctx.r1.s64 + 608;
	// addi r5,r1,544
	ctx.r5.s64 = ctx.r1.s64 + 544;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// oris r31,r31,2
	ctx.r31.u64 = ctx.r31.u64 | 131072;
	// bl 0x82646bf8
	ctx.lr = 0x82648814;
	sub_82646BF8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-4356
	ctx.r11.s64 = ctx.r11.s64 + -4356;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8264882c
	goto loc_8264882C;
loc_82648828:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8264882C:
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264883c
	if (ctx.cr6.eq) goto loc_8264883C;
	// bl 0x82659610
	ctx.lr = 0x8264883C;
	sub_82659610(ctx, base);
loc_8264883C:
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82662a48
	ctx.lr = 0x82648848;
	sub_82662A48(ctx, base);
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82648858
	if (ctx.cr6.eq) goto loc_82648858;
	// bl 0x82581e38
	ctx.lr = 0x82648858;
	sub_82581E38(ctx, base);
loc_82648858:
	// rlwinm r11,r31,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x20000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82648870
	if (ctx.cr6.eq) goto loc_82648870;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// rlwinm r31,r31,0,15,13
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// bl 0x825fc7b8
	ctx.lr = 0x82648870;
	sub_825FC7B8(ctx, base);
loc_82648870:
	// rlwinm r11,r31,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x10000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82648888
	if (ctx.cr6.eq) goto loc_82648888;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// rlwinm r31,r31,0,16,14
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// bl 0x825fc7b8
	ctx.lr = 0x82648888;
	sub_825FC7B8(ctx, base);
loc_82648888:
	// rlwinm r11,r31,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826488a0
	if (ctx.cr6.eq) goto loc_826488A0;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// rlwinm r31,r31,0,17,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// bl 0x825fc7b8
	ctx.lr = 0x826488A0;
	sub_825FC7B8(ctx, base);
loc_826488A0:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82186158
	ctx.lr = 0x826488A8;
	sub_82186158(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82648914
	if (ctx.cr6.eq) goto loc_82648914;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// addi r4,r11,-4116
	ctx.r4.s64 = ctx.r11.s64 + -4116;
	// bl 0x821620e8
	ctx.lr = 0x826488C4;
	sub_821620E8(ctx, base);
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// oris r31,r31,4
	ctx.r31.u64 = ctx.r31.u64 | 262144;
	// bl 0x821620e8
	ctx.lr = 0x826488D4;
	sub_821620E8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// addi r4,r11,-4136
	ctx.r4.s64 = ctx.r11.s64 + -4136;
	// oris r31,r31,8
	ctx.r31.u64 = ctx.r31.u64 | 524288;
	// bl 0x821620e8
	ctx.lr = 0x826488E8;
	sub_821620E8(ctx, base);
	// addi r6,r1,800
	ctx.r6.s64 = ctx.r1.s64 + 800;
	// addi r5,r1,736
	ctx.r5.s64 = ctx.r1.s64 + 736;
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// oris r31,r31,16
	ctx.r31.u64 = ctx.r31.u64 | 1048576;
	// bl 0x82646bf8
	ctx.lr = 0x82648900;
	sub_82646BF8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-4312
	ctx.r11.s64 = ctx.r11.s64 + -4312;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82648918
	goto loc_82648918;
loc_82648914:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82648918:
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82648928
	if (ctx.cr6.eq) goto loc_82648928;
	// bl 0x82659610
	ctx.lr = 0x82648928;
	sub_82659610(ctx, base);
loc_82648928:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82662a48
	ctx.lr = 0x82648934;
	sub_82662A48(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82648944
	if (ctx.cr6.eq) goto loc_82648944;
	// bl 0x82581e38
	ctx.lr = 0x82648944;
	sub_82581E38(ctx, base);
loc_82648944:
	// rlwinm r11,r31,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8264895c
	if (ctx.cr6.eq) goto loc_8264895C;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// rlwinm r31,r31,0,12,10
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// bl 0x825fc7b8
	ctx.lr = 0x8264895C;
	sub_825FC7B8(ctx, base);
loc_8264895C:
	// rlwinm r11,r31,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x80000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82648974
	if (ctx.cr6.eq) goto loc_82648974;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// rlwinm r31,r31,0,13,11
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// bl 0x825fc7b8
	ctx.lr = 0x82648974;
	sub_825FC7B8(ctx, base);
loc_82648974:
	// rlwinm r11,r31,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x40000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82648988
	if (ctx.cr6.eq) goto loc_82648988;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x825fc7b8
	ctx.lr = 0x82648988;
	sub_825FC7B8(ctx, base);
loc_82648988:
	// li r3,208
	ctx.r3.s64 = 208;
	// bl 0x82186158
	ctx.lr = 0x82648990;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826489a4
	if (ctx.cr6.eq) goto loc_826489A4;
	// bl 0x82660508
	ctx.lr = 0x8264899C;
	sub_82660508(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x826489a8
	goto loc_826489A8;
loc_826489A4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_826489A8:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r4,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r4.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// stb r27,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82646098
	ctx.lr = 0x826489C0;
	sub_82646098(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r30,r26,92
	ctx.r30.s64 = ctx.r26.s64 + 92;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// beq cr6,0x826489e4
	if (ctx.cr6.eq) goto loc_826489E4;
	// bl 0x82160140
	ctx.lr = 0x826489E0;
	sub_82160140(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_826489E4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826489fc
	if (ctx.cr6.eq) goto loc_826489FC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821601b8
	ctx.lr = 0x826489F8;
	sub_821601B8(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_826489FC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// beq cr6,0x82648a0c
	if (ctx.cr6.eq) goto loc_82648A0C;
	// bl 0x821601b8
	ctx.lr = 0x82648A0C;
	sub_821601B8(ctx, base);
loc_82648A0C:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r3,52
	ctx.r3.s64 = 52;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82186158
	ctx.lr = 0x82648A1C;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82648a34
	if (ctx.cr6.eq) goto loc_82648A34;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82664458
	ctx.lr = 0x82648A2C;
	sub_82664458(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82648a38
	goto loc_82648A38;
loc_82648A34:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82648A38:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stb r27,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82646160
	ctx.lr = 0x82648A50;
	sub_82646160(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82663fd0
	ctx.lr = 0x82648A5C;
	sub_82663FD0(ctx, base);
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82648a74
	if (ctx.cr6.eq) goto loc_82648A74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82160140
	ctx.lr = 0x82648A74;
	sub_82160140(ctx, base);
loc_82648A74:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// beq cr6,0x82648a90
	if (ctx.cr6.eq) goto loc_82648A90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82160140
	ctx.lr = 0x82648A90;
	sub_82160140(ctx, base);
loc_82648A90:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82648aa0
	if (ctx.cr6.eq) goto loc_82648AA0;
	// bl 0x821601b8
	ctx.lr = 0x82648AA0;
	sub_821601B8(ctx, base);
loc_82648AA0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// beq cr6,0x82648ab4
	if (ctx.cr6.eq) goto loc_82648AB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821601b8
	ctx.lr = 0x82648AB4;
	sub_821601B8(ctx, base);
loc_82648AB4:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// beq cr6,0x82648ad0
	if (ctx.cr6.eq) goto loc_82648AD0;
	// bl 0x82160140
	ctx.lr = 0x82648AD0;
	sub_82160140(ctx, base);
loc_82648AD0:
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-15116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -15116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82648ae8
	if (!ctx.cr6.eq) goto loc_82648AE8;
	// bl 0x82642090
	ctx.lr = 0x82648AE4;
	sub_82642090(ctx, base);
	// stw r3,-15116(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15116, ctx.r3.u32);
loc_82648AE8:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x8218acd0
	ctx.lr = 0x82648AF0;
	sub_8218ACD0(ctx, base);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82648b00
	if (ctx.cr6.eq) goto loc_82648B00;
	// bl 0x821601b8
	ctx.lr = 0x82648B00;
	sub_821601B8(ctx, base);
loc_82648B00:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r31,r26,76
	ctx.r31.s64 = ctx.r26.s64 + 76;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82648b24
	if (ctx.cr6.eq) goto loc_82648B24;
	// bl 0x82160140
	ctx.lr = 0x82648B20;
	sub_82160140(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_82648B24:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82648b3c
	if (ctx.cr6.eq) goto loc_82648B3C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821601b8
	ctx.lr = 0x82648B38;
	sub_821601B8(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_82648B3C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// beq cr6,0x82648b4c
	if (ctx.cr6.eq) goto loc_82648B4C;
	// bl 0x821601b8
	ctx.lr = 0x82648B4C;
	sub_821601B8(ctx, base);
loc_82648B4C:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82648b5c
	if (ctx.cr6.eq) goto loc_82648B5C;
	// bl 0x821601b8
	ctx.lr = 0x82648B5C;
	sub_821601B8(ctx, base);
loc_82648B5C:
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82648B68"))) PPC_WEAK_FUNC(sub_82648B68);
PPC_FUNC_IMPL(__imp__sub_82648B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82648B70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-4268
	ctx.r11.s64 = ctx.r11.s64 + -4268;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x825d49b0
	ctx.lr = 0x82648B90;
	sub_825D49B0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82186158
	ctx.lr = 0x82648B98;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82648ba4
	if (ctx.cr6.eq) goto loc_82648BA4;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
loc_82648BA4:
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82648bb4
	if (ctx.cr6.eq) goto loc_82648BB4;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_82648BB4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r30,r31,68
	ctx.r30.s64 = ctx.r31.s64 + 68;
	// addi r8,r9,-4888
	ctx.r8.s64 = ctx.r9.s64 + -4888;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// addi r29,r31,84
	ctx.r29.s64 = ctx.r31.s64 + 84;
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lwz r7,-15028(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15028);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bne cr6,0x82648c18
	if (!ctx.cr6.eq) goto loc_82648C18;
	// stw r31,-15028(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15028, ctx.r31.u32);
loc_82648C18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826482a0
	ctx.lr = 0x82648C20;
	sub_826482A0(ctx, base);
	// lis r28,-32044
	ctx.r28.s64 = -2100035584;
	// lwz r4,-15116(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -15116);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82648c3c
	if (!ctx.cr6.eq) goto loc_82648C3C;
	// bl 0x82642090
	ctx.lr = 0x82648C34;
	sub_82642090(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,-15116(r28)
	PPC_STORE_U32(ctx.r28.u32 + -15116, ctx.r4.u32);
loc_82648C3C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8265b768
	ctx.lr = 0x82648C44;
	sub_8265B768(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r28,4(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82648c60
	if (ctx.cr6.eq) goto loc_82648C60;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82160140
	ctx.lr = 0x82648C60;
	sub_82160140(ctx, base);
loc_82648C60:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82648c70
	if (ctx.cr6.eq) goto loc_82648C70;
	// bl 0x821601b8
	ctx.lr = 0x82648C70;
	sub_821601B8(ctx, base);
loc_82648C70:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82648c84
	if (ctx.cr6.eq) goto loc_82648C84;
	// bl 0x821601b8
	ctx.lr = 0x82648C84;
	sub_821601B8(ctx, base);
loc_82648C84:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x826619a8
	ctx.lr = 0x82648C90;
	sub_826619A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82648CA0"))) PPC_WEAK_FUNC(sub_82648CA0);
PPC_FUNC_IMPL(__imp__sub_82648CA0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x82664890
	sub_82664890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82648CA8"))) PPC_WEAK_FUNC(sub_82648CA8);
PPC_FUNC_IMPL(__imp__sub_82648CA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x82664930
	sub_82664930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82648CB0"))) PPC_WEAK_FUNC(sub_82648CB0);
PPC_FUNC_IMPL(__imp__sub_82648CB0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x82664960
	sub_82664960(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82648CB8"))) PPC_WEAK_FUNC(sub_82648CB8);
PPC_FUNC_IMPL(__imp__sub_82648CB8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x826649c0
	sub_826649C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82648CC0"))) PPC_WEAK_FUNC(sub_82648CC0);
PPC_FUNC_IMPL(__imp__sub_82648CC0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x82664a08
	sub_82664A08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82648CC8"))) PPC_WEAK_FUNC(sub_82648CC8);
PPC_FUNC_IMPL(__imp__sub_82648CC8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x82664710
	sub_82664710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82648CD0"))) PPC_WEAK_FUNC(sub_82648CD0);
PPC_FUNC_IMPL(__imp__sub_82648CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82648d08
	if (ctx.cr6.eq) goto loc_82648D08;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x825813a0
	ctx.lr = 0x82648D08;
	sub_825813A0(ctx, base);
loc_82648D08:
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82186158
	ctx.lr = 0x82648D10;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82648d28
	if (ctx.cr6.eq) goto loc_82648D28;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82664fc8
	ctx.lr = 0x82648D24;
	sub_82664FC8(ctx, base);
	// b 0x82648d2c
	goto loc_82648D2C;
loc_82648D28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82648D2C:
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82648D48"))) PPC_WEAK_FUNC(sub_82648D48);
PPC_FUNC_IMPL(__imp__sub_82648D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82648D50;
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
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82648d74
	if (ctx.cr6.eq) goto loc_82648D74;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_82648D74:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82186158
	ctx.lr = 0x82648D7C;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82648da0
	if (ctx.cr6.eq) goto loc_82648DA0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82664e48
	ctx.lr = 0x82648D94;
	sub_82664E48(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82648DA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82648DB0"))) PPC_WEAK_FUNC(sub_82648DB0);
PPC_FUNC_IMPL(__imp__sub_82648DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32083
	ctx.r10.s64 = -2102591488;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,1792
	ctx.r5.s64 = ctx.r10.s64 + 1792;
	// addi r4,r11,24344
	ctx.r4.s64 = ctx.r11.s64 + 24344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82648DDC;
	sub_828F5CF0(ctx, base);
	// lis r10,-32083
	ctx.r10.s64 = -2102591488;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,1016
	ctx.r5.s64 = ctx.r10.s64 + 1016;
	// addi r4,r11,23096
	ctx.r4.s64 = ctx.r11.s64 + 23096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82648DF4;
	sub_828F5CF0(ctx, base);
	// lis r10,-32083
	ctx.r10.s64 = -2102591488;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,2648
	ctx.r5.s64 = ctx.r10.s64 + 2648;
	// addi r4,r11,22656
	ctx.r4.s64 = ctx.r11.s64 + 22656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82648E0C;
	sub_828F5CF0(ctx, base);
	// lis r10,-32087
	ctx.r10.s64 = -2102853632;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,18376
	ctx.r5.s64 = ctx.r10.s64 + 18376;
	// addi r4,r11,22144
	ctx.r4.s64 = ctx.r11.s64 + 22144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82648E24;
	sub_828F5CF0(ctx, base);
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,-16968
	ctx.r5.s64 = ctx.r10.s64 + -16968;
	// addi r4,r11,21592
	ctx.r4.s64 = ctx.r11.s64 + 21592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82648E3C;
	sub_828F5CF0(ctx, base);
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,22040
	ctx.r5.s64 = ctx.r10.s64 + 22040;
	// addi r4,r11,20608
	ctx.r4.s64 = ctx.r11.s64 + 20608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82648E54;
	sub_828F5CF0(ctx, base);
	// lis r10,-32083
	ctx.r10.s64 = -2102591488;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,-10112
	ctx.r5.s64 = ctx.r10.s64 + -10112;
	// addi r4,r11,20008
	ctx.r4.s64 = ctx.r11.s64 + 20008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82648E6C;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,18768
	ctx.r5.s64 = ctx.r10.s64 + 18768;
	// addi r4,r11,18696
	ctx.r4.s64 = ctx.r11.s64 + 18696;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82648E84;
	sub_828F5CF0(ctx, base);
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,21336
	ctx.r5.s64 = ctx.r10.s64 + 21336;
	// addi r4,r11,18096
	ctx.r4.s64 = ctx.r11.s64 + 18096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82648E9C;
	sub_828F5CF0(ctx, base);
	// lis r10,-32083
	ctx.r10.s64 = -2102591488;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,-13704
	ctx.r5.s64 = ctx.r10.s64 + -13704;
	// addi r4,r11,16056
	ctx.r4.s64 = ctx.r11.s64 + 16056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82648EB4;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,15352
	ctx.r5.s64 = ctx.r10.s64 + 15352;
	// addi r4,r11,15656
	ctx.r4.s64 = ctx.r11.s64 + 15656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82648ECC;
	sub_828F5CF0(ctx, base);
	// lis r10,-32083
	ctx.r10.s64 = -2102591488;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,19216
	ctx.r5.s64 = ctx.r10.s64 + 19216;
	// addi r4,r11,14816
	ctx.r4.s64 = ctx.r11.s64 + 14816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82648EE4;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,12408
	ctx.r5.s64 = ctx.r10.s64 + 12408;
	// addi r4,r11,12304
	ctx.r4.s64 = ctx.r11.s64 + 12304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82648EFC;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,12048
	ctx.r5.s64 = ctx.r10.s64 + 12048;
	// addi r4,r11,11976
	ctx.r4.s64 = ctx.r11.s64 + 11976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82648F14;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,11472
	ctx.r5.s64 = ctx.r10.s64 + 11472;
	// addi r4,r11,11400
	ctx.r4.s64 = ctx.r11.s64 + 11400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82648F2C;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,10808
	ctx.r5.s64 = ctx.r10.s64 + 10808;
	// addi r4,r11,10736
	ctx.r4.s64 = ctx.r11.s64 + 10736;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82648F44;
	sub_828F5CF0(ctx, base);
	// lis r10,-32083
	ctx.r10.s64 = -2102591488;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,17432
	ctx.r5.s64 = ctx.r10.s64 + 17432;
	// addi r4,r11,10240
	ctx.r4.s64 = ctx.r11.s64 + 10240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82648F5C;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,9392
	ctx.r5.s64 = ctx.r10.s64 + 9392;
	// addi r4,r11,9320
	ctx.r4.s64 = ctx.r11.s64 + 9320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82648F74;
	sub_828F5CF0(ctx, base);
	// lis r10,-32083
	ctx.r10.s64 = -2102591488;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,10808
	ctx.r5.s64 = ctx.r10.s64 + 10808;
	// addi r4,r11,8432
	ctx.r4.s64 = ctx.r11.s64 + 8432;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82648F8C;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,7776
	ctx.r5.s64 = ctx.r10.s64 + 7776;
	// addi r4,r11,7704
	ctx.r4.s64 = ctx.r11.s64 + 7704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82648FA4;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,6472
	ctx.r5.s64 = ctx.r10.s64 + 6472;
	// addi r4,r11,6400
	ctx.r4.s64 = ctx.r11.s64 + 6400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82648FBC;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,5080
	ctx.r5.s64 = ctx.r10.s64 + 5080;
	// addi r4,r11,5864
	ctx.r4.s64 = ctx.r11.s64 + 5864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82648FD4;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,3504
	ctx.r5.s64 = ctx.r10.s64 + 3504;
	// addi r4,r11,4560
	ctx.r4.s64 = ctx.r11.s64 + 4560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82648FEC;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,2632
	ctx.r5.s64 = ctx.r10.s64 + 2632;
	// addi r4,r11,2960
	ctx.r4.s64 = ctx.r11.s64 + 2960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82649004;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,2520
	ctx.r5.s64 = ctx.r10.s64 + 2520;
	// addi r4,r11,2416
	ctx.r4.s64 = ctx.r11.s64 + 2416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x8264901C;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,2208
	ctx.r5.s64 = ctx.r10.s64 + 2208;
	// addi r4,r11,2136
	ctx.r4.s64 = ctx.r11.s64 + 2136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82649034;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,1832
	ctx.r5.s64 = ctx.r10.s64 + 1832;
	// addi r4,r11,1760
	ctx.r4.s64 = ctx.r11.s64 + 1760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x8264904C;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,592
	ctx.r5.s64 = ctx.r10.s64 + 592;
	// addi r4,r11,1216
	ctx.r4.s64 = ctx.r11.s64 + 1216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82649064;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,-512
	ctx.r5.s64 = ctx.r10.s64 + -512;
	// addi r4,r11,192
	ctx.r4.s64 = ctx.r11.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x8264907C;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,-632
	ctx.r5.s64 = ctx.r10.s64 + -632;
	// addi r4,r11,-704
	ctx.r4.s64 = ctx.r11.s64 + -704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82649094;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,-1544
	ctx.r5.s64 = ctx.r10.s64 + -1544;
	// addi r4,r11,-1616
	ctx.r4.s64 = ctx.r11.s64 + -1616;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x826490AC;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,-2416
	ctx.r5.s64 = ctx.r10.s64 + -2416;
	// addi r4,r11,-2488
	ctx.r4.s64 = ctx.r11.s64 + -2488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x826490C4;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,-4072
	ctx.r5.s64 = ctx.r10.s64 + -4072;
	// addi r4,r11,-3048
	ctx.r4.s64 = ctx.r11.s64 + -3048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x826490DC;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,-4664
	ctx.r5.s64 = ctx.r10.s64 + -4664;
	// addi r4,r11,-4736
	ctx.r4.s64 = ctx.r11.s64 + -4736;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x826490F4;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,-5776
	ctx.r5.s64 = ctx.r10.s64 + -5776;
	// addi r4,r11,-5848
	ctx.r4.s64 = ctx.r11.s64 + -5848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x8264910C;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,-6456
	ctx.r5.s64 = ctx.r10.s64 + -6456;
	// addi r4,r11,-6528
	ctx.r4.s64 = ctx.r11.s64 + -6528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82649124;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,-7168
	ctx.r5.s64 = ctx.r10.s64 + -7168;
	// addi r4,r11,-7240
	ctx.r4.s64 = ctx.r11.s64 + -7240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x8264913C;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,-7688
	ctx.r5.s64 = ctx.r10.s64 + -7688;
	// addi r4,r11,-7792
	ctx.r4.s64 = ctx.r11.s64 + -7792;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82649154;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,-8504
	ctx.r5.s64 = ctx.r10.s64 + -8504;
	// addi r4,r11,-8576
	ctx.r4.s64 = ctx.r11.s64 + -8576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x8264916C;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,-11032
	ctx.r5.s64 = ctx.r10.s64 + -11032;
	// addi r4,r11,-11104
	ctx.r4.s64 = ctx.r11.s64 + -11104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82649184;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,-11536
	ctx.r5.s64 = ctx.r10.s64 + -11536;
	// addi r4,r11,-11608
	ctx.r4.s64 = ctx.r11.s64 + -11608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x8264919C;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,-11896
	ctx.r5.s64 = ctx.r10.s64 + -11896;
	// addi r4,r11,-12000
	ctx.r4.s64 = ctx.r11.s64 + -12000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x826491B4;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,-12440
	ctx.r5.s64 = ctx.r10.s64 + -12440;
	// addi r4,r11,-12072
	ctx.r4.s64 = ctx.r11.s64 + -12072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x826491CC;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,-13896
	ctx.r5.s64 = ctx.r10.s64 + -13896;
	// addi r4,r11,-13968
	ctx.r4.s64 = ctx.r11.s64 + -13968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x826491E4;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,-15424
	ctx.r5.s64 = ctx.r10.s64 + -15424;
	// addi r4,r11,-15496
	ctx.r4.s64 = ctx.r11.s64 + -15496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x826491FC;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,-16344
	ctx.r5.s64 = ctx.r10.s64 + -16344;
	// addi r4,r11,-16416
	ctx.r4.s64 = ctx.r11.s64 + -16416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82649214;
	sub_828F5CF0(ctx, base);
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r5,r10,30864
	ctx.r5.s64 = ctx.r10.s64 + 30864;
	// addi r4,r11,31376
	ctx.r4.s64 = ctx.r11.s64 + 31376;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x8264922C;
	sub_828F5CF0(ctx, base);
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r5,r10,30688
	ctx.r5.s64 = ctx.r10.s64 + 30688;
	// addi r4,r11,30576
	ctx.r4.s64 = ctx.r11.s64 + 30576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82649244;
	sub_828F5CF0(ctx, base);
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r5,r10,30304
	ctx.r5.s64 = ctx.r10.s64 + 30304;
	// addi r4,r11,30192
	ctx.r4.s64 = ctx.r11.s64 + 30192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x8264925C;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,-16768
	ctx.r5.s64 = ctx.r10.s64 + -16768;
	// addi r4,r11,-16840
	ctx.r4.s64 = ctx.r11.s64 + -16840;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82649274;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,-17400
	ctx.r5.s64 = ctx.r10.s64 + -17400;
	// addi r4,r11,-17472
	ctx.r4.s64 = ctx.r11.s64 + -17472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x8264928C;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,-17840
	ctx.r5.s64 = ctx.r10.s64 + -17840;
	// addi r4,r11,-17912
	ctx.r4.s64 = ctx.r11.s64 + -17912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x826492A4;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,-18384
	ctx.r5.s64 = ctx.r10.s64 + -18384;
	// addi r4,r11,-18072
	ctx.r4.s64 = ctx.r11.s64 + -18072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x826492BC;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,-18680
	ctx.r5.s64 = ctx.r10.s64 + -18680;
	// addi r4,r11,-18784
	ctx.r4.s64 = ctx.r11.s64 + -18784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x826492D4;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,-19336
	ctx.r5.s64 = ctx.r10.s64 + -19336;
	// addi r4,r11,-19408
	ctx.r4.s64 = ctx.r11.s64 + -19408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x826492EC;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,-20272
	ctx.r5.s64 = ctx.r10.s64 + -20272;
	// addi r4,r11,-20344
	ctx.r4.s64 = ctx.r11.s64 + -20344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82649304;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,-21696
	ctx.r5.s64 = ctx.r10.s64 + -21696;
	// addi r4,r11,-21768
	ctx.r4.s64 = ctx.r11.s64 + -21768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x8264931C;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,-23272
	ctx.r5.s64 = ctx.r10.s64 + -23272;
	// addi r4,r11,-22336
	ctx.r4.s64 = ctx.r11.s64 + -22336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82649334;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,-24824
	ctx.r5.s64 = ctx.r10.s64 + -24824;
	// addi r4,r11,-23800
	ctx.r4.s64 = ctx.r11.s64 + -23800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x8264934C;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,-25424
	ctx.r5.s64 = ctx.r10.s64 + -25424;
	// addi r4,r11,-25528
	ctx.r4.s64 = ctx.r11.s64 + -25528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82649364;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,-26424
	ctx.r5.s64 = ctx.r10.s64 + -26424;
	// addi r4,r11,-26496
	ctx.r4.s64 = ctx.r11.s64 + -26496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x8264937C;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,-26952
	ctx.r5.s64 = ctx.r10.s64 + -26952;
	// addi r4,r11,-27056
	ctx.r4.s64 = ctx.r11.s64 + -27056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82649394;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,-29656
	ctx.r5.s64 = ctx.r10.s64 + -29656;
	// addi r4,r11,-29728
	ctx.r4.s64 = ctx.r11.s64 + -29728;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x826493AC;
	sub_828F5CF0(ctx, base);
	// lis r10,-32113
	ctx.r10.s64 = -2104557568;
	// lis r11,-32113
	ctx.r11.s64 = -2104557568;
	// addi r5,r10,-32240
	ctx.r5.s64 = ctx.r10.s64 + -32240;
	// addi r4,r11,-32312
	ctx.r4.s64 = ctx.r11.s64 + -32312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x826493C4;
	sub_828F5CF0(ctx, base);
	// lis r10,-32083
	ctx.r10.s64 = -2102591488;
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r5,r10,6672
	ctx.r5.s64 = ctx.r10.s64 + 6672;
	// addi r4,r11,22904
	ctx.r4.s64 = ctx.r11.s64 + 22904;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x826493DC;
	sub_828F5CF0(ctx, base);
	// lis r10,-32114
	ctx.r10.s64 = -2104623104;
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r5,r10,13760
	ctx.r5.s64 = ctx.r10.s64 + 13760;
	// addi r4,r11,13688
	ctx.r4.s64 = ctx.r11.s64 + 13688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x826493F4;
	sub_828F5CF0(ctx, base);
	// lis r10,-32114
	ctx.r10.s64 = -2104623104;
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r5,r10,4816
	ctx.r5.s64 = ctx.r10.s64 + 4816;
	// addi r4,r11,4744
	ctx.r4.s64 = ctx.r11.s64 + 4744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x8264940C;
	sub_828F5CF0(ctx, base);
	// lis r10,-32114
	ctx.r10.s64 = -2104623104;
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r5,r10,-1160
	ctx.r5.s64 = ctx.r10.s64 + -1160;
	// addi r4,r11,-1232
	ctx.r4.s64 = ctx.r11.s64 + -1232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82649424;
	sub_828F5CF0(ctx, base);
	// lis r10,-32114
	ctx.r10.s64 = -2104623104;
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r5,r10,-9800
	ctx.r5.s64 = ctx.r10.s64 + -9800;
	// addi r4,r11,-9872
	ctx.r4.s64 = ctx.r11.s64 + -9872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x8264943C;
	sub_828F5CF0(ctx, base);
	// lis r10,-32114
	ctx.r10.s64 = -2104623104;
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r5,r10,-16152
	ctx.r5.s64 = ctx.r10.s64 + -16152;
	// addi r4,r11,-16224
	ctx.r4.s64 = ctx.r11.s64 + -16224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82649454;
	sub_828F5CF0(ctx, base);
	// lis r10,-32114
	ctx.r10.s64 = -2104623104;
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r5,r10,-18728
	ctx.r5.s64 = ctx.r10.s64 + -18728;
	// addi r4,r11,-18800
	ctx.r4.s64 = ctx.r11.s64 + -18800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x8264946C;
	sub_828F5CF0(ctx, base);
	// lis r10,-32114
	ctx.r10.s64 = -2104623104;
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r5,r10,-23944
	ctx.r5.s64 = ctx.r10.s64 + -23944;
	// addi r4,r11,-22360
	ctx.r4.s64 = ctx.r11.s64 + -22360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82649484;
	sub_828F5CF0(ctx, base);
	// lis r10,-32114
	ctx.r10.s64 = -2104623104;
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r5,r10,-25208
	ctx.r5.s64 = ctx.r10.s64 + -25208;
	// addi r4,r11,-25280
	ctx.r4.s64 = ctx.r11.s64 + -25280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x8264949C;
	sub_828F5CF0(ctx, base);
	// lis r10,-32114
	ctx.r10.s64 = -2104623104;
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r5,r10,-26496
	ctx.r5.s64 = ctx.r10.s64 + -26496;
	// addi r4,r11,-25864
	ctx.r4.s64 = ctx.r11.s64 + -25864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x826494B4;
	sub_828F5CF0(ctx, base);
	// lis r10,-32114
	ctx.r10.s64 = -2104623104;
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r5,r10,-27088
	ctx.r5.s64 = ctx.r10.s64 + -27088;
	// addi r4,r11,-27160
	ctx.r4.s64 = ctx.r11.s64 + -27160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x826494CC;
	sub_828F5CF0(ctx, base);
	// lis r10,-32114
	ctx.r10.s64 = -2104623104;
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r5,r10,-28136
	ctx.r5.s64 = ctx.r10.s64 + -28136;
	// addi r4,r11,-28208
	ctx.r4.s64 = ctx.r11.s64 + -28208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x826494E4;
	sub_828F5CF0(ctx, base);
	// lis r10,-32114
	ctx.r10.s64 = -2104623104;
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r5,r10,-30208
	ctx.r5.s64 = ctx.r10.s64 + -30208;
	// addi r4,r11,-28912
	ctx.r4.s64 = ctx.r11.s64 + -28912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x826494FC;
	sub_828F5CF0(ctx, base);
	// lis r10,-32114
	ctx.r10.s64 = -2104623104;
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r5,r10,-30784
	ctx.r5.s64 = ctx.r10.s64 + -30784;
	// addi r4,r11,-30856
	ctx.r4.s64 = ctx.r11.s64 + -30856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82649514;
	sub_828F5CF0(ctx, base);
	// lis r10,-32114
	ctx.r10.s64 = -2104623104;
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r5,r10,-31328
	ctx.r5.s64 = ctx.r10.s64 + -31328;
	// addi r4,r11,-31048
	ctx.r4.s64 = ctx.r11.s64 + -31048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x8264952C;
	sub_828F5CF0(ctx, base);
	// lis r10,-32114
	ctx.r10.s64 = -2104623104;
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// addi r5,r10,-31624
	ctx.r5.s64 = ctx.r10.s64 + -31624;
	// addi r4,r11,-31400
	ctx.r4.s64 = ctx.r11.s64 + -31400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82649544;
	sub_828F5CF0(ctx, base);
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r5,r10,28480
	ctx.r5.s64 = ctx.r10.s64 + 28480;
	// addi r4,r11,31720
	ctx.r4.s64 = ctx.r11.s64 + 31720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x8264955C;
	sub_828F5CF0(ctx, base);
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r5,r10,25440
	ctx.r5.s64 = ctx.r10.s64 + 25440;
	// addi r4,r11,25368
	ctx.r4.s64 = ctx.r11.s64 + 25368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82649574;
	sub_828F5CF0(ctx, base);
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r5,r10,24728
	ctx.r5.s64 = ctx.r10.s64 + 24728;
	// addi r4,r11,24656
	ctx.r4.s64 = ctx.r11.s64 + 24656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x8264958C;
	sub_828F5CF0(ctx, base);
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r5,r10,24176
	ctx.r5.s64 = ctx.r10.s64 + 24176;
	// addi r4,r11,24104
	ctx.r4.s64 = ctx.r11.s64 + 24104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x826495A4;
	sub_828F5CF0(ctx, base);
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r5,r10,22840
	ctx.r5.s64 = ctx.r10.s64 + 22840;
	// addi r4,r11,23576
	ctx.r4.s64 = ctx.r11.s64 + 23576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x826495BC;
	sub_828F5CF0(ctx, base);
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r5,r10,22496
	ctx.r5.s64 = ctx.r10.s64 + 22496;
	// addi r4,r11,22424
	ctx.r4.s64 = ctx.r11.s64 + 22424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x826495D4;
	sub_828F5CF0(ctx, base);
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r5,r10,21152
	ctx.r5.s64 = ctx.r10.s64 + 21152;
	// addi r4,r11,21904
	ctx.r4.s64 = ctx.r11.s64 + 21904;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x826495EC;
	sub_828F5CF0(ctx, base);
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r5,r10,20912
	ctx.r5.s64 = ctx.r10.s64 + 20912;
	// addi r4,r11,20840
	ctx.r4.s64 = ctx.r11.s64 + 20840;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82649604;
	sub_828F5CF0(ctx, base);
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r5,r10,20040
	ctx.r5.s64 = ctx.r10.s64 + 20040;
	// addi r4,r11,19968
	ctx.r4.s64 = ctx.r11.s64 + 19968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x8264961C;
	sub_828F5CF0(ctx, base);
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r5,r10,19056
	ctx.r5.s64 = ctx.r10.s64 + 19056;
	// addi r4,r11,18984
	ctx.r4.s64 = ctx.r11.s64 + 18984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82649634;
	sub_828F5CF0(ctx, base);
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r5,r10,17336
	ctx.r5.s64 = ctx.r10.s64 + 17336;
	// addi r4,r11,18408
	ctx.r4.s64 = ctx.r11.s64 + 18408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x8264964C;
	sub_828F5CF0(ctx, base);
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r5,r10,16648
	ctx.r5.s64 = ctx.r10.s64 + 16648;
	// addi r4,r11,16576
	ctx.r4.s64 = ctx.r11.s64 + 16576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82649664;
	sub_828F5CF0(ctx, base);
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r5,r10,15520
	ctx.r5.s64 = ctx.r10.s64 + 15520;
	// addi r4,r11,15448
	ctx.r4.s64 = ctx.r11.s64 + 15448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x8264967C;
	sub_828F5CF0(ctx, base);
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r5,r10,14872
	ctx.r5.s64 = ctx.r10.s64 + 14872;
	// addi r4,r11,14800
	ctx.r4.s64 = ctx.r11.s64 + 14800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82649694;
	sub_828F5CF0(ctx, base);
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r5,r10,14016
	ctx.r5.s64 = ctx.r10.s64 + 14016;
	// addi r4,r11,13944
	ctx.r4.s64 = ctx.r11.s64 + 13944;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x826496AC;
	sub_828F5CF0(ctx, base);
	// lis r10,-32115
	ctx.r10.s64 = -2104688640;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r5,r10,13056
	ctx.r5.s64 = ctx.r10.s64 + 13056;
	// addi r4,r11,12984
	ctx.r4.s64 = ctx.r11.s64 + 12984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x826496C4;
	sub_828F5CF0(ctx, base);
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r5,r10,29520
	ctx.r5.s64 = ctx.r10.s64 + 29520;
	// addi r4,r11,29528
	ctx.r4.s64 = ctx.r11.s64 + 29528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x826496DC;
	sub_828F5CF0(ctx, base);
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r5,r10,28672
	ctx.r5.s64 = ctx.r10.s64 + 28672;
	// addi r4,r11,28680
	ctx.r4.s64 = ctx.r11.s64 + 28680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x826496F4;
	sub_828F5CF0(ctx, base);
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r5,r10,27952
	ctx.r5.s64 = ctx.r10.s64 + 27952;
	// addi r4,r11,27960
	ctx.r4.s64 = ctx.r11.s64 + 27960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x8264970C;
	sub_828F5CF0(ctx, base);
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r5,r10,27576
	ctx.r5.s64 = ctx.r10.s64 + 27576;
	// addi r4,r11,27464
	ctx.r4.s64 = ctx.r11.s64 + 27464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82649724;
	sub_828F5CF0(ctx, base);
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r5,r10,26056
	ctx.r5.s64 = ctx.r10.s64 + 26056;
	// addi r4,r11,26736
	ctx.r4.s64 = ctx.r11.s64 + 26736;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x8264973C;
	sub_828F5CF0(ctx, base);
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r5,r10,25072
	ctx.r5.s64 = ctx.r10.s64 + 25072;
	// addi r4,r11,25192
	ctx.r4.s64 = ctx.r11.s64 + 25192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82649754;
	sub_828F5CF0(ctx, base);
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r5,r10,24952
	ctx.r5.s64 = ctx.r10.s64 + 24952;
	// addi r4,r11,24840
	ctx.r4.s64 = ctx.r11.s64 + 24840;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x8264976C;
	sub_828F5CF0(ctx, base);
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r5,r10,24504
	ctx.r5.s64 = ctx.r10.s64 + 24504;
	// addi r4,r11,24392
	ctx.r4.s64 = ctx.r11.s64 + 24392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x82649784;
	sub_828F5CF0(ctx, base);
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r5,r10,24160
	ctx.r5.s64 = ctx.r10.s64 + 24160;
	// addi r4,r11,24048
	ctx.r4.s64 = ctx.r11.s64 + 24048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x8264979C;
	sub_828F5CF0(ctx, base);
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r5,r10,23600
	ctx.r5.s64 = ctx.r10.s64 + 23600;
	// addi r4,r11,23608
	ctx.r4.s64 = ctx.r11.s64 + 23608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x826497B4;
	sub_828F5CF0(ctx, base);
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r5,r10,22728
	ctx.r5.s64 = ctx.r10.s64 + 22728;
	// addi r4,r11,23104
	ctx.r4.s64 = ctx.r11.s64 + 23104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x826497CC;
	sub_828F5CF0(ctx, base);
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r5,r10,21528
	ctx.r5.s64 = ctx.r10.s64 + 21528;
	// addi r4,r11,21896
	ctx.r4.s64 = ctx.r11.s64 + 21896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x826497E4;
	sub_828F5CF0(ctx, base);
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r5,r10,21120
	ctx.r5.s64 = ctx.r10.s64 + 21120;
	// addi r4,r11,21000
	ctx.r4.s64 = ctx.r11.s64 + 21000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5cf0
	ctx.lr = 0x826497FC;
	sub_828F5CF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82649810"))) PPC_WEAK_FUNC(sub_82649810);
PPC_FUNC_IMPL(__imp__sub_82649810) {
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
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82664a70
	ctx.lr = 0x82649830;
	sub_82664A70(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82649844
	if (ctx.cr6.eq) goto loc_82649844;
	// bl 0x82659610
	ctx.lr = 0x82649844;
	sub_82659610(ctx, base);
loc_82649844:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82649854
	if (ctx.cr6.eq) goto loc_82649854;
	// bl 0x82631328
	ctx.lr = 0x82649854;
	sub_82631328(ctx, base);
loc_82649854:
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

__attribute__((alias("__imp__sub_82649870"))) PPC_WEAK_FUNC(sub_82649870);
PPC_FUNC_IMPL(__imp__sub_82649870) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82664a70
	ctx.lr = 0x82649894;
	sub_82664A70(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826498d4
	if (ctx.cr6.eq) goto loc_826498D4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826498c8
	if (ctx.cr6.eq) goto loc_826498C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826498C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_826498C8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826498d4
	if (ctx.cr6.eq) goto loc_826498D4;
	// bl 0x82631328
	ctx.lr = 0x826498D4;
	sub_82631328(ctx, base);
loc_826498D4:
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

__attribute__((alias("__imp__sub_826498E8"))) PPC_WEAK_FUNC(sub_826498E8);
PPC_FUNC_IMPL(__imp__sub_826498E8) {
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
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82664a70
	ctx.lr = 0x82649908;
	sub_82664A70(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264991c
	if (ctx.cr6.eq) goto loc_8264991C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
loc_8264991C:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// xori r31,r11,1
	ctx.r31.u64 = ctx.r11.u64 ^ 1;
	// beq cr6,0x8264993c
	if (ctx.cr6.eq) goto loc_8264993C;
	// bl 0x82631328
	ctx.lr = 0x8264993C;
	sub_82631328(ctx, base);
loc_8264993C:
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

