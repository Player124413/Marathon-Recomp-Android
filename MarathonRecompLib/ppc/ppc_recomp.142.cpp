#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82ADE9E8"))) PPC_WEAK_FUNC(sub_82ADE9E8);
PPC_FUNC_IMPL(__imp__sub_82ADE9E8) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-14408
	ctx.r3.s64 = ctx.r11.s64 + -14408;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826945d8
	ctx.lr = 0x82ADEA0C;
	sub_826945D8(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28728
	ctx.r3.s64 = ctx.r11.s64 + -28728;
	// bl 0x826ded00
	ctx.lr = 0x82ADEA18;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADEA28"))) PPC_WEAK_FUNC(sub_82ADEA28);
PPC_FUNC_IMPL(__imp__sub_82ADEA28) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r4,r10,4260
	ctx.r4.s64 = ctx.r10.s64 + 4260;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-14384
	ctx.r3.s64 = ctx.r10.s64 + -14384;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-25168
	ctx.r5.s64 = ctx.r11.s64 + -25168;
	// bl 0x82693250
	ctx.lr = 0x82ADEA5C;
	sub_82693250(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28688
	ctx.r3.s64 = ctx.r11.s64 + -28688;
	// bl 0x826ded00
	ctx.lr = 0x82ADEA68;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADEA78"))) PPC_WEAK_FUNC(sub_82ADEA78);
PPC_FUNC_IMPL(__imp__sub_82ADEA78) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r4,r10,4412
	ctx.r4.s64 = ctx.r10.s64 + 4412;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-14108
	ctx.r3.s64 = ctx.r10.s64 + -14108;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-21656
	ctx.r5.s64 = ctx.r11.s64 + -21656;
	// bl 0x82693250
	ctx.lr = 0x82ADEAAC;
	sub_82693250(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28664
	ctx.r3.s64 = ctx.r11.s64 + -28664;
	// bl 0x826ded00
	ctx.lr = 0x82ADEAB8;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADEAC8"))) PPC_WEAK_FUNC(sub_82ADEAC8);
PPC_FUNC_IMPL(__imp__sub_82ADEAC8) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r4,r10,4620
	ctx.r4.s64 = ctx.r10.s64 + 4620;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-13832
	ctx.r3.s64 = ctx.r10.s64 + -13832;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-16928
	ctx.r5.s64 = ctx.r11.s64 + -16928;
	// bl 0x82693250
	ctx.lr = 0x82ADEAFC;
	sub_82693250(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28640
	ctx.r3.s64 = ctx.r11.s64 + -28640;
	// bl 0x826ded00
	ctx.lr = 0x82ADEB08;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADEB18"))) PPC_WEAK_FUNC(sub_82ADEB18);
PPC_FUNC_IMPL(__imp__sub_82ADEB18) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r4,r10,4800
	ctx.r4.s64 = ctx.r10.s64 + 4800;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-13556
	ctx.r3.s64 = ctx.r10.s64 + -13556;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-14928
	ctx.r5.s64 = ctx.r11.s64 + -14928;
	// bl 0x82693250
	ctx.lr = 0x82ADEB4C;
	sub_82693250(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28616
	ctx.r3.s64 = ctx.r11.s64 + -28616;
	// bl 0x826ded00
	ctx.lr = 0x82ADEB58;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADEB68"))) PPC_WEAK_FUNC(sub_82ADEB68);
PPC_FUNC_IMPL(__imp__sub_82ADEB68) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r4,r10,5012
	ctx.r4.s64 = ctx.r10.s64 + 5012;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-13280
	ctx.r3.s64 = ctx.r10.s64 + -13280;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-10872
	ctx.r5.s64 = ctx.r11.s64 + -10872;
	// bl 0x82693250
	ctx.lr = 0x82ADEB9C;
	sub_82693250(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28592
	ctx.r3.s64 = ctx.r11.s64 + -28592;
	// bl 0x826ded00
	ctx.lr = 0x82ADEBA8;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADEBB8"))) PPC_WEAK_FUNC(sub_82ADEBB8);
PPC_FUNC_IMPL(__imp__sub_82ADEBB8) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r4,r10,5132
	ctx.r4.s64 = ctx.r10.s64 + 5132;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-13004
	ctx.r3.s64 = ctx.r10.s64 + -13004;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-2992
	ctx.r5.s64 = ctx.r11.s64 + -2992;
	// bl 0x82693250
	ctx.lr = 0x82ADEBEC;
	sub_82693250(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28568
	ctx.r3.s64 = ctx.r11.s64 + -28568;
	// bl 0x826ded00
	ctx.lr = 0x82ADEBF8;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADEC08"))) PPC_WEAK_FUNC(sub_82ADEC08);
PPC_FUNC_IMPL(__imp__sub_82ADEC08) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r4,r10,5256
	ctx.r4.s64 = ctx.r10.s64 + 5256;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-12728
	ctx.r3.s64 = ctx.r10.s64 + -12728;
	// addi r5,r11,192
	ctx.r5.s64 = ctx.r11.s64 + 192;
	// bl 0x82697f10
	ctx.lr = 0x82ADEC34;
	sub_82697F10(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28544
	ctx.r3.s64 = ctx.r11.s64 + -28544;
	// bl 0x826ded00
	ctx.lr = 0x82ADEC40;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADEC50"))) PPC_WEAK_FUNC(sub_82ADEC50);
PPC_FUNC_IMPL(__imp__sub_82ADEC50) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r4,r10,5360
	ctx.r4.s64 = ctx.r10.s64 + 5360;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-12452
	ctx.r3.s64 = ctx.r10.s64 + -12452;
	// addi r5,r11,5184
	ctx.r5.s64 = ctx.r11.s64 + 5184;
	// bl 0x82697f10
	ctx.lr = 0x82ADEC7C;
	sub_82697F10(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28520
	ctx.r3.s64 = ctx.r11.s64 + -28520;
	// bl 0x826ded00
	ctx.lr = 0x82ADEC88;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADEC98"))) PPC_WEAK_FUNC(sub_82ADEC98);
PPC_FUNC_IMPL(__imp__sub_82ADEC98) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r4,r10,5680
	ctx.r4.s64 = ctx.r10.s64 + 5680;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-12176
	ctx.r3.s64 = ctx.r10.s64 + -12176;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,7720
	ctx.r5.s64 = ctx.r11.s64 + 7720;
	// bl 0x82693250
	ctx.lr = 0x82ADECCC;
	sub_82693250(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28496
	ctx.r3.s64 = ctx.r11.s64 + -28496;
	// bl 0x826ded00
	ctx.lr = 0x82ADECD8;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADECE8"))) PPC_WEAK_FUNC(sub_82ADECE8);
PPC_FUNC_IMPL(__imp__sub_82ADECE8) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r4,r10,5708
	ctx.r4.s64 = ctx.r10.s64 + 5708;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,16864
	ctx.r5.s64 = ctx.r11.s64 + 16864;
	// addi r3,r10,-11900
	ctx.r3.s64 = ctx.r10.s64 + -11900;
	// bl 0x8268ac20
	ctx.lr = 0x82ADED10;
	sub_8268AC20(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28472
	ctx.r3.s64 = ctx.r11.s64 + -28472;
	// bl 0x826ded00
	ctx.lr = 0x82ADED1C;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADED30"))) PPC_WEAK_FUNC(sub_82ADED30);
PPC_FUNC_IMPL(__imp__sub_82ADED30) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r4,r10,5744
	ctx.r4.s64 = ctx.r10.s64 + 5744;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,17048
	ctx.r5.s64 = ctx.r11.s64 + 17048;
	// addi r3,r10,-11624
	ctx.r3.s64 = ctx.r10.s64 + -11624;
	// bl 0x8268ac20
	ctx.lr = 0x82ADED58;
	sub_8268AC20(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28448
	ctx.r3.s64 = ctx.r11.s64 + -28448;
	// bl 0x826ded00
	ctx.lr = 0x82ADED64;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADED78"))) PPC_WEAK_FUNC(sub_82ADED78);
PPC_FUNC_IMPL(__imp__sub_82ADED78) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r4,r10,5784
	ctx.r4.s64 = ctx.r10.s64 + 5784;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,17320
	ctx.r5.s64 = ctx.r11.s64 + 17320;
	// addi r3,r10,-11348
	ctx.r3.s64 = ctx.r10.s64 + -11348;
	// bl 0x8268ac20
	ctx.lr = 0x82ADEDA0;
	sub_8268AC20(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28424
	ctx.r3.s64 = ctx.r11.s64 + -28424;
	// bl 0x826ded00
	ctx.lr = 0x82ADEDAC;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADEDC0"))) PPC_WEAK_FUNC(sub_82ADEDC0);
PPC_FUNC_IMPL(__imp__sub_82ADEDC0) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r4,r10,5816
	ctx.r4.s64 = ctx.r10.s64 + 5816;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,17448
	ctx.r5.s64 = ctx.r11.s64 + 17448;
	// addi r3,r10,-11072
	ctx.r3.s64 = ctx.r10.s64 + -11072;
	// bl 0x82692088
	ctx.lr = 0x82ADEDE8;
	sub_82692088(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28400
	ctx.r3.s64 = ctx.r11.s64 + -28400;
	// bl 0x826ded00
	ctx.lr = 0x82ADEDF4;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADEE08"))) PPC_WEAK_FUNC(sub_82ADEE08);
PPC_FUNC_IMPL(__imp__sub_82ADEE08) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r4,r10,5852
	ctx.r4.s64 = ctx.r10.s64 + 5852;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,17640
	ctx.r5.s64 = ctx.r11.s64 + 17640;
	// addi r3,r10,-10796
	ctx.r3.s64 = ctx.r10.s64 + -10796;
	// bl 0x82692088
	ctx.lr = 0x82ADEE30;
	sub_82692088(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28376
	ctx.r3.s64 = ctx.r11.s64 + -28376;
	// bl 0x826ded00
	ctx.lr = 0x82ADEE3C;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADEE50"))) PPC_WEAK_FUNC(sub_82ADEE50);
PPC_FUNC_IMPL(__imp__sub_82ADEE50) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r4,r10,5884
	ctx.r4.s64 = ctx.r10.s64 + 5884;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,17728
	ctx.r5.s64 = ctx.r11.s64 + 17728;
	// addi r3,r10,-10520
	ctx.r3.s64 = ctx.r10.s64 + -10520;
	// bl 0x8268ac20
	ctx.lr = 0x82ADEE78;
	sub_8268AC20(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28352
	ctx.r3.s64 = ctx.r11.s64 + -28352;
	// bl 0x826ded00
	ctx.lr = 0x82ADEE84;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADEE98"))) PPC_WEAK_FUNC(sub_82ADEE98);
PPC_FUNC_IMPL(__imp__sub_82ADEE98) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r4,r10,5924
	ctx.r4.s64 = ctx.r10.s64 + 5924;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,17944
	ctx.r5.s64 = ctx.r11.s64 + 17944;
	// addi r3,r10,-10244
	ctx.r3.s64 = ctx.r10.s64 + -10244;
	// bl 0x8268ac20
	ctx.lr = 0x82ADEEC0;
	sub_8268AC20(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28328
	ctx.r3.s64 = ctx.r11.s64 + -28328;
	// bl 0x826ded00
	ctx.lr = 0x82ADEECC;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADEEE0"))) PPC_WEAK_FUNC(sub_82ADEEE0);
PPC_FUNC_IMPL(__imp__sub_82ADEEE0) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r4,r10,5960
	ctx.r4.s64 = ctx.r10.s64 + 5960;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,18072
	ctx.r5.s64 = ctx.r11.s64 + 18072;
	// addi r3,r10,-9968
	ctx.r3.s64 = ctx.r10.s64 + -9968;
	// bl 0x8268ac20
	ctx.lr = 0x82ADEF08;
	sub_8268AC20(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28304
	ctx.r3.s64 = ctx.r11.s64 + -28304;
	// bl 0x826ded00
	ctx.lr = 0x82ADEF14;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADEF28"))) PPC_WEAK_FUNC(sub_82ADEF28);
PPC_FUNC_IMPL(__imp__sub_82ADEF28) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r4,r10,5992
	ctx.r4.s64 = ctx.r10.s64 + 5992;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,18296
	ctx.r5.s64 = ctx.r11.s64 + 18296;
	// addi r3,r10,-9692
	ctx.r3.s64 = ctx.r10.s64 + -9692;
	// bl 0x82692088
	ctx.lr = 0x82ADEF50;
	sub_82692088(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28280
	ctx.r3.s64 = ctx.r11.s64 + -28280;
	// bl 0x826ded00
	ctx.lr = 0x82ADEF5C;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADEF70"))) PPC_WEAK_FUNC(sub_82ADEF70);
PPC_FUNC_IMPL(__imp__sub_82ADEF70) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r4,r10,6024
	ctx.r4.s64 = ctx.r10.s64 + 6024;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,18384
	ctx.r5.s64 = ctx.r11.s64 + 18384;
	// addi r3,r10,-9416
	ctx.r3.s64 = ctx.r10.s64 + -9416;
	// bl 0x82692088
	ctx.lr = 0x82ADEF98;
	sub_82692088(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28256
	ctx.r3.s64 = ctx.r11.s64 + -28256;
	// bl 0x826ded00
	ctx.lr = 0x82ADEFA4;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADEFB8"))) PPC_WEAK_FUNC(sub_82ADEFB8);
PPC_FUNC_IMPL(__imp__sub_82ADEFB8) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r4,r10,6056
	ctx.r4.s64 = ctx.r10.s64 + 6056;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,18472
	ctx.r5.s64 = ctx.r11.s64 + 18472;
	// addi r3,r10,-9140
	ctx.r3.s64 = ctx.r10.s64 + -9140;
	// bl 0x82692088
	ctx.lr = 0x82ADEFE0;
	sub_82692088(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28232
	ctx.r3.s64 = ctx.r11.s64 + -28232;
	// bl 0x826ded00
	ctx.lr = 0x82ADEFEC;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADF000"))) PPC_WEAK_FUNC(sub_82ADF000);
PPC_FUNC_IMPL(__imp__sub_82ADF000) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r4,r10,6092
	ctx.r4.s64 = ctx.r10.s64 + 6092;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,18560
	ctx.r5.s64 = ctx.r11.s64 + 18560;
	// addi r3,r10,-8864
	ctx.r3.s64 = ctx.r10.s64 + -8864;
	// bl 0x8268ac20
	ctx.lr = 0x82ADF028;
	sub_8268AC20(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28208
	ctx.r3.s64 = ctx.r11.s64 + -28208;
	// bl 0x826ded00
	ctx.lr = 0x82ADF034;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADF048"))) PPC_WEAK_FUNC(sub_82ADF048);
PPC_FUNC_IMPL(__imp__sub_82ADF048) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r4,r10,6128
	ctx.r4.s64 = ctx.r10.s64 + 6128;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,19512
	ctx.r5.s64 = ctx.r11.s64 + 19512;
	// addi r3,r10,-8588
	ctx.r3.s64 = ctx.r10.s64 + -8588;
	// bl 0x82692088
	ctx.lr = 0x82ADF070;
	sub_82692088(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28184
	ctx.r3.s64 = ctx.r11.s64 + -28184;
	// bl 0x826ded00
	ctx.lr = 0x82ADF07C;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADF090"))) PPC_WEAK_FUNC(sub_82ADF090);
PPC_FUNC_IMPL(__imp__sub_82ADF090) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r4,r10,6156
	ctx.r4.s64 = ctx.r10.s64 + 6156;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,19704
	ctx.r5.s64 = ctx.r11.s64 + 19704;
	// addi r3,r10,-8312
	ctx.r3.s64 = ctx.r10.s64 + -8312;
	// bl 0x82692088
	ctx.lr = 0x82ADF0B8;
	sub_82692088(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28160
	ctx.r3.s64 = ctx.r11.s64 + -28160;
	// bl 0x826ded00
	ctx.lr = 0x82ADF0C4;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADF0D8"))) PPC_WEAK_FUNC(sub_82ADF0D8);
PPC_FUNC_IMPL(__imp__sub_82ADF0D8) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r4,r10,6188
	ctx.r4.s64 = ctx.r10.s64 + 6188;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,19792
	ctx.r5.s64 = ctx.r11.s64 + 19792;
	// addi r3,r10,-8036
	ctx.r3.s64 = ctx.r10.s64 + -8036;
	// bl 0x82692088
	ctx.lr = 0x82ADF100;
	sub_82692088(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28136
	ctx.r3.s64 = ctx.r11.s64 + -28136;
	// bl 0x826ded00
	ctx.lr = 0x82ADF10C;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADF120"))) PPC_WEAK_FUNC(sub_82ADF120);
PPC_FUNC_IMPL(__imp__sub_82ADF120) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r4,r10,6224
	ctx.r4.s64 = ctx.r10.s64 + 6224;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,19992
	ctx.r5.s64 = ctx.r11.s64 + 19992;
	// addi r3,r10,-7760
	ctx.r3.s64 = ctx.r10.s64 + -7760;
	// bl 0x82692088
	ctx.lr = 0x82ADF148;
	sub_82692088(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28112
	ctx.r3.s64 = ctx.r11.s64 + -28112;
	// bl 0x826ded00
	ctx.lr = 0x82ADF154;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADF168"))) PPC_WEAK_FUNC(sub_82ADF168);
PPC_FUNC_IMPL(__imp__sub_82ADF168) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r4,r10,6256
	ctx.r4.s64 = ctx.r10.s64 + 6256;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,20264
	ctx.r5.s64 = ctx.r11.s64 + 20264;
	// addi r3,r10,-7484
	ctx.r3.s64 = ctx.r10.s64 + -7484;
	// bl 0x8268ac20
	ctx.lr = 0x82ADF190;
	sub_8268AC20(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28088
	ctx.r3.s64 = ctx.r11.s64 + -28088;
	// bl 0x826ded00
	ctx.lr = 0x82ADF19C;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADF1B0"))) PPC_WEAK_FUNC(sub_82ADF1B0);
PPC_FUNC_IMPL(__imp__sub_82ADF1B0) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r4,r10,6292
	ctx.r4.s64 = ctx.r10.s64 + 6292;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,20368
	ctx.r5.s64 = ctx.r11.s64 + 20368;
	// addi r3,r10,-7208
	ctx.r3.s64 = ctx.r10.s64 + -7208;
	// bl 0x8268ac20
	ctx.lr = 0x82ADF1D8;
	sub_8268AC20(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28064
	ctx.r3.s64 = ctx.r11.s64 + -28064;
	// bl 0x826ded00
	ctx.lr = 0x82ADF1E4;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADF1F8"))) PPC_WEAK_FUNC(sub_82ADF1F8);
PPC_FUNC_IMPL(__imp__sub_82ADF1F8) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r4,r10,6324
	ctx.r4.s64 = ctx.r10.s64 + 6324;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,20552
	ctx.r5.s64 = ctx.r11.s64 + 20552;
	// addi r3,r10,-6932
	ctx.r3.s64 = ctx.r10.s64 + -6932;
	// bl 0x8268ac20
	ctx.lr = 0x82ADF220;
	sub_8268AC20(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28040
	ctx.r3.s64 = ctx.r11.s64 + -28040;
	// bl 0x826ded00
	ctx.lr = 0x82ADF22C;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADF240"))) PPC_WEAK_FUNC(sub_82ADF240);
PPC_FUNC_IMPL(__imp__sub_82ADF240) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r4,r10,6356
	ctx.r4.s64 = ctx.r10.s64 + 6356;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,20736
	ctx.r5.s64 = ctx.r11.s64 + 20736;
	// addi r3,r10,-6656
	ctx.r3.s64 = ctx.r10.s64 + -6656;
	// bl 0x8268ac20
	ctx.lr = 0x82ADF268;
	sub_8268AC20(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-28016
	ctx.r3.s64 = ctx.r11.s64 + -28016;
	// bl 0x826ded00
	ctx.lr = 0x82ADF274;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADF288"))) PPC_WEAK_FUNC(sub_82ADF288);
PPC_FUNC_IMPL(__imp__sub_82ADF288) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r4,r10,6396
	ctx.r4.s64 = ctx.r10.s64 + 6396;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,20840
	ctx.r5.s64 = ctx.r11.s64 + 20840;
	// addi r3,r10,-6380
	ctx.r3.s64 = ctx.r10.s64 + -6380;
	// bl 0x8268ac20
	ctx.lr = 0x82ADF2B0;
	sub_8268AC20(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-27992
	ctx.r3.s64 = ctx.r11.s64 + -27992;
	// bl 0x826ded00
	ctx.lr = 0x82ADF2BC;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADF2D0"))) PPC_WEAK_FUNC(sub_82ADF2D0);
PPC_FUNC_IMPL(__imp__sub_82ADF2D0) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r4,r10,6432
	ctx.r4.s64 = ctx.r10.s64 + 6432;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,20944
	ctx.r5.s64 = ctx.r11.s64 + 20944;
	// addi r3,r10,-6104
	ctx.r3.s64 = ctx.r10.s64 + -6104;
	// bl 0x8268ac20
	ctx.lr = 0x82ADF2F8;
	sub_8268AC20(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-27968
	ctx.r3.s64 = ctx.r11.s64 + -27968;
	// bl 0x826ded00
	ctx.lr = 0x82ADF304;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADF318"))) PPC_WEAK_FUNC(sub_82ADF318);
PPC_FUNC_IMPL(__imp__sub_82ADF318) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r4,r10,6468
	ctx.r4.s64 = ctx.r10.s64 + 6468;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,21136
	ctx.r5.s64 = ctx.r11.s64 + 21136;
	// addi r3,r10,-5828
	ctx.r3.s64 = ctx.r10.s64 + -5828;
	// bl 0x82692088
	ctx.lr = 0x82ADF340;
	sub_82692088(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-27944
	ctx.r3.s64 = ctx.r11.s64 + -27944;
	// bl 0x826ded00
	ctx.lr = 0x82ADF34C;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADF360"))) PPC_WEAK_FUNC(sub_82ADF360);
PPC_FUNC_IMPL(__imp__sub_82ADF360) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r4,r10,6508
	ctx.r4.s64 = ctx.r10.s64 + 6508;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,21224
	ctx.r5.s64 = ctx.r11.s64 + 21224;
	// addi r3,r10,-5552
	ctx.r3.s64 = ctx.r10.s64 + -5552;
	// bl 0x82692088
	ctx.lr = 0x82ADF388;
	sub_82692088(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-27920
	ctx.r3.s64 = ctx.r11.s64 + -27920;
	// bl 0x826ded00
	ctx.lr = 0x82ADF394;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADF3A8"))) PPC_WEAK_FUNC(sub_82ADF3A8);
PPC_FUNC_IMPL(__imp__sub_82ADF3A8) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r4,r10,6652
	ctx.r4.s64 = ctx.r10.s64 + 6652;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-5276
	ctx.r3.s64 = ctx.r10.s64 + -5276;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,25472
	ctx.r5.s64 = ctx.r11.s64 + 25472;
	// bl 0x82692d28
	ctx.lr = 0x82ADF3DC;
	sub_82692D28(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-27896
	ctx.r3.s64 = ctx.r11.s64 + -27896;
	// bl 0x826ded00
	ctx.lr = 0x82ADF3E8;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADF3F8"))) PPC_WEAK_FUNC(sub_82ADF3F8);
PPC_FUNC_IMPL(__imp__sub_82ADF3F8) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r4,r10,6828
	ctx.r4.s64 = ctx.r10.s64 + 6828;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-3968
	ctx.r3.s64 = ctx.r10.s64 + -3968;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,29848
	ctx.r5.s64 = ctx.r11.s64 + 29848;
	// bl 0x82692d28
	ctx.lr = 0x82ADF42C;
	sub_82692D28(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-27872
	ctx.r3.s64 = ctx.r11.s64 + -27872;
	// bl 0x826ded00
	ctx.lr = 0x82ADF438;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADF448"))) PPC_WEAK_FUNC(sub_82ADF448);
PPC_FUNC_IMPL(__imp__sub_82ADF448) {
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
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// addi r4,r10,6884
	ctx.r4.s64 = ctx.r10.s64 + 6884;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-3692
	ctx.r3.s64 = ctx.r10.s64 + -3692;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-31976
	ctx.r5.s64 = ctx.r11.s64 + -31976;
	// bl 0x82692d28
	ctx.lr = 0x82ADF47C;
	sub_82692D28(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-27824
	ctx.r3.s64 = ctx.r11.s64 + -27824;
	// bl 0x826ded00
	ctx.lr = 0x82ADF488;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADF498"))) PPC_WEAK_FUNC(sub_82ADF498);
PPC_FUNC_IMPL(__imp__sub_82ADF498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-27800
	ctx.r3.s64 = ctx.r11.s64 + -27800;
	// b 0x826ded00
	sub_826DED00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ADF4A8"))) PPC_WEAK_FUNC(sub_82ADF4A8);
PPC_FUNC_IMPL(__imp__sub_82ADF4A8) {
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
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// addi r4,r10,7484
	ctx.r4.s64 = ctx.r10.s64 + 7484;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,4880
	ctx.r3.s64 = ctx.r10.s64 + 4880;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-11568
	ctx.r5.s64 = ctx.r11.s64 + -11568;
	// bl 0x82692d28
	ctx.lr = 0x82ADF4DC;
	sub_82692D28(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-27648
	ctx.r3.s64 = ctx.r11.s64 + -27648;
	// bl 0x826ded00
	ctx.lr = 0x82ADF4E8;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADF4F8"))) PPC_WEAK_FUNC(sub_82ADF4F8);
PPC_FUNC_IMPL(__imp__sub_82ADF4F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,7644
	ctx.r4.s64 = ctx.r11.s64 + 7644;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r31,r11,5460
	ctx.r31.s64 = ctx.r11.s64 + 5460;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691588
	ctx.lr = 0x82ADF530;
	sub_82691588(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32081
	ctx.r10.s64 = -2102460416;
	// addi r11,r11,15488
	ctx.r11.s64 = ctx.r11.s64 + 15488;
	// addi r3,r10,-27552
	ctx.r3.s64 = ctx.r10.s64 + -27552;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x82ADF548;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADF560"))) PPC_WEAK_FUNC(sub_82ADF560);
PPC_FUNC_IMPL(__imp__sub_82ADF560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,7660
	ctx.r4.s64 = ctx.r11.s64 + 7660;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r31,r11,5184
	ctx.r31.s64 = ctx.r11.s64 + 5184;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691588
	ctx.lr = 0x82ADF598;
	sub_82691588(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32081
	ctx.r10.s64 = -2102460416;
	// addi r11,r11,15488
	ctx.r11.s64 = ctx.r11.s64 + 15488;
	// addi r3,r10,-27576
	ctx.r3.s64 = ctx.r10.s64 + -27576;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x82ADF5B0;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADF5C8"))) PPC_WEAK_FUNC(sub_82ADF5C8);
PPC_FUNC_IMPL(__imp__sub_82ADF5C8) {
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
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,7796
	ctx.r4.s64 = ctx.r11.s64 + 7796;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r11,8832
	ctx.r3.s64 = ctx.r11.s64 + 8832;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82692ca0
	ctx.lr = 0x82ADF5F8;
	sub_82692CA0(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-27480
	ctx.r3.s64 = ctx.r11.s64 + -27480;
	// bl 0x826ded00
	ctx.lr = 0x82ADF604;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADF618"))) PPC_WEAK_FUNC(sub_82ADF618);
PPC_FUNC_IMPL(__imp__sub_82ADF618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,8332
	ctx.r4.s64 = ctx.r11.s64 + 8332;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r31,r11,11192
	ctx.r31.s64 = ctx.r11.s64 + 11192;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82694b30
	ctx.lr = 0x82ADF650;
	sub_82694B30(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32081
	ctx.r10.s64 = -2102460416;
	// addi r11,r11,15464
	ctx.r11.s64 = ctx.r11.s64 + 15464;
	// addi r3,r10,-27408
	ctx.r3.s64 = ctx.r10.s64 + -27408;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x82ADF668;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADF680"))) PPC_WEAK_FUNC(sub_82ADF680);
PPC_FUNC_IMPL(__imp__sub_82ADF680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// addi r4,r10,8412
	ctx.r4.s64 = ctx.r10.s64 + 8412;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r10,11468
	ctx.r31.s64 = ctx.r10.s64 + 11468;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,21520
	ctx.r5.s64 = ctx.r11.s64 + 21520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82695640
	ctx.lr = 0x82ADF6BC;
	sub_82695640(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32081
	ctx.r10.s64 = -2102460416;
	// addi r11,r11,15488
	ctx.r11.s64 = ctx.r11.s64 + 15488;
	// addi r3,r10,-27360
	ctx.r3.s64 = ctx.r10.s64 + -27360;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x82ADF6D4;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADF6E8"))) PPC_WEAK_FUNC(sub_82ADF6E8);
PPC_FUNC_IMPL(__imp__sub_82ADF6E8) {
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
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// addi r4,r10,8516
	ctx.r4.s64 = ctx.r10.s64 + 8516;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,11744
	ctx.r3.s64 = ctx.r10.s64 + 11744;
	// addi r5,r11,23112
	ctx.r5.s64 = ctx.r11.s64 + 23112;
	// bl 0x826969d8
	ctx.lr = 0x82ADF714;
	sub_826969D8(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-27336
	ctx.r3.s64 = ctx.r11.s64 + -27336;
	// bl 0x826ded00
	ctx.lr = 0x82ADF720;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADF730"))) PPC_WEAK_FUNC(sub_82ADF730);
PPC_FUNC_IMPL(__imp__sub_82ADF730) {
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
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// addi r4,r10,8564
	ctx.r4.s64 = ctx.r10.s64 + 8564;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,12020
	ctx.r3.s64 = ctx.r10.s64 + 12020;
	// addi r5,r11,23800
	ctx.r5.s64 = ctx.r11.s64 + 23800;
	// bl 0x826969d8
	ctx.lr = 0x82ADF75C;
	sub_826969D8(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-27312
	ctx.r3.s64 = ctx.r11.s64 + -27312;
	// bl 0x826ded00
	ctx.lr = 0x82ADF768;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADF778"))) PPC_WEAK_FUNC(sub_82ADF778);
PPC_FUNC_IMPL(__imp__sub_82ADF778) {
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
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// addi r4,r10,8636
	ctx.r4.s64 = ctx.r10.s64 + 8636;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,12296
	ctx.r3.s64 = ctx.r10.s64 + 12296;
	// addi r5,r11,24944
	ctx.r5.s64 = ctx.r11.s64 + 24944;
	// bl 0x826969d8
	ctx.lr = 0x82ADF7A4;
	sub_826969D8(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-27288
	ctx.r3.s64 = ctx.r11.s64 + -27288;
	// bl 0x826ded00
	ctx.lr = 0x82ADF7B0;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADF7C0"))) PPC_WEAK_FUNC(sub_82ADF7C0);
PPC_FUNC_IMPL(__imp__sub_82ADF7C0) {
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
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r4,r10,9076
	ctx.r4.s64 = ctx.r10.s64 + 9076;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,22672
	ctx.r3.s64 = ctx.r10.s64 + 22672;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-27560
	ctx.r5.s64 = ctx.r11.s64 + -27560;
	// bl 0x82692d28
	ctx.lr = 0x82ADF7F4;
	sub_82692D28(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-27216
	ctx.r3.s64 = ctx.r11.s64 + -27216;
	// bl 0x826ded00
	ctx.lr = 0x82ADF800;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADF810"))) PPC_WEAK_FUNC(sub_82ADF810);
PPC_FUNC_IMPL(__imp__sub_82ADF810) {
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
	// addi r4,r11,9224
	ctx.r4.s64 = ctx.r11.s64 + 9224;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,25364
	ctx.r3.s64 = ctx.r11.s64 + 25364;
	// bl 0x82692920
	ctx.lr = 0x82ADF838;
	sub_82692920(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-26976
	ctx.r3.s64 = ctx.r11.s64 + -26976;
	// bl 0x826ded00
	ctx.lr = 0x82ADF844;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADF858"))) PPC_WEAK_FUNC(sub_82ADF858);
PPC_FUNC_IMPL(__imp__sub_82ADF858) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r6,r11,25364
	ctx.r6.s64 = ctx.r11.s64 + 25364;
	// addi r4,r10,9236
	ctx.r4.s64 = ctx.r10.s64 + 9236;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,-25776
	ctx.r5.s64 = ctx.r11.s64 + -25776;
	// addi r3,r10,23984
	ctx.r3.s64 = ctx.r10.s64 + 23984;
	// bl 0x82692920
	ctx.lr = 0x82ADF888;
	sub_82692920(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-27168
	ctx.r3.s64 = ctx.r11.s64 + -27168;
	// bl 0x826ded00
	ctx.lr = 0x82ADF894;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADF8A8"))) PPC_WEAK_FUNC(sub_82ADF8A8);
PPC_FUNC_IMPL(__imp__sub_82ADF8A8) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r6,r11,25364
	ctx.r6.s64 = ctx.r11.s64 + 25364;
	// addi r4,r10,9260
	ctx.r4.s64 = ctx.r10.s64 + 9260;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,-21424
	ctx.r5.s64 = ctx.r11.s64 + -21424;
	// addi r3,r10,25088
	ctx.r3.s64 = ctx.r10.s64 + 25088;
	// bl 0x82692920
	ctx.lr = 0x82ADF8D8;
	sub_82692920(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-27144
	ctx.r3.s64 = ctx.r11.s64 + -27144;
	// bl 0x826ded00
	ctx.lr = 0x82ADF8E4;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADF8F8"))) PPC_WEAK_FUNC(sub_82ADF8F8);
PPC_FUNC_IMPL(__imp__sub_82ADF8F8) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r6,r11,25364
	ctx.r6.s64 = ctx.r11.s64 + 25364;
	// addi r4,r10,9284
	ctx.r4.s64 = ctx.r10.s64 + 9284;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,-23128
	ctx.r5.s64 = ctx.r11.s64 + -23128;
	// addi r3,r10,24260
	ctx.r3.s64 = ctx.r10.s64 + 24260;
	// bl 0x82692920
	ctx.lr = 0x82ADF928;
	sub_82692920(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-27120
	ctx.r3.s64 = ctx.r11.s64 + -27120;
	// bl 0x826ded00
	ctx.lr = 0x82ADF934;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADF948"))) PPC_WEAK_FUNC(sub_82ADF948);
PPC_FUNC_IMPL(__imp__sub_82ADF948) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r6,r11,25364
	ctx.r6.s64 = ctx.r11.s64 + 25364;
	// addi r4,r10,9320
	ctx.r4.s64 = ctx.r10.s64 + 9320;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,-22424
	ctx.r5.s64 = ctx.r11.s64 + -22424;
	// addi r3,r10,26192
	ctx.r3.s64 = ctx.r10.s64 + 26192;
	// bl 0x82692920
	ctx.lr = 0x82ADF978;
	sub_82692920(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-27096
	ctx.r3.s64 = ctx.r11.s64 + -27096;
	// bl 0x826ded00
	ctx.lr = 0x82ADF984;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADF998"))) PPC_WEAK_FUNC(sub_82ADF998);
PPC_FUNC_IMPL(__imp__sub_82ADF998) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r6,r11,23984
	ctx.r6.s64 = ctx.r11.s64 + 23984;
	// addi r4,r10,9348
	ctx.r4.s64 = ctx.r10.s64 + 9348;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,-25056
	ctx.r5.s64 = ctx.r11.s64 + -25056;
	// addi r3,r10,25640
	ctx.r3.s64 = ctx.r10.s64 + 25640;
	// bl 0x82692920
	ctx.lr = 0x82ADF9C8;
	sub_82692920(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-27072
	ctx.r3.s64 = ctx.r11.s64 + -27072;
	// bl 0x826ded00
	ctx.lr = 0x82ADF9D4;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADF9E8"))) PPC_WEAK_FUNC(sub_82ADF9E8);
PPC_FUNC_IMPL(__imp__sub_82ADF9E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r4,r10,9368
	ctx.r4.s64 = ctx.r10.s64 + 9368;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r10,24812
	ctx.r31.s64 = ctx.r10.s64 + 24812;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-24816
	ctx.r5.s64 = ctx.r11.s64 + -24816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8269adc8
	ctx.lr = 0x82ADFA24;
	sub_8269ADC8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32081
	ctx.r10.s64 = -2102460416;
	// addi r11,r11,15040
	ctx.r11.s64 = ctx.r11.s64 + 15040;
	// addi r3,r10,-27048
	ctx.r3.s64 = ctx.r10.s64 + -27048;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x82ADFA3C;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADFA50"))) PPC_WEAK_FUNC(sub_82ADFA50);
PPC_FUNC_IMPL(__imp__sub_82ADFA50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r4,r10,9396
	ctx.r4.s64 = ctx.r10.s64 + 9396;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r10,25916
	ctx.r31.s64 = ctx.r10.s64 + 25916;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-24744
	ctx.r5.s64 = ctx.r11.s64 + -24744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8269adc8
	ctx.lr = 0x82ADFA8C;
	sub_8269ADC8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32081
	ctx.r10.s64 = -2102460416;
	// addi r11,r11,15040
	ctx.r11.s64 = ctx.r11.s64 + 15040;
	// addi r3,r10,-27024
	ctx.r3.s64 = ctx.r10.s64 + -27024;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x82ADFAA4;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADFAB8"))) PPC_WEAK_FUNC(sub_82ADFAB8);
PPC_FUNC_IMPL(__imp__sub_82ADFAB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r4,r10,9412
	ctx.r4.s64 = ctx.r10.s64 + 9412;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r10,24536
	ctx.r31.s64 = ctx.r10.s64 + 24536;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-24672
	ctx.r5.s64 = ctx.r11.s64 + -24672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8269adc8
	ctx.lr = 0x82ADFAF4;
	sub_8269ADC8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32081
	ctx.r10.s64 = -2102460416;
	// addi r11,r11,15040
	ctx.r11.s64 = ctx.r11.s64 + 15040;
	// addi r3,r10,-27000
	ctx.r3.s64 = ctx.r10.s64 + -27000;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x82ADFB0C;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADFB20"))) PPC_WEAK_FUNC(sub_82ADFB20);
PPC_FUNC_IMPL(__imp__sub_82ADFB20) {
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
	// addi r4,r11,9464
	ctx.r4.s64 = ctx.r11.s64 + 9464;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,26744
	ctx.r3.s64 = ctx.r11.s64 + 26744;
	// bl 0x82694c40
	ctx.lr = 0x82ADFB48;
	sub_82694C40(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-26928
	ctx.r3.s64 = ctx.r11.s64 + -26928;
	// bl 0x826ded00
	ctx.lr = 0x82ADFB54;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADFB68"))) PPC_WEAK_FUNC(sub_82ADFB68);
PPC_FUNC_IMPL(__imp__sub_82ADFB68) {
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
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r4,r10,9480
	ctx.r4.s64 = ctx.r10.s64 + 9480;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,26468
	ctx.r3.s64 = ctx.r10.s64 + 26468;
	// addi r5,r11,-19968
	ctx.r5.s64 = ctx.r11.s64 + -19968;
	// bl 0x82694bf8
	ctx.lr = 0x82ADFB94;
	sub_82694BF8(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-26904
	ctx.r3.s64 = ctx.r11.s64 + -26904;
	// bl 0x826ded00
	ctx.lr = 0x82ADFBA0;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADFBB0"))) PPC_WEAK_FUNC(sub_82ADFBB0);
PPC_FUNC_IMPL(__imp__sub_82ADFBB0) {
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
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r4,r10,9556
	ctx.r4.s64 = ctx.r10.s64 + 9556;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,-16464
	ctx.r5.s64 = ctx.r11.s64 + -16464;
	// addi r3,r10,27024
	ctx.r3.s64 = ctx.r10.s64 + 27024;
	// bl 0x826aef50
	ctx.lr = 0x82ADFBD8;
	sub_826AEF50(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-26880
	ctx.r3.s64 = ctx.r11.s64 + -26880;
	// bl 0x826ded00
	ctx.lr = 0x82ADFBE4;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADFBF8"))) PPC_WEAK_FUNC(sub_82ADFBF8);
PPC_FUNC_IMPL(__imp__sub_82ADFBF8) {
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
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r4,r10,9772
	ctx.r4.s64 = ctx.r10.s64 + 9772;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,16832
	ctx.r5.s64 = ctx.r11.s64 + 16832;
	// addi r3,r10,27360
	ctx.r3.s64 = ctx.r10.s64 + 27360;
	// bl 0x826aef50
	ctx.lr = 0x82ADFC20;
	sub_826AEF50(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-26856
	ctx.r3.s64 = ctx.r11.s64 + -26856;
	// bl 0x826ded00
	ctx.lr = 0x82ADFC2C;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADFC40"))) PPC_WEAK_FUNC(sub_82ADFC40);
PPC_FUNC_IMPL(__imp__sub_82ADFC40) {
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
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r4,r10,9868
	ctx.r4.s64 = ctx.r10.s64 + 9868;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,27636
	ctx.r3.s64 = ctx.r10.s64 + 27636;
	// addi r5,r11,18856
	ctx.r5.s64 = ctx.r11.s64 + 18856;
	// bl 0x826b05a0
	ctx.lr = 0x82ADFC6C;
	sub_826B05A0(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-26832
	ctx.r3.s64 = ctx.r11.s64 + -26832;
	// bl 0x826ded00
	ctx.lr = 0x82ADFC78;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADFC88"))) PPC_WEAK_FUNC(sub_82ADFC88);
PPC_FUNC_IMPL(__imp__sub_82ADFC88) {
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
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r4,r10,9980
	ctx.r4.s64 = ctx.r10.s64 + 9980;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,27912
	ctx.r3.s64 = ctx.r10.s64 + 27912;
	// addi r5,r11,22504
	ctx.r5.s64 = ctx.r11.s64 + 22504;
	// bl 0x826b05a0
	ctx.lr = 0x82ADFCB4;
	sub_826B05A0(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-26808
	ctx.r3.s64 = ctx.r11.s64 + -26808;
	// bl 0x826ded00
	ctx.lr = 0x82ADFCC0;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADFCD0"))) PPC_WEAK_FUNC(sub_82ADFCD0);
PPC_FUNC_IMPL(__imp__sub_82ADFCD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r4,r10,10064
	ctx.r4.s64 = ctx.r10.s64 + 10064;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r10,29224
	ctx.r31.s64 = ctx.r10.s64 + 29224;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,22752
	ctx.r5.s64 = ctx.r11.s64 + 22752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826a5a70
	ctx.lr = 0x82ADFD0C;
	sub_826A5A70(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32081
	ctx.r10.s64 = -2102460416;
	// addi r11,r11,15464
	ctx.r11.s64 = ctx.r11.s64 + 15464;
	// addi r3,r10,-26784
	ctx.r3.s64 = ctx.r10.s64 + -26784;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x82ADFD24;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADFD38"))) PPC_WEAK_FUNC(sub_82ADFD38);
PPC_FUNC_IMPL(__imp__sub_82ADFD38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r4,r10,10180
	ctx.r4.s64 = ctx.r10.s64 + 10180;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r10,29500
	ctx.r31.s64 = ctx.r10.s64 + 29500;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,25040
	ctx.r5.s64 = ctx.r11.s64 + 25040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826a5a70
	ctx.lr = 0x82ADFD74;
	sub_826A5A70(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32081
	ctx.r10.s64 = -2102460416;
	// addi r11,r11,15464
	ctx.r11.s64 = ctx.r11.s64 + 15464;
	// addi r3,r10,-26736
	ctx.r3.s64 = ctx.r10.s64 + -26736;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x82ADFD8C;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADFDA0"))) PPC_WEAK_FUNC(sub_82ADFDA0);
PPC_FUNC_IMPL(__imp__sub_82ADFDA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r4,r10,10272
	ctx.r4.s64 = ctx.r10.s64 + 10272;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r10,29776
	ctx.r31.s64 = ctx.r10.s64 + 29776;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,26632
	ctx.r5.s64 = ctx.r11.s64 + 26632;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826a5a70
	ctx.lr = 0x82ADFDDC;
	sub_826A5A70(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32081
	ctx.r10.s64 = -2102460416;
	// addi r11,r11,15464
	ctx.r11.s64 = ctx.r11.s64 + 15464;
	// addi r3,r10,-26712
	ctx.r3.s64 = ctx.r10.s64 + -26712;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x82ADFDF4;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADFE08"))) PPC_WEAK_FUNC(sub_82ADFE08);
PPC_FUNC_IMPL(__imp__sub_82ADFE08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r4,r10,10360
	ctx.r4.s64 = ctx.r10.s64 + 10360;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r10,30052
	ctx.r31.s64 = ctx.r10.s64 + 30052;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,27888
	ctx.r5.s64 = ctx.r11.s64 + 27888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826a5a70
	ctx.lr = 0x82ADFE44;
	sub_826A5A70(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32081
	ctx.r10.s64 = -2102460416;
	// addi r11,r11,15464
	ctx.r11.s64 = ctx.r11.s64 + 15464;
	// addi r3,r10,-26688
	ctx.r3.s64 = ctx.r10.s64 + -26688;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x82ADFE5C;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADFE70"))) PPC_WEAK_FUNC(sub_82ADFE70);
PPC_FUNC_IMPL(__imp__sub_82ADFE70) {
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
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r4,r10,10476
	ctx.r4.s64 = ctx.r10.s64 + 10476;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,30328
	ctx.r3.s64 = ctx.r10.s64 + 30328;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-32392
	ctx.r5.s64 = ctx.r11.s64 + -32392;
	// bl 0x82692d28
	ctx.lr = 0x82ADFEA4;
	sub_82692D28(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-26664
	ctx.r3.s64 = ctx.r11.s64 + -26664;
	// bl 0x826ded00
	ctx.lr = 0x82ADFEB0;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADFEC0"))) PPC_WEAK_FUNC(sub_82ADFEC0);
PPC_FUNC_IMPL(__imp__sub_82ADFEC0) {
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
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r4,r10,10948
	ctx.r4.s64 = ctx.r10.s64 + 10948;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,31640
	ctx.r3.s64 = ctx.r10.s64 + 31640;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-17400
	ctx.r5.s64 = ctx.r11.s64 + -17400;
	// bl 0x82692d28
	ctx.lr = 0x82ADFEF4;
	sub_82692D28(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-26640
	ctx.r3.s64 = ctx.r11.s64 + -26640;
	// bl 0x826ded00
	ctx.lr = 0x82ADFF00;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADFF10"))) PPC_WEAK_FUNC(sub_82ADFF10);
PPC_FUNC_IMPL(__imp__sub_82ADFF10) {
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
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r4,r10,11040
	ctx.r4.s64 = ctx.r10.s64 + 11040;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,31916
	ctx.r3.s64 = ctx.r10.s64 + 31916;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-10944
	ctx.r5.s64 = ctx.r11.s64 + -10944;
	// bl 0x82692d28
	ctx.lr = 0x82ADFF44;
	sub_82692D28(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-26592
	ctx.r3.s64 = ctx.r11.s64 + -26592;
	// bl 0x826ded00
	ctx.lr = 0x82ADFF50;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADFF60"))) PPC_WEAK_FUNC(sub_82ADFF60);
PPC_FUNC_IMPL(__imp__sub_82ADFF60) {
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
	// addi r4,r11,11064
	ctx.r4.s64 = ctx.r11.s64 + 11064;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,32192
	ctx.r3.s64 = ctx.r11.s64 + 32192;
	// bl 0x8268ab90
	ctx.lr = 0x82ADFF88;
	sub_8268AB90(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-26568
	ctx.r3.s64 = ctx.r11.s64 + -26568;
	// bl 0x826ded00
	ctx.lr = 0x82ADFF94;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADFFA8"))) PPC_WEAK_FUNC(sub_82ADFFA8);
PPC_FUNC_IMPL(__imp__sub_82ADFFA8) {
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
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r4,r10,11168
	ctx.r4.s64 = ctx.r10.s64 + 11168;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,-9152
	ctx.r5.s64 = ctx.r11.s64 + -9152;
	// addi r3,r10,32468
	ctx.r3.s64 = ctx.r10.s64 + 32468;
	// bl 0x826aef50
	ctx.lr = 0x82ADFFD0;
	sub_826AEF50(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-26544
	ctx.r3.s64 = ctx.r11.s64 + -26544;
	// bl 0x826ded00
	ctx.lr = 0x82ADFFDC;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ADFFF0"))) PPC_WEAK_FUNC(sub_82ADFFF0);
PPC_FUNC_IMPL(__imp__sub_82ADFFF0) {
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
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r4,r10,11232
	ctx.r4.s64 = ctx.r10.s64 + 11232;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r5,r11,-5920
	ctx.r5.s64 = ctx.r11.s64 + -5920;
	// addi r3,r10,32744
	ctx.r3.s64 = ctx.r10.s64 + 32744;
	// bl 0x826aef50
	ctx.lr = 0x82AE0018;
	sub_826AEF50(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-26520
	ctx.r3.s64 = ctx.r11.s64 + -26520;
	// bl 0x826ded00
	ctx.lr = 0x82AE0024;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0038"))) PPC_WEAK_FUNC(sub_82AE0038);
PPC_FUNC_IMPL(__imp__sub_82AE0038) {
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
	// addi r4,r11,11656
	ctx.r4.s64 = ctx.r11.s64 + 11656;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-25524
	ctx.r3.s64 = ctx.r11.s64 + -25524;
	// bl 0x82694c40
	ctx.lr = 0x82AE0060;
	sub_82694C40(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-26496
	ctx.r3.s64 = ctx.r11.s64 + -26496;
	// bl 0x826ded00
	ctx.lr = 0x82AE006C;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0080"))) PPC_WEAK_FUNC(sub_82AE0080);
PPC_FUNC_IMPL(__imp__sub_82AE0080) {
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
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r4,r10,11736
	ctx.r4.s64 = ctx.r10.s64 + 11736;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-25248
	ctx.r3.s64 = ctx.r10.s64 + -25248;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,25272
	ctx.r5.s64 = ctx.r11.s64 + 25272;
	// bl 0x82692d28
	ctx.lr = 0x82AE00B4;
	sub_82692D28(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-26472
	ctx.r3.s64 = ctx.r11.s64 + -26472;
	// bl 0x826ded00
	ctx.lr = 0x82AE00C0;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE00D0"))) PPC_WEAK_FUNC(sub_82AE00D0);
PPC_FUNC_IMPL(__imp__sub_82AE00D0) {
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
	// addi r4,r11,11824
	ctx.r4.s64 = ctx.r11.s64 + 11824;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-24964
	ctx.r3.s64 = ctx.r11.s64 + -24964;
	// bl 0x82694c40
	ctx.lr = 0x82AE00F8;
	sub_82694C40(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-26448
	ctx.r3.s64 = ctx.r11.s64 + -26448;
	// bl 0x826ded00
	ctx.lr = 0x82AE0104;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0118"))) PPC_WEAK_FUNC(sub_82AE0118);
PPC_FUNC_IMPL(__imp__sub_82AE0118) {
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
	// addi r4,r11,11856
	ctx.r4.s64 = ctx.r11.s64 + 11856;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-24688
	ctx.r3.s64 = ctx.r11.s64 + -24688;
	// bl 0x82694c40
	ctx.lr = 0x82AE0140;
	sub_82694C40(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-26424
	ctx.r3.s64 = ctx.r11.s64 + -26424;
	// bl 0x826ded00
	ctx.lr = 0x82AE014C;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0160"))) PPC_WEAK_FUNC(sub_82AE0160);
PPC_FUNC_IMPL(__imp__sub_82AE0160) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r6,r11,8832
	ctx.r6.s64 = ctx.r11.s64 + 8832;
	// addi r4,r10,12604
	ctx.r4.s64 = ctx.r10.s64 + 12604;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r3,r10,-22548
	ctx.r3.s64 = ctx.r10.s64 + -22548;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r11,-15304
	ctx.r5.s64 = ctx.r11.s64 + -15304;
	// bl 0x82692ca0
	ctx.lr = 0x82AE0198;
	sub_82692CA0(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-26376
	ctx.r3.s64 = ctx.r11.s64 + -26376;
	// bl 0x826ded00
	ctx.lr = 0x82AE01A4;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE01B8"))) PPC_WEAK_FUNC(sub_82AE01B8);
PPC_FUNC_IMPL(__imp__sub_82AE01B8) {
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
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r4,r10,12616
	ctx.r4.s64 = ctx.r10.s64 + 12616;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// addi r5,r11,-16376
	ctx.r5.s64 = ctx.r11.s64 + -16376;
	// addi r3,r10,-22816
	ctx.r3.s64 = ctx.r10.s64 + -22816;
	// bl 0x826be098
	ctx.lr = 0x82AE01E0;
	sub_826BE098(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-26400
	ctx.r3.s64 = ctx.r11.s64 + -26400;
	// bl 0x826ded00
	ctx.lr = 0x82AE01EC;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0200"))) PPC_WEAK_FUNC(sub_82AE0200);
PPC_FUNC_IMPL(__imp__sub_82AE0200) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r6,r11,8832
	ctx.r6.s64 = ctx.r11.s64 + 8832;
	// addi r4,r10,13828
	ctx.r4.s64 = ctx.r10.s64 + 13828;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r3,r10,-22256
	ctx.r3.s64 = ctx.r10.s64 + -22256;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r11,19776
	ctx.r5.s64 = ctx.r11.s64 + 19776;
	// bl 0x82692ca0
	ctx.lr = 0x82AE0238;
	sub_82692CA0(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-26160
	ctx.r3.s64 = ctx.r11.s64 + -26160;
	// bl 0x826ded00
	ctx.lr = 0x82AE0244;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0258"))) PPC_WEAK_FUNC(sub_82AE0258);
PPC_FUNC_IMPL(__imp__sub_82AE0258) {
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
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r4,r10,13860
	ctx.r4.s64 = ctx.r10.s64 + 13860;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// addi r5,r11,26304
	ctx.r5.s64 = ctx.r11.s64 + 26304;
	// addi r3,r10,-10356
	ctx.r3.s64 = ctx.r10.s64 + -10356;
	// bl 0x826c7978
	ctx.lr = 0x82AE0280;
	sub_826C7978(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-25872
	ctx.r3.s64 = ctx.r11.s64 + -25872;
	// bl 0x826ded00
	ctx.lr = 0x82AE028C;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE02A0"))) PPC_WEAK_FUNC(sub_82AE02A0);
PPC_FUNC_IMPL(__imp__sub_82AE02A0) {
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
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r4,r10,13880
	ctx.r4.s64 = ctx.r10.s64 + 13880;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// addi r5,r11,26296
	ctx.r5.s64 = ctx.r11.s64 + 26296;
	// addi r3,r10,-10624
	ctx.r3.s64 = ctx.r10.s64 + -10624;
	// bl 0x826c7a00
	ctx.lr = 0x82AE02C8;
	sub_826C7A00(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-25848
	ctx.r3.s64 = ctx.r11.s64 + -25848;
	// bl 0x826ded00
	ctx.lr = 0x82AE02D4;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE02E8"))) PPC_WEAK_FUNC(sub_82AE02E8);
PPC_FUNC_IMPL(__imp__sub_82AE02E8) {
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
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r4,r10,13896
	ctx.r4.s64 = ctx.r10.s64 + 13896;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// addi r5,r11,26416
	ctx.r5.s64 = ctx.r11.s64 + 26416;
	// addi r3,r10,-9552
	ctx.r3.s64 = ctx.r10.s64 + -9552;
	// bl 0x826c7a00
	ctx.lr = 0x82AE0310;
	sub_826C7A00(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-25824
	ctx.r3.s64 = ctx.r11.s64 + -25824;
	// bl 0x826ded00
	ctx.lr = 0x82AE031C;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0330"))) PPC_WEAK_FUNC(sub_82AE0330);
PPC_FUNC_IMPL(__imp__sub_82AE0330) {
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
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r4,r10,13920
	ctx.r4.s64 = ctx.r10.s64 + 13920;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// addi r5,r11,26448
	ctx.r5.s64 = ctx.r11.s64 + 26448;
	// addi r3,r10,-7944
	ctx.r3.s64 = ctx.r10.s64 + -7944;
	// bl 0x826c7a00
	ctx.lr = 0x82AE0358;
	sub_826C7A00(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-25800
	ctx.r3.s64 = ctx.r11.s64 + -25800;
	// bl 0x826ded00
	ctx.lr = 0x82AE0364;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0378"))) PPC_WEAK_FUNC(sub_82AE0378);
PPC_FUNC_IMPL(__imp__sub_82AE0378) {
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
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r4,r10,13940
	ctx.r4.s64 = ctx.r10.s64 + 13940;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// addi r5,r11,26504
	ctx.r5.s64 = ctx.r11.s64 + 26504;
	// addi r3,r10,-7676
	ctx.r3.s64 = ctx.r10.s64 + -7676;
	// bl 0x826c7a00
	ctx.lr = 0x82AE03A0;
	sub_826C7A00(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-25776
	ctx.r3.s64 = ctx.r11.s64 + -25776;
	// bl 0x826ded00
	ctx.lr = 0x82AE03AC;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE03C0"))) PPC_WEAK_FUNC(sub_82AE03C0);
PPC_FUNC_IMPL(__imp__sub_82AE03C0) {
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
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r4,r10,13964
	ctx.r4.s64 = ctx.r10.s64 + 13964;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// addi r5,r11,29104
	ctx.r5.s64 = ctx.r11.s64 + 29104;
	// addi r3,r10,-10088
	ctx.r3.s64 = ctx.r10.s64 + -10088;
	// bl 0x826c7a88
	ctx.lr = 0x82AE03E8;
	sub_826C7A88(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-25752
	ctx.r3.s64 = ctx.r11.s64 + -25752;
	// bl 0x826ded00
	ctx.lr = 0x82AE03F4;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0408"))) PPC_WEAK_FUNC(sub_82AE0408);
PPC_FUNC_IMPL(__imp__sub_82AE0408) {
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
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// addi r4,r10,13976
	ctx.r4.s64 = ctx.r10.s64 + 13976;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// addi r5,r11,1016
	ctx.r5.s64 = ctx.r11.s64 + 1016;
	// addi r3,r10,-8748
	ctx.r3.s64 = ctx.r10.s64 + -8748;
	// bl 0x826c7a88
	ctx.lr = 0x82AE0430;
	sub_826C7A88(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-25728
	ctx.r3.s64 = ctx.r11.s64 + -25728;
	// bl 0x826ded00
	ctx.lr = 0x82AE043C;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0450"))) PPC_WEAK_FUNC(sub_82AE0450);
PPC_FUNC_IMPL(__imp__sub_82AE0450) {
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
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r4,r10,13988
	ctx.r4.s64 = ctx.r10.s64 + 13988;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// addi r5,r11,29184
	ctx.r5.s64 = ctx.r11.s64 + 29184;
	// addi r3,r10,-9284
	ctx.r3.s64 = ctx.r10.s64 + -9284;
	// bl 0x826c7a88
	ctx.lr = 0x82AE0478;
	sub_826C7A88(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-25704
	ctx.r3.s64 = ctx.r11.s64 + -25704;
	// bl 0x826ded00
	ctx.lr = 0x82AE0484;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0498"))) PPC_WEAK_FUNC(sub_82AE0498);
PPC_FUNC_IMPL(__imp__sub_82AE0498) {
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
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r4,r10,14012
	ctx.r4.s64 = ctx.r10.s64 + 14012;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// addi r5,r11,26560
	ctx.r5.s64 = ctx.r11.s64 + 26560;
	// addi r3,r10,-7140
	ctx.r3.s64 = ctx.r10.s64 + -7140;
	// bl 0x826c7c20
	ctx.lr = 0x82AE04C0;
	sub_826C7C20(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-25680
	ctx.r3.s64 = ctx.r11.s64 + -25680;
	// bl 0x826ded00
	ctx.lr = 0x82AE04CC;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE04E0"))) PPC_WEAK_FUNC(sub_82AE04E0);
PPC_FUNC_IMPL(__imp__sub_82AE04E0) {
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
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r4,r10,14024
	ctx.r4.s64 = ctx.r10.s64 + 14024;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// addi r5,r11,27000
	ctx.r5.s64 = ctx.r11.s64 + 27000;
	// addi r3,r10,-7408
	ctx.r3.s64 = ctx.r10.s64 + -7408;
	// bl 0x826c7c20
	ctx.lr = 0x82AE0508;
	sub_826C7C20(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-25656
	ctx.r3.s64 = ctx.r11.s64 + -25656;
	// bl 0x826ded00
	ctx.lr = 0x82AE0514;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0528"))) PPC_WEAK_FUNC(sub_82AE0528);
PPC_FUNC_IMPL(__imp__sub_82AE0528) {
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
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r4,r10,14040
	ctx.r4.s64 = ctx.r10.s64 + 14040;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// addi r5,r11,29728
	ctx.r5.s64 = ctx.r11.s64 + 29728;
	// addi r3,r10,-9016
	ctx.r3.s64 = ctx.r10.s64 + -9016;
	// bl 0x826c7b10
	ctx.lr = 0x82AE0550;
	sub_826C7B10(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-25632
	ctx.r3.s64 = ctx.r11.s64 + -25632;
	// bl 0x826ded00
	ctx.lr = 0x82AE055C;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0570"))) PPC_WEAK_FUNC(sub_82AE0570);
PPC_FUNC_IMPL(__imp__sub_82AE0570) {
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
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r4,r10,14056
	ctx.r4.s64 = ctx.r10.s64 + 14056;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// addi r5,r11,29272
	ctx.r5.s64 = ctx.r11.s64 + 29272;
	// addi r3,r10,-6604
	ctx.r3.s64 = ctx.r10.s64 + -6604;
	// bl 0x826c7b10
	ctx.lr = 0x82AE0598;
	sub_826C7B10(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-25608
	ctx.r3.s64 = ctx.r11.s64 + -25608;
	// bl 0x826ded00
	ctx.lr = 0x82AE05A4;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE05B8"))) PPC_WEAK_FUNC(sub_82AE05B8);
PPC_FUNC_IMPL(__imp__sub_82AE05B8) {
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
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// addi r4,r10,14068
	ctx.r4.s64 = ctx.r10.s64 + 14068;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// addi r5,r11,1016
	ctx.r5.s64 = ctx.r11.s64 + 1016;
	// addi r3,r10,-8480
	ctx.r3.s64 = ctx.r10.s64 + -8480;
	// bl 0x826c7b10
	ctx.lr = 0x82AE05E0;
	sub_826C7B10(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-25584
	ctx.r3.s64 = ctx.r11.s64 + -25584;
	// bl 0x826ded00
	ctx.lr = 0x82AE05EC;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0600"))) PPC_WEAK_FUNC(sub_82AE0600);
PPC_FUNC_IMPL(__imp__sub_82AE0600) {
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
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r4,r10,14076
	ctx.r4.s64 = ctx.r10.s64 + 14076;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// addi r5,r11,28592
	ctx.r5.s64 = ctx.r11.s64 + 28592;
	// addi r3,r10,-9820
	ctx.r3.s64 = ctx.r10.s64 + -9820;
	// bl 0x826c7b98
	ctx.lr = 0x82AE0628;
	sub_826C7B98(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-25560
	ctx.r3.s64 = ctx.r11.s64 + -25560;
	// bl 0x826ded00
	ctx.lr = 0x82AE0634;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0648"))) PPC_WEAK_FUNC(sub_82AE0648);
PPC_FUNC_IMPL(__imp__sub_82AE0648) {
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
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r4,r10,14088
	ctx.r4.s64 = ctx.r10.s64 + 14088;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// addi r5,r11,28904
	ctx.r5.s64 = ctx.r11.s64 + 28904;
	// addi r3,r10,-8212
	ctx.r3.s64 = ctx.r10.s64 + -8212;
	// bl 0x826c7b98
	ctx.lr = 0x82AE0670;
	sub_826C7B98(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-25536
	ctx.r3.s64 = ctx.r11.s64 + -25536;
	// bl 0x826ded00
	ctx.lr = 0x82AE067C;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0690"))) PPC_WEAK_FUNC(sub_82AE0690);
PPC_FUNC_IMPL(__imp__sub_82AE0690) {
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
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r4,r10,14108
	ctx.r4.s64 = ctx.r10.s64 + 14108;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// addi r5,r11,28992
	ctx.r5.s64 = ctx.r11.s64 + 28992;
	// addi r3,r10,-6872
	ctx.r3.s64 = ctx.r10.s64 + -6872;
	// bl 0x826c7b98
	ctx.lr = 0x82AE06B8;
	sub_826C7B98(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-25512
	ctx.r3.s64 = ctx.r11.s64 + -25512;
	// bl 0x826ded00
	ctx.lr = 0x82AE06C4;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE06D8"))) PPC_WEAK_FUNC(sub_82AE06D8);
PPC_FUNC_IMPL(__imp__sub_82AE06D8) {
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
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r4,r10,14488
	ctx.r4.s64 = ctx.r10.s64 + 14488;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// addi r5,r11,-29248
	ctx.r5.s64 = ctx.r11.s64 + -29248;
	// addi r3,r10,-6336
	ctx.r3.s64 = ctx.r10.s64 + -6336;
	// bl 0x826d1f98
	ctx.lr = 0x82AE0700;
	sub_826D1F98(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-25488
	ctx.r3.s64 = ctx.r11.s64 + -25488;
	// bl 0x826ded00
	ctx.lr = 0x82AE070C;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0720"))) PPC_WEAK_FUNC(sub_82AE0720);
PPC_FUNC_IMPL(__imp__sub_82AE0720) {
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
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r4,r10,14516
	ctx.r4.s64 = ctx.r10.s64 + 14516;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-6060
	ctx.r3.s64 = ctx.r10.s64 + -6060;
	// addi r5,r11,-29176
	ctx.r5.s64 = ctx.r11.s64 + -29176;
	// bl 0x826d2170
	ctx.lr = 0x82AE074C;
	sub_826D2170(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-25464
	ctx.r3.s64 = ctx.r11.s64 + -25464;
	// bl 0x826ded00
	ctx.lr = 0x82AE0758;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0768"))) PPC_WEAK_FUNC(sub_82AE0768);
PPC_FUNC_IMPL(__imp__sub_82AE0768) {
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
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r4,r10,14588
	ctx.r4.s64 = ctx.r10.s64 + 14588;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-5784
	ctx.r3.s64 = ctx.r10.s64 + -5784;
	// addi r5,r11,-28848
	ctx.r5.s64 = ctx.r11.s64 + -28848;
	// bl 0x826d2348
	ctx.lr = 0x82AE0794;
	sub_826D2348(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-25440
	ctx.r3.s64 = ctx.r11.s64 + -25440;
	// bl 0x826ded00
	ctx.lr = 0x82AE07A0;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE07B0"))) PPC_WEAK_FUNC(sub_82AE07B0);
PPC_FUNC_IMPL(__imp__sub_82AE07B0) {
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
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r4,r10,14756
	ctx.r4.s64 = ctx.r10.s64 + 14756;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-5508
	ctx.r3.s64 = ctx.r10.s64 + -5508;
	// addi r5,r11,-27472
	ctx.r5.s64 = ctx.r11.s64 + -27472;
	// bl 0x826d2348
	ctx.lr = 0x82AE07DC;
	sub_826D2348(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-25416
	ctx.r3.s64 = ctx.r11.s64 + -25416;
	// bl 0x826ded00
	ctx.lr = 0x82AE07E8;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE07F8"))) PPC_WEAK_FUNC(sub_82AE07F8);
PPC_FUNC_IMPL(__imp__sub_82AE07F8) {
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
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r4,r10,14856
	ctx.r4.s64 = ctx.r10.s64 + 14856;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-5232
	ctx.r3.s64 = ctx.r10.s64 + -5232;
	// addi r5,r11,-20312
	ctx.r5.s64 = ctx.r11.s64 + -20312;
	// bl 0x826d2348
	ctx.lr = 0x82AE0824;
	sub_826D2348(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-25392
	ctx.r3.s64 = ctx.r11.s64 + -25392;
	// bl 0x826ded00
	ctx.lr = 0x82AE0830;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0840"))) PPC_WEAK_FUNC(sub_82AE0840);
PPC_FUNC_IMPL(__imp__sub_82AE0840) {
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
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r4,r10,14888
	ctx.r4.s64 = ctx.r10.s64 + 14888;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-4956
	ctx.r3.s64 = ctx.r10.s64 + -4956;
	// addi r5,r11,-19928
	ctx.r5.s64 = ctx.r11.s64 + -19928;
	// bl 0x826d4898
	ctx.lr = 0x82AE086C;
	sub_826D4898(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-25368
	ctx.r3.s64 = ctx.r11.s64 + -25368;
	// bl 0x826ded00
	ctx.lr = 0x82AE0878;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0888"))) PPC_WEAK_FUNC(sub_82AE0888);
PPC_FUNC_IMPL(__imp__sub_82AE0888) {
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
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r4,r10,14932
	ctx.r4.s64 = ctx.r10.s64 + 14932;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-4680
	ctx.r3.s64 = ctx.r10.s64 + -4680;
	// addi r5,r11,-19400
	ctx.r5.s64 = ctx.r11.s64 + -19400;
	// bl 0x826d4a70
	ctx.lr = 0x82AE08B4;
	sub_826D4A70(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-25344
	ctx.r3.s64 = ctx.r11.s64 + -25344;
	// bl 0x826ded00
	ctx.lr = 0x82AE08C0;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE08D0"))) PPC_WEAK_FUNC(sub_82AE08D0);
PPC_FUNC_IMPL(__imp__sub_82AE08D0) {
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
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r4,r10,14988
	ctx.r4.s64 = ctx.r10.s64 + 14988;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-4404
	ctx.r3.s64 = ctx.r10.s64 + -4404;
	// addi r5,r11,-16920
	ctx.r5.s64 = ctx.r11.s64 + -16920;
	// bl 0x826d4a70
	ctx.lr = 0x82AE08FC;
	sub_826D4A70(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-25320
	ctx.r3.s64 = ctx.r11.s64 + -25320;
	// bl 0x826ded00
	ctx.lr = 0x82AE0908;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0918"))) PPC_WEAK_FUNC(sub_82AE0918);
PPC_FUNC_IMPL(__imp__sub_82AE0918) {
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
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r4,r10,15020
	ctx.r4.s64 = ctx.r10.s64 + 15020;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-4128
	ctx.r3.s64 = ctx.r10.s64 + -4128;
	// addi r5,r11,-16792
	ctx.r5.s64 = ctx.r11.s64 + -16792;
	// bl 0x826d4c90
	ctx.lr = 0x82AE0944;
	sub_826D4C90(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-25296
	ctx.r3.s64 = ctx.r11.s64 + -25296;
	// bl 0x826ded00
	ctx.lr = 0x82AE0950;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0960"))) PPC_WEAK_FUNC(sub_82AE0960);
PPC_FUNC_IMPL(__imp__sub_82AE0960) {
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
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r4,r10,15044
	ctx.r4.s64 = ctx.r10.s64 + 15044;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-3852
	ctx.r3.s64 = ctx.r10.s64 + -3852;
	// addi r5,r11,-15896
	ctx.r5.s64 = ctx.r11.s64 + -15896;
	// bl 0x826d4e68
	ctx.lr = 0x82AE098C;
	sub_826D4E68(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-25272
	ctx.r3.s64 = ctx.r11.s64 + -25272;
	// bl 0x826ded00
	ctx.lr = 0x82AE0998;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE09A8"))) PPC_WEAK_FUNC(sub_82AE09A8);
PPC_FUNC_IMPL(__imp__sub_82AE09A8) {
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
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r4,r10,15124
	ctx.r4.s64 = ctx.r10.s64 + 15124;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-3576
	ctx.r3.s64 = ctx.r10.s64 + -3576;
	// addi r5,r11,-15424
	ctx.r5.s64 = ctx.r11.s64 + -15424;
	// bl 0x826d5040
	ctx.lr = 0x82AE09D4;
	sub_826D5040(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-25248
	ctx.r3.s64 = ctx.r11.s64 + -25248;
	// bl 0x826ded00
	ctx.lr = 0x82AE09E0;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE09F0"))) PPC_WEAK_FUNC(sub_82AE09F0);
PPC_FUNC_IMPL(__imp__sub_82AE09F0) {
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
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r4,r10,15184
	ctx.r4.s64 = ctx.r10.s64 + 15184;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-3300
	ctx.r3.s64 = ctx.r10.s64 + -3300;
	// addi r5,r11,-14752
	ctx.r5.s64 = ctx.r11.s64 + -14752;
	// bl 0x826d5218
	ctx.lr = 0x82AE0A1C;
	sub_826D5218(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-25224
	ctx.r3.s64 = ctx.r11.s64 + -25224;
	// bl 0x826ded00
	ctx.lr = 0x82AE0A28;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0A38"))) PPC_WEAK_FUNC(sub_82AE0A38);
PPC_FUNC_IMPL(__imp__sub_82AE0A38) {
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
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r4,r10,15216
	ctx.r4.s64 = ctx.r10.s64 + 15216;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-3024
	ctx.r3.s64 = ctx.r10.s64 + -3024;
	// addi r5,r11,-13664
	ctx.r5.s64 = ctx.r11.s64 + -13664;
	// bl 0x826d53f0
	ctx.lr = 0x82AE0A64;
	sub_826D53F0(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-25200
	ctx.r3.s64 = ctx.r11.s64 + -25200;
	// bl 0x826ded00
	ctx.lr = 0x82AE0A70;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0A80"))) PPC_WEAK_FUNC(sub_82AE0A80);
PPC_FUNC_IMPL(__imp__sub_82AE0A80) {
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
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r4,r10,15252
	ctx.r4.s64 = ctx.r10.s64 + 15252;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-2748
	ctx.r3.s64 = ctx.r10.s64 + -2748;
	// addi r5,r11,-13456
	ctx.r5.s64 = ctx.r11.s64 + -13456;
	// bl 0x826d55c8
	ctx.lr = 0x82AE0AAC;
	sub_826D55C8(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-25176
	ctx.r3.s64 = ctx.r11.s64 + -25176;
	// bl 0x826ded00
	ctx.lr = 0x82AE0AB8;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0AC8"))) PPC_WEAK_FUNC(sub_82AE0AC8);
PPC_FUNC_IMPL(__imp__sub_82AE0AC8) {
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
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r4,r10,15288
	ctx.r4.s64 = ctx.r10.s64 + 15288;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-2472
	ctx.r3.s64 = ctx.r10.s64 + -2472;
	// addi r5,r11,-13168
	ctx.r5.s64 = ctx.r11.s64 + -13168;
	// bl 0x826d57a0
	ctx.lr = 0x82AE0AF4;
	sub_826D57A0(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-25152
	ctx.r3.s64 = ctx.r11.s64 + -25152;
	// bl 0x826ded00
	ctx.lr = 0x82AE0B00;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0B10"))) PPC_WEAK_FUNC(sub_82AE0B10);
PPC_FUNC_IMPL(__imp__sub_82AE0B10) {
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
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r4,r10,15348
	ctx.r4.s64 = ctx.r10.s64 + 15348;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-2196
	ctx.r3.s64 = ctx.r10.s64 + -2196;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-11288
	ctx.r5.s64 = ctx.r11.s64 + -11288;
	// bl 0x82692d28
	ctx.lr = 0x82AE0B44;
	sub_82692D28(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-25128
	ctx.r3.s64 = ctx.r11.s64 + -25128;
	// bl 0x826ded00
	ctx.lr = 0x82AE0B50;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0B60"))) PPC_WEAK_FUNC(sub_82AE0B60);
PPC_FUNC_IMPL(__imp__sub_82AE0B60) {
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
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r4,r10,15400
	ctx.r4.s64 = ctx.r10.s64 + 15400;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// addi r5,r11,-7808
	ctx.r5.s64 = ctx.r11.s64 + -7808;
	// addi r3,r10,-1920
	ctx.r3.s64 = ctx.r10.s64 + -1920;
	// bl 0x826d1f98
	ctx.lr = 0x82AE0B88;
	sub_826D1F98(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-25104
	ctx.r3.s64 = ctx.r11.s64 + -25104;
	// bl 0x826ded00
	ctx.lr = 0x82AE0B94;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0BA8"))) PPC_WEAK_FUNC(sub_82AE0BA8);
PPC_FUNC_IMPL(__imp__sub_82AE0BA8) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r6,r11,5460
	ctx.r6.s64 = ctx.r11.s64 + 5460;
	// addi r4,r10,15700
	ctx.r4.s64 = ctx.r10.s64 + 15700;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// addi r5,r11,24288
	ctx.r5.s64 = ctx.r11.s64 + 24288;
	// addi r3,r10,-1644
	ctx.r3.s64 = ctx.r10.s64 + -1644;
	// bl 0x82691858
	ctx.lr = 0x82AE0BD8;
	sub_82691858(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-25080
	ctx.r3.s64 = ctx.r11.s64 + -25080;
	// bl 0x826ded00
	ctx.lr = 0x82AE0BE4;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0BF8"))) PPC_WEAK_FUNC(sub_82AE0BF8);
PPC_FUNC_IMPL(__imp__sub_82AE0BF8) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r6,r11,5184
	ctx.r6.s64 = ctx.r11.s64 + 5184;
	// addi r4,r10,15912
	ctx.r4.s64 = ctx.r10.s64 + 15912;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// addi r5,r11,30200
	ctx.r5.s64 = ctx.r11.s64 + 30200;
	// addi r3,r10,-1368
	ctx.r3.s64 = ctx.r10.s64 + -1368;
	// bl 0x82691858
	ctx.lr = 0x82AE0C28;
	sub_82691858(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-25056
	ctx.r3.s64 = ctx.r11.s64 + -25056;
	// bl 0x826ded00
	ctx.lr = 0x82AE0C34;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0C48"))) PPC_WEAK_FUNC(sub_82AE0C48);
PPC_FUNC_IMPL(__imp__sub_82AE0C48) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r6,r11,5184
	ctx.r6.s64 = ctx.r11.s64 + 5184;
	// addi r4,r10,15992
	ctx.r4.s64 = ctx.r10.s64 + 15992;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// addi r5,r11,30736
	ctx.r5.s64 = ctx.r11.s64 + 30736;
	// addi r3,r10,-1092
	ctx.r3.s64 = ctx.r10.s64 + -1092;
	// bl 0x82691858
	ctx.lr = 0x82AE0C78;
	sub_82691858(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-25032
	ctx.r3.s64 = ctx.r11.s64 + -25032;
	// bl 0x826ded00
	ctx.lr = 0x82AE0C84;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0C98"))) PPC_WEAK_FUNC(sub_82AE0C98);
PPC_FUNC_IMPL(__imp__sub_82AE0C98) {
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
	// lis r11,-32146
	ctx.r11.s64 = -2106720256;
	// addi r4,r10,16084
	ctx.r4.s64 = ctx.r10.s64 + 16084;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-816
	ctx.r3.s64 = ctx.r10.s64 + -816;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-29872
	ctx.r5.s64 = ctx.r11.s64 + -29872;
	// bl 0x82692d28
	ctx.lr = 0x82AE0CCC;
	sub_82692D28(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-25008
	ctx.r3.s64 = ctx.r11.s64 + -25008;
	// bl 0x826ded00
	ctx.lr = 0x82AE0CD8;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0CE8"))) PPC_WEAK_FUNC(sub_82AE0CE8);
PPC_FUNC_IMPL(__imp__sub_82AE0CE8) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r6,r11,5184
	ctx.r6.s64 = ctx.r11.s64 + 5184;
	// addi r4,r10,16164
	ctx.r4.s64 = ctx.r10.s64 + 16164;
	// lis r11,-32146
	ctx.r11.s64 = -2106720256;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// addi r5,r11,-29424
	ctx.r5.s64 = ctx.r11.s64 + -29424;
	// addi r3,r10,-540
	ctx.r3.s64 = ctx.r10.s64 + -540;
	// bl 0x82691858
	ctx.lr = 0x82AE0D18;
	sub_82691858(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-24984
	ctx.r3.s64 = ctx.r11.s64 + -24984;
	// bl 0x826ded00
	ctx.lr = 0x82AE0D24;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0D38"))) PPC_WEAK_FUNC(sub_82AE0D38);
PPC_FUNC_IMPL(__imp__sub_82AE0D38) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r6,r11,5184
	ctx.r6.s64 = ctx.r11.s64 + 5184;
	// addi r4,r10,16304
	ctx.r4.s64 = ctx.r10.s64 + 16304;
	// lis r11,-32146
	ctx.r11.s64 = -2106720256;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// addi r5,r11,-24416
	ctx.r5.s64 = ctx.r11.s64 + -24416;
	// addi r3,r10,-264
	ctx.r3.s64 = ctx.r10.s64 + -264;
	// bl 0x82691858
	ctx.lr = 0x82AE0D68;
	sub_82691858(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-24960
	ctx.r3.s64 = ctx.r11.s64 + -24960;
	// bl 0x826ded00
	ctx.lr = 0x82AE0D74;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0D88"))) PPC_WEAK_FUNC(sub_82AE0D88);
PPC_FUNC_IMPL(__imp__sub_82AE0D88) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r6,r11,5460
	ctx.r6.s64 = ctx.r11.s64 + 5460;
	// addi r4,r10,16384
	ctx.r4.s64 = ctx.r10.s64 + 16384;
	// lis r11,-32146
	ctx.r11.s64 = -2106720256;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// addi r5,r11,-23112
	ctx.r5.s64 = ctx.r11.s64 + -23112;
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
	// bl 0x82691858
	ctx.lr = 0x82AE0DB8;
	sub_82691858(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// bl 0x826ded00
	ctx.lr = 0x82AE0DC4;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0DD8"))) PPC_WEAK_FUNC(sub_82AE0DD8);
PPC_FUNC_IMPL(__imp__sub_82AE0DD8) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r6,r11,5460
	ctx.r6.s64 = ctx.r11.s64 + 5460;
	// addi r4,r10,16480
	ctx.r4.s64 = ctx.r10.s64 + 16480;
	// lis r11,-32146
	ctx.r11.s64 = -2106720256;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// addi r5,r11,-22128
	ctx.r5.s64 = ctx.r11.s64 + -22128;
	// addi r3,r10,288
	ctx.r3.s64 = ctx.r10.s64 + 288;
	// bl 0x82691858
	ctx.lr = 0x82AE0E08;
	sub_82691858(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-24912
	ctx.r3.s64 = ctx.r11.s64 + -24912;
	// bl 0x826ded00
	ctx.lr = 0x82AE0E14;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0E28"))) PPC_WEAK_FUNC(sub_82AE0E28);
PPC_FUNC_IMPL(__imp__sub_82AE0E28) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r6,r11,5460
	ctx.r6.s64 = ctx.r11.s64 + 5460;
	// addi r4,r10,16568
	ctx.r4.s64 = ctx.r10.s64 + 16568;
	// lis r11,-32146
	ctx.r11.s64 = -2106720256;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// addi r5,r11,-21344
	ctx.r5.s64 = ctx.r11.s64 + -21344;
	// addi r3,r10,564
	ctx.r3.s64 = ctx.r10.s64 + 564;
	// bl 0x82691858
	ctx.lr = 0x82AE0E58;
	sub_82691858(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-24888
	ctx.r3.s64 = ctx.r11.s64 + -24888;
	// bl 0x826ded00
	ctx.lr = 0x82AE0E64;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0E78"))) PPC_WEAK_FUNC(sub_82AE0E78);
PPC_FUNC_IMPL(__imp__sub_82AE0E78) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r6,r11,5460
	ctx.r6.s64 = ctx.r11.s64 + 5460;
	// addi r4,r10,16660
	ctx.r4.s64 = ctx.r10.s64 + 16660;
	// lis r11,-32146
	ctx.r11.s64 = -2106720256;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// addi r5,r11,-20416
	ctx.r5.s64 = ctx.r11.s64 + -20416;
	// addi r3,r10,840
	ctx.r3.s64 = ctx.r10.s64 + 840;
	// bl 0x82691858
	ctx.lr = 0x82AE0EA8;
	sub_82691858(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-24864
	ctx.r3.s64 = ctx.r11.s64 + -24864;
	// bl 0x826ded00
	ctx.lr = 0x82AE0EB4;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0EC8"))) PPC_WEAK_FUNC(sub_82AE0EC8);
PPC_FUNC_IMPL(__imp__sub_82AE0EC8) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r6,r11,5460
	ctx.r6.s64 = ctx.r11.s64 + 5460;
	// addi r4,r10,16752
	ctx.r4.s64 = ctx.r10.s64 + 16752;
	// lis r11,-32146
	ctx.r11.s64 = -2106720256;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// addi r5,r11,-19736
	ctx.r5.s64 = ctx.r11.s64 + -19736;
	// addi r3,r10,1116
	ctx.r3.s64 = ctx.r10.s64 + 1116;
	// bl 0x82691858
	ctx.lr = 0x82AE0EF8;
	sub_82691858(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-24840
	ctx.r3.s64 = ctx.r11.s64 + -24840;
	// bl 0x826ded00
	ctx.lr = 0x82AE0F04;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0F18"))) PPC_WEAK_FUNC(sub_82AE0F18);
PPC_FUNC_IMPL(__imp__sub_82AE0F18) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r6,r11,5460
	ctx.r6.s64 = ctx.r11.s64 + 5460;
	// addi r4,r10,16840
	ctx.r4.s64 = ctx.r10.s64 + 16840;
	// lis r11,-32146
	ctx.r11.s64 = -2106720256;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// addi r5,r11,-19112
	ctx.r5.s64 = ctx.r11.s64 + -19112;
	// addi r3,r10,1392
	ctx.r3.s64 = ctx.r10.s64 + 1392;
	// bl 0x82691858
	ctx.lr = 0x82AE0F48;
	sub_82691858(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-24816
	ctx.r3.s64 = ctx.r11.s64 + -24816;
	// bl 0x826ded00
	ctx.lr = 0x82AE0F54;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0F68"))) PPC_WEAK_FUNC(sub_82AE0F68);
PPC_FUNC_IMPL(__imp__sub_82AE0F68) {
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
	// lis r11,-32146
	ctx.r11.s64 = -2106720256;
	// addi r4,r10,17084
	ctx.r4.s64 = ctx.r10.s64 + 17084;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,1672
	ctx.r3.s64 = ctx.r10.s64 + 1672;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-16904
	ctx.r5.s64 = ctx.r11.s64 + -16904;
	// bl 0x82692d28
	ctx.lr = 0x82AE0F9C;
	sub_82692D28(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-24792
	ctx.r3.s64 = ctx.r11.s64 + -24792;
	// bl 0x826ded00
	ctx.lr = 0x82AE0FA8;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0FB8"))) PPC_WEAK_FUNC(sub_82AE0FB8);
PPC_FUNC_IMPL(__imp__sub_82AE0FB8) {
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
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// addi r3,r11,20528
	ctx.r3.s64 = ctx.r11.s64 + 20528;
	// bl 0x826ded00
	ctx.lr = 0x82AE0FD0;
	sub_826DED00(ctx, base);
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// addi r3,r11,20336
	ctx.r3.s64 = ctx.r11.s64 + 20336;
	// bl 0x82537f68
	ctx.lr = 0x82AE0FDC;
	sub_82537F68(ctx, base);
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// stw r3,2548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2548, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE0FF8"))) PPC_WEAK_FUNC(sub_82AE0FF8);
PPC_FUNC_IMPL(__imp__sub_82AE0FF8) {
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
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// addi r11,r11,-20904
	ctx.r11.s64 = ctx.r11.s64 + -20904;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82aea1fc
	ctx.lr = 0x82AE1014;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-24768
	ctx.r3.s64 = ctx.r11.s64 + -24768;
	// bl 0x826ded00
	ctx.lr = 0x82AE1020;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE1030"))) PPC_WEAK_FUNC(sub_82AE1030);
PPC_FUNC_IMPL(__imp__sub_82AE1030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r3,r11,12856
	ctx.r3.s64 = ctx.r11.s64 + 12856;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x826dfd40
	sub_826DFD40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE1048"))) PPC_WEAK_FUNC(sub_82AE1048);
PPC_FUNC_IMPL(__imp__sub_82AE1048) {
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
	// bl 0x82aea83c
	ctx.lr = 0x82AE1058;
	__imp__KeTlsAlloc(ctx, base);
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// stw r3,12944(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12944, ctx.r3.u32);
	// addi r3,r11,-24744
	ctx.r3.s64 = ctx.r11.s64 + -24744;
	// bl 0x826ded00
	ctx.lr = 0x82AE106C;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE1080"))) PPC_WEAK_FUNC(sub_82AE1080);
PPC_FUNC_IMPL(__imp__sub_82AE1080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// li r31,4
	ctx.r31.s64 = 4;
	// addi r30,r11,12948
	ctx.r30.s64 = ctx.r11.s64 + 12948;
loc_82AE10A0:
	// bl 0x82aea83c
	ctx.lr = 0x82AE10A4;
	__imp__KeTlsAlloc(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bge 0x82ae10a0
	if (!ctx.cr0.lt) goto loc_82AE10A0;
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-24728
	ctx.r3.s64 = ctx.r11.s64 + -24728;
	// bl 0x826ded00
	ctx.lr = 0x82AE10C0;
	sub_826DED00(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE10D8"))) PPC_WEAK_FUNC(sub_82AE10D8);
PPC_FUNC_IMPL(__imp__sub_82AE10D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// addi r11,r11,-880
	ctx.r11.s64 = ctx.r11.s64 + -880;
	// lwz r9,12992(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12992);
	// stw r11,12992(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12992, ctx.r11.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE10F8"))) PPC_WEAK_FUNC(sub_82AE10F8);
PPC_FUNC_IMPL(__imp__sub_82AE10F8) {
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
	// bl 0x82aea83c
	ctx.lr = 0x82AE1108;
	__imp__KeTlsAlloc(ctx, base);
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// stw r3,13004(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13004, ctx.r3.u32);
	// addi r3,r11,-24648
	ctx.r3.s64 = ctx.r11.s64 + -24648;
	// bl 0x826ded00
	ctx.lr = 0x82AE111C;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE1130"))) PPC_WEAK_FUNC(sub_82AE1130);
PPC_FUNC_IMPL(__imp__sub_82AE1130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82835150
	ctx.lr = 0x82AE1148;
	sub_82835150(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r8,-32125
	ctx.r8.s64 = -2105344000;
	// addi r10,r11,-11640
	ctx.r10.s64 = ctx.r11.s64 + -11640;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r9,r11,-11684
	ctx.r9.s64 = ctx.r11.s64 + -11684;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// addi r11,r11,13008
	ctx.r11.s64 = ctx.r11.s64 + 13008;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,21312
	ctx.r10.s64 = ctx.r8.s64 + 21312;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE1188"))) PPC_WEAK_FUNC(sub_82AE1188);
PPC_FUNC_IMPL(__imp__sub_82AE1188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82835150
	ctx.lr = 0x82AE11A0;
	sub_82835150(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-32124
	ctx.r9.s64 = -2105278464;
	// addi r10,r11,-10040
	ctx.r10.s64 = ctx.r11.s64 + -10040;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// addi r11,r11,13020
	ctx.r11.s64 = ctx.r11.s64 + 13020;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r9,18136
	ctx.r10.s64 = ctx.r9.s64 + 18136;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE11D8"))) PPC_WEAK_FUNC(sub_82AE11D8);
PPC_FUNC_IMPL(__imp__sub_82AE11D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-24632
	ctx.r3.s64 = ctx.r11.s64 + -24632;
	// b 0x826ded00
	sub_826DED00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE11E8"))) PPC_WEAK_FUNC(sub_82AE11E8);
PPC_FUNC_IMPL(__imp__sub_82AE11E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8284a658
	ctx.lr = 0x82AE1200;
	sub_8284A658(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r8,-32123
	ctx.r8.s64 = -2105212928;
	// addi r10,r11,-8592
	ctx.r10.s64 = ctx.r11.s64 + -8592;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r9,r11,-8640
	ctx.r9.s64 = ctx.r11.s64 + -8640;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// addi r11,r11,13032
	ctx.r11.s64 = ctx.r11.s64 + 13032;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-22664
	ctx.r10.s64 = ctx.r8.s64 + -22664;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE1240"))) PPC_WEAK_FUNC(sub_82AE1240);
PPC_FUNC_IMPL(__imp__sub_82AE1240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828611f0
	ctx.lr = 0x82AE1258;
	sub_828611F0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-32122
	ctx.r9.s64 = -2105147392;
	// addi r10,r11,-5040
	ctx.r10.s64 = ctx.r11.s64 + -5040;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// addi r11,r11,13188
	ctx.r11.s64 = ctx.r11.s64 + 13188;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r9,6472
	ctx.r10.s64 = ctx.r9.s64 + 6472;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE1290"))) PPC_WEAK_FUNC(sub_82AE1290);
PPC_FUNC_IMPL(__imp__sub_82AE1290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-24608
	ctx.r3.s64 = ctx.r11.s64 + -24608;
	// b 0x826ded00
	sub_826DED00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE12A0"))) PPC_WEAK_FUNC(sub_82AE12A0);
PPC_FUNC_IMPL(__imp__sub_82AE12A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82877120
	ctx.lr = 0x82AE12B8;
	sub_82877120(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r8,-32121
	ctx.r8.s64 = -2105081856;
	// addi r10,r11,-3148
	ctx.r10.s64 = ctx.r11.s64 + -3148;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r9,r11,-12120
	ctx.r9.s64 = ctx.r11.s64 + -12120;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// addi r11,r11,13204
	ctx.r11.s64 = ctx.r11.s64 + 13204;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,30144
	ctx.r10.s64 = ctx.r8.s64 + 30144;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE12F8"))) PPC_WEAK_FUNC(sub_82AE12F8);
PPC_FUNC_IMPL(__imp__sub_82AE12F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// lfs f0,-7280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -7280);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// stfs f0,13256(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 13256, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE1310"))) PPC_WEAK_FUNC(sub_82AE1310);
PPC_FUNC_IMPL(__imp__sub_82AE1310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,13308
	ctx.r11.s64 = ctx.r11.s64 + 13308;
	// li r10,15
	ctx.r10.s64 = 15;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82AE1324:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82ae1324
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AE1324;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE1338"))) PPC_WEAK_FUNC(sub_82AE1338);
PPC_FUNC_IMPL(__imp__sub_82AE1338) {
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
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// addi r11,r11,5016
	ctx.r11.s64 = ctx.r11.s64 + 5016;
	// addis r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 1572864;
	// addi r3,r11,56
	ctx.r3.s64 = ctx.r11.s64 + 56;
	// bl 0x825d49b0
	ctx.lr = 0x82AE1358;
	sub_825D49B0(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-24496
	ctx.r3.s64 = ctx.r11.s64 + -24496;
	// bl 0x826ded00
	ctx.lr = 0x82AE1364;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE1378"))) PPC_WEAK_FUNC(sub_82AE1378);
PPC_FUNC_IMPL(__imp__sub_82AE1378) {
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// addi r4,r10,23020
	ctx.r4.s64 = ctx.r10.s64 + 23020;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// addi r5,r11,18272
	ctx.r5.s64 = ctx.r11.s64 + 18272;
	// addi r3,r10,14200
	ctx.r3.s64 = ctx.r10.s64 + 14200;
	// bl 0x8268ac20
	ctx.lr = 0x82AE13A0;
	sub_8268AC20(ctx, base);
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-24424
	ctx.r3.s64 = ctx.r11.s64 + -24424;
	// bl 0x826ded00
	ctx.lr = 0x82AE13AC;
	sub_826DED00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE13C0"))) PPC_WEAK_FUNC(sub_82AE13C0);
PPC_FUNC_IMPL(__imp__sub_82AE13C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// li r4,109
	ctx.r4.s64 = 109;
	// addi r3,r11,20228
	ctx.r3.s64 = ctx.r11.s64 + 20228;
	// b 0x82a65290
	sub_82A65290(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE13D0"))) PPC_WEAK_FUNC(sub_82AE13D0);
PPC_FUNC_IMPL(__imp__sub_82AE13D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// addi r4,r11,20228
	ctx.r4.s64 = ctx.r11.s64 + 20228;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// addi r3,r11,20264
	ctx.r3.s64 = ctx.r11.s64 + 20264;
	// b 0x82a63520
	sub_82A63520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AE13E8"))) PPC_WEAK_FUNC(sub_82AE13E8);
PPC_FUNC_IMPL(__imp__sub_82AE13E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r11,r11,19416
	ctx.r11.s64 = ctx.r11.s64 + 19416;
	// lwz r9,12992(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12992);
	// stw r11,12992(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12992, ctx.r11.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE1408"))) PPC_WEAK_FUNC(sub_82AE1408);
PPC_FUNC_IMPL(__imp__sub_82AE1408) {
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
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r10,27748
	ctx.r4.s64 = ctx.r10.s64 + 27748;
	// addi r11,r11,27688
	ctx.r11.s64 = ctx.r11.s64 + 27688;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,20444
	ctx.r3.s64 = ctx.r10.s64 + 20444;
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
	ctx.lr = 0x82AE1458;
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

__attribute__((alias("__imp__sub_82AE1468"))) PPC_WEAK_FUNC(sub_82AE1468);
PPC_FUNC_IMPL(__imp__sub_82AE1468) {
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
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r10,27784
	ctx.r4.s64 = ctx.r10.s64 + 27784;
	// addi r11,r11,27728
	ctx.r11.s64 = ctx.r11.s64 + 27728;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,20480
	ctx.r3.s64 = ctx.r10.s64 + 20480;
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
	ctx.lr = 0x82AE14B8;
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

__attribute__((alias("__imp__sub_82AE14C8"))) PPC_WEAK_FUNC(sub_82AE14C8);
PPC_FUNC_IMPL(__imp__sub_82AE14C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r11,28008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28008);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r11,r11,19428
	ctx.r11.s64 = ctx.r11.s64 + 19428;
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE14F0"))) PPC_WEAK_FUNC(sub_82AE14F0);
PPC_FUNC_IMPL(__imp__sub_82AE14F0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r11,r11,19432
	ctx.r11.s64 = ctx.r11.s64 + 19432;
	// lwz r9,12992(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12992);
	// stw r11,12992(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12992, ctx.r11.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE1510"))) PPC_WEAK_FUNC(sub_82AE1510);
PPC_FUNC_IMPL(__imp__sub_82AE1510) {
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
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r10,28448
	ctx.r4.s64 = ctx.r10.s64 + 28448;
	// addi r11,r11,28408
	ctx.r11.s64 = ctx.r11.s64 + 28408;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,20520
	ctx.r3.s64 = ctx.r10.s64 + 20520;
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
	ctx.lr = 0x82AE1564;
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

__attribute__((alias("__imp__sub_82AE1578"))) PPC_WEAK_FUNC(sub_82AE1578);
PPC_FUNC_IMPL(__imp__sub_82AE1578) {
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
	ctx.lr = 0x82AE1590;
	sub_8284A658(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r8,-32084
	ctx.r8.s64 = -2102657024;
	// addi r10,r11,29712
	ctx.r10.s64 = ctx.r11.s64 + 29712;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r9,r11,29652
	ctx.r9.s64 = ctx.r11.s64 + 29652;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// addi r11,r11,20556
	ctx.r11.s64 = ctx.r11.s64 + 20556;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-24168
	ctx.r10.s64 = ctx.r8.s64 + -24168;
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

__attribute__((alias("__imp__sub_82AE15D0"))) PPC_WEAK_FUNC(sub_82AE15D0);
PPC_FUNC_IMPL(__imp__sub_82AE15D0) {
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
	// addi r5,r10,21736
	ctx.r5.s64 = ctx.r10.s64 + 21736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r10,-10868
	ctx.r4.s64 = ctx.r10.s64 + -10868;
	// addi r11,r11,29792
	ctx.r11.s64 = ctx.r11.s64 + 29792;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,20568
	ctx.r3.s64 = ctx.r10.s64 + 20568;
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
	ctx.lr = 0x82AE1624;
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

__attribute__((alias("__imp__sub_82AE1638"))) PPC_WEAK_FUNC(sub_82AE1638);
PPC_FUNC_IMPL(__imp__sub_82AE1638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// lwz r10,19652(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19652);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r11,r11,19656
	ctx.r11.s64 = ctx.r11.s64 + 19656;
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// lwz r10,19648(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19648);
	// stw r10,228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 228, ctx.r10.u32);
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// lwz r10,19644(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19644);
	// stw r10,468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 468, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE1668"))) PPC_WEAK_FUNC(sub_82AE1668);
PPC_FUNC_IMPL(__imp__sub_82AE1668) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// addi r9,r11,31096
	ctx.r9.s64 = ctx.r11.s64 + 31096;
	// addi r5,r10,21736
	ctx.r5.s64 = ctx.r10.s64 + 21736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r8,r9,48
	ctx.r8.s64 = ctx.r9.s64 + 48;
	// li r7,27
	ctx.r7.s64 = 27;
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r4,r10,-12272
	ctx.r4.s64 = ctx.r10.s64 + -12272;
	// addi r11,r11,19656
	ctx.r11.s64 = ctx.r11.s64 + 19656;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,20604
	ctx.r3.s64 = ctx.r10.s64 + 20604;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,160
	ctx.r6.s64 = 160;
	// bl 0x82aabf68
	ctx.lr = 0x82AE16C4;
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

__attribute__((alias("__imp__sub_82AE16D8"))) PPC_WEAK_FUNC(sub_82AE16D8);
PPC_FUNC_IMPL(__imp__sub_82AE16D8) {
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
	// addi r5,r10,20820
	ctx.r5.s64 = ctx.r10.s64 + 20820;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r10,31908
	ctx.r4.s64 = ctx.r10.s64 + 31908;
	// addi r11,r11,31868
	ctx.r11.s64 = ctx.r11.s64 + 31868;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,20640
	ctx.r3.s64 = ctx.r10.s64 + 20640;
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
	ctx.lr = 0x82AE172C;
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

__attribute__((alias("__imp__sub_82AE1740"))) PPC_WEAK_FUNC(sub_82AE1740);
PPC_FUNC_IMPL(__imp__sub_82AE1740) {
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
	// addi r5,r10,21736
	ctx.r5.s64 = ctx.r10.s64 + 21736;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r10,32016
	ctx.r4.s64 = ctx.r10.s64 + 32016;
	// addi r11,r11,31936
	ctx.r11.s64 = ctx.r11.s64 + 31936;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,20676
	ctx.r3.s64 = ctx.r10.s64 + 20676;
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
	ctx.lr = 0x82AE1794;
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

__attribute__((alias("__imp__sub_82AE17A8"))) PPC_WEAK_FUNC(sub_82AE17A8);
PPC_FUNC_IMPL(__imp__sub_82AE17A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// addi r10,r10,20216
	ctx.r10.s64 = ctx.r10.s64 + 20216;
	// lwz r11,20200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20200);
	// stw r11,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE17C0"))) PPC_WEAK_FUNC(sub_82AE17C0);
PPC_FUNC_IMPL(__imp__sub_82AE17C0) {
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
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r9,r10,32336
	ctx.r9.s64 = ctx.r10.s64 + 32336;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r5,r10,21736
	ctx.r5.s64 = ctx.r10.s64 + 21736;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,20216
	ctx.r11.s64 = ctx.r11.s64 + 20216;
	// addi r4,r10,-12084
	ctx.r4.s64 = ctx.r10.s64 + -12084;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,20712
	ctx.r3.s64 = ctx.r10.s64 + 20712;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r6,40
	ctx.r6.s64 = 40;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82aabf68
	ctx.lr = 0x82AE1818;
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

__attribute__((alias("__imp__sub_82AE1828"))) PPC_WEAK_FUNC(sub_82AE1828);
PPC_FUNC_IMPL(__imp__sub_82AE1828) {
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
	// addi r5,r10,20856
	ctx.r5.s64 = ctx.r10.s64 + 20856;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-11640
	ctx.r4.s64 = ctx.r10.s64 + -11640;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,20748
	ctx.r3.s64 = ctx.r10.s64 + 20748;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,208
	ctx.r6.s64 = 208;
	// bl 0x82aabf68
	ctx.lr = 0x82AE1874;
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

__attribute__((alias("__imp__sub_82AE1888"))) PPC_WEAK_FUNC(sub_82AE1888);
PPC_FUNC_IMPL(__imp__sub_82AE1888) {
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
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r10,32428
	ctx.r4.s64 = ctx.r10.s64 + 32428;
	// addi r11,r11,32408
	ctx.r11.s64 = ctx.r11.s64 + 32408;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,20784
	ctx.r3.s64 = ctx.r10.s64 + 20784;
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
	ctx.lr = 0x82AE18DC;
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

__attribute__((alias("__imp__sub_82AE18F0"))) PPC_WEAK_FUNC(sub_82AE18F0);
PPC_FUNC_IMPL(__imp__sub_82AE18F0) {
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
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r9,r10,32648
	ctx.r9.s64 = ctx.r10.s64 + 32648;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r10,21736
	ctx.r5.s64 = ctx.r10.s64 + 21736;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,32664
	ctx.r11.s64 = ctx.r11.s64 + 32664;
	// addi r4,r10,-32752
	ctx.r4.s64 = ctx.r10.s64 + -32752;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,20820
	ctx.r3.s64 = ctx.r10.s64 + 20820;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,88
	ctx.r6.s64 = 88;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82aabf68
	ctx.lr = 0x82AE1948;
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

__attribute__((alias("__imp__sub_82AE1958"))) PPC_WEAK_FUNC(sub_82AE1958);
PPC_FUNC_IMPL(__imp__sub_82AE1958) {
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
	// li r9,18
	ctx.r9.s64 = 18;
	// addi r8,r10,-32464
	ctx.r8.s64 = ctx.r10.s64 + -32464;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r5,r10,20820
	ctx.r5.s64 = ctx.r10.s64 + 20820;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,-32104
	ctx.r11.s64 = ctx.r11.s64 + -32104;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,-10040
	ctx.r4.s64 = ctx.r10.s64 + -10040;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,20856
	ctx.r3.s64 = ctx.r10.s64 + 20856;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,208
	ctx.r6.s64 = 208;
	// bl 0x82aabf68
	ctx.lr = 0x82AE19B4;
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

__attribute__((alias("__imp__sub_82AE19C8"))) PPC_WEAK_FUNC(sub_82AE19C8);
PPC_FUNC_IMPL(__imp__sub_82AE19C8) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-31072
	ctx.r9.s64 = ctx.r11.s64 + -31072;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// addi r5,r11,21736
	ctx.r5.s64 = ctx.r11.s64 + 21736;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r4,r11,-30960
	ctx.r4.s64 = ctx.r11.s64 + -30960;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r11,20892
	ctx.r3.s64 = ctx.r11.s64 + 20892;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82aabf68
	ctx.lr = 0x82AE1A20;
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

__attribute__((alias("__imp__sub_82AE1A30"))) PPC_WEAK_FUNC(sub_82AE1A30);
PPC_FUNC_IMPL(__imp__sub_82AE1A30) {
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
	// addi r4,r10,-30940
	ctx.r4.s64 = ctx.r10.s64 + -30940;
	// addi r11,r11,-31040
	ctx.r11.s64 = ctx.r11.s64 + -31040;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,20928
	ctx.r3.s64 = ctx.r10.s64 + 20928;
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
	ctx.lr = 0x82AE1A80;
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

__attribute__((alias("__imp__sub_82AE1A90"))) PPC_WEAK_FUNC(sub_82AE1A90);
PPC_FUNC_IMPL(__imp__sub_82AE1A90) {
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
	// addi r4,r10,-30820
	ctx.r4.s64 = ctx.r10.s64 + -30820;
	// addi r11,r11,-30900
	ctx.r11.s64 = ctx.r11.s64 + -30900;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,20964
	ctx.r3.s64 = ctx.r10.s64 + 20964;
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
	ctx.lr = 0x82AE1AE0;
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

__attribute__((alias("__imp__sub_82AE1AF0"))) PPC_WEAK_FUNC(sub_82AE1AF0);
PPC_FUNC_IMPL(__imp__sub_82AE1AF0) {
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
	// addi r4,r10,-30804
	ctx.r4.s64 = ctx.r10.s64 + -30804;
	// addi r11,r11,-30880
	ctx.r11.s64 = ctx.r11.s64 + -30880;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,21000
	ctx.r3.s64 = ctx.r10.s64 + 21000;
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
	ctx.lr = 0x82AE1B40;
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

__attribute__((alias("__imp__sub_82AE1B50"))) PPC_WEAK_FUNC(sub_82AE1B50);
PPC_FUNC_IMPL(__imp__sub_82AE1B50) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-30680
	ctx.r9.s64 = ctx.r11.s64 + -30680;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r11,-30628
	ctx.r4.s64 = ctx.r11.s64 + -30628;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r11,21036
	ctx.r3.s64 = ctx.r11.s64 + 21036;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE1BA4;
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

__attribute__((alias("__imp__sub_82AE1BB8"))) PPC_WEAK_FUNC(sub_82AE1BB8);
PPC_FUNC_IMPL(__imp__sub_82AE1BB8) {
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
	// addi r4,r10,-30608
	ctx.r4.s64 = ctx.r10.s64 + -30608;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,21072
	ctx.r3.s64 = ctx.r10.s64 + 21072;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82aabf68
	ctx.lr = 0x82AE1C04;
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

__attribute__((alias("__imp__sub_82AE1C18"))) PPC_WEAK_FUNC(sub_82AE1C18);
PPC_FUNC_IMPL(__imp__sub_82AE1C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// addi r10,r10,20392
	ctx.r10.s64 = ctx.r10.s64 + 20392;
	// lwz r11,20388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20388);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE1C30"))) PPC_WEAK_FUNC(sub_82AE1C30);
PPC_FUNC_IMPL(__imp__sub_82AE1C30) {
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
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r9,r10,-30420
	ctx.r9.s64 = ctx.r10.s64 + -30420;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r4,r10,-30396
	ctx.r4.s64 = ctx.r10.s64 + -30396;
	// addi r11,r11,20392
	ctx.r11.s64 = ctx.r11.s64 + 20392;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,21108
	ctx.r3.s64 = ctx.r10.s64 + 21108;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE1C84;
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

__attribute__((alias("__imp__sub_82AE1C98"))) PPC_WEAK_FUNC(sub_82AE1C98);
PPC_FUNC_IMPL(__imp__sub_82AE1C98) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-30056
	ctx.r9.s64 = ctx.r11.s64 + -30056;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// addi r5,r11,21736
	ctx.r5.s64 = ctx.r11.s64 + 21736;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r4,r11,-30024
	ctx.r4.s64 = ctx.r11.s64 + -30024;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r11,21144
	ctx.r3.s64 = ctx.r11.s64 + 21144;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82aabf68
	ctx.lr = 0x82AE1CF0;
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

__attribute__((alias("__imp__sub_82AE1D00"))) PPC_WEAK_FUNC(sub_82AE1D00);
PPC_FUNC_IMPL(__imp__sub_82AE1D00) {
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
	ctx.lr = 0x82AE1D18;
	sub_82ABC488(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r9,-32084
	ctx.r9.s64 = -2102657024;
	// addi r10,r11,-29508
	ctx.r10.s64 = ctx.r11.s64 + -29508;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// addi r11,r11,21180
	ctx.r11.s64 = ctx.r11.s64 + 21180;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r9,-15104
	ctx.r10.s64 = ctx.r9.s64 + -15104;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE1D50"))) PPC_WEAK_FUNC(sub_82AE1D50);
PPC_FUNC_IMPL(__imp__sub_82AE1D50) {
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
	// addi r4,r10,-29440
	ctx.r4.s64 = ctx.r10.s64 + -29440;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,21192
	ctx.r3.s64 = ctx.r10.s64 + 21192;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82aabf68
	ctx.lr = 0x82AE1D9C;
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

__attribute__((alias("__imp__sub_82AE1DB0"))) PPC_WEAK_FUNC(sub_82AE1DB0);
PPC_FUNC_IMPL(__imp__sub_82AE1DB0) {
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
	// addi r5,r10,27760
	ctx.r5.s64 = ctx.r10.s64 + 27760;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-29216
	ctx.r4.s64 = ctx.r10.s64 + -29216;
	// addi r11,r11,-29236
	ctx.r11.s64 = ctx.r11.s64 + -29236;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,21228
	ctx.r3.s64 = ctx.r10.s64 + 21228;
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
	ctx.lr = 0x82AE1E04;
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

__attribute__((alias("__imp__sub_82AE1E18"))) PPC_WEAK_FUNC(sub_82AE1E18);
PPC_FUNC_IMPL(__imp__sub_82AE1E18) {
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
	// li r8,7
	ctx.r8.s64 = 7;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-25236
	ctx.r4.s64 = ctx.r10.s64 + -25236;
	// addi r11,r11,-25376
	ctx.r11.s64 = ctx.r11.s64 + -25376;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,21700
	ctx.r3.s64 = ctx.r10.s64 + 21700;
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
	ctx.lr = 0x82AE1E68;
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

__attribute__((alias("__imp__sub_82AE1E78"))) PPC_WEAK_FUNC(sub_82AE1E78);
PPC_FUNC_IMPL(__imp__sub_82AE1E78) {
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
	// addi r5,r10,21916
	ctx.r5.s64 = ctx.r10.s64 + 21916;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-25156
	ctx.r4.s64 = ctx.r10.s64 + -25156;
	// addi r11,r11,-25196
	ctx.r11.s64 = ctx.r11.s64 + -25196;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,21736
	ctx.r3.s64 = ctx.r10.s64 + 21736;
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
	// bl 0x82aabf68
	ctx.lr = 0x82AE1ECC;
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

__attribute__((alias("__imp__sub_82AE1EE0"))) PPC_WEAK_FUNC(sub_82AE1EE0);
PPC_FUNC_IMPL(__imp__sub_82AE1EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// addi r10,r10,22560
	ctx.r10.s64 = ctx.r10.s64 + 22560;
	// lwz r11,22544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22544);
	// stw r11,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE1F00"))) PPC_WEAK_FUNC(sub_82AE1F00);
PPC_FUNC_IMPL(__imp__sub_82AE1F00) {
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
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r9,r10,-24192
	ctx.r9.s64 = ctx.r10.s64 + -24192;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r4,r10,-24136
	ctx.r4.s64 = ctx.r10.s64 + -24136;
	// addi r11,r11,22560
	ctx.r11.s64 = ctx.r11.s64 + 22560;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,21772
	ctx.r3.s64 = ctx.r10.s64 + 21772;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,20
	ctx.r6.s64 = 20;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE1F54;
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

__attribute__((alias("__imp__sub_82AE1F68"))) PPC_WEAK_FUNC(sub_82AE1F68);
PPC_FUNC_IMPL(__imp__sub_82AE1F68) {
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
	// addi r4,r10,-24032
	ctx.r4.s64 = ctx.r10.s64 + -24032;
	// addi r11,r11,-24112
	ctx.r11.s64 = ctx.r11.s64 + -24112;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,21808
	ctx.r3.s64 = ctx.r10.s64 + 21808;
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
	ctx.lr = 0x82AE1FB8;
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

__attribute__((alias("__imp__sub_82AE1FC8"))) PPC_WEAK_FUNC(sub_82AE1FC8);
PPC_FUNC_IMPL(__imp__sub_82AE1FC8) {
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
	// addi r4,r10,-24016
	ctx.r4.s64 = ctx.r10.s64 + -24016;
	// addi r11,r11,-24072
	ctx.r11.s64 = ctx.r11.s64 + -24072;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,21844
	ctx.r3.s64 = ctx.r10.s64 + 21844;
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
	ctx.lr = 0x82AE2018;
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

__attribute__((alias("__imp__sub_82AE2028"))) PPC_WEAK_FUNC(sub_82AE2028);
PPC_FUNC_IMPL(__imp__sub_82AE2028) {
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
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r9,r10,-23952
	ctx.r9.s64 = ctx.r10.s64 + -23952;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-25236
	ctx.r4.s64 = ctx.r10.s64 + -25236;
	// addi r11,r11,-23936
	ctx.r11.s64 = ctx.r11.s64 + -23936;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,21880
	ctx.r3.s64 = ctx.r10.s64 + 21880;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,36
	ctx.r6.s64 = 36;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE207C;
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

__attribute__((alias("__imp__sub_82AE2090"))) PPC_WEAK_FUNC(sub_82AE2090);
PPC_FUNC_IMPL(__imp__sub_82AE2090) {
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
	// addi r4,r10,-23796
	ctx.r4.s64 = ctx.r10.s64 + -23796;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,21916
	ctx.r3.s64 = ctx.r10.s64 + 21916;
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
	ctx.lr = 0x82AE20D8;
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

__attribute__((alias("__imp__sub_82AE20E8"))) PPC_WEAK_FUNC(sub_82AE20E8);
PPC_FUNC_IMPL(__imp__sub_82AE20E8) {
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
	// addi r4,r10,-23644
	ctx.r4.s64 = ctx.r10.s64 + -23644;
	// addi r11,r11,-23724
	ctx.r11.s64 = ctx.r11.s64 + -23724;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,21952
	ctx.r3.s64 = ctx.r10.s64 + 21952;
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
	ctx.lr = 0x82AE2138;
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

__attribute__((alias("__imp__sub_82AE2148"))) PPC_WEAK_FUNC(sub_82AE2148);
PPC_FUNC_IMPL(__imp__sub_82AE2148) {
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
	// addi r4,r10,-23596
	ctx.r4.s64 = ctx.r10.s64 + -23596;
	// addi r11,r11,-23664
	ctx.r11.s64 = ctx.r11.s64 + -23664;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,21988
	ctx.r3.s64 = ctx.r10.s64 + 21988;
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
	ctx.lr = 0x82AE2198;
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

__attribute__((alias("__imp__sub_82AE21A8"))) PPC_WEAK_FUNC(sub_82AE21A8);
PPC_FUNC_IMPL(__imp__sub_82AE21A8) {
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
	// addi r4,r10,-23236
	ctx.r4.s64 = ctx.r10.s64 + -23236;
	// addi r11,r11,-23416
	ctx.r11.s64 = ctx.r11.s64 + -23416;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,22024
	ctx.r3.s64 = ctx.r10.s64 + 22024;
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
	ctx.lr = 0x82AE21F8;
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

__attribute__((alias("__imp__sub_82AE2208"))) PPC_WEAK_FUNC(sub_82AE2208);
PPC_FUNC_IMPL(__imp__sub_82AE2208) {
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
	// li r8,11
	ctx.r8.s64 = 11;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-22804
	ctx.r4.s64 = ctx.r10.s64 + -22804;
	// addi r11,r11,-23024
	ctx.r11.s64 = ctx.r11.s64 + -23024;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,22060
	ctx.r3.s64 = ctx.r10.s64 + 22060;
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
	ctx.lr = 0x82AE2258;
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

__attribute__((alias("__imp__sub_82AE2268"))) PPC_WEAK_FUNC(sub_82AE2268);
PPC_FUNC_IMPL(__imp__sub_82AE2268) {
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
	// li r8,7
	ctx.r8.s64 = 7;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-22620
	ctx.r4.s64 = ctx.r10.s64 + -22620;
	// addi r11,r11,-22760
	ctx.r11.s64 = ctx.r11.s64 + -22760;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,22096
	ctx.r3.s64 = ctx.r10.s64 + 22096;
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
	ctx.lr = 0x82AE22B8;
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

__attribute__((alias("__imp__sub_82AE22C8"))) PPC_WEAK_FUNC(sub_82AE22C8);
PPC_FUNC_IMPL(__imp__sub_82AE22C8) {
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
	// li r8,8
	ctx.r8.s64 = 8;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-22424
	ctx.r4.s64 = ctx.r10.s64 + -22424;
	// addi r11,r11,-22584
	ctx.r11.s64 = ctx.r11.s64 + -22584;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,22132
	ctx.r3.s64 = ctx.r10.s64 + 22132;
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
	ctx.lr = 0x82AE2318;
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

__attribute__((alias("__imp__sub_82AE2328"))) PPC_WEAK_FUNC(sub_82AE2328);
PPC_FUNC_IMPL(__imp__sub_82AE2328) {
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
	// addi r4,r10,-22220
	ctx.r4.s64 = ctx.r10.s64 + -22220;
	// addi r11,r11,-22400
	ctx.r11.s64 = ctx.r11.s64 + -22400;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,22168
	ctx.r3.s64 = ctx.r10.s64 + 22168;
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
	ctx.lr = 0x82AE2378;
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

__attribute__((alias("__imp__sub_82AE2388"))) PPC_WEAK_FUNC(sub_82AE2388);
PPC_FUNC_IMPL(__imp__sub_82AE2388) {
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
	// li r8,8
	ctx.r8.s64 = 8;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-22016
	ctx.r4.s64 = ctx.r10.s64 + -22016;
	// addi r11,r11,-22176
	ctx.r11.s64 = ctx.r11.s64 + -22176;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,22204
	ctx.r3.s64 = ctx.r10.s64 + 22204;
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
	ctx.lr = 0x82AE23D8;
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

__attribute__((alias("__imp__sub_82AE23E8"))) PPC_WEAK_FUNC(sub_82AE23E8);
PPC_FUNC_IMPL(__imp__sub_82AE23E8) {
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
	// addi r4,r10,-21872
	ctx.r4.s64 = ctx.r10.s64 + -21872;
	// addi r11,r11,-21992
	ctx.r11.s64 = ctx.r11.s64 + -21992;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,22240
	ctx.r3.s64 = ctx.r10.s64 + 22240;
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
	ctx.lr = 0x82AE2438;
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

__attribute__((alias("__imp__sub_82AE2448"))) PPC_WEAK_FUNC(sub_82AE2448);
PPC_FUNC_IMPL(__imp__sub_82AE2448) {
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
	// li r8,12
	ctx.r8.s64 = 12;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-21408
	ctx.r4.s64 = ctx.r10.s64 + -21408;
	// addi r11,r11,-21648
	ctx.r11.s64 = ctx.r11.s64 + -21648;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,22276
	ctx.r3.s64 = ctx.r10.s64 + 22276;
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
	ctx.lr = 0x82AE2498;
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

__attribute__((alias("__imp__sub_82AE24A8"))) PPC_WEAK_FUNC(sub_82AE24A8);
PPC_FUNC_IMPL(__imp__sub_82AE24A8) {
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
	// addi r4,r10,-21340
	ctx.r4.s64 = ctx.r10.s64 + -21340;
	// addi r11,r11,-21380
	ctx.r11.s64 = ctx.r11.s64 + -21380;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,22312
	ctx.r3.s64 = ctx.r10.s64 + 22312;
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
	ctx.lr = 0x82AE24F8;
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

__attribute__((alias("__imp__sub_82AE2508"))) PPC_WEAK_FUNC(sub_82AE2508);
PPC_FUNC_IMPL(__imp__sub_82AE2508) {
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
	// addi r4,r10,-21272
	ctx.r4.s64 = ctx.r10.s64 + -21272;
	// addi r11,r11,-21312
	ctx.r11.s64 = ctx.r11.s64 + -21312;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,22348
	ctx.r3.s64 = ctx.r10.s64 + 22348;
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
	ctx.lr = 0x82AE2558;
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

__attribute__((alias("__imp__sub_82AE2568"))) PPC_WEAK_FUNC(sub_82AE2568);
PPC_FUNC_IMPL(__imp__sub_82AE2568) {
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
	// addi r4,r10,-21220
	ctx.r4.s64 = ctx.r10.s64 + -21220;
	// addi r11,r11,-21240
	ctx.r11.s64 = ctx.r11.s64 + -21240;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,22384
	ctx.r3.s64 = ctx.r10.s64 + 22384;
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
	ctx.lr = 0x82AE25B8;
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

__attribute__((alias("__imp__sub_82AE25C8"))) PPC_WEAK_FUNC(sub_82AE25C8);
PPC_FUNC_IMPL(__imp__sub_82AE25C8) {
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
	// addi r4,r10,-21128
	ctx.r4.s64 = ctx.r10.s64 + -21128;
	// addi r11,r11,-21188
	ctx.r11.s64 = ctx.r11.s64 + -21188;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,22420
	ctx.r3.s64 = ctx.r10.s64 + 22420;
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
	ctx.lr = 0x82AE2618;
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

__attribute__((alias("__imp__sub_82AE2628"))) PPC_WEAK_FUNC(sub_82AE2628);
PPC_FUNC_IMPL(__imp__sub_82AE2628) {
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
	// addi r4,r10,-21092
	ctx.r4.s64 = ctx.r10.s64 + -21092;
	// addi r11,r11,-21168
	ctx.r11.s64 = ctx.r11.s64 + -21168;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,22456
	ctx.r3.s64 = ctx.r10.s64 + 22456;
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
	ctx.lr = 0x82AE2678;
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

__attribute__((alias("__imp__sub_82AE2688"))) PPC_WEAK_FUNC(sub_82AE2688);
PPC_FUNC_IMPL(__imp__sub_82AE2688) {
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
	// addi r4,r10,-21016
	ctx.r4.s64 = ctx.r10.s64 + -21016;
	// addi r11,r11,-21056
	ctx.r11.s64 = ctx.r11.s64 + -21056;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,22492
	ctx.r3.s64 = ctx.r10.s64 + 22492;
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
	ctx.lr = 0x82AE26D8;
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

__attribute__((alias("__imp__sub_82AE26E8"))) PPC_WEAK_FUNC(sub_82AE26E8);
PPC_FUNC_IMPL(__imp__sub_82AE26E8) {
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
	// addi r5,r10,22492
	ctx.r5.s64 = ctx.r10.s64 + 22492;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-20972
	ctx.r4.s64 = ctx.r10.s64 + -20972;
	// addi r11,r11,-20992
	ctx.r11.s64 = ctx.r11.s64 + -20992;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,22528
	ctx.r3.s64 = ctx.r10.s64 + 22528;
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
	ctx.lr = 0x82AE273C;
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

__attribute__((alias("__imp__sub_82AE2750"))) PPC_WEAK_FUNC(sub_82AE2750);
PPC_FUNC_IMPL(__imp__sub_82AE2750) {
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
	// addi r4,r10,-20900
	ctx.r4.s64 = ctx.r10.s64 + -20900;
	// addi r11,r11,-20940
	ctx.r11.s64 = ctx.r11.s64 + -20940;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,22564
	ctx.r3.s64 = ctx.r10.s64 + 22564;
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
	ctx.lr = 0x82AE27A0;
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

__attribute__((alias("__imp__sub_82AE27B0"))) PPC_WEAK_FUNC(sub_82AE27B0);
PPC_FUNC_IMPL(__imp__sub_82AE27B0) {
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
	// addi r4,r10,-20744
	ctx.r4.s64 = ctx.r10.s64 + -20744;
	// addi r11,r11,-20824
	ctx.r11.s64 = ctx.r11.s64 + -20824;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,22600
	ctx.r3.s64 = ctx.r10.s64 + 22600;
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
	ctx.lr = 0x82AE2800;
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

__attribute__((alias("__imp__sub_82AE2810"))) PPC_WEAK_FUNC(sub_82AE2810);
PPC_FUNC_IMPL(__imp__sub_82AE2810) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,-20576
	ctx.r11.s64 = ctx.r11.s64 + -20576;
	// li r8,12
	ctx.r8.s64 = 12;
	// addi r9,r11,240
	ctx.r9.s64 = ctx.r11.s64 + 240;
	// addi r4,r10,-20240
	ctx.r4.s64 = ctx.r10.s64 + -20240;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r10,22636
	ctx.r3.s64 = ctx.r10.s64 + 22636;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE2864;
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

__attribute__((alias("__imp__sub_82AE2878"))) PPC_WEAK_FUNC(sub_82AE2878);
PPC_FUNC_IMPL(__imp__sub_82AE2878) {
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
	// addi r4,r10,-19936
	ctx.r4.s64 = ctx.r10.s64 + -19936;
	// addi r11,r11,-20136
	ctx.r11.s64 = ctx.r11.s64 + -20136;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,22672
	ctx.r3.s64 = ctx.r10.s64 + 22672;
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
	ctx.lr = 0x82AE28C8;
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

__attribute__((alias("__imp__sub_82AE28D8"))) PPC_WEAK_FUNC(sub_82AE28D8);
PPC_FUNC_IMPL(__imp__sub_82AE28D8) {
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
	// li r8,8
	ctx.r8.s64 = 8;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-19912
	ctx.r4.s64 = ctx.r10.s64 + -19912;
	// addi r11,r11,-20096
	ctx.r11.s64 = ctx.r11.s64 + -20096;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,22708
	ctx.r3.s64 = ctx.r10.s64 + 22708;
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
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE2928;
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

__attribute__((alias("__imp__sub_82AE2938"))) PPC_WEAK_FUNC(sub_82AE2938);
PPC_FUNC_IMPL(__imp__sub_82AE2938) {
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
	// addi r4,r10,-19812
	ctx.r4.s64 = ctx.r10.s64 + -19812;
	// addi r11,r11,-19872
	ctx.r11.s64 = ctx.r11.s64 + -19872;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,22744
	ctx.r3.s64 = ctx.r10.s64 + 22744;
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
	ctx.lr = 0x82AE2988;
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

__attribute__((alias("__imp__sub_82AE2998"))) PPC_WEAK_FUNC(sub_82AE2998);
PPC_FUNC_IMPL(__imp__sub_82AE2998) {
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
	// addi r4,r10,-19764
	ctx.r4.s64 = ctx.r10.s64 + -19764;
	// addi r11,r11,-19784
	ctx.r11.s64 = ctx.r11.s64 + -19784;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,22780
	ctx.r3.s64 = ctx.r10.s64 + 22780;
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
	ctx.lr = 0x82AE29E8;
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

__attribute__((alias("__imp__sub_82AE29F8"))) PPC_WEAK_FUNC(sub_82AE29F8);
PPC_FUNC_IMPL(__imp__sub_82AE29F8) {
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
	// addi r4,r10,-19280
	ctx.r4.s64 = ctx.r10.s64 + -19280;
	// addi r11,r11,-19484
	ctx.r11.s64 = ctx.r11.s64 + -19484;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,22816
	ctx.r3.s64 = ctx.r10.s64 + 22816;
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
	ctx.lr = 0x82AE2A48;
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

__attribute__((alias("__imp__sub_82AE2A58"))) PPC_WEAK_FUNC(sub_82AE2A58);
PPC_FUNC_IMPL(__imp__sub_82AE2A58) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-19496
	ctx.r9.s64 = ctx.r11.s64 + -19496;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r8,r9,56
	ctx.r8.s64 = ctx.r9.s64 + 56;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r6,96
	ctx.r6.s64 = 96;
	// addi r4,r11,-19256
	ctx.r4.s64 = ctx.r11.s64 + -19256;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r11,22852
	ctx.r3.s64 = ctx.r11.s64 + 22852;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE2AAC;
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

__attribute__((alias("__imp__sub_82AE2AC0"))) PPC_WEAK_FUNC(sub_82AE2AC0);
PPC_FUNC_IMPL(__imp__sub_82AE2AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// addi r10,r10,22744
	ctx.r10.s64 = ctx.r10.s64 + 22744;
	// lwz r11,22740(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22740);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE2AD8"))) PPC_WEAK_FUNC(sub_82AE2AD8);
PPC_FUNC_IMPL(__imp__sub_82AE2AD8) {
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
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r9,r10,-19092
	ctx.r9.s64 = ctx.r10.s64 + -19092;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r4,r10,-19080
	ctx.r4.s64 = ctx.r10.s64 + -19080;
	// addi r11,r11,22744
	ctx.r11.s64 = ctx.r11.s64 + 22744;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,22888
	ctx.r3.s64 = ctx.r10.s64 + 22888;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE2B2C;
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

__attribute__((alias("__imp__sub_82AE2B40"))) PPC_WEAK_FUNC(sub_82AE2B40);
PPC_FUNC_IMPL(__imp__sub_82AE2B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// addi r10,r10,22816
	ctx.r10.s64 = ctx.r10.s64 + 22816;
	// lwz r11,22808(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22808);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE2B58"))) PPC_WEAK_FUNC(sub_82AE2B58);
PPC_FUNC_IMPL(__imp__sub_82AE2B58) {
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
	// addi r9,r10,-18980
	ctx.r9.s64 = ctx.r10.s64 + -18980;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r4,r10,-18960
	ctx.r4.s64 = ctx.r10.s64 + -18960;
	// addi r11,r11,22816
	ctx.r11.s64 = ctx.r11.s64 + 22816;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,22924
	ctx.r3.s64 = ctx.r10.s64 + 22924;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE2BAC;
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

__attribute__((alias("__imp__sub_82AE2BC0"))) PPC_WEAK_FUNC(sub_82AE2BC0);
PPC_FUNC_IMPL(__imp__sub_82AE2BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// addi r10,r10,22928
	ctx.r10.s64 = ctx.r10.s64 + 22928;
	// lwz r11,22920(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22920);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE2BD8"))) PPC_WEAK_FUNC(sub_82AE2BD8);
PPC_FUNC_IMPL(__imp__sub_82AE2BD8) {
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
	// addi r9,r10,-18780
	ctx.r9.s64 = ctx.r10.s64 + -18780;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r4,r10,-18724
	ctx.r4.s64 = ctx.r10.s64 + -18724;
	// addi r11,r11,22928
	ctx.r11.s64 = ctx.r11.s64 + 22928;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,22960
	ctx.r3.s64 = ctx.r10.s64 + 22960;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,28
	ctx.r6.s64 = 28;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE2C2C;
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

__attribute__((alias("__imp__sub_82AE2C40"))) PPC_WEAK_FUNC(sub_82AE2C40);
PPC_FUNC_IMPL(__imp__sub_82AE2C40) {
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
	// li r8,7
	ctx.r8.s64 = 7;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-18532
	ctx.r4.s64 = ctx.r10.s64 + -18532;
	// addi r11,r11,-18672
	ctx.r11.s64 = ctx.r11.s64 + -18672;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,22996
	ctx.r3.s64 = ctx.r10.s64 + 22996;
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
	ctx.lr = 0x82AE2C90;
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

__attribute__((alias("__imp__sub_82AE2CA0"))) PPC_WEAK_FUNC(sub_82AE2CA0);
PPC_FUNC_IMPL(__imp__sub_82AE2CA0) {
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
	// addi r4,r10,-18456
	ctx.r4.s64 = ctx.r10.s64 + -18456;
	// addi r11,r11,-18496
	ctx.r11.s64 = ctx.r11.s64 + -18496;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23032
	ctx.r3.s64 = ctx.r10.s64 + 23032;
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
	ctx.lr = 0x82AE2CF0;
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

__attribute__((alias("__imp__sub_82AE2D00"))) PPC_WEAK_FUNC(sub_82AE2D00);
PPC_FUNC_IMPL(__imp__sub_82AE2D00) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-18288
	ctx.r9.s64 = ctx.r11.s64 + -18288;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r11,-18236
	ctx.r4.s64 = ctx.r11.s64 + -18236;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r11,23068
	ctx.r3.s64 = ctx.r11.s64 + 23068;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE2D54;
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

__attribute__((alias("__imp__sub_82AE2D68"))) PPC_WEAK_FUNC(sub_82AE2D68);
PPC_FUNC_IMPL(__imp__sub_82AE2D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// addi r10,r10,23032
	ctx.r10.s64 = ctx.r10.s64 + 23032;
	// lwz r11,23028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23028);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE2D80"))) PPC_WEAK_FUNC(sub_82AE2D80);
PPC_FUNC_IMPL(__imp__sub_82AE2D80) {
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
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r4,r10,-18212
	ctx.r4.s64 = ctx.r10.s64 + -18212;
	// addi r11,r11,23032
	ctx.r11.s64 = ctx.r11.s64 + 23032;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23104
	ctx.r3.s64 = ctx.r10.s64 + 23104;
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
	ctx.lr = 0x82AE2DD0;
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

__attribute__((alias("__imp__sub_82AE2DE0"))) PPC_WEAK_FUNC(sub_82AE2DE0);
PPC_FUNC_IMPL(__imp__sub_82AE2DE0) {
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
	// addi r4,r10,-18160
	ctx.r4.s64 = ctx.r10.s64 + -18160;
	// addi r11,r11,-18180
	ctx.r11.s64 = ctx.r11.s64 + -18180;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23140
	ctx.r3.s64 = ctx.r10.s64 + 23140;
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
	ctx.lr = 0x82AE2E30;
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

__attribute__((alias("__imp__sub_82AE2E40"))) PPC_WEAK_FUNC(sub_82AE2E40);
PPC_FUNC_IMPL(__imp__sub_82AE2E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// addi r10,r10,23072
	ctx.r10.s64 = ctx.r10.s64 + 23072;
	// lwz r11,23028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23028);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE2E58"))) PPC_WEAK_FUNC(sub_82AE2E58);
PPC_FUNC_IMPL(__imp__sub_82AE2E58) {
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
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r4,r10,-18124
	ctx.r4.s64 = ctx.r10.s64 + -18124;
	// addi r11,r11,23072
	ctx.r11.s64 = ctx.r11.s64 + 23072;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23176
	ctx.r3.s64 = ctx.r10.s64 + 23176;
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
	ctx.lr = 0x82AE2EA8;
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

__attribute__((alias("__imp__sub_82AE2EB8"))) PPC_WEAK_FUNC(sub_82AE2EB8);
PPC_FUNC_IMPL(__imp__sub_82AE2EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// addi r10,r10,23112
	ctx.r10.s64 = ctx.r10.s64 + 23112;
	// lwz r11,23028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23028);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AE2ED0"))) PPC_WEAK_FUNC(sub_82AE2ED0);
PPC_FUNC_IMPL(__imp__sub_82AE2ED0) {
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
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r4,r10,-18096
	ctx.r4.s64 = ctx.r10.s64 + -18096;
	// addi r11,r11,23112
	ctx.r11.s64 = ctx.r11.s64 + 23112;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23212
	ctx.r3.s64 = ctx.r10.s64 + 23212;
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
	ctx.lr = 0x82AE2F20;
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

__attribute__((alias("__imp__sub_82AE2F30"))) PPC_WEAK_FUNC(sub_82AE2F30);
PPC_FUNC_IMPL(__imp__sub_82AE2F30) {
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
	// addi r4,r10,-18036
	ctx.r4.s64 = ctx.r10.s64 + -18036;
	// addi r11,r11,-18076
	ctx.r11.s64 = ctx.r11.s64 + -18076;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23248
	ctx.r3.s64 = ctx.r10.s64 + 23248;
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
	ctx.lr = 0x82AE2F80;
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

__attribute__((alias("__imp__sub_82AE2F90"))) PPC_WEAK_FUNC(sub_82AE2F90);
PPC_FUNC_IMPL(__imp__sub_82AE2F90) {
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
	// addi r4,r10,-17852
	ctx.r4.s64 = ctx.r10.s64 + -17852;
	// addi r11,r11,-17952
	ctx.r11.s64 = ctx.r11.s64 + -17952;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23284
	ctx.r3.s64 = ctx.r10.s64 + 23284;
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
	ctx.lr = 0x82AE2FE0;
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

__attribute__((alias("__imp__sub_82AE2FF0"))) PPC_WEAK_FUNC(sub_82AE2FF0);
PPC_FUNC_IMPL(__imp__sub_82AE2FF0) {
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
	// addi r4,r10,-17812
	ctx.r4.s64 = ctx.r10.s64 + -17812;
	// addi r11,r11,-17832
	ctx.r11.s64 = ctx.r11.s64 + -17832;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23320
	ctx.r3.s64 = ctx.r10.s64 + 23320;
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
	ctx.lr = 0x82AE3040;
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

__attribute__((alias("__imp__sub_82AE3050"))) PPC_WEAK_FUNC(sub_82AE3050);
PPC_FUNC_IMPL(__imp__sub_82AE3050) {
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
	// li r8,8
	ctx.r8.s64 = 8;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-17504
	ctx.r4.s64 = ctx.r10.s64 + -17504;
	// addi r11,r11,-17664
	ctx.r11.s64 = ctx.r11.s64 + -17664;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23356
	ctx.r3.s64 = ctx.r10.s64 + 23356;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,176
	ctx.r6.s64 = 176;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE30A0;
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

__attribute__((alias("__imp__sub_82AE30B0"))) PPC_WEAK_FUNC(sub_82AE30B0);
PPC_FUNC_IMPL(__imp__sub_82AE30B0) {
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
	// addi r9,r10,-17400
	ctx.r9.s64 = ctx.r10.s64 + -17400;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-17304
	ctx.r4.s64 = ctx.r10.s64 + -17304;
	// addi r11,r11,-17384
	ctx.r11.s64 = ctx.r11.s64 + -17384;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,23392
	ctx.r3.s64 = ctx.r10.s64 + 23392;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE3104;
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

__attribute__((alias("__imp__sub_82AE3118"))) PPC_WEAK_FUNC(sub_82AE3118);
PPC_FUNC_IMPL(__imp__sub_82AE3118) {
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
	// addi r4,r10,-17220
	ctx.r4.s64 = ctx.r10.s64 + -17220;
	// addi r11,r11,-17260
	ctx.r11.s64 = ctx.r11.s64 + -17260;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23428
	ctx.r3.s64 = ctx.r10.s64 + 23428;
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
	ctx.lr = 0x82AE3168;
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

__attribute__((alias("__imp__sub_82AE3178"))) PPC_WEAK_FUNC(sub_82AE3178);
PPC_FUNC_IMPL(__imp__sub_82AE3178) {
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
	// addi r4,r10,-17108
	ctx.r4.s64 = ctx.r10.s64 + -17108;
	// addi r11,r11,-17168
	ctx.r11.s64 = ctx.r11.s64 + -17168;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23464
	ctx.r3.s64 = ctx.r10.s64 + 23464;
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
	ctx.lr = 0x82AE31C8;
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

__attribute__((alias("__imp__sub_82AE31D8"))) PPC_WEAK_FUNC(sub_82AE31D8);
PPC_FUNC_IMPL(__imp__sub_82AE31D8) {
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
	// addi r4,r10,-17056
	ctx.r4.s64 = ctx.r10.s64 + -17056;
	// addi r11,r11,-17128
	ctx.r11.s64 = ctx.r11.s64 + -17128;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23500
	ctx.r3.s64 = ctx.r10.s64 + 23500;
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
	ctx.lr = 0x82AE322C;
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

__attribute__((alias("__imp__sub_82AE3240"))) PPC_WEAK_FUNC(sub_82AE3240);
PPC_FUNC_IMPL(__imp__sub_82AE3240) {
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
	// addi r4,r10,-16756
	ctx.r4.s64 = ctx.r10.s64 + -16756;
	// addi r11,r11,-16896
	ctx.r11.s64 = ctx.r11.s64 + -16896;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23572
	ctx.r3.s64 = ctx.r10.s64 + 23572;
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
	ctx.lr = 0x82AE3290;
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

__attribute__((alias("__imp__sub_82AE32A0"))) PPC_WEAK_FUNC(sub_82AE32A0);
PPC_FUNC_IMPL(__imp__sub_82AE32A0) {
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
	// addi r4,r10,-16728
	ctx.r4.s64 = ctx.r10.s64 + -16728;
	// addi r11,r11,-16836
	ctx.r11.s64 = ctx.r11.s64 + -16836;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23608
	ctx.r3.s64 = ctx.r10.s64 + 23608;
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
	ctx.lr = 0x82AE32F0;
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

__attribute__((alias("__imp__sub_82AE3300"))) PPC_WEAK_FUNC(sub_82AE3300);
PPC_FUNC_IMPL(__imp__sub_82AE3300) {
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
	// addi r4,r10,-16696
	ctx.r4.s64 = ctx.r10.s64 + -16696;
	// addi r11,r11,-16796
	ctx.r11.s64 = ctx.r11.s64 + -16796;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23536
	ctx.r3.s64 = ctx.r10.s64 + 23536;
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
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE3350;
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

__attribute__((alias("__imp__sub_82AE3360"))) PPC_WEAK_FUNC(sub_82AE3360);
PPC_FUNC_IMPL(__imp__sub_82AE3360) {
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
	// addi r4,r10,-16432
	ctx.r4.s64 = ctx.r10.s64 + -16432;
	// addi r11,r11,-16592
	ctx.r11.s64 = ctx.r11.s64 + -16592;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23716
	ctx.r3.s64 = ctx.r10.s64 + 23716;
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
	ctx.lr = 0x82AE33B0;
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

__attribute__((alias("__imp__sub_82AE33C0"))) PPC_WEAK_FUNC(sub_82AE33C0);
PPC_FUNC_IMPL(__imp__sub_82AE33C0) {
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
	// addi r4,r10,-16404
	ctx.r4.s64 = ctx.r10.s64 + -16404;
	// addi r11,r11,-16552
	ctx.r11.s64 = ctx.r11.s64 + -16552;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23680
	ctx.r3.s64 = ctx.r10.s64 + 23680;
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
	ctx.lr = 0x82AE3410;
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

__attribute__((alias("__imp__sub_82AE3420"))) PPC_WEAK_FUNC(sub_82AE3420);
PPC_FUNC_IMPL(__imp__sub_82AE3420) {
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
	// addi r4,r10,-16372
	ctx.r4.s64 = ctx.r10.s64 + -16372;
	// addi r11,r11,-16492
	ctx.r11.s64 = ctx.r11.s64 + -16492;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23644
	ctx.r3.s64 = ctx.r10.s64 + 23644;
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
	ctx.lr = 0x82AE3474;
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

__attribute__((alias("__imp__sub_82AE3488"))) PPC_WEAK_FUNC(sub_82AE3488);
PPC_FUNC_IMPL(__imp__sub_82AE3488) {
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
	// addi r4,r10,-16264
	ctx.r4.s64 = ctx.r10.s64 + -16264;
	// addi r11,r11,-16324
	ctx.r11.s64 = ctx.r11.s64 + -16324;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23788
	ctx.r3.s64 = ctx.r10.s64 + 23788;
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
	ctx.lr = 0x82AE34D8;
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

__attribute__((alias("__imp__sub_82AE34E8"))) PPC_WEAK_FUNC(sub_82AE34E8);
PPC_FUNC_IMPL(__imp__sub_82AE34E8) {
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
	// addi r5,r10,21192
	ctx.r5.s64 = ctx.r10.s64 + 21192;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,-16284
	ctx.r11.s64 = ctx.r11.s64 + -16284;
	// addi r4,r10,-16224
	ctx.r4.s64 = ctx.r10.s64 + -16224;
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
	// addi r3,r10,23752
	ctx.r3.s64 = ctx.r10.s64 + 23752;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,40
	ctx.r6.s64 = 40;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x82aabf68
	ctx.lr = 0x82AE3538;
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

__attribute__((alias("__imp__sub_82AE3548"))) PPC_WEAK_FUNC(sub_82AE3548);
PPC_FUNC_IMPL(__imp__sub_82AE3548) {
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
	// addi r4,r10,-15572
	ctx.r4.s64 = ctx.r10.s64 + -15572;
	// addi r11,r11,-15912
	ctx.r11.s64 = ctx.r11.s64 + -15912;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23824
	ctx.r3.s64 = ctx.r10.s64 + 23824;
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
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82aabf68
	ctx.lr = 0x82AE3598;
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

__attribute__((alias("__imp__sub_82AE35A8"))) PPC_WEAK_FUNC(sub_82AE35A8);
PPC_FUNC_IMPL(__imp__sub_82AE35A8) {
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
	// addi r5,r10,26704
	ctx.r5.s64 = ctx.r10.s64 + 26704;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-15272
	ctx.r4.s64 = ctx.r10.s64 + -15272;
	// addi r11,r11,-15432
	ctx.r11.s64 = ctx.r11.s64 + -15432;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23860
	ctx.r3.s64 = ctx.r10.s64 + 23860;
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
	ctx.lr = 0x82AE35FC;
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

__attribute__((alias("__imp__sub_82AE3610"))) PPC_WEAK_FUNC(sub_82AE3610);
PPC_FUNC_IMPL(__imp__sub_82AE3610) {
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
	// addi r4,r10,-15220
	ctx.r4.s64 = ctx.r10.s64 + -15220;
	// addi r11,r11,-15240
	ctx.r11.s64 = ctx.r11.s64 + -15240;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23896
	ctx.r3.s64 = ctx.r10.s64 + 23896;
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
	ctx.lr = 0x82AE3664;
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

__attribute__((alias("__imp__sub_82AE3678"))) PPC_WEAK_FUNC(sub_82AE3678);
PPC_FUNC_IMPL(__imp__sub_82AE3678) {
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
	// addi r4,r10,-15160
	ctx.r4.s64 = ctx.r10.s64 + -15160;
	// addi r11,r11,-15180
	ctx.r11.s64 = ctx.r11.s64 + -15180;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23932
	ctx.r3.s64 = ctx.r10.s64 + 23932;
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
	ctx.lr = 0x82AE36CC;
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

__attribute__((alias("__imp__sub_82AE36E0"))) PPC_WEAK_FUNC(sub_82AE36E0);
PPC_FUNC_IMPL(__imp__sub_82AE36E0) {
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
	// addi r5,r10,26416
	ctx.r5.s64 = ctx.r10.s64 + 26416;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,28528
	ctx.r4.s64 = ctx.r10.s64 + 28528;
	// addi r11,r11,-15096
	ctx.r11.s64 = ctx.r11.s64 + -15096;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23968
	ctx.r3.s64 = ctx.r10.s64 + 23968;
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
	ctx.lr = 0x82AE3734;
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

__attribute__((alias("__imp__sub_82AE3748"))) PPC_WEAK_FUNC(sub_82AE3748);
PPC_FUNC_IMPL(__imp__sub_82AE3748) {
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
	// addi r5,r10,26416
	ctx.r5.s64 = ctx.r10.s64 + 26416;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-14768
	ctx.r4.s64 = ctx.r10.s64 + -14768;
	// addi r11,r11,-14888
	ctx.r11.s64 = ctx.r11.s64 + -14888;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24004
	ctx.r3.s64 = ctx.r10.s64 + 24004;
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
	ctx.lr = 0x82AE379C;
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

__attribute__((alias("__imp__sub_82AE37B0"))) PPC_WEAK_FUNC(sub_82AE37B0);
PPC_FUNC_IMPL(__imp__sub_82AE37B0) {
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
	// addi r5,r10,26416
	ctx.r5.s64 = ctx.r10.s64 + 26416;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-14624
	ctx.r4.s64 = ctx.r10.s64 + -14624;
	// addi r11,r11,-14704
	ctx.r11.s64 = ctx.r11.s64 + -14704;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24040
	ctx.r3.s64 = ctx.r10.s64 + 24040;
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
	ctx.lr = 0x82AE3804;
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

__attribute__((alias("__imp__sub_82AE3818"))) PPC_WEAK_FUNC(sub_82AE3818);
PPC_FUNC_IMPL(__imp__sub_82AE3818) {
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
	// addi r4,r10,-14520
	ctx.r4.s64 = ctx.r10.s64 + -14520;
	// addi r11,r11,-14560
	ctx.r11.s64 = ctx.r11.s64 + -14560;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24076
	ctx.r3.s64 = ctx.r10.s64 + 24076;
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
	ctx.lr = 0x82AE386C;
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

__attribute__((alias("__imp__sub_82AE3880"))) PPC_WEAK_FUNC(sub_82AE3880);
PPC_FUNC_IMPL(__imp__sub_82AE3880) {
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
	// addi r5,r10,21192
	ctx.r5.s64 = ctx.r10.s64 + 21192;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,-14468
	ctx.r11.s64 = ctx.r11.s64 + -14468;
	// addi r4,r10,-14448
	ctx.r4.s64 = ctx.r10.s64 + -14448;
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
	// addi r3,r10,24112
	ctx.r3.s64 = ctx.r10.s64 + 24112;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,40
	ctx.r6.s64 = 40;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x82aabf68
	ctx.lr = 0x82AE38D0;
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

__attribute__((alias("__imp__sub_82AE38E0"))) PPC_WEAK_FUNC(sub_82AE38E0);
PPC_FUNC_IMPL(__imp__sub_82AE38E0) {
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
	// addi r5,r10,26704
	ctx.r5.s64 = ctx.r10.s64 + 26704;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-14328
	ctx.r4.s64 = ctx.r10.s64 + -14328;
	// addi r11,r11,-14408
	ctx.r11.s64 = ctx.r11.s64 + -14408;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24148
	ctx.r3.s64 = ctx.r10.s64 + 24148;
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
	ctx.lr = 0x82AE3934;
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

__attribute__((alias("__imp__sub_82AE3948"))) PPC_WEAK_FUNC(sub_82AE3948);
PPC_FUNC_IMPL(__imp__sub_82AE3948) {
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
	// addi r4,r10,-14272
	ctx.r4.s64 = ctx.r10.s64 + -14272;
	// addi r11,r11,-14292
	ctx.r11.s64 = ctx.r11.s64 + -14292;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24184
	ctx.r3.s64 = ctx.r10.s64 + 24184;
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
	ctx.lr = 0x82AE399C;
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

__attribute__((alias("__imp__sub_82AE39B0"))) PPC_WEAK_FUNC(sub_82AE39B0);
PPC_FUNC_IMPL(__imp__sub_82AE39B0) {
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
	// addi r5,r10,26704
	ctx.r5.s64 = ctx.r10.s64 + 26704;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-14176
	ctx.r4.s64 = ctx.r10.s64 + -14176;
	// addi r11,r11,-14236
	ctx.r11.s64 = ctx.r11.s64 + -14236;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24220
	ctx.r3.s64 = ctx.r10.s64 + 24220;
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
	ctx.lr = 0x82AE3A04;
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

__attribute__((alias("__imp__sub_82AE3A18"))) PPC_WEAK_FUNC(sub_82AE3A18);
PPC_FUNC_IMPL(__imp__sub_82AE3A18) {
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
	// bl 0x82acabd8
	ctx.lr = 0x82AE3A30;
	sub_82ACABD8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r9,-32083
	ctx.r9.s64 = -2102591488;
	// addi r10,r11,-16224
	ctx.r10.s64 = ctx.r11.s64 + -16224;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// addi r11,r11,24256
	ctx.r11.s64 = ctx.r11.s64 + 24256;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r9,-21344
	ctx.r10.s64 = ctx.r9.s64 + -21344;
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

__attribute__((alias("__imp__sub_82AE3A68"))) PPC_WEAK_FUNC(sub_82AE3A68);
PPC_FUNC_IMPL(__imp__sub_82AE3A68) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82aba508
	ctx.lr = 0x82AE3A84;
	sub_82ABA508(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r8,-32083
	ctx.r8.s64 = -2102591488;
	// addi r10,r11,-14768
	ctx.r10.s64 = ctx.r11.s64 + -14768;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r9,r11,-13908
	ctx.r9.s64 = ctx.r11.s64 + -13908;
	// lis r11,-32043
	ctx.r11.s64 = -2099970048;
	// addi r11,r11,24268
	ctx.r11.s64 = ctx.r11.s64 + 24268;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-20848
	ctx.r10.s64 = ctx.r8.s64 + -20848;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

