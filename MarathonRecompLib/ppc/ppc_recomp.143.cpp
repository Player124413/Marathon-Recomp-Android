#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82AE3AC0"))) PPC_WEAK_FUNC(sub_82AE3AC0);
PPC_FUNC_IMPL(__imp__sub_82AE3AC0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82acbc00
	ctx.lr = 0x82AE3AD8;
	sub_82ACBC00(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r9,-32083
	ctx.r9.s64 = -2102591488;
	// addi r10,r11,-14448
	ctx.r10.s64 = ctx.r11.s64 + -14448;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// addi r11,r11,24280
	ctx.r11.s64 = ctx.r11.s64 + 24280;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r9,-17208
	ctx.r10.s64 = ctx.r9.s64 + -17208;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE3B10"))) PPC_WEAK_FUNC(sub_82AE3B10);
PPC_FUNC_IMPL(__imp__sub_82AE3B10) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-13464
	ctx.r4.s64 = ctx.r10.s64 + -13464;
	// addi r11,r11,-13544
	ctx.r11.s64 = ctx.r11.s64 + -13544;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24292
	ctx.r3.s64 = ctx.r10.s64 + 24292;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE3B60;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE3B70"))) PPC_WEAK_FUNC(sub_82AE3B70);
PPC_FUNC_IMPL(__imp__sub_82AE3B70) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,21736
	ctx.r5.s64 = ctx.r10.s64 + 21736;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-13416
	ctx.r4.s64 = ctx.r10.s64 + -13416;
	// addi r11,r11,-13484
	ctx.r11.s64 = ctx.r11.s64 + -13484;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24328
	ctx.r3.s64 = ctx.r10.s64 + 24328;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82aabf68
	ctx.lr = 0x82AE3BC4;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE3BD8"))) PPC_WEAK_FUNC(sub_82AE3BD8);
PPC_FUNC_IMPL(__imp__sub_82AE3BD8) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,17
	ctx.r8.s64 = 17;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-11920
	ctx.r4.s64 = ctx.r10.s64 + -11920;
	// addi r11,r11,-12784
	ctx.r11.s64 = ctx.r11.s64 + -12784;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24364
	ctx.r3.s64 = ctx.r10.s64 + 24364;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE3C28;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE3C38"))) PPC_WEAK_FUNC(sub_82AE3C38);
PPC_FUNC_IMPL(__imp__sub_82AE3C38) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,26
	ctx.r8.s64 = 26;
	// addi r5,r10,26416
	ctx.r5.s64 = ctx.r10.s64 + 26416;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,28872
	ctx.r4.s64 = ctx.r10.s64 + 28872;
	// addi r11,r11,-12440
	ctx.r11.s64 = ctx.r11.s64 + -12440;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24400
	ctx.r3.s64 = ctx.r10.s64 + 24400;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,216
	ctx.r6.s64 = 216;
	// bl 0x82aabf68
	ctx.lr = 0x82AE3C8C;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE3CA0"))) PPC_WEAK_FUNC(sub_82AE3CA0);
PPC_FUNC_IMPL(__imp__sub_82AE3CA0) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,10
	ctx.r8.s64 = 10;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-11044
	ctx.r4.s64 = ctx.r10.s64 + -11044;
	// addi r11,r11,-11504
	ctx.r11.s64 = ctx.r11.s64 + -11504;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24436
	ctx.r3.s64 = ctx.r10.s64 + 24436;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,100
	ctx.r6.s64 = 100;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE3CF0;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE3D00"))) PPC_WEAK_FUNC(sub_82AE3D00);
PPC_FUNC_IMPL(__imp__sub_82AE3D00) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-11000
	ctx.r4.s64 = ctx.r10.s64 + -11000;
	// addi r11,r11,-11304
	ctx.r11.s64 = ctx.r11.s64 + -11304;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24472
	ctx.r3.s64 = ctx.r10.s64 + 24472;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,208
	ctx.r6.s64 = 208;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE3D50;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE3D60"))) PPC_WEAK_FUNC(sub_82AE3D60);
PPC_FUNC_IMPL(__imp__sub_82AE3D60) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,9
	ctx.r8.s64 = 9;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-10968
	ctx.r4.s64 = ctx.r10.s64 + -10968;
	// addi r11,r11,-11224
	ctx.r11.s64 = ctx.r11.s64 + -11224;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24508
	ctx.r3.s64 = ctx.r10.s64 + 24508;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,36
	ctx.r6.s64 = 36;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE3DB0;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE3DC0"))) PPC_WEAK_FUNC(sub_82AE3DC0);
PPC_FUNC_IMPL(__imp__sub_82AE3DC0) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-10932
	ctx.r4.s64 = ctx.r10.s64 + -10932;
	// addi r11,r11,-11244
	ctx.r11.s64 = ctx.r11.s64 + -11244;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24544
	ctx.r3.s64 = ctx.r10.s64 + 24544;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE3E10;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE3E20"))) PPC_WEAK_FUNC(sub_82AE3E20);
PPC_FUNC_IMPL(__imp__sub_82AE3E20) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-10768
	ctx.r4.s64 = ctx.r10.s64 + -10768;
	// addi r11,r11,-10848
	ctx.r11.s64 = ctx.r11.s64 + -10848;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24580
	ctx.r3.s64 = ctx.r10.s64 + 24580;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE3E70;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE3E80"))) PPC_WEAK_FUNC(sub_82AE3E80);
PPC_FUNC_IMPL(__imp__sub_82AE3E80) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,24328
	ctx.r5.s64 = ctx.r10.s64 + 24328;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,29120
	ctx.r4.s64 = ctx.r10.s64 + 29120;
	// addi r11,r11,-10788
	ctx.r11.s64 = ctx.r11.s64 + -10788;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24616
	ctx.r3.s64 = ctx.r10.s64 + 24616;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82aabf68
	ctx.lr = 0x82AE3ED4;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE3EE8"))) PPC_WEAK_FUNC(sub_82AE3EE8);
PPC_FUNC_IMPL(__imp__sub_82AE3EE8) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-10492
	ctx.r4.s64 = ctx.r10.s64 + -10492;
	// addi r11,r11,-10592
	ctx.r11.s64 = ctx.r11.s64 + -10592;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24652
	ctx.r3.s64 = ctx.r10.s64 + 24652;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE3F38;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE3F48"))) PPC_WEAK_FUNC(sub_82AE3F48);
PPC_FUNC_IMPL(__imp__sub_82AE3F48) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,25156
	ctx.r5.s64 = ctx.r10.s64 + 25156;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,29324
	ctx.r4.s64 = ctx.r10.s64 + 29324;
	// addi r11,r11,-10532
	ctx.r11.s64 = ctx.r11.s64 + -10532;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24688
	ctx.r3.s64 = ctx.r10.s64 + 24688;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82aabf68
	ctx.lr = 0x82AE3F9C;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE3FB0"))) PPC_WEAK_FUNC(sub_82AE3FB0);
PPC_FUNC_IMPL(__imp__sub_82AE3FB0) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,9
	ctx.r8.s64 = 9;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-9456
	ctx.r4.s64 = ctx.r10.s64 + -9456;
	// addi r11,r11,-10000
	ctx.r11.s64 = ctx.r11.s64 + -10000;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24724
	ctx.r3.s64 = ctx.r10.s64 + 24724;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,36
	ctx.r6.s64 = 36;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE4000;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE4010"))) PPC_WEAK_FUNC(sub_82AE4010);
PPC_FUNC_IMPL(__imp__sub_82AE4010) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,18
	ctx.r8.s64 = 18;
	// addi r5,r10,21736
	ctx.r5.s64 = ctx.r10.s64 + 21736;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,29532
	ctx.r4.s64 = ctx.r10.s64 + 29532;
	// addi r11,r11,-9816
	ctx.r11.s64 = ctx.r11.s64 + -9816;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24760
	ctx.r3.s64 = ctx.r10.s64 + 24760;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,400
	ctx.r6.s64 = 400;
	// bl 0x82aabf68
	ctx.lr = 0x82AE4064;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE4078"))) PPC_WEAK_FUNC(sub_82AE4078);
PPC_FUNC_IMPL(__imp__sub_82AE4078) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-9136
	ctx.r4.s64 = ctx.r10.s64 + -9136;
	// addi r11,r11,-9296
	ctx.r11.s64 = ctx.r11.s64 + -9296;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24796
	ctx.r3.s64 = ctx.r10.s64 + 24796;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE40C8;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE40D8"))) PPC_WEAK_FUNC(sub_82AE40D8);
PPC_FUNC_IMPL(__imp__sub_82AE40D8) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,21736
	ctx.r5.s64 = ctx.r10.s64 + 21736;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,29180
	ctx.r4.s64 = ctx.r10.s64 + 29180;
	// addi r11,r11,-9256
	ctx.r11.s64 = ctx.r11.s64 + -9256;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24832
	ctx.r3.s64 = ctx.r10.s64 + 24832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82aabf68
	ctx.lr = 0x82AE412C;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE4140"))) PPC_WEAK_FUNC(sub_82AE4140);
PPC_FUNC_IMPL(__imp__sub_82AE4140) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,21736
	ctx.r5.s64 = ctx.r10.s64 + 21736;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,29200
	ctx.r4.s64 = ctx.r10.s64 + 29200;
	// addi r11,r11,-9196
	ctx.r11.s64 = ctx.r11.s64 + -9196;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24868
	ctx.r3.s64 = ctx.r10.s64 + 24868;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82aabf68
	ctx.lr = 0x82AE4194;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE41A8"))) PPC_WEAK_FUNC(sub_82AE41A8);
PPC_FUNC_IMPL(__imp__sub_82AE41A8) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,21736
	ctx.r5.s64 = ctx.r10.s64 + 21736;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-9088
	ctx.r4.s64 = ctx.r10.s64 + -9088;
	// addi r11,r11,-9108
	ctx.r11.s64 = ctx.r11.s64 + -9108;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24904
	ctx.r3.s64 = ctx.r10.s64 + 24904;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82aabf68
	ctx.lr = 0x82AE41FC;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE4210"))) PPC_WEAK_FUNC(sub_82AE4210);
PPC_FUNC_IMPL(__imp__sub_82AE4210) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,21736
	ctx.r5.s64 = ctx.r10.s64 + 21736;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-9064
	ctx.r4.s64 = ctx.r10.s64 + -9064;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,24940
	ctx.r3.s64 = ctx.r10.s64 + 24940;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82aabf68
	ctx.lr = 0x82AE425C;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE4270"))) PPC_WEAK_FUNC(sub_82AE4270);
PPC_FUNC_IMPL(__imp__sub_82AE4270) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,21736
	ctx.r5.s64 = ctx.r10.s64 + 21736;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-9040
	ctx.r4.s64 = ctx.r10.s64 + -9040;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,24976
	ctx.r3.s64 = ctx.r10.s64 + 24976;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82aabf68
	ctx.lr = 0x82AE42BC;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE42D0"))) PPC_WEAK_FUNC(sub_82AE42D0);
PPC_FUNC_IMPL(__imp__sub_82AE42D0) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,21736
	ctx.r5.s64 = ctx.r10.s64 + 21736;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-9016
	ctx.r4.s64 = ctx.r10.s64 + -9016;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,25012
	ctx.r3.s64 = ctx.r10.s64 + 25012;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82aabf68
	ctx.lr = 0x82AE431C;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE4330"))) PPC_WEAK_FUNC(sub_82AE4330);
PPC_FUNC_IMPL(__imp__sub_82AE4330) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,21736
	ctx.r5.s64 = ctx.r10.s64 + 21736;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-8996
	ctx.r4.s64 = ctx.r10.s64 + -8996;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,25048
	ctx.r3.s64 = ctx.r10.s64 + 25048;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82aabf68
	ctx.lr = 0x82AE437C;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE4390"))) PPC_WEAK_FUNC(sub_82AE4390);
PPC_FUNC_IMPL(__imp__sub_82AE4390) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,21736
	ctx.r5.s64 = ctx.r10.s64 + 21736;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-8980
	ctx.r4.s64 = ctx.r10.s64 + -8980;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,25084
	ctx.r3.s64 = ctx.r10.s64 + 25084;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82aabf68
	ctx.lr = 0x82AE43DC;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE43F0"))) PPC_WEAK_FUNC(sub_82AE43F0);
PPC_FUNC_IMPL(__imp__sub_82AE43F0) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,21736
	ctx.r5.s64 = ctx.r10.s64 + 21736;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-8952
	ctx.r4.s64 = ctx.r10.s64 + -8952;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,25120
	ctx.r3.s64 = ctx.r10.s64 + 25120;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82aabf68
	ctx.lr = 0x82AE443C;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE4450"))) PPC_WEAK_FUNC(sub_82AE4450);
PPC_FUNC_IMPL(__imp__sub_82AE4450) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,21736
	ctx.r5.s64 = ctx.r10.s64 + 21736;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-8928
	ctx.r4.s64 = ctx.r10.s64 + -8928;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,25156
	ctx.r3.s64 = ctx.r10.s64 + 25156;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82aabf68
	ctx.lr = 0x82AE449C;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE44B0"))) PPC_WEAK_FUNC(sub_82AE44B0);
PPC_FUNC_IMPL(__imp__sub_82AE44B0) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,21736
	ctx.r5.s64 = ctx.r10.s64 + 21736;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-8912
	ctx.r4.s64 = ctx.r10.s64 + -8912;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,25192
	ctx.r3.s64 = ctx.r10.s64 + 25192;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82aabf68
	ctx.lr = 0x82AE44FC;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE4510"))) PPC_WEAK_FUNC(sub_82AE4510);
PPC_FUNC_IMPL(__imp__sub_82AE4510) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r5,r10,21736
	ctx.r5.s64 = ctx.r10.s64 + 21736;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,-8824
	ctx.r11.s64 = ctx.r11.s64 + -8824;
	// addi r4,r10,29092
	ctx.r4.s64 = ctx.r10.s64 + 29092;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r10,25228
	ctx.r3.s64 = ctx.r10.s64 + 25228;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x82aabf68
	ctx.lr = 0x82AE4560;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE4570"))) PPC_WEAK_FUNC(sub_82AE4570);
PPC_FUNC_IMPL(__imp__sub_82AE4570) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,24904
	ctx.r5.s64 = ctx.r10.s64 + 24904;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,29060
	ctx.r4.s64 = ctx.r10.s64 + 29060;
	// addi r11,r11,-8804
	ctx.r11.s64 = ctx.r11.s64 + -8804;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,25264
	ctx.r3.s64 = ctx.r10.s64 + 25264;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,36
	ctx.r6.s64 = 36;
	// bl 0x82aabf68
	ctx.lr = 0x82AE45C4;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE45D8"))) PPC_WEAK_FUNC(sub_82AE45D8);
PPC_FUNC_IMPL(__imp__sub_82AE45D8) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r5,r10,25084
	ctx.r5.s64 = ctx.r10.s64 + 25084;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,28964
	ctx.r4.s64 = ctx.r10.s64 + 28964;
	// addi r11,r11,-8608
	ctx.r11.s64 = ctx.r11.s64 + -8608;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,25300
	ctx.r3.s64 = ctx.r10.s64 + 25300;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82aabf68
	ctx.lr = 0x82AE462C;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE4640"))) PPC_WEAK_FUNC(sub_82AE4640);
PPC_FUNC_IMPL(__imp__sub_82AE4640) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r5,r10,25120
	ctx.r5.s64 = ctx.r10.s64 + 25120;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,28928
	ctx.r4.s64 = ctx.r10.s64 + 28928;
	// addi r11,r11,-8528
	ctx.r11.s64 = ctx.r11.s64 + -8528;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,25336
	ctx.r3.s64 = ctx.r10.s64 + 25336;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82aabf68
	ctx.lr = 0x82AE4694;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE46A8"))) PPC_WEAK_FUNC(sub_82AE46A8);
PPC_FUNC_IMPL(__imp__sub_82AE46A8) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,24940
	ctx.r5.s64 = ctx.r10.s64 + 24940;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,29228
	ctx.r4.s64 = ctx.r10.s64 + 29228;
	// addi r11,r11,-8384
	ctx.r11.s64 = ctx.r11.s64 + -8384;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,25372
	ctx.r3.s64 = ctx.r10.s64 + 25372;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82aabf68
	ctx.lr = 0x82AE46FC;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE4710"))) PPC_WEAK_FUNC(sub_82AE4710);
PPC_FUNC_IMPL(__imp__sub_82AE4710) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r5,r10,24976
	ctx.r5.s64 = ctx.r10.s64 + 24976;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,29396
	ctx.r4.s64 = ctx.r10.s64 + 29396;
	// addi r11,r11,-8200
	ctx.r11.s64 = ctx.r11.s64 + -8200;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,25408
	ctx.r3.s64 = ctx.r10.s64 + 25408;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,52
	ctx.r6.s64 = 52;
	// bl 0x82aabf68
	ctx.lr = 0x82AE4764;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE4778"))) PPC_WEAK_FUNC(sub_82AE4778);
PPC_FUNC_IMPL(__imp__sub_82AE4778) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,25012
	ctx.r5.s64 = ctx.r10.s64 + 25012;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,29480
	ctx.r4.s64 = ctx.r10.s64 + 29480;
	// addi r11,r11,-7996
	ctx.r11.s64 = ctx.r11.s64 + -7996;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,25444
	ctx.r3.s64 = ctx.r10.s64 + 25444;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82aabf68
	ctx.lr = 0x82AE47CC;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE47E0"))) PPC_WEAK_FUNC(sub_82AE47E0);
PPC_FUNC_IMPL(__imp__sub_82AE47E0) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,10
	ctx.r8.s64 = 10;
	// addi r5,r10,25048
	ctx.r5.s64 = ctx.r10.s64 + 25048;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,29440
	ctx.r4.s64 = ctx.r10.s64 + 29440;
	// addi r11,r11,-7752
	ctx.r11.s64 = ctx.r11.s64 + -7752;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,25480
	ctx.r3.s64 = ctx.r10.s64 + 25480;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82aabf68
	ctx.lr = 0x82AE4834;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE4848"))) PPC_WEAK_FUNC(sub_82AE4848);
PPC_FUNC_IMPL(__imp__sub_82AE4848) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r5,r10,25192
	ctx.r5.s64 = ctx.r10.s64 + 25192;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,29280
	ctx.r4.s64 = ctx.r10.s64 + 29280;
	// addi r11,r11,-7480
	ctx.r11.s64 = ctx.r11.s64 + -7480;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,25516
	ctx.r3.s64 = ctx.r10.s64 + 25516;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82aabf68
	ctx.lr = 0x82AE489C;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE48B0"))) PPC_WEAK_FUNC(sub_82AE48B0);
PPC_FUNC_IMPL(__imp__sub_82AE48B0) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-6904
	ctx.r4.s64 = ctx.r10.s64 + -6904;
	// addi r11,r11,-7184
	ctx.r11.s64 = ctx.r11.s64 + -7184;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,25552
	ctx.r3.s64 = ctx.r10.s64 + 25552;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE4900;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE4910"))) PPC_WEAK_FUNC(sub_82AE4910);
PPC_FUNC_IMPL(__imp__sub_82AE4910) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,6
	ctx.r8.s64 = 6;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-6864
	ctx.r4.s64 = ctx.r10.s64 + -6864;
	// addi r11,r11,-7144
	ctx.r11.s64 = ctx.r11.s64 + -7144;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,25588
	ctx.r3.s64 = ctx.r10.s64 + 25588;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE4960;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE4970"))) PPC_WEAK_FUNC(sub_82AE4970);
PPC_FUNC_IMPL(__imp__sub_82AE4970) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r5,r10,20892
	ctx.r5.s64 = ctx.r10.s64 + 20892;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-6824
	ctx.r4.s64 = ctx.r10.s64 + -6824;
	// addi r11,r11,-7024
	ctx.r11.s64 = ctx.r11.s64 + -7024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,25624
	ctx.r3.s64 = ctx.r10.s64 + 25624;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,160
	ctx.r6.s64 = 160;
	// bl 0x82aabf68
	ctx.lr = 0x82AE49C4;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE49D8"))) PPC_WEAK_FUNC(sub_82AE49D8);
PPC_FUNC_IMPL(__imp__sub_82AE49D8) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-6600
	ctx.r4.s64 = ctx.r10.s64 + -6600;
	// addi r11,r11,-6744
	ctx.r11.s64 = ctx.r11.s64 + -6744;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,25660
	ctx.r3.s64 = ctx.r10.s64 + 25660;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE4A28;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE4A38"))) PPC_WEAK_FUNC(sub_82AE4A38);
PPC_FUNC_IMPL(__imp__sub_82AE4A38) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r5,r10,26668
	ctx.r5.s64 = ctx.r10.s64 + 26668;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-6560
	ctx.r4.s64 = ctx.r10.s64 + -6560;
	// addi r11,r11,-6680
	ctx.r11.s64 = ctx.r11.s64 + -6680;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,25696
	ctx.r3.s64 = ctx.r10.s64 + 25696;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,36
	ctx.r6.s64 = 36;
	// bl 0x82aabf68
	ctx.lr = 0x82AE4A8C;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE4AA0"))) PPC_WEAK_FUNC(sub_82AE4AA0);
PPC_FUNC_IMPL(__imp__sub_82AE4AA0) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-6172
	ctx.r4.s64 = ctx.r10.s64 + -6172;
	// addi r11,r11,-6352
	ctx.r11.s64 = ctx.r11.s64 + -6352;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,25732
	ctx.r3.s64 = ctx.r10.s64 + 25732;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE4AF0;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE4B00"))) PPC_WEAK_FUNC(sub_82AE4B00);
PPC_FUNC_IMPL(__imp__sub_82AE4B00) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r5,r10,26524
	ctx.r5.s64 = ctx.r10.s64 + 26524;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-8712
	ctx.r4.s64 = ctx.r10.s64 + -8712;
	// addi r11,r11,-6312
	ctx.r11.s64 = ctx.r11.s64 + -6312;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,25768
	ctx.r3.s64 = ctx.r10.s64 + 25768;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82aabf68
	ctx.lr = 0x82AE4B54;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE4B68"))) PPC_WEAK_FUNC(sub_82AE4B68);
PPC_FUNC_IMPL(__imp__sub_82AE4B68) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-5764
	ctx.r4.s64 = ctx.r10.s64 + -5764;
	// addi r11,r11,-6024
	ctx.r11.s64 = ctx.r11.s64 + -6024;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,25804
	ctx.r3.s64 = ctx.r10.s64 + 25804;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE4BB8;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE4BC8"))) PPC_WEAK_FUNC(sub_82AE4BC8);
PPC_FUNC_IMPL(__imp__sub_82AE4BC8) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-5720
	ctx.r4.s64 = ctx.r10.s64 + -5720;
	// addi r11,r11,-5964
	ctx.r11.s64 = ctx.r11.s64 + -5964;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,25840
	ctx.r3.s64 = ctx.r10.s64 + 25840;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE4C18;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE4C28"))) PPC_WEAK_FUNC(sub_82AE4C28);
PPC_FUNC_IMPL(__imp__sub_82AE4C28) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r5,r10,20892
	ctx.r5.s64 = ctx.r10.s64 + 20892;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-5676
	ctx.r4.s64 = ctx.r10.s64 + -5676;
	// addi r11,r11,-5904
	ctx.r11.s64 = ctx.r11.s64 + -5904;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,25876
	ctx.r3.s64 = ctx.r10.s64 + 25876;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,160
	ctx.r6.s64 = 160;
	// bl 0x82aabf68
	ctx.lr = 0x82AE4C7C;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE4C90"))) PPC_WEAK_FUNC(sub_82AE4C90);
PPC_FUNC_IMPL(__imp__sub_82AE4C90) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,6
	ctx.r8.s64 = 6;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-5264
	ctx.r4.s64 = ctx.r10.s64 + -5264;
	// addi r11,r11,-5544
	ctx.r11.s64 = ctx.r11.s64 + -5544;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,25912
	ctx.r3.s64 = ctx.r10.s64 + 25912;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE4CE0;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE4CF0"))) PPC_WEAK_FUNC(sub_82AE4CF0);
PPC_FUNC_IMPL(__imp__sub_82AE4CF0) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r5,r10,26668
	ctx.r5.s64 = ctx.r10.s64 + 26668;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-5228
	ctx.r4.s64 = ctx.r10.s64 + -5228;
	// addi r11,r11,-5424
	ctx.r11.s64 = ctx.r11.s64 + -5424;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,25948
	ctx.r3.s64 = ctx.r10.s64 + 25948;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,52
	ctx.r6.s64 = 52;
	// bl 0x82aabf68
	ctx.lr = 0x82AE4D44;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE4D58"))) PPC_WEAK_FUNC(sub_82AE4D58);
PPC_FUNC_IMPL(__imp__sub_82AE4D58) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,4
	ctx.r8.s64 = 4;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-4808
	ctx.r4.s64 = ctx.r10.s64 + -4808;
	// addi r11,r11,-5096
	ctx.r11.s64 = ctx.r11.s64 + -5096;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,25984
	ctx.r3.s64 = ctx.r10.s64 + 25984;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE4DA8;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE4DB8"))) PPC_WEAK_FUNC(sub_82AE4DB8);
PPC_FUNC_IMPL(__imp__sub_82AE4DB8) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-4760
	ctx.r4.s64 = ctx.r10.s64 + -4760;
	// addi r11,r11,-5016
	ctx.r11.s64 = ctx.r11.s64 + -5016;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,26020
	ctx.r3.s64 = ctx.r10.s64 + 26020;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE4E08;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE4E18"))) PPC_WEAK_FUNC(sub_82AE4E18);
PPC_FUNC_IMPL(__imp__sub_82AE4E18) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// addi r11,r11,-4928
	ctx.r11.s64 = ctx.r11.s64 + -4928;
	// addi r5,r10,20892
	ctx.r5.s64 = ctx.r10.s64 + 20892;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r9,r11,-28
	ctx.r9.s64 = ctx.r11.s64 + -28;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r4,r10,-9848
	ctx.r4.s64 = ctx.r10.s64 + -9848;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,26056
	ctx.r3.s64 = ctx.r10.s64 + 26056;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,144
	ctx.r6.s64 = 144;
	// bl 0x82aabf68
	ctx.lr = 0x82AE4E70;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE4E80"))) PPC_WEAK_FUNC(sub_82AE4E80);
PPC_FUNC_IMPL(__imp__sub_82AE4E80) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-4488
	ctx.r4.s64 = ctx.r10.s64 + -4488;
	// addi r11,r11,-4712
	ctx.r11.s64 = ctx.r11.s64 + -4712;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,26092
	ctx.r3.s64 = ctx.r10.s64 + 26092;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE4ED0;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE4EE0"))) PPC_WEAK_FUNC(sub_82AE4EE0);
PPC_FUNC_IMPL(__imp__sub_82AE4EE0) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-4452
	ctx.r4.s64 = ctx.r10.s64 + -4452;
	// addi r11,r11,-4652
	ctx.r11.s64 = ctx.r11.s64 + -4652;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,26128
	ctx.r3.s64 = ctx.r10.s64 + 26128;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE4F30;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE4F40"))) PPC_WEAK_FUNC(sub_82AE4F40);
PPC_FUNC_IMPL(__imp__sub_82AE4F40) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r5,r10,20892
	ctx.r5.s64 = ctx.r10.s64 + 20892;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-4416
	ctx.r4.s64 = ctx.r10.s64 + -4416;
	// addi r11,r11,-4608
	ctx.r11.s64 = ctx.r11.s64 + -4608;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,26164
	ctx.r3.s64 = ctx.r10.s64 + 26164;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82aabf68
	ctx.lr = 0x82AE4F94;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE4FA8"))) PPC_WEAK_FUNC(sub_82AE4FA8);
PPC_FUNC_IMPL(__imp__sub_82AE4FA8) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-4256
	ctx.r4.s64 = ctx.r10.s64 + -4256;
	// addi r11,r11,-4396
	ctx.r11.s64 = ctx.r11.s64 + -4396;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,26200
	ctx.r3.s64 = ctx.r10.s64 + 26200;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE4FF8;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE5008"))) PPC_WEAK_FUNC(sub_82AE5008);
PPC_FUNC_IMPL(__imp__sub_82AE5008) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-4216
	ctx.r4.s64 = ctx.r10.s64 + -4216;
	// addi r11,r11,-4336
	ctx.r11.s64 = ctx.r11.s64 + -4336;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,26236
	ctx.r3.s64 = ctx.r10.s64 + 26236;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE5058;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE5068"))) PPC_WEAK_FUNC(sub_82AE5068);
PPC_FUNC_IMPL(__imp__sub_82AE5068) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,20892
	ctx.r5.s64 = ctx.r10.s64 + 20892;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-4176
	ctx.r4.s64 = ctx.r10.s64 + -4176;
	// addi r11,r11,-4296
	ctx.r11.s64 = ctx.r11.s64 + -4296;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,26272
	ctx.r3.s64 = ctx.r10.s64 + 26272;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82aabf68
	ctx.lr = 0x82AE50BC;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE50D0"))) PPC_WEAK_FUNC(sub_82AE50D0);
PPC_FUNC_IMPL(__imp__sub_82AE50D0) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,5
	ctx.r8.s64 = 5;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-4028
	ctx.r4.s64 = ctx.r10.s64 + -4028;
	// addi r11,r11,-4128
	ctx.r11.s64 = ctx.r11.s64 + -4128;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,26308
	ctx.r3.s64 = ctx.r10.s64 + 26308;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE5120;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE5130"))) PPC_WEAK_FUNC(sub_82AE5130);
PPC_FUNC_IMPL(__imp__sub_82AE5130) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-3852
	ctx.r4.s64 = ctx.r10.s64 + -3852;
	// addi r11,r11,-3992
	ctx.r11.s64 = ctx.r11.s64 + -3992;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,26344
	ctx.r3.s64 = ctx.r10.s64 + 26344;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE5180;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE5190"))) PPC_WEAK_FUNC(sub_82AE5190);
PPC_FUNC_IMPL(__imp__sub_82AE5190) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r5,r10,26668
	ctx.r5.s64 = ctx.r10.s64 + 26668;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-3816
	ctx.r4.s64 = ctx.r10.s64 + -3816;
	// addi r11,r11,-3952
	ctx.r11.s64 = ctx.r11.s64 + -3952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,26380
	ctx.r3.s64 = ctx.r10.s64 + 26380;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,40
	ctx.r6.s64 = 40;
	// bl 0x82aabf68
	ctx.lr = 0x82AE51E4;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE51F8"))) PPC_WEAK_FUNC(sub_82AE51F8);
PPC_FUNC_IMPL(__imp__sub_82AE51F8) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,20676
	ctx.r5.s64 = ctx.r10.s64 + 20676;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-3764
	ctx.r4.s64 = ctx.r10.s64 + -3764;
	// addi r11,r11,-3784
	ctx.r11.s64 = ctx.r11.s64 + -3784;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,26416
	ctx.r3.s64 = ctx.r10.s64 + 26416;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82aabf68
	ctx.lr = 0x82AE524C;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE5260"))) PPC_WEAK_FUNC(sub_82AE5260);
PPC_FUNC_IMPL(__imp__sub_82AE5260) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,20640
	ctx.r5.s64 = ctx.r10.s64 + 20640;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-3716
	ctx.r4.s64 = ctx.r10.s64 + -3716;
	// addi r11,r11,-3736
	ctx.r11.s64 = ctx.r11.s64 + -3736;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,26452
	ctx.r3.s64 = ctx.r10.s64 + 26452;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,288
	ctx.r6.s64 = 288;
	// bl 0x82aabf68
	ctx.lr = 0x82AE52B4;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE52C8"))) PPC_WEAK_FUNC(sub_82AE52C8);
PPC_FUNC_IMPL(__imp__sub_82AE52C8) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r5,r10,21144
	ctx.r5.s64 = ctx.r10.s64 + 21144;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-3460
	ctx.r4.s64 = ctx.r10.s64 + -3460;
	// addi r11,r11,-3600
	ctx.r11.s64 = ctx.r11.s64 + -3600;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,26488
	ctx.r3.s64 = ctx.r10.s64 + 26488;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,240
	ctx.r6.s64 = 240;
	// bl 0x82aabf68
	ctx.lr = 0x82AE531C;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE5330"))) PPC_WEAK_FUNC(sub_82AE5330);
PPC_FUNC_IMPL(__imp__sub_82AE5330) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-3316
	ctx.r9.s64 = ctx.r10.s64 + -3316;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,21072
	ctx.r5.s64 = ctx.r10.s64 + 21072;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r4,r10,-3304
	ctx.r4.s64 = ctx.r10.s64 + -3304;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r3,r10,26524
	ctx.r3.s64 = ctx.r10.s64 + 26524;
	// li r10,1
	ctx.r10.s64 = 1;
	// bl 0x82aabf68
	ctx.lr = 0x82AE5380;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE5390"))) PPC_WEAK_FUNC(sub_82AE5390);
PPC_FUNC_IMPL(__imp__sub_82AE5390) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,21736
	ctx.r5.s64 = ctx.r10.s64 + 21736;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-3280
	ctx.r4.s64 = ctx.r10.s64 + -3280;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,26560
	ctx.r3.s64 = ctx.r10.s64 + 26560;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82aabf68
	ctx.lr = 0x82AE53DC;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE53F0"))) PPC_WEAK_FUNC(sub_82AE53F0);
PPC_FUNC_IMPL(__imp__sub_82AE53F0) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,26632
	ctx.r5.s64 = ctx.r10.s64 + 26632;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-3196
	ctx.r4.s64 = ctx.r10.s64 + -3196;
	// addi r11,r11,-3236
	ctx.r11.s64 = ctx.r11.s64 + -3236;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,26596
	ctx.r3.s64 = ctx.r10.s64 + 26596;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82aabf68
	ctx.lr = 0x82AE5444;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE5458"))) PPC_WEAK_FUNC(sub_82AE5458);
PPC_FUNC_IMPL(__imp__sub_82AE5458) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-3056
	ctx.r9.s64 = ctx.r10.s64 + -3056;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,21736
	ctx.r5.s64 = ctx.r10.s64 + 21736;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r4,r10,-3044
	ctx.r4.s64 = ctx.r10.s64 + -3044;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r3,r10,26632
	ctx.r3.s64 = ctx.r10.s64 + 26632;
	// li r10,1
	ctx.r10.s64 = 1;
	// bl 0x82aabf68
	ctx.lr = 0x82AE54A8;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE54B8"))) PPC_WEAK_FUNC(sub_82AE54B8);
PPC_FUNC_IMPL(__imp__sub_82AE54B8) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,20892
	ctx.r5.s64 = ctx.r10.s64 + 20892;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-3024
	ctx.r4.s64 = ctx.r10.s64 + -3024;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,26668
	ctx.r3.s64 = ctx.r10.s64 + 26668;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82aabf68
	ctx.lr = 0x82AE5504;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE5518"))) PPC_WEAK_FUNC(sub_82AE5518);
PPC_FUNC_IMPL(__imp__sub_82AE5518) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,20676
	ctx.r5.s64 = ctx.r10.s64 + 20676;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-2944
	ctx.r4.s64 = ctx.r10.s64 + -2944;
	// addi r11,r11,-2984
	ctx.r11.s64 = ctx.r11.s64 + -2984;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,26704
	ctx.r3.s64 = ctx.r10.s64 + 26704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82aabf68
	ctx.lr = 0x82AE556C;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE5580"))) PPC_WEAK_FUNC(sub_82AE5580);
PPC_FUNC_IMPL(__imp__sub_82AE5580) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,20676
	ctx.r5.s64 = ctx.r10.s64 + 20676;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-2908
	ctx.r4.s64 = ctx.r10.s64 + -2908;
	// addi r11,r11,-2928
	ctx.r11.s64 = ctx.r11.s64 + -2928;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,26740
	ctx.r3.s64 = ctx.r10.s64 + 26740;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,36
	ctx.r6.s64 = 36;
	// bl 0x82aabf68
	ctx.lr = 0x82AE55D4;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE55E8"))) PPC_WEAK_FUNC(sub_82AE55E8);
PPC_FUNC_IMPL(__imp__sub_82AE55E8) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,26596
	ctx.r5.s64 = ctx.r10.s64 + 26596;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-2776
	ctx.r4.s64 = ctx.r10.s64 + -2776;
	// addi r11,r11,-2836
	ctx.r11.s64 = ctx.r11.s64 + -2836;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,26776
	ctx.r3.s64 = ctx.r10.s64 + 26776;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82aabf68
	ctx.lr = 0x82AE563C;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE5650"))) PPC_WEAK_FUNC(sub_82AE5650);
PPC_FUNC_IMPL(__imp__sub_82AE5650) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,27640
	ctx.r5.s64 = ctx.r10.s64 + 27640;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-8908
	ctx.r4.s64 = ctx.r10.s64 + -8908;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,26812
	ctx.r3.s64 = ctx.r10.s64 + 26812;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// bl 0x82aabf68
	ctx.lr = 0x82AE569C;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE56B0"))) PPC_WEAK_FUNC(sub_82AE56B0);
PPC_FUNC_IMPL(__imp__sub_82AE56B0) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,20892
	ctx.r5.s64 = ctx.r10.s64 + 20892;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-11592
	ctx.r4.s64 = ctx.r10.s64 + -11592;
	// addi r11,r11,-2748
	ctx.r11.s64 = ctx.r11.s64 + -2748;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,26848
	ctx.r3.s64 = ctx.r10.s64 + 26848;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82aabf68
	ctx.lr = 0x82AE5704;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE5718"))) PPC_WEAK_FUNC(sub_82AE5718);
PPC_FUNC_IMPL(__imp__sub_82AE5718) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,26992
	ctx.r5.s64 = ctx.r10.s64 + 26992;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-9572
	ctx.r4.s64 = ctx.r10.s64 + -9572;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,26884
	ctx.r3.s64 = ctx.r10.s64 + 26884;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,240
	ctx.r6.s64 = 240;
	// bl 0x82aabf68
	ctx.lr = 0x82AE5764;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE5778"))) PPC_WEAK_FUNC(sub_82AE5778);
PPC_FUNC_IMPL(__imp__sub_82AE5778) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,27640
	ctx.r5.s64 = ctx.r10.s64 + 27640;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-9220
	ctx.r4.s64 = ctx.r10.s64 + -9220;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,26920
	ctx.r3.s64 = ctx.r10.s64 + 26920;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// bl 0x82aabf68
	ctx.lr = 0x82AE57C4;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE57D8"))) PPC_WEAK_FUNC(sub_82AE57D8);
PPC_FUNC_IMPL(__imp__sub_82AE57D8) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,26596
	ctx.r5.s64 = ctx.r10.s64 + 26596;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-2632
	ctx.r4.s64 = ctx.r10.s64 + -2632;
	// addi r11,r11,-2672
	ctx.r11.s64 = ctx.r11.s64 + -2672;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,26956
	ctx.r3.s64 = ctx.r10.s64 + 26956;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82aabf68
	ctx.lr = 0x82AE582C;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE5840"))) PPC_WEAK_FUNC(sub_82AE5840);
PPC_FUNC_IMPL(__imp__sub_82AE5840) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,26488
	ctx.r5.s64 = ctx.r10.s64 + 26488;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-9592
	ctx.r4.s64 = ctx.r10.s64 + -9592;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,26992
	ctx.r3.s64 = ctx.r10.s64 + 26992;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,240
	ctx.r6.s64 = 240;
	// bl 0x82aabf68
	ctx.lr = 0x82AE588C;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE58A0"))) PPC_WEAK_FUNC(sub_82AE58A0);
PPC_FUNC_IMPL(__imp__sub_82AE58A0) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,26452
	ctx.r5.s64 = ctx.r10.s64 + 26452;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,29712
	ctx.r4.s64 = ctx.r10.s64 + 29712;
	// addi r11,r11,-2580
	ctx.r11.s64 = ctx.r11.s64 + -2580;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,27028
	ctx.r3.s64 = ctx.r10.s64 + 27028;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,304
	ctx.r6.s64 = 304;
	// bl 0x82aabf68
	ctx.lr = 0x82AE58F4;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE5908"))) PPC_WEAK_FUNC(sub_82AE5908);
PPC_FUNC_IMPL(__imp__sub_82AE5908) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,20892
	ctx.r5.s64 = ctx.r10.s64 + 20892;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-11528
	ctx.r4.s64 = ctx.r10.s64 + -11528;
	// addi r11,r11,-2556
	ctx.r11.s64 = ctx.r11.s64 + -2556;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,27064
	ctx.r3.s64 = ctx.r10.s64 + 27064;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82aabf68
	ctx.lr = 0x82AE595C;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE5970"))) PPC_WEAK_FUNC(sub_82AE5970);
PPC_FUNC_IMPL(__imp__sub_82AE5970) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r5,r10,20892
	ctx.r5.s64 = ctx.r10.s64 + 20892;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-2344
	ctx.r4.s64 = ctx.r10.s64 + -2344;
	// addi r11,r11,-2464
	ctx.r11.s64 = ctx.r11.s64 + -2464;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,27100
	ctx.r3.s64 = ctx.r10.s64 + 27100;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82aabf68
	ctx.lr = 0x82AE59C4;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE59D8"))) PPC_WEAK_FUNC(sub_82AE59D8);
PPC_FUNC_IMPL(__imp__sub_82AE59D8) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r5,r10,26056
	ctx.r5.s64 = ctx.r10.s64 + 26056;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-9784
	ctx.r4.s64 = ctx.r10.s64 + -9784;
	// addi r11,r11,-2280
	ctx.r11.s64 = ctx.r11.s64 + -2280;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,27136
	ctx.r3.s64 = ctx.r10.s64 + 27136;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,160
	ctx.r6.s64 = 160;
	// bl 0x82aabf68
	ctx.lr = 0x82AE5A2C;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE5A40"))) PPC_WEAK_FUNC(sub_82AE5A40);
PPC_FUNC_IMPL(__imp__sub_82AE5A40) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r5,r10,26596
	ctx.r5.s64 = ctx.r10.s64 + 26596;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-2056
	ctx.r4.s64 = ctx.r10.s64 + -2056;
	// addi r11,r11,-2136
	ctx.r11.s64 = ctx.r11.s64 + -2136;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,27172
	ctx.r3.s64 = ctx.r10.s64 + 27172;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82aabf68
	ctx.lr = 0x82AE5A94;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE5AA8"))) PPC_WEAK_FUNC(sub_82AE5AA8);
PPC_FUNC_IMPL(__imp__sub_82AE5AA8) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,20892
	ctx.r5.s64 = ctx.r10.s64 + 20892;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-1952
	ctx.r4.s64 = ctx.r10.s64 + -1952;
	// addi r11,r11,-2012
	ctx.r11.s64 = ctx.r11.s64 + -2012;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,27208
	ctx.r3.s64 = ctx.r10.s64 + 27208;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82aabf68
	ctx.lr = 0x82AE5AFC;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE5B10"))) PPC_WEAK_FUNC(sub_82AE5B10);
PPC_FUNC_IMPL(__imp__sub_82AE5B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// addi r10,r10,23304
	ctx.r10.s64 = ctx.r10.s64 + 23304;
	// lwz r11,23296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23296);
	// stw r11,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE5B28"))) PPC_WEAK_FUNC(sub_82AE5B28);
PPC_FUNC_IMPL(__imp__sub_82AE5B28) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r9,r10,-1668
	ctx.r9.s64 = ctx.r10.s64 + -1668;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r5,r10,20892
	ctx.r5.s64 = ctx.r10.s64 + 20892;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,23304
	ctx.r11.s64 = ctx.r11.s64 + 23304;
	// addi r4,r10,-1640
	ctx.r4.s64 = ctx.r10.s64 + -1640;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,27244
	ctx.r3.s64 = ctx.r10.s64 + 27244;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,160
	ctx.r6.s64 = 160;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82aabf68
	ctx.lr = 0x82AE5B80;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE5B90"))) PPC_WEAK_FUNC(sub_82AE5B90);
PPC_FUNC_IMPL(__imp__sub_82AE5B90) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,20892
	ctx.r5.s64 = ctx.r10.s64 + 20892;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-1556
	ctx.r4.s64 = ctx.r10.s64 + -1556;
	// addi r11,r11,-1596
	ctx.r11.s64 = ctx.r11.s64 + -1596;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,27280
	ctx.r3.s64 = ctx.r10.s64 + 27280;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82aabf68
	ctx.lr = 0x82AE5BE4;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE5BF8"))) PPC_WEAK_FUNC(sub_82AE5BF8);
PPC_FUNC_IMPL(__imp__sub_82AE5BF8) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r5,r10,26560
	ctx.r5.s64 = ctx.r10.s64 + 26560;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-1348
	ctx.r4.s64 = ctx.r10.s64 + -1348;
	// addi r11,r11,-1448
	ctx.r11.s64 = ctx.r11.s64 + -1448;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,27316
	ctx.r3.s64 = ctx.r10.s64 + 27316;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82aabf68
	ctx.lr = 0x82AE5C4C;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE5C60"))) PPC_WEAK_FUNC(sub_82AE5C60);
PPC_FUNC_IMPL(__imp__sub_82AE5C60) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,26488
	ctx.r5.s64 = ctx.r10.s64 + 26488;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-9064
	ctx.r4.s64 = ctx.r10.s64 + -9064;
	// addi r11,r11,-1288
	ctx.r11.s64 = ctx.r11.s64 + -1288;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,27352
	ctx.r3.s64 = ctx.r10.s64 + 27352;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,256
	ctx.r6.s64 = 256;
	// bl 0x82aabf68
	ctx.lr = 0x82AE5CB4;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE5CC8"))) PPC_WEAK_FUNC(sub_82AE5CC8);
PPC_FUNC_IMPL(__imp__sub_82AE5CC8) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,20892
	ctx.r5.s64 = ctx.r10.s64 + 20892;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-11360
	ctx.r4.s64 = ctx.r10.s64 + -11360;
	// addi r11,r11,-1240
	ctx.r11.s64 = ctx.r11.s64 + -1240;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,27388
	ctx.r3.s64 = ctx.r10.s64 + 27388;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,76
	ctx.r6.s64 = 76;
	// bl 0x82aabf68
	ctx.lr = 0x82AE5D1C;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE5D30"))) PPC_WEAK_FUNC(sub_82AE5D30);
PPC_FUNC_IMPL(__imp__sub_82AE5D30) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,27352
	ctx.r5.s64 = ctx.r10.s64 + 27352;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-8756
	ctx.r4.s64 = ctx.r10.s64 + -8756;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,27424
	ctx.r3.s64 = ctx.r10.s64 + 27424;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// bl 0x82aabf68
	ctx.lr = 0x82AE5D7C;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE5D90"))) PPC_WEAK_FUNC(sub_82AE5D90);
PPC_FUNC_IMPL(__imp__sub_82AE5D90) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,26524
	ctx.r5.s64 = ctx.r10.s64 + 26524;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-9524
	ctx.r4.s64 = ctx.r10.s64 + -9524;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,27460
	ctx.r3.s64 = ctx.r10.s64 + 27460;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82aabf68
	ctx.lr = 0x82AE5DDC;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE5DF0"))) PPC_WEAK_FUNC(sub_82AE5DF0);
PPC_FUNC_IMPL(__imp__sub_82AE5DF0) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,20676
	ctx.r5.s64 = ctx.r10.s64 + 20676;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-1180
	ctx.r4.s64 = ctx.r10.s64 + -1180;
	// addi r11,r11,-1200
	ctx.r11.s64 = ctx.r11.s64 + -1200;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,27496
	ctx.r3.s64 = ctx.r10.s64 + 27496;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82aabf68
	ctx.lr = 0x82AE5E44;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE5E58"))) PPC_WEAK_FUNC(sub_82AE5E58);
PPC_FUNC_IMPL(__imp__sub_82AE5E58) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,20712
	ctx.r5.s64 = ctx.r10.s64 + 20712;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-1092
	ctx.r4.s64 = ctx.r10.s64 + -1092;
	// addi r11,r11,-1132
	ctx.r11.s64 = ctx.r11.s64 + -1132;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,27532
	ctx.r3.s64 = ctx.r10.s64 + 27532;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,56
	ctx.r6.s64 = 56;
	// bl 0x82aabf68
	ctx.lr = 0x82AE5EAC;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE5EC0"))) PPC_WEAK_FUNC(sub_82AE5EC0);
PPC_FUNC_IMPL(__imp__sub_82AE5EC0) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,26452
	ctx.r5.s64 = ctx.r10.s64 + 26452;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-1044
	ctx.r4.s64 = ctx.r10.s64 + -1044;
	// addi r11,r11,-1064
	ctx.r11.s64 = ctx.r11.s64 + -1064;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,27568
	ctx.r3.s64 = ctx.r10.s64 + 27568;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,304
	ctx.r6.s64 = 304;
	// bl 0x82aabf68
	ctx.lr = 0x82AE5F14;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE5F28"))) PPC_WEAK_FUNC(sub_82AE5F28);
PPC_FUNC_IMPL(__imp__sub_82AE5F28) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r5,r10,20892
	ctx.r5.s64 = ctx.r10.s64 + 20892;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-736
	ctx.r4.s64 = ctx.r10.s64 + -736;
	// addi r11,r11,-896
	ctx.r11.s64 = ctx.r11.s64 + -896;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,27604
	ctx.r3.s64 = ctx.r10.s64 + 27604;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,36
	ctx.r6.s64 = 36;
	// bl 0x82aabf68
	ctx.lr = 0x82AE5F7C;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE5F90"))) PPC_WEAK_FUNC(sub_82AE5F90);
PPC_FUNC_IMPL(__imp__sub_82AE5F90) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,26488
	ctx.r5.s64 = ctx.r10.s64 + 26488;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-9364
	ctx.r4.s64 = ctx.r10.s64 + -9364;
	// addi r11,r11,-688
	ctx.r11.s64 = ctx.r11.s64 + -688;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,27640
	ctx.r3.s64 = ctx.r10.s64 + 27640;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,256
	ctx.r6.s64 = 256;
	// bl 0x82aabf68
	ctx.lr = 0x82AE5FE4;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE5FF8"))) PPC_WEAK_FUNC(sub_82AE5FF8);
PPC_FUNC_IMPL(__imp__sub_82AE5FF8) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,20892
	ctx.r5.s64 = ctx.r10.s64 + 20892;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-12024
	ctx.r4.s64 = ctx.r10.s64 + -12024;
	// addi r11,r11,-668
	ctx.r11.s64 = ctx.r11.s64 + -668;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,27676
	ctx.r3.s64 = ctx.r10.s64 + 27676;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82aabf68
	ctx.lr = 0x82AE604C;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE6060"))) PPC_WEAK_FUNC(sub_82AE6060);
PPC_FUNC_IMPL(__imp__sub_82AE6060) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,20640
	ctx.r5.s64 = ctx.r10.s64 + 20640;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-8592
	ctx.r4.s64 = ctx.r10.s64 + -8592;
	// addi r11,r11,-596
	ctx.r11.s64 = ctx.r11.s64 + -596;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,27712
	ctx.r3.s64 = ctx.r10.s64 + 27712;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,160
	ctx.r6.s64 = 160;
	// bl 0x82aabf68
	ctx.lr = 0x82AE60B4;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE60C8"))) PPC_WEAK_FUNC(sub_82AE60C8);
PPC_FUNC_IMPL(__imp__sub_82AE60C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8284a658
	ctx.lr = 0x82AE60E0;
	sub_8284A658(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r8,-32083
	ctx.r8.s64 = -2102591488;
	// addi r10,r11,-1044
	ctx.r10.s64 = ctx.r11.s64 + -1044;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r9,r11,192
	ctx.r9.s64 = ctx.r11.s64 + 192;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// addi r11,r11,27748
	ctx.r11.s64 = ctx.r11.s64 + 27748;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,4512
	ctx.r10.s64 = ctx.r8.s64 + 4512;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE6120"))) PPC_WEAK_FUNC(sub_82AE6120);
PPC_FUNC_IMPL(__imp__sub_82AE6120) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,28336
	ctx.r5.s64 = ctx.r10.s64 + 28336;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,448
	ctx.r4.s64 = ctx.r10.s64 + 448;
	// addi r11,r11,388
	ctx.r11.s64 = ctx.r11.s64 + 388;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,27760
	ctx.r3.s64 = ctx.r10.s64 + 27760;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,36
	ctx.r6.s64 = 36;
	// bl 0x82aabf68
	ctx.lr = 0x82AE6174;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE6188"))) PPC_WEAK_FUNC(sub_82AE6188);
PPC_FUNC_IMPL(__imp__sub_82AE6188) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r5,r10,29896
	ctx.r5.s64 = ctx.r10.s64 + 29896;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,584
	ctx.r4.s64 = ctx.r10.s64 + 584;
	// addi r11,r11,504
	ctx.r11.s64 = ctx.r11.s64 + 504;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,27796
	ctx.r3.s64 = ctx.r10.s64 + 27796;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82aabf68
	ctx.lr = 0x82AE61DC;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE61F0"))) PPC_WEAK_FUNC(sub_82AE61F0);
PPC_FUNC_IMPL(__imp__sub_82AE61F0) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,6
	ctx.r8.s64 = 6;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,804
	ctx.r4.s64 = ctx.r10.s64 + 804;
	// addi r11,r11,664
	ctx.r11.s64 = ctx.r11.s64 + 664;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,27832
	ctx.r3.s64 = ctx.r10.s64 + 27832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE6240;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE6250"))) PPC_WEAK_FUNC(sub_82AE6250);
PPC_FUNC_IMPL(__imp__sub_82AE6250) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,28120
	ctx.r5.s64 = ctx.r10.s64 + 28120;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,840
	ctx.r4.s64 = ctx.r10.s64 + 840;
	// addi r11,r11,784
	ctx.r11.s64 = ctx.r11.s64 + 784;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,27868
	ctx.r3.s64 = ctx.r10.s64 + 27868;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,80
	ctx.r6.s64 = 80;
	// bl 0x82aabf68
	ctx.lr = 0x82AE62A4;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE62B8"))) PPC_WEAK_FUNC(sub_82AE62B8);
PPC_FUNC_IMPL(__imp__sub_82AE62B8) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,1016
	ctx.r4.s64 = ctx.r10.s64 + 1016;
	// addi r11,r11,872
	ctx.r11.s64 = ctx.r11.s64 + 872;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,27904
	ctx.r3.s64 = ctx.r10.s64 + 27904;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE6308;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE6318"))) PPC_WEAK_FUNC(sub_82AE6318);
PPC_FUNC_IMPL(__imp__sub_82AE6318) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r5,r10,28444
	ctx.r5.s64 = ctx.r10.s64 + 28444;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,1044
	ctx.r4.s64 = ctx.r10.s64 + 1044;
	// addi r11,r11,936
	ctx.r11.s64 = ctx.r11.s64 + 936;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,27940
	ctx.r3.s64 = ctx.r10.s64 + 27940;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,56
	ctx.r6.s64 = 56;
	// bl 0x82aabf68
	ctx.lr = 0x82AE636C;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE6380"))) PPC_WEAK_FUNC(sub_82AE6380);
PPC_FUNC_IMPL(__imp__sub_82AE6380) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,4
	ctx.r8.s64 = 4;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,1184
	ctx.r4.s64 = ctx.r10.s64 + 1184;
	// addi r11,r11,1104
	ctx.r11.s64 = ctx.r11.s64 + 1104;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,27976
	ctx.r3.s64 = ctx.r10.s64 + 27976;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE63D0;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE63E0"))) PPC_WEAK_FUNC(sub_82AE63E0);
PPC_FUNC_IMPL(__imp__sub_82AE63E0) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,1316
	ctx.r4.s64 = ctx.r10.s64 + 1316;
	// addi r11,r11,1236
	ctx.r11.s64 = ctx.r11.s64 + 1236;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,28012
	ctx.r3.s64 = ctx.r10.s64 + 28012;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE6430;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE6440"))) PPC_WEAK_FUNC(sub_82AE6440);
PPC_FUNC_IMPL(__imp__sub_82AE6440) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,28480
	ctx.r5.s64 = ctx.r10.s64 + 28480;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,1336
	ctx.r4.s64 = ctx.r10.s64 + 1336;
	// addi r11,r11,1276
	ctx.r11.s64 = ctx.r11.s64 + 1276;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,28048
	ctx.r3.s64 = ctx.r10.s64 + 28048;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82aabf68
	ctx.lr = 0x82AE6494;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE64A8"))) PPC_WEAK_FUNC(sub_82AE64A8);
PPC_FUNC_IMPL(__imp__sub_82AE64A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// addi r10,r10,23608
	ctx.r10.s64 = ctx.r10.s64 + 23608;
	// lwz r11,23600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23600);
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// stw r11,108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 108, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE64C8"))) PPC_WEAK_FUNC(sub_82AE64C8);
PPC_FUNC_IMPL(__imp__sub_82AE64C8) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,13
	ctx.r8.s64 = 13;
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r4,r10,2004
	ctx.r4.s64 = ctx.r10.s64 + 2004;
	// addi r11,r11,23608
	ctx.r11.s64 = ctx.r11.s64 + 23608;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,28084
	ctx.r3.s64 = ctx.r10.s64 + 28084;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE6518;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE6528"))) PPC_WEAK_FUNC(sub_82AE6528);
PPC_FUNC_IMPL(__imp__sub_82AE6528) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r9,r10,1744
	ctx.r9.s64 = ctx.r10.s64 + 1744;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r5,r10,28444
	ctx.r5.s64 = ctx.r10.s64 + 28444;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,1768
	ctx.r11.s64 = ctx.r11.s64 + 1768;
	// addi r4,r10,-29508
	ctx.r4.s64 = ctx.r10.s64 + -29508;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,28120
	ctx.r3.s64 = ctx.r10.s64 + 28120;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82aabf68
	ctx.lr = 0x82AE6580;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE6590"))) PPC_WEAK_FUNC(sub_82AE6590);
PPC_FUNC_IMPL(__imp__sub_82AE6590) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,2044
	ctx.r4.s64 = ctx.r10.s64 + 2044;
	// addi r11,r11,2024
	ctx.r11.s64 = ctx.r11.s64 + 2024;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,28156
	ctx.r3.s64 = ctx.r10.s64 + 28156;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE65E0;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE65F0"))) PPC_WEAK_FUNC(sub_82AE65F0);
PPC_FUNC_IMPL(__imp__sub_82AE65F0) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,2140
	ctx.r4.s64 = ctx.r10.s64 + 2140;
	// addi r11,r11,2080
	ctx.r11.s64 = ctx.r11.s64 + 2080;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,28192
	ctx.r3.s64 = ctx.r10.s64 + 28192;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE6640;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE6650"))) PPC_WEAK_FUNC(sub_82AE6650);
PPC_FUNC_IMPL(__imp__sub_82AE6650) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,28444
	ctx.r5.s64 = ctx.r10.s64 + 28444;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,2164
	ctx.r4.s64 = ctx.r10.s64 + 2164;
	// addi r11,r11,2120
	ctx.r11.s64 = ctx.r11.s64 + 2120;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,28228
	ctx.r3.s64 = ctx.r10.s64 + 28228;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82aabf68
	ctx.lr = 0x82AE66A4;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE66B8"))) PPC_WEAK_FUNC(sub_82AE66B8);
PPC_FUNC_IMPL(__imp__sub_82AE66B8) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,2404
	ctx.r4.s64 = ctx.r10.s64 + 2404;
	// addi r11,r11,2240
	ctx.r11.s64 = ctx.r11.s64 + 2240;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,28264
	ctx.r3.s64 = ctx.r10.s64 + 28264;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE6708;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE6718"))) PPC_WEAK_FUNC(sub_82AE6718);
PPC_FUNC_IMPL(__imp__sub_82AE6718) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r5,r10,28696
	ctx.r5.s64 = ctx.r10.s64 + 28696;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-29920
	ctx.r4.s64 = ctx.r10.s64 + -29920;
	// addi r11,r11,2304
	ctx.r11.s64 = ctx.r11.s64 + 2304;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,28300
	ctx.r3.s64 = ctx.r10.s64 + 28300;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,80
	ctx.r6.s64 = 80;
	// bl 0x82aabf68
	ctx.lr = 0x82AE676C;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE6780"))) PPC_WEAK_FUNC(sub_82AE6780);
PPC_FUNC_IMPL(__imp__sub_82AE6780) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,4
	ctx.r8.s64 = 4;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,2536
	ctx.r4.s64 = ctx.r10.s64 + 2536;
	// addi r11,r11,2456
	ctx.r11.s64 = ctx.r11.s64 + 2456;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,28336
	ctx.r3.s64 = ctx.r10.s64 + 28336;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE67D0;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE67E0"))) PPC_WEAK_FUNC(sub_82AE67E0);
PPC_FUNC_IMPL(__imp__sub_82AE67E0) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,28480
	ctx.r5.s64 = ctx.r10.s64 + 28480;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,2548
	ctx.r4.s64 = ctx.r10.s64 + 2548;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,28372
	ctx.r3.s64 = ctx.r10.s64 + 28372;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82aabf68
	ctx.lr = 0x82AE682C;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE6840"))) PPC_WEAK_FUNC(sub_82AE6840);
PPC_FUNC_IMPL(__imp__sub_82AE6840) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r10,2568
	ctx.r4.s64 = ctx.r10.s64 + 2568;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,28408
	ctx.r3.s64 = ctx.r10.s64 + 28408;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE6888;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE6898"))) PPC_WEAK_FUNC(sub_82AE6898);
PPC_FUNC_IMPL(__imp__sub_82AE6898) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,28480
	ctx.r5.s64 = ctx.r10.s64 + 28480;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,2628
	ctx.r4.s64 = ctx.r10.s64 + 2628;
	// addi r11,r11,2608
	ctx.r11.s64 = ctx.r11.s64 + 2608;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,28444
	ctx.r3.s64 = ctx.r10.s64 + 28444;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82aabf68
	ctx.lr = 0x82AE68EC;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE6900"))) PPC_WEAK_FUNC(sub_82AE6900);
PPC_FUNC_IMPL(__imp__sub_82AE6900) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,21736
	ctx.r5.s64 = ctx.r10.s64 + 21736;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,2668
	ctx.r4.s64 = ctx.r10.s64 + 2668;
	// addi r11,r11,2648
	ctx.r11.s64 = ctx.r11.s64 + 2648;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,28480
	ctx.r3.s64 = ctx.r10.s64 + 28480;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82aabf68
	ctx.lr = 0x82AE6954;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE6968"))) PPC_WEAK_FUNC(sub_82AE6968);
PPC_FUNC_IMPL(__imp__sub_82AE6968) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r5,r10,28660
	ctx.r5.s64 = ctx.r10.s64 + 28660;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,2944
	ctx.r4.s64 = ctx.r10.s64 + 2944;
	// addi r11,r11,2800
	ctx.r11.s64 = ctx.r11.s64 + 2800;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,28516
	ctx.r3.s64 = ctx.r10.s64 + 28516;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82aabf68
	ctx.lr = 0x82AE69BC;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE69D0"))) PPC_WEAK_FUNC(sub_82AE69D0);
PPC_FUNC_IMPL(__imp__sub_82AE69D0) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r10,2972
	ctx.r4.s64 = ctx.r10.s64 + 2972;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,28552
	ctx.r3.s64 = ctx.r10.s64 + 28552;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE6A18;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE6A28"))) PPC_WEAK_FUNC(sub_82AE6A28);
PPC_FUNC_IMPL(__imp__sub_82AE6A28) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r10,3000
	ctx.r4.s64 = ctx.r10.s64 + 3000;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,28588
	ctx.r3.s64 = ctx.r10.s64 + 28588;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE6A70;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE6A80"))) PPC_WEAK_FUNC(sub_82AE6A80);
PPC_FUNC_IMPL(__imp__sub_82AE6A80) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,28480
	ctx.r5.s64 = ctx.r10.s64 + 28480;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,3024
	ctx.r4.s64 = ctx.r10.s64 + 3024;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,28624
	ctx.r3.s64 = ctx.r10.s64 + 28624;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82aabf68
	ctx.lr = 0x82AE6ACC;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE6AE0"))) PPC_WEAK_FUNC(sub_82AE6AE0);
PPC_FUNC_IMPL(__imp__sub_82AE6AE0) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,28480
	ctx.r5.s64 = ctx.r10.s64 + 28480;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,3048
	ctx.r4.s64 = ctx.r10.s64 + 3048;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,28660
	ctx.r3.s64 = ctx.r10.s64 + 28660;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82aabf68
	ctx.lr = 0x82AE6B2C;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE6B40"))) PPC_WEAK_FUNC(sub_82AE6B40);
PPC_FUNC_IMPL(__imp__sub_82AE6B40) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,28372
	ctx.r5.s64 = ctx.r10.s64 + 28372;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,3088
	ctx.r4.s64 = ctx.r10.s64 + 3088;
	// addi r11,r11,3068
	ctx.r11.s64 = ctx.r11.s64 + 3068;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,28696
	ctx.r3.s64 = ctx.r10.s64 + 28696;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82aabf68
	ctx.lr = 0x82AE6B94;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE6BA8"))) PPC_WEAK_FUNC(sub_82AE6BA8);
PPC_FUNC_IMPL(__imp__sub_82AE6BA8) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r10,3104
	ctx.r4.s64 = ctx.r10.s64 + 3104;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,28732
	ctx.r3.s64 = ctx.r10.s64 + 28732;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE6BF0;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE6C00"))) PPC_WEAK_FUNC(sub_82AE6C00);
PPC_FUNC_IMPL(__imp__sub_82AE6C00) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,28480
	ctx.r5.s64 = ctx.r10.s64 + 28480;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,3172
	ctx.r4.s64 = ctx.r10.s64 + 3172;
	// addi r11,r11,3152
	ctx.r11.s64 = ctx.r11.s64 + 3152;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,28768
	ctx.r3.s64 = ctx.r10.s64 + 28768;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82aabf68
	ctx.lr = 0x82AE6C54;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE6C68"))) PPC_WEAK_FUNC(sub_82AE6C68);
PPC_FUNC_IMPL(__imp__sub_82AE6C68) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,28696
	ctx.r5.s64 = ctx.r10.s64 + 28696;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-29272
	ctx.r4.s64 = ctx.r10.s64 + -29272;
	// addi r11,r11,3212
	ctx.r11.s64 = ctx.r11.s64 + 3212;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,28804
	ctx.r3.s64 = ctx.r10.s64 + 28804;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82aabf68
	ctx.lr = 0x82AE6CBC;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE6CD0"))) PPC_WEAK_FUNC(sub_82AE6CD0);
PPC_FUNC_IMPL(__imp__sub_82AE6CD0) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,28444
	ctx.r5.s64 = ctx.r10.s64 + 28444;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,3324
	ctx.r4.s64 = ctx.r10.s64 + 3324;
	// addi r11,r11,3284
	ctx.r11.s64 = ctx.r11.s64 + 3284;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,28840
	ctx.r3.s64 = ctx.r10.s64 + 28840;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82aabf68
	ctx.lr = 0x82AE6D24;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE6D38"))) PPC_WEAK_FUNC(sub_82AE6D38);
PPC_FUNC_IMPL(__imp__sub_82AE6D38) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,28768
	ctx.r5.s64 = ctx.r10.s64 + 28768;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,3404
	ctx.r4.s64 = ctx.r10.s64 + 3404;
	// addi r11,r11,3384
	ctx.r11.s64 = ctx.r11.s64 + 3384;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,28876
	ctx.r3.s64 = ctx.r10.s64 + 28876;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82aabf68
	ctx.lr = 0x82AE6D8C;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE6DA0"))) PPC_WEAK_FUNC(sub_82AE6DA0);
PPC_FUNC_IMPL(__imp__sub_82AE6DA0) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,28480
	ctx.r5.s64 = ctx.r10.s64 + 28480;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,3512
	ctx.r4.s64 = ctx.r10.s64 + 3512;
	// addi r11,r11,3452
	ctx.r11.s64 = ctx.r11.s64 + 3452;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,28912
	ctx.r3.s64 = ctx.r10.s64 + 28912;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82aabf68
	ctx.lr = 0x82AE6DF4;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE6E08"))) PPC_WEAK_FUNC(sub_82AE6E08);
PPC_FUNC_IMPL(__imp__sub_82AE6E08) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,28516
	ctx.r5.s64 = ctx.r10.s64 + 28516;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,3616
	ctx.r4.s64 = ctx.r10.s64 + 3616;
	// addi r11,r11,3568
	ctx.r11.s64 = ctx.r11.s64 + 3568;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,28948
	ctx.r3.s64 = ctx.r10.s64 + 28948;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82aabf68
	ctx.lr = 0x82AE6E5C;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE6E70"))) PPC_WEAK_FUNC(sub_82AE6E70);
PPC_FUNC_IMPL(__imp__sub_82AE6E70) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,28696
	ctx.r5.s64 = ctx.r10.s64 + 28696;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-4076
	ctx.r4.s64 = ctx.r10.s64 + -4076;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,28984
	ctx.r3.s64 = ctx.r10.s64 + 28984;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82aabf68
	ctx.lr = 0x82AE6EBC;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE6ED0"))) PPC_WEAK_FUNC(sub_82AE6ED0);
PPC_FUNC_IMPL(__imp__sub_82AE6ED0) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,28660
	ctx.r5.s64 = ctx.r10.s64 + 28660;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,3720
	ctx.r4.s64 = ctx.r10.s64 + 3720;
	// addi r11,r11,3660
	ctx.r11.s64 = ctx.r11.s64 + 3660;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29020
	ctx.r3.s64 = ctx.r10.s64 + 29020;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82aabf68
	ctx.lr = 0x82AE6F24;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE6F38"))) PPC_WEAK_FUNC(sub_82AE6F38);
PPC_FUNC_IMPL(__imp__sub_82AE6F38) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,21192
	ctx.r5.s64 = ctx.r10.s64 + 21192;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-4564
	ctx.r4.s64 = ctx.r10.s64 + -4564;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,29056
	ctx.r3.s64 = ctx.r10.s64 + 29056;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82aabf68
	ctx.lr = 0x82AE6F84;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE6F98"))) PPC_WEAK_FUNC(sub_82AE6F98);
PPC_FUNC_IMPL(__imp__sub_82AE6F98) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,28372
	ctx.r5.s64 = ctx.r10.s64 + 28372;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,3796
	ctx.r4.s64 = ctx.r10.s64 + 3796;
	// addi r11,r11,3756
	ctx.r11.s64 = ctx.r11.s64 + 3756;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29092
	ctx.r3.s64 = ctx.r10.s64 + 29092;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,144
	ctx.r6.s64 = 144;
	// bl 0x82aabf68
	ctx.lr = 0x82AE6FEC;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE7000"))) PPC_WEAK_FUNC(sub_82AE7000);
PPC_FUNC_IMPL(__imp__sub_82AE7000) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,28768
	ctx.r5.s64 = ctx.r10.s64 + 28768;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-29716
	ctx.r4.s64 = ctx.r10.s64 + -29716;
	// addi r11,r11,3824
	ctx.r11.s64 = ctx.r11.s64 + 3824;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29128
	ctx.r3.s64 = ctx.r10.s64 + 29128;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82aabf68
	ctx.lr = 0x82AE7054;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE7068"))) PPC_WEAK_FUNC(sub_82AE7068);
PPC_FUNC_IMPL(__imp__sub_82AE7068) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,21192
	ctx.r5.s64 = ctx.r10.s64 + 21192;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,3928
	ctx.r4.s64 = ctx.r10.s64 + 3928;
	// addi r11,r11,3888
	ctx.r11.s64 = ctx.r11.s64 + 3888;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29164
	ctx.r3.s64 = ctx.r10.s64 + 29164;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,156
	ctx.r6.s64 = 156;
	// bl 0x82aabf68
	ctx.lr = 0x82AE70BC;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE70D0"))) PPC_WEAK_FUNC(sub_82AE70D0);
PPC_FUNC_IMPL(__imp__sub_82AE70D0) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,28120
	ctx.r5.s64 = ctx.r10.s64 + 28120;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,3944
	ctx.r4.s64 = ctx.r10.s64 + 3944;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,29200
	ctx.r3.s64 = ctx.r10.s64 + 29200;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82aabf68
	ctx.lr = 0x82AE711C;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE7130"))) PPC_WEAK_FUNC(sub_82AE7130);
PPC_FUNC_IMPL(__imp__sub_82AE7130) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r9,r10,4248
	ctx.r9.s64 = ctx.r10.s64 + 4248;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r5,r10,28696
	ctx.r5.s64 = ctx.r10.s64 + 28696;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,4264
	ctx.r11.s64 = ctx.r11.s64 + 4264;
	// addi r4,r10,-5040
	ctx.r4.s64 = ctx.r10.s64 + -5040;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,29236
	ctx.r3.s64 = ctx.r10.s64 + 29236;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,96
	ctx.r6.s64 = 96;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82aabf68
	ctx.lr = 0x82AE7188;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE7198"))) PPC_WEAK_FUNC(sub_82AE7198);
PPC_FUNC_IMPL(__imp__sub_82AE7198) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,28696
	ctx.r5.s64 = ctx.r10.s64 + 28696;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,4416
	ctx.r4.s64 = ctx.r10.s64 + 4416;
	// addi r11,r11,4376
	ctx.r11.s64 = ctx.r11.s64 + 4376;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29272
	ctx.r3.s64 = ctx.r10.s64 + 29272;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82aabf68
	ctx.lr = 0x82AE71EC;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE7200"))) PPC_WEAK_FUNC(sub_82AE7200);
PPC_FUNC_IMPL(__imp__sub_82AE7200) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,28696
	ctx.r5.s64 = ctx.r10.s64 + 28696;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,4480
	ctx.r4.s64 = ctx.r10.s64 + 4480;
	// addi r11,r11,4440
	ctx.r11.s64 = ctx.r11.s64 + 4440;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29308
	ctx.r3.s64 = ctx.r10.s64 + 29308;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82aabf68
	ctx.lr = 0x82AE7254;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE7268"))) PPC_WEAK_FUNC(sub_82AE7268);
PPC_FUNC_IMPL(__imp__sub_82AE7268) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,28444
	ctx.r5.s64 = ctx.r10.s64 + 28444;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,4596
	ctx.r4.s64 = ctx.r10.s64 + 4596;
	// addi r11,r11,4536
	ctx.r11.s64 = ctx.r11.s64 + 4536;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29344
	ctx.r3.s64 = ctx.r10.s64 + 29344;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82aabf68
	ctx.lr = 0x82AE72BC;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE72D0"))) PPC_WEAK_FUNC(sub_82AE72D0);
PPC_FUNC_IMPL(__imp__sub_82AE72D0) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,28228
	ctx.r5.s64 = ctx.r10.s64 + 28228;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,4688
	ctx.r4.s64 = ctx.r10.s64 + 4688;
	// addi r11,r11,4668
	ctx.r11.s64 = ctx.r11.s64 + 4668;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29380
	ctx.r3.s64 = ctx.r10.s64 + 29380;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82aabf68
	ctx.lr = 0x82AE7324;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE7338"))) PPC_WEAK_FUNC(sub_82AE7338);
PPC_FUNC_IMPL(__imp__sub_82AE7338) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,21192
	ctx.r5.s64 = ctx.r10.s64 + 21192;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,4748
	ctx.r4.s64 = ctx.r10.s64 + 4748;
	// addi r11,r11,4728
	ctx.r11.s64 = ctx.r11.s64 + 4728;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29416
	ctx.r3.s64 = ctx.r10.s64 + 29416;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,36
	ctx.r6.s64 = 36;
	// bl 0x82aabf68
	ctx.lr = 0x82AE738C;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE73A0"))) PPC_WEAK_FUNC(sub_82AE73A0);
PPC_FUNC_IMPL(__imp__sub_82AE73A0) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,28696
	ctx.r5.s64 = ctx.r10.s64 + 28696;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-4168
	ctx.r4.s64 = ctx.r10.s64 + -4168;
	// addi r11,r11,4772
	ctx.r11.s64 = ctx.r11.s64 + 4772;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29452
	ctx.r3.s64 = ctx.r10.s64 + 29452;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82aabf68
	ctx.lr = 0x82AE73F4;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE7408"))) PPC_WEAK_FUNC(sub_82AE7408);
PPC_FUNC_IMPL(__imp__sub_82AE7408) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,28480
	ctx.r5.s64 = ctx.r10.s64 + 28480;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-29464
	ctx.r4.s64 = ctx.r10.s64 + -29464;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29488
	ctx.r3.s64 = ctx.r10.s64 + 29488;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82aabf68
	ctx.lr = 0x82AE745C;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE7470"))) PPC_WEAK_FUNC(sub_82AE7470);
PPC_FUNC_IMPL(__imp__sub_82AE7470) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,28696
	ctx.r5.s64 = ctx.r10.s64 + 28696;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-4676
	ctx.r4.s64 = ctx.r10.s64 + -4676;
	// addi r11,r11,4884
	ctx.r11.s64 = ctx.r11.s64 + 4884;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29524
	ctx.r3.s64 = ctx.r10.s64 + 29524;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82aabf68
	ctx.lr = 0x82AE74C4;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE74D8"))) PPC_WEAK_FUNC(sub_82AE74D8);
PPC_FUNC_IMPL(__imp__sub_82AE74D8) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82abd090
	ctx.lr = 0x82AE74EC;
	sub_82ABD090(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r8,-32083
	ctx.r8.s64 = -2102591488;
	// addi r10,r11,3324
	ctx.r10.s64 = ctx.r11.s64 + 3324;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r9,r11,4932
	ctx.r9.s64 = ctx.r11.s64 + 4932;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// addi r11,r11,29560
	ctx.r11.s64 = ctx.r11.s64 + 29560;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,8344
	ctx.r10.s64 = ctx.r8.s64 + 8344;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE7528"))) PPC_WEAK_FUNC(sub_82AE7528);
PPC_FUNC_IMPL(__imp__sub_82AE7528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ad3608
	ctx.lr = 0x82AE7540;
	sub_82AD3608(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r9,-32083
	ctx.r9.s64 = -2102591488;
	// addi r10,r11,840
	ctx.r10.s64 = ctx.r11.s64 + 840;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// addi r11,r11,29572
	ctx.r11.s64 = ctx.r11.s64 + 29572;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r9,16072
	ctx.r10.s64 = ctx.r9.s64 + 16072;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE7578"))) PPC_WEAK_FUNC(sub_82AE7578);
PPC_FUNC_IMPL(__imp__sub_82AE7578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82abc488
	ctx.lr = 0x82AE7590;
	sub_82ABC488(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r8,-32083
	ctx.r8.s64 = -2102591488;
	// addi r10,r11,3944
	ctx.r10.s64 = ctx.r11.s64 + 3944;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r9,r11,5724
	ctx.r9.s64 = ctx.r11.s64 + 5724;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// addi r11,r11,29584
	ctx.r11.s64 = ctx.r11.s64 + 29584;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,23232
	ctx.r10.s64 = ctx.r8.s64 + 23232;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE75D0"))) PPC_WEAK_FUNC(sub_82AE75D0);
PPC_FUNC_IMPL(__imp__sub_82AE75D0) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82abd090
	ctx.lr = 0x82AE75E4;
	sub_82ABD090(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r8,-32083
	ctx.r8.s64 = -2102591488;
	// addi r10,r11,4596
	ctx.r10.s64 = ctx.r11.s64 + 4596;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r9,r11,5964
	ctx.r9.s64 = ctx.r11.s64 + 5964;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// addi r11,r11,29596
	ctx.r11.s64 = ctx.r11.s64 + 29596;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,26784
	ctx.r10.s64 = ctx.r8.s64 + 26784;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE7620"))) PPC_WEAK_FUNC(sub_82AE7620);
PPC_FUNC_IMPL(__imp__sub_82AE7620) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,6708
	ctx.r4.s64 = ctx.r10.s64 + 6708;
	// addi r11,r11,6448
	ctx.r11.s64 = ctx.r11.s64 + 6448;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29608
	ctx.r3.s64 = ctx.r10.s64 + 29608;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE7670;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE7680"))) PPC_WEAK_FUNC(sub_82AE7680);
PPC_FUNC_IMPL(__imp__sub_82AE7680) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,6744
	ctx.r4.s64 = ctx.r10.s64 + 6744;
	// addi r11,r11,6488
	ctx.r11.s64 = ctx.r11.s64 + 6488;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29644
	ctx.r3.s64 = ctx.r10.s64 + 29644;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE76D0;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE76E0"))) PPC_WEAK_FUNC(sub_82AE76E0);
PPC_FUNC_IMPL(__imp__sub_82AE76E0) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,9
	ctx.r8.s64 = 9;
	// addi r5,r10,20892
	ctx.r5.s64 = ctx.r10.s64 + 20892;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,6780
	ctx.r4.s64 = ctx.r10.s64 + 6780;
	// addi r11,r11,6528
	ctx.r11.s64 = ctx.r11.s64 + 6528;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29680
	ctx.r3.s64 = ctx.r10.s64 + 29680;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82aabf68
	ctx.lr = 0x82AE7734;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE7748"))) PPC_WEAK_FUNC(sub_82AE7748);
PPC_FUNC_IMPL(__imp__sub_82AE7748) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,7140
	ctx.r4.s64 = ctx.r10.s64 + 7140;
	// addi r11,r11,6800
	ctx.r11.s64 = ctx.r11.s64 + 6800;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29716
	ctx.r3.s64 = ctx.r10.s64 + 29716;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE7798;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE77A8"))) PPC_WEAK_FUNC(sub_82AE77A8);
PPC_FUNC_IMPL(__imp__sub_82AE77A8) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,7180
	ctx.r4.s64 = ctx.r10.s64 + 7180;
	// addi r11,r11,6860
	ctx.r11.s64 = ctx.r11.s64 + 6860;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29752
	ctx.r3.s64 = ctx.r10.s64 + 29752;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE77F8;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE7808"))) PPC_WEAK_FUNC(sub_82AE7808);
PPC_FUNC_IMPL(__imp__sub_82AE7808) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// addi r11,r11,6920
	ctx.r11.s64 = ctx.r11.s64 + 6920;
	// addi r5,r10,20892
	ctx.r5.s64 = ctx.r10.s64 + 20892;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r9,r11,180
	ctx.r9.s64 = ctx.r11.s64 + 180;
	// li r8,9
	ctx.r8.s64 = 9;
	// addi r4,r10,-3196
	ctx.r4.s64 = ctx.r10.s64 + -3196;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,29788
	ctx.r3.s64 = ctx.r10.s64 + 29788;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,144
	ctx.r6.s64 = 144;
	// bl 0x82aabf68
	ctx.lr = 0x82AE7860;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE7870"))) PPC_WEAK_FUNC(sub_82AE7870);
PPC_FUNC_IMPL(__imp__sub_82AE7870) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,7280
	ctx.r4.s64 = ctx.r10.s64 + 7280;
	// addi r11,r11,7220
	ctx.r11.s64 = ctx.r11.s64 + 7220;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29824
	ctx.r3.s64 = ctx.r10.s64 + 29824;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE78C0;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE78D0"))) PPC_WEAK_FUNC(sub_82AE78D0);
PPC_FUNC_IMPL(__imp__sub_82AE78D0) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,21736
	ctx.r5.s64 = ctx.r10.s64 + 21736;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,7300
	ctx.r4.s64 = ctx.r10.s64 + 7300;
	// addi r11,r11,7240
	ctx.r11.s64 = ctx.r11.s64 + 7240;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29860
	ctx.r3.s64 = ctx.r10.s64 + 29860;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82aabf68
	ctx.lr = 0x82AE7924;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE7938"))) PPC_WEAK_FUNC(sub_82AE7938);
PPC_FUNC_IMPL(__imp__sub_82AE7938) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,7332
	ctx.r4.s64 = ctx.r10.s64 + 7332;
	// addi r11,r11,7312
	ctx.r11.s64 = ctx.r11.s64 + 7312;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29896
	ctx.r3.s64 = ctx.r10.s64 + 29896;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE7988;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE7998"))) PPC_WEAK_FUNC(sub_82AE7998);
PPC_FUNC_IMPL(__imp__sub_82AE7998) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r5,r10,29788
	ctx.r5.s64 = ctx.r10.s64 + 29788;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-3148
	ctx.r4.s64 = ctx.r10.s64 + -3148;
	// addi r11,r11,7424
	ctx.r11.s64 = ctx.r11.s64 + 7424;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29932
	ctx.r3.s64 = ctx.r10.s64 + 29932;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,208
	ctx.r6.s64 = 208;
	// bl 0x82aabf68
	ctx.lr = 0x82AE79EC;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE7A00"))) PPC_WEAK_FUNC(sub_82AE7A00);
PPC_FUNC_IMPL(__imp__sub_82AE7A00) {
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
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,21736
	ctx.r5.s64 = ctx.r10.s64 + 21736;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,7632
	ctx.r4.s64 = ctx.r10.s64 + 7632;
	// addi r11,r11,7572
	ctx.r11.s64 = ctx.r11.s64 + 7572;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29968
	ctx.r3.s64 = ctx.r10.s64 + 29968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,44
	ctx.r6.s64 = 44;
	// bl 0x82aabf68
	ctx.lr = 0x82AE7A54;
	sub_82AABF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE7A68"))) PPC_WEAK_FUNC(sub_82AE7A68);
PPC_FUNC_IMPL(__imp__sub_82AE7A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// addi r11,r11,2360
	ctx.r11.s64 = ctx.r11.s64 + 2360;
	// stw r11,24112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24112, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE7A80"))) PPC_WEAK_FUNC(sub_82AE7A80);
PPC_FUNC_IMPL(__imp__sub_82AE7A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// addi r11,r11,2360
	ctx.r11.s64 = ctx.r11.s64 + 2360;
	// stw r11,24104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE7A98"))) PPC_WEAK_FUNC(sub_82AE7A98);
PPC_FUNC_IMPL(__imp__sub_82AE7A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// addi r11,r11,2360
	ctx.r11.s64 = ctx.r11.s64 + 2360;
	// stw r11,24096(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24096, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE7AB0"))) PPC_WEAK_FUNC(sub_82AE7AB0);
PPC_FUNC_IMPL(__imp__sub_82AE7AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// addi r11,r11,2360
	ctx.r11.s64 = ctx.r11.s64 + 2360;
	// stw r11,24088(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24088, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE7AC8"))) PPC_WEAK_FUNC(sub_82AE7AC8);
PPC_FUNC_IMPL(__imp__sub_82AE7AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// addi r11,r11,2360
	ctx.r11.s64 = ctx.r11.s64 + 2360;
	// stw r11,24080(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24080, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE7AE0"))) PPC_WEAK_FUNC(sub_82AE7AE0);
PPC_FUNC_IMPL(__imp__sub_82AE7AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// addi r11,r11,2360
	ctx.r11.s64 = ctx.r11.s64 + 2360;
	// stw r11,24072(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24072, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE7AF8"))) PPC_WEAK_FUNC(sub_82AE7AF8);
PPC_FUNC_IMPL(__imp__sub_82AE7AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// addi r11,r11,2360
	ctx.r11.s64 = ctx.r11.s64 + 2360;
	// stw r11,24064(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24064, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE7B10"))) PPC_WEAK_FUNC(sub_82AE7B10);
PPC_FUNC_IMPL(__imp__sub_82AE7B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// addi r11,r11,2360
	ctx.r11.s64 = ctx.r11.s64 + 2360;
	// stw r11,24128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24128, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE7B28"))) PPC_WEAK_FUNC(sub_82AE7B28);
PPC_FUNC_IMPL(__imp__sub_82AE7B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// addi r11,r11,2360
	ctx.r11.s64 = ctx.r11.s64 + 2360;
	// stw r11,24120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24120, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE7B40"))) PPC_WEAK_FUNC(sub_82AE7B40);
PPC_FUNC_IMPL(__imp__sub_82AE7B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,24172
	ctx.r31.s64 = ctx.r11.s64 + 24172;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ae7b78
	if (ctx.cr6.eq) goto loc_82AE7B78;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AE7B78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82AE7B78:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,2360
	ctx.r11.s64 = ctx.r11.s64 + 2360;
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

__attribute__((alias("__imp__sub_82AE7B98"))) PPC_WEAK_FUNC(sub_82AE7B98);
PPC_FUNC_IMPL(__imp__sub_82AE7B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,24188
	ctx.r3.s64 = ctx.r11.s64 + 24188;
	// b 0x821619c8
	sub_821619C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE7BA8"))) PPC_WEAK_FUNC(sub_82AE7BA8);
PPC_FUNC_IMPL(__imp__sub_82AE7BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r11,r11,24960
	ctx.r11.s64 = ctx.r11.s64 + 24960;
	// lwz r3,672(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 672);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82581e38
	sub_82581E38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE7BC0"))) PPC_WEAK_FUNC(sub_82AE7BC0);
PPC_FUNC_IMPL(__imp__sub_82AE7BC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE7BC8"))) PPC_WEAK_FUNC(sub_82AE7BC8);
PPC_FUNC_IMPL(__imp__sub_82AE7BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,24260
	ctx.r3.s64 = ctx.r11.s64 + 24260;
	// b 0x82581e98
	sub_82581E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE7BD8"))) PPC_WEAK_FUNC(sub_82AE7BD8);
PPC_FUNC_IMPL(__imp__sub_82AE7BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,24240
	ctx.r3.s64 = ctx.r11.s64 + 24240;
	// b 0x82581e98
	sub_82581E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE7BE8"))) PPC_WEAK_FUNC(sub_82AE7BE8);
PPC_FUNC_IMPL(__imp__sub_82AE7BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,26324
	ctx.r31.s64 = ctx.r11.s64 + 26324;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82ae7c14
	if (ctx.cr6.lt) goto loc_82AE7C14;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82186190
	ctx.lr = 0x82AE7C14;
	sub_82186190(ctx, base);
loc_82AE7C14:
	// li r11,15
	ctx.r11.s64 = 15;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// bl 0x8259d1a8
	ctx.lr = 0x82AE7C30;
	sub_8259D1A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581e98
	ctx.lr = 0x82AE7C38;
	sub_82581E98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE7C50"))) PPC_WEAK_FUNC(sub_82AE7C50);
PPC_FUNC_IMPL(__imp__sub_82AE7C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,26588
	ctx.r3.s64 = ctx.r11.s64 + 26588;
	// b 0x825fa148
	sub_825FA148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE7C60"))) PPC_WEAK_FUNC(sub_82AE7C60);
PPC_FUNC_IMPL(__imp__sub_82AE7C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,26400
	ctx.r3.s64 = ctx.r11.s64 + 26400;
	// b 0x825d3910
	sub_825D3910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE7C70"))) PPC_WEAK_FUNC(sub_82AE7C70);
PPC_FUNC_IMPL(__imp__sub_82AE7C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// lwz r3,26652(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26652);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82581e38
	sub_82581E38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE7C84"))) PPC_WEAK_FUNC(sub_82AE7C84);
PPC_FUNC_IMPL(__imp__sub_82AE7C84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE7C88"))) PPC_WEAK_FUNC(sub_82AE7C88);
PPC_FUNC_IMPL(__imp__sub_82AE7C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,26632
	ctx.r3.s64 = ctx.r11.s64 + 26632;
	// b 0x82581e98
	sub_82581E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE7C98"))) PPC_WEAK_FUNC(sub_82AE7C98);
PPC_FUNC_IMPL(__imp__sub_82AE7C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,26740
	ctx.r3.s64 = ctx.r11.s64 + 26740;
	// b 0x82581e98
	sub_82581E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE7CA8"))) PPC_WEAK_FUNC(sub_82AE7CA8);
PPC_FUNC_IMPL(__imp__sub_82AE7CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,26720
	ctx.r3.s64 = ctx.r11.s64 + 26720;
	// b 0x82581e98
	sub_82581E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE7CB8"))) PPC_WEAK_FUNC(sub_82AE7CB8);
PPC_FUNC_IMPL(__imp__sub_82AE7CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,26700
	ctx.r3.s64 = ctx.r11.s64 + 26700;
	// b 0x82581e98
	sub_82581E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE7CC8"))) PPC_WEAK_FUNC(sub_82AE7CC8);
PPC_FUNC_IMPL(__imp__sub_82AE7CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,26680
	ctx.r3.s64 = ctx.r11.s64 + 26680;
	// b 0x82581e98
	sub_82581E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE7CD8"))) PPC_WEAK_FUNC(sub_82AE7CD8);
PPC_FUNC_IMPL(__imp__sub_82AE7CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,26660
	ctx.r3.s64 = ctx.r11.s64 + 26660;
	// b 0x82581e98
	sub_82581E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE7CE8"))) PPC_WEAK_FUNC(sub_82AE7CE8);
PPC_FUNC_IMPL(__imp__sub_82AE7CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82AE7CF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// li r30,8
	ctx.r30.s64 = 8;
	// addi r11,r11,26792
	ctx.r11.s64 = ctx.r11.s64 + 26792;
	// li r28,15
	ctx.r28.s64 = 15;
	// addi r31,r11,292
	ctx.r31.s64 = ctx.r11.s64 + 292;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82AE7D0C:
	// addi r31,r31,-32
	ctx.r31.s64 = ctx.r31.s64 + -32;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82ae7d24
	if (ctx.cr6.lt) goto loc_82AE7D24;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82186190
	ctx.lr = 0x82AE7D24;
	sub_82186190(ctx, base);
loc_82AE7D24:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82ae7d0c
	if (!ctx.cr6.lt) goto loc_82AE7D0C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE7D48"))) PPC_WEAK_FUNC(sub_82AE7D48);
PPC_FUNC_IMPL(__imp__sub_82AE7D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,27860
	ctx.r31.s64 = ctx.r11.s64 + 27860;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82ae7d74
	if (ctx.cr6.lt) goto loc_82AE7D74;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82186190
	ctx.lr = 0x82AE7D74;
	sub_82186190(ctx, base);
loc_82AE7D74:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ae7d98
	if (ctx.cr6.eq) goto loc_82AE7D98;
	// bl 0x82186190
	ctx.lr = 0x82AE7D98;
	sub_82186190(ctx, base);
loc_82AE7D98:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE7DC0"))) PPC_WEAK_FUNC(sub_82AE7DC0);
PPC_FUNC_IMPL(__imp__sub_82AE7DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,28100
	ctx.r3.s64 = ctx.r11.s64 + 28100;
	// b 0x82581e98
	sub_82581E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE7DD0"))) PPC_WEAK_FUNC(sub_82AE7DD0);
PPC_FUNC_IMPL(__imp__sub_82AE7DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,32292
	ctx.r31.s64 = ctx.r11.s64 + 32292;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82ae7dfc
	if (ctx.cr6.lt) goto loc_82AE7DFC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82AE7DFC;
	sub_82186190(ctx, base);
loc_82AE7DFC:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82AE7E28"))) PPC_WEAK_FUNC(sub_82AE7E28);
PPC_FUNC_IMPL(__imp__sub_82AE7E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,32320
	ctx.r31.s64 = ctx.r11.s64 + 32320;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82ae7e54
	if (ctx.cr6.lt) goto loc_82AE7E54;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82AE7E54;
	sub_82186190(ctx, base);
loc_82AE7E54:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82AE7E80"))) PPC_WEAK_FUNC(sub_82AE7E80);
PPC_FUNC_IMPL(__imp__sub_82AE7E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,28152
	ctx.r3.s64 = ctx.r11.s64 + 28152;
	// b 0x82581e98
	sub_82581E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE7E90"))) PPC_WEAK_FUNC(sub_82AE7E90);
PPC_FUNC_IMPL(__imp__sub_82AE7E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,28232
	ctx.r3.s64 = ctx.r11.s64 + 28232;
	// b 0x82581e98
	sub_82581E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE7EA0"))) PPC_WEAK_FUNC(sub_82AE7EA0);
PPC_FUNC_IMPL(__imp__sub_82AE7EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,28284
	ctx.r3.s64 = ctx.r11.s64 + 28284;
	// b 0x82581e98
	sub_82581E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE7EB0"))) PPC_WEAK_FUNC(sub_82AE7EB0);
PPC_FUNC_IMPL(__imp__sub_82AE7EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,28308
	ctx.r3.s64 = ctx.r11.s64 + 28308;
	// b 0x82581e98
	sub_82581E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE7EC0"))) PPC_WEAK_FUNC(sub_82AE7EC0);
PPC_FUNC_IMPL(__imp__sub_82AE7EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,28344
	ctx.r3.s64 = ctx.r11.s64 + 28344;
	// b 0x82581e98
	sub_82581E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE7ED0"))) PPC_WEAK_FUNC(sub_82AE7ED0);
PPC_FUNC_IMPL(__imp__sub_82AE7ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82AE7ED8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r11,r11,-21496
	ctx.r11.s64 = ctx.r11.s64 + -21496;
	// li r28,15
	ctx.r28.s64 = 15;
	// addi r31,r11,144
	ctx.r31.s64 = ctx.r11.s64 + 144;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82AE7EF4:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82ae7f0c
	if (ctx.cr6.lt) goto loc_82AE7F0C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82186190
	ctx.lr = 0x82AE7F0C;
	sub_82186190(ctx, base);
loc_82AE7F0C:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82ae7ef4
	if (!ctx.cr6.lt) goto loc_82AE7EF4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE7F30"))) PPC_WEAK_FUNC(sub_82AE7F30);
PPC_FUNC_IMPL(__imp__sub_82AE7F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,28464
	ctx.r3.s64 = ctx.r11.s64 + 28464;
	// b 0x82581e98
	sub_82581E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE7F40"))) PPC_WEAK_FUNC(sub_82AE7F40);
PPC_FUNC_IMPL(__imp__sub_82AE7F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,28444
	ctx.r3.s64 = ctx.r11.s64 + 28444;
	// b 0x82581e98
	sub_82581E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE7F50"))) PPC_WEAK_FUNC(sub_82AE7F50);
PPC_FUNC_IMPL(__imp__sub_82AE7F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,28424
	ctx.r3.s64 = ctx.r11.s64 + 28424;
	// b 0x82581e98
	sub_82581E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE7F60"))) PPC_WEAK_FUNC(sub_82AE7F60);
PPC_FUNC_IMPL(__imp__sub_82AE7F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,28404
	ctx.r3.s64 = ctx.r11.s64 + 28404;
	// b 0x82581e98
	sub_82581E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE7F70"))) PPC_WEAK_FUNC(sub_82AE7F70);
PPC_FUNC_IMPL(__imp__sub_82AE7F70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE7F78"))) PPC_WEAK_FUNC(sub_82AE7F78);
PPC_FUNC_IMPL(__imp__sub_82AE7F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-2472
	ctx.r31.s64 = ctx.r11.s64 + -2472;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82ae7fa4
	if (ctx.cr6.lt) goto loc_82AE7FA4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82AE7FA4;
	sub_82186190(ctx, base);
loc_82AE7FA4:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82AE7FD0"))) PPC_WEAK_FUNC(sub_82AE7FD0);
PPC_FUNC_IMPL(__imp__sub_82AE7FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82AE7FD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,-2056
	ctx.r11.s64 = ctx.r11.s64 + -2056;
	// li r28,15
	ctx.r28.s64 = 15;
	// addi r31,r11,116
	ctx.r31.s64 = ctx.r11.s64 + 116;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82AE7FF4:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82ae800c
	if (ctx.cr6.lt) goto loc_82AE800C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82186190
	ctx.lr = 0x82AE800C;
	sub_82186190(ctx, base);
loc_82AE800C:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82ae7ff4
	if (!ctx.cr6.lt) goto loc_82AE7FF4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE8030"))) PPC_WEAK_FUNC(sub_82AE8030);
PPC_FUNC_IMPL(__imp__sub_82AE8030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-1164
	ctx.r31.s64 = ctx.r11.s64 + -1164;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82ae805c
	if (ctx.cr6.lt) goto loc_82AE805C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82AE805C;
	sub_82186190(ctx, base);
loc_82AE805C:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82AE8088"))) PPC_WEAK_FUNC(sub_82AE8088);
PPC_FUNC_IMPL(__imp__sub_82AE8088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-1052
	ctx.r31.s64 = ctx.r11.s64 + -1052;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82ae80b4
	if (ctx.cr6.lt) goto loc_82AE80B4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82AE80B4;
	sub_82186190(ctx, base);
loc_82AE80B4:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82AE80E0"))) PPC_WEAK_FUNC(sub_82AE80E0);
PPC_FUNC_IMPL(__imp__sub_82AE80E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-924
	ctx.r31.s64 = ctx.r11.s64 + -924;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82ae810c
	if (ctx.cr6.lt) goto loc_82AE810C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82AE810C;
	sub_82186190(ctx, base);
loc_82AE810C:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82AE8138"))) PPC_WEAK_FUNC(sub_82AE8138);
PPC_FUNC_IMPL(__imp__sub_82AE8138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-612
	ctx.r31.s64 = ctx.r11.s64 + -612;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82ae8164
	if (ctx.cr6.lt) goto loc_82AE8164;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82AE8164;
	sub_82186190(ctx, base);
loc_82AE8164:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82AE8190"))) PPC_WEAK_FUNC(sub_82AE8190);
PPC_FUNC_IMPL(__imp__sub_82AE8190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-492
	ctx.r31.s64 = ctx.r11.s64 + -492;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82ae81bc
	if (ctx.cr6.lt) goto loc_82AE81BC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82AE81BC;
	sub_82186190(ctx, base);
loc_82AE81BC:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82AE81E8"))) PPC_WEAK_FUNC(sub_82AE81E8);
PPC_FUNC_IMPL(__imp__sub_82AE81E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-256
	ctx.r31.s64 = ctx.r11.s64 + -256;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82ae8214
	if (ctx.cr6.lt) goto loc_82AE8214;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82AE8214;
	sub_82186190(ctx, base);
loc_82AE8214:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82AE8240"))) PPC_WEAK_FUNC(sub_82AE8240);
PPC_FUNC_IMPL(__imp__sub_82AE8240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,28764
	ctx.r3.s64 = ctx.r11.s64 + 28764;
	// b 0x82581e98
	sub_82581E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE8250"))) PPC_WEAK_FUNC(sub_82AE8250);
PPC_FUNC_IMPL(__imp__sub_82AE8250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,28808
	ctx.r3.s64 = ctx.r11.s64 + 28808;
	// b 0x825b0490
	sub_825B0490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE8260"))) PPC_WEAK_FUNC(sub_82AE8260);
PPC_FUNC_IMPL(__imp__sub_82AE8260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,28916
	ctx.r3.s64 = ctx.r11.s64 + 28916;
	// b 0x82581e98
	sub_82581E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE8270"))) PPC_WEAK_FUNC(sub_82AE8270);
PPC_FUNC_IMPL(__imp__sub_82AE8270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,30020
	ctx.r31.s64 = ctx.r11.s64 + 30020;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82ae829c
	if (ctx.cr6.lt) goto loc_82AE829C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82AE829C;
	sub_82186190(ctx, base);
loc_82AE829C:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82AE82C8"))) PPC_WEAK_FUNC(sub_82AE82C8);
PPC_FUNC_IMPL(__imp__sub_82AE82C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,30388
	ctx.r3.s64 = ctx.r11.s64 + 30388;
	// b 0x82581e98
	sub_82581E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE82D8"))) PPC_WEAK_FUNC(sub_82AE82D8);
PPC_FUNC_IMPL(__imp__sub_82AE82D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,30724
	ctx.r31.s64 = ctx.r11.s64 + 30724;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82ae8304
	if (ctx.cr6.lt) goto loc_82AE8304;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82AE8304;
	sub_82186190(ctx, base);
loc_82AE8304:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82AE8330"))) PPC_WEAK_FUNC(sub_82AE8330);
PPC_FUNC_IMPL(__imp__sub_82AE8330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-21496
	ctx.r31.s64 = ctx.r11.s64 + -21496;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82ae835c
	if (ctx.cr6.lt) goto loc_82AE835C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82AE835C;
	sub_82186190(ctx, base);
loc_82AE835C:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82AE8388"))) PPC_WEAK_FUNC(sub_82AE8388);
PPC_FUNC_IMPL(__imp__sub_82AE8388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,31280
	ctx.r3.s64 = ctx.r11.s64 + 31280;
	// b 0x82581e98
	sub_82581E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE8398"))) PPC_WEAK_FUNC(sub_82AE8398);
PPC_FUNC_IMPL(__imp__sub_82AE8398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,31384
	ctx.r3.s64 = ctx.r11.s64 + 31384;
	// b 0x8260f380
	sub_8260F380(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE83A8"))) PPC_WEAK_FUNC(sub_82AE83A8);
PPC_FUNC_IMPL(__imp__sub_82AE83A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,31480
	ctx.r3.s64 = ctx.r11.s64 + 31480;
	// b 0x825d4820
	sub_825D4820(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE83B8"))) PPC_WEAK_FUNC(sub_82AE83B8);
PPC_FUNC_IMPL(__imp__sub_82AE83B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// addi r11,r11,-17128
	ctx.r11.s64 = ctx.r11.s64 + -17128;
	// stw r11,32504(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32504, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE83D0"))) PPC_WEAK_FUNC(sub_82AE83D0);
PPC_FUNC_IMPL(__imp__sub_82AE83D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-32720
	ctx.r3.s64 = ctx.r11.s64 + -32720;
	// b 0x82581e98
	sub_82581E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE83E0"))) PPC_WEAK_FUNC(sub_82AE83E0);
PPC_FUNC_IMPL(__imp__sub_82AE83E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r11,r11,-16368
	ctx.r11.s64 = ctx.r11.s64 + -16368;
	// stw r11,-32696(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32696, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE83F8"))) PPC_WEAK_FUNC(sub_82AE83F8);
PPC_FUNC_IMPL(__imp__sub_82AE83F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r11,r11,-16320
	ctx.r11.s64 = ctx.r11.s64 + -16320;
	// stw r11,-32420(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32420, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE8410"))) PPC_WEAK_FUNC(sub_82AE8410);
PPC_FUNC_IMPL(__imp__sub_82AE8410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r11,r11,-16368
	ctx.r11.s64 = ctx.r11.s64 + -16368;
	// stw r11,-32144(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32144, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE8428"))) PPC_WEAK_FUNC(sub_82AE8428);
PPC_FUNC_IMPL(__imp__sub_82AE8428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r11,r11,-16320
	ctx.r11.s64 = ctx.r11.s64 + -16320;
	// stw r11,-31868(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31868, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE8440"))) PPC_WEAK_FUNC(sub_82AE8440);
PPC_FUNC_IMPL(__imp__sub_82AE8440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r11,r11,-16368
	ctx.r11.s64 = ctx.r11.s64 + -16368;
	// stw r11,-31592(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31592, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE8458"))) PPC_WEAK_FUNC(sub_82AE8458);
PPC_FUNC_IMPL(__imp__sub_82AE8458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r11,r11,-15900
	ctx.r11.s64 = ctx.r11.s64 + -15900;
	// stw r11,-31316(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31316, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE8470"))) PPC_WEAK_FUNC(sub_82AE8470);
PPC_FUNC_IMPL(__imp__sub_82AE8470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r11,r11,-16320
	ctx.r11.s64 = ctx.r11.s64 + -16320;
	// stw r11,-31040(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31040, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE8488"))) PPC_WEAK_FUNC(sub_82AE8488);
PPC_FUNC_IMPL(__imp__sub_82AE8488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r11,r11,-16368
	ctx.r11.s64 = ctx.r11.s64 + -16368;
	// stw r11,-30764(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30764, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE84A0"))) PPC_WEAK_FUNC(sub_82AE84A0);
PPC_FUNC_IMPL(__imp__sub_82AE84A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r11,r11,-16320
	ctx.r11.s64 = ctx.r11.s64 + -16320;
	// stw r11,-30488(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30488, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE84B8"))) PPC_WEAK_FUNC(sub_82AE84B8);
PPC_FUNC_IMPL(__imp__sub_82AE84B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r11,r11,-16368
	ctx.r11.s64 = ctx.r11.s64 + -16368;
	// stw r11,-30212(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30212, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE84D0"))) PPC_WEAK_FUNC(sub_82AE84D0);
PPC_FUNC_IMPL(__imp__sub_82AE84D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r11,r11,-15604
	ctx.r11.s64 = ctx.r11.s64 + -15604;
	// stw r11,-29936(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29936, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE84E8"))) PPC_WEAK_FUNC(sub_82AE84E8);
PPC_FUNC_IMPL(__imp__sub_82AE84E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r11,r11,-16368
	ctx.r11.s64 = ctx.r11.s64 + -16368;
	// stw r11,-29660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE8500"))) PPC_WEAK_FUNC(sub_82AE8500);
PPC_FUNC_IMPL(__imp__sub_82AE8500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r11,r11,-16368
	ctx.r11.s64 = ctx.r11.s64 + -16368;
	// stw r11,-29384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29384, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE8518"))) PPC_WEAK_FUNC(sub_82AE8518);
PPC_FUNC_IMPL(__imp__sub_82AE8518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r11,r11,-15604
	ctx.r11.s64 = ctx.r11.s64 + -15604;
	// stw r11,-29108(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29108, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE8530"))) PPC_WEAK_FUNC(sub_82AE8530);
PPC_FUNC_IMPL(__imp__sub_82AE8530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r11,r11,-15356
	ctx.r11.s64 = ctx.r11.s64 + -15356;
	// stw r11,-28832(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28832, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE8548"))) PPC_WEAK_FUNC(sub_82AE8548);
PPC_FUNC_IMPL(__imp__sub_82AE8548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r11,r11,-16368
	ctx.r11.s64 = ctx.r11.s64 + -16368;
	// stw r11,-28556(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28556, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE8560"))) PPC_WEAK_FUNC(sub_82AE8560);
PPC_FUNC_IMPL(__imp__sub_82AE8560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r11,r11,-15604
	ctx.r11.s64 = ctx.r11.s64 + -15604;
	// stw r11,-28280(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28280, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE8578"))) PPC_WEAK_FUNC(sub_82AE8578);
PPC_FUNC_IMPL(__imp__sub_82AE8578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r11,r11,-15136
	ctx.r11.s64 = ctx.r11.s64 + -15136;
	// stw r11,-28004(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28004, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE8590"))) PPC_WEAK_FUNC(sub_82AE8590);
PPC_FUNC_IMPL(__imp__sub_82AE8590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r11,r11,-15136
	ctx.r11.s64 = ctx.r11.s64 + -15136;
	// stw r11,-27716(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27716, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE85A8"))) PPC_WEAK_FUNC(sub_82AE85A8);
PPC_FUNC_IMPL(__imp__sub_82AE85A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r11,r11,-15136
	ctx.r11.s64 = ctx.r11.s64 + -15136;
	// stw r11,-27428(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27428, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE85C0"))) PPC_WEAK_FUNC(sub_82AE85C0);
PPC_FUNC_IMPL(__imp__sub_82AE85C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r11,r11,-15136
	ctx.r11.s64 = ctx.r11.s64 + -15136;
	// stw r11,-27152(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27152, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE85D8"))) PPC_WEAK_FUNC(sub_82AE85D8);
PPC_FUNC_IMPL(__imp__sub_82AE85D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r11,r11,-15136
	ctx.r11.s64 = ctx.r11.s64 + -15136;
	// stw r11,-26864(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26864, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE85F0"))) PPC_WEAK_FUNC(sub_82AE85F0);
PPC_FUNC_IMPL(__imp__sub_82AE85F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r11,r11,-15136
	ctx.r11.s64 = ctx.r11.s64 + -15136;
	// stw r11,-26588(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26588, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE8608"))) PPC_WEAK_FUNC(sub_82AE8608);
PPC_FUNC_IMPL(__imp__sub_82AE8608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r11,r11,-15136
	ctx.r11.s64 = ctx.r11.s64 + -15136;
	// stw r11,-26312(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26312, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE8620"))) PPC_WEAK_FUNC(sub_82AE8620);
PPC_FUNC_IMPL(__imp__sub_82AE8620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r11,r11,-15136
	ctx.r11.s64 = ctx.r11.s64 + -15136;
	// stw r11,-26036(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26036, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE8638"))) PPC_WEAK_FUNC(sub_82AE8638);
PPC_FUNC_IMPL(__imp__sub_82AE8638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r11,r11,-15136
	ctx.r11.s64 = ctx.r11.s64 + -15136;
	// stw r11,-25760(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25760, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE8650"))) PPC_WEAK_FUNC(sub_82AE8650);
PPC_FUNC_IMPL(__imp__sub_82AE8650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r11,r11,-15136
	ctx.r11.s64 = ctx.r11.s64 + -15136;
	// stw r11,-25484(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25484, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE8668"))) PPC_WEAK_FUNC(sub_82AE8668);
PPC_FUNC_IMPL(__imp__sub_82AE8668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r11,r11,-15136
	ctx.r11.s64 = ctx.r11.s64 + -15136;
	// stw r11,-25208(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25208, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE8680"))) PPC_WEAK_FUNC(sub_82AE8680);
PPC_FUNC_IMPL(__imp__sub_82AE8680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r11,r11,-15136
	ctx.r11.s64 = ctx.r11.s64 + -15136;
	// stw r11,-24932(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24932, ctx.r11.u32);
	// blr 
	return;
}

