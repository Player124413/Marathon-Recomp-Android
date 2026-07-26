#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82160000"))) PPC_WEAK_FUNC(sub_82160000);
PPC_FUNC_IMPL(__imp__sub_82160000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,2220
	ctx.r11.s64 = ctx.r11.s64 + 2220;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82160010"))) PPC_WEAK_FUNC(sub_82160010);
PPC_FUNC_IMPL(__imp__sub_82160010) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bnelr 
	if (!ctx.cr0.eq) return;
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

__attribute__((alias("__imp__sub_82160030"))) PPC_WEAK_FUNC(sub_82160030);
PPC_FUNC_IMPL(__imp__sub_82160030) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82160038"))) PPC_WEAK_FUNC(sub_82160038);
PPC_FUNC_IMPL(__imp__sub_82160038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,2256
	ctx.r3.s64 = ctx.r11.s64 + 2256;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82160048"))) PPC_WEAK_FUNC(sub_82160048);
PPC_FUNC_IMPL(__imp__sub_82160048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r11,r11,2220
	ctx.r11.s64 = ctx.r11.s64 + 2220;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8216007c
	if (ctx.cr6.eq) goto loc_8216007C;
	// bl 0x82186190
	ctx.lr = 0x82160078;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8216007C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82160090"))) PPC_WEAK_FUNC(sub_82160090);
PPC_FUNC_IMPL(__imp__sub_82160090) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bnelr 
	if (!ctx.cr0.eq) return;
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

__attribute__((alias("__imp__sub_821600BC"))) PPC_WEAK_FUNC(sub_821600BC);
PPC_FUNC_IMPL(__imp__sub_821600BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821600C0"))) PPC_WEAK_FUNC(sub_821600C0);
PPC_FUNC_IMPL(__imp__sub_821600C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x821600f0
	if (ctx.cr6.eq) goto loc_821600F0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_821600F0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216011c
	if (ctx.cr6.eq) goto loc_8216011C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne 0x8216011c
	if (!ctx.cr0.eq) goto loc_8216011C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216011C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216011C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82160140"))) PPC_WEAK_FUNC(sub_82160140);
PPC_FUNC_IMPL(__imp__sub_82160140) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8216018c
	if (!ctx.cr6.eq) goto loc_8216018C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8216018c
	if (ctx.cr6.eq) goto loc_8216018C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,2248
	ctx.r11.s64 = ctx.r11.s64 + 2248;
	// addi r10,r10,2236
	ctx.r10.s64 = ctx.r10.s64 + 2236;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x8216018C;
	sub_821E0968(ctx, base);
loc_8216018C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
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

__attribute__((alias("__imp__sub_821601B8"))) PPC_WEAK_FUNC(sub_821601B8);
PPC_FUNC_IMPL(__imp__sub_821601B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq 0x821601fc
	if (ctx.cr0.eq) goto loc_821601FC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
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
loc_821601FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82160210;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne 0x82160234
	if (!ctx.cr0.eq) goto loc_82160234;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82160234;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82160234:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82160248"))) PPC_WEAK_FUNC(sub_82160248);
PPC_FUNC_IMPL(__imp__sub_82160248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82160270
	if (ctx.cr6.eq) goto loc_82160270;
	// bl 0x82160140
	ctx.lr = 0x82160270;
	sub_82160140(ctx, base);
loc_82160270:
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

__attribute__((alias("__imp__sub_82160288"))) PPC_WEAK_FUNC(sub_82160288);
PPC_FUNC_IMPL(__imp__sub_82160288) {
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
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x821602b4
	if (ctx.cr6.eq) goto loc_821602B4;
	// bl 0x82160140
	ctx.lr = 0x821602B0;
	sub_82160140(ctx, base);
	// b 0x821602d4
	goto loc_821602D4;
loc_821602B4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,2248
	ctx.r11.s64 = ctx.r11.s64 + 2248;
	// addi r10,r10,2236
	ctx.r10.s64 = ctx.r10.s64 + 2236;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x821e0968
	ctx.lr = 0x821602D4;
	sub_821E0968(ctx, base);
loc_821602D4:
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

__attribute__((alias("__imp__sub_821602F0"))) PPC_WEAK_FUNC(sub_821602F0);
PPC_FUNC_IMPL(__imp__sub_821602F0) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82581500
	ctx.lr = 0x82160310;
	sub_82581500(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,2292
	ctx.r11.s64 = ctx.r11.s64 + 2292;
	// addi r9,r9,2280
	ctx.r9.s64 = ctx.r9.s64 + 2280;
	// addi r10,r31,76
	ctx.r10.s64 = ctx.r31.s64 + 76;
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
	// beq cr6,0x82160350
	if (ctx.cr6.eq) goto loc_82160350;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82160350:
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,2596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2596);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x8262b468
	ctx.lr = 0x82160368;
	sub_8262B468(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821603d8
	if (ctx.cr6.eq) goto loc_821603D8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821603d8
	if (ctx.cr6.eq) goto loc_821603D8;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82160398;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821603c8
	if (ctx.cr6.eq) goto loc_821603C8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821603c8
	if (ctx.cr6.eq) goto loc_821603C8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82160740
	ctx.lr = 0x821603C0;
	sub_82160740(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_821603C8:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821603d8
	if (ctx.cr6.eq) goto loc_821603D8;
	// bl 0x821601b8
	ctx.lr = 0x821603D8;
	sub_821601B8(ctx, base);
loc_821603D8:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821603e8
	if (ctx.cr6.eq) goto loc_821603E8;
	// bl 0x821601b8
	ctx.lr = 0x821603E8;
	sub_821601B8(ctx, base);
loc_821603E8:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82160414
	if (ctx.cr6.eq) goto loc_82160414;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne 0x82160414
	if (!ctx.cr0.eq) goto loc_82160414;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82160414;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82160414:
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

__attribute__((alias("__imp__sub_82160430"))) PPC_WEAK_FUNC(sub_82160430);
PPC_FUNC_IMPL(__imp__sub_82160430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,2208
	ctx.r3.s64 = ctx.r11.s64 + 2208;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82160440"))) PPC_WEAK_FUNC(sub_82160440);
PPC_FUNC_IMPL(__imp__sub_82160440) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82581500
	ctx.lr = 0x82160460;
	sub_82581500(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,2292
	ctx.r10.s64 = ctx.r10.s64 + 2292;
	// addi r9,r9,2280
	ctx.r9.s64 = ctx.r9.s64 + 2280;
	// addi r11,r31,76
	ctx.r11.s64 = ctx.r31.s64 + 76;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r10,-32079
	ctx.r10.s64 = -2102329344;
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r10,2596(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2596);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// beq cr6,0x82160540
	if (ctx.cr6.eq) goto loc_82160540;
	// addi r30,r30,76
	ctx.r30.s64 = ctx.r30.s64 + 76;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x821600c0
	ctx.lr = 0x821604B4;
	sub_821600C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8262b468
	ctx.lr = 0x821604C0;
	sub_8262B468(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82160530
	if (ctx.cr6.eq) goto loc_82160530;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82160530
	if (ctx.cr6.eq) goto loc_82160530;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821604F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82160520
	if (ctx.cr6.eq) goto loc_82160520;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82160520
	if (ctx.cr6.eq) goto loc_82160520;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82160740
	ctx.lr = 0x82160518;
	sub_82160740(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_82160520:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82160530
	if (ctx.cr6.eq) goto loc_82160530;
	// bl 0x821601b8
	ctx.lr = 0x82160530;
	sub_821601B8(ctx, base);
loc_82160530:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82160540
	if (ctx.cr6.eq) goto loc_82160540;
	// bl 0x821601b8
	ctx.lr = 0x82160540;
	sub_821601B8(ctx, base);
loc_82160540:
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

__attribute__((alias("__imp__sub_82160560"))) PPC_WEAK_FUNC(sub_82160560);
PPC_FUNC_IMPL(__imp__sub_82160560) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,2292
	ctx.r11.s64 = ctx.r11.s64 + 2292;
	// addi r10,r10,2280
	ctx.r10.s64 = ctx.r10.s64 + 2280;
	// addi r4,r31,76
	ctx.r4.s64 = ctx.r31.s64 + 76;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bl 0x8262b468
	ctx.lr = 0x82160598;
	sub_8262B468(ctx, base);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821605fc
	if (ctx.cr6.eq) goto loc_821605FC;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821605fc
	if (ctx.cr6.eq) goto loc_821605FC;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821605C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821605ec
	if (ctx.cr6.eq) goto loc_821605EC;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821605ec
	if (ctx.cr6.eq) goto loc_821605EC;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// bl 0x821608a8
	ctx.lr = 0x821605EC;
	sub_821608A8(ctx, base);
loc_821605EC:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821605fc
	if (ctx.cr6.eq) goto loc_821605FC;
	// bl 0x821601b8
	ctx.lr = 0x821605FC;
	sub_821601B8(ctx, base);
loc_821605FC:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216060c
	if (ctx.cr6.eq) goto loc_8216060C;
	// bl 0x821601b8
	ctx.lr = 0x8216060C;
	sub_821601B8(ctx, base);
loc_8216060C:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82160638
	if (ctx.cr6.eq) goto loc_82160638;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne 0x82160638
	if (!ctx.cr0.eq) goto loc_82160638;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82160638;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82160638:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581670
	ctx.lr = 0x82160640;
	sub_82581670(ctx, base);
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

__attribute__((alias("__imp__sub_82160658"))) PPC_WEAK_FUNC(sub_82160658);
PPC_FUNC_IMPL(__imp__sub_82160658) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// addi r4,r3,76
	ctx.r4.s64 = ctx.r3.s64 + 76;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8262b468
	ctx.lr = 0x82160678;
	sub_8262B468(ctx, base);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82160718
	if (ctx.cr6.eq) goto loc_82160718;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82160718
	if (ctx.cr6.eq) goto loc_82160718;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821606A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82160708
	if (ctx.cr6.eq) goto loc_82160708;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82160708
	if (ctx.cr6.eq) goto loc_82160708;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// bl 0x821609d0
	ctx.lr = 0x821606CC;
	sub_821609D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821606e0
	if (ctx.cr6.eq) goto loc_821606E0;
	// bl 0x821601b8
	ctx.lr = 0x821606E0;
	sub_821601B8(ctx, base);
loc_821606E0:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821606f0
	if (ctx.cr6.eq) goto loc_821606F0;
	// bl 0x821601b8
	ctx.lr = 0x821606F0;
	sub_821601B8(ctx, base);
loc_821606F0:
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
loc_82160708:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82160718
	if (ctx.cr6.eq) goto loc_82160718;
	// bl 0x821601b8
	ctx.lr = 0x82160718;
	sub_821601B8(ctx, base);
loc_82160718:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82160728
	if (ctx.cr6.eq) goto loc_82160728;
	// bl 0x821601b8
	ctx.lr = 0x82160728;
	sub_821601B8(ctx, base);
loc_82160728:
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

__attribute__((alias("__imp__sub_82160740"))) PPC_WEAK_FUNC(sub_82160740);
PPC_FUNC_IMPL(__imp__sub_82160740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b4
	ctx.lr = 0x82160748;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82160778
	if (!ctx.cr6.eq) goto loc_82160778;
loc_82160760:
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,2596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2596);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
loc_82160778:
	// addis r25,r30,8
	ctx.r25.s64 = ctx.r30.s64 + 524288;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82160760
	if (!ctx.cr6.lt) goto loc_82160760;
	// addis r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 524288;
	// lis r26,1
	ctx.r26.s64 = 65536;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r27,r10,1
	ctx.r27.s64 = ctx.r10.s64 + 1;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// ble cr6,0x82160870
	if (!ctx.cr6.gt) goto loc_82160870;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// subfc r10,r10,r27
	ctx.xer.ca = ctx.r27.u32 >= ctx.r10.u32;
	ctx.r10.s64 = ctx.r27.s64 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82160870
	if (ctx.cr6.eq) goto loc_82160870;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82160820
	if (!ctx.cr6.gt) goto loc_82160820;
loc_821607E4:
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// subfc r8,r27,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r27.u32;
	ctx.r8.s64 = ctx.r8.s64 - ctx.r27.s64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82160814
	if (ctx.cr6.eq) goto loc_82160814;
	// addi r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 1;
	// b 0x82160818
	goto loc_82160818;
loc_82160814:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82160818:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821607e4
	if (ctx.cr6.lt) goto loc_821607E4;
loc_82160820:
	// subf r11,r31,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r31.s64;
	// addi r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 1;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x826de940
	ctx.lr = 0x8216084C;
	sub_826DE940(ctx, base);
	// add r11,r31,r26
	ctx.r11.u64 = ctx.r31.u64 + ctx.r26.u64;
	// add r9,r29,r26
	ctx.r9.u64 = ctx.r29.u64 + ctx.r26.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x826de940
	ctx.lr = 0x8216086C;
	sub_826DE940(ctx, base);
	// b 0x82160874
	goto loc_82160874;
loc_82160870:
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
loc_82160874:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// stw r27,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r27.u32);
	// add r10,r31,r26
	ctx.r10.u64 = ctx.r31.u64 + ctx.r26.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stwx r27,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r27.u32);
	// stwx r23,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r23.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821608A8"))) PPC_WEAK_FUNC(sub_821608A8);
PPC_FUNC_IMPL(__imp__sub_821608A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x821608B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-32079
	ctx.r25.s64 = -2102329344;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,2596(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 2596);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821609c8
	if (!ctx.cr6.eq) goto loc_821609C8;
	// addis r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 524288;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8216092c
	if (!ctx.cr6.gt) goto loc_8216092C;
loc_821608F0:
	// add r11,r10,r29
	ctx.r11.u64 = ctx.r10.u64 + ctx.r29.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// subfc r7,r9,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r9.u32;
	ctx.r7.s64 = ctx.r7.s64 - ctx.r9.s64;
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82160920
	if (ctx.cr6.eq) goto loc_82160920;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// b 0x82160924
	goto loc_82160924;
loc_82160920:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82160924:
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821608f0
	if (ctx.cr6.lt) goto loc_821608F0;
loc_8216092C:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821609c8
	if (ctx.cr6.eq) goto loc_821609C8;
	// addi r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 1;
	// subf r11,r30,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r30.s64;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// bl 0x826de940
	ctx.lr = 0x82160970;
	sub_826DE940(ctx, base);
	// lis r26,1
	ctx.r26.s64 = 65536;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r11,r30,r26
	ctx.r11.u64 = ctx.r30.u64 + ctx.r26.u64;
	// add r9,r29,r26
	ctx.r9.u64 = ctx.r29.u64 + ctx.r26.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x826de940
	ctx.lr = 0x82160994;
	sub_826DE940(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,2596(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 2596);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_821609C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821609D0"))) PPC_WEAK_FUNC(sub_821609D0);
PPC_FUNC_IMPL(__imp__sub_821609D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,2596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2596);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82160a78
	if (ctx.cr6.eq) goto loc_82160A78;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82160a48
	if (!ctx.cr6.gt) goto loc_82160A48;
loc_82160A0C:
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// subfc r7,r8,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r8.u32;
	ctx.r7.s64 = ctx.r7.s64 - ctx.r8.s64;
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82160a3c
	if (ctx.cr6.eq) goto loc_82160A3C;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// b 0x82160a40
	goto loc_82160A40;
loc_82160A3C:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82160A40:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82160a0c
	if (ctx.cr6.lt) goto loc_82160A0C;
loc_82160A48:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82160a78
	if (ctx.cr6.eq) goto loc_82160A78;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82160A78:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82160A80"))) PPC_WEAK_FUNC(sub_82160A80);
PPC_FUNC_IMPL(__imp__sub_82160A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82160A88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r5,-1
	ctx.r31.s64 = ctx.r5.s64 + -1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82160ac0
	if (ctx.cr6.lt) goto loc_82160AC0;
loc_82160AA4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82160AB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82160aa4
	if (!ctx.cr6.lt) goto loc_82160AA4;
loc_82160AC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82160AC8"))) PPC_WEAK_FUNC(sub_82160AC8);
PPC_FUNC_IMPL(__imp__sub_82160AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,2308
	ctx.r10.s64 = ctx.r10.s64 + 2308;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// li r8,-1
	ctx.r8.s64 = -1;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82160AE8:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82160ae8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82160AE8;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r6,8
	ctx.r6.s64 = 524288;
	// ori r8,r10,65532
	ctx.r8.u64 = ctx.r10.u64 | 65532;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,2544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2544);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// stwx r7,r3,r6
	PPC_STORE_U32(ctx.r3.u32 + ctx.r6.u32, ctx.r7.u32);
	// lis r6,-32079
	ctx.r6.s64 = -2102329344;
	// stwx r11,r3,r8
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r11.u32);
	// addis r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 262144;
	// ori r8,r9,65532
	ctx.r8.u64 = ctx.r9.u64 | 65532;
loc_82160B28:
	// lwz r9,2596(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 2596);
	// subf r5,r8,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// bne cr6,0x82160b28
	if (!ctx.cr6.eq) goto loc_82160B28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82160B50"))) PPC_WEAK_FUNC(sub_82160B50);
PPC_FUNC_IMPL(__imp__sub_82160B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r11,r11,2308
	ctx.r11.s64 = ctx.r11.s64 + 2308;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82160b84
	if (ctx.cr6.eq) goto loc_82160B84;
	// bl 0x82186190
	ctx.lr = 0x82160B80;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82160B84:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82160B98"))) PPC_WEAK_FUNC(sub_82160B98);
PPC_FUNC_IMPL(__imp__sub_82160B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x825eb070
	ctx.lr = 0x82160BB0;
	sub_825EB070(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2380
	ctx.r11.s64 = ctx.r11.s64 + 2380;
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

__attribute__((alias("__imp__sub_82160BD8"))) PPC_WEAK_FUNC(sub_82160BD8);
PPC_FUNC_IMPL(__imp__sub_82160BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x825eaa10
	ctx.lr = 0x82160BF8;
	sub_825EAA10(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82160c10
	if (ctx.cr6.eq) goto loc_82160C10;
	// bl 0x82186190
	ctx.lr = 0x82160C0C;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82160C10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82160C28"))) PPC_WEAK_FUNC(sub_82160C28);
PPC_FUNC_IMPL(__imp__sub_82160C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r10,-20324(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20324);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82160c58
	if (ctx.cr6.eq) goto loc_82160C58;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82160C58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82160C58:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82160C6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257fa00
	ctx.lr = 0x82160C74;
	sub_8257FA00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82160C88"))) PPC_WEAK_FUNC(sub_82160C88);
PPC_FUNC_IMPL(__imp__sub_82160C88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82160c9c
	if (ctx.cr6.lt) goto loc_82160C9C;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
loc_82160C9C:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82160CA8"))) PPC_WEAK_FUNC(sub_82160CA8);
PPC_FUNC_IMPL(__imp__sub_82160CA8) {
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
	// beq cr6,0x82160d00
	if (ctx.cr6.eq) goto loc_82160D00;
	// li r11,-1
	ctx.r11.s64 = -1;
	// twllei r31,0
	// divwu r11,r11,r31
	ctx.r11.u32 = ctx.r11.u32 / ctx.r31.u32;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82160d00
	if (!ctx.cr6.lt) goto loc_82160D00;
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
	ctx.lr = 0x82160CF4;
	sub_82160C28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,2220
	ctx.r11.s64 = ctx.r11.s64 + 2220;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82160D00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82186158
	ctx.lr = 0x82160D08;
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

__attribute__((alias("__imp__sub_82160D20"))) PPC_WEAK_FUNC(sub_82160D20);
PPC_FUNC_IMPL(__imp__sub_82160D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r11,r11,2360
	ctx.r11.s64 = ctx.r11.s64 + 2360;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82160d54
	if (ctx.cr6.eq) goto loc_82160D54;
	// bl 0x82186190
	ctx.lr = 0x82160D50;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82160D54:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82160D68"))) PPC_WEAK_FUNC(sub_82160D68);
PPC_FUNC_IMPL(__imp__sub_82160D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82160da4
	if (ctx.cr6.eq) goto loc_82160DA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82160DA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82160DA4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r11,r11,2360
	ctx.r11.s64 = ctx.r11.s64 + 2360;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82160dc8
	if (ctx.cr6.eq) goto loc_82160DC8;
	// bl 0x82186190
	ctx.lr = 0x82160DC4;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82160DC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82160DE0"))) PPC_WEAK_FUNC(sub_82160DE0);
PPC_FUNC_IMPL(__imp__sub_82160DE0) {
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
	// li r3,140
	ctx.r3.s64 = 140;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82186158
	ctx.lr = 0x82160DFC;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82160e14
	if (ctx.cr6.eq) goto loc_82160E14;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824a6300
	ctx.lr = 0x82160E0C;
	sub_824A6300(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82160e18
	goto loc_82160E18;
loc_82160E14:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82160E18:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82581ba8
	ctx.lr = 0x82160E30;
	sub_82581BA8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82160e50
	if (ctx.cr6.eq) goto loc_82160E50;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82160E50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82160E50:
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

__attribute__((alias("__imp__sub_82160E68"))) PPC_WEAK_FUNC(sub_82160E68);
PPC_FUNC_IMPL(__imp__sub_82160E68) {
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
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,2600
	ctx.r11.s64 = ctx.r11.s64 + 2600;
	// addi r10,r10,2312
	ctx.r10.s64 = ctx.r10.s64 + 2312;
	// li r3,144
	ctx.r3.s64 = 144;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x82160EA4;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82160ec0
	if (ctx.cr6.eq) goto loc_82160EC0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824a7da8
	ctx.lr = 0x82160EB8;
	sub_824A7DA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82160ec4
	goto loc_82160EC4;
loc_82160EC0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82160EC4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82581ba8
	ctx.lr = 0x82160EDC;
	sub_82581BA8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82160efc
	if (ctx.cr6.eq) goto loc_82160EFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82160EFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82160EFC:
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

__attribute__((alias("__imp__sub_82160F10"))) PPC_WEAK_FUNC(sub_82160F10);
PPC_FUNC_IMPL(__imp__sub_82160F10) {
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
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,2612
	ctx.r11.s64 = ctx.r11.s64 + 2612;
	// addi r10,r10,2848
	ctx.r10.s64 = ctx.r10.s64 + 2848;
	// li r3,144
	ctx.r3.s64 = 144;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82186158
	ctx.lr = 0x82160F4C;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82160f68
	if (ctx.cr6.eq) goto loc_82160F68;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824a7da8
	ctx.lr = 0x82160F60;
	sub_824A7DA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82160f6c
	goto loc_82160F6C;
loc_82160F68:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82160F6C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82581ba8
	ctx.lr = 0x82160F84;
	sub_82581BA8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82160fa4
	if (ctx.cr6.eq) goto loc_82160FA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82160FA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82160FA4:
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

__attribute__((alias("__imp__sub_82160FB8"))) PPC_WEAK_FUNC(sub_82160FB8);
PPC_FUNC_IMPL(__imp__sub_82160FB8) {
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
	// li r3,268
	ctx.r3.s64 = 268;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82186158
	ctx.lr = 0x82160FD4;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82160fec
	if (ctx.cr6.eq) goto loc_82160FEC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824a41b8
	ctx.lr = 0x82160FE4;
	sub_824A41B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82160ff0
	goto loc_82160FF0;
loc_82160FEC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82160FF0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82581ba8
	ctx.lr = 0x82161008;
	sub_82581BA8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82161028
	if (ctx.cr6.eq) goto loc_82161028;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82161028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82161028:
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

__attribute__((alias("__imp__sub_82161040"))) PPC_WEAK_FUNC(sub_82161040);
PPC_FUNC_IMPL(__imp__sub_82161040) {
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
	// li r3,168
	ctx.r3.s64 = 168;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82186158
	ctx.lr = 0x8216105C;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82161074
	if (ctx.cr6.eq) goto loc_82161074;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824a90c8
	ctx.lr = 0x8216106C;
	sub_824A90C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82161078
	goto loc_82161078;
loc_82161074:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82161078:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82581ba8
	ctx.lr = 0x82161090;
	sub_82581BA8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821610b0
	if (ctx.cr6.eq) goto loc_821610B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821610B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821610B0:
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

__attribute__((alias("__imp__sub_821610C8"))) PPC_WEAK_FUNC(sub_821610C8);
PPC_FUNC_IMPL(__imp__sub_821610C8) {
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
	// li r3,320
	ctx.r3.s64 = 320;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82186158
	ctx.lr = 0x821610E4;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821610fc
	if (ctx.cr6.eq) goto loc_821610FC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824aa200
	ctx.lr = 0x821610F4;
	sub_824AA200(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82161100
	goto loc_82161100;
loc_821610FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82161100:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82581ba8
	ctx.lr = 0x82161118;
	sub_82581BA8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82161138
	if (ctx.cr6.eq) goto loc_82161138;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82161138;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82161138:
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

__attribute__((alias("__imp__sub_82161150"))) PPC_WEAK_FUNC(sub_82161150);
PPC_FUNC_IMPL(__imp__sub_82161150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32045
	ctx.r8.s64 = -2100101120;
	// lwz r9,24068(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24068);
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821611b4
	if (!ctx.cr6.eq) goto loc_821611B4;
	// lis r10,-32082
	ctx.r10.s64 = -2102525952;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r10,31480
	ctx.r3.s64 = ctx.r10.s64 + 31480;
	// ori r10,r9,1
	ctx.r10.u64 = ctx.r9.u64 | 1;
	// addi r11,r11,2740
	ctx.r11.s64 = ctx.r11.s64 + 2740;
	// stw r10,24068(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24068, ctx.r10.u32);
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// addi r31,r10,24064
	ctx.r31.s64 = ctx.r10.s64 + 24064;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x8216119C;
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
loc_821611B4:
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,24064
	ctx.r3.s64 = ctx.r11.s64 + 24064;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821611D0"))) PPC_WEAK_FUNC(sub_821611D0);
PPC_FUNC_IMPL(__imp__sub_821611D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32045
	ctx.r8.s64 = -2100101120;
	// lwz r9,24076(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24076);
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82161234
	if (!ctx.cr6.eq) goto loc_82161234;
	// lis r10,-32082
	ctx.r10.s64 = -2102525952;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r10,31456
	ctx.r3.s64 = ctx.r10.s64 + 31456;
	// ori r10,r9,1
	ctx.r10.u64 = ctx.r9.u64 | 1;
	// addi r11,r11,2756
	ctx.r11.s64 = ctx.r11.s64 + 2756;
	// stw r10,24076(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24076, ctx.r10.u32);
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// addi r31,r10,24072
	ctx.r31.s64 = ctx.r10.s64 + 24072;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x8216121C;
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
loc_82161234:
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,24072
	ctx.r3.s64 = ctx.r11.s64 + 24072;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82161250"))) PPC_WEAK_FUNC(sub_82161250);
PPC_FUNC_IMPL(__imp__sub_82161250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32045
	ctx.r8.s64 = -2100101120;
	// lwz r9,24084(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24084);
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821612b4
	if (!ctx.cr6.eq) goto loc_821612B4;
	// lis r10,-32082
	ctx.r10.s64 = -2102525952;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r10,31432
	ctx.r3.s64 = ctx.r10.s64 + 31432;
	// ori r10,r9,1
	ctx.r10.u64 = ctx.r9.u64 | 1;
	// addi r11,r11,2804
	ctx.r11.s64 = ctx.r11.s64 + 2804;
	// stw r10,24084(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24084, ctx.r10.u32);
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// addi r31,r10,24080
	ctx.r31.s64 = ctx.r10.s64 + 24080;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x8216129C;
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
loc_821612B4:
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,24080
	ctx.r3.s64 = ctx.r11.s64 + 24080;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821612D0"))) PPC_WEAK_FUNC(sub_821612D0);
PPC_FUNC_IMPL(__imp__sub_821612D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32045
	ctx.r8.s64 = -2100101120;
	// lwz r9,24092(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24092);
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82161334
	if (!ctx.cr6.eq) goto loc_82161334;
	// lis r10,-32082
	ctx.r10.s64 = -2102525952;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r10,31408
	ctx.r3.s64 = ctx.r10.s64 + 31408;
	// ori r10,r9,1
	ctx.r10.u64 = ctx.r9.u64 | 1;
	// addi r11,r11,2836
	ctx.r11.s64 = ctx.r11.s64 + 2836;
	// stw r10,24092(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24092, ctx.r10.u32);
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// addi r31,r10,24088
	ctx.r31.s64 = ctx.r10.s64 + 24088;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x8216131C;
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
loc_82161334:
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,24088
	ctx.r3.s64 = ctx.r11.s64 + 24088;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82161350"))) PPC_WEAK_FUNC(sub_82161350);
PPC_FUNC_IMPL(__imp__sub_82161350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32045
	ctx.r8.s64 = -2100101120;
	// lwz r9,24100(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24100);
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821613b4
	if (!ctx.cr6.eq) goto loc_821613B4;
	// lis r10,-32082
	ctx.r10.s64 = -2102525952;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r10,31384
	ctx.r3.s64 = ctx.r10.s64 + 31384;
	// ori r10,r9,1
	ctx.r10.u64 = ctx.r9.u64 | 1;
	// addi r11,r11,2864
	ctx.r11.s64 = ctx.r11.s64 + 2864;
	// stw r10,24100(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24100, ctx.r10.u32);
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// addi r31,r10,24096
	ctx.r31.s64 = ctx.r10.s64 + 24096;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x8216139C;
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
loc_821613B4:
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,24096
	ctx.r3.s64 = ctx.r11.s64 + 24096;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821613D0"))) PPC_WEAK_FUNC(sub_821613D0);
PPC_FUNC_IMPL(__imp__sub_821613D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32045
	ctx.r8.s64 = -2100101120;
	// lwz r9,24108(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24108);
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82161434
	if (!ctx.cr6.eq) goto loc_82161434;
	// lis r10,-32082
	ctx.r10.s64 = -2102525952;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r10,31360
	ctx.r3.s64 = ctx.r10.s64 + 31360;
	// ori r10,r9,1
	ctx.r10.u64 = ctx.r9.u64 | 1;
	// addi r11,r11,2880
	ctx.r11.s64 = ctx.r11.s64 + 2880;
	// stw r10,24108(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24108, ctx.r10.u32);
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// addi r31,r10,24104
	ctx.r31.s64 = ctx.r10.s64 + 24104;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x8216141C;
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
loc_82161434:
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,24104
	ctx.r3.s64 = ctx.r11.s64 + 24104;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82161450"))) PPC_WEAK_FUNC(sub_82161450);
PPC_FUNC_IMPL(__imp__sub_82161450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32045
	ctx.r8.s64 = -2100101120;
	// lwz r9,24116(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24116);
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821614b4
	if (!ctx.cr6.eq) goto loc_821614B4;
	// lis r10,-32082
	ctx.r10.s64 = -2102525952;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r10,31336
	ctx.r3.s64 = ctx.r10.s64 + 31336;
	// ori r10,r9,1
	ctx.r10.u64 = ctx.r9.u64 | 1;
	// addi r11,r11,2896
	ctx.r11.s64 = ctx.r11.s64 + 2896;
	// stw r10,24116(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24116, ctx.r10.u32);
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// addi r31,r10,24112
	ctx.r31.s64 = ctx.r10.s64 + 24112;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x8216149C;
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
loc_821614B4:
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,24112
	ctx.r3.s64 = ctx.r11.s64 + 24112;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821614D0"))) PPC_WEAK_FUNC(sub_821614D0);
PPC_FUNC_IMPL(__imp__sub_821614D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32045
	ctx.r8.s64 = -2100101120;
	// lwz r9,24124(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24124);
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82161534
	if (!ctx.cr6.eq) goto loc_82161534;
	// lis r10,-32082
	ctx.r10.s64 = -2102525952;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r10,31528
	ctx.r3.s64 = ctx.r10.s64 + 31528;
	// ori r10,r9,1
	ctx.r10.u64 = ctx.r9.u64 | 1;
	// addi r11,r11,2772
	ctx.r11.s64 = ctx.r11.s64 + 2772;
	// stw r10,24124(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24124, ctx.r10.u32);
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// addi r31,r10,24120
	ctx.r31.s64 = ctx.r10.s64 + 24120;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x8216151C;
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
loc_82161534:
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,24120
	ctx.r3.s64 = ctx.r11.s64 + 24120;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82161550"))) PPC_WEAK_FUNC(sub_82161550);
PPC_FUNC_IMPL(__imp__sub_82161550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32045
	ctx.r8.s64 = -2100101120;
	// lwz r9,24132(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24132);
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821615b4
	if (!ctx.cr6.eq) goto loc_821615B4;
	// lis r10,-32082
	ctx.r10.s64 = -2102525952;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r10,31504
	ctx.r3.s64 = ctx.r10.s64 + 31504;
	// ori r10,r9,1
	ctx.r10.u64 = ctx.r9.u64 | 1;
	// addi r11,r11,2820
	ctx.r11.s64 = ctx.r11.s64 + 2820;
	// stw r10,24132(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24132, ctx.r10.u32);
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// addi r31,r10,24128
	ctx.r31.s64 = ctx.r10.s64 + 24128;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x8216159C;
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
loc_821615B4:
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,24128
	ctx.r3.s64 = ctx.r11.s64 + 24128;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821615D0"))) PPC_WEAK_FUNC(sub_821615D0);
PPC_FUNC_IMPL(__imp__sub_821615D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x821615D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82161624
	if (ctx.cr6.eq) goto loc_82161624;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82161624
	if (ctx.cr6.lt) goto loc_82161624;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq cr6,0x8216161c
	if (ctx.cr6.eq) goto loc_8216161C;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x826dea00
	ctx.lr = 0x8216161C;
	sub_826DEA00(ctx, base);
loc_8216161C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82186190
	ctx.lr = 0x82161624;
	sub_82186190(ctx, base);
loc_82161624:
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// stbx r9,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82161648"))) PPC_WEAK_FUNC(sub_82161648);
PPC_FUNC_IMPL(__imp__sub_82161648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82161650;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82161670
	if (!ctx.cr6.lt) goto loc_82161670;
	// bl 0x8257fca8
	ctx.lr = 0x82161670;
	sub_8257FCA8(ctx, base);
loc_82161670:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subf r9,r29,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82161684
	if (!ctx.cr6.lt) goto loc_82161684;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
loc_82161684:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821616f8
	if (ctx.cr6.eq) goto loc_821616F8;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r8,16
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16, ctx.xer);
	// blt cr6,0x821616a4
	if (ctx.cr6.lt) goto loc_821616A4;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x821616a8
	goto loc_821616A8;
loc_821616A4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_821616A8:
	// cmplwi cr6,r8,16
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16, ctx.xer);
	// blt cr6,0x821616b8
	if (ctx.cr6.lt) goto loc_821616B8;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x821616bc
	goto loc_821616BC;
loc_821616B8:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_821616BC:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// subf r6,r30,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r30.s64;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subf r4,r29,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r29.s64;
	// add r3,r10,r29
	ctx.r3.u64 = ctx.r10.u64 + ctx.r29.u64;
	// bl 0x826dead8
	ctx.lr = 0x821616D4;
	sub_826DEAD8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x821616ec
	if (ctx.cr6.lt) goto loc_821616EC;
	// lwz r28,0(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_821616EC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stbx r10,r28,r11
	PPC_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r10.u8);
loc_821616F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82161708"))) PPC_WEAK_FUNC(sub_82161708);
PPC_FUNC_IMPL(__imp__sub_82161708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82161710;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ori r31,r4,15
	ctx.r31.u64 = ctx.r4.u64 | 15;
	// li r11,-2
	ctx.r11.s64 = -2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82161734
	if (!ctx.cr6.gt) goto loc_82161734;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// b 0x82161764
	goto loc_82161764;
loc_82161734:
	// lis r10,-21846
	ctx.r10.s64 = -1431699456;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// ori r10,r10,43691
	ctx.r10.u64 = ctx.r10.u64 | 43691;
	// mulhwu r10,r31,r10
	ctx.r10.u64 = (uint64_t(ctx.r31.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82161764
	if (!ctx.cr6.lt) goto loc_82161764;
	// subfic r9,r10,-2
	ctx.xer.ca = ctx.r10.u32 <= 4294967294;
	ctx.r9.s64 = -2 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82161764
	if (ctx.cr6.gt) goto loc_82161764;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82161764:
	// addi r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82160ca8
	ctx.lr = 0x82161774;
	sub_82160CA8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821617a8
	if (ctx.cr6.eq) goto loc_821617A8;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82161794
	if (ctx.cr6.lt) goto loc_82161794;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82161798
	goto loc_82161798;
loc_82161794:
	// addi r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 4;
loc_82161798:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826dea00
	ctx.lr = 0x821617A8;
	sub_826DEA00(ctx, base);
loc_821617A8:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821617bc
	if (ctx.cr6.lt) goto loc_821617BC;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x821617BC;
	sub_82186190(ctx, base);
loc_821617BC:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// blt cr6,0x821617e0
	if (ctx.cr6.lt) goto loc_821617E0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_821617E0:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stbx r10,r11,r27
	PPC_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821617F0"))) PPC_WEAK_FUNC(sub_821617F0);
PPC_FUNC_IMPL(__imp__sub_821617F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82581c68
	ctx.lr = 0x82161810;
	sub_82581C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82161848
	if (!ctx.cr6.eq) goto loc_82161848;
	// lis r31,-32045
	ctx.r31.s64 = -2100101120;
	// lwz r4,24136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24136);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82161834
	if (!ctx.cr6.eq) goto loc_82161834;
	// bl 0x82161150
	ctx.lr = 0x8216182C;
	sub_82161150(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,24136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24136, ctx.r4.u32);
loc_82161834:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82161848;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82161848:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82161860"))) PPC_WEAK_FUNC(sub_82161860);
PPC_FUNC_IMPL(__imp__sub_82161860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32045
	ctx.r8.s64 = -2100101120;
	// lwz r9,24180(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24180);
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821618cc
	if (!ctx.cr6.eq) goto loc_821618CC;
	// lis r10,-32082
	ctx.r10.s64 = -2102525952;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r10,31552
	ctx.r3.s64 = ctx.r10.s64 + 31552;
	// ori r10,r9,1
	ctx.r10.u64 = ctx.r9.u64 | 1;
	// addi r11,r11,2912
	ctx.r11.s64 = ctx.r11.s64 + 2912;
	// stw r10,24180(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24180, ctx.r10.u32);
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// addi r31,r10,24172
	ctx.r31.s64 = ctx.r10.s64 + 24172;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x821618B4;
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
loc_821618CC:
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,24172
	ctx.r3.s64 = ctx.r11.s64 + 24172;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821618E8"))) PPC_WEAK_FUNC(sub_821618E8);
PPC_FUNC_IMPL(__imp__sub_821618E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x821618F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,-2
	ctx.r11.s64 = -2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82161910
	if (!ctx.cr6.gt) goto loc_82161910;
	// bl 0x8257fb70
	ctx.lr = 0x82161910;
	sub_8257FB70(ctx, base);
loc_82161910:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82161944
	if (!ctx.cr6.lt) goto loc_82161944;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82161708
	ctx.lr = 0x82161930;
	sub_82161708(ctx, base);
	// subfc r11,r30,r28
	ctx.xer.ca = ctx.r28.u32 >= ctx.r30.u32;
	ctx.r11.s64 = ctx.r28.s64 - ctx.r30.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82161944:
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216198c
	if (ctx.cr6.eq) goto loc_8216198C;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// bge cr6,0x8216198c
	if (!ctx.cr6.lt) goto loc_8216198C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82161968
	if (!ctx.cr6.lt) goto loc_82161968;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82161968:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821615d0
	ctx.lr = 0x82161978;
	sub_821615D0(ctx, base);
	// subfc r11,r30,r28
	ctx.xer.ca = ctx.r28.u32 >= ctx.r30.u32;
	ctx.r11.s64 = ctx.r28.s64 - ctx.r30.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_8216198C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821619b0
	if (!ctx.cr6.eq) goto loc_821619B0;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821619a4
	if (ctx.cr6.lt) goto loc_821619A4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x821619a8
	goto loc_821619A8;
loc_821619A4:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_821619A8:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
loc_821619B0:
	// subfc r11,r30,r28
	ctx.xer.ca = ctx.r28.u32 >= ctx.r30.u32;
	ctx.r11.s64 = ctx.r28.s64 - ctx.r30.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821619C8"))) PPC_WEAK_FUNC(sub_821619C8);
PPC_FUNC_IMPL(__imp__sub_821619C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821619f0
	if (ctx.cr6.eq) goto loc_821619F0;
	// bl 0x821601b8
	ctx.lr = 0x821619F0;
	sub_821601B8(ctx, base);
loc_821619F0:
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82161a08
	if (ctx.cr6.lt) goto loc_82161A08;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82161A08;
	sub_82186190(ctx, base);
loc_82161A08:
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82161a30
	if (ctx.cr6.eq) goto loc_82161A30;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x82581e38
	ctx.lr = 0x82161A30;
	sub_82581E38(ctx, base);
loc_82161A30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82161A48"))) PPC_WEAK_FUNC(sub_82161A48);
PPC_FUNC_IMPL(__imp__sub_82161A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82581c68
	ctx.lr = 0x82161A68;
	sub_82581C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82161aa0
	if (!ctx.cr6.eq) goto loc_82161AA0;
	// lis r31,-32045
	ctx.r31.s64 = -2100101120;
	// lwz r4,24140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24140);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82161a8c
	if (!ctx.cr6.eq) goto loc_82161A8C;
	// bl 0x821611d0
	ctx.lr = 0x82161A84;
	sub_821611D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,24140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24140, ctx.r4.u32);
loc_82161A8C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82161AA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82161AA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82161AB8"))) PPC_WEAK_FUNC(sub_82161AB8);
PPC_FUNC_IMPL(__imp__sub_82161AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x825e9e28
	ctx.lr = 0x82161AD4;
	sub_825E9E28(ctx, base);
	// lis r30,-32045
	ctx.r30.s64 = -2100101120;
	// lwz r4,24136(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24136);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82161af0
	if (!ctx.cr6.eq) goto loc_82161AF0;
	// bl 0x82161150
	ctx.lr = 0x82161AE8;
	sub_82161150(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,24136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24136, ctx.r4.u32);
loc_82161AF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82161B04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82161B20"))) PPC_WEAK_FUNC(sub_82161B20);
PPC_FUNC_IMPL(__imp__sub_82161B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82581c68
	ctx.lr = 0x82161B40;
	sub_82581C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82161c00
	if (!ctx.cr6.eq) goto loc_82161C00;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82161B5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82161ba4
	if (ctx.cr6.eq) goto loc_82161BA4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,2924
	ctx.r10.s64 = ctx.r10.s64 + 2924;
loc_82161B74:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82161b98
	if (ctx.cr6.eq) goto loc_82161B98;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82161b74
	if (ctx.cr6.eq) goto loc_82161B74;
loc_82161B98:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82161ba4
	if (!ctx.cr6.eq) goto loc_82161BA4;
	// li r7,1
	ctx.r7.s64 = 1;
loc_82161BA4:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82161bd0
	if (ctx.cr6.eq) goto loc_82161BD0;
	// lis r31,-32045
	ctx.r31.s64 = -2100101120;
	// lwz r4,24164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24164);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82161bec
	if (!ctx.cr6.eq) goto loc_82161BEC;
	// bl 0x821614d0
	ctx.lr = 0x82161BC4;
	sub_821614D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,24164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24164, ctx.r4.u32);
	// b 0x82161bec
	goto loc_82161BEC;
loc_82161BD0:
	// lis r31,-32045
	ctx.r31.s64 = -2100101120;
	// lwz r4,24136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24136);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82161bec
	if (!ctx.cr6.eq) goto loc_82161BEC;
	// bl 0x82161150
	ctx.lr = 0x82161BE4;
	sub_82161150(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,24136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24136, ctx.r4.u32);
loc_82161BEC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82161C00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82161C00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82161C18"))) PPC_WEAK_FUNC(sub_82161C18);
PPC_FUNC_IMPL(__imp__sub_82161C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82581c68
	ctx.lr = 0x82161C38;
	sub_82581C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82161cf8
	if (!ctx.cr6.eq) goto loc_82161CF8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82161C54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82161c9c
	if (ctx.cr6.eq) goto loc_82161C9C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,2924
	ctx.r10.s64 = ctx.r10.s64 + 2924;
loc_82161C6C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82161c90
	if (ctx.cr6.eq) goto loc_82161C90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82161c6c
	if (ctx.cr6.eq) goto loc_82161C6C;
loc_82161C90:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82161c9c
	if (!ctx.cr6.eq) goto loc_82161C9C;
	// li r7,1
	ctx.r7.s64 = 1;
loc_82161C9C:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82161cc8
	if (ctx.cr6.eq) goto loc_82161CC8;
	// lis r31,-32045
	ctx.r31.s64 = -2100101120;
	// lwz r4,24152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24152);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82161ce4
	if (!ctx.cr6.eq) goto loc_82161CE4;
	// bl 0x82161350
	ctx.lr = 0x82161CBC;
	sub_82161350(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,24152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24152, ctx.r4.u32);
	// b 0x82161ce4
	goto loc_82161CE4;
loc_82161CC8:
	// lis r31,-32045
	ctx.r31.s64 = -2100101120;
	// lwz r4,24184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24184);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82161ce4
	if (!ctx.cr6.eq) goto loc_82161CE4;
	// bl 0x82161860
	ctx.lr = 0x82161CDC;
	sub_82161860(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,24184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24184, ctx.r4.u32);
loc_82161CE4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82161CF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82161CF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82161D10"))) PPC_WEAK_FUNC(sub_82161D10);
PPC_FUNC_IMPL(__imp__sub_82161D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82161D18;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82161d3c
	if (!ctx.cr6.lt) goto loc_82161D3C;
	// bl 0x8257fca8
	ctx.lr = 0x82161D3C;
	sub_8257FCA8(ctx, base);
loc_82161D3C:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// subf r28,r27,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r27.s64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82161d50
	if (!ctx.cr6.lt) goto loc_82161D50;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82161D50:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82161d84
	if (!ctx.cr6.eq) goto loc_82161D84;
	// li r5,-1
	ctx.r5.s64 = -1;
	// add r4,r28,r27
	ctx.r4.u64 = ctx.r28.u64 + ctx.r27.u64;
	// bl 0x82161648
	ctx.lr = 0x82161D68;
	sub_82161648(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82161648
	ctx.lr = 0x82161D78;
	sub_82161648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_82161D84:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821618e8
	ctx.lr = 0x82161D90;
	sub_821618E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82161df8
	if (ctx.cr6.eq) goto loc_82161DF8;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82161db0
	if (ctx.cr6.lt) goto loc_82161DB0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82161db4
	goto loc_82161DB4;
loc_82161DB0:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82161DB4:
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r4,16
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16, ctx.xer);
	// blt cr6,0x82161dcc
	if (ctx.cr6.lt) goto loc_82161DCC;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82161dd0
	goto loc_82161DD0;
loc_82161DCC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82161DD0:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x826dea00
	ctx.lr = 0x82161DDC;
	sub_826DEA00(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82161dec
	if (ctx.cr6.lt) goto loc_82161DEC;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82161DEC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stbx r11,r30,r28
	PPC_STORE_U8(ctx.r30.u32 + ctx.r28.u32, ctx.r11.u8);
loc_82161DF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82161E08"))) PPC_WEAK_FUNC(sub_82161E08);
PPC_FUNC_IMPL(__imp__sub_82161E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82161E10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x82161e38
	if (ctx.cr6.lt) goto loc_82161E38;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82161e3c
	goto loc_82161E3C;
loc_82161E38:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82161E3C:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82161e6c
	if (ctx.cr6.lt) goto loc_82161E6C;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x82161e54
	if (ctx.cr6.lt) goto loc_82161E54;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82161e58
	goto loc_82161E58;
loc_82161E54:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82161E58:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82161e70
	if (ctx.cr6.gt) goto loc_82161E70;
loc_82161E6C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82161E70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82161eac
	if (ctx.cr6.eq) goto loc_82161EAC;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x82161e8c
	if (ctx.cr6.lt) goto loc_82161E8C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82161e90
	goto loc_82161E90;
loc_82161E8C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82161E90:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// subf r5,r11,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r11.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82161d10
	ctx.lr = 0x82161EA4;
	sub_82161D10(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82161EAC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821618e8
	ctx.lr = 0x82161EBC;
	sub_821618E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82161f10
	if (ctx.cr6.eq) goto loc_82161F10;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r4,16
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16, ctx.xer);
	// blt cr6,0x82161edc
	if (ctx.cr6.lt) goto loc_82161EDC;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82161ee0
	goto loc_82161EE0;
loc_82161EDC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82161EE0:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x826dea00
	ctx.lr = 0x82161EEC;
	sub_826DEA00(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82161f00
	if (ctx.cr6.lt) goto loc_82161F00;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82161f04
	goto loc_82161F04;
loc_82161F00:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82161F04:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stbx r10,r11,r28
	PPC_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u8);
loc_82161F10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82161F20"))) PPC_WEAK_FUNC(sub_82161F20);
PPC_FUNC_IMPL(__imp__sub_82161F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581c68
	ctx.lr = 0x82161F40;
	sub_82581C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82161fa8
	if (!ctx.cr6.eq) goto loc_82161FA8;
	// bl 0x82629338
	ctx.lr = 0x82161F50;
	sub_82629338(ctx, base);
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,5672
	ctx.r6.s64 = ctx.r11.s64 + 5672;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,5628
	ctx.r5.s64 = ctx.r11.s64 + 5628;
	// bl 0x826df418
	ctx.lr = 0x82161F6C;
	sub_826DF418(ctx, base);
	// bl 0x824a7698
	ctx.lr = 0x82161F70;
	sub_824A7698(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82161F88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r30,-32045
	ctx.r30.s64 = -2100101120;
	// lwz r4,24168(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24168);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82161fd0
	if (!ctx.cr6.eq) goto loc_82161FD0;
	// bl 0x82161550
	ctx.lr = 0x82161F9C;
	sub_82161550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,24168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24168, ctx.r4.u32);
	// b 0x82161fd0
	goto loc_82161FD0;
loc_82161FA8:
	// bl 0x82581c68
	ctx.lr = 0x82161FAC;
	sub_82581C68(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82161fe4
	if (!ctx.cr6.eq) goto loc_82161FE4;
	// lis r30,-32045
	ctx.r30.s64 = -2100101120;
	// lwz r4,24184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24184);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82161fd0
	if (!ctx.cr6.eq) goto loc_82161FD0;
	// bl 0x82161860
	ctx.lr = 0x82161FC8;
	sub_82161860(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,24184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24184, ctx.r4.u32);
loc_82161FD0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82161FE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82161FE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82162000"))) PPC_WEAK_FUNC(sub_82162000);
PPC_FUNC_IMPL(__imp__sub_82162000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82581c68
	ctx.lr = 0x82162020;
	sub_82581C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82162058
	if (!ctx.cr6.eq) goto loc_82162058;
	// lis r31,-32045
	ctx.r31.s64 = -2100101120;
	// lwz r4,24184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24184);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82162044
	if (!ctx.cr6.eq) goto loc_82162044;
	// bl 0x82161860
	ctx.lr = 0x8216203C;
	sub_82161860(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,24184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24184, ctx.r4.u32);
loc_82162044:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82162058;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82162058:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82162070"))) PPC_WEAK_FUNC(sub_82162070);
PPC_FUNC_IMPL(__imp__sub_82162070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r10,24228(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24228);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// bne cr6,0x821620d0
	if (!ctx.cr6.eq) goto loc_821620D0;
	// addi r31,r11,24188
	ctx.r31.s64 = ctx.r11.s64 + 24188;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24228(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24228, ctx.r11.u32);
	// bl 0x825eca20
	ctx.lr = 0x821620AC;
	sub_825ECA20(ctx, base);
	// lis r11,-32082
	ctx.r11.s64 = -2102525952;
	// addi r3,r11,31640
	ctx.r3.s64 = ctx.r11.s64 + 31640;
	// bl 0x826ded00
	ctx.lr = 0x821620B8;
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
loc_821620D0:
	// addi r3,r11,24188
	ctx.r3.s64 = ctx.r11.s64 + 24188;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821620E8"))) PPC_WEAK_FUNC(sub_821620E8);
PPC_FUNC_IMPL(__imp__sub_821620E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82162118:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82162118
	if (!ctx.cr6.eq) goto loc_82162118;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x8216213C;
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

__attribute__((alias("__imp__sub_82162158"))) PPC_WEAK_FUNC(sub_82162158);
PPC_FUNC_IMPL(__imp__sub_82162158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82162160;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,148
	ctx.r3.s64 = 148;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82186158
	ctx.lr = 0x82162170;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82162188
	if (ctx.cr6.eq) goto loc_82162188;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x824a1918
	ctx.lr = 0x82162180;
	sub_824A1918(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8216218c
	goto loc_8216218C;
loc_82162188:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8216218C:
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,2624
	ctx.r30.s64 = ctx.r11.s64 + 2624;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821621c0
	if (ctx.cr6.eq) goto loc_821621C0;
loc_821621A4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824a1bd8
	ctx.lr = 0x821621AC;
	sub_824A1BD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821621a4
	if (!ctx.cr6.eq) goto loc_821621A4;
loc_821621C0:
	// lis r30,-32045
	ctx.r30.s64 = -2100101120;
	// lwz r4,24232(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24232);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82162210
	if (!ctx.cr6.eq) goto loc_82162210;
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// lwz r11,24228(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24228);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lis r9,-32045
	ctx.r9.s64 = -2100101120;
	// addi r31,r9,24188
	ctx.r31.s64 = ctx.r9.s64 + 24188;
	// bne cr6,0x82162208
	if (!ctx.cr6.eq) goto loc_82162208;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24228, ctx.r11.u32);
	// bl 0x825eca20
	ctx.lr = 0x821621FC;
	sub_825ECA20(ctx, base);
	// lis r11,-32082
	ctx.r11.s64 = -2102525952;
	// addi r3,r11,31640
	ctx.r3.s64 = ctx.r11.s64 + 31640;
	// bl 0x826ded00
	ctx.lr = 0x82162208;
	sub_826DED00(ctx, base);
loc_82162208:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r4,24232(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24232, ctx.r4.u32);
loc_82162210:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r5,r11,2940
	ctx.r5.s64 = ctx.r11.s64 + 2940;
	// bl 0x825ec7d8
	ctx.lr = 0x82162220;
	sub_825EC7D8(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,2932
	ctx.r4.s64 = ctx.r11.s64 + 2932;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216223C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824a0d58
	ctx.lr = 0x82162248;
	sub_824A0D58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82581ba8
	ctx.lr = 0x82162260;
	sub_82581BA8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82162280
	if (ctx.cr6.eq) goto loc_82162280;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82162280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82162280:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82162290
	if (ctx.cr6.eq) goto loc_82162290;
	// bl 0x821601b8
	ctx.lr = 0x82162290;
	sub_821601B8(ctx, base);
loc_82162290:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82162298"))) PPC_WEAK_FUNC(sub_82162298);
PPC_FUNC_IMPL(__imp__sub_82162298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x821622A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82581c68
	ctx.lr = 0x821622B4;
	sub_82581C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82162398
	if (!ctx.cr6.eq) goto loc_82162398;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82629338
	ctx.lr = 0x821622C4;
	sub_82629338(ctx, base);
	// lis r31,-32045
	ctx.r31.s64 = -2100101120;
	// lwz r30,80(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r4,24232(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24232);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821622e4
	if (!ctx.cr6.eq) goto loc_821622E4;
	// bl 0x82162070
	ctx.lr = 0x821622DC;
	sub_82162070(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,24232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24232, ctx.r4.u32);
loc_821622E4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,2940
	ctx.r5.s64 = ctx.r11.s64 + 2940;
	// bl 0x825ec7d8
	ctx.lr = 0x821622F4;
	sub_825EC7D8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,2932
	ctx.r4.s64 = ctx.r11.s64 + 2932;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82162314;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,24232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24232);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82162328
	if (!ctx.cr6.eq) goto loc_82162328;
	// bl 0x82162070
	ctx.lr = 0x82162324;
	sub_82162070(ctx, base);
	// stw r3,24232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24232, ctx.r3.u32);
loc_82162328:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825ec9c8
	ctx.lr = 0x82162330;
	sub_825EC9C8(ctx, base);
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r9,r30,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,2624
	ctx.r11.s64 = ctx.r11.s64 + 2624;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,84(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// lwzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82162358;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82162380
	if (ctx.cr6.eq) goto loc_82162380;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82162380;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82162380:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821623fc
	if (ctx.cr6.eq) goto loc_821623FC;
	// bl 0x821601b8
	ctx.lr = 0x82162390;
	sub_821601B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82162398:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821623ec
	if (!ctx.cr6.eq) goto loc_821623EC;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82186158
	ctx.lr = 0x821623AC;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821623c0
	if (ctx.cr6.eq) goto loc_821623C0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824a0490
	ctx.lr = 0x821623BC;
	sub_824A0490(ctx, base);
	// b 0x821623c4
	goto loc_821623C4;
loc_821623C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821623C4:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821623ec
	if (ctx.cr6.eq) goto loc_821623EC;
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
	ctx.lr = 0x821623EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821623EC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lfs f1,2952(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2952);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x824a0870
	ctx.lr = 0x821623FC;
	sub_824A0870(ctx, base);
loc_821623FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82162408"))) PPC_WEAK_FUNC(sub_82162408);
PPC_FUNC_IMPL(__imp__sub_82162408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82162410;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r3,140
	ctx.r3.s64 = 140;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82186158
	ctx.lr = 0x82162428;
	sub_82186158(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82162470
	if (ctx.cr6.eq) goto loc_82162470;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82162448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821620e8
	ctx.lr = 0x82162454;
	sub_821620E8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x824a5eb8
	ctx.lr = 0x82162468;
	sub_824A5EB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82162474
	goto loc_82162474;
loc_82162470:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82162474:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82581ba8
	ctx.lr = 0x8216248C;
	sub_82581BA8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821624ac
	if (ctx.cr6.eq) goto loc_821624AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821624AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821624AC:
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821624cc
	if (ctx.cr6.eq) goto loc_821624CC;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821624cc
	if (ctx.cr6.lt) goto loc_821624CC;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82186190
	ctx.lr = 0x821624CC;
	sub_82186190(ctx, base);
loc_821624CC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821624D8"))) PPC_WEAK_FUNC(sub_821624D8);
PPC_FUNC_IMPL(__imp__sub_821624D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,512
	ctx.r5.s64 = 512;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x826df680
	ctx.lr = 0x821624FC;
	sub_826DF680(ctx, base);
	// addi r3,r31,512
	ctx.r3.s64 = ctx.r31.s64 + 512;
	// addi r4,r30,512
	ctx.r4.s64 = ctx.r30.s64 + 512;
	// li r5,128
	ctx.r5.s64 = 128;
	// bl 0x826df680
	ctx.lr = 0x8216250C;
	sub_826DF680(ctx, base);
	// addi r3,r31,640
	ctx.r3.s64 = ctx.r31.s64 + 640;
	// addi r4,r30,640
	ctx.r4.s64 = ctx.r30.s64 + 640;
	// li r5,128
	ctx.r5.s64 = 128;
	// bl 0x826df680
	ctx.lr = 0x8216251C;
	sub_826DF680(ctx, base);
	// addi r10,r31,768
	ctx.r10.s64 = ctx.r31.s64 + 768;
	// addi r11,r30,768
	ctx.r11.s64 = ctx.r30.s64 + 768;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8216252C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8216252c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216252C;
	// addi r10,r31,800
	ctx.r10.s64 = ctx.r31.s64 + 800;
	// addi r11,r30,800
	ctx.r11.s64 = ctx.r30.s64 + 800;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82162550:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82162550
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82162550;
	// addi r10,r31,832
	ctx.r10.s64 = ctx.r31.s64 + 832;
	// addi r11,r30,832
	ctx.r11.s64 = ctx.r30.s64 + 832;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82162574:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82162574
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82162574;
	// lwz r3,864(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 864);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r3.u32);
	// beq cr6,0x8216259c
	if (ctx.cr6.eq) goto loc_8216259C;
	// bl 0x82659610
	ctx.lr = 0x8216259C;
	sub_82659610(ctx, base);
loc_8216259C:
	// lwz r11,868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 868);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r11.u32);
	// lwz r11,872(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 872);
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// lwz r11,876(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 876);
	// stw r11,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821625D0"))) PPC_WEAK_FUNC(sub_821625D0);
PPC_FUNC_IMPL(__imp__sub_821625D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,512
	ctx.r5.s64 = 512;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x826df680
	ctx.lr = 0x821625F4;
	sub_826DF680(ctx, base);
	// addi r3,r31,512
	ctx.r3.s64 = ctx.r31.s64 + 512;
	// addi r4,r30,512
	ctx.r4.s64 = ctx.r30.s64 + 512;
	// li r5,128
	ctx.r5.s64 = 128;
	// bl 0x826df680
	ctx.lr = 0x82162604;
	sub_826DF680(ctx, base);
	// addi r10,r31,640
	ctx.r10.s64 = ctx.r31.s64 + 640;
	// addi r11,r30,640
	ctx.r11.s64 = ctx.r30.s64 + 640;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82162614:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82162614
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82162614;
	// lwz r3,672(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 672);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r3.u32);
	// beq cr6,0x8216263c
	if (ctx.cr6.eq) goto loc_8216263C;
	// bl 0x82659610
	ctx.lr = 0x8216263C;
	sub_82659610(ctx, base);
loc_8216263C:
	// lbz r11,676(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 676);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,676(r31)
	PPC_STORE_U8(ctx.r31.u32 + 676, ctx.r11.u8);
	// lwz r11,680(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 680);
	// stw r11,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r11.u32);
	// lwz r11,684(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 684);
	// stw r11,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r11.u32);
	// lwz r11,688(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 688);
	// stw r11,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82162678"))) PPC_WEAK_FUNC(sub_82162678);
PPC_FUNC_IMPL(__imp__sub_82162678) {
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
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x82186158
	ctx.lr = 0x8216268C;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821626a8
	if (ctx.cr6.eq) goto loc_821626A8;
	// bl 0x825ecf00
	ctx.lr = 0x82162698;
	sub_825ECF00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821626A8:
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

__attribute__((alias("__imp__sub_821626C0"))) PPC_WEAK_FUNC(sub_821626C0);
PPC_FUNC_IMPL(__imp__sub_821626C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82581e98
	ctx.lr = 0x821626E0;
	sub_82581E98(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821626f8
	if (ctx.cr6.eq) goto loc_821626F8;
	// bl 0x82186190
	ctx.lr = 0x821626F4;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821626F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82162710"))) PPC_WEAK_FUNC(sub_82162710);
PPC_FUNC_IMPL(__imp__sub_82162710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// bne cr6,0x8216277c
	if (!ctx.cr6.eq) goto loc_8216277C;
	// lfs f0,832(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 832);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-32(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// lfs f0,836(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 836);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-28(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lfs f0,840(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 840);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-24(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// lfs f0,844(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 844);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-20(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// lfs f0,800(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 800);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lfs f0,804(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 804);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f0,808(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 808);
	ctx.f0.f64 = double(temp.f32);
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// stvx v0,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
loc_8216277C:
	// lfs f0,848(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 848);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lfs f0,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stfs f0,-20(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// lfs f0,852(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 852);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f0,856(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 856);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lfs f0,860(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 860);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f0,816(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 816);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-32(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// lfs f0,820(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 820);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-28(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// lfs f0,824(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 824);
	ctx.f0.f64 = double(temp.f32);
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,-24(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// stvx v0,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821627E0"))) PPC_WEAK_FUNC(sub_821627E0);
PPC_FUNC_IMPL(__imp__sub_821627E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821627f4
	if (!ctx.cr6.eq) goto loc_821627F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821627F4:
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,2383
	ctx.r9.s64 = 156172288;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// ori r9,r9,8341
	ctx.r9.u64 = ctx.r9.u64 | 8341;
	// mulhw r11,r11,r9
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82162818"))) PPC_WEAK_FUNC(sub_82162818);
PPC_FUNC_IMPL(__imp__sub_82162818) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216284c
	if (ctx.cr6.eq) goto loc_8216284C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,2383
	ctx.r9.s64 = 156172288;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// ori r9,r9,8341
	ctx.r9.u64 = ctx.r9.u64 | 8341;
	// mulhw r11,r11,r9
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82162850
	if (ctx.cr6.lt) goto loc_82162850;
loc_8216284C:
	// twi 31,r0,22
loc_82162850:
	// mulli r11,r4,880
	ctx.r11.s64 = ctx.r4.s64 * 880;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82162860"))) PPC_WEAK_FUNC(sub_82162860);
PPC_FUNC_IMPL(__imp__sub_82162860) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82162894
	if (ctx.cr6.eq) goto loc_82162894;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,2383
	ctx.r9.s64 = 156172288;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// ori r9,r9,8341
	ctx.r9.u64 = ctx.r9.u64 | 8341;
	// mulhw r11,r11,r9
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82162898
	if (ctx.cr6.lt) goto loc_82162898;
loc_82162894:
	// twi 31,r0,22
loc_82162898:
	// mulli r11,r4,880
	ctx.r11.s64 = ctx.r4.s64 * 880;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,868(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 868);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821628A8"))) PPC_WEAK_FUNC(sub_821628A8);
PPC_FUNC_IMPL(__imp__sub_821628A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821628dc
	if (ctx.cr6.eq) goto loc_821628DC;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,2383
	ctx.r9.s64 = 156172288;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// ori r9,r9,8341
	ctx.r9.u64 = ctx.r9.u64 | 8341;
	// mulhw r11,r11,r9
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821628e0
	if (ctx.cr6.lt) goto loc_821628E0;
loc_821628DC:
	// twi 31,r0,22
loc_821628E0:
	// mulli r11,r4,880
	ctx.r11.s64 = ctx.r4.s64 * 880;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,872(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 872);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821628F0"))) PPC_WEAK_FUNC(sub_821628F0);
PPC_FUNC_IMPL(__imp__sub_821628F0) {
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
	// beq cr6,0x82162948
	if (ctx.cr6.eq) goto loc_82162948;
	// li r11,-1
	ctx.r11.s64 = -1;
	// twllei r31,0
	// divwu r11,r11,r31
	ctx.r11.u32 = ctx.r11.u32 / ctx.r31.u32;
	// cmplwi cr6,r11,880
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 880, ctx.xer);
	// bge cr6,0x82162948
	if (!ctx.cr6.lt) goto loc_82162948;
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
	ctx.lr = 0x8216293C;
	sub_82160C28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,2220
	ctx.r11.s64 = ctx.r11.s64 + 2220;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82162948:
	// mulli r3,r31,880
	ctx.r3.s64 = ctx.r31.s64 * 880;
	// bl 0x82186158
	ctx.lr = 0x82162950;
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

__attribute__((alias("__imp__sub_82162968"))) PPC_WEAK_FUNC(sub_82162968);
PPC_FUNC_IMPL(__imp__sub_82162968) {
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
	// beq cr6,0x821629c0
	if (ctx.cr6.eq) goto loc_821629C0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// twllei r31,0
	// divwu r11,r11,r31
	ctx.r11.u32 = ctx.r11.u32 / ctx.r31.u32;
	// cmplwi cr6,r11,668
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 668, ctx.xer);
	// bge cr6,0x821629c0
	if (!ctx.cr6.lt) goto loc_821629C0;
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
	ctx.lr = 0x821629B4;
	sub_82160C28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,2220
	ctx.r11.s64 = ctx.r11.s64 + 2220;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_821629C0:
	// mulli r3,r31,668
	ctx.r3.s64 = ctx.r31.s64 * 668;
	// bl 0x82186158
	ctx.lr = 0x821629C8;
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

__attribute__((alias("__imp__sub_821629E0"))) PPC_WEAK_FUNC(sub_821629E0);
PPC_FUNC_IMPL(__imp__sub_821629E0) {
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
	// beq cr6,0x82162a38
	if (ctx.cr6.eq) goto loc_82162A38;
	// li r11,-1
	ctx.r11.s64 = -1;
	// twllei r31,0
	// divwu r11,r11,r31
	ctx.r11.u32 = ctx.r11.u32 / ctx.r31.u32;
	// cmplwi cr6,r11,692
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 692, ctx.xer);
	// bge cr6,0x82162a38
	if (!ctx.cr6.lt) goto loc_82162A38;
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
	ctx.lr = 0x82162A2C;
	sub_82160C28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,2220
	ctx.r11.s64 = ctx.r11.s64 + 2220;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82162A38:
	// mulli r3,r31,692
	ctx.r3.s64 = ctx.r31.s64 * 692;
	// bl 0x82186158
	ctx.lr = 0x82162A40;
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

__attribute__((alias("__imp__sub_82162A58"))) PPC_WEAK_FUNC(sub_82162A58);
PPC_FUNC_IMPL(__imp__sub_82162A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82162A60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,25115
	ctx.r10.s64 = 1645936640;
	// subf r11,r3,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r3.s64;
	// ori r10,r10,38851
	ctx.r10.u64 = ctx.r10.u64 | 38851;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mulhw r11,r11,r10
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32)) >> 32;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r11,r11,668
	ctx.r11.s64 = ctx.r11.s64 * 668;
	// add r28,r11,r5
	ctx.r28.u64 = ctx.r11.u64 + ctx.r5.u64;
	// beq cr6,0x82162ab8
	if (ctx.cr6.eq) goto loc_82162AB8;
	// subf r29,r3,r5
	ctx.r29.s64 = ctx.r5.s64 - ctx.r3.s64;
loc_82162A9C:
	// add r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 + ctx.r31.u64;
	// li r5,668
	ctx.r5.s64 = 668;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826df680
	ctx.lr = 0x82162AAC;
	sub_826DF680(ctx, base);
	// addi r31,r31,668
	ctx.r31.s64 = ctx.r31.s64 + 668;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82162a9c
	if (!ctx.cr6.eq) goto loc_82162A9C;
loc_82162AB8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82162AC8"))) PPC_WEAK_FUNC(sub_82162AC8);
PPC_FUNC_IMPL(__imp__sub_82162AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82162AD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r9,r31,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r31.s64;
	// li r10,512
	ctx.r10.s64 = 512;
loc_82162AE8:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82162ae8
	if (!ctx.cr6.eq) goto loc_82162AE8;
	// addi r11,r31,512
	ctx.r11.s64 = ctx.r31.s64 + 512;
	// li r10,128
	ctx.r10.s64 = 128;
loc_82162B08:
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82162b08
	if (!ctx.cr6.eq) goto loc_82162B08;
	// addi r11,r31,640
	ctx.r11.s64 = ctx.r31.s64 + 640;
	// li r10,128
	ctx.r10.s64 = 128;
loc_82162B28:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82162b28
	if (!ctx.cr6.eq) goto loc_82162B28;
	// addi r11,r31,768
	ctx.r11.s64 = ctx.r31.s64 + 768;
	// li r10,32
	ctx.r10.s64 = 32;
loc_82162B48:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82162b48
	if (!ctx.cr6.eq) goto loc_82162B48;
	// lfs f0,800(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,800(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 800, temp.u32);
	// lfs f0,804(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 804);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,804(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 804, temp.u32);
	// lfs f0,808(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 808);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,808(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 808, temp.u32);
	// lfs f0,812(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 812);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,812(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 812, temp.u32);
	// lfs f0,816(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 816);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,816(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 816, temp.u32);
	// lfs f0,820(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 820);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,820(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 820, temp.u32);
	// lfs f0,824(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 824);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,824(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 824, temp.u32);
	// lfs f0,828(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 828);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,828(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 828, temp.u32);
	// lfs f0,832(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,832(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 832, temp.u32);
	// lfs f0,836(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 836);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,836(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 836, temp.u32);
	// lfs f0,840(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 840);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,840(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 840, temp.u32);
	// lfs f0,844(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 844);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,844(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 844, temp.u32);
	// lfs f0,848(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,848(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 848, temp.u32);
	// lfs f0,852(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 852);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,852(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 852, temp.u32);
	// lfs f0,856(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 856);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,856(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 856, temp.u32);
	// lfs f0,860(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 860);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,860(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 860, temp.u32);
	// lwz r29,864(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 864);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82162bf4
	if (ctx.cr6.eq) goto loc_82162BF4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82659610
	ctx.lr = 0x82162BF4;
	sub_82659610(ctx, base);
loc_82162BF4:
	// lwz r3,864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// stw r29,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82162c08
	if (ctx.cr6.eq) goto loc_82162C08;
	// bl 0x82581e38
	ctx.lr = 0x82162C08;
	sub_82581E38(ctx, base);
loc_82162C08:
	// lwz r11,868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 868);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r11.u32);
	// lwz r11,872(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 872);
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// lwz r11,876(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 876);
	// stw r11,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82162C30"))) PPC_WEAK_FUNC(sub_82162C30);
PPC_FUNC_IMPL(__imp__sub_82162C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82162C38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r9,r31,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r31.s64;
	// li r10,512
	ctx.r10.s64 = 512;
loc_82162C50:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82162c50
	if (!ctx.cr6.eq) goto loc_82162C50;
	// addi r11,r31,512
	ctx.r11.s64 = ctx.r31.s64 + 512;
	// li r10,128
	ctx.r10.s64 = 128;
loc_82162C70:
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82162c70
	if (!ctx.cr6.eq) goto loc_82162C70;
	// addi r11,r31,640
	ctx.r11.s64 = ctx.r31.s64 + 640;
	// li r10,32
	ctx.r10.s64 = 32;
loc_82162C90:
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82162c90
	if (!ctx.cr6.eq) goto loc_82162C90;
	// lwz r30,672(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 672);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82162cbc
	if (ctx.cr6.eq) goto loc_82162CBC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x82162CBC;
	sub_82659610(ctx, base);
loc_82162CBC:
	// lwz r3,672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// stw r30,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82162cd0
	if (ctx.cr6.eq) goto loc_82162CD0;
	// bl 0x82581e38
	ctx.lr = 0x82162CD0;
	sub_82581E38(ctx, base);
loc_82162CD0:
	// lbz r11,676(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 676);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,676(r31)
	PPC_STORE_U8(ctx.r31.u32 + 676, ctx.r11.u8);
	// lwz r11,680(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 680);
	// stw r11,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r11.u32);
	// lwz r11,684(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 684);
	// stw r11,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r11.u32);
	// lwz r11,688(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 688);
	// stw r11,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82162D00"))) PPC_WEAK_FUNC(sub_82162D00);
PPC_FUNC_IMPL(__imp__sub_82162D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82162D08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,25115
	ctx.r10.s64 = 1645936640;
	// subf r11,r30,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r30.s64;
	// ori r10,r10,38851
	ctx.r10.u64 = ctx.r10.u64 | 38851;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mulhw r11,r11,r10
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32)) >> 32;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r11,r11,668
	ctx.r11.s64 = ctx.r11.s64 * 668;
	// subf r28,r11,r5
	ctx.r28.s64 = ctx.r5.s64 - ctx.r11.s64;
	// beq cr6,0x82162d60
	if (ctx.cr6.eq) goto loc_82162D60;
	// subf r29,r4,r5
	ctx.r29.s64 = ctx.r5.s64 - ctx.r4.s64;
loc_82162D44:
	// addi r31,r31,-668
	ctx.r31.s64 = ctx.r31.s64 + -668;
	// li r5,668
	ctx.r5.s64 = 668;
	// add r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826df680
	ctx.lr = 0x82162D58;
	sub_826DF680(ctx, base);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82162d44
	if (!ctx.cr6.eq) goto loc_82162D44;
loc_82162D60:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82162D70"))) PPC_WEAK_FUNC(sub_82162D70);
PPC_FUNC_IMPL(__imp__sub_82162D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r10,24256(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24256);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// bne cr6,0x82162ddc
	if (!ctx.cr6.eq) goto loc_82162DDC;
	// addi r31,r11,24240
	ctx.r31.s64 = ctx.r11.s64 + 24240;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24256(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24256, ctx.r11.u32);
	// bl 0x82581e70
	ctx.lr = 0x82162DAC;
	sub_82581E70(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32082
	ctx.r10.s64 = -2102525952;
	// addi r11,r11,3004
	ctx.r11.s64 = ctx.r11.s64 + 3004;
	// addi r3,r10,31704
	ctx.r3.s64 = ctx.r10.s64 + 31704;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x82162DC4;
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
loc_82162DDC:
	// addi r3,r11,24240
	ctx.r3.s64 = ctx.r11.s64 + 24240;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82162DF8"))) PPC_WEAK_FUNC(sub_82162DF8);
PPC_FUNC_IMPL(__imp__sub_82162DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r10,24276(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24276);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// bne cr6,0x82162e64
	if (!ctx.cr6.eq) goto loc_82162E64;
	// addi r31,r11,24260
	ctx.r31.s64 = ctx.r11.s64 + 24260;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24276(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24276, ctx.r11.u32);
	// bl 0x82581e70
	ctx.lr = 0x82162E34;
	sub_82581E70(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32082
	ctx.r10.s64 = -2102525952;
	// addi r11,r11,3028
	ctx.r11.s64 = ctx.r11.s64 + 3028;
	// addi r3,r10,31688
	ctx.r3.s64 = ctx.r10.s64 + 31688;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x82162E4C;
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
loc_82162E64:
	// addi r3,r11,24260
	ctx.r3.s64 = ctx.r11.s64 + 24260;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82162E80"))) PPC_WEAK_FUNC(sub_82162E80);
PPC_FUNC_IMPL(__imp__sub_82162E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82162E88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,2383
	ctx.r10.s64 = 156172288;
	// subf r11,r3,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r3.s64;
	// ori r10,r10,8341
	ctx.r10.u64 = ctx.r10.u64 | 8341;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mulhw r11,r11,r10
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32)) >> 32;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r11,r11,880
	ctx.r11.s64 = ctx.r11.s64 * 880;
	// add r28,r11,r5
	ctx.r28.u64 = ctx.r11.u64 + ctx.r5.u64;
	// beq cr6,0x82162edc
	if (ctx.cr6.eq) goto loc_82162EDC;
	// subf r29,r3,r5
	ctx.r29.s64 = ctx.r5.s64 - ctx.r3.s64;
loc_82162EC4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 + ctx.r31.u64;
	// bl 0x82162ac8
	ctx.lr = 0x82162ED0;
	sub_82162AC8(ctx, base);
	// addi r31,r31,880
	ctx.r31.s64 = ctx.r31.s64 + 880;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82162ec4
	if (!ctx.cr6.eq) goto loc_82162EC4;
loc_82162EDC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82162EE8"))) PPC_WEAK_FUNC(sub_82162EE8);
PPC_FUNC_IMPL(__imp__sub_82162EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82162EF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,6061
	ctx.r10.s64 = 397213696;
	// subf r11,r3,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r3.s64;
	// ori r10,r10,8713
	ctx.r10.u64 = ctx.r10.u64 | 8713;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mulhw r11,r11,r10
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32)) >> 32;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r11,r11,692
	ctx.r11.s64 = ctx.r11.s64 * 692;
	// add r28,r11,r5
	ctx.r28.u64 = ctx.r11.u64 + ctx.r5.u64;
	// beq cr6,0x82162f44
	if (ctx.cr6.eq) goto loc_82162F44;
	// subf r29,r3,r5
	ctx.r29.s64 = ctx.r5.s64 - ctx.r3.s64;
loc_82162F2C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 + ctx.r31.u64;
	// bl 0x82162c30
	ctx.lr = 0x82162F38;
	sub_82162C30(ctx, base);
	// addi r31,r31,692
	ctx.r31.s64 = ctx.r31.s64 + 692;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82162f2c
	if (!ctx.cr6.eq) goto loc_82162F2C;
loc_82162F44:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82162F50"))) PPC_WEAK_FUNC(sub_82162F50);
PPC_FUNC_IMPL(__imp__sub_82162F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82162F58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,2383
	ctx.r10.s64 = 156172288;
	// subf r11,r30,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r30.s64;
	// ori r10,r10,8341
	ctx.r10.u64 = ctx.r10.u64 | 8341;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mulhw r11,r11,r10
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32)) >> 32;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r11,r11,880
	ctx.r11.s64 = ctx.r11.s64 * 880;
	// subf r28,r11,r5
	ctx.r28.s64 = ctx.r5.s64 - ctx.r11.s64;
	// beq cr6,0x82162fac
	if (ctx.cr6.eq) goto loc_82162FAC;
	// subf r29,r4,r5
	ctx.r29.s64 = ctx.r5.s64 - ctx.r4.s64;
loc_82162F94:
	// addi r31,r31,-880
	ctx.r31.s64 = ctx.r31.s64 + -880;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 + ctx.r31.u64;
	// bl 0x82162ac8
	ctx.lr = 0x82162FA4;
	sub_82162AC8(ctx, base);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82162f94
	if (!ctx.cr6.eq) goto loc_82162F94;
loc_82162FAC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82162FB8"))) PPC_WEAK_FUNC(sub_82162FB8);
PPC_FUNC_IMPL(__imp__sub_82162FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82162FC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,6061
	ctx.r10.s64 = 397213696;
	// subf r11,r30,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r30.s64;
	// ori r10,r10,8713
	ctx.r10.u64 = ctx.r10.u64 | 8713;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mulhw r11,r11,r10
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32)) >> 32;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r11,r11,692
	ctx.r11.s64 = ctx.r11.s64 * 692;
	// subf r28,r11,r5
	ctx.r28.s64 = ctx.r5.s64 - ctx.r11.s64;
	// beq cr6,0x82163014
	if (ctx.cr6.eq) goto loc_82163014;
	// subf r29,r4,r5
	ctx.r29.s64 = ctx.r5.s64 - ctx.r4.s64;
loc_82162FFC:
	// addi r31,r31,-692
	ctx.r31.s64 = ctx.r31.s64 + -692;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 + ctx.r31.u64;
	// bl 0x82162c30
	ctx.lr = 0x8216300C;
	sub_82162C30(ctx, base);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82162ffc
	if (!ctx.cr6.eq) goto loc_82162FFC;
loc_82163014:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82163020"))) PPC_WEAK_FUNC(sub_82163020);
PPC_FUNC_IMPL(__imp__sub_82163020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,864(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 864);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82163060
	if (ctx.cr6.eq) goto loc_82163060;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82163060
	if (ctx.cr6.eq) goto loc_82163060;
	// addi r5,r11,768
	ctx.r5.s64 = ctx.r11.s64 + 768;
	// bl 0x825ecb48
	ctx.lr = 0x8216305C;
	sub_825ECB48(ctx, base);
	// b 0x8216306c
	goto loc_8216306C;
loc_82163060:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8216306C:
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

__attribute__((alias("__imp__sub_82163088"))) PPC_WEAK_FUNC(sub_82163088);
PPC_FUNC_IMPL(__imp__sub_82163088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,672(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 672);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821630c8
	if (ctx.cr6.eq) goto loc_821630C8;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// addi r10,r10,23904
	ctx.r10.s64 = ctx.r10.s64 + 23904;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821630c8
	if (ctx.cr6.eq) goto loc_821630C8;
	// addi r5,r11,640
	ctx.r5.s64 = ctx.r11.s64 + 640;
	// bl 0x825ecb48
	ctx.lr = 0x821630C4;
	sub_825ECB48(ctx, base);
	// b 0x821630d4
	goto loc_821630D4;
loc_821630C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_821630D4:
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

__attribute__((alias("__imp__sub_821630F0"))) PPC_WEAK_FUNC(sub_821630F0);
PPC_FUNC_IMPL(__imp__sub_821630F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x821630F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82163138
	if (ctx.cr6.eq) goto loc_82163138;
	// subf r30,r31,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r31.s64;
loc_82163110:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82163128
	if (ctx.cr6.eq) goto loc_82163128;
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r5,668
	ctx.r5.s64 = 668;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826df680
	ctx.lr = 0x82163128;
	sub_826DF680(ctx, base);
loc_82163128:
	// addi r31,r31,668
	ctx.r31.s64 = ctx.r31.s64 + 668;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82163110
	if (!ctx.cr6.eq) goto loc_82163110;
loc_82163138:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82163148"))) PPC_WEAK_FUNC(sub_82163148);
PPC_FUNC_IMPL(__imp__sub_82163148) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r3,40
	ctx.r10.s64 = ctx.r3.s64 + 40;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82163160
	if (!ctx.cr6.gt) goto loc_82163160;
	// twi 31,r0,22
loc_82163160:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82163174
	if (!ctx.cr6.gt) goto loc_82163174;
	// twi 31,r0,22
loc_82163174:
	// cmplw cr6,r10,r10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82163180
	if (ctx.cr6.eq) goto loc_82163180;
	// twi 31,r0,22
loc_82163180:
	// subf r8,r3,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r3.s64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82163208
	if (ctx.cr6.eq) goto loc_82163208;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821631a8
	if (ctx.cr6.lt) goto loc_821631A8;
	// twi 31,r0,22
loc_821631A8:
	// lbz r8,640(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 640);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821631e4
	if (ctx.cr6.eq) goto loc_821631E4;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821631c0
	if (ctx.cr6.lt) goto loc_821631C0;
	// twi 31,r0,22
loc_821631C0:
	// lwz r8,644(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 644);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x821631e4
	if (!ctx.cr6.eq) goto loc_821631E4;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821631d8
	if (ctx.cr6.lt) goto loc_821631D8;
	// twi 31,r0,22
loc_821631D8:
	// lwz r8,648(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 648);
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x821631f8
	if (ctx.cr6.eq) goto loc_821631F8;
loc_821631E4:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821631f0
	if (ctx.cr6.lt) goto loc_821631F0;
	// twi 31,r0,22
loc_821631F0:
	// addi r3,r3,668
	ctx.r3.s64 = ctx.r3.s64 + 668;
	// b 0x82163174
	goto loc_82163174;
loc_821631F8:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// twi 31,r0,22
	// blr 
	return;
loc_82163208:
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,24288
	ctx.r3.s64 = ctx.r11.s64 + 24288;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82163218"))) PPC_WEAK_FUNC(sub_82163218);
PPC_FUNC_IMPL(__imp__sub_82163218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 + 56;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82163240
	if (!ctx.cr6.gt) goto loc_82163240;
	// twi 31,r0,22
loc_82163240:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82163254
	if (!ctx.cr6.gt) goto loc_82163254;
	// twi 31,r0,22
loc_82163254:
	// cmplw cr6,r10,r10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82163260
	if (ctx.cr6.eq) goto loc_82163260;
	// twi 31,r0,22
loc_82163260:
	// subf r8,r3,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r3.s64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821632f8
	if (ctx.cr6.eq) goto loc_821632F8;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82163288
	if (ctx.cr6.lt) goto loc_82163288;
	// twi 31,r0,22
loc_82163288:
	// lbz r8,676(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 676);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821632c4
	if (ctx.cr6.eq) goto loc_821632C4;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821632a0
	if (ctx.cr6.lt) goto loc_821632A0;
	// twi 31,r0,22
loc_821632A0:
	// lwz r8,680(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x821632c4
	if (!ctx.cr6.eq) goto loc_821632C4;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821632b8
	if (ctx.cr6.lt) goto loc_821632B8;
	// twi 31,r0,22
loc_821632B8:
	// lwz r8,684(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x821632d8
	if (ctx.cr6.eq) goto loc_821632D8;
loc_821632C4:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821632d0
	if (ctx.cr6.lt) goto loc_821632D0;
	// twi 31,r0,22
loc_821632D0:
	// addi r3,r3,692
	ctx.r3.s64 = ctx.r3.s64 + 692;
	// b 0x82163254
	goto loc_82163254;
loc_821632D8:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82163334
	if (ctx.cr6.lt) goto loc_82163334;
	// twi 31,r0,22
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821632F8:
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// lwz r11,25652(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25652);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lis r9,-32045
	ctx.r9.s64 = -2100101120;
	// addi r31,r9,24960
	ctx.r31.s64 = ctx.r9.s64 + 24960;
	// bne cr6,0x82163330
	if (!ctx.cr6.eq) goto loc_82163330;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32082
	ctx.r9.s64 = -2102525952;
	// addi r3,r9,31656
	ctx.r3.s64 = ctx.r9.s64 + 31656;
	// stw r11,25652(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25652, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x82163330;
	sub_826DED00(ctx, base);
loc_82163330:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82163334:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82163348"))) PPC_WEAK_FUNC(sub_82163348);
PPC_FUNC_IMPL(__imp__sub_82163348) {
	PPC_FUNC_PROLOGUE();
	// addi r9,r3,40
	ctx.r9.s64 = ctx.r3.s64 + 40;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82163364
	if (!ctx.cr6.gt) goto loc_82163364;
	// twi 31,r0,22
loc_82163364:
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82163378
	if (!ctx.cr6.gt) goto loc_82163378;
	// twi 31,r0,22
loc_82163378:
	// cmplw cr6,r9,r9
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82163384
	if (ctx.cr6.eq) goto loc_82163384;
	// twi 31,r0,22
loc_82163384:
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821633ac
	if (ctx.cr6.lt) goto loc_821633AC;
	// twi 31,r0,22
loc_821633AC:
	// lbz r7,640(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 640);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821633ec
	if (!ctx.cr6.eq) goto loc_821633EC;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821633c4
	if (ctx.cr6.lt) goto loc_821633C4;
	// twi 31,r0,22
loc_821633C4:
	// lwz r7,644(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 644);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x821633ec
	if (!ctx.cr6.eq) goto loc_821633EC;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821633dc
	if (ctx.cr6.lt) goto loc_821633DC;
	// twi 31,r0,22
loc_821633DC:
	// lwz r7,652(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 652);
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x821633ec
	if (!ctx.cr6.eq) goto loc_821633EC;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_821633EC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821633f8
	if (ctx.cr6.lt) goto loc_821633F8;
	// twi 31,r0,22
loc_821633F8:
	// addi r11,r11,668
	ctx.r11.s64 = ctx.r11.s64 + 668;
	// b 0x82163378
	goto loc_82163378;
}

__attribute__((alias("__imp__sub_82163400"))) PPC_WEAK_FUNC(sub_82163400);
PPC_FUNC_IMPL(__imp__sub_82163400) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82163408"))) PPC_WEAK_FUNC(sub_82163408);
PPC_FUNC_IMPL(__imp__sub_82163408) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r8,r3,40
	ctx.r8.s64 = ctx.r3.s64 + 40;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82163438
	if (!ctx.cr6.gt) goto loc_82163438;
	// twi 31,r0,22
loc_82163438:
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x8216344c
	if (!ctx.cr6.gt) goto loc_8216344C;
	// twi 31,r0,22
loc_8216344C:
	// cmplw cr6,r8,r8
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82163458
	if (ctx.cr6.eq) goto loc_82163458;
	// twi 31,r0,22
loc_82163458:
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
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
	// beq cr6,0x821634f4
	if (ctx.cr6.eq) goto loc_821634F4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82163480
	if (ctx.cr6.lt) goto loc_82163480;
	// twi 31,r0,22
loc_82163480:
	// lbz r10,640(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 640);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821634dc
	if (!ctx.cr6.eq) goto loc_821634DC;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82163498
	if (ctx.cr6.lt) goto loc_82163498;
	// twi 31,r0,22
loc_82163498:
	// lwz r10,644(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 644);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x821634dc
	if (!ctx.cr6.eq) goto loc_821634DC;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821634b0
	if (ctx.cr6.lt) goto loc_821634B0;
	// twi 31,r0,22
loc_821634B0:
	// lwz r10,652(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 652);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x821634dc
	if (!ctx.cr6.eq) goto loc_821634DC;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821634c8
	if (ctx.cr6.lt) goto loc_821634C8;
	// twi 31,r0,22
loc_821634C8:
	// lwz r10,660(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// addi r31,r1,-32
	ctx.r31.s64 = ctx.r1.s64 + -32;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r7.u32);
loc_821634DC:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821634e8
	if (ctx.cr6.lt) goto loc_821634E8;
	// twi 31,r0,22
loc_821634E8:
	// addi r11,r11,668
	ctx.r11.s64 = ctx.r11.s64 + 668;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// b 0x8216344c
	goto loc_8216344C;
loc_821634F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
loc_821634FC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x82163514
	if (ctx.cr6.lt) goto loc_82163514;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82163534
	if (ctx.cr6.eq) goto loc_82163534;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
loc_82163514:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821634fc
	if (!ctx.cr6.eq) goto loc_821634FC;
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,25656
	ctx.r3.s64 = ctx.r11.s64 + 25656;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82163534:
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82163574
	if (ctx.cr6.eq) goto loc_82163574;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lis r8,25115
	ctx.r8.s64 = 1645936640;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// ori r8,r8,38851
	ctx.r8.u64 = ctx.r8.u64 | 38851;
	// mulhw r11,r11,r8
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32)) >> 32;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82163578
	if (ctx.cr6.lt) goto loc_82163578;
loc_82163574:
	// twi 31,r0,22
loc_82163578:
	// mulli r11,r9,668
	ctx.r11.s64 = ctx.r9.s64 * 668;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82163588"))) PPC_WEAK_FUNC(sub_82163588);
PPC_FUNC_IMPL(__imp__sub_82163588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82163590;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32045
	ctx.r29.s64 = -2100101120;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,24280(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24280);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821635b8
	if (!ctx.cr6.eq) goto loc_821635B8;
	// bl 0x82162d70
	ctx.lr = 0x821635B0;
	sub_82162D70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,24280(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24280, ctx.r4.u32);
loc_821635B8:
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
	ctx.lr = 0x821635D0;
	sub_82582648(ctx, base);
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,6128
	ctx.r6.s64 = ctx.r11.s64 + 6128;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,6088
	ctx.r5.s64 = ctx.r11.s64 + 6088;
	// bl 0x826df418
	ctx.lr = 0x821635F0;
	sub_826DF418(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82163600
	if (ctx.cr6.eq) goto loc_82163600;
	// bl 0x82659610
	ctx.lr = 0x82163600;
	sub_82659610(ctx, base);
loc_82163600:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82163610
	if (ctx.cr6.eq) goto loc_82163610;
	// bl 0x82581e38
	ctx.lr = 0x82163610;
	sub_82581E38(ctx, base);
loc_82163610:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82163620"))) PPC_WEAK_FUNC(sub_82163620);
PPC_FUNC_IMPL(__imp__sub_82163620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82163628;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32045
	ctx.r29.s64 = -2100101120;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,24284(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24284);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82163650
	if (!ctx.cr6.eq) goto loc_82163650;
	// bl 0x82162df8
	ctx.lr = 0x82163648;
	sub_82162DF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,24284(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24284, ctx.r4.u32);
loc_82163650:
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
	ctx.lr = 0x82163668;
	sub_82582648(ctx, base);
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,6164
	ctx.r6.s64 = ctx.r11.s64 + 6164;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,6088
	ctx.r5.s64 = ctx.r11.s64 + 6088;
	// bl 0x826df418
	ctx.lr = 0x82163688;
	sub_826DF418(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// beq cr6,0x8216369c
	if (ctx.cr6.eq) goto loc_8216369C;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// bl 0x82659610
	ctx.lr = 0x8216369C;
	sub_82659610(ctx, base);
loc_8216369C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821636ac
	if (ctx.cr6.eq) goto loc_821636AC;
	// bl 0x82581e38
	ctx.lr = 0x821636AC;
	sub_82581E38(ctx, base);
loc_821636AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821636B8"))) PPC_WEAK_FUNC(sub_821636B8);
PPC_FUNC_IMPL(__imp__sub_821636B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x821636C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x821636e4
	if (!ctx.cr6.lt) goto loc_821636E4;
	// bl 0x8257fca8
	ctx.lr = 0x821636E4;
	sub_8257FCA8(ctx, base);
loc_821636E4:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x821636f8
	if (!ctx.cr6.lt) goto loc_821636F8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_821636F8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subfic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r10.s64 = -1 - ctx.r11.s64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x82163714
	if (!ctx.cr6.gt) goto loc_82163714;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82163718
	if (!ctx.cr6.lt) goto loc_82163718;
loc_82163714:
	// bl 0x8257fb70
	ctx.lr = 0x82163718;
	sub_8257FB70(ctx, base);
loc_82163718:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x821637b0
	if (ctx.cr6.eq) goto loc_821637B0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// add r27,r11,r30
	ctx.r27.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x821618e8
	ctx.lr = 0x82163738;
	sub_821618E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821637ac
	if (ctx.cr6.eq) goto loc_821637AC;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82163758
	if (ctx.cr6.lt) goto loc_82163758;
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x8216375c
	goto loc_8216375C;
loc_82163758:
	// addi r8,r29,4
	ctx.r8.s64 = ctx.r29.s64 + 4;
loc_8216375C:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x82163774
	if (ctx.cr6.lt) goto loc_82163774;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82163778
	goto loc_82163778;
loc_82163774:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82163778:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r5,r8,r28
	ctx.r5.u64 = ctx.r8.u64 + ctx.r28.u64;
	// subf r4,r11,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826dea00
	ctx.lr = 0x82163790;
	sub_826DEA00(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821637a0
	if (ctx.cr6.lt) goto loc_821637A0;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_821637A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// stbx r11,r29,r27
	PPC_STORE_U8(ctx.r29.u32 + ctx.r27.u32, ctx.r11.u8);
loc_821637AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821637B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821637B8"))) PPC_WEAK_FUNC(sub_821637B8);
PPC_FUNC_IMPL(__imp__sub_821637B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x821637C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x821637e8
	if (ctx.cr6.lt) goto loc_821637E8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x821637ec
	goto loc_821637EC;
loc_821637E8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_821637EC:
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8216381c
	if (ctx.cr6.lt) goto loc_8216381C;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x82163804
	if (ctx.cr6.lt) goto loc_82163804;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82163808
	goto loc_82163808;
loc_82163804:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82163808:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82163820
	if (ctx.cr6.gt) goto loc_82163820;
loc_8216381C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82163820:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216385c
	if (ctx.cr6.eq) goto loc_8216385C;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x8216383c
	if (ctx.cr6.lt) goto loc_8216383C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82163840
	goto loc_82163840;
loc_8216383C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82163840:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// subf r5,r11,r27
	ctx.r5.s64 = ctx.r27.s64 - ctx.r11.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821636b8
	ctx.lr = 0x82163854;
	sub_821636B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_8216385C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subfic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r10.s64 = -1 - ctx.r11.s64;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x82163878
	if (!ctx.cr6.gt) goto loc_82163878;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8216387c
	if (!ctx.cr6.lt) goto loc_8216387C;
loc_82163878:
	// bl 0x8257fb70
	ctx.lr = 0x8216387C;
	sub_8257FB70(ctx, base);
loc_8216387C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821638fc
	if (ctx.cr6.eq) goto loc_821638FC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r30,r28,r11
	ctx.r30.u64 = ctx.r28.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821618e8
	ctx.lr = 0x8216389C;
	sub_821618E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821638fc
	if (ctx.cr6.eq) goto loc_821638FC;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x821638bc
	if (ctx.cr6.lt) goto loc_821638BC;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x821638c0
	goto loc_821638C0;
loc_821638BC:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_821638C0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// subf r4,r11,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826dea00
	ctx.lr = 0x821638D8;
	sub_826DEA00(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821638ec
	if (ctx.cr6.lt) goto loc_821638EC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x821638f0
	goto loc_821638F0;
loc_821638EC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_821638F0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stbx r10,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
loc_821638FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82163908"))) PPC_WEAK_FUNC(sub_82163908);
PPC_FUNC_IMPL(__imp__sub_82163908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82163948
	if (ctx.cr6.eq) goto loc_82163948;
loc_8216392C:
	// lwz r3,864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216393c
	if (ctx.cr6.eq) goto loc_8216393C;
	// bl 0x82581e38
	ctx.lr = 0x8216393C;
	sub_82581E38(ctx, base);
loc_8216393C:
	// addi r31,r31,880
	ctx.r31.s64 = ctx.r31.s64 + 880;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8216392c
	if (!ctx.cr6.eq) goto loc_8216392C;
loc_82163948:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82163960"))) PPC_WEAK_FUNC(sub_82163960);
PPC_FUNC_IMPL(__imp__sub_82163960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x821639a0
	if (ctx.cr6.eq) goto loc_821639A0;
loc_82163984:
	// lwz r3,672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82163994
	if (ctx.cr6.eq) goto loc_82163994;
	// bl 0x82581e38
	ctx.lr = 0x82163994;
	sub_82581E38(ctx, base);
loc_82163994:
	// addi r31,r31,692
	ctx.r31.s64 = ctx.r31.s64 + 692;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82163984
	if (!ctx.cr6.eq) goto loc_82163984;
loc_821639A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821639B8"))) PPC_WEAK_FUNC(sub_821639B8);
PPC_FUNC_IMPL(__imp__sub_821639B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,3052
	ctx.r11.s64 = ctx.r11.s64 + 3052;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821639f4
	if (ctx.cr6.lt) goto loc_821639F4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x821639F4;
	sub_82186190(ctx, base);
loc_821639F4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r11,r11,2220
	ctx.r11.s64 = ctx.r11.s64 + 2220;
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

__attribute__((alias("__imp__sub_82163A30"))) PPC_WEAK_FUNC(sub_82163A30);
PPC_FUNC_IMPL(__imp__sub_82163A30) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82163a48
	if (ctx.cr6.lt) goto loc_82163A48;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
loc_82163A48:
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82163A50"))) PPC_WEAK_FUNC(sub_82163A50);
PPC_FUNC_IMPL(__imp__sub_82163A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x821639b8
	ctx.lr = 0x82163A70;
	sub_821639B8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82163a88
	if (ctx.cr6.eq) goto loc_82163A88;
	// bl 0x82186190
	ctx.lr = 0x82163A84;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82163A88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82163AA0"))) PPC_WEAK_FUNC(sub_82163AA0);
PPC_FUNC_IMPL(__imp__sub_82163AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,3068
	ctx.r11.s64 = ctx.r11.s64 + 3068;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x821639b8
	sub_821639B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82163AB0"))) PPC_WEAK_FUNC(sub_82163AB0);
PPC_FUNC_IMPL(__imp__sub_82163AB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8257fa00
	sub_8257FA00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82163AB8"))) PPC_WEAK_FUNC(sub_82163AB8);
PPC_FUNC_IMPL(__imp__sub_82163AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,3068
	ctx.r11.s64 = ctx.r11.s64 + 3068;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x821639b8
	ctx.lr = 0x82163AE4;
	sub_821639B8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82163afc
	if (ctx.cr6.eq) goto loc_82163AFC;
	// bl 0x82186190
	ctx.lr = 0x82163AF8;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82163AFC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82163B18"))) PPC_WEAK_FUNC(sub_82163B18);
PPC_FUNC_IMPL(__imp__sub_82163B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82163B20;
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
	// beq cr6,0x82163b50
	if (ctx.cr6.eq) goto loc_82163B50;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82163b54
	if (ctx.cr6.eq) goto loc_82163B54;
loc_82163B50:
	// twi 31,r0,22
loc_82163B54:
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
	// beq cr6,0x82163ba0
	if (ctx.cr6.eq) goto loc_82163BA0;
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
	// bl 0x82162a58
	ctx.lr = 0x82163B9C;
	sub_82162A58(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_82163BA0:
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

__attribute__((alias("__imp__sub_82163BB0"))) PPC_WEAK_FUNC(sub_82163BB0);
PPC_FUNC_IMPL(__imp__sub_82163BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82163BB8;
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
	// beq cr6,0x82163c00
	if (ctx.cr6.eq) goto loc_82163C00;
loc_82163BD8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82163bf0
	if (ctx.cr6.eq) goto loc_82163BF0;
	// li r5,668
	ctx.r5.s64 = 668;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826df680
	ctx.lr = 0x82163BF0;
	sub_826DF680(ctx, base);
loc_82163BF0:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,668
	ctx.r31.s64 = ctx.r31.s64 + 668;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82163bd8
	if (!ctx.cr6.eq) goto loc_82163BD8;
loc_82163C00:
	// mulli r11,r29,668
	ctx.r11.s64 = ctx.r29.s64 * 668;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82163C10"))) PPC_WEAK_FUNC(sub_82163C10);
PPC_FUNC_IMPL(__imp__sub_82163C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r10,15
	ctx.r10.s64 = 15;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// bl 0x82161d10
	ctx.lr = 0x82163C44;
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

__attribute__((alias("__imp__sub_82163C60"))) PPC_WEAK_FUNC(sub_82163C60);
PPC_FUNC_IMPL(__imp__sub_82163C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82163C68;
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
	// beq cr6,0x82163cac
	if (ctx.cr6.eq) goto loc_82163CAC;
loc_82163C88:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82163c9c
	if (ctx.cr6.eq) goto loc_82163C9C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821624d8
	ctx.lr = 0x82163C9C;
	sub_821624D8(ctx, base);
loc_82163C9C:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,880
	ctx.r31.s64 = ctx.r31.s64 + 880;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82163c88
	if (!ctx.cr6.eq) goto loc_82163C88;
loc_82163CAC:
	// mulli r11,r29,880
	ctx.r11.s64 = ctx.r29.s64 * 880;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82163CC0"))) PPC_WEAK_FUNC(sub_82163CC0);
PPC_FUNC_IMPL(__imp__sub_82163CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82163CC8;
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
	// beq cr6,0x82163d0c
	if (ctx.cr6.eq) goto loc_82163D0C;
loc_82163CE8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82163cfc
	if (ctx.cr6.eq) goto loc_82163CFC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821625d0
	ctx.lr = 0x82163CFC;
	sub_821625D0(ctx, base);
loc_82163CFC:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,692
	ctx.r31.s64 = ctx.r31.s64 + 692;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82163ce8
	if (!ctx.cr6.eq) goto loc_82163CE8;
loc_82163D0C:
	// mulli r11,r29,692
	ctx.r11.s64 = ctx.r29.s64 * 692;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82163D20"))) PPC_WEAK_FUNC(sub_82163D20);
PPC_FUNC_IMPL(__imp__sub_82163D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r10,26380(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26380);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// bne cr6,0x82163d80
	if (!ctx.cr6.eq) goto loc_82163D80;
	// addi r31,r11,26324
	ctx.r31.s64 = ctx.r11.s64 + 26324;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,26380(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26380, ctx.r11.u32);
	// bl 0x82582f10
	ctx.lr = 0x82163D5C;
	sub_82582F10(ctx, base);
	// lis r11,-32082
	ctx.r11.s64 = -2102525952;
	// addi r3,r11,31720
	ctx.r3.s64 = ctx.r11.s64 + 31720;
	// bl 0x826ded00
	ctx.lr = 0x82163D68;
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
loc_82163D80:
	// addi r3,r11,26324
	ctx.r3.s64 = ctx.r11.s64 + 26324;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82163D98"))) PPC_WEAK_FUNC(sub_82163D98);
PPC_FUNC_IMPL(__imp__sub_82163D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,2248
	ctx.r11.s64 = ctx.r11.s64 + 2248;
	// addi r10,r10,3052
	ctx.r10.s64 = ctx.r10.s64 + 3052;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// stb r9,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r9.u8);
	// bl 0x82161d10
	ctx.lr = 0x82163DE8;
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

__attribute__((alias("__imp__sub_82163E00"))) PPC_WEAK_FUNC(sub_82163E00);
PPC_FUNC_IMPL(__imp__sub_82163E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,2248
	ctx.r11.s64 = ctx.r11.s64 + 2248;
	// addi r10,r10,3052
	ctx.r10.s64 = ctx.r10.s64 + 3052;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// stb r9,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r9.u8);
	// bl 0x82161d10
	ctx.lr = 0x82163E50;
	sub_82161D10(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,3068
	ctx.r11.s64 = ctx.r11.s64 + 3068;
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

__attribute__((alias("__imp__sub_82163E78"))) PPC_WEAK_FUNC(sub_82163E78);
PPC_FUNC_IMPL(__imp__sub_82163E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82163E80;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82163f1c
	if (ctx.cr6.eq) goto loc_82163F1C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82163EB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82163f1c
	if (ctx.cr6.eq) goto loc_82163F1C;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82163ED0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821620e8
	ctx.lr = 0x82163EE0;
	sub_821620E8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825eef20
	ctx.lr = 0x82163EF4;
	sub_825EEF20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82163588
	ctx.lr = 0x82163F00;
	sub_82163588(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825fc7b8
	ctx.lr = 0x82163F08;
	sub_825FC7B8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825fc7b8
	ctx.lr = 0x82163F10;
	sub_825FC7B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82163F1C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82163F30"))) PPC_WEAK_FUNC(sub_82163F30);
PPC_FUNC_IMPL(__imp__sub_82163F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82163F38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r28,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r28.u64);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82163f68
	if (ctx.cr6.eq) goto loc_82163F68;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82163f6c
	if (ctx.cr6.eq) goto loc_82163F6C;
loc_82163F68:
	// twi 31,r0,22
loc_82163F6C:
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
	// beq cr6,0x82163fcc
	if (ctx.cr6.eq) goto loc_82163FCC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82162e80
	ctx.lr = 0x82163FB4;
	sub_82162E80(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82163908
	ctx.lr = 0x82163FC8;
	sub_82163908(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_82163FCC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r28,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r28.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82163FE0"))) PPC_WEAK_FUNC(sub_82163FE0);
PPC_FUNC_IMPL(__imp__sub_82163FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82163FE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r28,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r28.u64);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82164018
	if (ctx.cr6.eq) goto loc_82164018;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8216401c
	if (ctx.cr6.eq) goto loc_8216401C;
loc_82164018:
	// twi 31,r0,22
loc_8216401C:
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
	// beq cr6,0x8216407c
	if (ctx.cr6.eq) goto loc_8216407C;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82162ee8
	ctx.lr = 0x82164064;
	sub_82162EE8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82163960
	ctx.lr = 0x82164078;
	sub_82163960(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_8216407C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r28,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r28.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82164090"))) PPC_WEAK_FUNC(sub_82164090);
PPC_FUNC_IMPL(__imp__sub_82164090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82164098;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r27,-1
	ctx.r27.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// bl 0x82161d10
	ctx.lr = 0x821640CC;
	sub_82161D10(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_821640D4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821640d4
	if (!ctx.cr6.eq) goto loc_821640D4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x821637b8
	ctx.lr = 0x821640FC;
	sub_821637B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// bl 0x82161d10
	ctx.lr = 0x8216411C;
	sub_82161D10(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82164130
	if (ctx.cr6.lt) goto loc_82164130;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x82164130;
	sub_82186190(ctx, base);
loc_82164130:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82164140"))) PPC_WEAK_FUNC(sub_82164140);
PPC_FUNC_IMPL(__imp__sub_82164140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82164148;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// bl 0x82161d10
	ctx.lr = 0x8216417C;
	sub_82161D10(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821636b8
	ctx.lr = 0x82164190;
	sub_821636B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// bl 0x82161d10
	ctx.lr = 0x821641B0;
	sub_82161D10(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821641c4
	if (ctx.cr6.lt) goto loc_821641C4;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x821641C4;
	sub_82186190(ctx, base);
loc_821641C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821641D0"))) PPC_WEAK_FUNC(sub_821641D0);
PPC_FUNC_IMPL(__imp__sub_821641D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x821641D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82164228
	if (ctx.cr6.eq) goto loc_82164228;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
loc_821641F4:
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8216420c
	if (ctx.cr6.lt) goto loc_8216420C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x8216420C;
	sub_82186190(ctx, base);
loc_8216420C:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// bne cr6,0x821641f4
	if (!ctx.cr6.eq) goto loc_821641F4;
loc_82164228:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82164230"))) PPC_WEAK_FUNC(sub_82164230);
PPC_FUNC_IMPL(__imp__sub_82164230) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,3100
	ctx.r4.s64 = ctx.r11.s64 + 3100;
	// li r11,15
	ctx.r11.s64 = 15;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
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
	ctx.lr = 0x82164274;
	sub_82161E08(ctx, base);
	// addi r5,r30,640
	ctx.r5.s64 = ctx.r30.s64 + 640;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82164090
	ctx.lr = 0x82164284;
	sub_82164090(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82164298
	if (ctx.cr6.lt) goto loc_82164298;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x82164298;
	sub_82186190(ctx, base);
loc_82164298:
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

__attribute__((alias("__imp__sub_821642B8"))) PPC_WEAK_FUNC(sub_821642B8);
PPC_FUNC_IMPL(__imp__sub_821642B8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,3100
	ctx.r4.s64 = ctx.r11.s64 + 3100;
	// li r11,15
	ctx.r11.s64 = 15;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
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
	ctx.lr = 0x821642FC;
	sub_82161E08(ctx, base);
	// addi r5,r30,512
	ctx.r5.s64 = ctx.r30.s64 + 512;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82164090
	ctx.lr = 0x8216430C;
	sub_82164090(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82164320
	if (ctx.cr6.lt) goto loc_82164320;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82186190
	ctx.lr = 0x82164320;
	sub_82186190(ctx, base);
loc_82164320:
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

__attribute__((alias("__imp__sub_82164340"))) PPC_WEAK_FUNC(sub_82164340);
PPC_FUNC_IMPL(__imp__sub_82164340) {
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
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82164364
	if (!ctx.cr6.gt) goto loc_82164364;
	// twi 31,r0,22
loc_82164364:
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8216437c
	if (!ctx.cr6.gt) goto loc_8216437C;
	// twi 31,r0,22
loc_8216437C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x8241e620
	ctx.lr = 0x82164398;
	sub_8241E620(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821643A8"))) PPC_WEAK_FUNC(sub_821643A8);
PPC_FUNC_IMPL(__imp__sub_821643A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bne cr6,0x821643e4
	if (!ctx.cr6.eq) goto loc_821643E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82164420
	goto loc_82164420;
loc_821643E4:
	// lis r11,2340
	ctx.r11.s64 = 153354240;
	// ori r11,r11,37449
	ctx.r11.u64 = ctx.r11.u64 | 37449;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x821643fc
	if (!ctx.cr6.gt) goto loc_821643FC;
	// bl 0x8231c3a8
	ctx.lr = 0x821643F8;
	sub_8231C3A8(ctx, base);
	// b 0x8216441c
	goto loc_8216441C;
loc_821643FC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824d8298
	ctx.lr = 0x82164408;
	sub_824D8298(ctx, base);
	// mulli r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 * 28;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_8216441C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82164420:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82164438"))) PPC_WEAK_FUNC(sub_82164438);
PPC_FUNC_IMPL(__imp__sub_82164438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b4
	ctx.lr = 0x82164440;
	__savegprlr_23(ctx, base);
	// stwu r1,-1056(r1)
	ea = -1056 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r4,1080(r1)
	PPC_STORE_U64(ctx.r1.u32 + 1080, ctx.r4.u64);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// bl 0x821624d8
	ctx.lr = 0x8216445C;
	sub_821624D8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,2383
	ctx.r10.s64 = 156172288;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ori r28,r10,8341
	ctx.r28.u64 = ctx.r10.u64 | 8341;
	// bne cr6,0x82164478
	if (!ctx.cr6.eq) goto loc_82164478;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82164490
	goto loc_82164490;
loc_82164478:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mulhw r10,r10,r28
	ctx.r10.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32)) >> 32;
	// srawi r10,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 5;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82164490:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x821647cc
	if (ctx.cr6.eq) goto loc_821647CC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821644a8
	if (!ctx.cr6.eq) goto loc_821644A8;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x821644c0
	goto loc_821644C0;
loc_821644A8:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mulhw r10,r10,r28
	ctx.r10.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32)) >> 32;
	// srawi r10,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 5;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_821644C0:
	// lis r9,74
	ctx.r9.s64 = 4849664;
	// ori r8,r9,30980
	ctx.r8.u64 = ctx.r9.u64 | 30980;
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplw cr6,r10,r23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x821644dc
	if (!ctx.cr6.lt) goto loc_821644DC;
	// bl 0x8231c3a8
	ctx.lr = 0x821644D8;
	sub_8231C3A8(ctx, base);
	// b 0x821647cc
	goto loc_821647CC;
loc_821644DC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821644ec
	if (!ctx.cr6.eq) goto loc_821644EC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82164504
	goto loc_82164504;
loc_821644EC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mulhw r10,r10,r28
	ctx.r10.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32)) >> 32;
	// srawi r10,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 5;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82164504:
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + ctx.r23.u64;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82164684
	if (!ctx.cr6.lt) goto loc_82164684;
	// rlwinm r10,r7,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// li r24,0
	ctx.r24.s64 = 0;
	// subf r9,r10,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82164528
	if (ctx.cr6.lt) goto loc_82164528;
	// add r24,r10,r7
	ctx.r24.u64 = ctx.r10.u64 + ctx.r7.u64;
loc_82164528:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82164538
	if (!ctx.cr6.eq) goto loc_82164538;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82164550
	goto loc_82164550;
loc_82164538:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mulhw r10,r10,r28
	ctx.r10.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32)) >> 32;
	// srawi r10,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 5;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82164550:
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + ctx.r23.u64;
	// cmplw cr6,r24,r10
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82164580
	if (!ctx.cr6.lt) goto loc_82164580;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216457c
	if (ctx.cr6.eq) goto loc_8216457C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mulhw r11,r11,r28
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32)) >> 32;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8216457C:
	// add r24,r11,r23
	ctx.r24.u64 = ctx.r11.u64 + ctx.r23.u64;
loc_82164580:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821628f0
	ctx.lr = 0x8216458C;
	sub_821628F0(ctx, base);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r27,1084(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1084);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// beq cr6,0x821645c8
	if (ctx.cr6.eq) goto loc_821645C8;
loc_821645A4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821645b8
	if (ctx.cr6.eq) goto loc_821645B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821624d8
	ctx.lr = 0x821645B8;
	sub_821624D8(ctx, base);
loc_821645B8:
	// addi r30,r30,880
	ctx.r30.s64 = ctx.r30.s64 + 880;
	// addi r29,r29,880
	ctx.r29.s64 = ctx.r29.s64 + 880;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x821645a4
	if (!ctx.cr6.eq) goto loc_821645A4;
loc_821645C8:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82163c60
	ctx.lr = 0x821645DC;
	sub_82163C60(ctx, base);
	// lwz r26,8(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82164614
	if (ctx.cr6.eq) goto loc_82164614;
	// subf r29,r3,r27
	ctx.r29.s64 = ctx.r27.s64 - ctx.r3.s64;
loc_821645F0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82164604
	if (ctx.cr6.eq) goto loc_82164604;
	// add r4,r29,r30
	ctx.r4.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821624d8
	ctx.lr = 0x82164604;
	sub_821624D8(ctx, base);
loc_82164604:
	// addi r30,r30,880
	ctx.r30.s64 = ctx.r30.s64 + 880;
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x821645f0
	if (!ctx.cr6.eq) goto loc_821645F0;
loc_82164614:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82164628
	if (!ctx.cr6.eq) goto loc_82164628;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82164640
	goto loc_82164640;
loc_82164628:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// mulhw r11,r11,r28
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32)) >> 32;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82164640:
	// add r30,r11,r23
	ctx.r30.u64 = ctx.r11.u64 + ctx.r23.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82164664
	if (ctx.cr6.eq) goto loc_82164664;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82163908
	ctx.lr = 0x8216465C;
	sub_82163908(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82164664;
	sub_82186190(ctx, base);
loc_82164664:
	// mulli r10,r24,880
	ctx.r10.s64 = ctx.r24.s64 * 880;
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// mulli r11,r30,880
	ctx.r11.s64 = ctx.r30.s64 * 880;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x821647cc
	goto loc_821647CC;
loc_82164684:
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,1084(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1084);
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// mulhw r11,r11,r28
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32)) >> 32;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x8216473c
	if (!ctx.cr6.lt) goto loc_8216473C;
	// mulli r27,r23,880
	ctx.r27.s64 = ctx.r23.s64 * 880;
	// add r26,r27,r30
	ctx.r26.u64 = ctx.r27.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x821646e0
	if (ctx.cr6.eq) goto loc_821646E0;
	// subf r25,r27,r26
	ctx.r25.s64 = ctx.r26.s64 - ctx.r27.s64;
loc_821646BC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x821646d0
	if (ctx.cr6.eq) goto loc_821646D0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821624d8
	ctx.lr = 0x821646D0;
	sub_821624D8(ctx, base);
loc_821646D0:
	// addi r25,r25,880
	ctx.r25.s64 = ctx.r25.s64 + 880;
	// addi r26,r26,880
	ctx.r26.s64 = ctx.r26.s64 + 880;
	// cmplw cr6,r25,r29
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x821646bc
	if (!ctx.cr6.eq) goto loc_821646BC;
loc_821646E0:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r30,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r30.s64;
	// mulhw r11,r11,r28
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32)) >> 32;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r5,r11,r23
	ctx.r5.s64 = ctx.r23.s64 - ctx.r11.s64;
	// bl 0x82163c60
	ctx.lr = 0x82164708;
	sub_82163C60(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// subf r29,r27,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r27.s64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x821647cc
	if (ctx.cr6.eq) goto loc_821647CC;
loc_82164720:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82162ac8
	ctx.lr = 0x8216472C;
	sub_82162AC8(ctx, base);
	// addi r30,r30,880
	ctx.r30.s64 = ctx.r30.s64 + 880;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82164720
	if (!ctx.cr6.eq) goto loc_82164720;
	// b 0x821647cc
	goto loc_821647CC;
loc_8216473C:
	// mulli r26,r23,880
	ctx.r26.s64 = ctx.r23.s64 * 880;
	// lwz r28,8(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r25,r26,r29
	ctx.r25.s64 = ctx.r29.s64 - ctx.r26.s64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmplw cr6,r27,r29
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82164778
	if (ctx.cr6.eq) goto loc_82164778;
loc_82164754:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82164768
	if (ctx.cr6.eq) goto loc_82164768;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821624d8
	ctx.lr = 0x82164768;
	sub_821624D8(ctx, base);
loc_82164768:
	// addi r27,r27,880
	ctx.r27.s64 = ctx.r27.s64 + 880;
	// addi r28,r28,880
	ctx.r28.s64 = ctx.r28.s64 + 880;
	// cmplw cr6,r27,r29
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82164754
	if (!ctx.cr6.eq) goto loc_82164754;
loc_82164778:
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
	// bl 0x82162f50
	ctx.lr = 0x821647A4;
	sub_82162F50(ctx, base);
	// add r29,r26,r30
	ctx.r29.u64 = ctx.r26.u64 + ctx.r30.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x821647cc
	if (ctx.cr6.eq) goto loc_821647CC;
loc_821647B4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82162ac8
	ctx.lr = 0x821647C0;
	sub_82162AC8(ctx, base);
	// addi r31,r31,880
	ctx.r31.s64 = ctx.r31.s64 + 880;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x821647b4
	if (!ctx.cr6.eq) goto loc_821647B4;
loc_821647CC:
	// lwz r3,960(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 960);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821647dc
	if (ctx.cr6.eq) goto loc_821647DC;
	// bl 0x82581e38
	ctx.lr = 0x821647DC;
	sub_82581E38(ctx, base);
loc_821647DC:
	// addi r1,r1,1056
	ctx.r1.s64 = ctx.r1.s64 + 1056;
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821647E8"))) PPC_WEAK_FUNC(sub_821647E8);
PPC_FUNC_IMPL(__imp__sub_821647E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x821647F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r4,856(r1)
	PPC_STORE_U64(ctx.r1.u32 + 856, ctx.r4.u64);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,668
	ctx.r5.s64 = 668;
	// bl 0x826df680
	ctx.lr = 0x82164810;
	sub_826DF680(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,25115
	ctx.r10.s64 = 1645936640;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ori r29,r10,38851
	ctx.r29.u64 = ctx.r10.u64 | 38851;
	// bne cr6,0x8216482c
	if (!ctx.cr6.eq) goto loc_8216482C;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82164844
	goto loc_82164844;
loc_8216482C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mulhw r10,r10,r29
	ctx.r10.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32)) >> 32;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82164844:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82164af8
	if (ctx.cr6.eq) goto loc_82164AF8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216485c
	if (!ctx.cr6.eq) goto loc_8216485C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82164874
	goto loc_82164874;
loc_8216485C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mulhw r10,r10,r29
	ctx.r10.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32)) >> 32;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82164874:
	// lis r9,98
	ctx.r9.s64 = 6422528;
	// ori r8,r9,7063
	ctx.r8.u64 = ctx.r9.u64 | 7063;
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82164894
	if (!ctx.cr6.lt) goto loc_82164894;
	// bl 0x8231c3a8
	ctx.lr = 0x8216488C;
	sub_8231C3A8(ctx, base);
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_82164894:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821648a4
	if (!ctx.cr6.eq) goto loc_821648A4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x821648bc
	goto loc_821648BC;
loc_821648A4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mulhw r10,r10,r29
	ctx.r10.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32)) >> 32;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_821648BC:
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821649ec
	if (!ctx.cr6.lt) goto loc_821649EC;
	// rlwinm r10,r7,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// li r27,0
	ctx.r27.s64 = 0;
	// subf r9,r10,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x821648e0
	if (ctx.cr6.lt) goto loc_821648E0;
	// add r27,r10,r7
	ctx.r27.u64 = ctx.r10.u64 + ctx.r7.u64;
loc_821648E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821648f0
	if (!ctx.cr6.eq) goto loc_821648F0;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82164908
	goto loc_82164908;
loc_821648F0:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mulhw r10,r10,r29
	ctx.r10.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32)) >> 32;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82164908:
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82164938
	if (!ctx.cr6.lt) goto loc_82164938;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82164934
	if (ctx.cr6.eq) goto loc_82164934;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mulhw r11,r11,r29
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32)) >> 32;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82164934:
	// add r27,r11,r26
	ctx.r27.u64 = ctx.r11.u64 + ctx.r26.u64;
loc_82164938:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82162968
	ctx.lr = 0x82164944;
	sub_82162968(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r28,860(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 860);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x821630f0
	ctx.lr = 0x82164964;
	sub_821630F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82163bb0
	ctx.lr = 0x82164978;
	sub_82163BB0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821630f0
	ctx.lr = 0x8216498C;
	sub_821630F0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821649a0
	if (!ctx.cr6.eq) goto loc_821649A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821649b8
	goto loc_821649B8;
loc_821649A0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// mulhw r11,r11,r29
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32)) >> 32;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_821649B8:
	// add r29,r11,r26
	ctx.r29.u64 = ctx.r11.u64 + ctx.r26.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821649c8
	if (ctx.cr6.eq) goto loc_821649C8;
	// bl 0x82186190
	ctx.lr = 0x821649C8;
	sub_82186190(ctx, base);
loc_821649C8:
	// mulli r10,r27,668
	ctx.r10.s64 = ctx.r27.s64 * 668;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mulli r11,r29,668
	ctx.r11.s64 = ctx.r29.s64 * 668;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_821649EC:
	// lwz r28,8(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r30,860(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 860);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// subf r11,r30,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r30.s64;
	// mulhw r11,r11,r29
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32)) >> 32;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82164a8c
	if (!ctx.cr6.lt) goto loc_82164A8C;
	// mulli r27,r26,668
	ctx.r27.s64 = ctx.r26.s64 * 668;
	// add r5,r27,r30
	ctx.r5.u64 = ctx.r27.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821630f0
	ctx.lr = 0x82164A28;
	sub_821630F0(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// subf r11,r30,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r30.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mulhw r11,r11,r29
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32)) >> 32;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r5,r11,r26
	ctx.r5.s64 = ctx.r26.s64 - ctx.r11.s64;
	// bl 0x82163bb0
	ctx.lr = 0x82164A50;
	sub_82163BB0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// subf r29,r27,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r27.s64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82164af8
	if (ctx.cr6.eq) goto loc_82164AF8;
loc_82164A68:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,668
	ctx.r5.s64 = 668;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826df680
	ctx.lr = 0x82164A78;
	sub_826DF680(ctx, base);
	// addi r30,r30,668
	ctx.r30.s64 = ctx.r30.s64 + 668;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82164a68
	if (!ctx.cr6.eq) goto loc_82164A68;
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_82164A8C:
	// mulli r29,r26,668
	ctx.r29.s64 = ctx.r26.s64 * 668;
	// subf r27,r29,r28
	ctx.r27.s64 = ctx.r28.s64 - ctx.r29.s64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821630f0
	ctx.lr = 0x82164AA0;
	sub_821630F0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82162d00
	ctx.lr = 0x82164ACC;
	sub_82162D00(ctx, base);
	// add r29,r29,r30
	ctx.r29.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82164af8
	if (ctx.cr6.eq) goto loc_82164AF8;
loc_82164ADC:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,668
	ctx.r5.s64 = 668;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826df680
	ctx.lr = 0x82164AEC;
	sub_826DF680(ctx, base);
	// addi r31,r31,668
	ctx.r31.s64 = ctx.r31.s64 + 668;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82164adc
	if (!ctx.cr6.eq) goto loc_82164ADC;
loc_82164AF8:
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82164B00"))) PPC_WEAK_FUNC(sub_82164B00);
PPC_FUNC_IMPL(__imp__sub_82164B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b4
	ctx.lr = 0x82164B08;
	__savegprlr_23(ctx, base);
	// stwu r1,-880(r1)
	ea = -880 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r4,904(r1)
	PPC_STORE_U64(ctx.r1.u32 + 904, ctx.r4.u64);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// bl 0x821625d0
	ctx.lr = 0x82164B24;
	sub_821625D0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,6061
	ctx.r10.s64 = 397213696;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ori r28,r10,8713
	ctx.r28.u64 = ctx.r10.u64 | 8713;
	// bne cr6,0x82164b40
	if (!ctx.cr6.eq) goto loc_82164B40;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82164b58
	goto loc_82164B58;
loc_82164B40:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mulhw r10,r10,r28
	ctx.r10.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32)) >> 32;
	// srawi r10,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 6;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82164B58:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82164e94
	if (ctx.cr6.eq) goto loc_82164E94;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82164b70
	if (!ctx.cr6.eq) goto loc_82164B70;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82164b88
	goto loc_82164B88;
loc_82164B70:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mulhw r10,r10,r28
	ctx.r10.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32)) >> 32;
	// srawi r10,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 6;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82164B88:
	// lis r9,94
	ctx.r9.s64 = 6160384;
	// ori r8,r9,46216
	ctx.r8.u64 = ctx.r9.u64 | 46216;
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplw cr6,r10,r23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x82164ba4
	if (!ctx.cr6.lt) goto loc_82164BA4;
	// bl 0x8231c3a8
	ctx.lr = 0x82164BA0;
	sub_8231C3A8(ctx, base);
	// b 0x82164e94
	goto loc_82164E94;
loc_82164BA4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82164bb4
	if (!ctx.cr6.eq) goto loc_82164BB4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82164bcc
	goto loc_82164BCC;
loc_82164BB4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mulhw r10,r10,r28
	ctx.r10.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32)) >> 32;
	// srawi r10,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 6;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82164BCC:
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + ctx.r23.u64;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82164d4c
	if (!ctx.cr6.lt) goto loc_82164D4C;
	// rlwinm r10,r7,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// li r24,0
	ctx.r24.s64 = 0;
	// subf r9,r10,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82164bf0
	if (ctx.cr6.lt) goto loc_82164BF0;
	// add r24,r10,r7
	ctx.r24.u64 = ctx.r10.u64 + ctx.r7.u64;
loc_82164BF0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82164c00
	if (!ctx.cr6.eq) goto loc_82164C00;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82164c18
	goto loc_82164C18;
loc_82164C00:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mulhw r10,r10,r28
	ctx.r10.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32)) >> 32;
	// srawi r10,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 6;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82164C18:
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + ctx.r23.u64;
	// cmplw cr6,r24,r10
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82164c48
	if (!ctx.cr6.lt) goto loc_82164C48;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82164c44
	if (ctx.cr6.eq) goto loc_82164C44;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mulhw r11,r11,r28
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32)) >> 32;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82164C44:
	// add r24,r11,r23
	ctx.r24.u64 = ctx.r11.u64 + ctx.r23.u64;
loc_82164C48:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821629e0
	ctx.lr = 0x82164C54;
	sub_821629E0(ctx, base);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r27,908(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 908);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// beq cr6,0x82164c90
	if (ctx.cr6.eq) goto loc_82164C90;
loc_82164C6C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82164c80
	if (ctx.cr6.eq) goto loc_82164C80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821625d0
	ctx.lr = 0x82164C80;
	sub_821625D0(ctx, base);
loc_82164C80:
	// addi r30,r30,692
	ctx.r30.s64 = ctx.r30.s64 + 692;
	// addi r29,r29,692
	ctx.r29.s64 = ctx.r29.s64 + 692;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82164c6c
	if (!ctx.cr6.eq) goto loc_82164C6C;
loc_82164C90:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82163cc0
	ctx.lr = 0x82164CA4;
	sub_82163CC0(ctx, base);
	// lwz r26,8(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82164cdc
	if (ctx.cr6.eq) goto loc_82164CDC;
	// subf r29,r3,r27
	ctx.r29.s64 = ctx.r27.s64 - ctx.r3.s64;
loc_82164CB8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82164ccc
	if (ctx.cr6.eq) goto loc_82164CCC;
	// add r4,r29,r30
	ctx.r4.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821625d0
	ctx.lr = 0x82164CCC;
	sub_821625D0(ctx, base);
loc_82164CCC:
	// addi r30,r30,692
	ctx.r30.s64 = ctx.r30.s64 + 692;
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82164cb8
	if (!ctx.cr6.eq) goto loc_82164CB8;
loc_82164CDC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82164cf0
	if (!ctx.cr6.eq) goto loc_82164CF0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82164d08
	goto loc_82164D08;
loc_82164CF0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// mulhw r11,r11,r28
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32)) >> 32;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82164D08:
	// add r30,r11,r23
	ctx.r30.u64 = ctx.r11.u64 + ctx.r23.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82164d2c
	if (ctx.cr6.eq) goto loc_82164D2C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82163960
	ctx.lr = 0x82164D24;
	sub_82163960(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82164D2C;
	sub_82186190(ctx, base);
loc_82164D2C:
	// mulli r10,r24,692
	ctx.r10.s64 = ctx.r24.s64 * 692;
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// mulli r11,r30,692
	ctx.r11.s64 = ctx.r30.s64 * 692;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82164e94
	goto loc_82164E94;
loc_82164D4C:
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,908(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 908);
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// mulhw r11,r11,r28
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32)) >> 32;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x82164e04
	if (!ctx.cr6.lt) goto loc_82164E04;
	// mulli r27,r23,692
	ctx.r27.s64 = ctx.r23.s64 * 692;
	// add r26,r27,r30
	ctx.r26.u64 = ctx.r27.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82164da8
	if (ctx.cr6.eq) goto loc_82164DA8;
	// subf r25,r27,r26
	ctx.r25.s64 = ctx.r26.s64 - ctx.r27.s64;
loc_82164D84:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82164d98
	if (ctx.cr6.eq) goto loc_82164D98;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821625d0
	ctx.lr = 0x82164D98;
	sub_821625D0(ctx, base);
loc_82164D98:
	// addi r25,r25,692
	ctx.r25.s64 = ctx.r25.s64 + 692;
	// addi r26,r26,692
	ctx.r26.s64 = ctx.r26.s64 + 692;
	// cmplw cr6,r25,r29
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82164d84
	if (!ctx.cr6.eq) goto loc_82164D84;
loc_82164DA8:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r30,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r30.s64;
	// mulhw r11,r11,r28
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32)) >> 32;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r5,r11,r23
	ctx.r5.s64 = ctx.r23.s64 - ctx.r11.s64;
	// bl 0x82163cc0
	ctx.lr = 0x82164DD0;
	sub_82163CC0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// subf r29,r27,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r27.s64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82164e94
	if (ctx.cr6.eq) goto loc_82164E94;
loc_82164DE8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82162c30
	ctx.lr = 0x82164DF4;
	sub_82162C30(ctx, base);
	// addi r30,r30,692
	ctx.r30.s64 = ctx.r30.s64 + 692;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82164de8
	if (!ctx.cr6.eq) goto loc_82164DE8;
	// b 0x82164e94
	goto loc_82164E94;
loc_82164E04:
	// mulli r26,r23,692
	ctx.r26.s64 = ctx.r23.s64 * 692;
	// lwz r28,8(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r25,r26,r29
	ctx.r25.s64 = ctx.r29.s64 - ctx.r26.s64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmplw cr6,r27,r29
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82164e40
	if (ctx.cr6.eq) goto loc_82164E40;
loc_82164E1C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82164e30
	if (ctx.cr6.eq) goto loc_82164E30;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821625d0
	ctx.lr = 0x82164E30;
	sub_821625D0(ctx, base);
loc_82164E30:
	// addi r27,r27,692
	ctx.r27.s64 = ctx.r27.s64 + 692;
	// addi r28,r28,692
	ctx.r28.s64 = ctx.r28.s64 + 692;
	// cmplw cr6,r27,r29
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82164e1c
	if (!ctx.cr6.eq) goto loc_82164E1C;
loc_82164E40:
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
	// bl 0x82162fb8
	ctx.lr = 0x82164E6C;
	sub_82162FB8(ctx, base);
	// add r29,r26,r30
	ctx.r29.u64 = ctx.r26.u64 + ctx.r30.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82164e94
	if (ctx.cr6.eq) goto loc_82164E94;
loc_82164E7C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82162c30
	ctx.lr = 0x82164E88;
	sub_82162C30(ctx, base);
	// addi r31,r31,692
	ctx.r31.s64 = ctx.r31.s64 + 692;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82164e7c
	if (!ctx.cr6.eq) goto loc_82164E7C;
loc_82164E94:
	// lwz r3,768(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82164ea4
	if (ctx.cr6.eq) goto loc_82164EA4;
	// bl 0x82581e38
	ctx.lr = 0x82164EA4;
	sub_82581E38(ctx, base);
loc_82164EA4:
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// b 0x826de904
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82164EB0"))) PPC_WEAK_FUNC(sub_82164EB0);
PPC_FUNC_IMPL(__imp__sub_82164EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82164EB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,3108
	ctx.r11.s64 = ctx.r11.s64 + 3108;
	// addi r30,r29,56
	ctx.r30.s64 = ctx.r29.s64 + 56;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82164ef4
	if (ctx.cr6.eq) goto loc_82164EF4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82163960
	ctx.lr = 0x82164EEC;
	sub_82163960(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82164EF4;
	sub_82186190(ctx, base);
loc_82164EF4:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r29,40
	ctx.r28.s64 = ctx.r29.s64 + 40;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82164f18
	if (ctx.cr6.eq) goto loc_82164F18;
	// bl 0x82186190
	ctx.lr = 0x82164F18;
	sub_82186190(ctx, base);
loc_82164F18:
	// addi r30,r29,24
	ctx.r30.s64 = ctx.r29.s64 + 24;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// stw r31,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r31.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82164f4c
	if (ctx.cr6.eq) goto loc_82164F4C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82163908
	ctx.lr = 0x82164F44;
	sub_82163908(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82164F4C;
	sub_82186190(ctx, base);
loc_82164F4C:
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82164f80
	if (ctx.cr6.eq) goto loc_82164F80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82279350
	ctx.lr = 0x82164F78;
	sub_82279350(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82164F80;
	sub_82186190(ctx, base);
loc_82164F80:
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82164F98"))) PPC_WEAK_FUNC(sub_82164F98);
PPC_FUNC_IMPL(__imp__sub_82164F98) {
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
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82164fc4
	if (!ctx.cr6.gt) goto loc_82164FC4;
	// twi 31,r0,22
loc_82164FC4:
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82164fdc
	if (!ctx.cr6.gt) goto loc_82164FDC;
	// twi 31,r0,22
loc_82164FDC:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x8241e620
	ctx.lr = 0x82164FF8;
	sub_8241E620(ctx, base);
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82165010
	if (!ctx.cr6.gt) goto loc_82165010;
	// twi 31,r0,22
loc_82165010:
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82165028
	if (!ctx.cr6.gt) goto loc_82165028;
	// twi 31,r0,22
loc_82165028:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x82163f30
	ctx.lr = 0x82165044;
	sub_82163F30(ctx, base);
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8216505c
	if (!ctx.cr6.gt) goto loc_8216505C;
	// twi 31,r0,22
loc_8216505C:
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82165074
	if (!ctx.cr6.gt) goto loc_82165074;
	// twi 31,r0,22
loc_82165074:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x82163b18
	ctx.lr = 0x82165090;
	sub_82163B18(ctx, base);
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x821650a8
	if (!ctx.cr6.gt) goto loc_821650A8;
	// twi 31,r0,22
loc_821650A8:
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x821650c0
	if (!ctx.cr6.gt) goto loc_821650C0;
	// twi 31,r0,22
loc_821650C0:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82163fe0
	ctx.lr = 0x821650DC;
	sub_82163FE0(ctx, base);
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

__attribute__((alias("__imp__sub_821650F0"))) PPC_WEAK_FUNC(sub_821650F0);
PPC_FUNC_IMPL(__imp__sub_821650F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x821650F8;
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
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82165140
	if (ctx.cr6.eq) goto loc_82165140;
	// lis r11,2383
	ctx.r11.s64 = 156172288;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r9,r11,8341
	ctx.r9.u64 = ctx.r11.u64 | 8341;
	// subf r11,r10,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// mulhw r11,r11,r9
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82165148
	if (!ctx.cr6.eq) goto loc_82165148;
loc_82165140:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82165184
	goto loc_82165184;
loc_82165148:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82165154
	if (!ctx.cr6.gt) goto loc_82165154;
	// twi 31,r0,22
loc_82165154:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82165168
	if (ctx.cr6.eq) goto loc_82165168;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8216516c
	if (ctx.cr6.eq) goto loc_8216516C;
loc_82165168:
	// twi 31,r0,22
loc_8216516C:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mulhw r11,r11,r9
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82165184:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82164438
	ctx.lr = 0x82165190;
	sub_82164438(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821651a4
	if (!ctx.cr6.gt) goto loc_821651A4;
	// twi 31,r0,22
loc_821651A4:
	// mulli r10,r30,880
	ctx.r10.s64 = ctx.r30.s64 * 880;
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
	// bgt cr6,0x821651d4
	if (ctx.cr6.gt) goto loc_821651D4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821651d8
	if (!ctx.cr6.lt) goto loc_821651D8;
loc_821651D4:
	// twi 31,r0,22
loc_821651D8:
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

__attribute__((alias("__imp__sub_821651F0"))) PPC_WEAK_FUNC(sub_821651F0);
PPC_FUNC_IMPL(__imp__sub_821651F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x821651F8;
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
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82165240
	if (ctx.cr6.eq) goto loc_82165240;
	// lis r11,25115
	ctx.r11.s64 = 1645936640;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r9,r11,38851
	ctx.r9.u64 = ctx.r11.u64 | 38851;
	// subf r11,r10,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// mulhw r11,r11,r9
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82165248
	if (!ctx.cr6.eq) goto loc_82165248;
loc_82165240:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82165284
	goto loc_82165284;
loc_82165248:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82165254
	if (!ctx.cr6.gt) goto loc_82165254;
	// twi 31,r0,22
loc_82165254:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82165268
	if (ctx.cr6.eq) goto loc_82165268;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8216526c
	if (ctx.cr6.eq) goto loc_8216526C;
loc_82165268:
	// twi 31,r0,22
loc_8216526C:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mulhw r11,r11,r9
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82165284:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821647e8
	ctx.lr = 0x82165290;
	sub_821647E8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821652a4
	if (!ctx.cr6.gt) goto loc_821652A4;
	// twi 31,r0,22
loc_821652A4:
	// mulli r10,r30,668
	ctx.r10.s64 = ctx.r30.s64 * 668;
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
	// bgt cr6,0x821652d4
	if (ctx.cr6.gt) goto loc_821652D4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821652d8
	if (!ctx.cr6.lt) goto loc_821652D8;
loc_821652D4:
	// twi 31,r0,22
loc_821652D8:
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

__attribute__((alias("__imp__sub_821652F0"))) PPC_WEAK_FUNC(sub_821652F0);
PPC_FUNC_IMPL(__imp__sub_821652F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x821652F8;
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
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82165340
	if (ctx.cr6.eq) goto loc_82165340;
	// lis r11,6061
	ctx.r11.s64 = 397213696;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r9,r11,8713
	ctx.r9.u64 = ctx.r11.u64 | 8713;
	// subf r11,r10,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// mulhw r11,r11,r9
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82165348
	if (!ctx.cr6.eq) goto loc_82165348;
loc_82165340:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82165384
	goto loc_82165384;
loc_82165348:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82165354
	if (!ctx.cr6.gt) goto loc_82165354;
	// twi 31,r0,22
loc_82165354:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82165368
	if (ctx.cr6.eq) goto loc_82165368;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8216536c
	if (ctx.cr6.eq) goto loc_8216536C;
loc_82165368:
	// twi 31,r0,22
loc_8216536C:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mulhw r11,r11,r9
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82165384:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82164b00
	ctx.lr = 0x82165390;
	sub_82164B00(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821653a4
	if (!ctx.cr6.gt) goto loc_821653A4;
	// twi 31,r0,22
loc_821653A4:
	// mulli r10,r30,692
	ctx.r10.s64 = ctx.r30.s64 * 692;
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
	// bgt cr6,0x821653d4
	if (ctx.cr6.gt) goto loc_821653D4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821653d8
	if (!ctx.cr6.lt) goto loc_821653D8;
loc_821653D4:
	// twi 31,r0,22
loc_821653D8:
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

__attribute__((alias("__imp__sub_821653F0"))) PPC_WEAK_FUNC(sub_821653F0);
PPC_FUNC_IMPL(__imp__sub_821653F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r10,r11,3108
	ctx.r10.s64 = ctx.r11.s64 + 3108;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82165438"))) PPC_WEAK_FUNC(sub_82165438);
PPC_FUNC_IMPL(__imp__sub_82165438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82164eb0
	ctx.lr = 0x82165458;
	sub_82164EB0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82165470
	if (ctx.cr6.eq) goto loc_82165470;
	// bl 0x82186190
	ctx.lr = 0x8216546C;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82165470:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82165488"))) PPC_WEAK_FUNC(sub_82165488);
PPC_FUNC_IMPL(__imp__sub_82165488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,2383
	ctx.r11.s64 = 156172288;
	// ori r11,r11,8341
	ctx.r11.u64 = ctx.r11.u64 | 8341;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821654bc
	if (!ctx.cr6.eq) goto loc_821654BC;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x821654d4
	goto loc_821654D4;
loc_821654BC:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// mulhw r9,r9,r11
	ctx.r9.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32)) >> 32;
	// srawi r9,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 5;
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_821654D4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82165520
	if (ctx.cr6.eq) goto loc_82165520;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// mulhw r11,r11,r7
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32)) >> 32;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82165520
	if (!ctx.cr6.lt) goto loc_82165520;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82165514
	if (ctx.cr6.eq) goto loc_82165514;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821624d8
	ctx.lr = 0x82165514;
	sub_821624D8(ctx, base);
loc_82165514:
	// addi r11,r30,880
	ctx.r11.s64 = ctx.r30.s64 + 880;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82165550
	goto loc_82165550;
loc_82165520:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82165530
	if (!ctx.cr6.gt) goto loc_82165530;
	// twi 31,r0,22
loc_82165530:
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
	// bl 0x821650f0
	ctx.lr = 0x82165550;
	sub_821650F0(ctx, base);
loc_82165550:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82165568"))) PPC_WEAK_FUNC(sub_82165568);
PPC_FUNC_IMPL(__imp__sub_82165568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,25115
	ctx.r11.s64 = 1645936640;
	// ori r11,r11,38851
	ctx.r11.u64 = ctx.r11.u64 | 38851;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8216559c
	if (!ctx.cr6.eq) goto loc_8216559C;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x821655b4
	goto loc_821655B4;
loc_8216559C:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// mulhw r9,r9,r11
	ctx.r9.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32)) >> 32;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_821655B4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82165604
	if (ctx.cr6.eq) goto loc_82165604;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// mulhw r11,r11,r7
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32)) >> 32;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82165604
	if (!ctx.cr6.lt) goto loc_82165604;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821655f8
	if (ctx.cr6.eq) goto loc_821655F8;
	// li r5,668
	ctx.r5.s64 = 668;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826df680
	ctx.lr = 0x821655F8;
	sub_826DF680(ctx, base);
loc_821655F8:
	// addi r11,r30,668
	ctx.r11.s64 = ctx.r30.s64 + 668;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82165634
	goto loc_82165634;
loc_82165604:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82165614
	if (!ctx.cr6.gt) goto loc_82165614;
	// twi 31,r0,22
loc_82165614:
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
	// bl 0x821651f0
	ctx.lr = 0x82165634;
	sub_821651F0(ctx, base);
loc_82165634:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82165650"))) PPC_WEAK_FUNC(sub_82165650);
PPC_FUNC_IMPL(__imp__sub_82165650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,6061
	ctx.r11.s64 = 397213696;
	// ori r11,r11,8713
	ctx.r11.u64 = ctx.r11.u64 | 8713;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82165684
	if (!ctx.cr6.eq) goto loc_82165684;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x8216569c
	goto loc_8216569C;
loc_82165684:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// mulhw r9,r9,r11
	ctx.r9.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32)) >> 32;
	// srawi r9,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 6;
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_8216569C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821656e8
	if (ctx.cr6.eq) goto loc_821656E8;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// mulhw r11,r11,r7
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32)) >> 32;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821656e8
	if (!ctx.cr6.lt) goto loc_821656E8;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821656dc
	if (ctx.cr6.eq) goto loc_821656DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821625d0
	ctx.lr = 0x821656DC;
	sub_821625D0(ctx, base);
loc_821656DC:
	// addi r11,r30,692
	ctx.r11.s64 = ctx.r30.s64 + 692;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82165718
	goto loc_82165718;
loc_821656E8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x821656f8
	if (!ctx.cr6.gt) goto loc_821656F8;
	// twi 31,r0,22
loc_821656F8:
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
	// bl 0x821652f0
	ctx.lr = 0x82165718;
	sub_821652F0(ctx, base);
loc_82165718:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82165730"))) PPC_WEAK_FUNC(sub_82165730);
PPC_FUNC_IMPL(__imp__sub_82165730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x82165738;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addi r30,r27,24
	ctx.r30.s64 = ctx.r27.s64 + 24;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x8216575c
	if (!ctx.cr6.gt) goto loc_8216575C;
	// twi 31,r0,22
loc_8216575C:
	// lwz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82165770
	if (!ctx.cr6.gt) goto loc_82165770;
	// twi 31,r0,22
loc_82165770:
	// li r26,15
	ctx.r26.s64 = 15;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82165778:
	// cmplw cr6,r30,r30
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82165784
	if (ctx.cr6.eq) goto loc_82165784;
	// twi 31,r0,22
loc_82165784:
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
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
	// beq cr6,0x82165890
	if (ctx.cr6.eq) goto loc_82165890;
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x821657ac
	if (ctx.cr6.lt) goto loc_821657AC;
	// twi 31,r0,22
loc_821657AC:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r11,r31,640
	ctx.r11.s64 = ctx.r31.s64 + 640;
loc_821657B4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x821657d8
	if (ctx.cr6.eq) goto loc_821657D8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821657b4
	if (ctx.cr6.eq) goto loc_821657B4;
loc_821657D8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82165878
	if (!ctx.cr6.eq) goto loc_82165878;
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x821657ec
	if (ctx.cr6.lt) goto loc_821657EC;
	// twi 31,r0,22
loc_821657EC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stb r28,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r28.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82165800:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82165800
	if (!ctx.cr6.eq) goto loc_82165800;
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
	ctx.lr = 0x82165828;
	sub_82161E08(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82583528
	ctx.lr = 0x8216583C;
	sub_82583528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r27,8
	ctx.r3.s64 = ctx.r27.s64 + 8;
	// bl 0x822d9150
	ctx.lr = 0x82165848;
	sub_822D9150(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82165858
	if (ctx.cr6.eq) goto loc_82165858;
	// bl 0x82581e38
	ctx.lr = 0x82165858;
	sub_82581E38(ctx, base);
loc_82165858:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8216586c
	if (ctx.cr6.lt) goto loc_8216586C;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82186190
	ctx.lr = 0x8216586C;
	sub_82186190(ctx, base);
loc_8216586C:
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stb r28,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r28.u8);
loc_82165878:
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82165888
	if (ctx.cr6.lt) goto loc_82165888;
	// twi 31,r0,22
loc_82165888:
	// addi r31,r31,880
	ctx.r31.s64 = ctx.r31.s64 + 880;
	// b 0x82165778
	goto loc_82165778;
loc_82165890:
	// addi r30,r27,40
	ctx.r30.s64 = ctx.r27.s64 + 40;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x821658a8
	if (!ctx.cr6.gt) goto loc_821658A8;
	// twi 31,r0,22
loc_821658A8:
	// lwz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x821658bc
	if (!ctx.cr6.gt) goto loc_821658BC;
	// twi 31,r0,22
loc_821658BC:
	// cmplw cr6,r30,r30
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x821658c8
	if (ctx.cr6.eq) goto loc_821658C8;
	// twi 31,r0,22
loc_821658C8:
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
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
	// beq cr6,0x821659d4
	if (ctx.cr6.eq) goto loc_821659D4;
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x821658f0
	if (ctx.cr6.lt) goto loc_821658F0;
	// twi 31,r0,22
loc_821658F0:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r11,r31,512
	ctx.r11.s64 = ctx.r31.s64 + 512;
loc_821658F8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8216591c
	if (ctx.cr6.eq) goto loc_8216591C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821658f8
	if (ctx.cr6.eq) goto loc_821658F8;
loc_8216591C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821659bc
	if (!ctx.cr6.eq) goto loc_821659BC;
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82165930
	if (ctx.cr6.lt) goto loc_82165930;
	// twi 31,r0,22
loc_82165930:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r26,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r26.u32);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stb r28,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r28.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82165944:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82165944
	if (!ctx.cr6.eq) goto loc_82165944;
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
	ctx.lr = 0x8216596C;
	sub_82161E08(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82583528
	ctx.lr = 0x82165980;
	sub_82583528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r27,8
	ctx.r3.s64 = ctx.r27.s64 + 8;
	// bl 0x822d9150
	ctx.lr = 0x8216598C;
	sub_822D9150(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216599c
	if (ctx.cr6.eq) goto loc_8216599C;
	// bl 0x82581e38
	ctx.lr = 0x8216599C;
	sub_82581E38(ctx, base);
loc_8216599C:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821659b0
	if (ctx.cr6.lt) goto loc_821659B0;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82186190
	ctx.lr = 0x821659B0;
	sub_82186190(ctx, base);
loc_821659B0:
	// stw r26,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r26.u32);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stb r28,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r28.u8);
loc_821659BC:
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x821659cc
	if (ctx.cr6.lt) goto loc_821659CC;
	// twi 31,r0,22
loc_821659CC:
	// addi r31,r31,668
	ctx.r31.s64 = ctx.r31.s64 + 668;
	// b 0x821658bc
	goto loc_821658BC;
loc_821659D4:
	// addi r30,r27,56
	ctx.r30.s64 = ctx.r27.s64 + 56;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x821659ec
	if (!ctx.cr6.gt) goto loc_821659EC;
	// twi 31,r0,22
loc_821659EC:
	// lwz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82165a00
	if (!ctx.cr6.gt) goto loc_82165A00;
	// twi 31,r0,22
loc_82165A00:
	// cmplw cr6,r30,r30
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82165a0c
	if (ctx.cr6.eq) goto loc_82165A0C;
	// twi 31,r0,22
loc_82165A0C:
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
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
	// beq cr6,0x82165b18
	if (ctx.cr6.eq) goto loc_82165B18;
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82165a34
	if (ctx.cr6.lt) goto loc_82165A34;
	// twi 31,r0,22
loc_82165A34:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r11,r31,512
	ctx.r11.s64 = ctx.r31.s64 + 512;
loc_82165A3C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82165a60
	if (ctx.cr6.eq) goto loc_82165A60;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82165a3c
	if (ctx.cr6.eq) goto loc_82165A3C;
loc_82165A60:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82165b00
	if (!ctx.cr6.eq) goto loc_82165B00;
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82165a74
	if (ctx.cr6.lt) goto loc_82165A74;
	// twi 31,r0,22
loc_82165A74:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r26,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r26.u32);
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// stb r28,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r28.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82165A88:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82165a88
	if (!ctx.cr6.eq) goto loc_82165A88;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82161e08
	ctx.lr = 0x82165AB0;
	sub_82161E08(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82583528
	ctx.lr = 0x82165AC4;
	sub_82583528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r27,8
	ctx.r3.s64 = ctx.r27.s64 + 8;
	// bl 0x822d9150
	ctx.lr = 0x82165AD0;
	sub_822D9150(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82165ae0
	if (ctx.cr6.eq) goto loc_82165AE0;
	// bl 0x82581e38
	ctx.lr = 0x82165AE0;
	sub_82581E38(ctx, base);
loc_82165AE0:
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82165af4
	if (ctx.cr6.lt) goto loc_82165AF4;
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x82186190
	ctx.lr = 0x82165AF4;
	sub_82186190(ctx, base);
loc_82165AF4:
	// stw r26,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r26.u32);
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// stb r28,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r28.u8);
loc_82165B00:
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82165b10
	if (ctx.cr6.lt) goto loc_82165B10;
	// twi 31,r0,22
loc_82165B10:
	// addi r31,r31,692
	ctx.r31.s64 = ctx.r31.s64 + 692;
	// b 0x82165a00
	goto loc_82165A00;
loc_82165B18:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82165B20"))) PPC_WEAK_FUNC(sub_82165B20);
PPC_FUNC_IMPL(__imp__sub_82165B20) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82165b58
	if (ctx.cr6.eq) goto loc_82165B58;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x821641d0
	ctx.lr = 0x82165B50;
	sub_821641D0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82186190
	ctx.lr = 0x82165B58;
	sub_82186190(ctx, base);
loc_82165B58:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82165B80"))) PPC_WEAK_FUNC(sub_82165B80);
PPC_FUNC_IMPL(__imp__sub_82165B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de890
	ctx.lr = 0x82165B88;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826dfb5c
	ctx.lr = 0x82165B90;
	__savefpr_17(ctx, base);
	// stwu r1,-3216(r1)
	ea = -3216 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r20,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r20.u32);
	// stw r20,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r20.u32);
	// stw r20,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r20.u32);
	// stw r29,3236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3236, ctx.r29.u32);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82165BC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,164(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82165be0
	if (!ctx.cr6.gt) goto loc_82165BE0;
	// twi 31,r0,22
	// twi 31,r0,22
loc_82165BE0:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82165BE4:
	// subf r10,r31,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r31.s64;
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
	// beq cr6,0x82165c54
	if (ctx.cr6.eq) goto loc_82165C54;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82165c0c
	if (ctx.cr6.lt) goto loc_82165C0C;
	// twi 31,r0,22
loc_82165C0C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// bl 0x82583528
	ctx.lr = 0x82165C20;
	sub_82583528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x822d9150
	ctx.lr = 0x82165C2C;
	sub_822D9150(ctx, base);
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82165c3c
	if (ctx.cr6.eq) goto loc_82165C3C;
	// bl 0x82581e38
	ctx.lr = 0x82165C3C;
	sub_82581E38(ctx, base);
loc_82165C3C:
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82165c4c
	if (ctx.cr6.lt) goto loc_82165C4C;
	// twi 31,r0,22
loc_82165C4C:
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// b 0x82165be4
	goto loc_82165BE4;
loc_82165C54:
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r20,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r20.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r20,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r20.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r20,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r20.u32);
	// addi r4,r11,3532
	ctx.r4.s64 = ctx.r11.s64 + 3532;
	// stw r20,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r20.u32);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// stb r20,516(r1)
	PPC_STORE_U8(ctx.r1.u32 + 516, ctx.r20.u8);
	// stw r30,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, ctx.r30.u32);
	// bl 0x82161e08
	ctx.lr = 0x82165C84;
	sub_82161E08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r30,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r30.u32);
	// addi r26,r11,3520
	ctx.r26.s64 = ctx.r11.s64 + 3520;
	// stw r20,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r20.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stb r20,388(r1)
	PPC_STORE_U8(ctx.r1.u32 + 388, ctx.r20.u8);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r26,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r26.u32);
	// bl 0x82161e08
	ctx.lr = 0x82165CAC;
	sub_82161E08(ctx, base);
	// lis r31,-32045
	ctx.r31.s64 = -2100101120;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// lwz r4,24236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24236);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82165CD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24236);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r6,r1,512
	ctx.r6.s64 = ctx.r1.s64 + 512;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82165CF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,648(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 648);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82165d08
	if (ctx.cr6.lt) goto loc_82165D08;
	// lwz r3,628(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// bl 0x82186190
	ctx.lr = 0x82165D08;
	sub_82186190(ctx, base);
loc_82165D08:
	// lwz r11,408(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// stw r30,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r30.u32);
	// stw r20,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r20.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r20,628(r1)
	PPC_STORE_U8(ctx.r1.u32 + 628, ctx.r20.u8);
	// blt cr6,0x82165d28
	if (ctx.cr6.lt) goto loc_82165D28;
	// lwz r3,388(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// bl 0x82186190
	ctx.lr = 0x82165D28;
	sub_82186190(ctx, base);
loc_82165D28:
	// lwz r11,536(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 536);
	// stw r30,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r30.u32);
	// stw r20,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r20.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r20,388(r1)
	PPC_STORE_U8(ctx.r1.u32 + 388, ctx.r20.u8);
	// blt cr6,0x82165d48
	if (ctx.cr6.lt) goto loc_82165D48;
	// lwz r3,516(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// bl 0x82186190
	ctx.lr = 0x82165D48;
	sub_82186190(ctx, base);
loc_82165D48:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r30,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, ctx.r30.u32);
	// stw r20,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r20.u32);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// stb r20,516(r1)
	PPC_STORE_U8(ctx.r1.u32 + 516, ctx.r20.u8);
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// ble cr6,0x82165d6c
	if (!ctx.cr6.gt) goto loc_82165D6C;
	// twi 31,r0,22
loc_82165D6C:
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// stw r27,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r27.u32);
	// ble cr6,0x82165d80
	if (!ctx.cr6.gt) goto loc_82165D80;
	// twi 31,r0,22
loc_82165D80:
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// stw r4,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r4.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r23,r11,26324
	ctx.r23.s64 = ctx.r11.s64 + 26324;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// addi r11,r11,6088
	ctx.r11.s64 = ctx.r11.s64 + 6088;
	// stw r23,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r23.u32);
	// stw r11,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// addi r11,r11,6164
	ctx.r11.s64 = ctx.r11.s64 + 6164;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,3028
	ctx.r11.s64 = ctx.r11.s64 + 3028;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r28,r11,24260
	ctx.r28.s64 = ctx.r11.s64 + 24260;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,3492
	ctx.r11.s64 = ctx.r11.s64 + 3492;
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// stw r11,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,3484
	ctx.r11.s64 = ctx.r11.s64 + 3484;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,3468
	ctx.r11.s64 = ctx.r11.s64 + 3468;
	// stw r11,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,3456
	ctx.r11.s64 = ctx.r11.s64 + 3456;
	// stw r11,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,3444
	ctx.r11.s64 = ctx.r11.s64 + 3444;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,3436
	ctx.r11.s64 = ctx.r11.s64 + 3436;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,3408
	ctx.r11.s64 = ctx.r11.s64 + 3408;
	// stw r11,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r19,r11,3392
	ctx.r19.s64 = ctx.r11.s64 + 3392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r22,r11,3384
	ctx.r22.s64 = ctx.r11.s64 + 3384;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r21,r11,3372
	ctx.r21.s64 = ctx.r11.s64 + 3372;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r18,r11,3360
	ctx.r18.s64 = ctx.r11.s64 + 3360;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r17,r11,3348
	ctx.r17.s64 = ctx.r11.s64 + 3348;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r16,r11,3336
	ctx.r16.s64 = ctx.r11.s64 + 3336;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r15,r11,3324
	ctx.r15.s64 = ctx.r11.s64 + 3324;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r14,r11,3308
	ctx.r14.s64 = ctx.r11.s64 + 3308;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,3292
	ctx.r11.s64 = ctx.r11.s64 + 3292;
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,3276
	ctx.r11.s64 = ctx.r11.s64 + 3276;
	// stw r11,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,3264
	ctx.r11.s64 = ctx.r11.s64 + 3264;
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,3252
	ctx.r11.s64 = ctx.r11.s64 + 3252;
	// stw r11,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,3240
	ctx.r11.s64 = ctx.r11.s64 + 3240;
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,3228
	ctx.r11.s64 = ctx.r11.s64 + 3228;
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,3212
	ctx.r11.s64 = ctx.r11.s64 + 3212;
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,3196
	ctx.r11.s64 = ctx.r11.s64 + 3196;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,3180
	ctx.r11.s64 = ctx.r11.s64 + 3180;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f17,14088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	ctx.f17.f64 = double(temp.f32);
	// li r29,-1
	ctx.r29.s64 = -1;
	// addi r24,r11,3164
	ctx.r24.s64 = ctx.r11.s64 + 3164;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,3144
	ctx.r11.s64 = ctx.r11.s64 + 3144;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,3120
	ctx.r11.s64 = ctx.r11.s64 + 3120;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,3112
	ctx.r11.s64 = ctx.r11.s64 + 3112;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
loc_82165EF8:
	// lwz r11,580(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
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
	// beq cr6,0x82166c38
	if (ctx.cr6.eq) goto loc_82166C38;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stw r30,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r30.u32);
	// stw r20,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r20.u32);
	// stb r20,420(r1)
	PPC_STORE_U8(ctx.r1.u32 + 420, ctx.r20.u8);
	// bl 0x82161e08
	ctx.lr = 0x82165F34;
	sub_82161E08(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82165f44
	if (ctx.cr6.lt) goto loc_82165F44;
	// twi 31,r0,22
loc_82165F44:
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82583e48
	ctx.lr = 0x82165F54;
	sub_82583E48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r30,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r30.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r20,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r20.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stb r20,356(r1)
	PPC_STORE_U8(ctx.r1.u32 + 356, ctx.r20.u8);
	// bl 0x82161e08
	ctx.lr = 0x82165F74;
	sub_82161E08(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r30.u32);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// stw r20,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r20.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stb r20,324(r1)
	PPC_STORE_U8(ctx.r1.u32 + 324, ctx.r20.u8);
	// bl 0x82161d10
	ctx.lr = 0x82165F94;
	sub_82161D10(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x821636b8
	ctx.lr = 0x82165FA8;
	sub_821636B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r30,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r20,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r20.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stb r20,292(r1)
	PPC_STORE_U8(ctx.r1.u32 + 292, ctx.r20.u8);
	// bl 0x82161d10
	ctx.lr = 0x82165FC8;
	sub_82161D10(ctx, base);
	// lwz r11,344(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82165fdc
	if (ctx.cr6.lt) goto loc_82165FDC;
	// lwz r3,324(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// bl 0x82186190
	ctx.lr = 0x82165FDC;
	sub_82186190(ctx, base);
loc_82165FDC:
	// lis r31,-32045
	ctx.r31.s64 = -2100101120;
	// stw r30,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r30.u32);
	// stw r20,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r20.u32);
	// stb r20,324(r1)
	PPC_STORE_U8(ctx.r1.u32 + 324, ctx.r20.u8);
	// lwz r4,24284(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24284);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82166038
	if (!ctx.cr6.eq) goto loc_82166038;
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// lwz r11,24276(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24276);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82166030
	if (!ctx.cr6.eq) goto loc_82166030;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,24276(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24276, ctx.r11.u32);
	// bl 0x82581e70
	ctx.lr = 0x8216601C;
	sub_82581E70(ctx, base);
	// lis r11,-32082
	ctx.r11.s64 = -2102525952;
	// addi r3,r11,31688
	ctx.r3.s64 = ctx.r11.s64 + 31688;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x826ded00
	ctx.lr = 0x82166030;
	sub_826DED00(ctx, base);
loc_82166030:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r4,24284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24284, ctx.r4.u32);
loc_82166038:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82582648
	ctx.lr = 0x82166050;
	sub_82582648(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,188(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r5,248(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826df418
	ctx.lr = 0x82166068;
	sub_826DF418(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// beq cr6,0x82166080
	if (ctx.cr6.eq) goto loc_82166080;
	// addi r3,r25,36
	ctx.r3.s64 = ctx.r25.s64 + 36;
	// bl 0x82659610
	ctx.lr = 0x82166080;
	sub_82659610(ctx, base);
loc_82166080:
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82166090
	if (ctx.cr6.eq) goto loc_82166090;
	// bl 0x82581e38
	ctx.lr = 0x82166090;
	sub_82581E38(ctx, base);
loc_82166090:
	// lwz r11,312(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821660a4
	if (ctx.cr6.lt) goto loc_821660A4;
	// lwz r3,292(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// bl 0x82186190
	ctx.lr = 0x821660A4;
	sub_82186190(ctx, base);
loc_821660A4:
	// lwz r11,376(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// stw r30,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r30.u32);
	// stw r20,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r20.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r20,292(r1)
	PPC_STORE_U8(ctx.r1.u32 + 292, ctx.r20.u8);
	// blt cr6,0x821660c4
	if (ctx.cr6.lt) goto loc_821660C4;
	// lwz r3,356(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// bl 0x82186190
	ctx.lr = 0x821660C4;
	sub_82186190(ctx, base);
loc_821660C4:
	// lwz r11,680(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 680);
	// stw r30,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r30.u32);
	// stw r20,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r20.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r20,356(r1)
	PPC_STORE_U8(ctx.r1.u32 + 356, ctx.r20.u8);
	// blt cr6,0x821660e4
	if (ctx.cr6.lt) goto loc_821660E4;
	// lwz r3,660(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 660);
	// bl 0x82186190
	ctx.lr = 0x821660E4;
	sub_82186190(ctx, base);
loc_821660E4:
	// lwz r11,440(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	// stw r30,680(r1)
	PPC_STORE_U32(ctx.r1.u32 + 680, ctx.r30.u32);
	// stw r20,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r20.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r20,660(r1)
	PPC_STORE_U8(ctx.r1.u32 + 660, ctx.r20.u8);
	// blt cr6,0x82166104
	if (ctx.cr6.lt) goto loc_82166104;
	// lwz r3,420(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// bl 0x82186190
	ctx.lr = 0x82166104;
	sub_82186190(ctx, base);
loc_82166104:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r30,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r30.u32);
	// stw r20,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r20.u32);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// stb r20,420(r1)
	PPC_STORE_U8(ctx.r1.u32 + 420, ctx.r20.u8);
	// blt cr6,0x82166120
	if (ctx.cr6.lt) goto loc_82166120;
	// twi 31,r0,22
loc_82166120:
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r30,472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 472, ctx.r30.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r20,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r20.u32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// stb r20,452(r1)
	PPC_STORE_U8(ctx.r1.u32 + 452, ctx.r20.u8);
	// bl 0x82161e08
	ctx.lr = 0x8216613C;
	sub_82161E08(ctx, base);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// lwz r4,24236(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24236);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82166160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r30,504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 504, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r20,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r20.u32);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// stb r20,484(r1)
	PPC_STORE_U8(ctx.r1.u32 + 484, ctx.r20.u8);
	// bl 0x82161d10
	ctx.lr = 0x82166180;
	sub_82161D10(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x821636b8
	ctx.lr = 0x82166194;
	sub_821636B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r30,568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 568, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r20,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r20.u32);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// stb r20,548(r1)
	PPC_STORE_U8(ctx.r1.u32 + 548, ctx.r20.u8);
	// bl 0x82161d10
	ctx.lr = 0x821661B4;
	sub_82161D10(ctx, base);
	// lwz r11,504(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 504);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821661c8
	if (ctx.cr6.lt) goto loc_821661C8;
	// lwz r3,484(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// bl 0x82186190
	ctx.lr = 0x821661C8;
	sub_82186190(ctx, base);
loc_821661C8:
	// lis r31,-32045
	ctx.r31.s64 = -2100101120;
	// stw r30,504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 504, ctx.r30.u32);
	// stw r20,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r20.u32);
	// stb r20,484(r1)
	PPC_STORE_U8(ctx.r1.u32 + 484, ctx.r20.u8);
	// lwz r4,26384(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26384);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8216621c
	if (!ctx.cr6.eq) goto loc_8216621C;
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// lwz r11,26380(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26380);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82166214
	if (!ctx.cr6.eq) goto loc_82166214;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r11,26380(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26380, ctx.r11.u32);
	// bl 0x82582f10
	ctx.lr = 0x82166208;
	sub_82582F10(ctx, base);
	// lis r11,-32082
	ctx.r11.s64 = -2102525952;
	// addi r3,r11,31720
	ctx.r3.s64 = ctx.r11.s64 + 31720;
	// bl 0x826ded00
	ctx.lr = 0x82166214;
	sub_826DED00(ctx, base);
loc_82166214:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r4,26384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26384, ctx.r4.u32);
loc_8216621C:
	// addi r5,r1,544
	ctx.r5.s64 = ctx.r1.s64 + 544;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825838c0
	ctx.lr = 0x82166228;
	sub_825838C0(ctx, base);
	// lwz r11,568(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 568);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8216623c
	if (ctx.cr6.lt) goto loc_8216623C;
	// lwz r3,548(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// bl 0x82186190
	ctx.lr = 0x8216623C;
	sub_82186190(ctx, base);
loc_8216623C:
	// lwz r11,616(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 616);
	// stw r30,568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 568, ctx.r30.u32);
	// stw r20,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r20.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r20,548(r1)
	PPC_STORE_U8(ctx.r1.u32 + 548, ctx.r20.u8);
	// blt cr6,0x8216625c
	if (ctx.cr6.lt) goto loc_8216625C;
	// lwz r3,596(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// bl 0x82186190
	ctx.lr = 0x8216625C;
	sub_82186190(ctx, base);
loc_8216625C:
	// lwz r11,472(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 472);
	// stw r30,616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 616, ctx.r30.u32);
	// stw r20,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r20.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stb r20,596(r1)
	PPC_STORE_U8(ctx.r1.u32 + 596, ctx.r20.u8);
	// blt cr6,0x8216627c
	if (ctx.cr6.lt) goto loc_8216627C;
	// lwz r3,452(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// bl 0x82186190
	ctx.lr = 0x8216627C;
	sub_82186190(ctx, base);
loc_8216627C:
	// stw r30,472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 472, ctx.r30.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r20,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r20.u32);
	// stb r20,452(r1)
	PPC_STORE_U8(ctx.r1.u32 + 452, ctx.r20.u8);
	// beq cr6,0x82166be0
	if (ctx.cr6.eq) goto loc_82166BE0;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82166be0
	if (ctx.cr6.eq) goto loc_82166BE0;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82166c08
	if (ctx.cr6.eq) goto loc_82166C08;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82166bf8
	if (ctx.cr6.eq) goto loc_82166BF8;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821662DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821666d4
	if (ctx.cr6.eq) goto loc_821666D4;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821666d4
	if (ctx.cr6.eq) goto loc_821666D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82166308;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821666d4
	if (ctx.cr6.eq) goto loc_821666D4;
	// lwz r26,216(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
loc_82166318:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82166330;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82166350;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82166370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216638C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,232(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821663A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821663C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821663E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821663FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,228(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f1.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82166418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,264(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f1.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82166434;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = ctx.f1.f64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82166450;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f23,f1
	ctx.fpscr.disableFlushMode();
	ctx.f23.f64 = ctx.f1.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216646C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f22,f1
	ctx.fpscr.disableFlushMode();
	ctx.f22.f64 = ctx.f1.f64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82166488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f21,f1
	ctx.fpscr.disableFlushMode();
	ctx.f21.f64 = ctx.f1.f64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821664A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f20,f1
	ctx.fpscr.disableFlushMode();
	ctx.f20.f64 = ctx.f1.f64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821664C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f19,f1
	ctx.fpscr.disableFlushMode();
	ctx.f19.f64 = ctx.f1.f64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821664DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f18,f1
	ctx.fpscr.disableFlushMode();
	ctx.f18.f64 = ctx.f1.f64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821664F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82166518;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82166538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821666b4
	if (ctx.cr6.eq) goto loc_821666B4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821666b4
	if (ctx.cr6.eq) goto loc_821666B4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821666b4
	if (ctx.cr6.eq) goto loc_821666B4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821666b4
	if (ctx.cr6.eq) goto loc_821666B4;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r20,1552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1552, ctx.r20.u32);
	// bl 0x82581e68
	ctx.lr = 0x82166568;
	sub_82581E68(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8216657c
	if (ctx.cr6.lt) goto loc_8216657C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82166580
	goto loc_82166580;
loc_8216657C:
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82166580:
	// addi r10,r1,688
	ctx.r10.s64 = ctx.r1.s64 + 688;
loc_82166584:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne cr6,0x82166584
	if (!ctx.cr6.eq) goto loc_82166584;
	// addi r10,r1,1200
	ctx.r10.s64 = ctx.r1.s64 + 1200;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r9,r31,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r31.s64;
loc_821665A8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x821665a8
	if (!ctx.cr6.eq) goto loc_821665A8;
	// addi r10,r1,1328
	ctx.r10.s64 = ctx.r1.s64 + 1328;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// subf r9,r30,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r30.s64;
loc_821665C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x821665c8
	if (!ctx.cr6.eq) goto loc_821665C8;
	// addi r10,r1,1456
	ctx.r10.s64 = ctx.r1.s64 + 1456;
	// stfs f31,1488(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1488, temp.u32);
	// stfs f30,1492(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1492, temp.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stfs f29,1496(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1496, temp.u32);
	// subf r9,r29,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r29.s64;
	// stfs f17,1500(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1500, temp.u32);
	// stfs f24,1504(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1504, temp.u32);
	// stfs f23,1508(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1508, temp.u32);
	// stfs f22,1512(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1512, temp.u32);
	// stfs f17,1516(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1516, temp.u32);
	// stfs f28,1520(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1520, temp.u32);
	// stfs f27,1524(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1524, temp.u32);
	// stfs f26,1528(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1528, temp.u32);
	// stfs f25,1532(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1532, temp.u32);
	// stfs f21,1536(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1536, temp.u32);
	// stfs f20,1540(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1540, temp.u32);
	// stfs f19,1544(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1544, temp.u32);
	// stfs f18,1548(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1548, temp.u32);
loc_82166628:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82166628
	if (!ctx.cr6.eq) goto loc_82166628;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,3236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3236);
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// bl 0x82163e78
	ctx.lr = 0x8216664C;
	sub_82163E78(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82166660
	if (ctx.cr6.eq) goto loc_82166660;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x82166660;
	sub_82659610(ctx, base);
loc_82166660:
	// lwz r3,1552(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1552);
	// stw r31,1552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1552, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82166674
	if (ctx.cr6.eq) goto loc_82166674;
	// bl 0x82581e38
	ctx.lr = 0x82166674;
	sub_82581E38(ctx, base);
loc_82166674:
	// lwz r3,236(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82166684
	if (ctx.cr6.eq) goto loc_82166684;
	// bl 0x82581e38
	ctx.lr = 0x82166684;
	sub_82581E38(ctx, base);
loc_82166684:
	// lwz r11,3236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3236);
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// stw r20,1556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1556, ctx.r20.u32);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stw r20,1560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1560, ctx.r20.u32);
	// stw r27,1564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1564, ctx.r27.u32);
	// bl 0x82165488
	ctx.lr = 0x821666A0;
	sub_82165488(ctx, base);
	// li r23,1
	ctx.r23.s64 = 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821666b4
	if (ctx.cr6.eq) goto loc_821666B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581e38
	ctx.lr = 0x821666B4;
	sub_82581E38(ctx, base);
loc_821666B4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821666C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82166318
	if (!ctx.cr6.eq) goto loc_82166318;
loc_821666D4:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821666e4
	if (ctx.cr6.eq) goto loc_821666E4;
	// bl 0x821601b8
	ctx.lr = 0x821666E4;
	sub_821601B8(ctx, base);
loc_821666E4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r5,268(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82166700;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82166918
	if (ctx.cr6.eq) goto loc_82166918;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82166918
	if (ctx.cr6.eq) goto loc_82166918;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82166730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82166918
	if (ctx.cr6.eq) goto loc_82166918;
loc_8216673C:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82166754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82166774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82166794;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,276(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821667B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,252(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821667D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821667F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821668f8
	if (ctx.cr6.eq) goto loc_821668F8;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82581e68
	ctx.lr = 0x82166808;
	sub_82581E68(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8216681c
	if (ctx.cr6.lt) goto loc_8216681C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82166820
	goto loc_82166820;
loc_8216681C:
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82166820:
	// addi r10,r1,2272
	ctx.r10.s64 = ctx.r1.s64 + 2272;
loc_82166824:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne cr6,0x82166824
	if (!ctx.cr6.eq) goto loc_82166824;
	// addi r10,r1,2784
	ctx.r10.s64 = ctx.r1.s64 + 2784;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r9,r31,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r31.s64;
loc_82166848:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82166848
	if (!ctx.cr6.eq) goto loc_82166848;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// stb r23,2912(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2912, ctx.r23.u8);
	// stw r30,2924(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2924, ctx.r30.u32);
	// stw r29,2928(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2928, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r28,2932(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2932, ctx.r28.u32);
	// stw r27,2936(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2936, ctx.r27.u32);
	// beq cr6,0x821668dc
	if (ctx.cr6.eq) goto loc_821668DC;
	// lwz r11,3236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3236);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r8,2916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2916, ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821668bc
	if (ctx.cr6.eq) goto loc_821668BC;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lis r9,2383
	ctx.r9.s64 = 156172288;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// ori r9,r9,8341
	ctx.r9.u64 = ctx.r9.u64 | 8341;
	// mulhw r11,r11,r9
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821668c0
	if (ctx.cr6.lt) goto loc_821668C0;
loc_821668BC:
	// twi 31,r0,22
loc_821668C0:
	// mulli r11,r8,880
	ctx.r11.s64 = ctx.r8.s64 * 880;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,868(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 868);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r10,2920(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2920, ctx.r10.u32);
	// stw r9,868(r11)
	PPC_STORE_U32(ctx.r11.u32 + 868, ctx.r9.u32);
	// b 0x821668e8
	goto loc_821668E8;
loc_821668DC:
	// stw r25,2920(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2920, ctx.r25.u32);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// stw r26,2916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2916, ctx.r26.u32);
loc_821668E8:
	// lwz r11,3236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3236);
	// addi r4,r1,2272
	ctx.r4.s64 = ctx.r1.s64 + 2272;
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// bl 0x82165568
	ctx.lr = 0x821668F8;
	sub_82165568(ctx, base);
loc_821668F8:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216690C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216673c
	if (!ctx.cr6.eq) goto loc_8216673C;
loc_82166918:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82166928
	if (ctx.cr6.eq) goto loc_82166928;
	// bl 0x821601b8
	ctx.lr = 0x82166928;
	sub_821601B8(ctx, base);
loc_82166928:
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r5,284(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82166944;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82166bb8
	if (ctx.cr6.eq) goto loc_82166BB8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82166bb8
	if (ctx.cr6.eq) goto loc_82166BB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82166974;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82166bb8
	if (ctx.cr6.eq) goto loc_82166BB8;
	// lwz r25,3236(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3236);
loc_82166984:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216699C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821669BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821669DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821669FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82166A1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82166b98
	if (ctx.cr6.eq) goto loc_82166B98;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82166b98
	if (ctx.cr6.eq) goto loc_82166B98;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82166b98
	if (ctx.cr6.eq) goto loc_82166B98;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r20,2240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2240, ctx.r20.u32);
	// bl 0x82581e68
	ctx.lr = 0x82166A44;
	sub_82581E68(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82166a58
	if (ctx.cr6.lt) goto loc_82166A58;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82166a5c
	goto loc_82166A5C;
loc_82166A58:
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82166A5C:
	// addi r10,r1,1568
	ctx.r10.s64 = ctx.r1.s64 + 1568;
loc_82166A60:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne cr6,0x82166a60
	if (!ctx.cr6.eq) goto loc_82166A60;
	// addi r10,r1,2080
	ctx.r10.s64 = ctx.r1.s64 + 2080;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r9,r31,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r31.s64;
loc_82166A84:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82166a84
	if (!ctx.cr6.eq) goto loc_82166A84;
	// addi r10,r1,2208
	ctx.r10.s64 = ctx.r1.s64 + 2208;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// subf r9,r30,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r30.s64;
loc_82166AA4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82166aa4
	if (!ctx.cr6.eq) goto loc_82166AA4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// bl 0x82163e78
	ctx.lr = 0x82166AC8;
	sub_82163E78(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82166adc
	if (ctx.cr6.eq) goto loc_82166ADC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x82166ADC;
	sub_82659610(ctx, base);
loc_82166ADC:
	// lwz r3,2240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2240);
	// stw r31,2240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2240, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82166af0
	if (ctx.cr6.eq) goto loc_82166AF0;
	// bl 0x82581e38
	ctx.lr = 0x82166AF0;
	sub_82581E38(ctx, base);
loc_82166AF0:
	// lwz r3,260(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82166b00
	if (ctx.cr6.eq) goto loc_82166B00;
	// bl 0x82581e38
	ctx.lr = 0x82166B00;
	sub_82581E38(ctx, base);
loc_82166B00:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// stb r23,2244(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2244, ctx.r23.u8);
	// stw r28,2256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2256, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82166b70
	if (ctx.cr6.eq) goto loc_82166B70;
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,28(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r8,2248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2248, ctx.r8.u32);
	// beq cr6,0x82166b50
	if (ctx.cr6.eq) goto loc_82166B50;
	// lwz r11,32(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// lis r9,2383
	ctx.r9.s64 = 156172288;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// ori r9,r9,8341
	ctx.r9.u64 = ctx.r9.u64 | 8341;
	// mulhw r11,r11,r9
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82166b54
	if (ctx.cr6.lt) goto loc_82166B54;
loc_82166B50:
	// twi 31,r0,22
loc_82166B54:
	// mulli r11,r8,880
	ctx.r11.s64 = ctx.r8.s64 * 880;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,872(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 872);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r10,2252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2252, ctx.r10.u32);
	// stw r9,872(r11)
	PPC_STORE_U32(ctx.r11.u32 + 872, ctx.r9.u32);
	// b 0x82166b7c
	goto loc_82166B7C;
loc_82166B70:
	// stw r26,2252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2252, ctx.r26.u32);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r27,2248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2248, ctx.r27.u32);
loc_82166B7C:
	// addi r4,r1,1568
	ctx.r4.s64 = ctx.r1.s64 + 1568;
	// addi r3,r25,56
	ctx.r3.s64 = ctx.r25.s64 + 56;
	// bl 0x82165650
	ctx.lr = 0x82166B88;
	sub_82165650(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82166b98
	if (ctx.cr6.eq) goto loc_82166B98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581e38
	ctx.lr = 0x82166B98;
	sub_82581E38(ctx, base);
loc_82166B98:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82166BAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82166984
	if (!ctx.cr6.eq) goto loc_82166984;
loc_82166BB8:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82166bc8
	if (ctx.cr6.eq) goto loc_82166BC8;
	// bl 0x821601b8
	ctx.lr = 0x82166BC8;
	sub_821601B8(ctx, base);
loc_82166BC8:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82166be0
	if (ctx.cr6.eq) goto loc_82166BE0;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_82166BE0:
	// lwz r26,156(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// li r29,-1
	ctx.r29.s64 = -1;
	// lwz r28,144(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r30,15
	ctx.r30.s64 = 15;
	// lwz r25,120(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r27,204(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
loc_82166BF8:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82166c08
	if (ctx.cr6.eq) goto loc_82166C08;
	// bl 0x82581e38
	ctx.lr = 0x82166C08;
	sub_82581E38(ctx, base);
loc_82166C08:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82166c18
	if (ctx.cr6.eq) goto loc_82166C18;
	// addi r3,r25,36
	ctx.r3.s64 = ctx.r25.s64 + 36;
	// bl 0x82581e38
	ctx.lr = 0x82166C18;
	sub_82581E38(ctx, base);
loc_82166C18:
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplw cr6,r27,r4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82166c28
	if (ctx.cr6.lt) goto loc_82166C28;
	// twi 31,r0,22
loc_82166C28:
	// addi r27,r27,28
	ctx.r27.s64 = ctx.r27.s64 + 28;
	// lwz r23,280(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// stw r27,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r27.u32);
	// b 0x82165ef8
	goto loc_82165EF8;
loc_82166C38:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82166c58
	if (ctx.cr6.eq) goto loc_82166C58;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lbz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// bl 0x821641d0
	ctx.lr = 0x82166C50;
	sub_821641D0(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82186190
	ctx.lr = 0x82166C58;
	sub_82186190(ctx, base);
loc_82166C58:
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r20,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r20.u32);
	// stw r20,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r20.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r20,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r20.u32);
	// beq cr6,0x82166c88
	if (ctx.cr6.eq) goto loc_82166C88;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lbz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x821641d0
	ctx.lr = 0x82166C80;
	sub_821641D0(ctx, base);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x82186190
	ctx.lr = 0x82166C88;
	sub_82186190(ctx, base);
loc_82166C88:
	// addi r1,r1,3216
	ctx.r1.s64 = ctx.r1.s64 + 3216;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826dfba8
	ctx.lr = 0x82166C94;
	__restfpr_17(ctx, base);
	// b 0x826de8e0
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82166C98"))) PPC_WEAK_FUNC(sub_82166C98);
PPC_FUNC_IMPL(__imp__sub_82166C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r9,r11,3540
	ctx.r9.s64 = ctx.r11.s64 + 3540;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lis r9,-32072
	ctx.r9.s64 = -2101870592;
	// addi r9,r9,-4608
	ctx.r9.s64 = ctx.r9.s64 + -4608;
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32072
	ctx.r10.s64 = -2101870592;
	// addi r10,r10,-4576
	ctx.r10.s64 = ctx.r10.s64 + -4576;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stb r11,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, ctx.r11.u8);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82166D08"))) PPC_WEAK_FUNC(sub_82166D08);
PPC_FUNC_IMPL(__imp__sub_82166D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,3540
	ctx.r11.s64 = ctx.r11.s64 + 3540;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// b 0x82581e38
	sub_82581E38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82166D28"))) PPC_WEAK_FUNC(sub_82166D28);
PPC_FUNC_IMPL(__imp__sub_82166D28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82166D30"))) PPC_WEAK_FUNC(sub_82166D30);
PPC_FUNC_IMPL(__imp__sub_82166D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82166d5c
	if (ctx.cr6.eq) goto loc_82166D5C;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82659610
	ctx.lr = 0x82166D5C;
	sub_82659610(ctx, base);
loc_82166D5C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82166d74
	if (ctx.cr6.eq) goto loc_82166D74;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82581e38
	ctx.lr = 0x82166D74;
	sub_82581E38(ctx, base);
loc_82166D74:
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

__attribute__((alias("__imp__sub_82166D90"))) PPC_WEAK_FUNC(sub_82166D90);
PPC_FUNC_IMPL(__imp__sub_82166D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r6,r11,6384
	ctx.r6.s64 = ctx.r11.s64 + 6384;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,6340
	ctx.r5.s64 = ctx.r11.s64 + 6340;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826df418
	ctx.lr = 0x82166DC4;
	sub_826DF418(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82166dd4
	if (ctx.cr6.eq) goto loc_82166DD4;
	// bl 0x82659610
	ctx.lr = 0x82166DD4;
	sub_82659610(ctx, base);
loc_82166DD4:
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

__attribute__((alias("__imp__sub_82166DF0"))) PPC_WEAK_FUNC(sub_82166DF0);
PPC_FUNC_IMPL(__imp__sub_82166DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r6,r11,6432
	ctx.r6.s64 = ctx.r11.s64 + 6432;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,6340
	ctx.r5.s64 = ctx.r11.s64 + 6340;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826df418
	ctx.lr = 0x82166E24;
	sub_826DF418(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82166e34
	if (ctx.cr6.eq) goto loc_82166E34;
	// bl 0x82659610
	ctx.lr = 0x82166E34;
	sub_82659610(ctx, base);
loc_82166E34:
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

__attribute__((alias("__imp__sub_82166E50"))) PPC_WEAK_FUNC(sub_82166E50);
PPC_FUNC_IMPL(__imp__sub_82166E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82166E60:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82166e60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82166E60;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v12,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// vspltw v11,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v10,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltisw v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_set1_epi32(int(0x0)));
	// lvx128 v9,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-32
	ctx.r11.s64 = ctx.r1.s64 + -32;
	// vupkd3d128 v0,v13,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v13.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v13.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// lvx128 v8,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-48
	ctx.r11.s64 = ctx.r1.s64 + -48;
	// vmaddfp v12,v8,v12,v9
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vspltw v13,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x0));
	// lvx128 v7,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-64
	ctx.r11.s64 = ctx.r1.s64 + -64;
	// vor v0,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// lvx128 v6,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v12,v11,v7,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v10,v10,v6,v12
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v12.f32)));
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
	// stvx v0,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82166EF0"))) PPC_WEAK_FUNC(sub_82166EF0);
PPC_FUNC_IMPL(__imp__sub_82166EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,3540
	ctx.r11.s64 = ctx.r11.s64 + 3540;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82166f2c
	if (ctx.cr6.eq) goto loc_82166F2C;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82581e38
	ctx.lr = 0x82166F2C;
	sub_82581E38(ctx, base);
loc_82166F2C:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82166f44
	if (ctx.cr6.eq) goto loc_82166F44;
	// bl 0x82186190
	ctx.lr = 0x82166F40;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82166F44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82166F60"))) PPC_WEAK_FUNC(sub_82166F60);
PPC_FUNC_IMPL(__imp__sub_82166F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82166fa0
	if (ctx.cr6.eq) goto loc_82166FA0;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82166fa0
	if (ctx.cr6.eq) goto loc_82166FA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82166FA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82166FA0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82166fb0
	if (ctx.cr6.eq) goto loc_82166FB0;
	// bl 0x82581e38
	ctx.lr = 0x82166FB0;
	sub_82581E38(ctx, base);
loc_82166FB0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82166FC8"))) PPC_WEAK_FUNC(sub_82166FC8);
PPC_FUNC_IMPL(__imp__sub_82166FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82167008
	if (ctx.cr6.eq) goto loc_82167008;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167008
	if (ctx.cr6.eq) goto loc_82167008;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82167008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82167008:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82167018
	if (ctx.cr6.eq) goto loc_82167018;
	// bl 0x82581e38
	ctx.lr = 0x82167018;
	sub_82581E38(ctx, base);
loc_82167018:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82167030"))) PPC_WEAK_FUNC(sub_82167030);
PPC_FUNC_IMPL(__imp__sub_82167030) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f1,156(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8216706c
	if (ctx.cr6.lt) goto loc_8216706C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8216706C:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8216707c
	if (ctx.cr6.lt) goto loc_8216707C;
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
loc_8216707C:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// blt cr6,0x82167098
	if (ctx.cr6.lt) goto loc_82167098;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82167098:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x821670a8
	if (ctx.cr6.lt) goto loc_821670A8;
	// addi r11,r1,156
	ctx.r11.s64 = ctx.r1.s64 + 156;
loc_821670A8:
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82167194
	if (ctx.cr6.eq) goto loc_82167194;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167194
	if (ctx.cr6.eq) goto loc_82167194;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821670DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167194
	if (ctx.cr6.eq) goto loc_82167194;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167184
	if (ctx.cr6.eq) goto loc_82167184;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82167144
	if (ctx.cr6.eq) goto loc_82167144;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82167184
	if (!ctx.cr6.eq) goto loc_82167184;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82166df0
	ctx.lr = 0x82167118;
	sub_82166DF0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82167184
	if (ctx.cr6.eq) goto loc_82167184;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167178
	if (ctx.cr6.eq) goto loc_82167178;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82584198
	ctx.lr = 0x8216713C;
	sub_82584198(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82167178
	goto loc_82167178;
loc_82167144:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82166d90
	ctx.lr = 0x82167150;
	sub_82166D90(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82167184
	if (ctx.cr6.eq) goto loc_82167184;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167178
	if (ctx.cr6.eq) goto loc_82167178;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82584030
	ctx.lr = 0x82167174;
	sub_82584030(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82167178:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82167184
	if (ctx.cr6.eq) goto loc_82167184;
	// bl 0x82581e38
	ctx.lr = 0x82167184;
	sub_82581E38(ctx, base);
loc_82167184:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82167194
	if (ctx.cr6.eq) goto loc_82167194;
	// bl 0x82581e38
	ctx.lr = 0x82167194;
	sub_82581E38(ctx, base);
loc_82167194:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_821671B0"))) PPC_WEAK_FUNC(sub_821671B0);
PPC_FUNC_IMPL(__imp__sub_821671B0) {
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
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82167228
	if (ctx.cr6.lt) goto loc_82167228;
	// bne cr6,0x82167280
	if (!ctx.cr6.eq) goto loc_82167280;
	// lfs f13,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
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
	// blt cr6,0x821671fc
	if (ctx.cr6.lt) goto loc_821671FC;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_821671FC:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,64(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82167280
	if (!ctx.cr6.eq) goto loc_82167280;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r11.u8);
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
loc_82167228:
	// lfs f13,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82167250
	if (ctx.cr6.lt) goto loc_82167250;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82167250:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82167268
	if (!ctx.cr6.eq) goto loc_82167268;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_82167268:
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f0,f1,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// bl 0x82167030
	ctx.lr = 0x8216727C;
	sub_82167030(ctx, base);
	// stfs f1,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
loc_82167280:
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

__attribute__((alias("__imp__sub_82167298"))) PPC_WEAK_FUNC(sub_82167298);
PPC_FUNC_IMPL(__imp__sub_82167298) {
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
	// li r12,-64
	ctx.r12.s64 = -64;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,3544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82167314
	if (!ctx.cr6.eq) goto loc_82167314;
	// stfs f31,84(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
	// b 0x8216732c
	goto loc_8216732C;
loc_82167314:
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,84(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
loc_8216732C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82584548
	ctx.lr = 0x82167334;
	sub_82584548(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8216742c
	if (ctx.cr6.eq) goto loc_8216742C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82167490
	if (!ctx.cr6.eq) goto loc_82167490;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r30,16
	ctx.r9.s64 = ctx.r30.s64 + 16;
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// stfs f31,200(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lfs f30,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f30.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v127,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f30,204(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f29,3548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// bl 0x825d2bc0
	ctx.lr = 0x82167394;
	sub_825D2BC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82166e50
	ctx.lr = 0x821673A4;
	sub_82166E50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,-29804(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29804);
	ctx.f0.f64 = double(temp.f32);
	// vaddfp128 v127,v127,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v127.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v127.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stfs f30,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f30,124(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x825d20b0
	ctx.lr = 0x821673D8;
	sub_825D20B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825d1d08
	ctx.lr = 0x821673E4;
	sub_825D1D08(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lfs f2,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82584380
	ctx.lr = 0x821673F4;
	sub_82584380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823032b8
	ctx.lr = 0x82167400;
	sub_823032B8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82167410
	if (ctx.cr6.eq) goto loc_82167410;
	// bl 0x82581e38
	ctx.lr = 0x82167410;
	sub_82581E38(ctx, base);
loc_82167410:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82167490
	goto loc_82167490;
loc_8216742C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82584238
	ctx.lr = 0x82167438;
	sub_82584238(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8216744c
	if (ctx.cr6.eq) goto loc_8216744C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x8216744C;
	sub_82659610(ctx, base);
loc_8216744C:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82167460
	if (ctx.cr6.eq) goto loc_82167460;
	// bl 0x82581e38
	ctx.lr = 0x82167460;
	sub_82581E38(ctx, base);
loc_82167460:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82167470
	if (ctx.cr6.eq) goto loc_82167470;
	// bl 0x82581e38
	ctx.lr = 0x82167470;
	sub_82581E38(ctx, base);
loc_82167470:
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82167490:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821674fc
	if (ctx.cr6.eq) goto loc_821674FC;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821674ec
	if (ctx.cr6.eq) goto loc_821674EC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r11,r11,64672
	ctx.r11.u64 = ctx.r11.u64 | 64672;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// bl 0x82584610
	ctx.lr = 0x821674C0;
	sub_82584610(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821674d4
	if (ctx.cr6.eq) goto loc_821674D4;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82659610
	ctx.lr = 0x821674D4;
	sub_82659610(ctx, base);
loc_821674D4:
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r31,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821674ec
	if (ctx.cr6.eq) goto loc_821674EC;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82581e38
	ctx.lr = 0x821674EC;
	sub_82581E38(ctx, base);
loc_821674EC:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821674fc
	if (ctx.cr6.eq) goto loc_821674FC;
	// bl 0x82581e38
	ctx.lr = 0x821674FC;
	sub_82581E38(ctx, base);
loc_821674FC:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// li r0,-64
	ctx.r0.s64 = -64;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_82167528"))) PPC_WEAK_FUNC(sub_82167528);
PPC_FUNC_IMPL(__imp__sub_82167528) {
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
	// addi r8,r5,16
	ctx.r8.s64 = ctx.r5.s64 + 16;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r9,r11,3540
	ctx.r9.s64 = ctx.r11.s64 + 3540;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stb r11,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r11.u8);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// bl 0x82167298
	ctx.lr = 0x8216759C;
	sub_82167298(ctx, base);
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

__attribute__((alias("__imp__sub_821675B8"))) PPC_WEAK_FUNC(sub_821675B8);
PPC_FUNC_IMPL(__imp__sub_821675B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r11,r11,4964
	ctx.r11.s64 = ctx.r11.s64 + 4964;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x821675ec
	if (ctx.cr6.eq) goto loc_821675EC;
	// bl 0x82186190
	ctx.lr = 0x821675E8;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821675EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82167600"))) PPC_WEAK_FUNC(sub_82167600);
PPC_FUNC_IMPL(__imp__sub_82167600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r11,r11,4976
	ctx.r11.s64 = ctx.r11.s64 + 4976;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82167634
	if (ctx.cr6.eq) goto loc_82167634;
	// bl 0x82186190
	ctx.lr = 0x82167630;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82167634:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82167648"))) PPC_WEAK_FUNC(sub_82167648);
PPC_FUNC_IMPL(__imp__sub_82167648) {
	PPC_FUNC_PROLOGUE();
	// b 0x825f0260
	sub_825F0260(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82167650"))) PPC_WEAK_FUNC(sub_82167650);
PPC_FUNC_IMPL(__imp__sub_82167650) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167670
	if (ctx.cr6.eq) goto loc_82167670;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82167670:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82167678"))) PPC_WEAK_FUNC(sub_82167678);
PPC_FUNC_IMPL(__imp__sub_82167678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82167680;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r5,-1
	ctx.r31.s64 = ctx.r5.s64 + -1;
	// mullw r11,r29,r5
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r5.s32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x821676bc
	if (ctx.cr6.lt) goto loc_821676BC;
loc_821676A0:
	// subf r30,r29,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r29.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x821676B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x821676a0
	if (!ctx.cr6.lt) goto loc_821676A0;
loc_821676BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821676C8"))) PPC_WEAK_FUNC(sub_821676C8);
PPC_FUNC_IMPL(__imp__sub_821676C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82581080
	ctx.lr = 0x821676E4;
	sub_82581080(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82167728
	if (ctx.cr6.eq) goto loc_82167728;
loc_821676F0:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82167708;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821676c8
	ctx.lr = 0x82167714;
	sub_821676C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581088
	ctx.lr = 0x8216771C;
	sub_82581088(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821676f0
	if (!ctx.cr6.eq) goto loc_821676F0;
loc_82167728:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82167740"))) PPC_WEAK_FUNC(sub_82167740);
PPC_FUNC_IMPL(__imp__sub_82167740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,5152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5152);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82167764
	if (ctx.cr6.eq) goto loc_82167764;
	// bl 0x825812c8
	ctx.lr = 0x82167764;
	sub_825812C8(ctx, base);
loc_82167764:
	// lwz r3,5156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82167774
	if (ctx.cr6.eq) goto loc_82167774;
	// bl 0x825812c8
	ctx.lr = 0x82167774;
	sub_825812C8(ctx, base);
loc_82167774:
	// lwz r3,5160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5160);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82167784
	if (ctx.cr6.eq) goto loc_82167784;
	// bl 0x825812c8
	ctx.lr = 0x82167784;
	sub_825812C8(ctx, base);
loc_82167784:
	// lwz r3,5164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82167794
	if (ctx.cr6.eq) goto loc_82167794;
	// bl 0x825812c8
	ctx.lr = 0x82167794;
	sub_825812C8(ctx, base);
loc_82167794:
	// lwz r3,5172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5172);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821677a4
	if (ctx.cr6.eq) goto loc_821677A4;
	// bl 0x825812c8
	ctx.lr = 0x821677A4;
	sub_825812C8(ctx, base);
loc_821677A4:
	// lwz r3,5148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821677b4
	if (ctx.cr6.eq) goto loc_821677B4;
	// bl 0x825812c8
	ctx.lr = 0x821677B4;
	sub_825812C8(ctx, base);
loc_821677B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6492, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821677D0"))) PPC_WEAK_FUNC(sub_821677D0);
PPC_FUNC_IMPL(__imp__sub_821677D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// bgt cr6,0x82167844
	if (ctx.cr6.gt) goto loc_82167844;
	// lis r12,-32234
	ctx.r12.s64 = -2112487424;
	// addi r12,r12,30712
	ctx.r12.s64 = ctx.r12.s64 + 30712;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_82167844;
	case 1:
		goto loc_82167814;
	case 2:
		goto loc_8216782C;
	case 3:
		goto loc_8216781C;
	case 4:
		goto loc_82167824;
	case 5:
		goto loc_8216783C;
	case 6:
		goto loc_82167834;
	default:
		__builtin_unreachable();
	}
	// lwz r16,30788(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + 30788);
	// lwz r16,30740(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + 30740);
	// lwz r16,30764(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + 30764);
	// lwz r16,30748(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + 30748);
	// lwz r16,30756(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + 30756);
	// lwz r16,30780(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + 30780);
	// lwz r16,30772(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + 30772);
loc_82167814:
	// lwz r3,5144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5144);
	// blr 
	return;
loc_8216781C:
	// lwz r3,5164(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5164);
	// blr 
	return;
loc_82167824:
	// lwz r3,5172(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5172);
	// blr 
	return;
loc_8216782C:
	// lwz r3,5160(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5160);
	// blr 
	return;
loc_82167834:
	// lwz r3,5156(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5156);
	// blr 
	return;
loc_8216783C:
	// lwz r3,5168(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5168);
	// blr 
	return;
loc_82167844:
	// lwz r3,5152(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5152);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82167850"))) PPC_WEAK_FUNC(sub_82167850);
PPC_FUNC_IMPL(__imp__sub_82167850) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,5420
	ctx.r3.s64 = ctx.r3.s64 + 5420;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82167858"))) PPC_WEAK_FUNC(sub_82167858);
PPC_FUNC_IMPL(__imp__sub_82167858) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82167870"))) PPC_WEAK_FUNC(sub_82167870);
PPC_FUNC_IMPL(__imp__sub_82167870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de894
	ctx.lr = 0x82167878;
	__savegprlr_15(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r15,r11,45093
	ctx.r15.u64 = ctx.r11.u64 | 45093;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r31,r28,4656
	ctx.r31.s64 = ctx.r28.s64 + 4656;
	// ori r19,r11,45094
	ctx.r19.u64 = ctx.r11.u64 | 45094;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r30,r28,3672
	ctx.r30.s64 = ctx.r28.s64 + 3672;
	// ori r27,r11,45096
	ctx.r27.u64 = ctx.r11.u64 | 45096;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r16,4
	ctx.r16.s64 = 4;
	// ori r20,r11,45092
	ctx.r20.u64 = ctx.r11.u64 | 45092;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r18,-32079
	ctx.r18.s64 = -2102329344;
	// ori r26,r11,45099
	ctx.r26.u64 = ctx.r11.u64 | 45099;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r17,0
	ctx.r17.s64 = 0;
	// ori r29,r11,45107
	ctx.r29.u64 = ctx.r11.u64 | 45107;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r21,r11,45106
	ctx.r21.u64 = ctx.r11.u64 | 45106;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r22,r11,45095
	ctx.r22.u64 = ctx.r11.u64 | 45095;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r25,r11,45098
	ctx.r25.u64 = ctx.r11.u64 | 45098;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r23,r11,45102
	ctx.r23.u64 = ctx.r11.u64 | 45102;
loc_821678E4:
	// addi r24,r30,-24
	ctx.r24.s64 = ctx.r30.s64 + -24;
	// lwz r11,2548(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2548);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167c30
	if (ctx.cr6.eq) goto loc_82167C30;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581100
	ctx.lr = 0x82167914;
	sub_82581100(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167c30
	if (ctx.cr6.eq) goto loc_82167C30;
	// lbz r11,4464(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4464);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167abc
	if (ctx.cr6.eq) goto loc_82167ABC;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,304(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82167964
	if (ctx.cr6.eq) goto loc_82167964;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r15,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r15.u32);
	// bl 0x82615d60
	ctx.lr = 0x8216794C;
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
	ctx.lr = 0x82167964;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82167964:
	// lwz r11,-20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20);
	// lwz r10,284(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8216799c
	if (ctx.cr6.eq) goto loc_8216799C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r19,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r19.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82615d60
	ctx.lr = 0x82167984;
	sub_82615D60(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216799C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216799C:
	// lwz r11,-12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// lwz r10,292(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821679d4
	if (ctx.cr6.eq) goto loc_821679D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82615d60
	ctx.lr = 0x821679BC;
	sub_82615D60(ctx, base);
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
	ctx.lr = 0x821679D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821679D4:
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// lwz r10,296(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82167a0c
	if (ctx.cr6.eq) goto loc_82167A0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r20,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r20.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x82615d60
	ctx.lr = 0x821679F4;
	sub_82615D60(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82167A0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82167A0C:
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,316(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82167a44
	if (ctx.cr6.eq) goto loc_82167A44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// bl 0x82615d60
	ctx.lr = 0x82167A2C;
	sub_82615D60(ctx, base);
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
	ctx.lr = 0x82167A44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82167A44:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,320(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82167a64
	if (!ctx.cr6.eq) goto loc_82167A64;
	// lfs f0,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,324(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82167a94
	if (ctx.cr6.eq) goto loc_82167A94;
loc_82167A64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// bl 0x82615d60
	ctx.lr = 0x82167A7C;
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
	ctx.lr = 0x82167A94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82167A94:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r10,336(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82167bb4
	if (ctx.cr6.eq) goto loc_82167BB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r21,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r21.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x82615d60
	ctx.lr = 0x82167AB4;
	sub_82615D60(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// b 0x82167ba0
	goto loc_82167BA0;
loc_82167ABC:
	// lwz r11,-16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// lwz r10,288(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82167af4
	if (ctx.cr6.eq) goto loc_82167AF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r22,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r22.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// bl 0x82615d60
	ctx.lr = 0x82167ADC;
	sub_82615D60(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82167AF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82167AF4:
	// lwz r11,-12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// lwz r10,292(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82167b2c
	if (ctx.cr6.eq) goto loc_82167B2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r27.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// bl 0x82615d60
	ctx.lr = 0x82167B14;
	sub_82615D60(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82167B2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82167B2C:
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,316(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82167b64
	if (ctx.cr6.eq) goto loc_82167B64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r26,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r26.u32);
	// bl 0x82615d60
	ctx.lr = 0x82167B4C;
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
	ctx.lr = 0x82167B64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82167B64:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,320(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82167b84
	if (!ctx.cr6.eq) goto loc_82167B84;
	// lfs f0,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,324(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82167bb4
	if (ctx.cr6.eq) goto loc_82167BB4;
loc_82167B84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// bl 0x82615d60
	ctx.lr = 0x82167B9C;
	sub_82615D60(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
loc_82167BA0:
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82167BB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82167BB4:
	// lbz r11,6476(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 6476);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167bf8
	if (ctx.cr6.eq) goto loc_82167BF8;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r25,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r25.u32);
	// stw r17,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r17.u32);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// lwz r11,6480(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6480);
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// bl 0x82615d60
	ctx.lr = 0x82167BE0;
	sub_82615D60(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82167BF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82167BF8:
	// lbz r11,6440(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 6440);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167c30
	if (ctx.cr6.eq) goto loc_82167C30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,6444(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 6444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stw r23,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r23.u32);
	// bl 0x82615d60
	ctx.lr = 0x82167C18;
	sub_82615D60(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82167C30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82167C30:
	// addi r3,r30,280
	ctx.r3.s64 = ctx.r30.s64 + 280;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x826df680
	ctx.lr = 0x82167C40;
	sub_826DF680(ctx, base);
	// addi r16,r16,-1
	ctx.r16.s64 = ctx.r16.s64 + -1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,76
	ctx.r30.s64 = ctx.r30.s64 + 76;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// bne cr6,0x821678e4
	if (!ctx.cr6.eq) goto loc_821678E4;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x826de8e4
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82167C60"))) PPC_WEAK_FUNC(sub_82167C60);
PPC_FUNC_IMPL(__imp__sub_82167C60) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82167C7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82167C8C;
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

__attribute__((alias("__imp__sub_82167CA0"))) PPC_WEAK_FUNC(sub_82167CA0);
PPC_FUNC_IMPL(__imp__sub_82167CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// lwz r11,2548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2548);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167cf0
	if (ctx.cr6.eq) goto loc_82167CF0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,3648
	ctx.r11.s64 = ctx.r3.s64 + 3648;
loc_82167CC8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r9,r9,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r9.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82167cf8
	if (!ctx.cr6.eq) goto loc_82167CF8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x82167cc8
	if (!ctx.cr6.eq) goto loc_82167CC8;
loc_82167CF0:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82167CF8:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82167D00"))) PPC_WEAK_FUNC(sub_82167D00);
PPC_FUNC_IMPL(__imp__sub_82167D00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r8,4488
	ctx.r10.s64 = ctx.r8.s64 + 4488;
	// lwz r7,2548(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2548);
loc_82167D14:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 ^ 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82167d50
	if (ctx.cr6.eq) goto loc_82167D50;
	// addi r6,r4,48
	ctx.r6.s64 = ctx.r4.s64 + 48;
	// mulli r6,r6,76
	ctx.r6.s64 = ctx.r6.s64 * 76;
	// lwzx r6,r6,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// subf r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82167d68
	if (!ctx.cr6.eq) goto loc_82167D68;
loc_82167D50:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,15
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 15, ctx.xer);
	// blt cr6,0x82167d14
	if (ctx.cr6.lt) goto loc_82167D14;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_82167D68:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82167D70"))) PPC_WEAK_FUNC(sub_82167D70);
PPC_FUNC_IMPL(__imp__sub_82167D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167dac
	if (ctx.cr6.eq) goto loc_82167DAC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82167DAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82167DAC:
	// addi r31,r30,6532
	ctx.r31.s64 = ctx.r30.s64 + 6532;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581100
	ctx.lr = 0x82167DBC;
	sub_82581100(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167dec
	if (ctx.cr6.eq) goto loc_82167DEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82615d60
	ctx.lr = 0x82167DD0;
	sub_82615D60(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82167dec
	if (ctx.cr6.eq) goto loc_82167DEC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82167DEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82167DEC:
	// addi r31,r30,6516
	ctx.r31.s64 = ctx.r30.s64 + 6516;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581100
	ctx.lr = 0x82167DFC;
	sub_82581100(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167e2c
	if (ctx.cr6.eq) goto loc_82167E2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82615d60
	ctx.lr = 0x82167E10;
	sub_82615D60(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82167e2c
	if (ctx.cr6.eq) goto loc_82167E2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82167E2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82167E2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82167E48"))) PPC_WEAK_FUNC(sub_82167E48);
PPC_FUNC_IMPL(__imp__sub_82167E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82167E74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,288(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 288);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82167E90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821884a0
	ctx.lr = 0x82167E98;
	sub_821884A0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82167EAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,288(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 288);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82167EC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82188660
	ctx.lr = 0x82167ED0;
	sub_82188660(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82167EE8"))) PPC_WEAK_FUNC(sub_82167EE8);
PPC_FUNC_IMPL(__imp__sub_82167EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167f48
	if (ctx.cr6.eq) goto loc_82167F48;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82167F1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,280(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82167F38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ori r5,r5,44048
	ctx.r5.u64 = ctx.r5.u64 | 44048;
	// bl 0x826df680
	ctx.lr = 0x82167F48;
	sub_826DF680(ctx, base);
loc_82167F48:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82167F60"))) PPC_WEAK_FUNC(sub_82167F60);
PPC_FUNC_IMPL(__imp__sub_82167F60) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82167ca0
	ctx.lr = 0x82167F7C;
	sub_82167CA0(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// beq cr6,0x82167fc8
	if (ctx.cr6.eq) goto loc_82167FC8;
	// lbz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167fb4
	if (ctx.cr6.eq) goto loc_82167FB4;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mulli r10,r3,76
	ctx.r10.s64 = ctx.r3.s64 * 76;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,3664(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3664);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,3664(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3664, ctx.r11.u32);
loc_82167FB4:
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
loc_82167FC8:
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

__attribute__((alias("__imp__sub_82167FE0"))) PPC_WEAK_FUNC(sub_82167FE0);
PPC_FUNC_IMPL(__imp__sub_82167FE0) {
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// bl 0x82167ca0
	ctx.lr = 0x82167FFC;
	sub_82167CA0(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// beq cr6,0x82168050
	if (ctx.cr6.eq) goto loc_82168050;
	// lbz r11,4464(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 4464);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82168034
	if (ctx.cr6.eq) goto loc_82168034;
	// mulli r11,r3,76
	ctx.r11.s64 = ctx.r3.s64 * 76;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,3652(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3652, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82168034:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82168050:
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

__attribute__((alias("__imp__sub_82168068"))) PPC_WEAK_FUNC(sub_82168068);
PPC_FUNC_IMPL(__imp__sub_82168068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82167ca0
	ctx.lr = 0x82168088;
	sub_82167CA0(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// beq cr6,0x821680b8
	if (ctx.cr6.eq) goto loc_821680B8;
	// addi r11,r3,291
	ctx.r11.s64 = ctx.r3.s64 + 291;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bl 0x82615d60
	ctx.lr = 0x821680A0;
	sub_82615D60(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821680B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821680B8:
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

__attribute__((alias("__imp__sub_821680D0"))) PPC_WEAK_FUNC(sub_821680D0);
PPC_FUNC_IMPL(__imp__sub_821680D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lbz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r3,5148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5148);
	// beq cr6,0x82168114
	if (ctx.cr6.eq) goto loc_82168114;
	// bl 0x82581360
	ctx.lr = 0x821680F8;
	sub_82581360(ctx, base);
	// lwz r3,5152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5152);
	// bl 0x82581360
	ctx.lr = 0x82168100;
	sub_82581360(ctx, base);
	// lwz r3,5156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5156);
	// bl 0x82581360
	ctx.lr = 0x82168108;
	sub_82581360(ctx, base);
	// lwz r3,5160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5160);
	// bl 0x82581360
	ctx.lr = 0x82168110;
	sub_82581360(ctx, base);
	// b 0x82168130
	goto loc_82168130;
loc_82168114:
	// bl 0x82581370
	ctx.lr = 0x82168118;
	sub_82581370(ctx, base);
	// lwz r3,5152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5152);
	// bl 0x82581370
	ctx.lr = 0x82168120;
	sub_82581370(ctx, base);
	// lwz r3,5156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5156);
	// bl 0x82581370
	ctx.lr = 0x82168128;
	sub_82581370(ctx, base);
	// lwz r3,5160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5160);
	// bl 0x82581370
	ctx.lr = 0x82168130;
	sub_82581370(ctx, base);
loc_82168130:
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

__attribute__((alias("__imp__sub_82168148"))) PPC_WEAK_FUNC(sub_82168148);
PPC_FUNC_IMPL(__imp__sub_82168148) {
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// bl 0x82167ca0
	ctx.lr = 0x82168164;
	sub_82167CA0(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// beq cr6,0x821681ac
	if (ctx.cr6.eq) goto loc_821681AC;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mulli r11,r3,76
	ctx.r11.s64 = ctx.r3.s64 * 76;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,5144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5144);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,3684(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 3684, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821681AC:
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

__attribute__((alias("__imp__sub_821681C0"))) PPC_WEAK_FUNC(sub_821681C0);
PPC_FUNC_IMPL(__imp__sub_821681C0) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82167ca0
	ctx.lr = 0x821681DC;
	sub_82167CA0(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// beq cr6,0x82168210
	if (ctx.cr6.eq) goto loc_82168210;
	// mulli r11,r3,76
	ctx.r11.s64 = ctx.r3.s64 * 76;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,3688(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3688, ctx.r10.u32);
	// lfs f0,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3692(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3692, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82168210:
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

__attribute__((alias("__imp__sub_82168228"))) PPC_WEAK_FUNC(sub_82168228);
PPC_FUNC_IMPL(__imp__sub_82168228) {
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// bl 0x82167ca0
	ctx.lr = 0x82168244;
	sub_82167CA0(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// beq cr6,0x82168264
	if (ctx.cr6.eq) goto loc_82168264;
	// mulli r11,r3,76
	ctx.r11.s64 = ctx.r3.s64 * 76;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r9,3664(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3664);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,3664(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3664, ctx.r10.u32);
loc_82168264:
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

__attribute__((alias("__imp__sub_82168278"))) PPC_WEAK_FUNC(sub_82168278);
PPC_FUNC_IMPL(__imp__sub_82168278) {
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
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// bl 0x82167ca0
	ctx.lr = 0x82168290;
	sub_82167CA0(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// beq cr6,0x821682c0
	if (ctx.cr6.eq) goto loc_821682C0;
	// mulli r11,r3,76
	ctx.r11.s64 = ctx.r3.s64 * 76;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,3696(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3696);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,3696(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3696, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821682C0:
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

__attribute__((alias("__imp__sub_821682D8"))) PPC_WEAK_FUNC(sub_821682D8);
PPC_FUNC_IMPL(__imp__sub_821682D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x821682E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r30,r3,4656
	ctx.r30.s64 = ctx.r3.s64 + 4656;
	// li r28,7
	ctx.r28.s64 = 7;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// ble cr6,0x8216837c
	if (!ctx.cr6.gt) goto loc_8216837C;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r26,4
	ctx.r26.s64 = 4;
	// stb r27,6476(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6476, ctx.r27.u8);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,6480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6480, ctx.r11.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r31,r11,45090
	ctx.r31.u64 = ctx.r11.u64 | 45090;
loc_82168318:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82581100
	ctx.lr = 0x82168324;
	sub_82581100(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82168360
	if (ctx.cr6.eq) goto loc_82168360;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stb r27,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r27.u8);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bl 0x82615d60
	ctx.lr = 0x82168348;
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
	ctx.lr = 0x82168360;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82168360:
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82168318
	if (!ctx.cr6.eq) goto loc_82168318;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_8216837C:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stb r29,6476(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6476, ctx.r29.u8);
	// li r27,4
	ctx.r27.s64 = 4;
	// stw r29,6480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6480, ctx.r29.u32);
	// ori r31,r11,45090
	ctx.r31.u64 = ctx.r11.u64 | 45090;
loc_82168390:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82581100
	ctx.lr = 0x8216839C;
	sub_82581100(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821683d8
	if (ctx.cr6.eq) goto loc_821683D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stb r29,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r29.u8);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// bl 0x82615d60
	ctx.lr = 0x821683C0;
	sub_82615D60(ctx, base);
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
	ctx.lr = 0x821683D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821683D8:
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82168390
	if (!ctx.cr6.eq) goto loc_82168390;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821683F8"))) PPC_WEAK_FUNC(sub_821683F8);
PPC_FUNC_IMPL(__imp__sub_821683F8) {
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// bl 0x82167ca0
	ctx.lr = 0x82168414;
	sub_82167CA0(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// beq cr6,0x82168440
	if (ctx.cr6.eq) goto loc_82168440;
	// mulli r11,r3,76
	ctx.r11.s64 = ctx.r3.s64 * 76;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,3656(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3656);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82168440:
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

__attribute__((alias("__imp__sub_82168458"))) PPC_WEAK_FUNC(sub_82168458);
PPC_FUNC_IMPL(__imp__sub_82168458) {
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// bl 0x82167ca0
	ctx.lr = 0x82168474;
	sub_82167CA0(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// beq cr6,0x821684a8
	if (ctx.cr6.eq) goto loc_821684A8;
	// mulli r11,r3,76
	ctx.r11.s64 = ctx.r3.s64 * 76;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,3656(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3656);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r10,3656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3656, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821684A8:
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

__attribute__((alias("__imp__sub_821684C0"))) PPC_WEAK_FUNC(sub_821684C0);
PPC_FUNC_IMPL(__imp__sub_821684C0) {
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
	// addi r31,r3,4656
	ctx.r31.s64 = ctx.r3.s64 + 4656;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581100
	ctx.lr = 0x821684E8;
	sub_82581100(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82168574
	if (ctx.cr6.eq) goto loc_82168574;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,45090
	ctx.r11.u64 = ctx.r11.u64 | 45090;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x82615d60
	ctx.lr = 0x82168520;
	sub_82615D60(ctx, base);
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
	ctx.lr = 0x82168538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// ori r11,r11,45100
	ctx.r11.u64 = ctx.r11.u64 | 45100;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82615d60
	ctx.lr = 0x82168554;
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
	ctx.lr = 0x8216856C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82168578
	goto loc_82168578;
loc_82168574:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82168578:
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

__attribute__((alias("__imp__sub_82168590"))) PPC_WEAK_FUNC(sub_82168590);
PPC_FUNC_IMPL(__imp__sub_82168590) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32079
	ctx.r9.s64 = -2102329344;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r8,3648
	ctx.r11.s64 = ctx.r8.s64 + 3648;
	// lwz r9,2548(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2548);
loc_821685A4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r7,r7,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r7.s64;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 ^ 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821685d8
	if (!ctx.cr6.eq) goto loc_821685D8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x821685a4
	if (!ctx.cr6.eq) goto loc_821685A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821685D8:
	// addi r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 + 48;
	// li r3,1
	ctx.r3.s64 = 1;
	// mulli r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 * 76;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821685F0"))) PPC_WEAK_FUNC(sub_821685F0);
PPC_FUNC_IMPL(__imp__sub_821685F0) {
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
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// bl 0x82167ca0
	ctx.lr = 0x82168608;
	sub_82167CA0(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// beq cr6,0x82168634
	if (ctx.cr6.eq) goto loc_82168634;
	// mulli r11,r3,76
	ctx.r11.s64 = ctx.r3.s64 * 76;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// li r10,100
	ctx.r10.s64 = 100;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,3700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3700, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82168634:
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

__attribute__((alias("__imp__sub_82168648"))) PPC_WEAK_FUNC(sub_82168648);
PPC_FUNC_IMPL(__imp__sub_82168648) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82167ca0
	ctx.lr = 0x82168668;
	sub_82167CA0(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// beq cr6,0x82168714
	if (ctx.cr6.eq) goto loc_82168714;
	// mulli r11,r3,76
	ctx.r11.s64 = ctx.r3.s64 * 76;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r9,3704(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3704);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821686fc
	if (ctx.cr6.eq) goto loc_821686FC;
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// addi r10,r3,291
	ctx.r10.s64 = ctx.r3.s64 + 291;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r6,r6,45090
	ctx.r6.u64 = ctx.r6.u64 | 45090;
	// add r31,r10,r7
	ctx.r31.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r9,3704(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3704, ctx.r9.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r6,19
	ctx.r6.s64 = 19;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// bl 0x82615d60
	ctx.lr = 0x821686D4;
	sub_82615D60(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82168714
	if (ctx.cr6.eq) goto loc_82168714;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82615d60
	ctx.lr = 0x821686E4;
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
	ctx.lr = 0x821686FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821686FC:
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
loc_82168714:
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

__attribute__((alias("__imp__sub_82168730"))) PPC_WEAK_FUNC(sub_82168730);
PPC_FUNC_IMPL(__imp__sub_82168730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,5076
	ctx.r31.s64 = ctx.r3.s64 + 5076;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581100
	ctx.lr = 0x82168758;
	sub_82581100(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216878c
	if (ctx.cr6.eq) goto loc_8216878C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82615d60
	ctx.lr = 0x8216876C;
	sub_82615D60(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82168784;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82168790
	goto loc_82168790;
loc_8216878C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82168790:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821687A8"))) PPC_WEAK_FUNC(sub_821687A8);
PPC_FUNC_IMPL(__imp__sub_821687A8) {
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
	// addi r30,r3,4656
	ctx.r30.s64 = ctx.r3.s64 + 4656;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825810c8
	ctx.lr = 0x821687CC;
	sub_825810C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82168860
	if (ctx.cr6.eq) goto loc_82168860;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r11,r11,45090
	ctx.r11.u64 = ctx.r11.u64 | 45090;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82615d60
	ctx.lr = 0x82168804;
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
	ctx.lr = 0x8216881C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,45105
	ctx.r11.u64 = ctx.r11.u64 | 45105;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82615d60
	ctx.lr = 0x82168848;
	sub_82615D60(ctx, base);
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
	ctx.lr = 0x82168860;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82168860:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82168880"))) PPC_WEAK_FUNC(sub_82168880);
PPC_FUNC_IMPL(__imp__sub_82168880) {
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
	// addi r30,r3,4656
	ctx.r30.s64 = ctx.r3.s64 + 4656;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825810c8
	ctx.lr = 0x821688A4;
	sub_825810C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821688f4
	if (ctx.cr6.eq) goto loc_821688F4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,45105
	ctx.r11.u64 = ctx.r11.u64 | 45105;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82615d60
	ctx.lr = 0x821688DC;
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
	ctx.lr = 0x821688F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821688F4:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82168910"))) PPC_WEAK_FUNC(sub_82168910);
PPC_FUNC_IMPL(__imp__sub_82168910) {
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
	// addi r31,r3,4656
	ctx.r31.s64 = ctx.r3.s64 + 4656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825810c8
	ctx.lr = 0x8216892C;
	sub_825810C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82168978
	if (ctx.cr6.eq) goto loc_82168978;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r10,18
	ctx.r10.s64 = 18;
	// ori r11,r11,45090
	ctx.r11.u64 = ctx.r11.u64 | 45090;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82615d60
	ctx.lr = 0x82168960;
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
	ctx.lr = 0x82168978;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82168978:
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

__attribute__((alias("__imp__sub_82168990"))) PPC_WEAK_FUNC(sub_82168990);
PPC_FUNC_IMPL(__imp__sub_82168990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x82168998;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,6488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6488);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821689bc
	if (!ctx.cr6.eq) goto loc_821689BC;
loc_821689B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_821689BC:
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,6512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6512);
	// beq cr6,0x82168ad8
	if (ctx.cr6.eq) goto loc_82168AD8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821689ec
	if (!ctx.cr6.gt) goto loc_821689EC;
	// lbz r10,5(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821689ec
	if (!ctx.cr6.eq) goto loc_821689EC;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,6512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6512, ctx.r11.u32);
	// bgt 0x821689b0
	if (ctx.cr0.gt) goto loc_821689B0;
loc_821689EC:
	// addi r30,r31,6496
	ctx.r30.s64 = ctx.r31.s64 + 6496;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825810c8
	ctx.lr = 0x821689F8;
	sub_825810C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82168a30
	if (ctx.cr6.eq) goto loc_82168A30;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r11,r11,45056
	ctx.r11.u64 = ctx.r11.u64 | 45056;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82615d60
	ctx.lr = 0x82168A18;
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
	ctx.lr = 0x82168A30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82168A30:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r11,r11,5060
	ctx.r11.s64 = ctx.r11.s64 + 5060;
	// addi r3,r31,4272
	ctx.r3.s64 = ctx.r31.s64 + 4272;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// lbz r11,5(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// stb r11,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r11.u8);
	// bl 0x82615d60
	ctx.lr = 0x82168A64;
	sub_82615D60(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8250a1c0
	ctx.lr = 0x82168A6C;
	sub_8250A1C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82581608
	ctx.lr = 0x82168A78;
	sub_82581608(ctx, base);
	// lbz r11,5(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82168ac8
	if (!ctx.cr6.eq) goto loc_82168AC8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82581100
	ctx.lr = 0x82168A90;
	sub_82581100(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82168ac8
	if (ctx.cr6.eq) goto loc_82168AC8;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r11,r11,45057
	ctx.r11.u64 = ctx.r11.u64 | 45057;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82615d60
	ctx.lr = 0x82168AB0;
	sub_82615D60(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82168AC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82168AC8:
	// stw r28,6512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6512, ctx.r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
loc_82168AD8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r31,6496
	ctx.r30.s64 = ctx.r31.s64 + 6496;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,6512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6512, ctx.r11.u32);
	// bl 0x825810c8
	ctx.lr = 0x82168AEC;
	sub_825810C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821689b0
	if (ctx.cr6.eq) goto loc_821689B0;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r11,r11,45056
	ctx.r11.u64 = ctx.r11.u64 | 45056;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82615d60
	ctx.lr = 0x82168B0C;
	sub_82615D60(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82168B24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82168B30"))) PPC_WEAK_FUNC(sub_82168B30);
PPC_FUNC_IMPL(__imp__sub_82168B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82168B38;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r29,6208
	ctx.r31.s64 = ctx.r29.s64 + 6208;
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82168bf4
	if (ctx.cr6.eq) goto loc_82168BF4;
	// bl 0x825810c8
	ctx.lr = 0x82168B5C;
	sub_825810C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82168b94
	if (ctx.cr6.eq) goto loc_82168B94;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,45056
	ctx.r11.u64 = ctx.r11.u64 | 45056;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82615d60
	ctx.lr = 0x82168B7C;
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
	ctx.lr = 0x82168B94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82168B94:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,5060
	ctx.r10.s64 = ctx.r10.s64 + 5060;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r9,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r9.u8);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x82168bbc
	if (ctx.cr6.eq) goto loc_82168BBC;
	// stb r10,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r10.u8);
loc_82168BBC:
	// addi r3,r29,4256
	ctx.r3.s64 = ctx.r29.s64 + 4256;
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stb r11,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r11.u8);
	// bl 0x82615d60
	ctx.lr = 0x82168BD4;
	sub_82615D60(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8250a1c0
	ctx.lr = 0x82168BDC;
	sub_8250A1C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581608
	ctx.lr = 0x82168BE8;
	sub_82581608(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82168BF4:
	// bl 0x825810c8
	ctx.lr = 0x82168BF8;
	sub_825810C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82168c10
	if (!ctx.cr6.eq) goto loc_82168C10;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82168C10:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,45057
	ctx.r11.u64 = ctx.r11.u64 | 45057;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82615d60
	ctx.lr = 0x82168C24;
	sub_82615D60(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82168C3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82168C48"))) PPC_WEAK_FUNC(sub_82168C48);
PPC_FUNC_IMPL(__imp__sub_82168C48) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r1,-128
	ctx.r10.s64 = ctx.r1.s64 + -128;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82168C58:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82168c58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82168C58;
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82168C7C:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82168c7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82168C7C;
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

__attribute__((alias("__imp__sub_82168D80"))) PPC_WEAK_FUNC(sub_82168D80);
PPC_FUNC_IMPL(__imp__sub_82168D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82168da8
	if (ctx.cr6.eq) goto loc_82168DA8;
	// bl 0x82659610
	ctx.lr = 0x82168DA8;
	sub_82659610(ctx, base);
loc_82168DA8:
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

__attribute__((alias("__imp__sub_82168DC0"))) PPC_WEAK_FUNC(sub_82168DC0);
PPC_FUNC_IMPL(__imp__sub_82168DC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82580f58
	sub_82580F58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82168DC8"))) PPC_WEAK_FUNC(sub_82168DC8);
PPC_FUNC_IMPL(__imp__sub_82168DC8) {
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
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82186158
	ctx.lr = 0x82168DDC;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82168df8
	if (ctx.cr6.eq) goto loc_82168DF8;
	// bl 0x825f2a58
	ctx.lr = 0x82168DE8;
	sub_825F2A58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82168DF8:
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

__attribute__((alias("__imp__sub_82168E10"))) PPC_WEAK_FUNC(sub_82168E10);
PPC_FUNC_IMPL(__imp__sub_82168E10) {
	PPC_FUNC_PROLOGUE();
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

__attribute__((alias("__imp__sub_82168E2C"))) PPC_WEAK_FUNC(sub_82168E2C);
PPC_FUNC_IMPL(__imp__sub_82168E2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82168E30"))) PPC_WEAK_FUNC(sub_82168E30);
PPC_FUNC_IMPL(__imp__sub_82168E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,8512
	ctx.r4.s64 = ctx.r11.s64 + 8512;
	// bl 0x826de850
	ctx.lr = 0x82168E54;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82168e68
	if (!ctx.cr6.eq) goto loc_82168E68;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82168E68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82168E80"))) PPC_WEAK_FUNC(sub_82168E80);
PPC_FUNC_IMPL(__imp__sub_82168E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,8712
	ctx.r4.s64 = ctx.r11.s64 + 8712;
	// bl 0x826de850
	ctx.lr = 0x82168EA4;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82168eb8
	if (!ctx.cr6.eq) goto loc_82168EB8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82168EB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82168ED0"))) PPC_WEAK_FUNC(sub_82168ED0);
PPC_FUNC_IMPL(__imp__sub_82168ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,8904
	ctx.r4.s64 = ctx.r11.s64 + 8904;
	// bl 0x826de850
	ctx.lr = 0x82168EF4;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82168f08
	if (!ctx.cr6.eq) goto loc_82168F08;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82168F08:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82168F20"))) PPC_WEAK_FUNC(sub_82168F20);
PPC_FUNC_IMPL(__imp__sub_82168F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,9112
	ctx.r4.s64 = ctx.r11.s64 + 9112;
	// bl 0x826de850
	ctx.lr = 0x82168F44;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82168f58
	if (!ctx.cr6.eq) goto loc_82168F58;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82168F58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82168F70"))) PPC_WEAK_FUNC(sub_82168F70);
PPC_FUNC_IMPL(__imp__sub_82168F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,9320
	ctx.r4.s64 = ctx.r11.s64 + 9320;
	// bl 0x826de850
	ctx.lr = 0x82168F94;
	sub_826DE850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82168fa8
	if (!ctx.cr6.eq) goto loc_82168FA8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82168FA8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82168FC0"))) PPC_WEAK_FUNC(sub_82168FC0);
PPC_FUNC_IMPL(__imp__sub_82168FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82168FC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r6,r11,9532
	ctx.r6.s64 = ctx.r11.s64 + 9532;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,9488
	ctx.r30.s64 = ctx.r11.s64 + 9488;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826df418
	ctx.lr = 0x82168FF8;
	sub_826DF418(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82169040
	if (!ctx.cr6.eq) goto loc_82169040;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,9444
	ctx.r6.s64 = ctx.r11.s64 + 9444;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826df418
	ctx.lr = 0x8216901C;
	sub_826DF418(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x82169044
	if (!ctx.cr6.eq) goto loc_82169044;
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// stb r10,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82169040:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82169044:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82169050"))) PPC_WEAK_FUNC(sub_82169050);
PPC_FUNC_IMPL(__imp__sub_82169050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x825f39c0
	ctx.lr = 0x82169068;
	sub_825F39C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,5444
	ctx.r11.s64 = ctx.r11.s64 + 5444;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// bl 0x82595090
	ctx.lr = 0x82169084;
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

__attribute__((alias("__imp__sub_821690A0"))) PPC_WEAK_FUNC(sub_821690A0);
PPC_FUNC_IMPL(__imp__sub_821690A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x825316f0
	ctx.lr = 0x821690C0;
	sub_825316F0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821690d8
	if (ctx.cr6.eq) goto loc_821690D8;
	// bl 0x82186190
	ctx.lr = 0x821690D4;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821690D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821690F0"))) PPC_WEAK_FUNC(sub_821690F0);
PPC_FUNC_IMPL(__imp__sub_821690F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,6592(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6592);
	// b 0x825f9e58
	sub_825F9E58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821690F8"))) PPC_WEAK_FUNC(sub_821690F8);
PPC_FUNC_IMPL(__imp__sub_821690F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,6588(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 6588);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82169120
	if (ctx.cr6.eq) goto loc_82169120;
	// bl 0x82659610
	ctx.lr = 0x82169120;
	sub_82659610(ctx, base);
loc_82169120:
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

__attribute__((alias("__imp__sub_82169138"))) PPC_WEAK_FUNC(sub_82169138);
PPC_FUNC_IMPL(__imp__sub_82169138) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,5108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5108);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82169140"))) PPC_WEAK_FUNC(sub_82169140);
PPC_FUNC_IMPL(__imp__sub_82169140) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,6484(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6484);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82169148"))) PPC_WEAK_FUNC(sub_82169148);
PPC_FUNC_IMPL(__imp__sub_82169148) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,667
	ctx.r11.s64 = ctx.r4.s64 + 667;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82169158"))) PPC_WEAK_FUNC(sub_82169158);
PPC_FUNC_IMPL(__imp__sub_82169158) {
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
	// lwz r3,4548(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4548);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216919c
	if (ctx.cr6.eq) goto loc_8216919C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216919c
	if (ctx.cr6.eq) goto loc_8216919C;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x821609d0
	ctx.lr = 0x8216918C;
	sub_821609D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8216919C:
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

__attribute__((alias("__imp__sub_821691B0"))) PPC_WEAK_FUNC(sub_821691B0);
PPC_FUNC_IMPL(__imp__sub_821691B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821691D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,33
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 33, ctx.xer);
	// beq cr6,0x82169200
	if (ctx.cr6.eq) goto loc_82169200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82167e48
	ctx.lr = 0x821691E8;
	sub_82167E48(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82169200;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82169200:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82169214;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x82169288
	if (ctx.cr6.gt) goto loc_82169288;
	// lis r12,-32233
	ctx.r12.s64 = -2112421888;
	// addi r12,r12,-28104
	ctx.r12.s64 = ctx.r12.s64 + -28104;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82169248;
	case 1:
		goto loc_82169254;
	case 2:
		goto loc_82169260;
	case 3:
		goto loc_8216926C;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-28088(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + -28088);
	// lwz r16,-28076(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + -28076);
	// lwz r16,-28064(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + -28064);
	// lwz r16,-28052(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + -28052);
loc_82169248:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,5508
	ctx.r4.s64 = ctx.r11.s64 + 5508;
	// b 0x82169274
	goto loc_82169274;
loc_82169254:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,5492
	ctx.r4.s64 = ctx.r11.s64 + 5492;
	// b 0x82169274
	goto loc_82169274;
loc_82169260:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,5476
	ctx.r4.s64 = ctx.r11.s64 + 5476;
	// b 0x82169274
	goto loc_82169274;
loc_8216926C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,5464
	ctx.r4.s64 = ctx.r11.s64 + 5464;
loc_82169274:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82169288;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82169288:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,9
	ctx.r11.s64 = 9;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r10,r10,0,11,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r10,r10,0,14,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_821692C8"))) PPC_WEAK_FUNC(sub_821692C8);
PPC_FUNC_IMPL(__imp__sub_821692C8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f0,5524(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stfs f0,4404(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4404, temp.u32);
	// lwz r3,4548(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4548);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821693ac
	if (ctx.cr6.eq) goto loc_821693AC;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821693ac
	if (ctx.cr6.eq) goto loc_821693AC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821609d0
	ctx.lr = 0x82169330;
	sub_821609D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821693ac
	if (ctx.cr6.eq) goto loc_821693AC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// ori r11,r11,12300
	ctx.r11.u64 = ctx.r11.u64 | 12300;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82169364;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821693ac
	if (ctx.cr6.eq) goto loc_821693AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82169158
	ctx.lr = 0x8216937C;
	sub_82169158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821693ac
	if (ctx.cr6.eq) goto loc_821693AC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// ori r11,r11,16393
	ctx.r11.u64 = ctx.r11.u64 | 16393;
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
	ctx.lr = 0x821693AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821693AC:
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

__attribute__((alias("__imp__sub_821693C8"))) PPC_WEAK_FUNC(sub_821693C8);
PPC_FUNC_IMPL(__imp__sub_821693C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x821693D0;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r30,r11,-4608
	ctx.r30.s64 = ctx.r11.s64 + -4608;
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addi r29,r11,-4576
	ctx.r29.s64 = ctx.r11.s64 + -4576;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r28,r27,4288
	ctx.r28.s64 = ctx.r27.s64 + 4288;
	// ori r31,r11,7
	ctx.r31.u64 = ctx.r11.u64 | 7;
loc_82169404:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,4548(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4548);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82169478
	if (ctx.cr6.eq) goto loc_82169478;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82169478
	if (ctx.cr6.eq) goto loc_82169478;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821609d0
	ctx.lr = 0x82169430;
	sub_821609D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82169478
	if (ctx.cr6.eq) goto loc_82169478;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lvx128 v0,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216946C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82169498
	if (!ctx.cr6.eq) goto loc_82169498;
loc_82169478:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// bne cr6,0x82169404
	if (!ctx.cr6.eq) goto loc_82169404;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_82169498:
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825d3bc8
	ctx.lr = 0x821694B8;
	sub_825D3BC8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825d2200
	ctx.lr = 0x821694C0;
	sub_825D2200(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x821694d0
	if (!ctx.cr6.gt) goto loc_821694D0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821694D0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821694E0"))) PPC_WEAK_FUNC(sub_821694E0);
PPC_FUNC_IMPL(__imp__sub_821694E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b8
	ctx.lr = 0x821694E8;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// rlwinm r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82169644
	if (!ctx.cr6.eq) goto loc_82169644;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// ori r10,r10,20532
	ctx.r10.u64 = ctx.r10.u64 | 20532;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r10.u8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82169528;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82169644
	if (ctx.cr6.eq) goto loc_82169644;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// addi r30,r26,4488
	ctx.r30.s64 = ctx.r26.s64 + 4488;
	// addi r31,r26,272
	ctx.r31.s64 = ctx.r26.s64 + 272;
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// li r24,15
	ctx.r24.s64 = 15;
	// lis r25,-32079
	ctx.r25.s64 = -2102329344;
	// stw r11,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r11.u32);
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r28,r11,-4608
	ctx.r28.s64 = ctx.r11.s64 + -4608;
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r27,r11,-4576
	ctx.r27.s64 = ctx.r11.s64 + -4576;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r29,r11,7
	ctx.r29.u64 = ctx.r11.u64 | 7;
loc_82169568:
	// addi r11,r31,-128
	ctx.r11.s64 = ctx.r31.s64 + -128;
	// addi r10,r31,-112
	ctx.r10.s64 = ctx.r31.s64 + -112;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,-16
	ctx.r12.s64 = -16;
	// stvx v0,r31,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,2548(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 2548);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82169630
	if (ctx.cr6.eq) goto loc_82169630;
	// lwz r3,4548(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4548);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82169630
	if (ctx.cr6.eq) goto loc_82169630;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82169630
	if (ctx.cr6.eq) goto loc_82169630;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821609d0
	ctx.lr = 0x821695CC;
	sub_821609D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82169630
	if (ctx.cr6.eq) goto loc_82169630;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v0,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82169608;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82169630
	if (ctx.cr6.eq) goto loc_82169630;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// li r12,-16
	ctx.r12.s64 = -16;
	// stvx v0,r31,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82169630:
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,240
	ctx.r31.s64 = ctx.r31.s64 + 240;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82169568
	if (!ctx.cr6.eq) goto loc_82169568;
loc_82169644:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82169650"))) PPC_WEAK_FUNC(sub_82169650);
PPC_FUNC_IMPL(__imp__sub_82169650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82169658;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x82167ca0
	ctx.lr = 0x8216966C;
	sub_82167CA0(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// beq cr6,0x82169720
	if (ctx.cr6.eq) goto loc_82169720;
	// mulli r11,r3,76
	ctx.r11.s64 = ctx.r3.s64 * 76;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r3,291
	ctx.r11.s64 = ctx.r3.s64 + 291;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f0,3672(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 3672);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3676(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3676, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82581100
	ctx.lr = 0x821696A4;
	sub_82581100(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82169720
	if (ctx.cr6.eq) goto loc_82169720;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lfs f0,3672(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 3672);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ori r11,r11,45090
	ctx.r11.u64 = ctx.r11.u64 | 45090;
	// stb r26,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r26.u8);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,45104
	ctx.r11.u64 = ctx.r11.u64 | 45104;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x82615d60
	ctx.lr = 0x821696E8;
	sub_82615D60(ctx, base);
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
	ctx.lr = 0x82169700;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82615d60
	ctx.lr = 0x82169708;
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
	ctx.lr = 0x82169720;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82169720:
	// lis r29,-32079
	ctx.r29.s64 = -2102329344;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,2548(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2548);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82169878
	if (ctx.cr6.eq) goto loc_82169878;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216975C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82185f00
	ctx.lr = 0x82169760;
	sub_82185F00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82169770
	if (ctx.cr6.eq) goto loc_82169770;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82169770:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821697e4
	if (ctx.cr6.eq) goto loc_821697E4;
	// addi r11,r31,144
	ctx.r11.s64 = ctx.r31.s64 + 144;
	// addi r9,r31,4488
	ctx.r9.s64 = ctx.r31.s64 + 4488;
	// li r8,15
	ctx.r8.s64 = 15;
loc_82169788:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,2548(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2548);
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821697c4
	if (ctx.cr6.eq) goto loc_821697C4;
	// addi r10,r27,16
	ctx.r10.s64 = ctx.r27.s64 + 16;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// addi r6,r10,16
	ctx.r6.s64 = ctx.r10.s64 + 16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_821697C4:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 + 240;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82169788
	if (!ctx.cr6.eq) goto loc_82169788;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_821697E4:
	// addi r10,r31,240
	ctx.r10.s64 = ctx.r31.s64 + 240;
	// li r11,15
	ctx.r11.s64 = 15;
loc_821697EC:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r28,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r28.u8);
	// addi r10,r10,240
	ctx.r10.s64 = ctx.r10.s64 + 240;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821697ec
	if (!ctx.cr6.eq) goto loc_821697EC;
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r10,r31,4488
	ctx.r10.s64 = ctx.r31.s64 + 4488;
loc_8216980C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82169840
	if (!ctx.cr6.eq) goto loc_82169840;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x8216980c
	if (!ctx.cr6.eq) goto loc_8216980C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_82169840:
	// mulli r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 * 240;
	// addi r10,r27,16
	ctx.r10.s64 = ctx.r27.s64 + 16;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// addi r9,r11,144
	ctx.r9.s64 = ctx.r11.s64 + 144;
	// li r3,1
	ctx.r3.s64 = 1;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r26,240(r11)
	PPC_STORE_U8(ctx.r11.u32 + 240, ctx.r26.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_82169878:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82169888"))) PPC_WEAK_FUNC(sub_82169888);
PPC_FUNC_IMPL(__imp__sub_82169888) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,4548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4548);
	// lwz r11,4288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4288);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x821698d0
	if (ctx.cr6.eq) goto loc_821698D0;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821698d0
	if (ctx.cr6.eq) goto loc_821698D0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821609d0
	ctx.lr = 0x821698CC;
	sub_821609D0(ctx, base);
	// b 0x821698d4
	goto loc_821698D4;
loc_821698D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821698D4:
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
	ctx.lr = 0x821698F0;
	sub_826DF418(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82169970
	if (ctx.cr6.eq) goto loc_82169970;
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,-4576
	ctx.r11.s64 = ctx.r11.s64 + -4576;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// ori r9,r9,16394
	ctx.r9.u64 = ctx.r9.u64 | 16394;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82169958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
loc_82169970:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82169988"))) PPC_WEAK_FUNC(sub_82169988);
PPC_FUNC_IMPL(__imp__sub_82169988) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,80(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// bge cr6,0x82169a04
	if (!ctx.cr6.lt) goto loc_82169A04;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// mulli r9,r9,240
	ctx.r9.s64 = ctx.r9.s64 * 240;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r6,r10,16
	ctx.r6.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,176
	ctx.r9.s64 = ctx.r9.s64 + 176;
	// addi r8,r4,48
	ctx.r8.s64 = ctx.r4.s64 + 48;
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
	// addi r7,r4,64
	ctx.r7.s64 = ctx.r4.s64 + 64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,80(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mulli r10,r10,240
	ctx.r10.s64 = ctx.r10.s64 * 240;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,208
	ctx.r10.s64 = ctx.r10.s64 + 208;
	// stvx v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,80(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// lvx128 v0,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mulli r10,r10,240
	ctx.r10.s64 = ctx.r10.s64 * 240;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
loc_82169A04:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82169A10"))) PPC_WEAK_FUNC(sub_82169A10);
PPC_FUNC_IMPL(__imp__sub_82169A10) {
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// bl 0x82167ca0
	ctx.lr = 0x82169A2C;
	sub_82167CA0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82169a98
	if (!ctx.cr6.eq) goto loc_82169A98;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r11,r7,16
	ctx.r11.s64 = ctx.r7.s64 + 16;
	// ori r10,r10,51201
	ctx.r10.u64 = ctx.r10.u64 | 51201;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lwz r11,6488(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6488);
	// stvx v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq cr6,0x82169a98
	if (ctx.cr6.eq) goto loc_82169A98;
	// lwz r11,6488(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6488);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82169A88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82169A98:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82169AB0"))) PPC_WEAK_FUNC(sub_82169AB0);
PPC_FUNC_IMPL(__imp__sub_82169AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82169AB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r29,3648
	ctx.r31.s64 = ctx.r29.s64 + 3648;
	// lis r28,-32079
	ctx.r28.s64 = -2102329344;
loc_82169AD0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,2548(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2548);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82169b20
	if (ctx.cr6.eq) goto loc_82169B20;
	// lwz r3,4548(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4548);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82169b20
	if (ctx.cr6.eq) goto loc_82169B20;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82169b20
	if (ctx.cr6.eq) goto loc_82169B20;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821609d0
	ctx.lr = 0x82169B18;
	sub_821609D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82169b3c
	if (!ctx.cr6.eq) goto loc_82169B3C;
loc_82169B20:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,76
	ctx.r31.s64 = ctx.r31.s64 + 76;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// bne cr6,0x82169ad0
	if (!ctx.cr6.eq) goto loc_82169AD0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_82169B3C:
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82169B54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82169B60"))) PPC_WEAK_FUNC(sub_82169B60);
PPC_FUNC_IMPL(__imp__sub_82169B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x82169B68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x82169c0c
	if (!ctx.cr6.lt) goto loc_82169C0C;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r10,7,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82169c0c
	if (!ctx.cr6.eq) goto loc_82169C0C;
	// addi r10,r11,1122
	ctx.r10.s64 = ctx.r11.s64 + 1122;
	// lis r30,-32079
	ctx.r30.s64 = -2102329344;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,2548(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2548);
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82169c0c
	if (!ctx.cr6.eq) goto loc_82169C0C;
	// mulli r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 * 240;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 240);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82169c0c
	if (!ctx.cr6.eq) goto loc_82169C0C;
	// lbz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82169c0c
	if (!ctx.cr6.eq) goto loc_82169C0C;
	// rotlwi r4,r8,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// bl 0x82169158
	ctx.lr = 0x82169BE0;
	sub_82169158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82169c0c
	if (ctx.cr6.eq) goto loc_82169C0C;
	// bl 0x825813a0
	ctx.lr = 0x82169BEC;
	sub_825813A0(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,2548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2548);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r10,1122
	ctx.r10.s64 = ctx.r10.s64 + 1122;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_82169C0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82169C18"))) PPC_WEAK_FUNC(sub_82169C18);
PPC_FUNC_IMPL(__imp__sub_82169C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x82169C20;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,4964
	ctx.r29.s64 = ctx.r11.s64 + 4964;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,5432
	ctx.r28.s64 = ctx.r11.s64 + 5432;
loc_82169C40:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82169C58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
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
	ctx.lr = 0x82169C74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82169c9c
	if (ctx.cr6.eq) goto loc_82169C9C;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// bl 0x82586640
	ctx.lr = 0x82169C98;
	sub_82586640(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
loc_82169C9C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// bne cr6,0x82169c40
	if (!ctx.cr6.eq) goto loc_82169C40;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82169CB0"))) PPC_WEAK_FUNC(sub_82169CB0);
PPC_FUNC_IMPL(__imp__sub_82169CB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82169cc4
	if (!ctx.cr6.eq) goto loc_82169CC4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82169CC4:
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r3,r11,23904
	ctx.r3.s64 = ctx.r11.s64 + 23904;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82169CD0"))) PPC_WEAK_FUNC(sub_82169CD0);
PPC_FUNC_IMPL(__imp__sub_82169CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x82169CD8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82169d08
	if (!ctx.cr6.eq) goto loc_82169D08;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82169d08
	if (ctx.cr6.gt) goto loc_82169D08;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_82169D08:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82169dd0
	if (!ctx.cr6.lt) goto loc_82169DD0;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82169dd0
	if (ctx.cr6.gt) goto loc_82169DD0;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// addi r26,r27,4
	ctx.r26.s64 = ctx.r27.s64 + 4;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82169d40
	if (ctx.cr6.lt) goto loc_82169D40;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// b 0x82169d44
	goto loc_82169D44;
loc_82169D40:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82169D44:
	// add r31,r11,r5
	ctx.r31.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826dfca0
	ctx.lr = 0x82169D5C;
	sub_826DFCA0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82169dd0
	if (ctx.cr6.eq) goto loc_82169DD0;
loc_82169D64:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82169d9c
	if (ctx.cr6.eq) goto loc_82169D9C;
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_82169D7C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82169d9c
	if (!ctx.cr0.eq) goto loc_82169D9C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82169d7c
	if (!ctx.cr6.eq) goto loc_82169D7C;
loc_82169D9C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82169ddc
	if (ctx.cr6.eq) goto loc_82169DDC;
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x826dfca0
	ctx.lr = 0x82169DC8;
	sub_826DFCA0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82169d64
	if (!ctx.cr6.eq) goto loc_82169D64;
loc_82169DD0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_82169DDC:
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82169df8
	if (ctx.cr6.lt) goto loc_82169DF8;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
loc_82169DF8:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82169E08"))) PPC_WEAK_FUNC(sub_82169E08);
PPC_FUNC_IMPL(__imp__sub_82169E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8bc
	ctx.lr = 0x82169E10;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// bne cr6,0x82169e44
	if (!ctx.cr6.eq) goto loc_82169E44;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82169e38
	if (!ctx.cr6.lt) goto loc_82169E38;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82169E38:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_82169E44:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82169f20
	if (ctx.cr6.gt) goto loc_82169F20;
	// lwz r25,24(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// addi r26,r28,4
	ctx.r26.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r25,16
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 16, ctx.xer);
	// blt cr6,0x82169e64
	if (ctx.cr6.lt) goto loc_82169E64;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// b 0x82169e68
	goto loc_82169E68;
loc_82169E64:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_82169E68:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82169e78
	if (!ctx.cr6.lt) goto loc_82169E78;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82169E78:
	// lbz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsb r27,r9
	ctx.r27.s64 = ctx.r9.s8;
loc_82169E84:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// subf r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82169ee0
	if (ctx.cr6.eq) goto loc_82169EE0;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82169ed8
	if (ctx.cr6.eq) goto loc_82169ED8;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82169EB8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82169ed8
	if (!ctx.cr0.eq) goto loc_82169ED8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82169eb8
	if (!ctx.cr6.eq) goto loc_82169EB8;
loc_82169ED8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82169ef8
	if (ctx.cr6.eq) goto loc_82169EF8;
loc_82169EE0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82160c88
	ctx.lr = 0x82169EE8;
	sub_82160C88(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82169f20
	if (ctx.cr6.eq) goto loc_82169F20;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// b 0x82169e84
	goto loc_82169E84;
loc_82169EF8:
	// cmplwi cr6,r25,16
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 16, ctx.xer);
	// blt cr6,0x82169f10
	if (ctx.cr6.lt) goto loc_82169F10;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// subf r3,r11,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r11.s64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_82169F10:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// subf r3,r11,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r11.s64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
loc_82169F20:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de90c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82169F30"))) PPC_WEAK_FUNC(sub_82169F30);
PPC_FUNC_IMPL(__imp__sub_82169F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r10,26584(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26584);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// bne cr6,0x82169f90
	if (!ctx.cr6.eq) goto loc_82169F90;
	// addi r31,r11,26400
	ctx.r31.s64 = ctx.r11.s64 + 26400;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,26584(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26584, ctx.r11.u32);
	// bl 0x825d38a8
	ctx.lr = 0x82169F6C;
	sub_825D38A8(ctx, base);
	// lis r11,-32082
	ctx.r11.s64 = -2102525952;
	// addi r3,r11,31840
	ctx.r3.s64 = ctx.r11.s64 + 31840;
	// bl 0x826ded00
	ctx.lr = 0x82169F78;
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
loc_82169F90:
	// addi r3,r11,26400
	ctx.r3.s64 = ctx.r11.s64 + 26400;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82169FA8"))) PPC_WEAK_FUNC(sub_82169FA8);
PPC_FUNC_IMPL(__imp__sub_82169FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r10,26620(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26620);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// bne cr6,0x8216a008
	if (!ctx.cr6.eq) goto loc_8216A008;
	// addi r31,r11,26588
	ctx.r31.s64 = ctx.r11.s64 + 26588;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,26620(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26620, ctx.r11.u32);
	// bl 0x825fa248
	ctx.lr = 0x82169FE4;
	sub_825FA248(ctx, base);
	// lis r11,-32082
	ctx.r11.s64 = -2102525952;
	// addi r3,r11,31824
	ctx.r3.s64 = ctx.r11.s64 + 31824;
	// bl 0x826ded00
	ctx.lr = 0x82169FF0;
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
loc_8216A008:
	// addi r3,r11,26588
	ctx.r3.s64 = ctx.r11.s64 + 26588;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216A020"))) PPC_WEAK_FUNC(sub_8216A020);
PPC_FUNC_IMPL(__imp__sub_8216A020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8216a04c
	if (ctx.cr6.eq) goto loc_8216A04C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82160140
	ctx.lr = 0x8216A04C;
	sub_82160140(ctx, base);
loc_8216A04C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216a05c
	if (ctx.cr6.eq) goto loc_8216A05C;
	// bl 0x821601b8
	ctx.lr = 0x8216A05C;
	sub_821601B8(ctx, base);
loc_8216A05C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216A080"))) PPC_WEAK_FUNC(sub_8216A080);
PPC_FUNC_IMPL(__imp__sub_8216A080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8216A088;
	__savegprlr_27(ctx, base);
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
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8216a0b0
	if (!ctx.cr6.lt) goto loc_8216A0B0;
	// bl 0x8257fca8
	ctx.lr = 0x8216A0B0;
	sub_8257FCA8(ctx, base);
loc_8216A0B0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x8216a0c4
	if (!ctx.cr6.lt) goto loc_8216A0C4;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_8216A0C4:
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// blt cr6,0x8216a0d4
	if (ctx.cr6.lt) goto loc_8216A0D4;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
loc_8216A0D4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8216a0e8
	if (ctx.cr6.lt) goto loc_8216A0E8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x8216a0ec
	goto loc_8216A0EC;
loc_8216A0E8:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_8216A0EC:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8216a124
	if (ctx.cr6.eq) goto loc_8216A124;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8216A104:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r3,r7,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8216a124
	if (!ctx.cr0.eq) goto loc_8216A124;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8216a104
	if (!ctx.cr6.eq) goto loc_8216A104;
loc_8216A124:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8216a150
	if (!ctx.cr6.eq) goto loc_8216A150;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x8216a140
	if (!ctx.cr6.lt) goto loc_8216A140;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
loc_8216A140:
	// subf r11,r28,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r28.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_8216A150:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216A158"))) PPC_WEAK_FUNC(sub_8216A158);
PPC_FUNC_IMPL(__imp__sub_8216A158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r6,r11,9740
	ctx.r6.s64 = ctx.r11.s64 + 9740;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,6088
	ctx.r5.s64 = ctx.r11.s64 + 6088;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826df418
	ctx.lr = 0x8216A18C;
	sub_826DF418(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x8216a19c
	if (ctx.cr6.eq) goto loc_8216A19C;
	// bl 0x82659610
	ctx.lr = 0x8216A19C;
	sub_82659610(ctx, base);
loc_8216A19C:
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

__attribute__((alias("__imp__sub_8216A1B8"))) PPC_WEAK_FUNC(sub_8216A1B8);
PPC_FUNC_IMPL(__imp__sub_8216A1B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// twllei r8,0
	// divwu r9,r11,r8
	ctx.r9.u32 = ctx.r11.u32 / ctx.r8.u32;
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216a200
	if (ctx.cr6.eq) goto loc_8216A200;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8216A200:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216A210"))) PPC_WEAK_FUNC(sub_8216A210);
PPC_FUNC_IMPL(__imp__sub_8216A210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r6,r11,9908
	ctx.r6.s64 = ctx.r11.s64 + 9908;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,6088
	ctx.r5.s64 = ctx.r11.s64 + 6088;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826df418
	ctx.lr = 0x8216A244;
	sub_826DF418(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x8216a254
	if (ctx.cr6.eq) goto loc_8216A254;
	// bl 0x82659610
	ctx.lr = 0x8216A254;
	sub_82659610(ctx, base);
loc_8216A254:
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

__attribute__((alias("__imp__sub_8216A270"))) PPC_WEAK_FUNC(sub_8216A270);
PPC_FUNC_IMPL(__imp__sub_8216A270) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216a2cc
	if (!ctx.cr6.eq) goto loc_8216A2CC;
loc_8216A284:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216a2b8
	if (ctx.cr6.eq) goto loc_8216A2B8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// twllei r10,0
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// divwu r9,r11,r10
	ctx.r9.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_8216A2B8:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216a284
	if (ctx.cr6.eq) goto loc_8216A284;
loc_8216A2CC:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82186190
	sub_82186190(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216A2D8"))) PPC_WEAK_FUNC(sub_8216A2D8);
PPC_FUNC_IMPL(__imp__sub_8216A2D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x8216a388
	sub_8216A388(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216A2E0"))) PPC_WEAK_FUNC(sub_8216A2E0);
PPC_FUNC_IMPL(__imp__sub_8216A2E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c8
	ctx.lr = 0x8216A2E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,2
	ctx.r29.s64 = 2;
	// addi r11,r28,32
	ctx.r11.s64 = ctx.r28.s64 + 32;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
loc_8216A2FC:
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8216a364
	if (ctx.cr6.eq) goto loc_8216A364;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq 0x8216a32c
	if (ctx.cr0.eq) goto loc_8216A32C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8216a364
	goto loc_8216A364;
loc_8216A32C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216A340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne 0x8216a364
	if (!ctx.cr0.eq) goto loc_8216A364;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216A364;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216A364:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x8216a2fc
	if (!ctx.cr6.lt) goto loc_8216A2FC;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216a380
	if (ctx.cr6.eq) goto loc_8216A380;
	// bl 0x821601b8
	ctx.lr = 0x8216A380;
	sub_821601B8(ctx, base);
loc_8216A380:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de918
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216A388"))) PPC_WEAK_FUNC(sub_8216A388);
PPC_FUNC_IMPL(__imp__sub_8216A388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216a3b8
	if (ctx.cr6.eq) goto loc_8216A3B8;
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8216A3B8:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216a3cc
	if (ctx.cr6.eq) goto loc_8216A3CC;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8216A3CC:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216a3e0
	if (ctx.cr6.eq) goto loc_8216A3E0;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8216A3E0:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216a3f4
	if (ctx.cr6.eq) goto loc_8216A3F4;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8216A3F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82581670
	ctx.lr = 0x8216A3FC;
	sub_82581670(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216a414
	if (ctx.cr6.eq) goto loc_8216A414;
	// bl 0x82186190
	ctx.lr = 0x8216A410;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8216A414:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216A430"))) PPC_WEAK_FUNC(sub_8216A430);
PPC_FUNC_IMPL(__imp__sub_8216A430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x8216a470
	if (ctx.cr6.eq) goto loc_8216A470;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8216A470:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821602f0
	ctx.lr = 0x8216A47C;
	sub_821602F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,5572
	ctx.r11.s64 = ctx.r11.s64 + 5572;
	// addi r10,r10,5560
	ctx.r10.s64 = ctx.r10.s64 + 5560;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216a4c0
	if (ctx.cr6.eq) goto loc_8216A4C0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne 0x8216a4c0
	if (!ctx.cr0.eq) goto loc_8216A4C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216A4C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216A4C0:
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

__attribute__((alias("__imp__sub_8216A4E0"))) PPC_WEAK_FUNC(sub_8216A4E0);
PPC_FUNC_IMPL(__imp__sub_8216A4E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x8216a4f8
	sub_8216A4F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216A4E8"))) PPC_WEAK_FUNC(sub_8216A4E8);
PPC_FUNC_IMPL(__imp__sub_8216A4E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,5064
	ctx.r3.s64 = ctx.r11.s64 + 5064;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216A4F8"))) PPC_WEAK_FUNC(sub_8216A4F8);
PPC_FUNC_IMPL(__imp__sub_8216A4F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82160560
	ctx.lr = 0x8216A518;
	sub_82160560(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216a530
	if (ctx.cr6.eq) goto loc_8216A530;
	// bl 0x82186190
	ctx.lr = 0x8216A52C;
	sub_82186190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8216A530:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216A548"))) PPC_WEAK_FUNC(sub_8216A548);
PPC_FUNC_IMPL(__imp__sub_8216A548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8216A550;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,4465(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4465);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216a650
	if (ctx.cr6.eq) goto loc_8216A650;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,5908(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5908);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r29,5908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5908, ctx.r29.u32);
	// beq cr6,0x8216a58c
	if (ctx.cr6.eq) goto loc_8216A58C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216A58C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216A58C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216A5A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82185f00
	ctx.lr = 0x8216A5A4;
	sub_82185F00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216a5d8
	if (ctx.cr6.eq) goto loc_8216A5D8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216A5C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216A5D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216A5D8:
	// addi r30,r31,4272
	ctx.r30.s64 = ctx.r31.s64 + 4272;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82581100
	ctx.lr = 0x8216A5E8;
	sub_82581100(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216a600
	if (ctx.cr6.eq) goto loc_8216A600;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82615d60
	ctx.lr = 0x8216A5FC;
	sub_82615D60(ctx, base);
	// bl 0x825812c8
	ctx.lr = 0x8216A600;
	sub_825812C8(ctx, base);
loc_8216A600:
	// addi r30,r31,4256
	ctx.r30.s64 = ctx.r31.s64 + 4256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82581100
	ctx.lr = 0x8216A610;
	sub_82581100(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216a628
	if (ctx.cr6.eq) goto loc_8216A628;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82615d60
	ctx.lr = 0x8216A624;
	sub_82615D60(ctx, base);
	// bl 0x825812c8
	ctx.lr = 0x8216A628;
	sub_825812C8(ctx, base);
loc_8216A628:
	// lwz r3,4304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4304);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216a64c
	if (ctx.cr6.eq) goto loc_8216A64C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216A648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,4304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4304, ctx.r29.u32);
loc_8216A64C:
	// stb r29,4465(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4465, ctx.r29.u8);
loc_8216A650:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216A658"))) PPC_WEAK_FUNC(sub_8216A658);
PPC_FUNC_IMPL(__imp__sub_8216A658) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,5012(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5012);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216a678
	if (ctx.cr6.eq) goto loc_8216A678;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8216A678:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216A680"))) PPC_WEAK_FUNC(sub_8216A680);
PPC_FUNC_IMPL(__imp__sub_8216A680) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4720(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4720);
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
	// b 0x824583a8
	sub_824583A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216A6A0"))) PPC_WEAK_FUNC(sub_8216A6A0);
PPC_FUNC_IMPL(__imp__sub_8216A6A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216A6A8"))) PPC_WEAK_FUNC(sub_8216A6A8);
PPC_FUNC_IMPL(__imp__sub_8216A6A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c4
	ctx.lr = 0x8216A6B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// li r3,2592
	ctx.r3.s64 = 2592;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bl 0x82186158
	ctx.lr = 0x8216A6CC;
	sub_82186158(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8216a748
	if (ctx.cr6.eq) goto loc_8216A748;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216A6EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216A704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216A720;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216A730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825fbec8
	ctx.lr = 0x8216A740;
	sub_825FBEC8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8216a74c
	goto loc_8216A74C;
loc_8216A748:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8216A74C:
	// lwz r3,6484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6484);
	// stw r11,6484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6484, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216a770
	if (ctx.cr6.eq) goto loc_8216A770;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216A770;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216A770:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8216a78c
	if (ctx.cr6.eq) goto loc_8216A78C;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216a78c
	if (ctx.cr6.eq) goto loc_8216A78C;
	// bl 0x821601b8
	ctx.lr = 0x8216A78C;
	sub_821601B8(ctx, base);
loc_8216A78C:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82186158
	ctx.lr = 0x8216A794;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216a7a8
	if (ctx.cr6.eq) goto loc_8216A7A8;
	// bl 0x825f9ee8
	ctx.lr = 0x8216A7A0;
	sub_825F9EE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8216a7ac
	goto loc_8216A7AC;
loc_8216A7A8:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8216A7AC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8216a7bc
	if (ctx.cr6.eq) goto loc_8216A7BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x8216A7BC;
	sub_82659610(ctx, base);
loc_8216A7BC:
	// lwz r3,6592(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6592);
	// stw r30,6592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6592, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216a7d0
	if (ctx.cr6.eq) goto loc_8216A7D0;
	// bl 0x82581e38
	ctx.lr = 0x8216A7D0;
	sub_82581E38(ctx, base);
loc_8216A7D0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82586f48
	ctx.lr = 0x8216A7D8;
	sub_82586F48(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,12
	ctx.r3.s64 = 12;
	// lfs f0,14096(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14096);
	ctx.f0.f64 = double(temp.f32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5584(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5584);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82186158
	ctx.lr = 0x8216A800;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216a888
	if (ctx.cr6.eq) goto loc_8216A888;
	// lwz r4,6484(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6484);
	// bl 0x825fb610
	ctx.lr = 0x8216A810;
	sub_825FB610(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8216a820
	if (ctx.cr6.eq) goto loc_8216A820;
	// bl 0x82659610
	ctx.lr = 0x8216A820;
	sub_82659610(ctx, base);
loc_8216A820:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216a834
	if (ctx.cr6.eq) goto loc_8216A834;
	// bl 0x82581e38
	ctx.lr = 0x8216A834;
	sub_82581E38(ctx, base);
loc_8216A834:
	// lwz r30,6592(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6592);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8216a848
	if (ctx.cr6.eq) goto loc_8216A848;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x8216A848;
	sub_82659610(ctx, base);
loc_8216A848:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216a85c
	if (ctx.cr6.eq) goto loc_8216A85C;
	// bl 0x82581e38
	ctx.lr = 0x8216A85C;
	sub_82581E38(ctx, base);
loc_8216A85C:
	// li r3,36
	ctx.r3.s64 = 36;
	// stb r27,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r27.u8);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// bl 0x82186158
	ctx.lr = 0x8216A870;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216a890
	if (ctx.cr6.eq) goto loc_8216A890;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82588a10
	ctx.lr = 0x8216A880;
	sub_82588A10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8216a894
	goto loc_8216A894;
loc_8216A888:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x8216a820
	goto loc_8216A820;
loc_8216A890:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8216A894:
	// addi r29,r31,6588
	ctx.r29.s64 = ctx.r31.s64 + 6588;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8216a8a8
	if (ctx.cr6.eq) goto loc_8216A8A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x8216A8A8;
	sub_82659610(ctx, base);
loc_8216A8A8:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216a8bc
	if (ctx.cr6.eq) goto loc_8216A8BC;
	// bl 0x82581e38
	ctx.lr = 0x8216A8BC;
	sub_82581E38(ctx, base);
loc_8216A8BC:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216a8cc
	if (ctx.cr6.eq) goto loc_8216A8CC;
	// bl 0x82581e38
	ctx.lr = 0x8216A8CC;
	sub_82581E38(ctx, base);
loc_8216A8CC:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216a8dc
	if (ctx.cr6.eq) goto loc_8216A8DC;
	// bl 0x82581e38
	ctx.lr = 0x8216A8DC;
	sub_82581E38(ctx, base);
loc_8216A8DC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216a970
	if (ctx.cr6.eq) goto loc_8216A970;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216a970
	if (ctx.cr6.eq) goto loc_8216A970;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x82186158
	ctx.lr = 0x8216A900;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216a914
	if (ctx.cr6.eq) goto loc_8216A914;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x825fb478
	ctx.lr = 0x8216A910;
	sub_825FB478(ctx, base);
	// b 0x8216a918
	goto loc_8216A918;
loc_8216A914:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8216A918:
	// lwz r11,5416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5416);
	// stw r3,5416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5416, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216a940
	if (ctx.cr6.eq) goto loc_8216A940;
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
	ctx.lr = 0x8216A940;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216A940:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,5416(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5416);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216A958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216A968;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82586c80
	ctx.lr = 0x8216A970;
	sub_82586C80(ctx, base);
loc_8216A970:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826de914
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216A978"))) PPC_WEAK_FUNC(sub_8216A978);
PPC_FUNC_IMPL(__imp__sub_8216A978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8b8
	ctx.lr = 0x8216A980;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x82186158
	ctx.lr = 0x8216A990;
	sub_82186158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216ab34
	if (ctx.cr6.eq) goto loc_8216AB34;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,5164(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5164);
	// bl 0x82189ca0
	ctx.lr = 0x8216A9A4;
	sub_82189CA0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216ab34
	if (ctx.cr6.eq) goto loc_8216AB34;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r24,0
	ctx.r24.s64 = 0;
	// ori r11,r11,16400
	ctx.r11.u64 = ctx.r11.u64 | 16400;
	// addi r25,r3,32
	ctx.r25.s64 = ctx.r3.s64 + 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216A9DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216ab24
	if (ctx.cr6.eq) goto loc_8216AB24;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216aae8
	if (ctx.cr6.eq) goto loc_8216AAE8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216aae8
	if (ctx.cr6.eq) goto loc_8216AAE8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r28,r26,4568
	ctx.r28.s64 = ctx.r26.s64 + 4568;
	// addi r29,r11,4632
	ctx.r29.s64 = ctx.r11.s64 + 4632;
	// li r27,10
	ctx.r27.s64 = 10;
loc_8216AA14:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216aa34
	if (ctx.cr6.eq) goto loc_8216AA34;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216aa38
	if (!ctx.cr6.eq) goto loc_8216AA38;
loc_8216AA34:
	// twi 31,r0,22
loc_8216AA38:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216aa5c
	if (ctx.cr6.eq) goto loc_8216AA5C;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8216aa60
	if (ctx.cr6.lt) goto loc_8216AA60;
loc_8216AA5C:
	// twi 31,r0,22
loc_8216AA60:
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8216aa80
	if (ctx.cr6.eq) goto loc_8216AA80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82160140
	ctx.lr = 0x8216AA80;
	sub_82160140(ctx, base);
loc_8216AA80:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8216aac8
	if (ctx.cr6.eq) goto loc_8216AAC8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216aac8
	if (ctx.cr6.eq) goto loc_8216AAC8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216AAB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216AAC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216AAC8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8216aad8
	if (ctx.cr6.eq) goto loc_8216AAD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821601b8
	ctx.lr = 0x8216AAD8;
	sub_821601B8(ctx, base);
loc_8216AAD8:
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8216aa14
	if (!ctx.cr6.eq) goto loc_8216AA14;
loc_8216AAE8:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r10,r10,16391
	ctx.r10.u64 = ctx.r10.u64 | 16391;
	// rlwinm r11,r11,21,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r10,4488(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4488);
	// stb r11,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r11.u8);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216AB24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216AB24:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216ab34
	if (ctx.cr6.eq) goto loc_8216AB34;
	// bl 0x82581e38
	ctx.lr = 0x8216AB34;
	sub_82581E38(ctx, base);
loc_8216AB34:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826de908
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216AB40"))) PPC_WEAK_FUNC(sub_8216AB40);
PPC_FUNC_IMPL(__imp__sub_8216AB40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8c0
	ctx.lr = 0x8216AB48;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
loc_8216AB54:
	// lwz r11,4572(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4572);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216ab6c
	if (ctx.cr6.eq) goto loc_8216AB6C;
	// lwz r10,4576(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4576);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
loc_8216AB6C:
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8216b1c4
	if (ctx.cr6.eq) goto loc_8216B1C4;
	// lwz r11,4572(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4572);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216ab94
	if (ctx.cr6.eq) goto loc_8216AB94;
	// lwz r10,4576(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4576);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8216ab98
	if (ctx.cr6.lt) goto loc_8216AB98;
loc_8216AB94:
	// twi 31,r0,22
loc_8216AB98:
	// rlwinm r10,r27,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8216abc0
	if (ctx.cr6.eq) goto loc_8216ABC0;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216abc4
	if (!ctx.cr6.eq) goto loc_8216ABC4;
loc_8216ABC0:
	// twi 31,r0,22
loc_8216ABC4:
	// addi r28,r26,4584
	ctx.r28.s64 = ctx.r26.s64 + 4584;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216abe8
	if (ctx.cr6.eq) goto loc_8216ABE8;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8216abec
	if (!ctx.cr6.eq) goto loc_8216ABEC;
loc_8216ABE8:
	// twi 31,r0,22
loc_8216ABEC:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216AC00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216ac20
	if (ctx.cr6.eq) goto loc_8216AC20;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bgt cr6,0x8216ac24
	if (ctx.cr6.gt) goto loc_8216AC24;
loc_8216AC20:
	// twi 31,r0,22
loc_8216AC24:
	// addi r4,r11,88
	ctx.r4.s64 = ctx.r11.s64 + 88;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216ac48
	if (ctx.cr6.eq) goto loc_8216AC48;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8216ac4c
	if (!ctx.cr6.eq) goto loc_8216AC4C;
loc_8216AC48:
	// twi 31,r0,22
loc_8216AC4C:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216AC60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216ac80
	if (ctx.cr6.eq) goto loc_8216AC80;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x8216ac84
	if (ctx.cr6.gt) goto loc_8216AC84;
loc_8216AC80:
	// twi 31,r0,22
loc_8216AC84:
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216aca8
	if (ctx.cr6.eq) goto loc_8216ACA8;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x8216acac
	if (ctx.cr6.gt) goto loc_8216ACAC;
loc_8216ACA8:
	// twi 31,r0,22
loc_8216ACAC:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216ACC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216ace0
	if (ctx.cr6.eq) goto loc_8216ACE0;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bgt cr6,0x8216ace4
	if (ctx.cr6.gt) goto loc_8216ACE4;
loc_8216ACE0:
	// twi 31,r0,22
loc_8216ACE4:
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216ad08
	if (ctx.cr6.eq) goto loc_8216AD08;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bgt cr6,0x8216ad0c
	if (ctx.cr6.gt) goto loc_8216AD0C;
loc_8216AD08:
	// twi 31,r0,22
loc_8216AD0C:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216AD20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216ad40
	if (ctx.cr6.eq) goto loc_8216AD40;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// bgt cr6,0x8216ad44
	if (ctx.cr6.gt) goto loc_8216AD44;
loc_8216AD40:
	// twi 31,r0,22
loc_8216AD44:
	// addi r4,r11,96
	ctx.r4.s64 = ctx.r11.s64 + 96;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216ad68
	if (ctx.cr6.eq) goto loc_8216AD68;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bgt cr6,0x8216ad6c
	if (ctx.cr6.gt) goto loc_8216AD6C;
loc_8216AD68:
	// twi 31,r0,22
loc_8216AD6C:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216AD80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216ada0
	if (ctx.cr6.eq) goto loc_8216ADA0;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x8216ada4
	if (ctx.cr6.gt) goto loc_8216ADA4;
loc_8216ADA0:
	// twi 31,r0,22
loc_8216ADA4:
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216adc8
	if (ctx.cr6.eq) goto loc_8216ADC8;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x8216adcc
	if (ctx.cr6.gt) goto loc_8216ADCC;
loc_8216ADC8:
	// twi 31,r0,22
loc_8216ADCC:
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216ADE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216ae00
	if (ctx.cr6.eq) goto loc_8216AE00;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x8216ae04
	if (ctx.cr6.gt) goto loc_8216AE04;
loc_8216AE00:
	// twi 31,r0,22
loc_8216AE04:
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216ae28
	if (ctx.cr6.eq) goto loc_8216AE28;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bgt cr6,0x8216ae2c
	if (ctx.cr6.gt) goto loc_8216AE2C;
loc_8216AE28:
	// twi 31,r0,22
loc_8216AE2C:
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216AE40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216ae60
	if (ctx.cr6.eq) goto loc_8216AE60;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bgt cr6,0x8216ae64
	if (ctx.cr6.gt) goto loc_8216AE64;
loc_8216AE60:
	// twi 31,r0,22
loc_8216AE64:
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216ae88
	if (ctx.cr6.eq) goto loc_8216AE88;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bgt cr6,0x8216ae8c
	if (ctx.cr6.gt) goto loc_8216AE8C;
loc_8216AE88:
	// twi 31,r0,22
loc_8216AE8C:
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216AEA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216aec0
	if (ctx.cr6.eq) goto loc_8216AEC0;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bgt cr6,0x8216aec4
	if (ctx.cr6.gt) goto loc_8216AEC4;
loc_8216AEC0:
	// twi 31,r0,22
loc_8216AEC4:
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216aee8
	if (ctx.cr6.eq) goto loc_8216AEE8;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bgt cr6,0x8216aeec
	if (ctx.cr6.gt) goto loc_8216AEEC;
loc_8216AEE8:
	// twi 31,r0,22
loc_8216AEEC:
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216AF00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216af20
	if (ctx.cr6.eq) goto loc_8216AF20;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplwi cr6,r10,17
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 17, ctx.xer);
	// bgt cr6,0x8216af24
	if (ctx.cr6.gt) goto loc_8216AF24;
loc_8216AF20:
	// twi 31,r0,22
loc_8216AF24:
	// addi r4,r11,136
	ctx.r4.s64 = ctx.r11.s64 + 136;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216af48
	if (ctx.cr6.eq) goto loc_8216AF48;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bgt cr6,0x8216af4c
	if (ctx.cr6.gt) goto loc_8216AF4C;
loc_8216AF48:
	// twi 31,r0,22
loc_8216AF4C:
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216AF60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216af80
	if (ctx.cr6.eq) goto loc_8216AF80;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// bgt cr6,0x8216af84
	if (ctx.cr6.gt) goto loc_8216AF84;
loc_8216AF80:
	// twi 31,r0,22
loc_8216AF84:
	// addi r4,r11,144
	ctx.r4.s64 = ctx.r11.s64 + 144;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216afa8
	if (ctx.cr6.eq) goto loc_8216AFA8;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// bgt cr6,0x8216afac
	if (ctx.cr6.gt) goto loc_8216AFAC;
loc_8216AFA8:
	// twi 31,r0,22
loc_8216AFAC:
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216AFC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216afe0
	if (ctx.cr6.eq) goto loc_8216AFE0;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// bgt cr6,0x8216afe4
	if (ctx.cr6.gt) goto loc_8216AFE4;
loc_8216AFE0:
	// twi 31,r0,22
loc_8216AFE4:
	// addi r4,r11,104
	ctx.r4.s64 = ctx.r11.s64 + 104;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216b008
	if (ctx.cr6.eq) goto loc_8216B008;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bgt cr6,0x8216b00c
	if (ctx.cr6.gt) goto loc_8216B00C;
loc_8216B008:
	// twi 31,r0,22
loc_8216B00C:
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216B020;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216b040
	if (ctx.cr6.eq) goto loc_8216B040;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// bgt cr6,0x8216b044
	if (ctx.cr6.gt) goto loc_8216B044;
loc_8216B040:
	// twi 31,r0,22
loc_8216B044:
	// addi r4,r11,112
	ctx.r4.s64 = ctx.r11.s64 + 112;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216b068
	if (ctx.cr6.eq) goto loc_8216B068;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bgt cr6,0x8216b06c
	if (ctx.cr6.gt) goto loc_8216B06C;
loc_8216B068:
	// twi 31,r0,22
loc_8216B06C:
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216B080;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,56
	ctx.r31.s64 = 56;
loc_8216B088:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216b0ac
	if (ctx.cr6.eq) goto loc_8216B0AC;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r9,r30,7
	ctx.r9.s64 = ctx.r30.s64 + 7;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8216b0b0
	if (ctx.cr6.lt) goto loc_8216B0B0;
loc_8216B0AC:
	// twi 31,r0,22
loc_8216B0B0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216b0d4
	if (ctx.cr6.eq) goto loc_8216B0D4;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x8216b0d8
	if (ctx.cr6.gt) goto loc_8216B0D8;
loc_8216B0D4:
	// twi 31,r0,22
loc_8216B0D8:
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216B0EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,88
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 88, ctx.xer);
	// bne cr6,0x8216b088
	if (!ctx.cr6.eq) goto loc_8216B088;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216b11c
	if (ctx.cr6.eq) goto loc_8216B11C;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// bgt cr6,0x8216b120
	if (ctx.cr6.gt) goto loc_8216B120;
loc_8216B11C:
	// twi 31,r0,22
loc_8216B120:
	// addi r4,r11,120
	ctx.r4.s64 = ctx.r11.s64 + 120;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216b144
	if (ctx.cr6.eq) goto loc_8216B144;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bgt cr6,0x8216b148
	if (ctx.cr6.gt) goto loc_8216B148;
loc_8216B144:
	// twi 31,r0,22
loc_8216B148:
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216B15C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216b17c
	if (ctx.cr6.eq) goto loc_8216B17C;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bgt cr6,0x8216b180
	if (ctx.cr6.gt) goto loc_8216B180;
loc_8216B17C:
	// twi 31,r0,22
loc_8216B180:
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216b1a4
	if (ctx.cr6.eq) goto loc_8216B1A4;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bgt cr6,0x8216b1a8
	if (ctx.cr6.gt) goto loc_8216B1A8;
loc_8216B1A4:
	// twi 31,r0,22
loc_8216B1A8:
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216B1BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// b 0x8216ab54
	goto loc_8216AB54;
loc_8216B1C4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826de910
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216B1D0"))) PPC_WEAK_FUNC(sub_8216B1D0);
PPC_FUNC_IMPL(__imp__sub_8216B1D0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r31,6588(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6588);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r11,5168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5168);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// beq cr6,0x8216b20c
	if (ctx.cr6.eq) goto loc_8216B20C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659610
	ctx.lr = 0x8216B20C;
	sub_82659610(ctx, base);
loc_8216B20C:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216b220
	if (ctx.cr6.eq) goto loc_8216B220;
	// bl 0x82581e38
	ctx.lr = 0x8216B220;
	sub_82581E38(ctx, base);
loc_8216B220:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,3544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82273b80
	ctx.lr = 0x8216B240;
	sub_82273B80(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216b250
	if (ctx.cr6.eq) goto loc_8216B250;
	// bl 0x82581e38
	ctx.lr = 0x8216B250;
	sub_82581E38(ctx, base);
loc_8216B250:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216b260
	if (ctx.cr6.eq) goto loc_8216B260;
	// bl 0x82581e38
	ctx.lr = 0x8216B260;
	sub_82581E38(ctx, base);
loc_8216B260:
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

__attribute__((alias("__imp__sub_8216B278"))) PPC_WEAK_FUNC(sub_8216B278);
PPC_FUNC_IMPL(__imp__sub_8216B278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826de8cc
	ctx.lr = 0x8216B280;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8216b34c
	if (ctx.cr6.eq) goto loc_8216B34C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8216b34c
	if (ctx.cr6.eq) goto loc_8216B34C;
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216B2B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216b33c
	if (ctx.cr6.eq) goto loc_8216B33C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216b33c
	if (ctx.cr6.eq) goto loc_8216B33C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216B2E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216B304;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216B320;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216b354
	if (ctx.cr6.eq) goto loc_8216B354;
	// bl 0x821601b8
	ctx.lr = 0x8216B330;
	sub_821601B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
loc_8216B33C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216b34c
	if (ctx.cr6.eq) goto loc_8216B34C;
	// bl 0x821601b8
	ctx.lr = 0x8216B34C;
	sub_821601B8(ctx, base);
loc_8216B34C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8216B354:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826de91c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216B360"))) PPC_WEAK_FUNC(sub_8216B360);
PPC_FUNC_IMPL(__imp__sub_8216B360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r11,5588
	ctx.r5.s64 = ctx.r11.s64 + 5588;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8216b278
	ctx.lr = 0x8216B390;
	sub_8216B278(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8216b3a4
	if (ctx.cr6.eq) goto loc_8216B3A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659610
	ctx.lr = 0x8216B3A4;
	sub_82659610(ctx, base);
loc_8216B3A4:
	// lwz r3,5020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5020);
	// stw r30,5020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5020, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216b3b8
	if (ctx.cr6.eq) goto loc_8216B3B8;
	// bl 0x82581e38
	ctx.lr = 0x8216B3B8;
	sub_82581E38(ctx, base);
loc_8216B3B8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216b3c8
	if (ctx.cr6.eq) goto loc_8216B3C8;
	// bl 0x82581e38
	ctx.lr = 0x8216B3C8;
	sub_82581E38(ctx, base);
loc_8216B3C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216B3E0"))) PPC_WEAK_FUNC(sub_8216B3E0);
PPC_FUNC_IMPL(__imp__sub_8216B3E0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,5020(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5020);
	// stw r10,5020(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5020, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82581e38
	sub_82581E38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216B3FC"))) PPC_WEAK_FUNC(sub_8216B3FC);
PPC_FUNC_IMPL(__imp__sub_8216B3FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216B400"))) PPC_WEAK_FUNC(sub_8216B400);
PPC_FUNC_IMPL(__imp__sub_8216B400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,5052(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5052);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216b44c
	if (ctx.cr6.eq) goto loc_8216B44C;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216b44c
	if (ctx.cr6.eq) goto loc_8216B44C;
	// bl 0x82644f18
	ctx.lr = 0x8216B434;
	sub_82644F18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,5052(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5052);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,5052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5052, ctx.r11.u32);
	// beq cr6,0x8216b44c
	if (ctx.cr6.eq) goto loc_8216B44C;
	// bl 0x82581e38
	ctx.lr = 0x8216B44C;
	sub_82581E38(ctx, base);
loc_8216B44C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216B460"))) PPC_WEAK_FUNC(sub_8216B460);
PPC_FUNC_IMPL(__imp__sub_8216B460) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r11,5604
	ctx.r6.s64 = ctx.r11.s64 + 5604;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,5596
	ctx.r5.s64 = ctx.r11.s64 + 5596;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8216b278
	ctx.lr = 0x8216B490;
	sub_8216B278(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216b4a0
	if (ctx.cr6.eq) goto loc_8216B4A0;
	// bl 0x82581e38
	ctx.lr = 0x8216B4A0;
	sub_82581E38(ctx, base);
loc_8216B4A0:
	// lwz r3,5020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5020);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216b4e8
	if (ctx.cr6.eq) goto loc_8216B4E8;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216b4e8
	if (ctx.cr6.eq) goto loc_8216B4E8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f4,5024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5024);
	ctx.f4.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f3,14088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14088);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// lfs f1,5592(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5592);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216B4E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216B4E8:
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

